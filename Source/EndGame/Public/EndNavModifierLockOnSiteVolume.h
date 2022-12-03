#pragma once
#include "CoreMinimal.h"
#include "EndNavActorInterface.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavRelevantInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavPriorRegistInfo -FallbackName=NavPriorRegistInfo
#include "EndNavModifierLockOnSiteVolume.generated.h"

class UEndNavModifierComponent;
class UEndTextRenderComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class AEndNavModifierLockOnSiteVolume : public AActor, public INavRelevantInterface, public IEndNavActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SendTriggerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResponseAreaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResponseAreaPlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RangeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TargetIconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndNavModifierComponent* ModifierVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndTextRenderComponent* TextRenderComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavPriorRegistInfo NavPriorInfo;
    
public:
    AEndNavModifierLockOnSiteVolume();
    
    // Fix for true pure virtual functions not being implemented
};

