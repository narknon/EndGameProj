#pragma once
#include "CoreMinimal.h"
#include "EndFieldActionActorBase.h"
#include "EndFieldActionActorWireMeshMoveChild.generated.h"

class UEndNavModifierComponent;

UCLASS(Blueprintable)
class AEndFieldActionActorWireMeshMoveChild : public AEndFieldActionActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndNavModifierComponent* ModifierVolume;
    
    AEndFieldActionActorWireMeshMoveChild();
};

