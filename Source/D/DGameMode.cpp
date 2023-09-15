// Copyright Epic Games, Inc. All Rights Reserved.

#include "DGameMode.h"
#include "DCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADGameMode::ADGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
