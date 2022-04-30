#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndAutoRotateBoneSetting.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAutoRotateBoneSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLocalAxisAsRightVector;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> RightVectorAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerformComponentSpaceVelocityCalculation;
    
    FEndAutoRotateBoneSetting();
};

