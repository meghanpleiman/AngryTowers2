// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_TrialPawn.h"

// Sets default values
ABP_TrialPawn::ABP_TrialPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
void ABP_TrialPawn:: AddPoints(){
    TotalScore++;
}

int32 ABP_TrialPawn:: GetNumberofPoints(){
    return TotalScore;
}

int32 ABP_TrialPawn:: SetNumberofPoints(){
    //TotalScore += 1;
    return TotalScore + 10;
}


