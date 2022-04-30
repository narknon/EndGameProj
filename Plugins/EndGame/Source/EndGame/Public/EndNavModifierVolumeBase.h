#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavPriorRegistInfo -FallbackName=NavPriorRegistInfo
#include "EndActorBaseInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavModifierVolume -FallbackName=NavModifierVolume
#include "EndNavActorInterface.h"
#include "EndNavModifierVolumeBase.generated.h"

class UEndTextRenderComponent;

UCLASS(Blueprintable)
class AEndNavModifierVolumeBase : public ANavModifierVolume, public IEndActorBaseInterface, public IEndNavActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndTextRenderComponent* TextRenderComponent;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<uint64> AffectedPolysCacheRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavPriorRegistInfo NavPriorInfo;
    
public:
    AEndNavModifierVolumeBase();
    
    // Fix for true pure virtual functions not being implemented
};

