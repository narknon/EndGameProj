#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEAD_BGMStoreBehaviour.h"
#include "ESQEXSEAD_BGMStopBehaviour.h"
#include "SQEXSEAD_BGMOptions.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEAD_BGMOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEXSEAD_BGMStoreBehaviour StoreBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEXSEAD_BGMStopBehaviour StopBehaviour;
    
    UPROPERTY(EditAnywhere)
    float PlayFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float ResumeFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float SuspendFadeOutTime;
    
    UPROPERTY(EditAnywhere)
    float StopFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestartSameBGM;
    
    SQEXSEAD_API FSQEXSEAD_BGMOptions();
};

