#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCondorFortCharacterParameter.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCondorFortCharacterParameter : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Attack;
    
    FEndDataTableCondorFortCharacterParameter();
};

