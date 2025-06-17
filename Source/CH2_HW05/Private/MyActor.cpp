// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	start = FVector3d(0, 0, 0);
	int i = 0;

	while (i < 10) {
		UE_LOG(LogTemp, Warning, TEXT("Step %d."), i);
		move();
		i++;
	}
	
	FVector3d tmp(0, 0, 0);
	UE_LOG(LogTemp, Warning, TEXT("=================================="));
	UE_LOG(LogTemp, Warning, TEXT("Total Distance : %f"), distance(tmp, start));
	UE_LOG(LogTemp, Warning, TEXT("Total Events Count : %d"), getEvCnt());
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

