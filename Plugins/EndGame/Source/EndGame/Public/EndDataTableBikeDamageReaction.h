#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikeDamageReaction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikeDamageReaction : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 EnableOnSuperArmor;
    
    UPROPERTY(EditAnywhere)
    TArray<float> KnockBackSlide_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> KnockBackYawMin_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> KnockBackYawMax_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> KnockBackYawTime_Array;
    
    FEndDataTableBikeDamageReaction();
};

