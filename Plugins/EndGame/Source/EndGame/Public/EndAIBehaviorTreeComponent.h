#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "EndAIBehaviorTreeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndAIBehaviorTreeComponent : public UBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UEndAIBehaviorTreeComponent();
};

