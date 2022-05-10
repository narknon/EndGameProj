#include "EndBattleAIEN2101Controller.h"

bool AEndBattleAIEN2101Controller::RequestSpawnRightArm(FName CharaSpecName, bool spawnedInvisible, bool spawnedDisableCollision, EEndBattleEasySpawnEnableRagdollType enableRagdollType, float deadEventDelayTime, FVector hidePosition, bool recycle) {
    return false;
}

bool AEndBattleAIEN2101Controller::RequestReplaceRightArm(FName SocketName) {
    return false;
}

bool AEndBattleAIEN2101Controller::RequestRepairRightArm(FName charaPartsSpecName, FName meshLabelName) {
    return false;
}

bool AEndBattleAIEN2101Controller::RequestKillRightArm(bool forceDestroy) {
    return false;
}

bool AEndBattleAIEN2101Controller::RequestDestroyRightArmActor() {
    return false;
}

bool AEndBattleAIEN2101Controller::RequestBreakRightArm(FName charaPartsSpecName, FName SocketName) {
    return false;
}


AEndBattleAIEN2101Controller::AEndBattleAIEN2101Controller() {
}

