#pragma once
#include "CoreMinimal.h"
#include "EndFieldActionActorBase.h"
#include "EndFieldActionActorHookShotChild.generated.h"

class UEndFieldActionTriggerComponent;
class UEndHoocShotTriggerComponent;
class UEndNavModifierComponent;

UCLASS(Blueprintable)
class AEndFieldActionActorHookShotChild : public AEndFieldActionActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndFieldActionTriggerComponent* PressVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndHoocShotTriggerComponent* TargetVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndFieldActionTriggerComponent* ArrivalVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndNavModifierComponent* ModifierVolume;
    
    AEndFieldActionActorHookShotChild();
};

