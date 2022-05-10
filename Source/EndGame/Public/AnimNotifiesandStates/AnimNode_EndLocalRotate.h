#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "EndLocalRotateBoneSetting.h"
#include "AnimNode_EndLocalRotate.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FAnimNode_EndLocalRotate : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndLocalRotateBoneSetting> BoneSettings;
    
    FAnimNode_EndLocalRotate();
};

