#pragma once
#include "CoreMinimal.h"
#include "Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Distributions/DistributionFloat.h"
#include "EVfxTrajectoryRenderAxisOption.h"
#include "Distributions/DistributionVector.h"
#include "VfxParticleModuleTypeDataTrajectory.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVfxParticleModuleTypeDataTrajectory : public UParticleModuleTypeDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxTrailCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_MaxTrailLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_TrailFadeAlpha;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_BaseVelocity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_BaseAcceleration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_SrcVelocityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVfxTrajectoryRenderAxisOption m_RenderAxisOption;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_TrailWidth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_TrailColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_TrailAlpha;
    
    UPROPERTY(EditAnywhere)
    float m_fTextureTileDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_TrailRandomUv;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_TrailRandomUvScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bRenderGeometry: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bApplyMatrixScaleVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIgnoreLimitTrailLength: 1;
    
    UPROPERTY(EditAnywhere)
    float m_fTrailDivDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BufferCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_UpdateBufferFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugDrawBufferPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugDrawPointCoordinate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugDrawPolygonLine: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugDrawInterpPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugDrawTangent: 1;
    
    UVfxParticleModuleTypeDataTrajectory();
};

