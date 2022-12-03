#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "EndAutoRotateBoneSetting.h"
#include "AnimNode_EndAutoRotate.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FAnimNode_EndAutoRotate : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndAutoRotateBoneSetting> BoneSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelerationRate;
    
    FAnimNode_EndAutoRotate();
};

