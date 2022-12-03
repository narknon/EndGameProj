#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleEnemyIconUI.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleEnemyIconUI : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FEndDataTableBattleEnemyIconUI();
};

