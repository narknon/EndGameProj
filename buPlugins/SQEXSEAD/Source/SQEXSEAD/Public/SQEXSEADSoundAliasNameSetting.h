#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADRandomSoundSetting.h"
#include "SQEXSEADSoundAliasNameSetting.generated.h"

UCLASS(Blueprintable)
class SQEXSEAD_API USQEXSEADSoundAliasNameSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> TranslateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSQEXSEADRandomSoundSetting> RandomSettings;
    
    USQEXSEADSoundAliasNameSetting();
};

