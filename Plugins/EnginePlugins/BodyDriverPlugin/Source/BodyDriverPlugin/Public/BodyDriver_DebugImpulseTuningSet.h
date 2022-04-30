#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BodyDriverMessageType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "eBodyParts.h"
#include "BodyDriver_DebugImpulseTuningSet.generated.h"

UCLASS(Blueprintable)
class BODYDRIVERPLUGIN_API UBodyDriver_DebugImpulseTuningSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ForceSwitchToAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableRandomImpulses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TreatAsMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TreatAsExplosion;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<BodyDriverMessageType> ImpulseType;
    
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyApplyOncePerActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyWhenInactive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyWhenUnbalanced;
    
    UPROPERTY(EditAnywhere)
    float WaitToApplyAfterBalancing;
    
    UPROPERTY(EditAnywhere)
    float ChanceOfWeakRandomImpulse;
    
    UPROPERTY(EditAnywhere)
    float ChanceOfStrongRandomImpulse;
    
    UPROPERTY(EditAnywhere)
    float ChanceOfMeleeMediumRandomImpulse;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<eBodyParts> PartOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseOverrideImpulseDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ImpulseDirectionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ImpulseDirectionOverrideTransOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseLastAppliedImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableClickImpulses;
    
    UPROPERTY(EditAnywhere)
    float ChanceOfWeakClickImpulse;
    
    UPROPERTY(EditAnywhere)
    float ChanceOfStrongClickImpulse;
    
    UBodyDriver_DebugImpulseTuningSet();
};

