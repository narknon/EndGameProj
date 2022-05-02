#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableEquipmentSkill.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableEquipmentSkill : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 ConditionType0;
    
    UPROPERTY(EditAnywhere)
    float ConditionValue0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectType0;
    
    UPROPERTY(EditAnywhere)
    float EffectValue0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectName0;
    
    FEndDataTableEquipmentSkill();
};

