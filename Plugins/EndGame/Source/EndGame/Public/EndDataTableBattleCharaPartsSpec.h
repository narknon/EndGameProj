#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleCharaPartsSpec.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleCharaPartsSpec : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneName_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitRangeBaseSocketName;
    
    UPROPERTY(EditAnywhere)
    float HitRangeBaseAngle;
    
    UPROPERTY(EditAnywhere)
    float HitRangeAngleRange;
    
    UPROPERTY(EditAnywhere)
    float HitRangeHeightRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetIconSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraLockSocketName;
    
    UPROPERTY(EditAnywhere)
    uint8 PriorityLockOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BreakMeshID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageSourceID;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableBurstMotion;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableDamageCollision;
    
    UPROPERTY(EditAnywhere)
    uint8 DisablePushCollision;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableDisplayBattleLog;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableAerialNormalAttack;
    
    UPROPERTY(EditAnywhere)
    uint8 DummyFlag;
    
    UPROPERTY(EditAnywhere)
    uint8 DisplayWeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayWeakBaseAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayWeakRangeAngle;
    
    UPROPERTY(EditAnywhere)
    uint8 AlwaysEffectResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlwaysEffectResourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlwaysEffectCreatePartName;
    
    UPROPERTY(EditAnywhere)
    uint8 HPType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HP;
    
    UPROPERTY(EditAnywhere)
    uint8 PhysicsDefenseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhysicsDefense;
    
    UPROPERTY(EditAnywhere)
    uint8 MagicDefenseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MagicDefense;
    
    UPROPERTY(EditAnywhere)
    uint8 PropertyResistType0;
    
    UPROPERTY(EditAnywhere)
    uint8 PropertyResist0;
    
    UPROPERTY(EditAnywhere)
    uint8 PropertyResistType1;
    
    UPROPERTY(EditAnywhere)
    uint8 PropertyResist1;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> AttributeResistType_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> AttributeResist_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> BPDamageCorrectionPropertyType_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> BPDamageCorrectionProperty_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> BPDamageCorrectionAttributeType_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> BPDamageCorrectionAttribute_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ReplaceDamageSourceID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DisablePlayEffectSocketName_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AIPCCommandApproachSocketName;
    
    UPROPERTY(EditAnywhere)
    float AIPCCommandApproachAngle;
    
    FEndDataTableBattleCharaPartsSpec();
};

