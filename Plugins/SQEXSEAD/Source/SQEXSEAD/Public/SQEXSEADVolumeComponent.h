#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADVolumeComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSQEXSEADVolumeInfo VolumeInfo;
    
    USQEXSEADVolumeComponent();
};

