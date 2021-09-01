// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile_Default.h"

// Sets default values
AProjectile_Default::AProjectile_Default()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!ProjCollisionComponent) {
		ProjCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
		ProjCollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("Projectile"));
		ProjCollisionComponent->InitSphereRadius(15.0f);
		//ProjCollisionComponent->SetupAttachment(RootComponent);
		RootComponent = ProjCollisionComponent;
	}

	if (!ProjMeshComponent) {
		ProjMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

		static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
		if (Mesh.Succeeded()) {
			ProjMeshComponent->SetStaticMesh(Mesh.Object);
		}
		ProjMeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		ProjMeshComponent->SetupAttachment(RootComponent);
	}

	if (!ProjMoveComponent) {
		ProjMoveComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovementComponent"));
		ProjMoveComponent->SetUpdatedComponent(ProjCollisionComponent);
		ProjMoveComponent->InitialSpeed = 3000.0f;
		ProjMoveComponent->MaxSpeed = 3000.0f;
		ProjMoveComponent->bShouldBounce = false;
		ProjMoveComponent->bRotationFollowsVelocity = true;
		ProjMoveComponent->ProjectileGravityScale = 0.0f;

	}

	InitialLifeSpan = 3.0f;
}

// Called when the game starts or when spawned
void AProjectile_Default::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectile_Default::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

