#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADSoundKey.h"
#include "EndPhysicsSeSetting.generated.h"

class USoundAttenuation;
class USoundConcurrency;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndPhysicsSeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnable: 1;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADSoundKey FractureSEKey;
    
    UPROPERTY(EditAnywhere)
    float FractureImpulseSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* FractureAttenuationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHitSensitive: 1;
    
    UPROPERTY(EditAnywhere)
    float HitSensitiveScalingValue;
    
    FEndPhysicsSeSetting();
};

