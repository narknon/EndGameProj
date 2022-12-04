#pragma once
#include "CoreMinimal.h"
#include "End/ExponentialHeightFogController.h"
#include "EndExponentialHeightFogController.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API AEndExponentialHeightFogController : public AExponentialHeightFogController {
    GENERATED_BODY()
public:
    AEndExponentialHeightFogController();
};

