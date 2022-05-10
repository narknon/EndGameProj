#include "EndNavModifierPeekCameraVolume.h"
#include "Components/BoxComponent.h"
#include "EndNavModifierComponent.h"

AEndNavModifierPeekCameraVolume::AEndNavModifierPeekCameraVolume() {
    this->bUseDuctBlendIn = true;
    this->ResponseAreaID = TEXT("rpaPeekCamera");
    this->ResponseAreaPlayerID = TEXT("rpaPeekCameraPlayer");
    this->RangeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RangeComponent"));
    this->TargetIconComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TargetIconComponent"));
    this->CameraComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CameraComponent"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

