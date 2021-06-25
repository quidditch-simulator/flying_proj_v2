// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Haberlesme.generated.h"

/**
 * 
 */
UCLASS()
class FLYING_PROJ_V2_API UHaberlesme : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	static FString GetGyro(int gyro_x, int gyro_y, int gyro_z);
};
