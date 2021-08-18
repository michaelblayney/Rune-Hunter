// Copyright Epic Games, Inc. All Rights Reserved.

#include "RuneHunterGameMode.h"
#include "RuneHunterPlayerController.h"
#include "RuneHunterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARuneHunterGameMode::ARuneHunterGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARuneHunterPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}