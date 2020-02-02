// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IRepairableBase.h"
#include "EngineRepairable.generated.h"

class AWeldingPoint;
/**
 * 
 */
UCLASS()
class GGJ20_API AEngineRepairable : public AIRepairableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<AWeldingPoint*> weldingPoints;

	AEngineRepairable();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Break() override;
	virtual RepairTypes Repair() override;
	virtual void SignalRepairCompleted(bool successful) override;
	float CountVisibleMeshes();

	UPROPERTY(EditAnywhere, BlueprintReadwrite)
	bool visibleTing;
};