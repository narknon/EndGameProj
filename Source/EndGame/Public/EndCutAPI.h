#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EndCutAPI.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndCutAPI : public UObject {
    GENERATED_BODY()
public:
    UEndCutAPI();
    UFUNCTION(BlueprintCallable)
    static void UnloadSequenceAssets(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    static void SkipCinema(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentTime(FName LevelName, float InTime);
    
    UFUNCTION(BlueprintCallable)
    static void RequestPlayCutScene(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    static bool ReadyCutScene(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayCutScene(FName LevelName, FName OnPlayTriggerName, bool bStopSkip);
    
    UFUNCTION(BlueprintCallable)
    static void LoadSequenceAssets(FName LevelName, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidSelectWidget();
    
    UFUNCTION(BlueprintCallable)
    static bool IsStable();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSkipCinemaAtThisFrame();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSkipCinema();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayReady(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlaying_TypeSpecify(const bool EV, const bool LV, const bool MV, const bool fv);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlaying();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayFinished(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsExistEvent(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorCreated(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    static float GetTimeRange(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    static float GetCurrentTime(FName LevelName);
    
};

