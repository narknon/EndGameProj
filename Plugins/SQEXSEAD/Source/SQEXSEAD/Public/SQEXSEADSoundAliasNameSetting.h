#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SQEXSEAD_StructsAndEnums.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADSoundAliasNameSetting.generated.h"

UCLASS(BlueprintType)
class SQEXSEAD_API USQEXSEADSoundAliasNameSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FName> TranslateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FSQEXSEADRandomSoundSetting> RandomSettings;
    
    USQEXSEADSoundAliasNameSetting();
};

