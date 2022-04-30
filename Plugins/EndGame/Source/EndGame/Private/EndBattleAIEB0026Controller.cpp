#include "EndBattleAIEB0026Controller.h"

bool AEndBattleAIEB0026Controller::RequestSpawnTip(FName CharaSpecName, bool spawnedInvisible, bool spawnedDisableCollision, EEndBattleEasySpawnEnableRagdollType enableRagdollType, float destroyTimer, FVector hidePosition) {
    return false;
}

bool AEndBattleAIEB0026Controller::RequestSpawnTentacle(FName keyword, FName CharaSpecName, FName SocketName, bool spawnedInvisible, EEndBattleEasySpawnEnableRagdollType enableRagdollType, float deadEventDelayTime, FVector hidePosition) {
    return false;
}

bool AEndBattleAIEB0026Controller::RequestReplaceTip(FName SocketName) {
    return false;
}

bool AEndBattleAIEB0026Controller::RequestKillTip(bool forceDestroy) {
    return false;
}

bool AEndBattleAIEB0026Controller::RequestBreakTentacle(FName keyword) {
    return false;
}



AEndBattleAIEB0026Controller::AEndBattleAIEB0026Controller() {
}

