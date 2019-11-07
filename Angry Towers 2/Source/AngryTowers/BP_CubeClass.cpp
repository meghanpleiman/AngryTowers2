// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_CubeClass.h"

// Sets default values
ABP_CubeClass::ABP_CubeClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
void ABP_CubeClass:: AddPoints(){
    TotalScore++;
}

int32 ABP_CubeClass:: GetNumberofPoints(){
    return TotalScore;
}

int32 ABP_CubeClass:: SetNumberofPoints(){
    //TotalScore += 1;
    return TotalScore + 10;
}

