#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADSoundIndexInfo.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADSoundIndexInfo {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundIndex;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    float Duration;
    
    SQEXSEAD_API FSQEXSEADSoundIndexInfo();
};

