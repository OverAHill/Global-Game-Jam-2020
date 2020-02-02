// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WinRegion.generated.h"

class UBoxComponent;

UCLASS()
class GGJ20_API AWinRegion : public AActor
{
	GENERATED_BODY()
	
protected:
	UBoxComponent* BoxCollider;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	bool hasPlayerWon;

	// Sets default values for this actor's properties
	AWinRegion();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
