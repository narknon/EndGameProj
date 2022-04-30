#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "EEndLocomotionState.h"
#include "EndBTDecorator_Field_IsLocomotionState.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_Field_IsLocomotionState : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEndLocomotionState> m_LocomotionStates;
    
    UEndBTDecorator_Field_IsLocomotionState();
};

