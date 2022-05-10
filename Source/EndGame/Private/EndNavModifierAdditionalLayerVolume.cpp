#include "EndNavModifierAdditionalLayerVolume.h"

AEndNavModifierAdditionalLayerVolume::AEndNavModifierAdditionalLayerVolume(const FObjectInitializer& ObjectInitializer) : AEndNavModifierVolumeBase(ObjectInitializer){
    this->LayerType = EEndNavLayerType::Normal;
}

