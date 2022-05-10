#pragma once
#include "CoreMinimal.h"
#include "EndPhysicalConstraintEvaluator.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "EndSkeletalMeshComponent.generated.h"

class USkeletalMeshComponent;
class USQEX_KBD_Component;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndSkeletalMeshComponent : public USkeletalMeshComponentBudgeted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SyncPoseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndPhysicalConstraintEvaluator PhysicalConstraintEvaluator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndPhysicalConstraintEvaluator PostPhysicalConstraintEvaluator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoLinkAttachChildren: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PrerequisiteMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USQEX_KBD_Component* PrerequisiteKBD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> LinkedMeshes;
    
public:
    UEndSkeletalMeshComponent();
};

