#include "SQEX_KineDriver_Component.h"

void USQEX_KineDriver_Component::CopyFromSkeletalMeshAssetUserData() {
}

USQEX_KineDriver_Component::USQEX_KineDriver_Component() {
    this->KineDriverIndex = 0;
    this->EnableScaleOpChildSSC = false;
    this->TickGroup = TG_PrePhysics; //// to fix with custom engine build
    this->Enabled = true;
    this->EnableLOD = false;
    this->MinScreenSize = 1;
    this->EnableFrustumCulling = false;
    this->EnableCheckDrawn = false;
    this->SkeletalMeshComponent = NULL;
}

