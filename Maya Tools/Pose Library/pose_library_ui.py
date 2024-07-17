import sys
import os

from functools import partial

import maya.cmds as cmds
import maya.OpenMayaUI as omui
import maya.OpenMaya as om
from maya.app.general.mayaMixin import MayaQWidgetDockableMixin

from shiboken6 import wrapInstance

from PySide6 import QtCore
from PySide6 import QtGui
from PySide6 import QtWidgets

from pose_library import PoseLibrary
from pose_library_io_utility import PoseLibraryIOUtility
from pose_library_data import PoseData

def maya_main_window():
    main_window_ptr = omui.MQtUtil.mainWindow()
    
    # Account for system versions
    if sys.version_info.major >= 3:
        return wrapInstance(int(main_window_ptr), QtWidgets.QWidget)
    else:
        return wrapInstance(long(main_window_ptr), QtWidgets.QWidget)

class NewFolderDialog(QtWidgets.QDialog):
    
    def __init__(self, pose_library_window, parent=maya_main_window()):
        super(NewFolderDialog, self).__init__(parent)
        
        self.pose_library_window = pose_library_window
        
        self.setWindowTitle("New Folder")
        self.setMinimumSize(300, 115)
        self.setMaximumSize(300, 115)
        
        self.create_widgets()
        self.create_layouts()
        
    def create_widgets(self):
        # Folder name widgets
        self.folder_name_label = QtWidgets.QLabel("Folder Name")
        self.folder_name_line_edit = QtWidgets.QLineEdit("New Folder")
        
        # Button widgets
        self.confirm_btn = QtWidgets.QPushButton("Confirm")
        self.confirm_btn.clicked.connect(self.create_new_folder)
        self.cancel_btn = QtWidgets.QPushButton("Cancel")
        self.cancel_btn.clicked.connect(self.close)
        
    def create_layouts(self):
        main_layout = QtWidgets.QVBoxLayout(self)
        main_layout.setContentsMargins(10, 10, 10, 10)
        
        main_layout.addWidget(self.folder_name_label)
        main_layout.addWidget(self.folder_name_line_edit)
        
        btn_layout = QtWidgets.QHBoxLayout()
        btn_layout.stretch(True)
        btn_layout.addWidget(self.confirm_btn)
        btn_layout.addWidget(self.cancel_btn)
        
        main_layout.addLayout(btn_layout)
        
    def create_new_folder(self):
        new_folder_name = self.folder_name_line_edit.text()
        folder_path = os.path.join(PoseLibraryIOUtility.root_folder_path, new_folder_name)
        PoseLibraryIOUtility.create_folder(folder_path)
        self.pose_library_window.refresh_hierarchy()
        
        self.close()
        
class SavePoseDialog(QtWidgets.QDialog):
    
    def __init__(self, pose_library_window, parent=maya_main_window()):
        super(SavePoseDialog, self).__init__(parent)
        
        self.pose_library_window = pose_library_window
        
        self.setWindowTitle("Save Pose")
        self.setMinimumSize(300, 115)
        self.setMaximumSize(300, 115)
        
        self.create_widgets()
        self.create_layouts()
        
    def create_widgets(self):
        # Folder name widgets
        self.pose_name_label = QtWidgets.QLabel("Pose Name")
        self.pose_name_line_edit = QtWidgets.QLineEdit("New Pose")
        
        # Button widgets
        self.confirm_btn = QtWidgets.QPushButton("Confirm")
        self.confirm_btn.clicked.connect(self.save_pose)
        self.cancel_btn = QtWidgets.QPushButton("Cancel")
        self.cancel_btn.clicked.connect(self.close)
        
    def create_layouts(self):
        main_layout = QtWidgets.QVBoxLayout(self)
        main_layout.setContentsMargins(10, 10, 10, 10)
        
        main_layout.addWidget(self.pose_name_label)
        main_layout.addWidget(self.pose_name_line_edit)
        
        btn_layout = QtWidgets.QHBoxLayout()
        btn_layout.stretch(True)
        btn_layout.addWidget(self.confirm_btn)
        btn_layout.addWidget(self.cancel_btn)
        
        main_layout.addLayout(btn_layout)
        
    def save_pose(self):
        # Tell the PoseLibrary to save the pose
        pose_name = self.pose_name_line_edit.text()
        self.pose_library_window.save_pose(pose_name)
        
        self.close()

class PoseLibraryWindow(MayaQWidgetDockableMixin, QtWidgets.QMainWindow):
    
    def __init__(self, parent=maya_main_window()):
        super(PoseLibraryWindow, self).__init__(parent)
        
        PoseLibraryIOUtility.create_static_folders()
        
        self.setWindowTitle("Pose Library")
        self.setMinimumSize(300,200)
        
        self.create_widgets()
        self.create_layouts()
        
    def create_widgets(self):
        self.toolbar = self.addToolBar("Toolbar")
        self.toolbar.toggleViewAction().setEnabled(False)
        
        self.save_pose_action = QtGui.QAction(QtGui.QIcon(), "Save Pose", self)
        self.save_pose_action.triggered.connect(self.open_save_pose_dialog)
        self.toolbar.addAction(self.save_pose_action)   
        
        self.create_hierarchy_widgets()
        self.create_content_widgets()
        
    # Create Tree Hierarchy Widgets
    def create_hierarchy_widgets(self):
        self.hierarchy_area = QtWidgets.QWidget()
        
        # Create Hierarchy TreeView & StandardItemModel
        self.hierarchy_tree = QtWidgets.QTreeView()
        self.hierarchy_model = QtGui.QStandardItemModel()
        self.hierarchy_model.setHorizontalHeaderLabels(["Workspace/PoseLibrary"])
        self.hierarchy_tree.setModel(self.hierarchy_model)
        
        self.hierarchy_tree.selectionModel().selectionChanged.connect(self.update_selected_folder)
        self.refresh_hierarchy()
        
        # Create Hierarchy Tree Buttons
        self.new_folder_btn = QtWidgets.QPushButton("F")
        self.new_folder_btn.clicked.connect(self.open_new_folder_dialog)
        
    def create_content_widgets(self):
        self.content_widget = QtWidgets.QWidget()
        
        self.content_area = QtWidgets.QScrollArea()
        self.content_area.setWidget(self.content_widget)
        self.content_area.setWidgetResizable(True)    
        
    def create_layouts(self):
        splitter = QtWidgets.QSplitter(QtCore.Qt.Horizontal)
        self.setCentralWidget(splitter)
        
        # Create Hierarchy Area for Splitter - Contains the Folder Hierarchy
        hierarchy_layout = QtWidgets.QVBoxLayout()
        self.hierarchy_area.setLayout(hierarchy_layout)
        
        hierarchy_toolbar_layout = QtWidgets.QHBoxLayout()
        hierarchy_toolbar_layout.addWidget(self.new_folder_btn)
        
        hierarchy_layout.addLayout(hierarchy_toolbar_layout)
        hierarchy_layout.addWidget(self.hierarchy_tree)        
        
        # Create the Content Area for Splitter - Contains Folder Content
        self.content_layout = QtWidgets.QGridLayout()
        self.content_widget.setLayout(self.content_layout)
        
        splitter.addWidget(self.hierarchy_area)
        splitter.addWidget(self.content_area)
    
    def open_new_folder_dialog(self):
        try:
            self.new_folder_dialog.close()
            self.new_folder_dialog.deleteLater()
        except:
            pass
            
        self.new_folder_dialog = NewFolderDialog(self)
        self.new_folder_dialog.show()
        
    def open_save_pose_dialog(self):
        try:
            self.save_pose_dialog.close()
            self.save_pose_dialog.deleteLater()
        except:
            pass
            
        self.save_pose_dialog = SavePoseDialog(self)
        self.save_pose_dialog.show()
    
    def add_to_hierarchy(self, hierarchy_parent, hierarchy_item):
        hierarchy_parent.appendRow(hierarchy_item)
        
    def create_hierarchy_item(self, text, editable=False):
        # Create Hierarchy Item
        hierarchy_item = QtGui.QStandardItem(text)
        hierarchy_item.setEditable(editable)
        
        return hierarchy_item
        
    def update_selected_folder(self, selected, deselected):
        # Get the data of the first selected item
        selected_indexes = selected.indexes()
        if selected_indexes:
            selected_item = selected_indexes[0].data()
            
            # Update the PoseLibrary's selected_folder
            PoseLibrary.update_selected_folder(selected_item)
            
        # Update the content UI
        self.refresh_content_layout()
        
    def refresh_hierarchy(self):
        self.hierarchy_model.clear()
        self.hierarchy_model.setHorizontalHeaderLabels(["Workspace/PoseLibrary"])
        
        PoseLibraryIOUtility.load_folders_to_hierarchy(self, self.hierarchy_model, PoseLibraryIOUtility.root_folder_path)
        
    def refresh_content_layout(self):
        # Clear Content Layout
        while self.content_layout.count():
            item = self.content_layout.takeAt(0)
            if item is not None:
                item.widget().deleteLater()
            item = None
            
        # Add new poses to content layout
        for pose_name, pose_data in PoseLibrary.poses.items():
            self.create_content_button(pose_name, pose_data)
        
    def create_content_button(self, pose_name="", pose_data=PoseData()):
        button = QtWidgets.QPushButton(pose_name)
        button.clicked.connect(partial(PoseLibrary.load_pose_to_rig, pose_data))
        self.content_layout.addWidget(button)
        
    # Is called when the "Save Pose" button in the tool bar is pressed
    def save_pose(self, pose_name):
        selection = cmds.ls(selection=True, uuid=True)
        pose_path = PoseLibraryIOUtility.folders[PoseLibrary.selected_folder]
        PoseLibraryIOUtility.save_pose_data(PoseData(selection), pose_path, pose_name)
        
        # Refresh the selected folder's contents
        PoseLibrary.update_selected_folder(PoseLibrary.selected_folder)
        self.refresh_content_layout()
        
        
if __name__ == "__main__":
    try:
        pose_library_ui.close()
        pose_library_ui.deleteLater()
    except:
        pass
        
    pose_library_ui = PoseLibraryWindow()
    pose_library_ui.show(dockable=True)