// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaylibPCGMapBPLibrary.h"
#include "RaylibPCGMap.h"

URaylibPCGMapBPLibrary::URaylibPCGMapBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float URaylibPCGMapBPLibrary::RaylibPCGMapSampleFunction(float Param)
{
	return -1;
}

void URaylibPCGMapBPLibrary::GenerateRandomWalk(int Steps) 
{
   
}

void URaylibPCGMapBPLibrary::GenerateCellularAutomata(int Iterations)
{
    
}

void URaylibPCGMapBPLibrary::ClearGrid()
{

}

void URaylibPCGMapBPLibrary::Regenerate()
{
    GenerateCellularAutomata(5);
}