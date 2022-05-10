#include "EndNaviMapVolume.h"

AEndNaviMapVolume::AEndNaviMapVolume() {
    this->LayerNumber = EEndNaviMapLayer::Layer_00;
    this->OpenGroupNumber = EEndNaviMapOpenGroup::OpenGroup_None;
    this->VisitGroupNumber = EEndNaviMapVisitGroup::VisitGroup_None;
    this->SplitNum = (EEndNaviMapSplitNum)0;
    this->UniqueIndexOffset = EEndNaviMapUniqueIndexOffset::Offset_0;
    this->bIgnoreOverlap = false;
    this->bIgnoreGenetateTexture = false;
    this->UniqueIndex = 0;
    this->UniqueIndex2nd = 0;
}

