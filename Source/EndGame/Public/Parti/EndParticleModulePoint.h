#pragma once
#include "CoreMinimal.h"
#include "EndParticleModuleBase.h"
#include "Engine/EngineTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndEffectLocationKind -FallbackName=EEndEffectLocationKind
#include "Distributions/DistributionVector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EndEffectSocketName -FallbackName=EndEffectSocketName
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EVfxRotationMatrixOrder -FallbackName=EVfxRotationMatrixOrder
#include "EndParticleModuleEventSpawnEffect.h"
#include "Particles/End/EVfxRotationMatrixOrder.h"
#include "UObject/NoExportTypes.h"
#include "EndParticleModulePoint.generated.h"


UCLASS(Blueprintable, EditInlineNew)
class ENDGAME_API UEndParticleModulePoint : public UEndParticleModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PointName;
    
    UPROPERTY(EditAnywhere)
    EEndEffectLocationKind m_Kind;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector m_Location;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector m_Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVfxRotationMatrixOrder m_RotationMatrixOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndEffectSocketName m_SocketName;
    
    UPROPERTY(EditAnywhere)
    float m_BlendTime;
    
    UPROPERTY(EditAnywhere)
    float m_BlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsWorldRayCast: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_RayCastFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_RayCastTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_RayCastExtent;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> m_CollisionTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUseHitNormal: 1;
    
    UPROPERTY(EditAnywhere)
    float m_fRayCastSpawnParticleScale;
    
    UPROPERTY(EditAnywhere)
    float m_fHitRayCastSpawnParticleScale;
    
    UEndParticleModulePoint();
};

