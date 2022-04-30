#pragma once
#include "CoreMinimal.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "EEndFieldAIFollowPositionState.h"
#include "EndBTDecorator_Field_CheckFollowPositionState.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_Field_CheckFollowPositionState : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEndFieldAIFollowPositionState> m_StateTypes;
    
    UEndBTDecorator_Field_CheckFollowPositionState();
};

