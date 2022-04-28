#pragma once
#include "CoreMinimal.h"
#include "EEndEquipmentSkillEffectType.generated.h"

UENUM()
enum class EEndEquipmentSkillEffectType {
    None,
    HPMaxAdd,
    MPMaxAdd,
    PhysicsAttackAdd,
    PhysicsDefenseAdd,
    MagicAttackAdd,
    MagicDefenseAdd,
    CriticalRateAdd,
    LuckAdd,
    DexterityAdd,
    GiveDamageCriticalAdd = 0x14,
    GiveDamageFireAdd,
    GiveDamageIceAdd,
    GiveDamageThunderAdd,
    GiveDamageWindAdd,
    GiveDamageWeaponAbilityAdd,
    GiveDamageLimitAbilityAdd,
    GiveDamageGroundNormalAttackComboAdd,
    GiveDamageAerialNormalAttackComboAdd,
    GiveDamageStateBurstAdd,
    GiveDamageWeakAttributeAdd,
    GiveDamageAttributeAdd,
    empty,
    GiveDamageUniqueAbilityAdd,
    GiveDamageNormalAttackAdd,
    GiveDamageAerialNormalAttackAdd,
    GiveDamageBreakablePartAdd,
    GiveDamageBackAdd,
    GiveDamageMPFullMPSpendAdd,
    GiveDamageSelfHPRecoverAdd,
    GiveDamageHPRecoverAdd,
    TakeDamageFireSub = 0x32,
    TakeDamageIceSub,
    TakeDamageThunderSub,
    TakeDamageWindSub,
    TakeDamagePhysicsGuardSuccessSub,
    TakeDamageMagicGuardSuccessSub,
    TakeDamageAttributeSub,
    TakeDamageSubAIPC,
    TakeBuffTimeAdd = 0x50,
    GiveBuffTimeAdd,
    GiveDebuffTimeAdd,
    StatusChangeResistAdd,
    PoisonDamageSub,
    TakeDebuffTimeSub,
    HitBonusATBRecoverAdd = 0x6E,
    MPRecoverTimeSub,
    LimitValueAdd,
    MPSpendAttackMagicSub,
    MPSpendHealMagicSub,
    MateriaSlotModify,
    HPRecoverKill,
    MPRecoverTakeDamage,
    Guts,
    CriticalWeaponAbilityAdd,
    HPRecoverBurstUniqueAbility,
    AppendAttributeDamageAdd,
    StartATBAdd,
    ItemDropAdd,
    SummonLevelAdd,
    ATBFullVision,
    LimitAddSpendATB,
    LimitAddSpendMP,
    Reraise,
    BerserkAlways,
    FrogAlways,
    LimitAddTime,
    AutoRemedy,
    APBonus,
    GiveDamageMPAmountAbilityAdd,
    GiveDamageHPAmountAbilityAdd,
    MagicChantingKeepBonus,
    ProvocationLBBonus,
    StealSuccessRateAdd,
    DespoilAbilityAdd,
    GiveDamageOffensiveModeCounterAdd = 0x96,
    GiveDamageOffensiveModeNormalAttackAdd,
    TifaBuffAddBattleStart = 0x9B,
    WeaponThrowAttackTimeAdd,
    LinkAbilitySpendATBSub,
    LinkLimitAbilityAdd,
    LinkJustGuardStatusChangeAdd,
};

