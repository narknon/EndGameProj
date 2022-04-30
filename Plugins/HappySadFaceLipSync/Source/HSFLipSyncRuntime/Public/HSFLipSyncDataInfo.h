#pragma once
#include "CoreMinimal.h"
#include "HSFLipSyncDataInfo.generated.h"

USTRUCT(BlueprintType)
struct HSFLIPSYNCRUNTIME_API FHSFLipSyncDataInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> KeyOrder;
    
    UPROPERTY(EditAnywhere)
    float AudioLength;
    
    UPROPERTY(EditAnywhere)
    float AvgAudioPower;
    
    UPROPERTY(EditAnywhere)
    float MaxAudioPower;
    
    FHSFLipSyncDataInfo();
};

