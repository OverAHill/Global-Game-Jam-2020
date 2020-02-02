// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IRepairableBase.h"
#include "DefenseSystemRepairable.generated.h"

class UStaticMeshComponenent;
/**
 * 
 */
UCLASS()
class GGJ20_API ADefenseSystemRepairable : public AIRepairableBase
{
	GENERATED_BODY()

public:
	ADefenseSystemRepairable();

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Needle Spin")
		UStaticMeshComponent* NeedleMesh;

	virtual void Tick(float DeltaTime) override;
	virtual void Break() override;
	virtual RepairTypes Repair() override;
	virtual void SignalRepairCompleted(bool successful) override;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Needle Spin")
	float needlePosition = 0.0f;

	bool posDir = true;
	float minPos;
	float maxPos;

	void UpdateNeedle(float deltaTime);
	void SetSuccRegion(float min, float max);

	bool HammerDown();
};
