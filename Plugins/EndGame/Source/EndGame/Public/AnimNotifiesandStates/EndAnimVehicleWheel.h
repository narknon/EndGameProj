#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "EndAnimVehicleWheel.generated.h"

USTRUCT(BlueprintType)
struct FEndAnimVehicleWheel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float WheelRadius;
    
    UPROPERTY(EditAnywhere)
    float WheelRotation;
    
    UPROPERTY(EditAnywhere)
    float GroundHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationAxis;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BoneReference;
    
    UPROPERTY(EditAnywhere)
    float MaxAngularSpeed;
    
    ENDGAME_API FEndAnimVehicleWheel();
};

