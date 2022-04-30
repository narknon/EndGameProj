#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundWave -FallbackName=SoundWave
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "SQEXSEADSoundIndexInfo.h"
#include "SQEXSEADSound.generated.h"

class USQEXSEADSoundBank;
class USQEXSEADSoundAliasNameSetting;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USQEXSEADSound : public USoundWave {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcedIgnore;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseKohrogiAttenuation;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundBank* ReferenceBank;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundIndex;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideStopFadeTime;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    float StopFadeTime;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUISound;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    float PauseFadeTime;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreAudioVolumeAttenuation;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSEADTracingOcclusion;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<ECollisionChannel> SEADOcclusionTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSQEXSEADSoundIndexInfo> SoundNameIndexTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundAliasNameSetting* SoundNameAliasSetting;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStreamingAsset_PlatformPS4;
    
    USQEXSEADSound();
};

