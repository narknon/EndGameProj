#include "EndFieldActionActorPushContainer.h"
#include "EndFieldActionTriggerComponent.h"

AEndFieldActionActorPushContainer::AEndFieldActionActorPushContainer() {
    this->LongPushTime = 1;
    this->PushVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PushVolume"));
}

