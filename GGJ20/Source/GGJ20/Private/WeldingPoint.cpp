// Fill out your copyright notice in the Description page of Project Settings.


#include "WeldingPoint.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AWeldingPoint::AWeldingPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	crackMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("Crack"));
	crackMesh->AttachTo(this->RootComponent);
	
}

// Called when the game starts or when spawned
void AWeldingPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeldingPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

