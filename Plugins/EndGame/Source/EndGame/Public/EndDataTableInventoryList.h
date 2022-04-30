#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableInventoryList.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableInventoryList : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TableID;
    
    UPROPERTY(EditAnywhere)
    uint8 IsUnViewed;
    
    UPROPERTY(EditAnywhere)
    uint8 IsStack;
    
    FEndDataTableInventoryList();
};

