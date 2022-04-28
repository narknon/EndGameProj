#pragma once
#include "CoreMinimal.h"
#include "EPlayerStatus.generated.h"

UENUM()
enum class EPlayerStatus : uint8 {
	EPlayerType_NONE,
	EPlayerType_PARTY,
	EPlayerType_GUEST,
	EPlayerType_CACHE,
	EPlayerType_GUEST_Battle,
	EPlayerType_PARTY_Battle_Support,
	EPlayerType_MAX,
};