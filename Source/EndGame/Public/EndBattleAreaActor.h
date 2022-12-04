#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "End/NavPriorRegistInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavPriorRegistInfo -FallbackName=NavPriorRegistInfo
#include "EndBattleAreaActor.generated.h"

class UEndNavModifierComponent;
class UEndBattleAreaBoxComponent;
class UEndTextRenderComponent;
class UEndCationAreaBoxComponent;

UCLASS(Blueprintable)
class AEndBattleAreaActor : public AActor, public INavRelevantInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleSceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SeriesBattleIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndBattleAreaBoxComponent* EndBattleAreaBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndCationAreaBoxComponent* EndCationAreaBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndNavModifierComponent* BattleModifierVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndNavModifierComponent* CationModifierVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndNavModifierComponent* ExtendedBattleModifierVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndTextRenderComponent* TextRenderComponent;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<uint64> AffectedPolysCacheRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavPriorRegistInfo NavPriorInfo;
    
public:
    AEndBattleAreaActor();
    
    // Fix for true pure virtual functions not being implemented
};

