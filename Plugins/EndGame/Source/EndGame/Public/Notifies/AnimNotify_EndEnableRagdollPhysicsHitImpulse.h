#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_EndEnableRagdollPhysicsHitImpulse.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndEnableRagdollPhysicsHitImpulse : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Yaw;
    
    UPROPERTY(EditAnywhere)
    float YawVariation;
    
    UPROPERTY(EditAnywhere)
    float Pitch;
    
    UPROPERTY(EditAnywhere)
    float PitchVariation;
    
    UPROPERTY(EditAnywhere)
    bool bBikeUseRoadForward;
    
    UPROPERTY(EditAnywhere)
    bool bUseSimpleBehaviorBodyDriverForRiders;
    
    UPROPERTY(EditAnywhere)
    float ImpulseMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool bApplyImpulseToAllBones;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreInertia;
    
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UAnimNotify_EndEnableRagdollPhysicsHitImpulse();
};

