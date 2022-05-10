#include "EndFieldActionActorHangMove.h"
#include "EndFieldActionTriggerComponent.h"

AEndFieldActionActorHangMove::AEndFieldActionActorHangMove() {
    this->MoveDirection = EEndFieldActionHangMoveDirection::LEFT_MOVE;
    this->MoveStepNum = 0;
    this->PressVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PressVolume"));
}

