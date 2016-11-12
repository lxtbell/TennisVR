// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "TennisVRHUD.generated.h"

UCLASS()
class ATennisVRHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATennisVRHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

