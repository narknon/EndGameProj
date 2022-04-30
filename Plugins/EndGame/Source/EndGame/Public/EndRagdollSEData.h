#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADSoundKey.h"
#include "EndRagdollSEData.generated.h"

class USoundAttenuation;
class USoundConcurrency;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndRagdollSEData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADSoundKey HitSEKey;
    
    UPROPERTY(EditAnywhere)
    float HitImpulseThreshold;
    
    UPROPERTY(EditAnywhere)
    float HitDistanceThreshold;
    
    UPROPERTY(EditAnywhere)
    float HitImpulseSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* HitAttenuationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundConcurrency* HitConcurrencySetting;
    
    FEndRagdollSEData();
};

