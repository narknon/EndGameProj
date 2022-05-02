#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTTask_AIPCSearchSafeLocation.generated.h"

UCLASS(Blueprintable)
class UEndBTTask_AIPCSearchSafeLocation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SafeLocationBlackboardKey;
    
    UEndBTTask_AIPCSearchSafeLocation();
};

