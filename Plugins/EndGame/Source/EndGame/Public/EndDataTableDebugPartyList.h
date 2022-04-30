#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableDebugPartyList.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableDebugPartyList : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ViewText;
    
    UPROPERTY(EditAnywhere)
    uint8 UsePartyInFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugInventoryID;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> PartyInFlag_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> PartyState_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> InitParamGroupID_Array;
    
    FEndDataTableDebugPartyList();
};

