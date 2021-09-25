// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//include std
#include <stdlib.h>
//include project
#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "PowerUp.generated.h"

/**
 * 
 */
UCLASS()
class RUNEHUNTER_API APowerUp : public AInteractableActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "PowerUp")
	int getRandPowerUp(int current);
	
};
