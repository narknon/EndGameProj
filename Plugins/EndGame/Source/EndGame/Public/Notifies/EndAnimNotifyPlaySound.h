#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyPlaySound.generated.h"

class USoundBase;
class USoundAttenuation;

UCLASS(Abstract, CollapseCategories)
class ENDGAME_API UEndAnimNotifyPlaySound : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<USoundBase> SoundRef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SoundName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundAttenuation* Attenuation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bSyncOwnerHiddenState: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bVibrationUCPCOnly: 1;
    
    UEndAnimNotifyPlaySound();
};

