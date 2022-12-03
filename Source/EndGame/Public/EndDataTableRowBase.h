#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EndDataTableRowBase.generated.h"

USTRUCT(BlueprintType)
struct FEndDataTableRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    ENDGAME_API FEndDataTableRowBase();
};

