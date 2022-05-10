#pragma once
#include "CoreMinimal.h"
#include "EndCharacter.h"
#include "EndVE0003CarriageCharacter.generated.h"

class UEndBoneAttachComponent;
class AEndVE0009ChocoboCharacter;

UCLASS(Blueprintable)
class AEndVE0003CarriageCharacter : public AEndCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndBoneAttachComponent* BoneAttachL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndBoneAttachComponent* BoneAttachR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndVE0009ChocoboCharacter* Chocobo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndCharacter* Rider;
    
    AEndVE0003CarriageCharacter(const FObjectInitializer& ObjectInitializer);
};

