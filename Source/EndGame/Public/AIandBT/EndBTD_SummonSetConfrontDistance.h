#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTD_SummonSetConfrontDistance.generated.h"

UCLASS(Blueprintable)
class UEndBTD_SummonSetConfrontDistance : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector FromBlackboardKey_Base;
    
    UEndBTD_SummonSetConfrontDistance();
};

