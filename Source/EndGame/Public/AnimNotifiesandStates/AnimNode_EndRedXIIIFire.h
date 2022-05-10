#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "AnimNode_EndRedXIIIFire.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FAnimNode_EndRedXIIIFire : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;
    
    UPROPERTY(EditAnywhere)
    float FireSize;
    
    UPROPERTY(EditAnywhere)
    float Stiffness;
    
    FAnimNode_EndRedXIIIFire();
};

