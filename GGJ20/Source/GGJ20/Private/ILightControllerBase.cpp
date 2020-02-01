// Fill out your copyright notice in the Description page of Project Settings.


#include "ILightControllerBase.h"
#include "Components/PointLightComponent.h"

// Sets default values
AILightControllerBase::AILightControllerBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_IsOn = true;
	m_light = CreateDefaultSubobject<UPointLightComponent>(FName("Light"));
}

// Called when the game starts or when spawned
void AILightControllerBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AILightControllerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	Flash(DeltaTime);
}

void AILightControllerBase::StartFlashing(float interval)
{
	m_IsFlashing = true;
	m_FlashInterval = interval;
}

void AILightControllerBase::StopFlashing()
{
	m_IsFlashing = false;
}

void AILightControllerBase::Flash(float DeltaTime)
{
	if (m_IsFlashing)
	{
		m_TimeSineLastFlash += DeltaTime;
		if (m_TimeSineLastFlash > m_FlashInterval)
		{
			m_TimeSineLastFlash = 0;
			if (m_IsOn)
			{
				m_IsOn = false;
				TurnOff();
			}
			else
			{
				m_IsOn = true;
				TurnOn();
			}
		}
	}
}

void AILightControllerBase::Toggle()
{
	
}
