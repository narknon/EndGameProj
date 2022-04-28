#pragma once
#include "CoreMinimal.h"
#include "EEndAiCharaType.generated.h"

UENUM()
namespace EEndAiCharaType {
    enum Type {
        None,
        PCMembers,
        EnemyMembers,
        Leader,
    };
}

