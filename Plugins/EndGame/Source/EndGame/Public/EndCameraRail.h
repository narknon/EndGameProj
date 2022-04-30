#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "RCSCutConnect.h"
#include "EndCameraRail.generated.h"

class USplineComponent;
class ULevelSequence;

UCLASS(Blueprintable)
class AEndCameraRail : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* CameraRailComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* PlayerRailComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USplineComponent*> GuideSplinesInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* RailCameraSequencerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* ReverseRailCameraSequencerData;
    
    UPROPERTY(EditAnywhere)
    float RCSMinDist;
    
    UPROPERTY(EditAnywhere)
    float RCSMaxDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateControlRotOnWeightDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopInputBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FollowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseHorizontalFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RCSCutConnect CutConnectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDOFActor;
    
    UPROPERTY(EditAnywhere, SkipSerialization)
    float DebugTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool ShowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool DebugPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool ShowNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCameraCut;
    
    UPROPERTY(EditAnywhere, SkipSerialization)
    float _PrevWeight;
    
    UPROPERTY(EditAnywhere)
    float PlayTime;
    
    UPROPERTY(EditAnywhere)
    float DistThreshold;
    
    UPROPERTY(EditAnywhere)
    float StartBlend;
    
    UPROPERTY(EditAnywhere)
    float EndBlend;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> FOVs;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> Rolls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor CameraRailColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor PlayerRailColor;
    
    AEndCameraRail();
};

