#include "SQEXSEADAudioVolume.h"
#include "Net/UnrealNetwork.h"
#include "SQEXSEADVolumeComponent.h"

void ASQEXSEADAudioVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASQEXSEADAudioVolume, bEnabled);
    DOREPLIFETIME(ASQEXSEADAudioVolume, EffectPresetNumber);
    DOREPLIFETIME(ASQEXSEADAudioVolume, AudioVolumeSoundOcclusionVolume);
    DOREPLIFETIME(ASQEXSEADAudioVolume, AudioVolumeSoundOcclusionLPF);
    DOREPLIFETIME(ASQEXSEADAudioVolume, AudioVolumeSoundOcclusionFadeInTime);
    DOREPLIFETIME(ASQEXSEADAudioVolume, AudioVolumeSoundOcclusionFadeOutTime);
    DOREPLIFETIME(ASQEXSEADAudioVolume, AudioVolumeSoundOcclusionLPFFadeInTime);
    DOREPLIFETIME(ASQEXSEADAudioVolume, AudioVolumeSoundOcclusionLPFFadeOutTime);
    DOREPLIFETIME(ASQEXSEADAudioVolume, ObstructionVolume);
    DOREPLIFETIME(ASQEXSEADAudioVolume, ObstructionLPF);
    DOREPLIFETIME(ASQEXSEADAudioVolume, InternalObstructionVolume);
    DOREPLIFETIME(ASQEXSEADAudioVolume, InternalObstructionLPF);
    DOREPLIFETIME(ASQEXSEADAudioVolume, ObstructionFadeTime);
    DOREPLIFETIME(ASQEXSEADAudioVolume, GroupingID);
}

ASQEXSEADAudioVolume::ASQEXSEADAudioVolume() {
    this->VolumeComponent = CreateDefaultSubobject<USQEXSEADVolumeComponent>(TEXT("VolumeComponent0"));
    this->bEnabled = true;
    this->EffectPresetNumber = 0;
    this->EffectFadeTime = 1;
    this->Sound = NULL;
    this->SoundVolume = 1;
    this->SoundFadeInTime = 1;
    this->SoundFadeInCurveNumber = 0;
    this->SoundFadeOutTime = 1;
    this->SoundFadeOutCurveNumber = 0;
    this->bOccludeExteriorAudioVolumeSounds = false;
    this->AudioVolumeSoundOcclusionVolume = 1;
    this->AudioVolumeSoundOcclusionLPF = 1;
    this->AudioVolumeSoundOcclusionFadeInTime = 1;
    this->AudioVolumeSoundOcclusionFadeOutTime = 1;
    this->AudioVolumeSoundOcclusionLPFFadeInTime = 1;
    this->AudioVolumeSoundOcclusionLPFFadeOutTime = 1;
    this->bEnableUnoccludedObstruction = false;
    this->ObstructionVolume = 1;
    this->ObstructionLPF = 1;
    this->InternalObstructionVolume = 1;
    this->InternalObstructionLPF = 1;
    this->ObstructionFadeTime = 1;
    this->Priority = 1;
    this->bUseObstructionParamsSeparatePriority = false;
    this->ObstructionParamsSeparatePriority = 1;
    this->GroupingID = 0;
    this->OverridingAttenuationSettings = NULL;
    this->bUseEncompass = false;
    this->bSyncActorHidden = true;
}

