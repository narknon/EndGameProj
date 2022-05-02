#pragma once
#include "CoreMinimal.h"
#include "EndBikeAIStunRayController.h"
#include "EndBikeAIFunnelMoveParameter.h"
#include "EndBikeAIStunRayTaserGunController.generated.h"

UCLASS(Blueprintable)
class AEndBikeAIStunRayTaserGunController : public AEndBikeAIStunRayController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBikeAIFunnelMoveParameter FunnelMovementParam;
    
public:
    AEndBikeAIStunRayTaserGunController();
};

