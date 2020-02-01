// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseOctopus.h"
#include "BasePlayer.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Engine.h"
#include "Engine/World.h"

// Sets default values
ABaseOctopus::ABaseOctopus()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	movementSpeed = 200;
	wanderCastDistance = 500;
	wanderRadius = 50;
	
}

// Called when the game starts or when spawned
void ABaseOctopus::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> players;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABasePlayer::StaticClass(), players);
	player = players[0];

	PickWanderPoint(GetVectorToPlayerShip());
}

// Called every frame
void ABaseOctopus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Wander(DeltaTime);
}

void ABaseOctopus::Wander(float DeltaTime)
{
	FVector vectorToWander = goalPos - GetActorLocation();
	timeSinceLastFind += DeltaTime;
	if (/*timeSinceLastFind < wanderFindNewPointTime && */vectorToWander.Size() > 200)
	{
		MoveToWanderPoint(vectorToWander, DeltaTime);
	}
	else
	{
		PickWanderPoint(GetVectorToPlayerShip());
	}
}

FVector ABaseOctopus::GetVectorOfPlayerShip()
{
	FVector playerPos = player->GetActorLocation();
	return playerPos;
}

FVector ABaseOctopus::GetVectorToPlayerShip()
{
	FVector direction = GetVectorOfPlayerShip() - GetActorLocation();
	direction.Normalize();
	return direction;
}

float ABaseOctopus::GetDistanceToPlayerShip()
{
	FVector direction = GetVectorOfPlayerShip() - GetActorLocation();
	return direction.Size();
}

void ABaseOctopus::PickWanderPoint(FVector toPlayer)
{
	/*float goalX = GetActorLocation().X + ((toPlayer.X + (GetDistanceToPlayerShip() / 500 * FMath::RandRange(-wanderRadius, wanderRadius))) * wanderCastDistance);
	float goalY = GetActorLocation().Y + ((toPlayer.Y + (GetDistanceToPlayerShip() / 500 * FMath::RandRange(-wanderRadius, wanderRadius))) * wanderCastDistance);

	goalPos = FVector(goalX, toPlayer.Z, goalY);*/
	//goalPos = GetActorLocation() + toPlayer;

	goalPos = GetVectorOfPlayerShip();

	timeSinceLastFind = 0;
}

void ABaseOctopus::MoveToWanderPoint(FVector vectorToWander, float DeltaTime)
{
	DrawDebugLine(GetWorld(), this->GetActorLocation(), vectorToWander, FColor(0, 255, 0), true);
	this->SetActorLocation(this->GetActorLocation() + (vectorToWander * movementSpeed * DeltaTime));
}