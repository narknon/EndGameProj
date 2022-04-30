#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleSceneSituation.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleSceneSituation : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SituationID;
    
    FEndDataTableBattleSceneSituation();
};

