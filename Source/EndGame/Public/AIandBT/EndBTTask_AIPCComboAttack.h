#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EndBTTask_AIPCComboAttack.generated.h"

UCLASS(Blueprintable)
class UEndBTTask_AIPCComboAttack : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceMaxCombo;
    
    UEndBTTask_AIPCComboAttack();
};

