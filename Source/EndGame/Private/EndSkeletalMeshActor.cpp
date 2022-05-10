#include "EndSkeletalMeshActor.h"

void AEndSkeletalMeshActor::StopEmissiveColorAnimation(FName RequestID) {
}

void AEndSkeletalMeshActor::SetDirectEmissiveColor(FName ColorPaletteId, float IntensityBias) {
}

void AEndSkeletalMeshActor::ResetDirectEmissiveColor() {
}

void AEndSkeletalMeshActor::PlayEmissiveColorAnimation(FName RequestID, FName ColorPaletteId, EEndEmissiveModifierType ModifierType, EEndEmissiveCurveType CurveType, bool bLoop, float Duration, float BlendInTime, float BlendOutTime, float StartOffset, float EndOffset) {
}

void AEndSkeletalMeshActor::OverrideDefaultEmissiveColor() {
}

AEndSkeletalMeshActor::AEndSkeletalMeshActor() {
    this->KBD = NULL;
    this->Bonamik = NULL;
    this->EmissiveColorComponent = NULL;
    this->bForcedUsePhysicsAssetBounds = false;
}

