#pragma once

#include "Engine/DataAsset.h"
#include "FGPlayerSettings.generated.h"

UCLASS()
class NETWORKINGCOURSE_API UFGPlayerSettings : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = Movement)
	float Acceleration = 500.f;

	UPROPERTY(EditAnywhere, Category = Movement, meta = (DisplayName = "TurnSpeed"))
	float TurnSpeedDefault = 100.f;

	UPROPERTY(EditAnywhere, Category = Movement)
	float MaxVelocity = 2000.f;

	UPROPERTY(EditAnywhere, Category = Movement, meta = (ClampMin = 0.0, ClampMax = 1.0))
	float Friction = 0.75f;

	UPROPERTY(EditAnywhere, Category = Movement, meta = (ClampMin = 0.0, ClampMax = 1.0))
	float BrakingFriction = 0.001f;
};