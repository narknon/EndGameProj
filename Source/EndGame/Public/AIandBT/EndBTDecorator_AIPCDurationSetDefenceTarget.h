#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTDecorator_AIPCDurationSetDefenceTarget.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_AIPCDurationSetDefenceTarget : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    float BestDsitance;
    
    UPROPERTY(EditAnywhere)
    float MaxDisntance;
    
    UEndBTDecorator_AIPCDurationSetDefenceTarget();
};

