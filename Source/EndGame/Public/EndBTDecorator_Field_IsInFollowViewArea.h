#pragma once
#include "CoreMinimal.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTDecorator_Field_IsInFollowViewArea.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_Field_IsInFollowViewArea : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AreaSize;
    
    UEndBTDecorator_Field_IsInFollowViewArea();
};

