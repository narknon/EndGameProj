#include "EndBattleTalkOnEndBattleActor.h"

void AEndBattleTalkOnEndBattleActor::PlayVoice(bool bUnuseDefaultDelay, float OverrideDelayMinSeconds, float OverrideDelayMaxSeconds, FName VoiceSetId) {
}


AEndBattleTalkOnEndBattleActor::AEndBattleTalkOnEndBattleActor() {
    this->DelayMinSeconds = 1;
    this->DelayMaxSeconds = 1;
}

