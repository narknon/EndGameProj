#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndHandConstraint.h"
#include "EEndHandType.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimNotify_EndHandIK.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndHandIK : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndHandType HandType;
    
    UPROPERTY(EditAnywhere)
    EEndHandConstraint Constraint;
    
    UPROPERTY(EditAnywhere)
    float ConstraintRate;
    
    UPROPERTY(EditAnywhere)
    FName ConstraintStringParam0;
    
    UPROPERTY(EditAnywhere)
    FName ConstraintStringParam1;
    
    UPROPERTY(EditAnywhere)
    FName ConstraintStringParam2;
    
    UPROPERTY(EditAnywhere)
    FName ConstraintStringParam3;
    
    UPROPERTY(EditAnywhere)
    FVector ConstraintVectorParam0;
    
    UPROPERTY(EditAnywhere)
    FRotator ConstraintRotationParam0;
    
    UAnimNotify_EndHandIK();
};

