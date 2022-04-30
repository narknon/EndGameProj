#pragma once
#include "CoreMinimal.h"
#include "SQEXSEAD_BGMOptions.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESQEXSEAD_BGMStoreBehaviour.h"
#include "SQEXSEAD_Timing.h"
#include "SQEXSEADBGMSlotController.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class SQEXSEAD_API USQEXSEADBGMSlotController : public UObject {
    GENERATED_BODY()
public:
    USQEXSEADBGMSlotController();
    UFUNCTION(BlueprintCallable)
    void Unreference();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Volume, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSuspendFadeOutTime(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetStoreBehaviour(ESQEXSEAD_BGMStoreBehaviour StoreBehaviour);
    
    UFUNCTION(BlueprintCallable)
    void SetStopFadeOutTime(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSilent();
    
    UFUNCTION(BlueprintCallable)
    void SetSeekTime(float SeekTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSectionByName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void SetSection(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetResumeFadeInTime(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetRestartSameBGM(bool bRestart);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayFadeInTime(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPath(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    void SetOptions(FSQEXSEAD_BGMOptions NewOptions);
    
    UFUNCTION(BlueprintCallable)
    void SetModeByName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void SetMode(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Set(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable)
    float GetTempo();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSectionIndex();
    
    UFUNCTION(BlueprintCallable)
    float GetPlayTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextSectionIndex();
    
    UFUNCTION(BlueprintCallable)
    FSQEXSEAD_Timing GetNearTiming();
    
    UFUNCTION(BlueprintCallable)
    float GetMusicalTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetModeIndex();
    
    UFUNCTION(BlueprintCallable)
    FSQEXSEAD_Timing GetJustTiming();
    
};

