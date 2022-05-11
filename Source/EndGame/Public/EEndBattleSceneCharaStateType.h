#pragma once
#include "CoreMinimal.h"
#include "EEndBattleSceneCharaStateType.generated.h"

UENUM(BlueprintType)
enum class EEndBattleSceneCharaStateType : uint8 {
    Dead,
    SyncAction,
    Stun,
    DebuffStart,
    StatusChangePoison,
    StatusChangeFury,
    StatusChangeSadness,
    StatusChangeSilence,
    StatusChangeSleep,
    StatusChangeSlow,
    StatusChangeStop,
    StatusChangePetrify,
    StatusChangeBerserk,
    StatusChangeFrog,
    StatusChangeDeathSentence,
    StatusChangeDeath,
    StatusChangeBerserkAlways,
    StatusChangeFrogAlways,
    DamageReactionSmall,
    DamageReactionMediun,
    DamageReactionLarge,
    DamageReactionLaunch,
    DamageReactionBlow,
    DamageReactionStrike,
    DamageReactionMotion,
    DamageReactionRepel,
    Other,
};

