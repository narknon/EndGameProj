#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EEndEmotionType.h"
#include "EndFacialRig.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, MinimalAPI)
class UEndFacialRig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EyeBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EyelidsBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ForeheadBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GlabellaBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BrowBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EyeMoveBlendSpaceName;
    
    UPROPERTY(EditAnywhere)
    float EyeMoveBlendInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float LookAtWeightBias;
    
    UPROPERTY(EditAnywhere)
    float LookAtUpWeightBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SaccadeFrequencyRange;
    
    UPROPERTY(EditAnywhere)
    float SaccadeMoveAngleMax;
    
    UPROPERTY(EditAnywhere)
    float SaccadeMoveAngleSoftLimitRate;
    
    UPROPERTY(EditAnywhere)
    float FixationVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MicroSaccadeFrequencyRange;
    
    UPROPERTY(EditAnywhere)
    float MicroSaccadeMoveAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomAdditiveSaccadeFrequencyRange;
    
    UPROPERTY(EditAnywhere)
    float RandomAdditiveSaccadeMoveAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomAdditiveSaccadeMoveRollRange;
    
    UPROPERTY(EditAnywhere)
    float RandomAdditiveSaccadeTimeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlinkPoseName;
    
    UPROPERTY(EditAnywhere)
    float BlinkThreshold;
    
    UPROPERTY(EditAnywhere)
    float FullBlinkThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PeriodicBlinkCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ReflectiveBlinkCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PeriodicBlinkBiasRange;
    
    UPROPERTY(EditAnywhere)
    float RefrectiveBlinkSaccadeMoveAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    float RefrectiveBlinkIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NeutralBlinkFrequencyRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CautionBlinkFrequencyRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LipSyncBrowMoveBlendSpaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmotionBlendSpaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DefaultEmotionBlendInput;
    
    UPROPERTY(EditAnywhere)
    float DefaultEmotionBlendInputInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEndEmotionType, FVector2D> EmotionBlendInputTable;
    
    UPROPERTY(EditAnywhere)
    TMap<EEndEmotionType, float> EmotionBlendInputInterpSpeedTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* EmotionBlendCurve;
    
    UPROPERTY(EditAnywhere)
    float EmotionTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EmotionLerpMaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomIdleEmotionWaitTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomIdleEmotionKeepTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomIdleEmotionBlendInTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomIdleEmotionBlendOutTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomIdleEmotionBlendInputAdditiveRangeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomIdleEmotionBlendInputAdditiveRangeY;
    
    UEndFacialRig();
};

