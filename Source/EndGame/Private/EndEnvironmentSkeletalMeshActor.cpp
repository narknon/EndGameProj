#include "EndEnvironmentSkeletalMeshActor.h"

AEndEnvironmentSkeletalMeshActor::AEndEnvironmentSkeletalMeshActor() {
    this->bCheckedLocationAssetData = false;
    this->bAdjustTerrainCollisionRotation = false;
    this->bEnableSeeThroughSkillCamera = false;
    this->bUpdateCollisionFlagsOnChangeTickPause = true;
}

