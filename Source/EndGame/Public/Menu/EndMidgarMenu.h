#pragma once
#include "CoreMinimal.h"
#include "EndMainMenuWindow.h"
#include "EndMidgarMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndMidgarMenu : public UEndMainMenuWindow {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ZoomMinDistance;
    
    UPROPERTY(EditAnywhere)
    float ZoomMaxDistance;
    
    UPROPERTY(EditAnywhere)
    float ZoomDistanceUpperLayerDefault;
    
    UPROPERTY(EditAnywhere)
    float ZoomDistanceLowerLayerDefault;
    
    UPROPERTY(EditAnywhere)
    float DefaultCurrentLocationAngleOffset;
    
    UPROPERTY(EditAnywhere)
    float ResetAnimationLength;
    
    UPROPERTY(EditAnywhere)
    float MidgarSectorsAnimationLength;
    
    UPROPERTY(EditAnywhere)
    float FadeInOutLenght;
    
    UPROPERTY(EditAnywhere)
    float RotationYMin;
    
    UPROPERTY(EditAnywhere)
    float RotationYMax;
    
    UPROPERTY(EditAnywhere)
    float RotationYDefault;
    
    UPROPERTY(EditAnywhere)
    float RotationXDefault;
    
    UPROPERTY(EditAnywhere)
    float OutAnimationSpeedUp;
    
    UPROPERTY(EditAnywhere)
    float RotationXSpeed;
    
    UPROPERTY(EditAnywhere)
    float RotationYSpeed;
    
    UPROPERTY(EditAnywhere)
    float ZoomSpeed;
    
    UEndMidgarMenu();
private:
    UFUNCTION(BlueprintCallable)
    void ShowLegend(bool Show);
    
};

