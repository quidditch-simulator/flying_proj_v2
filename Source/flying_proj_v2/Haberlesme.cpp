// Fill out your copyright notice in the Description page of Project Settings.


#include "Haberlesme.h"

FString UHaberlesme::GetGyro(int gyro_x, int gyro_y, int gyro_z)
{
	return (FString::Printf(TEXT("X = %d, Y = %d, Z = %d"), gyro_x, gyro_y, gyro_z));
}