#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleCommandLinkage.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleCommandLinkage : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Bonus;
    
    UPROPERTY(EditAnywhere)
    float Second;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextLabel;
    
    FEndDataTableBattleCommandLinkage();
};

