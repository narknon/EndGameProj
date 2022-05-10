#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndFootEffectorSolveFoot.h"
#include "EndFootEffectorSolver.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEndFootEffectorSolver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FloorTraceBoxHalfSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FootTraceBoxHalfSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FloorTraceOffset;
    
    UPROPERTY(EditAnywhere)
    float FloorTraceToOffsetHeight;
    
    UPROPERTY(EditAnywhere)
    float FootTraceBeginOffsetHeight;
    
    UPROPERTY(EditAnywhere)
    float FootTraceEndOffsetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FootMaxIterations;
    
    UPROPERTY(EditAnywhere)
    float FootReachPrecision;
    
    UPROPERTY(EditAnywhere)
    float TargetReachStepPercent;
    
    UPROPERTY(EditAnywhere)
    float PullDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CollisionHipOffsetInterpSpeedVelocityInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CollisionHipOffsetInterpSpeedOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RotationHipOffsetInterpSpeedVelocityInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RotationHipOffsetInterpSpeedOutput;
    
    UPROPERTY(EditAnywhere)
    float FloorAdjustRotationInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float HipAdjustFloorRate;
    
    UPROPERTY(EditAnywhere)
    float HipAdjustFloorRotationRate;
    
    UPROPERTY(EditAnywhere)
    float PitchHipOffsetFloorAngleRate;
    
    UPROPERTY(EditAnywhere)
    float RollHipOffsetFloorAngleRate;
    
    UPROPERTY(EditAnywhere)
    float FootAdjustFloorRate;
    
    UPROPERTY(EditAnywhere)
    float PitchAdjustFloorAngleRate;
    
    UPROPERTY(EditAnywhere)
    float RollAdjustFloorAngleRate;
    
    UPROPERTY(EditAnywhere)
    float FootAdjustFloorOrientationRate;
    
    UPROPERTY(EditAnywhere)
    float FootAdjustFloorTranslationAngleRate;
    
    UPROPERTY(EditAnywhere)
    float CollisionOffsetHeightMin;
    
    UPROPERTY(EditAnywhere)
    float FootAdjustTranslationHeightMax;
    
    UPROPERTY(EditAnywhere)
    float FootLandingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEffective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedHipOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceToeOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreStairs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndFootEffectorSolveFoot> Foots;
    
    UEndFootEffectorSolver();
};

