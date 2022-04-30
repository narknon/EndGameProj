#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTTask_AIPCSearchCombatArea.generated.h"

UCLASS(Blueprintable)
class UEndBTTask_AIPCSearchCombatArea : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CombatAreaBlackboardKey;
    
    UEndBTTask_AIPCSearchCombatArea();
};

