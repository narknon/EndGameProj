#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "eBodyParts.h"
#include "BodyDriver_ArchtypeTuningSet.generated.h"

UCLASS(Blueprintable)
class BODYDRIVERPLUGIN_API UBodyDriver_ArchtypeTuningSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseArchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ArchetypeIsSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseBaseForExplosions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseBoundsInsteadOfPushes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceFrontWoundGrabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableReachForWound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableBrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableWindmill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MoveClavicleHitsToUpperArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MoveLowerLegHitsToThighs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MoveNeckHitsToHead;
    
    UPROPERTY(EditAnywhere)
    float OverrideFallenLimitBlendRate;
    
    UPROPERTY(EditAnywhere)
    float FallenBaseInitialBoundScale;
    
    UPROPERTY(EditAnywhere)
    float ArchetypeJointSpeedClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HandAndForearmsCountsAsNonFootOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AppendagesCountsAsNonFootOnGround;
    
    UPROPERTY(EditAnywhere)
    float ExplosionForceScale;
    
    UPROPERTY(EditAnywhere)
    float PatchInitialDistance;
    
    UPROPERTY(EditAnywhere)
    float PatchInitialDistanceMultiplierForNonExplosions;
    
    UPROPERTY(EditAnywhere)
    float PatchMoveRate;
    
    UPROPERTY(EditAnywhere)
    float PatchMoveRateMultiplierForNonExplosions;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<eBodyParts>> AdditionalPatchProbeParts;
    
    UPROPERTY(EditAnywhere)
    float PatchSize;
    
    UPROPERTY(EditAnywhere)
    float PatchSizeMultiplierForNonExplosions;
    
    UPROPERTY(EditAnywhere)
    float PatchMinDist;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<eBodyParts>> DisableCollisionLinks;
    
    UPROPERTY(EditAnywhere)
    float ArchetypeInitialBoundScale;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<eBodyParts>> ArchetypeInitialBoundScaleParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseArchTypeForDebugImpulsesTuning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseArchTypeForApplyImpulseTuning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseArchTypeForApplyExplosionTuning;
    
    UBodyDriver_ArchtypeTuningSet();
};

