// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BP_CubeClass.generated.h"

UCLASS()
class ANGRYTOWERS_API ABP_CubeClass : public AActor
{
	GENERATED_BODY()
	
    private:
        // Sets default values for this pawn's properties
        ABP_CubeClass();

        //keep track of the points earned
        UPROPERTY(EditAnywhere)
        int32 TotalScore;
        
    public:
        
        // Gets the number of points
        UFUNCTION(BlueprintPure)
        int32 GetNumberofPoints();
        
        // Sets the number of points
        UFUNCTION(BlueprintPure)
        int32 SetNumberofPoints();
        
        // Updates the score
        UFUNCTION(BlueprintCallable)
            void AddPoints();

};
