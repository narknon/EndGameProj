#include "SQEXSEADAnimNotifyPlayAutoSeParams.h"

FSQEXSEADAnimNotifyPlayAutoSeParams::FSQEXSEADAnimNotifyPlayAutoSeParams() {
    this->SourceType = ESQEXSEADANPlayAutoSeSourceType::MotionSoundType;
    this->MotionSoundType = ESQEXSEADAutoSeMotionSoundType::None;
    this->SurfaceAssetPathTable = NULL;
    this->AutoSePartsType = ESQEXSEADAutoSePartsType::Invalid;
    this->AutoSePartsIndex = 0;
    this->bCheckIsGrounded = false;
    this->bAttachToParts = false;
    this->SoundVolume = 1;
    this->SoundPitchMultiplier = 1;
}

