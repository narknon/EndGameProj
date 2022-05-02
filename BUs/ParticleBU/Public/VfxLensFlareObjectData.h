#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VfxLensFlareObjectData.generated.h"

USTRUCT(BlueprintType)
struct FVfxLensFlareObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourceParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iDrawCount;
    
    UPROPERTY(EditAnywhere)
    float fContinuationStartPosRatio;
    
    UPROPERTY(EditAnywhere)
    float fContinuationEndPosRatio;
    
    UPROPERTY(EditAnywhere)
    float fContinuationRandPosRatio;
    
    UPROPERTY(EditAnywhere)
    float fFitAngleRatio;
    
    UPROPERTY(EditAnywhere)
    float fContinuationRotationZ;
    
    UPROPERTY(EditAnywhere)
    float fScaleCenter;
    
    UPROPERTY(EditAnywhere)
    float fScaleOuter;
    
    UPROPERTY(EditAnywhere)
    float fScaleRand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorOuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorRand;
    
    ENDGAME_API FVfxLensFlareObjectData();
};

