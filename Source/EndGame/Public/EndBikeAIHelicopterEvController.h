#pragma once
#include "CoreMinimal.h"
#include "EndBikeAIHelicopterController.h"
#include "EndBikeAIHelicopterEvController.generated.h"

UCLASS(Blueprintable)
class AEndBikeAIHelicopterEvController : public AEndBikeAIHelicopterController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExecOnlyFirstAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstAttackSplineInputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstAttackSplineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstAttackDistance;
    
public:
    AEndBikeAIHelicopterEvController();
};

