// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseOctopus.h"
#include "BasePlayer.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Engine.h"
#include "Engine/World.h"
#include "Components/BoxComponent.h"

// Sets default values
ABaseOctopus::ABaseOctopus()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	movementSpeed = 200;
	wanderCastDistance = 500;
	wanderRadius = 50;
	m_HeightChoiceDecisionTime = 5;
	m_HeightChoice = 0;
	m_HeightChoiceCounter = 0;
	boxCollider = CreateDefaultSubobject<UBoxComponent>(FName("Box Collider"));
	boxCollider->OnComponentBeginOverlap.AddDynamic(this, &ABaseOctopus::OnOverlapBegin);
	playerShip = nullptr;
}

// Called when the game starts or when spawned
void ABaseOctopus::BeginPlay()
{
	Super::BeginPlay();
	goalPos = GetActorLocation();
}

// Called every frame
void ABaseOctopus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Wander(DeltaTime);
	m_HeightChoiceCounter += DeltaTime;
	if (m_HeightChoiceCounter > m_HeightChoiceDecisionTime)
	{
		float rand = FMath::RandRange(0, 1);
		if (rand <= 0.25f)
		{
			m_HeightChoice = -400;
		}
		else if (rand <= 0.75f)
		{
			m_HeightChoice = 0;
		}
		else
		{
			m_HeightChoice = 400;
		}
		m_HeightChoiceCounter = 0;
	}
}

void ABaseOctopus::Wander(float DeltaTime)
{
	FVector vectorToWander = goalPos - GetActorLocation();
	timeSinceLastFind += DeltaTime;
	if (timeSinceLastFind < wanderFindNewPointTime && vectorToWander.Size() > 200)
	{
		vectorToWander.Normalize();
		MoveToWanderPoint(vectorToWander, DeltaTime);
	}
	else
	{
		PickWanderPoint(GetVectorToPointAroundPlayerShip());
	}
}

FVector ABaseOctopus::GetVectorOfPlayerShip()
{
	FVector playerPos = playerShip->GetActorLocation();
	return playerPos;
}

FVector ABaseOctopus::GetVectorToPlayerShip()
{
	FVector direction = GetVectorOfPlayerShip() - GetActorLocation();
	direction.Normalize();
	return direction;
}

FVector ABaseOctopus::GetVectorOfPointAroundPlayerShip()
{
	FVector playerPos = playerShip->GetActorLocation();

	float x = FMath::RandRange(shipWidth, shipWidth + wanderRadius);
	float z = FMath::RandRange(shipWidth, shipWidth + wanderRadius);
	float y = FMath::RandRange(shipLength, shipWidth + wanderRadius);
	
	FVector point;

	if (FMath::RandRange(0, 1) < 0.5f)
	{
		point = playerPos + FVector(x, y, m_HeightChoice);
	}
	else
	{
		point = playerPos + FVector(x, -y, m_HeightChoice);
	}

	return point;
}

FVector ABaseOctopus::GetVectorToPointAroundPlayerShip()
{
	FVector direction = GetVectorOfPointAroundPlayerShip() - GetActorLocation();
	return direction;
}

float ABaseOctopus::GetDistanceToPlayerShip()
{
	FVector direction = GetVectorOfPlayerShip() - GetActorLocation();
	return direction.Size();
}

void ABaseOctopus::PickWanderPoint(FVector toPlayer)
{
	goalPos = GetActorLocation() + (toPlayer * wanderCastDistance);

	timeSinceLastFind = 0;
}

void ABaseOctopus::MoveToWanderPoint(FVector vectorToWander, float DeltaTime)
{
	DrawDebugLine(GetWorld(), this->GetActorLocation(), goalPos, FColor(0, 255, 0), true);
	this->SetActorLocation(this->GetActorLocation() + (vectorToWander * movementSpeed * DeltaTime));
}

void ABaseOctopus::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	this->SetActorLocation(this->GetActorLocation() + ((goalPos - GetActorLocation()).Normalize() * (movementSpeed/2)), true);
	PickWanderPoint(GetVectorToPointAroundPlayerShip());
}