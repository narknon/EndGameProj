#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableLearningSkill.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableLearningSkill : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    FEndDataTableLearningSkill();
};

