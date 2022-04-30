#pragma once
#include "CoreMinimal.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "EEndFieldAILeadState.h"
#include "EndBTDecorator_Field_CheckLeadState.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_Field_CheckLeadState : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEndFieldAILeadState> m_StateTypes;
    
    UEndBTDecorator_Field_CheckLeadState();
};

