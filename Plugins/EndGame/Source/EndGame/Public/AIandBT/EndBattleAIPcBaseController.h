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
    UPROPERTY(EditAnywhere)
    float GroundTargetReachableHeight;
    
    UPROPERTY(EditAnywhere)
    float AirTargetReachableHeight;
    
    UPROPERTY(EditAnywhere)
    float GroundTargetReachableHeightRangedWeapon;
    
    UPROPERTY(EditAnywhere)
    float AirTargetReachableHeightRangedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTeleportWhenCommandApproach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParam NormalBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParam AutoPlayBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleParam EnemyInBurstBattleParam;
    
    UPROPERTY(EditAnywhere)
    float StandbyTimeMax;
    
    UPROPERTY(EditAnywhere)
    float StandbyTimeMin;
    
    UPROPERTY(EditAnywhere)
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

