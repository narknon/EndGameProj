#include "EndDataTableAutoCameraLightInfo.h"

FEndDataTableAutoCameraLightInfo::FEndDataTableAutoCameraLightInfo() {
    this->OffsetX = 1;
    this->OffsetY = 1;
    this->OffsetZ = 1;
    this->Pitch = 1;
    this->Yaw = 1;
    this->Roll = 1;
    this->Distance = 1;
    this->Intensity = 1;
    this->LightR = 1;
    this->LightG = 1;
    this->LightB = 1;
    this->LightA = 1;
    this->InnerConeAngle = 1;
    this->OuterConeAngle = 1;
    this->AttenuationRadius = 1;
    this->SourceRadius = 1;
    this->SoftSourceRadius = 1;
    this->SourceLength = 1;
    this->Temperature = 1;
    this->ColorTemperatureWhite = 0;
    this->UseTemperature = 0;
    this->AffectsWorld = 0;
    this->CastShadow = 0;
    this->IndirectLightingIntensity = 1;
    this->VolumetricScatteringIntensity = 1;
    this->ShadowResolutionScale = 1;
    this->ContactShadowLength = 1;
    this->ShadowBias = 1;
}

