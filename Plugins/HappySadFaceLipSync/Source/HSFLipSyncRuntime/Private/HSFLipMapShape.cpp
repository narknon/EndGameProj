#include "HSFLipMapShape.h"

FHSFLipMapShape::FHSFLipMapShape() {
    this->AudioMin = 1;
    this->AudioMax = 1;
    this->AudioPower = 1;
    this->bBlend = false;
    this->BlendIn = 1;
    this->BlendOut = 1;
    this->bRandomize = false;
    this->bRandomizePerChannel = false;
    this->RandomMin = 1;
    this->RandomMax = 1;
    this->bForceShape = false;
}

