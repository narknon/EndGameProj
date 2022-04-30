#include "EndBattleAIEB0012Controller.h"

void AEndBattleAIEB0012Controller::UpdateBehaviorRateFunc(FName Name, int32 addRate) {
}

bool AEndBattleAIEB0012Controller::RequestSpawnLeftArm(FName CharaSpecName, bool spawnedInvisible, bool spawnedDisableCollision, EEndBattleEasySpawnEnableRagdollType enableRagdollType, float deadEventDelayTime, FVector hidePosition, bool recycle) {
    return false;
}

bool AEndBattleAIEB0012Controller::RequestReplaceLeftArm(FName SocketName) {
    return false;
}

bool AEndBattleAIEB0012Controller::RequestRepairLeftArm(FName charaPartsSpecName, FName meshLabelName) {
    return false;
}

bool AEndBattleAIEB0012Controller::RequestKillLeftArm(bool forceDestroy) {
    return false;
}

bool AEndBattleAIEB0012Controller::RequestDestroyLeftArmActor() {
    return false;
}


AEndBattleAIEB0012Controller::AEndBattleAIEB0012Controller() {
}

