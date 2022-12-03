#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "SummonComboAbility.h"
#include "EndBattleSummonMinRangeLimitAbility.h"
#include "ESummonBattleBehavior.h"
#include "SummonWarpPointMoveOnlyBattle.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAISummonBaseController.generated.h"

UCLASS(Blueprintable)
class AEndBattleAISummonBaseController : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarpMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseWarpPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceFromOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSummonComboAbility ComboAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaxRangeAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FreeAngleAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBattleSummonMinRangeLimitAbility> MinRangeLimitAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSummonWarpPointMoveOnlyBattle> WarpPointMoveOnlyBattles;
    
public:
    AEndBattleAISummonBaseController();
    UFUNCTION(BlueprintCallable)
    void WarpToCachedLocation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDrawPause(bool bFlag);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RequestWarpTo(FVector WarpLocation);
    
    UFUNCTION(BlueprintCallable)
    void RequestShowCutSceneAbilityName();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeBattleBehavior(ESummonBattleBehavior NewBattleBehavior);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAppearNotify();
    
};

