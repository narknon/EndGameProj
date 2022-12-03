#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Engine/LatentActionManager.h"
#include "EGameState.h"
#include "GameStateChange.h"
#include "EGameMode.h"
#include "EGamePause.h"
#include "EEndSystemPauseMenuKind.h"
#include "EGameStatus.h"
#include "EGameSpeed.h"
#include "EGameTrigger.h"
#include "EndGameState.generated.h"

class UObject;

UCLASS(Blueprintable)
class ENDGAME_API AEndGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameState GameState;
    
    UPROPERTY(EditAnywhere)
    FGameStateChange GameStateChange[64];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameStateChangeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameMode GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActiveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TruthLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrevActiveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OriginalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveLocationSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevActiveLocationSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoadedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TestCutSceneName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestActiveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestTargetLocationStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequestOverRideEnvName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestTruthLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestTruthLocationStr;
    
public:
    UPROPERTY(EditAnywhere)
    uint64 GameStatus;
    
    UPROPERTY(EditAnywhere)
    uint32 GamePause;
    
    UPROPERTY(EditAnywhere)
    uint32 RequestGamePauseOn;
    
    UPROPERTY(EditAnywhere)
    uint32 RequestGamePauseOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndSystemPauseMenuKind NextPauseMenuKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideWorld;
    
    UPROPERTY(EditAnywhere)
    float GameSpeed[11];
    
    AEndGameState();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitGameState(const UObject* WorldContextObject, EGameState toState, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitGameDifferentStateList(const UObject* WorldContextObject, TArray<EGameState> toStateList, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitGameDifferentState(const UObject* WorldContextObject, EGameState toState, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestGamePauseOn(EGamePause Pause);
    
    UFUNCTION(BlueprintCallable)
    void SetGameStatus(EGameStatus Status, bool Set);
    
    UFUNCTION(BlueprintCallable)
    void SetGameSpeed(EGameSpeed Type, float Speed);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SendGameTrigger(const UObject* WorldContextObject, EGameTrigger Trigger, EGameState toState, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void OnDebugPauseFrameSkip();
    
    UFUNCTION(BlueprintCallable, Exec)
    static void OnDebugPauseEnable();
    
    UFUNCTION(BlueprintCallable)
    bool IsGameStatus(EGameStatus Status);
    
    UFUNCTION(BlueprintCallable)
    bool IsGamePause();
    
    UFUNCTION(BlueprintCallable)
    float GetGameSpeed();
    
    UFUNCTION(BlueprintCallable)
    void ActivateLocation(const FString& TargetLocation, FName OverRideEnvName);
    
};

