#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleAbility.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleAbility : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Explanation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExplanationInvalid_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 ShowName;
    
    UPROPERTY(EditAnywhere)
    float ShowNameSecond;
    
    UPROPERTY(EditAnywhere)
    uint8 ShowNameNonGuardableIcon;
    
    UPROPERTY(EditAnywhere)
    float InputBufferTime;
    
    UPROPERTY(EditAnywhere)
    uint8 CommandType;
    
    UPROPERTY(EditAnywhere)
    uint8 CommandTargetType;
    
    UPROPERTY(EditAnywhere)
    uint8 CastMagicEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ATB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MP;
    
    UPROPERTY(EditAnywhere)
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReactionInfluenceID;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> CancelNumber_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimResourceReferenceBattleCharaSpecID;
    
    UPROPERTY(EditAnywhere)
    uint8 AnimResourceReferencePlayerType;
    
    UPROPERTY(EditAnywhere)
    uint8 AnimationSelectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AnimationID_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> AnimationLoopTime_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> AddAnimationIndex_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AddAnimationName_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> AddAnimationPlayCount_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> AddAnimationPlayInterval_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> AddAnimationEndBase_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationUpperBodyName;
    
    UPROPERTY(EditAnywhere)
    uint8 SkeletonControlType;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetCount;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetAimPosition;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetCorrectionDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetCorrectionDirection;
    
    UPROPERTY(EditAnywhere)
    float TargetCorrectionDirectionAngle;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetCorrectionHeight;
    
    UPROPERTY(EditAnywhere)
    float TargetCorrectionHeightSpeed;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetCloseMove;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetCorrectionDirectionImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplaceDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    uint8 DamageCreateMoveCollisionObjectOff;
    
    UPROPERTY(EditAnywhere)
    uint8 CameraSequenceNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraSequenceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpecialStatusChangeID;
    
    UPROPERTY(EditAnywhere)
    uint8 KeepValue;
    
    UPROPERTY(EditAnywhere)
    uint8 DistFeelType;
    
    UPROPERTY(EditAnywhere)
    uint8 UseSoundResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseSoundResourceName;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ReactionCondition_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> ReactionConditionParameterValue_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ReactionConditionNotifyIndex_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ReactionType_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> ReactionParameterValue_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ReactionParameterString_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ResourceID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SummonPoint;
    
    UPROPERTY(EditAnywhere)
    uint8 AfterWalkType;
    
    UPROPERTY(EditAnywhere)
    float TeleportMinDistance;
    
    UPROPERTY(EditAnywhere)
    float LinkMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LearningSkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ResourceName_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Flag0;
    
    FEndDataTableBattleAbility();
};

