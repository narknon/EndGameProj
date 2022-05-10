#pragma once
#include "CoreMinimal.h"
#include "EEnd3DAudioActorUseType.h"
#include "GameFramework/Actor.h"
#include "End3DAudioSimpleCylinder.h"
#include "End3DAudioActor.generated.h"

class USoundAttenuation;

UCLASS(Blueprintable)
class AEnd3DAudioActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnd3DAudioSimpleCylinder _rangeForUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnd3DAudioSimpleCylinder _rangeForReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _jbId;
    
    UPROPERTY(EditAnywhere)
    float _autoPlayDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnd3DAudioActorUseType _useType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _stateChangeObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _playStopStateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _zerooneStateChangeObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _setZerooneEnableStateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* _overwriteAttenuationSetting;
    
    AEnd3DAudioActor();
};

