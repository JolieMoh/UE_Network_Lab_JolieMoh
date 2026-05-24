// Fill out your copyright notice in the Description page of Project Settings.


#include "DataIOFunctionalLibrary.h"

bool UDataIOFunctionalLibrary::LoadStringFromFile(FString filename, FString& loadedstring)
{
	FString FullFilePath = FPaths::Combine(FPaths::ProjectContentDir(), filename);
	bool bSuccess = FFileHelper::LoadFileToString(loadedstring, *FullFilePath);

	if (bSuccess)
	{
		UE_LOG(LogTemp, Log, TEXT("Success: %s"), *FullFilePath);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed: %s"), *FullFilePath);
	}
	
	return bSuccess;
}
