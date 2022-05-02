#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EndBTDecorator_AIPCDurationRequestGuard.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_AIPCDurationRequestGuard : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Inverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreRedXIII;
    
    UEndBTDecorator_AIPCDurationRequestGuard();
};

