#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavPriorRegistInfo -FallbackName=NavPriorRegistInfo
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "EndBattleAreaActor.generated.h"

class UEndBattleAreaBoxComponent;
class UEndCationAreaBoxComponent;
class UEndNavModifierComponent;
class UEndTextRenderComponent;

USTRUCT(Blueprintable)
struct FNavPriorRegistInfo
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32                                          NavUniqueId;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector>                             AffectedPolyCenters;                                      // 0x0008(0x0010) (ZeroConstructor)
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32>                                   AffectedObjId;                                            // 0x0018(0x0010) (ZeroConstructor)
};

UCLASS(Blueprintable)
class AEndBattleAreaActor : public AActor, public INavRelevantInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleSceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SeriesBattleIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndBattleAreaBoxComponent* EndBattleAreaBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndCationAreaBoxComponent* EndCationAreaBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndNavModifierComponent* BattleModifierVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndNavModifierComponent* CationModifierVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndNavModifierComponent* ExtendedBattleModifierVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
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

