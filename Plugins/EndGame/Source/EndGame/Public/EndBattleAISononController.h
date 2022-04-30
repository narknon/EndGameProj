#pragma once
#include "CoreMinimal.h"
#include "BattleParam.h"
#include "EndBattleAIPcBaseController.h"
#include "EEndLinkAbilityType.h"
#include "EndBattleAISononController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAISononController : public AEndBattleAIPcBaseController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float LinkCommandMaxDistanceToLeader;
    
    UPROPERTY(EditAnywhere)
    float LinkCommandBestDistanceToLeader;
    
    UPROPERTY(EditAnywhere)
    float LinkCommandTeleportMinDistance;
    
    UPROPERTY(EditAnywhere)
    float LinkCommandFirstStrikeDistance;
    
    UPROPERTY(EditAnywhere)
    float LinkCommandFirstStrikeDiffHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkCommandFirstStrikeAbility;
    
    UPROPERTY(EditAnywhere)
    float LinkAfterEscortWarpDeterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SacrificeAbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParam ConcentrationBattleParam;
    
    UPROPERTY(EditAnywhere)
    float DummyTargetDistanceDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SacrificeDamageSourceID_Heal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SacrificeDamageSourceID_ATB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SacrificeDamageSourceID_Damage;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> DummyTargetDistanceLists;
    
public:
    AEndBattleAISononController();
    UFUNCTION(BlueprintCallable)
    void TeleportToCachedLocation();
    
    UFUNCTION(BlueprintCallable)
    void StartSacrifice();
    
    UFUNCTION(BlueprintCallable)
    bool RequestLinkAbility(FName ID, EEndLinkAbilityType Type, bool bSupport, bool bAerial, bool bDoWithoutTarget, bool bInstance);
    
};

