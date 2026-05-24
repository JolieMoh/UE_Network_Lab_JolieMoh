// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataIOFunctionalLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UE_NETWORK_LAB_API UDataIOFunctionalLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable)
	static bool LoadStringFromFile(FString filename, FString& loadedstring);
};
