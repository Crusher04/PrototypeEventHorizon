// Copyright Epic Games, Inc. All Rights Reserved.

#include "EventHorizonGameMode.h"
#include "EventHorizonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEventHorizonGameMode::AEventHorizonGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
