#include "EndDataTableAIParameter.h"

FEndDataTableAIParameter::FEndDataTableAIParameter() {
    this->Movable = 0;
    this->HitWall = 0;
    this->HitObject = 0;
    this->HitSelfReaction = 0;
    this->HitOthersReaction = 0;
    this->FitFloor = 0;
    this->MaxWeight = 0;
    this->DisableTickPause = 0;
    this->EnableSafeTransform = 0;
    this->ForceTurn = 0;
    this->InterpolationMove = 0;
    this->WalkRange = 0;
    this->GoalRadius = 0;
    this->FollowUpDashDistance = 1;
    this->ForceWalk = 0;
    this->FlightMaxSpeed = 1;
    this->FlightAcceleration = 1;
    this->NoOverTaking = 0;
    this->NoOverTakingDistance = 1;
    this->StopDistance = 1;
    this->LeadTurn = 0;
    this->RangeRadius = 1;
    this->StayTimeMIn = 0;
    this->StayTimeRand = 0;
    this->TurnBackDistance = 1;
    this->MoveStartDistance = 1;
}

