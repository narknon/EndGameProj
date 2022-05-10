#include "EndBTTask_BahamutMoveTo.h"

UEndBTTask_BahamutMoveTo::UEndBTTask_BahamutMoveTo() {
    this->NavQueryFilterType = EEndQueryFilterType::Default;
    this->ArrivalRadius = 1;
    this->StopMoveWhenFinished = true;
    this->MoveRequestBlackBoardName = TEXT("MoveRequest");
    this->HeightTolerance = 1;
    this->HeightAdjustTolerance = 1;
    this->FilterClass = NULL;
    this->StuckTimeLimit = 1;
    this->MoveTimeLimit = 1;
}

