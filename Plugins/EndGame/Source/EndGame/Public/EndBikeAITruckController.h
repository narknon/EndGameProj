#pragma once
#include "CoreMinimal.h"
#include "EndBikeAIControllerEnemyBase.h"
#include "EndBikeAITruckParameter.h"
#include "EndBikeAITruckDamageLoopEffectParam.h"
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
    
    UPROPERTY(EditAnywhere)
    float CutSceneLength;
    
public:
    AEndBikeAITruckController();
};

