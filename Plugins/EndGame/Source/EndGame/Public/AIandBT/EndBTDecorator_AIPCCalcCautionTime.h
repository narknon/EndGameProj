#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTDecorator_AIPCCalcCautionTime.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_AIPCCalcCautionTime : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CautionTimeBlackboardKey;
    
    UEndBTDecorator_AIPCCalcCautionTime();
};

