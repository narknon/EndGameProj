#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "SkeletalMeshComponentBudgeted.generated.h"

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANIMATIONBUDGETALLOCATOR_API USkeletalMeshComponentBudgeted : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoRegisterWithBudgetAllocator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoCalculateSignificance: 1;
    
public:
    USkeletalMeshComponentBudgeted();
    UFUNCTION(BlueprintCallable)
    void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
    
};

