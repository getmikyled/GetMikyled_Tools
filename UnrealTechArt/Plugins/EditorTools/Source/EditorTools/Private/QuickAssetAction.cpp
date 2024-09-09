// Fill out your copyright notice in the Description page of Project Settings.


#include "QuickAssetAction.h"
#include "DebugHeader.h"

void UQuickAssetAction::PrintFunc()
{
	Print(TEXT("WORKING"), FColor::Cyan);
	PrintLog(TEXT("WORKING IN LOG"));
}
