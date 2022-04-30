#include "EndSlu5bArmCameraActor.h"

AEndSlu5bArmCameraActor::AEndSlu5bArmCameraActor() {
    this->ReverseAngle = false;
    this->ChangeSequenceSeconds = 1;
    this->DefaultVerticalRCS = NULL;
    this->DefaultHorizontalRCS = NULL;
    this->CharacterVerticalRCS = NULL;
    this->CharacterHorizontalRCS = NULL;
}

