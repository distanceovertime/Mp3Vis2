// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Mp3Vis2HUD.generated.h"

UCLASS()
class AMp3Vis2HUD : public AHUD
{
	GENERATED_BODY()

public:
	AMp3Vis2HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

