#include "EndBonamikGlobalWindActor.h"

class UEndBonamikWindData;

void AEndBonamikGlobalWindActor::SetWindData(UEndBonamikWindData* InWindData) {
}

void AEndBonamikGlobalWindActor::SetDirection(const FVector& InDirection) {
}

AEndBonamikGlobalWindActor::AEndBonamikGlobalWindActor() {
    this->WindData = NULL;
    this->BonamikWind = NULL;
}

