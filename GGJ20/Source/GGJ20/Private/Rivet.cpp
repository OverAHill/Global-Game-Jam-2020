// Fill out your copyright notice in the Description page of Project Settings.


#include "Rivet.h"
#include "Components/SphereComponent.h"

// Sets default values
ARivet::ARivet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	rCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Rivet Collider"));
	rCollider->SetVisibility(true);
	rCollider->SetHiddenInGame(false);
}

// Called when the game starts or when spawned
void ARivet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARivet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

    