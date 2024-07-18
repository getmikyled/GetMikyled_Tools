import sys
import os

import maya.cmds as cmds

from pose_library import PoseLibrary
from pose_library_data import PoseData
from pose_library_data import ControlNodeData

class PoseLibraryIOUtility(object):

    root_folder_path = ""

    RIG_CAPTURE_WIDTH = 500
    RIG_CAPTURE_HEIGHT = 400

    folders = {}
    
    @classmethod
    def create_static_folders(cls):
        pass
        
    @classmethod
    def create_folder(folder_path):
        pass
        
    @classmethod
    def save_pose_data(cls, pose_data : PoseData, pose_path, pose_name):
        pass
    
    @classmethod
    def get_poses_at_path(cls):
        pass
        
    @classmethod
    def load_folders_to_hierarchy(cls, pose_library_window, directory, newFolders):
        pass
        
    @classmethodd
    def capture_rig_image(cls, rig_capture_path, rig_capture_name):
        pass