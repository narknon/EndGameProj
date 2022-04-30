#include "EndRecastNavMesh.h"

AEndRecastNavMesh::AEndRecastNavMesh() {
    this->bDrawNavAreaAll = true;
    this->bDrawCover = false;
    this->bDrawBattleArea = false;
    this->bDrawCationArea = false;
    this->bDrawExtendedBattleArea = false;
    this->bDrawFieldAction = false;
    this->bDrawHookShot = false;
    this->bDrawRedLaser = false;
    this->bDrawImpassable = false;
    this->bDrawImpassable2 = false;
    this->bDrawObstacle = false;
    this->bDrawCinemaObstacle = false;
    this->bDrawAddAttribute = false;
    this->bDrawAddAttribute2 = false;
    this->bDrawAddAttribute3 = false;
    this->bDrawAddAttribute4 = false;
    this->bDrawIgnore = false;
    this->bDrawVersatile = false;
    this->bDrawVersatile2 = false;
    this->bDrawVersatile3 = false;
    this->bDrawVersatile4 = false;
    this->bDrawInDoor = false;
    this->bDrawPathWay = false;
    this->bDrawCentralPathWay = false;
    this->bDrawDefault = false;
    this->bDrawFlatlands = false;
    this->bDrawWaterSurface = false;
    this->bDrawMountain = false;
    this->bDrawBattleSceneFilter = false;
    this->NavMeshVersion = 0;
    this->ObjectCount = 0;
}

