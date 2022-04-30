#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikeAbility.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikeAbility : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    uint8 AbilityType;
    
    UPROPERTY(EditAnywhere)
    uint8 NormalRange;
    
    UPROPERTY(EditAnywhere)
    uint8 DistanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraSequenceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReferenceBattleAbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameTextID;
    
    UPROPERTY(EditAnywhere)
    float CoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExclusiveGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetToPlayerOdds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetToAllyOdds;
    
    UPROPERTY(EditAnywhere)
    uint8 AttackerPositionCondition;
    
    UPROPERTY(EditAnywhere)
    float CenterPositionOffset;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetPositionCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSearchAngleRange;
    
    UPROPERTY(EditAnywhere)
    float TargetSearchDistanceMin;
    
    UPROPERTY(EditAnywhere)
    float TargetSearchDistanceMax;
    
    UPROPERTY(EditAnywhere)
    float TargetSearchDiffSplineMileageMin;
    
    UPROPERTY(EditAnywhere)
    float TargetSearchDiffSplineMileageMax;
    
    UPROPERTY(EditAnywhere)
    uint8 SuperArmorSincePrepare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PrepareAttack_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> PrepareAttackParameter_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 NotCancelAtOutOfRange;
    
    UPROPERTY(EditAnywhere)
    float PrepareAttackTimeout;
    
    UPROPERTY(EditAnywhere)
    float ForceAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrepareAttackBeginMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrepareAttackLoopMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrepareAttackCancelMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CoolDownLoopMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CoolDownEndMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InterruptAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BranchAbility_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkSetAtPrepareAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkSetAtAttack;
    
    UPROPERTY(EditAnywhere)
    float BurstDamageBonus;
    
    FEndDataTableBikeAbility();
};

