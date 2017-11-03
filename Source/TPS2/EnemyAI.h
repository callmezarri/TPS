// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAI.generated.h"

/**
 * 
 */
UCLASS()
class TPS2_API AEnemyAI : public AAIController
{
	GENERATED_BODY()

	UPROPERTY(transient)
		class UBlackboardComponent *BlackboardCom;
	
	UPROPERTY(transient)
		class UBehaviorTreeComponent *BehaviorCom;
	
	
public:

	AEnemyAI();

	virtual void Possess(APawn *InPawn) override;

};
