#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "SQEXSEADAudioVolumeEvent.h"
#include "SQEXSEADAudioVolume.generated.h"

class USoundBase;
class USQEXSEADVolumeComponent;
class USoundAttenuation;
class ASQEXSEADAudioVolume;

UCLASS(Blueprintable)
class SQEXSEAD_API ASQEXSEADAudioVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEXSEADVolumeComponent* VolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 EffectPresetNumber;
    
    UPROPERTY(EditAnywhere)
    float EffectFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundName;
    
    UPROPERTY(EditAnywhere)
    float SoundVolume;
    
    UPROPERTY(EditAnywhere)
    float SoundFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundFadeInCurveNumber;
    
    UPROPERTY(EditAnywhere)
    float SoundFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundFadeOutCurveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOccludeExteriorAudioVolumeSounds: 1;
    
    UPROPERTY(EditAnywhere, Replicated)
    float AudioVolumeSoundOcclusionVolume;
    
    UPROPERTY(EditAnywhere, Replicated)
    float AudioVolumeSoundOcclusionLPF;
    
    UPROPERTY(EditAnywhere, Replicated)
    float AudioVolumeSoundOcclusionFadeInTime;
    
    UPROPERTY(EditAnywhere, Replicated)
    float AudioVolumeSoundOcclusionFadeOutTime;
    
    UPROPERTY(EditAnywhere, Replicated)
    float AudioVolumeSoundOcclusionLPFFadeInTime;
    
    UPROPERTY(EditAnywhere, Replicated)
    float AudioVolumeSoundOcclusionLPFFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableUnoccludedObstruction: 1;
    
    UPROPERTY(EditAnywhere, Replicated)
    float ObstructionVolume;
    
    UPROPERTY(EditAnywhere, Replicated)
    float ObstructionLPF;
    
    UPROPERTY(EditAnywhere, Replicated)
    float InternalObstructionVolume;
    
    UPROPERTY(EditAnywhere, Replicated)
    float InternalObstructionLPF;
    
    UPROPERTY(EditAnywhere, Replicated)
    float ObstructionFadeTime;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseObstructionParamsSeparatePriority: 1;
    
    UPROPERTY(EditAnywhere)
    float ObstructionParamsSeparatePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 GroupingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASQEXSEADAudioVolume*> GroupedAudioVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* OverridingAttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSQEXSEADAudioVolumeEvent> AudioVolumeEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseEncompass: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSyncActorHidden: 1;
    
    ASQEXSEADAudioVolume();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

