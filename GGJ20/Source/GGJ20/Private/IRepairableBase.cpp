// Fill out your copyright notice in the Description page of Project Settings.


#include "IRepairableBase.h"
#include "Public/ILightControllerBase.h"
// Sets default values
AIRepairableBase::AIRepairableBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIRepairableBase::BeginPlay()
{
	Super::BeginPlay();
	m_RepairType = RepairTypes::NOT_IMPLEMENTED;
	Break();
}

// Called every frame
void AIRepairableBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	m_TimeSinceBreak += DeltaTime;
	if (m_TimeSinceBreak > m_TimeToBreak)
	{
		Break();
	}
}

void AIRepairableBase::Break()
{
	for (auto lightController : ControlledLights)
	{
		lightController->StartFlashing(m_FlashInterval);
	}
}

RepairTypes AIRepairableBase::Repair()
{
	for (auto lightController : ControlledLights)
	{
		lightController->StopFlashing();
	}

	GenerateTimeToBreak();

	return m_RepairType;
}

void AIRepairableBase::GenerateTimeToBreak()
{
	m_TimeSinceBreak = 0;
	m_TimeToBreak = FMath::RandRange(m_MinBreakTime, m_MaxBreakTime);
}