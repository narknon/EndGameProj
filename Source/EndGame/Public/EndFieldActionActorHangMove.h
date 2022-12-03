#pragma once
#include "CoreMinimal.h"
#include "EndFieldActionActorBase.h"
#include "EEndFieldActionHangMoveDirection.h"
#include "EndFieldActionActorHangMove.generated.h"

class UEndFieldActionTriggerComponent;

UCLASS(Blueprintable, Placeable)
class AEndFieldActionActorHangMove : public AEndFieldActionActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndFieldActionHangMoveDirection MoveDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveStepNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndFieldActionTriggerComponent* PressVolume;
    
    AEndFieldActionActorHangMove();
};

