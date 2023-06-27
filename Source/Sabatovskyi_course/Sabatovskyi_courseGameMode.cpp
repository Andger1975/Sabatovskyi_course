// Copyright Epic Games, Inc. All Rights Reserved.

#include "Sabatovskyi_courseGameMode.h"
#include "Sabatovskyi_courseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASabatovskyi_courseGameMode::ASabatovskyi_courseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
