#pragma once
#include "CoreMinimal.h"
#include "EndAIBehaviorWait.h"
#include "EEndLocomotionAnim.h"
#include "EndAIBehaviorOverrideLocomotion.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorOverrideLocomotion : public FEndAIBehaviorWait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEndLocomotionAnim LocomotionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SequenceName;
    
    FEndAIBehaviorOverrideLocomotion();
};

