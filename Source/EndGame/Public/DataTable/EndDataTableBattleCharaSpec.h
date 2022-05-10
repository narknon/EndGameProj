#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleCharaSpec.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleCharaSpec : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaSpecID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MenuListSortKey;
    
    UPROPERTY(EditAnywhere)
    uint8 DeadDirection;
    
    UPROPERTY(EditAnywhere)
    uint8 EnemyCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParameterTableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HPDirect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BP;
    
    UPROPERTY(EditAnywhere)
    float BurstTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BurstCameraSequenceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhysicsAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MagicAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhysicsDefense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MagicDefense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ATB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartATB;
    
    UPROPERTY(EditAnywhere)
    uint8 PropertyResist0;
    
    UPROPERTY(EditAnywhere)
    uint8 PropertyResist1;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> AttributeResist_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 RateDamageResist;
    
    UPROPERTY(EditAnywhere)
    uint8 FixDamageResist;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> BPDamageCorrectionProperty_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> BPDamageCorrectionAttribute_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> StatusChangeResist_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 KeepValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PossessionItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResponseAreaID;
    
    UPROPERTY(EditAnywhere)
    uint8 Hate;
    
    UPROPERTY(EditAnywhere)
    float AbilityTargetCorrectionDirectionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AbilityID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PartsID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentCharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Shield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BCAName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WeakCondition_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> EffectiveValue_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 CharacterKindID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyBookID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyBookIDPlus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReplaceTargetIconName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReplaceCameraLockSocketName;
    
    UPROPERTY(EditAnywhere)
    uint8 AerialNormalAttackJudgeType;
    
    UPROPERTY(EditAnywhere)
    float ReactionSensingRangeAngle;
    
    UPROPERTY(EditAnywhere)
    float ReactionSensingRangeRadiusShort;
    
    UPROPERTY(EditAnywhere)
    float ReactionSensingRangeRadiusMiddle;
    
    UPROPERTY(EditAnywhere)
    float ReactionSensingRangeRadiusLong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlagBit0;
    
    UPROPERTY(EditAnywhere)
    uint8 HateID;
    
    UPROPERTY(EditAnywhere)
    float OverrideRadius;
    
    UPROPERTY(EditAnywhere)
    uint8 LogCharacterType;
    
    FEndDataTableBattleCharaSpec();
};

