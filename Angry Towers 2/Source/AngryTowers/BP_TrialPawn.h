// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BP_TrialPawn.generated.h"

UCLASS()
class ANGRYTOWERS_API ABP_TrialPawn : public APawn
{
	GENERATED_BODY()

private:
	// Sets default values for this pawn's properties
	ABP_TrialPawn();

    //keep track of the points earned
    int32 TotalScore;
    
public:
    
    // Gets the number of points
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberofPoints();
    
    // Sets the number of points
    UFUNCTION(BlueprintCallable,BlueprintPure)
    int32 SetNumberofPoints();
    
    // Updates the score
    UFUNCTION(BlueprintCallable)
        void AddPoints();

};
