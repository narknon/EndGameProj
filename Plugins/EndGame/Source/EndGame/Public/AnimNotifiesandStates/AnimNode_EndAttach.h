#pragma once
#include "CoreMinimal.h"
#include "EAnimNodeEndAttachTarget.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "AnimNode_EndAttach.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FAnimNode_EndAttach : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference AttachBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimNodeEndAttachTarget AttachTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachTargetBoneName;
    
    FAnimNode_EndAttach();
};

