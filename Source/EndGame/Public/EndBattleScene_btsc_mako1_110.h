#pragma once
#include "CoreMinimal.h"
#include "EndBattleSceneBlueprint.h"
#include "EndBattleScene_btsc_mako1_110.generated.h"

UCLASS(Blueprintable)
class AEndBattleScene_btsc_mako1_110 : public AEndBattleSceneBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GuardScorpionActorName;
    
    AEndBattleScene_btsc_mako1_110();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddNormalAttackHitCountForBarrierGS(FName CauserCharaName, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddMagicThunderHitCountForBarrierGS(FName CauserCharaName, int32 Count);
    
};

