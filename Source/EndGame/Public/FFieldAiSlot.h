#pragma once
#include "CoreMinimal.h"
#include "FFieldAiSlot.generated.h"

UENUM(BlueprintType)
enum class FFieldAiSlot : uint8 {
    FFieldAiSlot_RESIDENT,
    FFieldAiSlot_FIELD_FORCE,
    FFieldAiSlot_INTEREST_DEFAULT,
    FFieldAiSlot_MINIGAME_LOW,
    FFieldAiSlot_FIELD_COMMON,
    FFieldAiSlot_FIELD_PLEVENT,
    FFieldAiSlot_FIELD_ANIMATION,
    FFieldAiSlot_FIELD_ACTION,
    FFieldAiSlot_CAUTION,
    FFieldAiSlot_INTEREST_HIGH,
    FFieldAiSlot_SITUATION,
    FFieldAiSlot_MINIGAME,
    FFieldAiSlot_FIELD_CINEMA,
    FFieldAiSlot_CINEMA,
    FFieldAiSlot_DEBUG,
    FFieldAiSlot_EMPTY,
};

