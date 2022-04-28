#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADLayoutComponent.generated.h"

class USoundBase;

UCLASS(meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADLayoutComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SoundName;
    
    UPROPERTY(EditAnywhere)
    FSQEXSEADLayoutInfo LayoutInfo;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreObstruction: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideInteriorFactor: 1;
    
    UPROPERTY(EditAnywhere)
    float InteriorFactor;
    
    UPROPERTY(EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PitchMultiplier;
    
    USQEXSEADLayoutComponent();
};

