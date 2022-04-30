#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EndCategoryVolumeControlComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndCategoryVolumeControlComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float Volume_Backup;
    
public:
    UPROPERTY(EditAnywhere, Interp)
    float Volume;
    
    UPROPERTY(EditAnywhere)
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UEndCategoryVolumeControlComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateCategoryVolume();
    
    UFUNCTION(BlueprintCallable)
    void TerminateCategoryVolume();
    
    UFUNCTION(BlueprintCallable)
    void InitializeCategoryVolume(const FName& TargetName);
    
};

