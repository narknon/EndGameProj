#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "EndBTDecorator_Field_IsInViewLine.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_Field_IsInViewLine : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(EditAnywhere)
    float m_Width;
    
    UPROPERTY(EditAnywhere)
    float m_Length;
    
    UEndBTDecorator_Field_IsInViewLine();
};

