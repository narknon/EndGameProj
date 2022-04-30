#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndFieldCameraOverrideParam.generated.h"

USTRUCT(BlueprintType)
struct FEndFieldCameraOverrideParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFOV;
    
    UPROPERTY(EditAnywhere)
    float OverrideFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDistance;
    
    UPROPERTY(EditAnywhere)
    float OverrideDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddAimHeight;
    
    UPROPERTY(EditAnywhere)
    float AddAimHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator OverrideRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFollowInverseSpeed;
    
    UPROPERTY(EditAnywhere)
    float OverrideFollowInverseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLocationInverseSpeed;
    
    UPROPERTY(EditAnywhere)
    float OverrideLocationInverseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAimOffsetY;
    
    UPROPERTY(EditAnywhere)
    float OverrideAimOffsetY;
    
    ENDGAME_API FEndFieldCameraOverrideParam();
};

