// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Aura.generated.h"

UCLASS()
class RUNEHUNTER_API AAura : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAura();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, Category = Aura)
		UStaticMeshComponent* AuraMeshComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Aura)
		USphereComponent* AuraCollisionComponent;
};
