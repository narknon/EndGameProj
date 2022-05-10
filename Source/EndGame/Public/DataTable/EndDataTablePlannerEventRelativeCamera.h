#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTablePlannerEventRelativeCamera.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTablePlannerEventRelativeCamera : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainTargetName;
    
    UPROPERTY(EditAnywhere)
    float MainTargetOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubTargetName;
    
    UPROPERTY(EditAnywhere)
    float SubTargetOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float RotatePitch;
    
    UPROPERTY(EditAnywhere)
    float RotateYaw;
    
    UPROPERTY(EditAnywhere)
    float RelativeRate;
    
    UPROPERTY(EditAnywhere)
    float RelativeZRate;
    
    UPROPERTY(EditAnywhere)
    float CameraDist;
    
    UPROPERTY(EditAnywhere)
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayTime;
    
    FEndDataTablePlannerEventRelativeCamera();
};

