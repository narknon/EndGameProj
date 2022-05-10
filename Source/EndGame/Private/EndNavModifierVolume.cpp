#include "EndNavModifierVolume.h"

AEndNavModifierVolume::AEndNavModifierVolume(const FObjectInitializer& ObjectInitializer) : AEndNavModifierVolumeBase(ObjectInitializer){
    this->Type = EModifierVolumeType::CoverPc;
    this->WallAffiliationID = 0;
    this->Wall = 0;
    this->Group = 0;
    this->EnvironmentQueryComponent = NULL;
    this->WallBorder = false;
    this->SemiWallBorder = false;
    this->bCeil = false;
    this->bWallJumpAcceptFree = false;
    this->WallJumpExtentHeight = 1;
}

