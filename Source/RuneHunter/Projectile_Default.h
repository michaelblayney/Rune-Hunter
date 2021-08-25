// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Projectile_Default.generated.h"

UCLASS()
class RUNEHUNTER_API AProjectile_Default : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile_Default();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//TODO: possibly make this editable in blueprints
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	UStaticMeshComponent* ProjMeshComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
		USphereComponent* ProjCollisionComponent;

	UPROPERTY(BlueprintReadWrite, Category = Movement)
	UProjectileMovementComponent* ProjMoveComponent;
};
