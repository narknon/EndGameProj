#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableExclusion.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableExclusion : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> ExclusionTableList_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BattlePriority;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> OnOffTable_Array;
    
    FEndDataTableExclusion();
};

