#pragma once
#include "CoreMinimal.h"
#include "Particles/Camera/ParticleModuleCameraBase.h"
#include "Distributions/DistributionFloat.h"
#include "Distributions/DistributionVector.h"
#include "UObject/NoExportTypes.h"
#include "VfxParticleModuleCameraControl.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVfxParticleModuleCameraControl : public UParticleModuleCameraBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_DebugSetPreviewCamera: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RefPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Fov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat m_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector m_Rotation;
    
    UPROPERTY(EditAnywhere)
    float m_BlendTime;
    
    UPROPERTY(EditAnywhere)
    float m_BlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_EnableGamePad: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_RotationOffset;
    
    UPROPERTY(EditAnywhere)
    float m_DampingScale;
    
    UPROPERTY(EditAnywhere)
    float m_Rstick_RotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_Rstick_ZoomSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_Rstick_ZoomMin;
    
    UPROPERTY(EditAnywhere)
    float m_Rstick_ZoomMax;
    
    UVfxParticleModuleCameraControl();
};

