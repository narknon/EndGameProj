#include "EndFeelerWallExActor.h"

void AEndFeelerWallExActor::Stop(float BlendTime) {
}

void AEndFeelerWallExActor::Play(float BlendTime) {
}

AEndFeelerWallExActor::AEndFeelerWallExActor() {
    this->WaveCount = 0;
    this->bRefreshInstance = true;
    this->FadeInWaitTime = 1;
    this->OverrideFadeInTime = 1;
    this->OverrideFadeOutTime = 1;
}

