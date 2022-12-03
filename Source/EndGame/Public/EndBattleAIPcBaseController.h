#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIController.h"
#include "EndBattleAITargetChoosingParam.h"
#include "BattleParam.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIPcBaseController.generated.h"

class AActor;

UCLASS(Blueprintable)
class AEndBattleAIPcBaseController : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAITargetChoosingParam TargetChoosingParam;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundTargetReachableHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirTargetReachableHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundTargetReachableHeightRangedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirTargetReachableHeightRangedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTeleportWhenCommandApproach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParam NormalBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParam AutoPlayBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParam EnemyInBurstBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandbyTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandbyTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DangerDamagerSensorRadiusCoe;
    
    AEndBattleAIPcBaseController();
    UFUNCTION(BlueprintCallable)
    void SetDefenceLocaiton(FVector TargetLoaction, float MaxDistance, float BestDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetDefenceActor(AActor* TargetActor, float MaxDistance, float BestDistance);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool RequestUseAbility(FName AbilityID);
    
};

