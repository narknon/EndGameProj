#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ExponentialHeightFogController -FallbackName=ExponentialHeightFogController
#include "EndExponentialHeightFogController.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API AEndExponentialHeightFogController : public AExponentialHeightFogController {
    GENERATED_BODY()
public:
    AEndExponentialHeightFogController();
};

