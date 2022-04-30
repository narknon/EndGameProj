#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableEnvironmentSet.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableEnvironmentSet : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AdditionalEnvironmentSetId;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> UnvisibleList_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelList_Array;
    
    FEndDataTableEnvironmentSet();
};

