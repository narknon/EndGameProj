#include "EndBattleSceneBlueprint.h"

class AEndCharacter;

void AEndBattleSceneBlueprint::SwitchCharaState(EEndBattleSceneCharaStateType& State, FName CharaName, bool bExecInState) {
}

void AEndBattleSceneBlueprint::SetPhase(int32 Value) {
}

void AEndBattleSceneBlueprint::SetHPByBattleSceneCharacterIndex(int32 srcCharacterIndex, int32 destCharacterIndex) {
}

void AEndBattleSceneBlueprint::SetAIPCControllerTick(EPlayerType PlayerType, bool Flag) {
}


























int32 AEndBattleSceneBlueprint::GetPhase() const {
    return 0;
}

void AEndBattleSceneBlueprint::ForceAIPCUseAbility(EPlayerType PlayerType, FName AbilityID, AEndCharacter* Target, FName TargetPartsID) {
}

FName AEndBattleSceneBlueprint::ConvertMultiTalkPlayTriggerID(FName TalkPlayTriggerId) {
    return NAME_None;
}


void AEndBattleSceneBlueprint::BattleSceneDelay(float Duration, FLatentActionInfo LatentInfo) {
}


AEndBattleSceneBlueprint::AEndBattleSceneBlueprint() {
    this->Phase = 1;
    this->bTickNewlySpawned = true;
}

