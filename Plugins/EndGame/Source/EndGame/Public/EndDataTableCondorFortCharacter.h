#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCondorFortCharacter.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCondorFortCharacter : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaSpecID;
    
    UPROPERTY(EditAnywhere)
    uint8 Role;
    
    UPROPERTY(EditAnywhere)
    float MoveSpeed;
    
    UPROPERTY(EditAnywhere)
    uint8 MoveType;
    
    UPROPERTY(EditAnywhere)
    float SpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Attack;
    
    UPROPERTY(EditAnywhere)
    float MoveInterval;
    
    UPROPERTY(EditAnywhere)
    float MoveDistance;
    
    UPROPERTY(EditAnywhere)
    float SearchRange;
    
    UPROPERTY(EditAnywhere)
    float AttackRange;
    
    UPROPERTY(EditAnywhere)
    float AttackInterval;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetBase;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetGround;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetAir;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterParameterID;
    
    UPROPERTY(EditAnywhere)
    uint8 EnemyCategory;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> PropertyResist_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> AttributeResist_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> StatusChangeResist_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 KeepValue;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableLaunch;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableKnockback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubCharacterID;
    
    UPROPERTY(EditAnywhere)
    float OffsetX;
    
    UPROPERTY(EditAnywhere)
    float OffsetY;
    
    UPROPERTY(EditAnywhere)
    float OffsetZ;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableTargetLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetLineAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AimTargetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatusChangeEffectAttachSocket;
    
    FEndDataTableCondorFortCharacter();
};

