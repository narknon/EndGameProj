#include "EndFieldActionActorPushContainer.h"
#include "EndFieldActionTriggerComponent.h"

AEndFieldActionActorPushContainer::AEndFieldActionActorPushContainer() {
    this->LongPushTime = 2.00f;
    this->PushVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PushVolume"));
}

