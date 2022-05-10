#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BonamikHelicopterWindData.h"
#include "EndBonamikHelicopterWindComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndBonamikHelicopterWindComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBonamikHelicopterWindData WindData;
    
    UPROPERTY(EditAnywhere)
    float HalfHeight;
    
    UPROPERTY(EditAnywhere)
    float HeightMargin;
    
    UPROPERTY(EditAnywhere)
    float OuterPitchBottom;
    
    UPROPERTY(EditAnywhere)
    float HeightMarginStrengthScale;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float RadiusMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWindActive;
    
    UEndBonamikHelicopterWindComponent();
};

