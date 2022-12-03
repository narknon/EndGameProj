#include "EndFeelerWallExActor.h"

void AEndFeelerWallExActor::Stop(float BlendTime) {
}

void AEndFeelerWallExActor::Play(float BlendTime) {
}

AEndFeelerWallExActor::AEndFeelerWallExActor() {
    this->WaveCount = 6;
    this->bRefreshInstance = true;
    this->FadeInWaitTime = 0.00f;
    this->OverrideFadeInTime = -1.00f;
    this->OverrideFadeOutTime = -1.00f;
}

