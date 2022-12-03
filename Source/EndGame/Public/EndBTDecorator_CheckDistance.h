#pragma once
#include "CoreMinimal.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckDistance;
    
    UPROPERTY(EditAnywhere)
    EDistanceType DistanceType;
    
    UEndBTDecorator_CheckDistance();
};

