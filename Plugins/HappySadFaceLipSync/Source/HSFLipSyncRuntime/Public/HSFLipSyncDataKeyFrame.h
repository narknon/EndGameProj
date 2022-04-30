#pragma once
#include "CoreMinimal.h"
#include "HSFLipSyncDataKeyFrame.generated.h"

USTRUCT(BlueprintType)
struct HSFLIPSYNCRUNTIME_API FHSFLipSyncDataKeyFrame {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartTime;
    
    UPROPERTY(EditAnywhere)
    float EndTime;
    
    UPROPERTY(EditAnywhere)
    float Center;
    
    UPROPERTY(EditAnywhere)
    float Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Phoneme;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> Shapes;
    
    FHSFLipSyncDataKeyFrame();
};

