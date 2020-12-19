// Copyright Epic Games, Inc. All Rights Reserved.

#include "SurvivorSandboxGameMode.h"
#include "SurvivorSandboxCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASurvivorSandboxGameMode::ASurvivorSandboxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
