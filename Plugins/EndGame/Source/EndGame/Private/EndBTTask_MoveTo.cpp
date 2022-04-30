#include "EndBTTask_MoveTo.h"

UEndBTTask_MoveTo::UEndBTTask_MoveTo() {
    this->MoveType = EEndAiMoveType::RUN;
    this->NavQueryFilterType = EEndQueryFilterType::Default;
    this->ArrivalRadius = 1;
    this->IsStrafe = false;
    this->IsFixMove = false;
    this->StopMoveWhenFinished = true;
    this->DistanceSwitchWalkMode = 1;
    this->MoveRequestBlackBoardName = TEXT("MoveRequest");
}

