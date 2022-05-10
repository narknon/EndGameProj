#pragma once
#include "CoreMinimal.h"
#include "Engine/ExponentialHeightFog.h"
#include "EndExponentialHeightFogController.generated.h"

UCLASS(Blueprintable)
// Class Engine.ExponentialHeightFogController
// 0x0008 (0x0380 - 0x0378)
class AExponentialHeightFogController : public AActor
{
public:
    class UExponentialHeightFogControllerComponent*    ControllerComponent;                                      // 0x0378(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
    GENERATED_BODY()
    AExponentialHeightFogController();

};

UCLASS(Blueprintable)
class ENDGAME_API AEndExponentialHeightFogController : public AExponentialHeightFogController {
    GENERATED_BODY()
public:
    AEndExponentialHeightFogController();
};

