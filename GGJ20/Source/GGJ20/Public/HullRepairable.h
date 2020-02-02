// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IRepairableBase.h"
#include "HullRepairable.generated.h"

//class USphereComponent;
class AWaterLevel;
class ARivet;

/**
 * 
 */
UCLASS()
class GGJ20_API AHullRepairable : public AIRepairableBase
{
	GENERATED_BODY()

public:
	AHullRepairable();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Break() override;
	virtual RepairTypes Repair() override;
	virtual void SignalRepairCompleted(bool successful) override;

	// 4 rivets
	UPROPERTY(VisibleAnywhere, BlueprintReadwrite)
	TArray<ARivet*> Rivets;

	float horizontalLength;
	float verticalHeight;
	int amountOfFixedRivets = 4;

	virtual void GenerateRivets();

	UPROPERTY(EditAnywhere)
		AWaterLevel* refWaterLevel;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Mini-Games")
		int HitRivets(ARivet* hitRivet);
		
protected:
	UPROPERTY(EditAnywhere, BlueprintReadwrite)
		ARivet* ULRivet;
	UPROPERTY(EditAnywhere, BlueprintReadwrite)
		ARivet* URRivet;
	UPROPERTY(EditAnywhere, BlueprintReadwrite)
		ARivet* LLRivet;
	UPROPERTY(EditAnywhere, BlueprintReadwrite)
		ARivet* LRRivet;
};
