#include "EndAnimNotifyPlayCharacterFootSound.h"

UEndAnimNotifyPlayCharacterFootSound::UEndAnimNotifyPlayCharacterFootSound() {
    this->AutoSeMotionType = ESQEXSEADAutoSeMotionSoundType::Walk;
    this->bDirectAssign = false;
    this->SwitchValue = 1;
    this->ZeroOneSlotIndex = 0;
    this->ZeroOneValue = 1;
    this->bPlayOnlyCharecterLanded = true;
    this->bSyncOwnerHiddenState = true;
}

