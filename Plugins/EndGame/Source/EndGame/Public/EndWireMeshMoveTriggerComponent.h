#pragma once
#include "CoreMinimal.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndWireMeshMoveTriggerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndWireMeshMoveTriggerComponent : public UEndFieldActionTriggerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotCreateEffect;
    
    UEndWireMeshMoveTriggerComponent();
};

