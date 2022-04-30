#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "eBodyParts.h"
#include "UObject/NoExportTypes.h"
#include "eCharacterType.h"
#include "BodyDriver_BaseDataTuningSet.generated.h"

UCLASS(Blueprintable)
class BODYDRIVERPLUGIN_API UBodyDriver_BaseDataTuningSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableBodyDriver;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<eCharacterType> CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReferencePoseForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Chest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftHandLocalPointingDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftHandLocalUpDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RightHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightHandLocalPointingDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightHandLocalUpDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeftFoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftFootLocalPointingDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftFootLocalUpDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RightFoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightFootLocalPointingDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightFootLocalUpDir;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<eBodyParts>> StandingSelfCollisionExcludedParts;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<eBodyParts>> FallenSelfCollisionExcludedParts;
    
    UPROPERTY(EditAnywhere)
    float TotalMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TreatAuthoredMassesAsDensities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseReferenceForIdlePose;
    
    UPROPERTY(EditAnywhere)
    float UpBoundHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseIdleForTracking;
    
    UPROPERTY(EditAnywhere)
    float StandingFootFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExternalDriveIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InternalDriveIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPositionIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinVelocityIterations;
    
    UPROPERTY(EditAnywhere)
    float MaxPartInitialLinearVelocity;
    
    UPROPERTY(EditAnywhere)
    float MaxPartInitialAngularVelocity;
    
    UPROPERTY(EditAnywhere)
    float InitialLimitTwistWideningAdd;
    
    UPROPERTY(EditAnywhere)
    float InitialLimitSwingWideningAdd;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<eBodyParts>> InitialLimitWideningParts;
    
    UPROPERTY(EditAnywhere)
    float PushesPartRadius;
    
    UPROPERTY(EditAnywhere)
    float PushesMaxMagnitude;
    
    UPROPERTY(EditAnywhere)
    float PushesMagnitudeScaleDepth;
    
    UPROPERTY(EditAnywhere)
    float SwingDirectionWeight;
    
    UPROPERTY(EditAnywhere)
    float MinMeleeAngleFromAttacker;
    
    UPROPERTY(EditAnywhere)
    float MaxMeleeAngleFromAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DontAllowOffAxisImpacts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseBalanceBehaviorForStagger;
    
    UPROPERTY(EditAnywhere)
    float MeleeDirectionRandomizationAllowance;
    
    UPROPERTY(EditAnywhere)
    float DefaultBodyJointSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableBonamik;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SlipperyFeet;
    
    UPROPERTY(EditAnywhere)
    float OverridePelvisToHeadUprightAngle;
    
    UBodyDriver_BaseDataTuningSet();
};

