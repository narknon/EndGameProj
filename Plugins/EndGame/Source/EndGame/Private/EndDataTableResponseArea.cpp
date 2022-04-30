#include "EndDataTableResponseArea.h"

FEndDataTableResponseArea::FEndDataTableResponseArea() {
    this->ReactionRangeSquare = 1;
    this->SugessionRange = 1;
    this->SugessionRangeSquare = 1;
    this->ReactionAngle = 1;
    this->SugessionAngle = 1;
    this->NeedRaycast = 0;
    this->NeedScreenSpace = 0;
    this->NeedNaviCheck = 0;
    this->ReactionScreenRatioX = 1;
    this->ReactionScreenRatioY = 1;
    this->SugessionScreenRatioX = 1;
    this->SugessionScreenRatioY = 1;
    this->NeedZAngleCheck = 0;
    this->ReactionInEllipse = 0;
}

