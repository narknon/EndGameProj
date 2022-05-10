#pragma once
#include "CoreMinimal.h"
#include "EndCharacter.h"
#include "EndVE0009ChocoboCharacter.generated.h"

class AEndVE0003CarriageCharacter;
class UEndBoneAttachComponent;

UCLASS(Blueprintable)
class AEndVE0009ChocoboCharacter : public AEndCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndBoneAttachComponent* BoneAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndVE0003CarriageCharacter* Carriage;
    
    AEndVE0009ChocoboCharacter(const FObjectInitializer& ObjectInitializer);
};

