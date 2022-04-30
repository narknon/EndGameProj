#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCharaExchangeTable.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCharaExchangeTable : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MotionFolder;
    
    FEndDataTableCharaExchangeTable();
};

