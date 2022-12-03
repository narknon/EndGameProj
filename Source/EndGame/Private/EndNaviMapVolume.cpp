#include "EndNaviMapVolume.h"

AEndNaviMapVolume::AEndNaviMapVolume() {
    this->LayerNumber = EEndNaviMapLayer::Layer_00;
    this->OpenGroupNumber = EEndNaviMapOpenGroup::OpenGroup_None;
    this->VisitGroupNumber = EEndNaviMapVisitGroup::VisitGroup_None;
    this->SplitNum = EEndNaviMapSplitNum::Split_None;
    this->UniqueIndexOffset = EEndNaviMapUniqueIndexOffset::Offset_0;
    this->bIgnoreOverlap = false;
    this->bIgnoreGenetateTexture = false;
    this->UniqueIndex = -1;
    this->UniqueIndex2nd = -1;
}

