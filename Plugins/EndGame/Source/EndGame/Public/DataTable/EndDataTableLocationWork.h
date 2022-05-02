#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableLocationWork.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableLocationWork : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocationNumber;
    
    FEndDataTableLocationWork();
};

