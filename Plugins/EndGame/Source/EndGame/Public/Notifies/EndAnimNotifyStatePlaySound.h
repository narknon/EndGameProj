#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStatePlaySound.generated.h"

class USoundBase;
class USoundAttenuation;

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStatePlaySound : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<USoundBase> SoundRef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SoundName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartWaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundAttenuation* Attenuation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<USoundBase> OnEndSoundRef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName OnEndSoundName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bPauseOnAnimKeep: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bVirtualizePlayWhenSilent: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bSyncOwnerHiddenState: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bVibrationUCPCOnly: 1;
    
    UEndAnimNotifyStatePlaySound();
};

