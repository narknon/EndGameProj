#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "EndAnimVehicleWheel.h"
#include "ESuspensionAxisType.h"
#include "EndAnimVehicleLinearSuspension.generated.h"

USTRUCT(BlueprintType)
struct FEndAnimVehicleLinearSuspension {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TranslationLimit;
    
    UPROPERTY(EditAnywhere)
    float Mass;
    
    UPROPERTY(EditAnywhere)
    float Stiffness;
    
    UPROPERTY(EditAnywhere)
    FBoneReference SuspensionBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAnimVehicleWheel Wheel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESuspensionAxisType> MovementAxis;
    
    ENDGAME_API FEndAnimVehicleLinearSuspension();
};

