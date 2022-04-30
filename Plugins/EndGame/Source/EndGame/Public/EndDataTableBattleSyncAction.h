#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleSyncAction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleSyncAction : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 EnableAirTarget;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableTargetTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RelatedOwnerPartID;
    
    UPROPERTY(EditAnywhere)
    uint8 CameraSequenceNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraSequenceID;
    
    UPROPERTY(EditAnywhere)
    uint8 StopCameraDetach;
    
    UPROPERTY(EditAnywhere)
    uint8 AttachType;
    
    UPROPERTY(EditAnywhere)
    float AttachInterpTime;
    
    UPROPERTY(EditAnywhere)
    float AttachRotInterpTime;
    
    UPROPERTY(EditAnywhere)
    uint8 AttachLocationType;
    
    UPROPERTY(EditAnywhere)
    uint8 AttachRotationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(EditAnywhere)
    uint8 AttachRootOffsetType;
    
    UPROPERTY(EditAnywhere)
    uint8 NoAttach;
    
    UPROPERTY(EditAnywhere)
    uint8 AlongSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwnerDisplayNameSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwnerPartID;
    
    UPROPERTY(EditAnywhere)
    float OwnerPartDamageToTargetRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwnerPartAcceptDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetMotionType;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetDisableFromEnemy;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetDoesntGetTrophy;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetEnableCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplaceDamageSourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwnerBeginAnimID;
    
    UPROPERTY(EditAnywhere)
    uint8 OwnerBeginAnimBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetBeginAnimID;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetBeginAnimBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetBeginDetachDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetBeginDetachDamageSourceIDEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwnerLoopAnimID;
    
    UPROPERTY(EditAnywhere)
    uint8 OwnerLoopAnimBlend;
    
    UPROPERTY(EditAnywhere)
    uint8 OwnerHPType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnerHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwnerDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    uint8 OwnerEnableWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwnerEnableWalkBoneFilterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetLoopAnimID;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetLoopAnimBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetAbilityHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetMagicHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetLimitHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetLoopDetachDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetLoopDetachDamageSourceIDEffect;
    
    UPROPERTY(EditAnywhere)
    float LoopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OwnerFailureAnimID_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 OwnerFailureAnimBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetFailureAnimID_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetFailureAnimBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetFailureAnimDamageSourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetFailureDetachDamageSourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OwnerSuccessAnimID_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 OwnerSuccessAnimBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetSuccessAnimID_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetSuccessAnimBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSuccessDetachDamageSourceID;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableOwnerDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetReleaseAnimID;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetReleaseAnimBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwnerReleaseAnimID;
    
    UPROPERTY(EditAnywhere)
    uint8 OwnerReleaseAnimBlend;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableTargetDead;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetDetachPosture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetDetachEnableReactionDamageSourceID;
    
    FEndDataTableBattleSyncAction();
};

