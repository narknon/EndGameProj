#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndFeelerWallExSetting.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FEndFeelerWallExSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> StaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomRotationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomScaleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeginAnimationFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndAnimationFrame;
    
    UPROPERTY(EditAnywhere, Transient)
    float AnimationDuration;
    
    UPROPERTY(EditAnywhere)
    float AnimationFrameRate;
    
    UPROPERTY(EditAnywhere)
    float AnimationPlayRate;
    
    UPROPERTY(EditAnywhere)
    float FadeDuration;
    
    UPROPERTY(EditAnywhere)
    float RandomHeightRange;
    
    ENDGAME_API FEndFeelerWallExSetting();
};

