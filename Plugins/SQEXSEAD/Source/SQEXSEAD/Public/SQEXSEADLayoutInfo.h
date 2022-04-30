#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADLayoutType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SQEXSEADLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEXSEADLayoutType::Type> LayoutType;
    
    UPROPERTY(EditAnywhere)
    float InnerRadius;
    
    UPROPERTY(EditAnywhere)
    float OuterRadius;
    
    UPROPERTY(EditAnywhere)
    float OcclusionLPF;
    
    UPROPERTY(EditAnywhere)
    float OcclusionVolume;
    
    UPROPERTY(EditAnywhere)
    float HorizontalWedgeAngle;
    
    UPROPERTY(EditAnywhere)
    float VerticalWedgeAngle;
    
    UPROPERTY(EditAnywhere)
    float CylinderRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LayoutPointLocations;
    
    SQEXSEAD_API FSQEXSEADLayoutInfo();
};

