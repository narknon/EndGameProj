#include "EndAerialNavAreaVolume.h"
#include "EndAerialNavBoxComponent.h"

AEndAerialNavAreaVolume::AEndAerialNavAreaVolume() {
    this->X_POINT_MAX = 0;
    this->Y_POINT_MAX = 0;
    this->Z_POINT_MAX = 0;
    this->EnableEqualInterval = false;
    this->CanEverAffectNavigation = true;
    this->IsAffectedBattleArea = true;
    this->NotCheckCollision = false;
    this->NotCheckGameCameraCollision = false;
    this->X_CM_SPACE_MAX = 0;
    this->Y_CM_SPACE_MAX = 0;
    this->Z_CM_SPACE_MAX = 0;
    this->EndArealNavBox = CreateDefaultSubobject<UEndAerialNavBoxComponent>(TEXT("EndAerialNavBox"));
    this->XPointNum = 0;
    this->YPointNum = 0;
    this->ZPointNum = 0;
    this->PointMaxNum = 0;
}

