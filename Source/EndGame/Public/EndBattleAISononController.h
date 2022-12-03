#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIPcBaseController.h"
#include "BattleParam.h"
#include "EEndLinkAbilityType.h"
#include "EndBattleAISononController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAISononController : public AEndBattleAIPcBaseController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkCommandMaxDistanceToLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkCommandBestDistanceToLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkCommandTeleportMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkCommandFirstStrikeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkCommandFirstStrikeDiffHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkCommandFirstStrikeAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkAfterEscortWarpDeterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SacrificeAbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParam ConcentrationBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DummyTargetDistanceDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SacrificeDamageSourceID_Heal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SacrificeDamageSourceID_ATB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SacrificeDamageSourceID_Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

