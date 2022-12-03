#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "EFA0222_PoseReference.h"
#include "FA0222_AnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class ENDGAME_API UFA0222_AnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference LeftHandleBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference RightHandleBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* PoseReferenceAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFA0222_PoseReference, int32> PoseReferenceFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoseReferenceAnimationFrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LeftHandleInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RightHandleInput;
    
    UFA0222_AnimInstance();
};

