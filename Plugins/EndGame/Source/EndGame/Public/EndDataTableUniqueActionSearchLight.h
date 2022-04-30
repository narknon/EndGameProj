#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableUniqueActionSearchLight.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableUniqueActionSearchLight : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MoveStartAngle;
    
    UPROPERTY(EditAnywhere)
    float MoveStartAngleByRadian;
    
    UPROPERTY(EditAnywhere)
    float OuterConeAngle;
    
    UPROPERTY(EditAnywhere)
    float OuterConeAngleByRadian;
    
    UPROPERTY(EditAnywhere)
    float AttenuationRadius;
    
    UPROPERTY(EditAnywhere)
    float VerticalLimitAngle;
    
    UPROPERTY(EditAnywhere)
    float HorizontalLimitAngle;
    
    UPROPERTY(EditAnywhere)
    float MoveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttachActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttachSpotlightActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StateObject_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StateChange_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ShowTarget_Array;
    
    UPROPERTY(EditAnywhere)
    float StartAngle;
    
    UPROPERTY(EditAnywhere)
    float StartAngleByRadian;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PitchOverrideObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PitchOverwriteState_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> PitchOverwriteAngle_Array;
    
    FEndDataTableUniqueActionSearchLight();
};

