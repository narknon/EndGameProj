#include "SQEX_KineDriverData.h"

USQEX_KineDriverData::USQEX_KineDriverData(const FObjectInitializer& ObjectInitializer) : UObject(ObjectInitializer){
    this->Skeleton = NULL;
    this->bPostKineDriver = false;
    this->WorkNum = 0;
}

