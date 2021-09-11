// Fill out your copyright notice in the Description page of Project Settings.


#include "Aura.h"

// Sets default values
AAura::AAura()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!AuraCollisionComponent) {
		AuraCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("AuraComponent"));
		AuraCollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("Aura"));
		AuraCollisionComponent->InitSphereRadius(15.0f);
		RootComponent = AuraCollisionComponent;
	}

	if (!AuraMeshComponent) {
		AuraMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

		static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/Abilities/basicSphere.basicSphere'"));	//default mesh
		if (Mesh.Succeeded()) {
			AuraMeshComponent->SetStaticMesh(Mesh.Object);
		}
		AuraMeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		AuraMeshComponent->SetupAttachment(RootComponent);
	}
}

// Called when the game starts or when spawned
void AAura::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAura::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

