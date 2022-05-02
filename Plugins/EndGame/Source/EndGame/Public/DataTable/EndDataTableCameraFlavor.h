#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCameraFlavor.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCameraFlavor : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultID;
    
    UPROPERTY(EditAnywhere)
    float BeginBlendTime;
    
    UPROPERTY(EditAnywhere)
    uint8 BeginBlendType;
    
    UPROPERTY(EditAnywhere)
    float EndBlendTime;
    
    UPROPERTY(EditAnywhere)
    uint8 EndBlendType;
    
    UPROPERTY(EditAnywhere)
    float Param0;
    
    UPROPERTY(EditAnywhere)
    float Param1;
    
    UPROPERTY(EditAnywhere)
    float Param2;
    
    UPROPERTY(EditAnywhere)
    float Param3;
    
    UPROPERTY(EditAnywhere)
    float Param4;
    
    UPROPERTY(EditAnywhere)
    float Param5;
    
    UPROPERTY(EditAnywhere)
    float Param6;
    
    UPROPERTY(EditAnywhere)
    float Param7;
    
    UPROPERTY(EditAnywhere)
    float Param8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParamFlag;
    
    FEndDataTableCameraFlavor();
};

