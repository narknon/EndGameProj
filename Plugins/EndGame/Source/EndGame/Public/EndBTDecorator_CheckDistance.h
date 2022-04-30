#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "EEndAiMathCmp.h"
#include "EDistanceType.h"
#include "EndBTDecorator_CheckDistance.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_CheckDistance : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector FromBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ToBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndAiMathCmp Operator;
    
    UPROPERTY(EditAnywhere)
    float CheckDistance;
    
    UPROPERTY(EditAnywhere)
    EDistanceType DistanceType;
    
    UEndBTDecorator_CheckDistance();
};

