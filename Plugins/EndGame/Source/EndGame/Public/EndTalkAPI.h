#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EndTalkAPI.generated.h"

UCLASS(Blueprintable)
class UEndTalkAPI : public UObject {
    GENERATED_BODY()
public:
    UEndTalkAPI();
    UFUNCTION(BlueprintCallable)
    static void SendBattleTalkPlayTriggerByBP(const FName TalkPlayTriggerId, const FString& StringArgument00, const FString& StringArgument01, const FString& StringArgument02);
    
    UFUNCTION(BlueprintCallable)
    static void PlayBattleTalkStateByBP(FName TalkStateId, bool bForced, bool bEnableToStable);
    
    UFUNCTION(BlueprintCallable)
    static void EnableBattleTalkEventBox(FName TriggerBoxName);
    
    UFUNCTION(BlueprintCallable)
    static void DisableBattleTalkEventBox(FName TriggerBoxName);
    
};

