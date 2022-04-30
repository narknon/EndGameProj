#pragma once
#include "CoreMinimal.h"
#include "EndSkeletalMeshComponent.h"
#include "EndSwitchableSkeletalMeshPair.h"
#include "EndSwitchableSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndSwitchableSkeletalMeshComponent : public UEndSkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndSwitchableSkeletalMeshPair> SkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAttachParentIsMasterPose: 1;
    
    UEndSwitchableSkeletalMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMeshByLabel(FName Label, bool bReinitPose);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMeshByIndex(int32 Index, bool bReinitPose);
    
};

