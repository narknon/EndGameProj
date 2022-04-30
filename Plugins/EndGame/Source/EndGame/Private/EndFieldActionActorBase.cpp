#include "EndFieldActionActorBase.h"

AEndFieldActionActorBase::AEndFieldActionActorBase() {
    this->ForceActiveTargetIcon = false;
    this->WaitReservation = false;
    this->bDrawOffsetLocation = false;
    this->OnceOnlyReact = false;
    this->TextRenderComponent = NULL;
}

