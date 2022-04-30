#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableAutoCameraShotInfo.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableAutoCameraShotInfo : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocationLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverwriteListner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SocketName;
    
    UPROPERTY(EditAnywhere)
    float AimRelativeRate;
    
    UPROPERTY(EditAnywhere)
    float FocusPointX;
    
    UPROPERTY(EditAnywhere)
    float FocusPointY;
    
    UPROPERTY(EditAnywhere)
    float FocusPointZ;
    
    UPROPERTY(EditAnywhere)
    float RotatePitch;
    
    UPROPERTY(EditAnywhere)
    float RotateYaw;
    
    UPROPERTY(EditAnywhere)
    float RotateRoll;
    
    UPROPERTY(EditAnywhere)
    float CameraDist;
    
    UPROPERTY(EditAnywhere)
    float BlockCorrectTolerance;
    
    UPROPERTY(EditAnywhere)
    float HandShake;
    
    UPROPERTY(EditAnywhere)
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseSocketAllRotate;
    
    UPROPERTY(EditAnywhere)
    float ShotBaseDist;
    
    UPROPERTY(EditAnywhere)
    float AngleDistCorrection;
    
    UPROPERTY(EditAnywhere)
    float AngleRotateCorrection;
    
    UPROPERTY(EditAnywhere)
    float DistCorrection;
    
    UPROPERTY(EditAnywhere)
    float YawCorrection;
    
    UPROPERTY(EditAnywhere)
    float XOffsetCorrection;
    
    UPROPERTY(EditAnywhere)
    float YOffsetCorrection;
    
    UPROPERTY(EditAnywhere)
    float ZOffsetCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextShot;
    
    FEndDataTableAutoCameraShotInfo();
};

