// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayer.h"

// Sets default values
ABasePlayer::ABasePlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

}

// Called to bind functionality to input
void ABasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Forward", IE_Pressed, this, &ABasePlayer::MoveForward);
	PlayerInputComponent->BindAction("Back", IE_Pressed, this, &ABasePlayer::MoveBack);
	PlayerInputComponent->BindAction("Left", IE_Pressed, this, &ABasePlayer::MoveLeft);
	PlayerInputComponent->BindAction("Right", IE_Pressed, this, &ABasePlayer::MoveRight);

	PlayerInputComponent->BindAxis("RotateVertical", this, &ABasePlayer::MoveCameraVer);
	PlayerInputComponent->BindAxis("RotateHorizontal", this, &ABasePlayer::MoveCameraHor);
}

void ABasePlayer::MoveForward()
{

}

void ABasePlayer::MoveBack()
{
}

void ABasePlayer::MoveLeft()
{

}

void ABasePlayer::MoveRight()
{

}

void ABasePlayer::MoveCameraVer(float value)
{

}

void ABasePlayer::MoveCameraHor(float value)
{


}