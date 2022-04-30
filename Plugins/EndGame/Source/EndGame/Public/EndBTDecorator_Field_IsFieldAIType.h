#pragma once
#include "CoreMinimal.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "FFieldAiType.h"
#include "EndBTDecorator_Field_IsFieldAIType.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_Field_IsFieldAIType : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFieldAiType> m_AiTypes;
    
    UEndBTDecorator_Field_IsFieldAIType();
};

