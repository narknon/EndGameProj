#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionFloatConstantCurve.h"
#include "UObject/NoExportTypes.h"
#include "EndEffectSinCosFloat.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UEndEffectSinCosFloat : public UDistributionFloatConstantCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat m_ValueScale;
    
    UPROPERTY(EditAnywhere)
    float m_CycleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_UseCos: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_Absolute: 1;
    
    UEndEffectSinCosFloat();
};

