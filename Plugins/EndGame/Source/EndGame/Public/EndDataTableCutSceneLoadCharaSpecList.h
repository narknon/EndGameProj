#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCutSceneLoadCharaSpecList.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCutSceneLoadCharaSpecList : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LoadCharaSpecList_Array;
    
    FEndDataTableCutSceneLoadCharaSpecList();
};

