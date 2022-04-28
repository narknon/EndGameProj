#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEndPhysicsImpulseType.h"
#include "Animation/AnimNotifies/AnimNotify.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimNotify_EndEnableRagdollPhysics.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndEnableRagdollPhysics : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bAddImpulse: 1;
    
    UPROPERTY(EditAnywhere)
    EEndPhysicsImpulseType Type;
    
    UPROPERTY(EditAnywhere)
    FVector Impulse;
    
    UPROPERTY(EditAnywhere)
    bool bApplyImpulseToAllBones;
    
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float Strength;
    
    UPROPERTY(EditAnywhere)
    bool bBikeUseRoadForward;
    
    UPROPERTY(EditAnywhere)
    bool bUseSimpleBehaviorBodyDriverForRiders;
    
    UPROPERTY(EditAnywhere)
    uint8 bBodyDriverRagdoll: 1;
    
    UPROPERTY(EditAnywhere)
    float MinActivationTime;
    
    UPROPERTY(EditAnywhere)
    float MaxActivationTime;
    
    UAnimNotify_EndEnableRagdollPhysics();
};

