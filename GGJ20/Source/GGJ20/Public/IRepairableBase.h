// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IRepairableBase.generated.h"

class AILightControllerBase;

UENUM(BlueprintType)
enum class RepairTypes : uint8
{
	NOT_IMPLEMENTED,
	HULL_REPAIR,
	GENERATOR_REPAIR,
	DEFENSE_SYSTEM_REPAIR,
	ENGINE_REPAIR,
};

UCLASS()
class GGJ20_API AIRepairableBase : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, Category = "LightController")
		float m_FlashInterval = 0.2f;

	UPROPERTY(EditAnywhere, Category = "LightController")
		float m_MinBreakTime = 1.0f;

	UPROPERTY(EditAnywhere, Category = "LightController")
		float m_MaxBreakTime = 5.0f;

	//An array of lights that are controlled by this repairable.
	UPROPERTY(EditAnywhere, Category="LightController")
		TArray<AILightControllerBase*> ControlledLights;


	// Sets default values for this actor's properties
	AIRepairableBase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Break();
	virtual RepairTypes Repair();
	virtual void SignalRepairCompleted(bool successful);

protected:
	RepairTypes m_RepairType;
	float m_TimeToBreak;
	float m_TimeSinceBreak;
	bool beingRepaired;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void GenerateTimeToBreak();

};
