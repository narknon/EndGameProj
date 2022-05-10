#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "EndCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Interp)
    float FocalLength;
    
    UPROPERTY(EditAnywhere, Interp)
    float FocusDistance;
    
    UPROPERTY(EditAnywhere, Interp)
    float FilmWidth;
    
    UPROPERTY(EditAnywhere, Interp)
    float Roll;
    
    UEndCameraComponent();
    UFUNCTION(BlueprintCallable)
    void SetRoll(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAperture(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusDistance(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFocalLength(float NewValue);
    
};

