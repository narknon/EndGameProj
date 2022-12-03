#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTTask_AIPCSearchCoverLocation.generated.h"

UCLASS(Blueprintable)
class UEndBTTask_AIPCSearchCoverLocation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CoverLocationBlackboardKey;
    
    UEndBTTask_AIPCSearchCoverLocation();
};

