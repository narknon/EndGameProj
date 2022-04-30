#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableAutoCameraPositionInfo.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableAutoCameraPositionInfo : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Xoffset;
    
    UPROPERTY(EditAnywhere)
    float Yoffset;
    
    UPROPERTY(EditAnywhere)
    float Xrange;
    
    UPROPERTY(EditAnywhere)
    float Yrange;
    
    UPROPERTY(EditAnywhere)
    float Zrange;
    
    FEndDataTableAutoCameraPositionInfo();
};

