#pragma once
#include "CoreMinimal.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndMonkeyBarTriggerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndMonkeyBarTriggerComponent : public UEndFieldActionTriggerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 Index;
    
    UEndMonkeyBarTriggerComponent();
};

