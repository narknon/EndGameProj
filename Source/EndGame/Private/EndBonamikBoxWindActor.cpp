#include "EndBonamikBoxWindActor.h"

bool AEndBonamikBoxWindActor::IsActive() const {
    return false;
}

void AEndBonamikBoxWindActor::Deactivate() {
}

void AEndBonamikBoxWindActor::Activate() {
}

AEndBonamikBoxWindActor::AEndBonamikBoxWindActor() {
    this->WindData = NULL;
    this->BonamikWind = NULL;
}

