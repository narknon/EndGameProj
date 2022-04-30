#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableEnemyBookBattleDamageSource.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableEnemyBookBattleDamageSource : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Property;
    
    UPROPERTY(EditAnywhere)
    uint8 Attribute0;
    
    UPROPERTY(EditAnywhere)
    uint8 Attribute1;
    
    UPROPERTY(EditAnywhere)
    uint8 Attribute2;
    
    UPROPERTY(EditAnywhere)
    uint8 Attribute3;
    
    UPROPERTY(EditAnywhere)
    uint8 Attribute4;
    
    UPROPERTY(EditAnywhere)
    uint8 Attribute5;
    
    UPROPERTY(EditAnywhere)
    uint8 Attribute6;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> StatusChangeType_Array;
    
    FEndDataTableEnemyBookBattleDamageSource();
};

