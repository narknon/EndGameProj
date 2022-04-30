#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "EndEmissiveControlComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndEmissiveControlComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Interp)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor EmissiveColor;
    
    UPROPERTY(EditAnywhere, Interp)
    float Temperature;
    
    UEndEmissiveControlComponent();
};

