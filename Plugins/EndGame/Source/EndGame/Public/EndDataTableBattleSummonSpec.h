#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleSummonSpec.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleSummonSpec : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 BuffID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AddCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CutScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName2;
    
    UPROPERTY(EditAnywhere)
    uint8 Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CutSceneAbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpecialStatusID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ATBChargeTime_Array;
    
    UPROPERTY(EditAnywhere)
    float NormalAttackInterval;
    
    UPROPERTY(EditAnywhere)
    float NormalAttackIntervalRandom;
    
    UPROPERTY(EditAnywhere)
    float TargetSetInterval;
    
    UPROPERTY(EditAnywhere)
    float ActiveTime;
    
    UPROPERTY(EditAnywhere)
    uint8 SpawnFXType;
    
    UPROPERTY(EditAnywhere)
    float SpawnFXXOffset;
    
    UPROPERTY(EditAnywhere)
    float SpawnFXZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CutSceneAbilityName;
    
    UPROPERTY(EditAnywhere)
    float CutSceneAbilityNameDisplayTime;
    
    FEndDataTableBattleSummonSpec();
};

