#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EndBTDecorator_SetFlagOnDeactivate.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_SetFlagOnDeactivate : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValue;
    
    UEndBTDecorator_SetFlagOnDeactivate();
};

