// Fill out your copyright notice in the Description page of Project Settings.

#include "AlphaOmega.h"
#include "Spawnable.h"



// Sets default values
ASpawnable::ASpawnable()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ASpawnable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawnable::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Updates the spawned position
void ASpawnable::SetSpawnedPosition(FVector NewSpawnedPosition) {
	SpawnedPosition = NewSpawnedPosition;
}

ENodeSize ASpawnable::GetNodeSize() const {
	return NodeSize;
}