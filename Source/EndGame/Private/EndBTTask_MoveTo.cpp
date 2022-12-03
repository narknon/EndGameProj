#include "EndBTTask_MoveTo.h"

UEndBTTask_MoveTo::UEndBTTask_MoveTo() {
    this->MoveType = EEndAiMoveType::RUN;
    this->NavQueryFilterType = EEndQueryFilterType::Battle;
    this->ArrivalRadius = 50.00f;
    this->IsStrafe = false;
    this->IsFixMove = false;
    this->StopMoveWhenFinished = true;
    this->DistanceSwitchWalkMode = -1.00f;
    this->MoveRequestBlackBoardName = TEXT("MoveRequest");
}

