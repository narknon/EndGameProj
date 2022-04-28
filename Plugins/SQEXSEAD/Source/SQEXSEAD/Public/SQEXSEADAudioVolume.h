#pragma once
#include "CoreMinimal.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "GameFramework/Volume.h"
#include "SQEXSEADAudioVolume.generated.h"

class USoundBase;
class USQEXSEADVolumeComponent;
class USoundAttenuation;
class ASQEXSEADAudioVolume;

UCLASS()
class SQEXSEAD_API ASQEXSEADAudioVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USQEXSEADVolumeComponent* VolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    int32 EffectPresetNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectFadeTime;
    
    UPROPERTY(EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(EditAnywhere)
    FName SoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoundVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoundFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SoundFadeInCurveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoundFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SoundFadeOutCurveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOccludeExteriorAudioVolumeSounds: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float AudioVolumeSoundOcclusionVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float AudioVolumeSoundOcclusionLPF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float AudioVolumeSoundOcclusionFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float AudioVolumeSoundOcclusionFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float AudioVolumeSoundOcclusionLPFFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float AudioVolumeSoundOcclusionLPFFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableUnoccludedObstruction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float ObstructionVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float ObstructionLPF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float InternalObstructionVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float InternalObstructionLPF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float ObstructionFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseObstructionParamsSeparatePriority: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ObstructionParamsSeparatePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    int32 GroupingID;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<ASQEXSEADAudioVolume*> GroupedAudioVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* OverridingAttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FSQEXSEADAudioVolumeEvent> AudioVolumeEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseEncompass: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSyncActorHidden: 1;
    
    ASQEXSEADAudioVolume();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

