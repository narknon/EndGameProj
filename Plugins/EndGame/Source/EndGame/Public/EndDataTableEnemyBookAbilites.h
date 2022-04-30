#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableEnemyBookAbilites.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableEnemyBookAbilites : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbiliteName;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Property_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableSilence;
    
    UPROPERTY(EditAnywhere)
    uint8 EnemySkill;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Attribute_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> StateChange_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LearningAbilitie;
    
    FEndDataTableEnemyBookAbilites();
};

