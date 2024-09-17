// Copyright Epic Games, Inc. All Rights Reserved.

#include "EpochsOfAscensionGameMode.h"
#include "EpochsOfAscensionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEpochsOfAscensionGameMode::AEpochsOfAscensionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_Explorer"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
