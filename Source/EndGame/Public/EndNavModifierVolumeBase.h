#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavModifierVolume -FallbackName=NavModifierVolume
#include "EndActorBaseInterface.h"
#include "EndNavActorInterface.h"
#include "EndTextRenderComponent.h"
#include "AI/Navigation/NavModifierVolume.h"
#include "End/NavPriorRegistInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavPriorRegistInfo -FallbackName=NavPriorRegistInfo
#include "EndNavModifierVolumeBase.generated.h"



UCLASS(Blueprintable)
class AEndNavModifierVolumeBase : public ANavModifierVolume, public IEndActorBaseInterface, public IEndNavActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndTextRenderComponent* TextRenderComponent;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<uint64> AffectedPolysCacheRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavPriorRegistInfo NavPriorInfo;
    
public:
    AEndNavModifierVolumeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
    
    // Fix for true pure virtual functions not being implemented
};

