// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "TennisVR.h"
#include "TennisVRGameMode.h"
#include "TennisVRHUD.h"
#include "TennisVRCharacter.h"

ATennisVRGameMode::ATennisVRGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATennisVRHUD::StaticClass();
}
