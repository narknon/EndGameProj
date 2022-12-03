#include "EndNaviMapSettings.h"

UEndNaviMapSettings::UEndNaviMapSettings() {
    this->PixelPerCm = 0.14f;
    this->StartWallTraceZOffset = 20.00f;
    this->bEnableDrawCollideCache = true;
    this->bEnableDrawCollideCacheLine = false;
}

