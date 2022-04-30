#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "CommonAnimTypes.h"
#include "AnimNode_EndPhysicalRotate.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FAnimNode_EndPhysicalRotate : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAxis EndPointDirection;
    
    UPROPERTY(EditAnywhere)
    float EndPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledEndPointGravity;
    
    UPROPERTY(EditAnywhere)
    float AnimatedPositionStiffness;
    
    UPROPERTY(EditAnywhere)
    float VelocityFriction;
    
    UPROPERTY(EditAnywhere)
    float ConstraintAngle;
    
    UPROPERTY(EditAnywhere)
    float ConstraintAngleStiffness;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> ContactBones;
    
    UPROPERTY(EditAnywhere)
    float ContactPadding;
    
    UPROPERTY(EditAnywhere)
    float ContactPaddingToAnimPositionRate;
    
    UPROPERTY(EditAnywhere)
    float ContactPositionStiffness;
    
    UPROPERTY(EditAnywhere)
    float ContactVelocityStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PositionIterationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VelocityIterationCount;
    
    UPROPERTY(EditAnywhere)
    float WeightSmoothRate;
    
    UPROPERTY(EditAnywhere)
    float ActiveDuringTime;
    
    FAnimNode_EndPhysicalRotate();
};

