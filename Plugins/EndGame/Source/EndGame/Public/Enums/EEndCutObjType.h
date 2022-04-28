#pragma once
#include "CoreMinimal.h"
#include "EEndCutObjType.generated.h"

UENUM()
namespace EEndCutObjType {
    enum Type {
        Character,
        PlayerCharacter,
        BackGround,
        Prop,
        SummonEnemyPoint,
        Weapon,
        Enemy,
        BossEnemy,
        Summoned,
        Vehicle,
        Camera,
        SpotLight,
        Effect,
        DepthOfField,
        EnvLight,
        DirLight,
        CamLens,
        Bloom,
        Fog,
        MotionBlur,
        ImageEffects,
        SSReflection,
        CategoryVol,
        LightOverride,
        PriorAvailability,
        EmissiveOverride,
        Other,
        Max = 0x3F,
        _NewSpawn = 0x80,
    };
}

