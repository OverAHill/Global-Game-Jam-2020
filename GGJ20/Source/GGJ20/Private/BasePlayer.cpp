// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayer.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ABasePlayer::ABasePlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CurrentVelocity = FVector(0, 0, 0);

	PlayerFirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	PlayerFirstPersonCamera->SetupAttachment(this->GetRootComponent());
	PlayerFirstPersonCamera->SetRelativeLocation(FVector(0.0f, 0.0f, 30.0f));
}

// Called when the game starts or when spawned
void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Rotate
	FTransform t = PlayerFirstPersonCamera->GetRelativeTransform();
	FRotator r = t.GetRotation().Rotator();		//clamp me daddy
	//r.Yaw = FMath::Clamp(r.Yaw + CurrentRotation.X, -70.0f, 70.0f);
	r.Yaw += CurrentRotation.X;
	r.Pitch = FMath::Clamp(r.Pitch + CurrentRotation.Y, -60.0f, 60.0f);
	PlayerFirstPersonCamera->SetRelativeRotation(FRotator(r.Pitch, r.Yaw, 0));


	//Move
	AddMovementInput(PlayerFirstPersonCamera->GetForwardVector(), CurrentVelocity.Y * DeltaTime);
	AddMovementInput(PlayerFirstPersonCamera->GetRightVector(), CurrentVelocity.X * DeltaTime);
}

// Called to bind functionality to input
void ABasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward", this, &ABasePlayer::MoveForward);
	PlayerInputComponent->BindAxis("Right", this, &ABasePlayer::MoveRight);

	PlayerInputComponent->BindAxis("RotateVertical", this, &ABasePlayer::MoveCameraVer);
	PlayerInputComponent->BindAxis("RotateHorizontal", this, &ABasePlayer::MoveCameraHor);
}

void ABasePlayer::MoveForward(float value)
{
	CurrentVelocity.Y = 100 * value;
}


void ABasePlayer::MoveRight(float value)
{
	CurrentVelocity.X = 100 * value;// 
}

void ABasePlayer::MoveCameraVer(float value)
{
	CurrentRotation.Y = value;
}

void ABasePlayer::MoveCameraHor(float value)
{
	CurrentRotation.X = value;
}