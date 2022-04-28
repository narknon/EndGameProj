#include "SQEXSEADWhizSeComponent.h"

USQEXSEADWhizSeComponent::USQEXSEADWhizSeComponent() {
    this->WhizSoundAsset = NULL;
    this->ApproachJudgmentDistance = 1;
    this->ApproachJudgmentVelocity = 1;
    this->bFollow = true;
    this->bOnlyOnce = true;
    this->bUseRelativeVelocity = false;
    this->MyAudioComponent = NULL;
    this->MyMeshComponent = NULL;
}

