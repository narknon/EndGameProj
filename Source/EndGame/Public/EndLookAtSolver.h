#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EndLookAtSolveBone.h"
#include "EndLookAtSolver.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEndLookAtSolver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OriginBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNormalizeBoneWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComponentSpaceForwardAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSolveBoneAimVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEulerInterp;
    
    UPROPERTY(EditAnywhere)
    float ActiveBlendTime;
    
    UPROPERTY(EditAnywhere)
    float DeactiveBlendTime;
    
    UPROPERTY(EditAnywhere)
    float ActiveBlendTimeWarning;
    
    UPROPERTY(EditAnywhere)
    float DeactiveBlendTimeWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BlendTimeRandomBiasRange;
    
    UPROPERTY(EditAnywhere)
    float ActiveAngle;
    
    UPROPERTY(EditAnywhere)
    float DeactiveAngle;
    
    UPROPERTY(EditAnywhere)
    float ActiveAngleWarning;
    
    UPROPERTY(EditAnywhere)
    float DeactiveAngleWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampAtActiveAngle;
    
    UPROPERTY(EditAnywhere)
    float ClampHorizontalDistanceMin;
    
    UPROPERTY(EditAnywhere)
    float ActivityDurationMin;
    
    UPROPERTY(EditAnywhere)
    float WeightBias;
    
    UPROPERTY(EditAnywhere)
    float WeightBiasWarning;
    
    UPROPERTY(EditAnywhere)
    float UpWeightBias;
    
    UPROPERTY(EditAnywhere)
    float UpWeightBiasWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndLookAtSolveBone> SolveBones;
    
    UEndLookAtSolver();
};

