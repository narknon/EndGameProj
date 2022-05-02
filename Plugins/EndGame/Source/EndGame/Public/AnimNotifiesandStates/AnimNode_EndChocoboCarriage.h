#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "BoneContainer.h"
#include "AnimNode_EndChocoboCarriage.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FAnimNode_EndChocoboCarriage : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink BasePose;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> HideBones;
    
    FAnimNode_EndChocoboCarriage();
};

