// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILightControllerBase.generated.h"

class UPointLightComponent;

UCLASS()
class GGJ20_API AILightControllerBase : public AActor
{
	GENERATED_BODY()
	

protected:
	bool m_IsOn;
	bool m_IsFlashing;
	float m_FlashInterval;
	float m_FlashDuration;
	float m_TimeSineLastFlash;
	float m_TimeFlashing;
	float m_LightBrightness;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void Flash(float deltaTime);


public:	
	UPROPERTY(EditAnywhere, Category = "Lights")
		UPointLightComponent* m_light;

	// Sets default values for this actor's properties
	AILightControllerBase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	void Flashlights(float interval, float duration);
	void TurnOff();
	void TurnOn();
	void Toggle();

};
