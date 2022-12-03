#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EndCategoryVolumeControlComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndCategoryVolumeControlComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume_Backup;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

