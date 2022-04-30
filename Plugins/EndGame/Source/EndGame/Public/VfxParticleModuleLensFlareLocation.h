#pragma once
#include "CoreMinimal.h"
#include "Particles/Location/ParticleModuleLocationBase.h"
#include "UObject/NoExportTypes.h"
#include "VfxLensFlareObjectData.h"
#include "VfxParticleModuleLensFlareLocation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVfxParticleModuleLensFlareLocation : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_vCenterOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fCentralMagnificationArea;
    
    UPROPERTY(EditAnywhere)
    float m_fCentralMagnificationCurvedStartDirection;
    
    UPROPERTY(EditAnywhere)
    float m_fCentralMagnificationCurvedEndDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVfxLensFlareObjectData> m_ObjectDataList;
    
    UVfxParticleModuleLensFlareLocation();
};

