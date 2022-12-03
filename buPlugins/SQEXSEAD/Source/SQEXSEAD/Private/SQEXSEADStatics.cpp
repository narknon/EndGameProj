#include "SQEXSEADStatics.h"

class USoundAttenuation;
class USoundBase;
class USceneComponent;
class USQEXSEADAudioComponent;
class USoundConcurrency;
class UObject;
class USQEXSEADBGMSlotController;

void USQEXSEADStatics::SuspendBGM_OptionalFade(float FadeTime) {
}

void USQEXSEADStatics::SuspendBGM() {
}

void USQEXSEADStatics::StopAllCategorySounds(float FadeTime) {
}

void USQEXSEADStatics::StopAllBGM_OptionalFade(float FadeTime) {
}

void USQEXSEADStatics::StopAllBGM() {
}

USQEXSEADAudioComponent* USQEXSEADStatics::SpawnSoundAttachedByName(USoundBase* Sound, USceneComponent* AttachToComponent, FName SoundName, float SwitchValue, int32 ZeroOneSlot, float ZeroOneValue, int32 ExternalID, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bVirtualizePlay, bool bUISound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bRecycle, float VibrationVolumeMultiplier) {
    return NULL;
}

USQEXSEADAudioComponent* USQEXSEADStatics::SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, int32 SoundIndex, float SwitchValue, int32 ZeroOneSlot, float ZeroOneValue, int32 ExternalID, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bVirtualizePlay, bool bUISound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bRecycle, float VibrationVolumeMultiplier) {
    return NULL;
}

USQEXSEADAudioComponent* USQEXSEADStatics::SpawnSoundAtLocationByName(const UObject* WorldContextObject, USoundBase* Sound, FVector Location, FName SoundName, float SwitchValue, int32 ZeroOneSlot, float ZeroOneValue, int32 ExternalID, FRotator Rotation, bool bVirtualizePlay, bool bUISound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bRecycle, float VibrationVolumeMultiplier) {
    return NULL;
}

USQEXSEADAudioComponent* USQEXSEADStatics::SpawnSoundAtLocation(const UObject* WorldContextObject, USoundBase* Sound, FVector Location, int32 SoundIndex, float SwitchValue, int32 ZeroOneSlot, float ZeroOneValue, int32 ExternalID, FRotator Rotation, bool bVirtualizePlay, bool bUISound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bRecycle, float VibrationVolumeMultiplier) {
    return NULL;
}

USQEXSEADAudioComponent* USQEXSEADStatics::SpawnSound2DByName(const UObject* WorldContextObject, USoundBase* Sound, FName SoundName, float SwitchValue, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool bRecycle, float VibrationVolumeMultiplier) {
    return NULL;
}

USQEXSEADAudioComponent* USQEXSEADStatics::SpawnSound2D(const UObject* WorldContextObject, USoundBase* Sound, int32 SoundIndex, float SwitchValue, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool bRecycle, float VibrationVolumeMultiplier) {
    return NULL;
}

void USQEXSEADStatics::SetPadVibrationEnable(bool bEnable) {
}

void USQEXSEADStatics::SetExternalParameter(FName ParamName, float Value) {
}

void USQEXSEADStatics::SetEnableBGMAutoResume(bool bIsEnabled) {
}

void USQEXSEADStatics::SetEffectPreset(FName presetName, float FadeTime) {
}

void USQEXSEADStatics::ResumeBGM_OptionalFade(float FadeTime) {
}

void USQEXSEADStatics::ResumeBGM() {
}

void USQEXSEADStatics::ResetEffectPreset(float resetFadeTime) {
}

void USQEXSEADStatics::ResetAllCategoryTemporarySettings(float resetFadeTime) {
}

FName USQEXSEADStatics::PlaySound3DByName(const UObject* WorldContextObject, USoundBase* Sound, FName SoundName, FVector Location, float SwitchValue, int32 ZeroOneSlot, float ZeroOneValue, int32 ExternalID, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bVirtualizePlay, bool bUISound, float VibrationVolumeMultiplier) {
    return NAME_None;
}

void USQEXSEADStatics::PlaySound3D(const UObject* WorldContextObject, USoundBase* Sound, FVector Location, int32 SoundIndex, float SwitchValue, int32 ZeroOneSlot, float ZeroOneValue, int32 ExternalID, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bVirtualizePlay, bool bUISound, float VibrationVolumeMultiplier) {
}

FName USQEXSEADStatics::PlaySound2DByName(const UObject* WorldContextObject, USoundBase* Sound, FName SoundName, float SwitchValue, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, float VibrationVolumeMultiplier) {
    return NAME_None;
}

void USQEXSEADStatics::PlaySound2D(const UObject* WorldContextObject, USoundBase* Sound, int32 SoundIndex, float SwitchValue, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, float VibrationVolumeMultiplier) {
}

bool USQEXSEADStatics::IsPlayingBGM(USoundBase* Sound) {
    return false;
}

bool USQEXSEADStatics::IsExistSoundInBank(USoundBase* Sound, FName SoundName) {
    return false;
}

float USQEXSEADStatics::GetSoundDuration(USoundBase* Sound, FName SoundName) {
    return 0.0f;
}

bool USQEXSEADStatics::GetPadVibrationEnable() {
    return false;
}

USQEXSEADBGMSlotController* USQEXSEADStatics::GetBGMSlotController(FName Name) {
    return NULL;
}

void USQEXSEADStatics::ExecAudioVolumeEvent(FName AudioVolumeEventName) {
}

USQEXSEADBGMSlotController* USQEXSEADStatics::CreateBGMSlot(FName Name, FSQEXSEAD_BGMOptions Options) {
    return NULL;
}

void USQEXSEADStatics::CategoryCtrl_ToggleDebugMute(FName CategoryName, float FadeTime) {
}

void USQEXSEADStatics::CategoryCtrl_Suspend(FName CategoryName, float FadeOutTime) {
}

void USQEXSEADStatics::CategoryCtrl_Stop(FName CategoryName, float FadeOutTime) {
}

void USQEXSEADStatics::CategoryCtrl_SetVolume(FName CategoryName, float Volume, float FadeTime, TEnumAsByte<ESQEXSEADCategoryVolumeLayers::Type> targerlayer) {
}

void USQEXSEADStatics::CategoryCtrl_SetPitch(FName CategoryName, float Pitch, float FadeTime) {
}

void USQEXSEADStatics::CategoryCtrl_Resume(FName CategoryName, float FadeInTime) {
}

float USQEXSEADStatics::CategoryCtrl_GetVolume(FName CategoryName, TEnumAsByte<ESQEXSEADCategoryVolumeLayers::Type> targerlayer) {
    return 0.0f;
}

void USQEXSEADStatics::CategoryCtrl_DebugMute(FName CategoryName, bool bToBeMuted, float FadeTime) {
}

void USQEXSEADStatics::CallEvent(FName EventName) {
}

void USQEXSEADStatics::AutoSeCtrl_SetEnable(bool Enable) {
}

USQEXSEADStatics::USQEXSEADStatics() {
}

