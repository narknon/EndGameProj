#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableLocationProgrammer.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableLocationProgrammer : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EntryObjectList_Array;
    
    FEndDataTableLocationProgrammer();
};

