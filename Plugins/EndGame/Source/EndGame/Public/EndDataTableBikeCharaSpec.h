#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikeCharaSpec.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikeCharaSpec : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaSpecID;
    
    UPROPERTY(EditAnywhere)
    uint8 CreateVehicleFieldAI;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableVehicleWind;
    
    UPROPERTY(EditAnywhere)
    float OverrideRollAngleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RiderCharaSpecID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SocketName_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> CreateRiderFieldAI_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> DisableRiderWind_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 AIControllerIndex;
    
    UPROPERTY(EditAnywhere)
    uint8 HideWeapon;
    
    UPROPERTY(EditAnywhere)
    float MinSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AbilityID_Array;
    
    UPROPERTY(EditAnywhere)
    float AttackIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitPointEasy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitPoint;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> PushedReaction_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 PushedReactionOnRagDoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageReactionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AIAbilitySetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetToAllyAIAbilitySetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AfterFireEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MufflerSmokeEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MufflerEffectBoneName;
    
    UPROPERTY(EditAnywhere)
    uint8 InvincibleState;
    
    UPROPERTY(EditAnywhere)
    float AllyPositionAtLastOneEnemy;
    
    UPROPERTY(EditAnywhere)
    float PersonalSpaceRadius;
    
    UPROPERTY(EditAnywhere)
    uint8 AvoidPersonalSpace;
    
    FEndDataTableBikeCharaSpec();
};

