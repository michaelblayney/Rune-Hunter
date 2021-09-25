// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//include std
#include <stdlib.h>
//include project
#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "PowerUp.generated.h"

/**
 * Represents a power up, is also an interactable actor.
 */
UCLASS()
class RUNEHUNTER_API APowerUp : public AInteractableActor
{
	GENERATED_BODY()

public:
	/**
	* Is used to choose a random different ability, it was easier to do in c++ than in blueprints
	**/
	UFUNCTION(BlueprintCallable, Category = "PowerUp")
	int getRandPowerUp(int current);
	
};
