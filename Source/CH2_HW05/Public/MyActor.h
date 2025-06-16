// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class CH2_HW05_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

private:
	FVector3d start;
	int32 evCnt = 0;     //ÃÑ ÀÌº¥Æ® ¹ß»ý È½¼ö
	int totDist;     //ÃÑ ÀÌµ¿°Å¸®
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int32_t step() {

		return rand() % 2;
	};

	float distance(FVector3d first, FVector3d second) {

		float dx = first.X - second.X;
		float dy = first.Y - second.Y;

		return FMath::Sqrt((dx * dx) + (dy * dy));
	};

	void createEvent() {
		int event = rand() % 2;

		if (event == 1) {
			UE_LOG(LogTemp, Warning, TEXT("Event Occurs!!!!!!"));
			evCnt += 1;
		}
	};

	void move() {
			
		start.X += step();
		start.Y += step();

		UE_LOG(LogTemp, Warning, TEXT("X : %f,  Y : %f"), start.X, start.Y);
		createEvent();
		
	};

	int getEvCnt() {
		return evCnt;
	}

};
