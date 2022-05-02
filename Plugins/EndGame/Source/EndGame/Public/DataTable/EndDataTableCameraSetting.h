#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCameraSetting.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCameraSetting : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BeginBlendTime;
    
    UPROPERTY(EditAnywhere)
    uint8 BeginBlendType;
    
    UPROPERTY(EditAnywhere)
    float EndBlendTime;
    
    UPROPERTY(EditAnywhere)
    uint8 EndBlendType;
    
    UPROPERTY(EditAnywhere)
    float FOV;
    
    UPROPERTY(EditAnywhere)
    float Distance;
    
    UPROPERTY(EditAnywhere)
    float Height;
    
    UPROPERTY(EditAnywhere)
    float AimOffsetX;
    
    UPROPERTY(EditAnywhere)
    float AimOffsetY;
    
    UPROPERTY(EditAnywhere)
    float AimOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float SpaceOffsetRun;
    
    UPROPERTY(EditAnywhere)
    float SpaceOffsetRunSpeed;
    
    UPROPERTY(EditAnywhere)
    float SpaceOffsetDash;
    
    UPROPERTY(EditAnywhere)
    float SpaceOffsetDashSpeed;
    
    UPROPERTY(EditAnywhere)
    float ResetPitch;
    
    UPROPERTY(EditAnywhere)
    float MoveAddDistance;
    
    UPROPERTY(EditAnywhere)
    float MoveAddDistanceSpeed;
    
    FEndDataTableCameraSetting();
};

