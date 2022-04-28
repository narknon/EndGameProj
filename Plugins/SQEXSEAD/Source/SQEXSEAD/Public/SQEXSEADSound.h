#pragma once
#include "CoreMinimal.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "Sound/SoundWave.h"
#include "SQEXSEADSound.generated.h"

class USQEXSEADSoundBank;
class USQEXSEADSoundAliasNameSetting;

UCLASS(EditInlineNew, MinimalAPI)
class USQEXSEADSound : public USoundWave {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bForcedIgnore;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bUseKohrogiAttenuation;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly)
    USQEXSEADSoundBank* ReferenceBank;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    int32 SoundIndex;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bOverrideStopFadeTime;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    float StopFadeTime;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bIsUISound;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    float PauseFadeTime;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bIgnoreAudioVolumeAttenuation;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bEnableSEADTracingOcclusion;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<ECollisionChannel> SEADOcclusionTraceChannel;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FSQEXSEADSoundIndexInfo> SoundNameIndexTable;
    
    UPROPERTY(EditAnywhere)
    USQEXSEADSoundAliasNameSetting* SoundNameAliasSetting;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bStreamingAsset_PlatformPS4;
    
    USQEXSEADSound();
};

