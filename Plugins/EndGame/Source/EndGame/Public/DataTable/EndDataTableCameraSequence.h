#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCameraSequence.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCameraSequence : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendType;
    
    UPROPERTY(EditAnywhere)
    float TotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ParameterType_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> CameraLocationX_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> CameraLocationY_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> CameraLocationZ_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> LookAtLocationX_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> LookAtLocationY_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> LookAtLocationZ_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> FieldOfView_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Roll_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Weight_Array;
    
    FEndDataTableCameraSequence();
};

