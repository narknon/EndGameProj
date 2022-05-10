#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleRole.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleRole : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RoleType_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> RoleTypeNum_Array;
    
    FEndDataTableBattleRole();
};

