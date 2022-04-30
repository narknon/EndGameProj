#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleShield.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleShield : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> CommandTypeGuardType_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> EnableState_Array;
    
    UPROPERTY(EditAnywhere)
    float AngleRight;
    
    UPROPERTY(EditAnywhere)
    float AngleLeft;
    
    UPROPERTY(EditAnywhere)
    uint8 KeepValue;
    
    UPROPERTY(EditAnywhere)
    float BlockPhysicsCoefficient;
    
    UPROPERTY(EditAnywhere)
    float BlockMagicCoefficient;
    
    UPROPERTY(EditAnywhere)
    float BlockBPCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageSourceID;
    
    UPROPERTY(EditAnywhere)
    float CrashPhysicsCoefficient;
    
    UPROPERTY(EditAnywhere)
    float CrashMagicCoefficient;
    
    UPROPERTY(EditAnywhere)
    float CrashBPCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CrashAbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CrashDamageSourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NearFinishDamageSourceID;
    
    FEndDataTableBattleShield();
};

