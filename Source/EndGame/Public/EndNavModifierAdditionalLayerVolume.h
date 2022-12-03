#pragma once
#include "CoreMinimal.h"
#include "EndNavModifierVolumeBase.h"
#include "EEndNavLayerType.h"
#include "EndNavModifierAdditionalLayerVolume.generated.h"

UCLASS(Blueprintable)
class AEndNavModifierAdditionalLayerVolume : public AEndNavModifierVolumeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndNavLayerType LayerType;
    
public:
    AEndNavModifierAdditionalLayerVolume();
};

