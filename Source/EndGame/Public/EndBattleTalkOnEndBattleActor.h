#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndSoundHandle.h"
#include "EndBattleExitBattleSceneType.h"
#include "EndBattleTalkOnEndBattleActor.generated.h"

UCLASS(Blueprintable)
class AEndBattleTalkOnEndBattleActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DelayMinSeconds;
    
    UPROPERTY(EditAnywhere)
    float DelayMaxSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndSoundHandle AudioComponent;
    
public:
    AEndBattleTalkOnEndBattleActor();
    UFUNCTION(BlueprintCallable)
    void PlayVoice(bool bUnuseDefaultDelay, float OverrideDelayMinSeconds, float OverrideDelayMaxSeconds, FName VoiceSetId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndBattle(FName BattleSceneID, EndBattleExitBattleSceneType BattleExitType);
    
};

