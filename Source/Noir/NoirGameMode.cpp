// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "NoirGameMode.h"
#include "NoirHUD.h"
#include "NoirCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANoirGameMode::ANoirGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANoirHUD::StaticClass();
}
