#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableEnemyBookBattleCharaSpec.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableEnemyBookBattleCharaSpec : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaSpecID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextLabel;
    
    UPROPERTY(EditAnywhere)
    uint8 EnemyCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PossessionItemID;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> AttributeResist_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> StatusChangeResist_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> EffectiveValue_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyBookID;
    
    UPROPERTY(EditAnywhere)
    uint8 PropertyResist0;
    
    UPROPERTY(EditAnywhere)
    uint8 PropertyResist1;
    
    UPROPERTY(EditAnywhere)
    uint8 RateDamageResist;
    
    UPROPERTY(EditAnywhere)
    uint8 FixDamageResist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyBookIDPlus;
    
    FEndDataTableEnemyBookBattleCharaSpec();
};

