#pragma once
#include "CoreMinimal.h"
#include "EndCameraRail.h"
#include "EndCameraOnlyRail.generated.h"

UCLASS(Blueprintable)
class AEndCameraOnlyRail : public AEndCameraRail {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AimOffset;
    
    UPROPERTY(EditAnywhere)
    float CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AimSocketName;
    
    UPROPERTY(EditAnywhere, SkipSerialization)
    float CurrentCameraWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool ShowCameraPosition;
    
    UPROPERTY(EditAnywhere)
    float StartPointMargin;
    
    UPROPERTY(EditAnywhere)
    float EndPointMargin;
    
    UPROPERTY(EditAnywhere)
    float CameraMoveThreshold;
    
    UPROPERTY(EditAnywhere)
    TArray<float> AimOffsets;
    
    UPROPERTY(EditAnywhere)
    TArray<float> CameraOffsets;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> CollisionIgnoreAngles;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> MoveDistanceForBlends;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> OrerrideFOVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCollisionCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseForceConnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartEndPointOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoostAimFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceCutBlend;
    
    AEndCameraOnlyRail();
};

