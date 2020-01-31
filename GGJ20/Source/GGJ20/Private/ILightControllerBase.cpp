// Fill out your copyright notice in the Description page of Project Settings.


#include "ILightControllerBase.h"
#include "Components/PointLightComponent.h"

// Sets default values
AILightControllerBase::AILightControllerBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_IsOn = true;
	m_LightBrightness = 100;
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
	

	if (m_IsFlashing)
	{
		m_TimeFlashing += DeltaTime;
		if (m_TimeFlashing >= m_FlashDuration)
		{
			m_IsFlashing = false;
			m_TimeFlashing = 0;
			return;
		}

		m_TimeSineLastFlash += DeltaTime;
		if (m_TimeSineLastFlash > m_FlashInterval)
		{
			m_TimeSineLastFlash = 0;
			Toggle();
		}
	}
}

void AILightControllerBase::TurnOn()
{
	m_IsOn = true;
	m_light->SetLightBrightness(m_LightBrightness);

}

void AILightControllerBase::TurnOff()
{
	m_IsOn = false;
	m_light->SetLightBrightness(0);
}

void AILightControllerBase::Flashlights(float interval, float duration)
{
	m_IsFlashing = true;
	m_FlashInterval = interval;
	m_FlashDuration = duration;
}

void AILightControllerBase::Flash(float deltaTime)
{
	if (m_IsFlashing)
	{
		m_TimeFlashing += deltaTime;
		if (m_TimeFlashing >= m_FlashDuration)
		{
			m_IsFlashing = false;
			m_TimeFlashing = 0;
			return;
		}

		m_TimeSineLastFlash += deltaTime;
		if (m_TimeSineLastFlash > m_FlashInterval)
		{
			m_TimeSineLastFlash = 0;
			Toggle();
		}
	}
}

void AILightControllerBase::Toggle()
{
	if (m_IsOn)
	{
		m_IsOn = true;
		m_light->SetLightBrightness(0);;
	}
	else
	{
		m_IsOn = true;
		m_light->SetLightBrightness(m_LightBrightness);
	}
}
