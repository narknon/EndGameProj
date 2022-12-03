#pragma once
#include "CoreMinimal.h"
#include "EndBikeAITruckDamageLoopEffectParam.h"
#include "EndBikeAIControllerEnemyBase.h"
#include "EndBikeAITruckParameter.h"
#include "EndBikeAITruckController.generated.h"

UCLASS(Blueprintable)
class AEndBikeAITruckController : public AEndBikeAIControllerEnemyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBikeAITruckParameter mParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBikeAITruckDamageLoopEffectParam> DamageLoopEffectParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CutSceneLength;
    
public:
    AEndBikeAITruckController();
};

