#pragma once
#include "CoreMinimal.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTDecorator_Field_IsOnSkeletal.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_Field_IsOnSkeletal : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEscalator;
    
    UEndBTDecorator_Field_IsOnSkeletal();
};

