#pragma once
#include "CoreMinimal.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "EEndAiMoveType.h"
#include "EndBTDecorator_Field_CheckLeadMoveType.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_Field_CheckLeadMoveType : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEndAiMoveType> m_MoveTypes;
    
    UEndBTDecorator_Field_CheckLeadMoveType();
};

