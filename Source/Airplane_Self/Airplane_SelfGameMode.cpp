// Copyright Epic Games, Inc. All Rights Reserved.

#include "Airplane_SelfGameMode.h"
#include "Airplane_SelfCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAirplane_SelfGameMode::AAirplane_SelfGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
