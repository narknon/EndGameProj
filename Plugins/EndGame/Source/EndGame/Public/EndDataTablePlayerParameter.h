#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTablePlayerParameter.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTablePlayerParameter : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HPMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MPMax;
    
    UPROPERTY(EditAnywhere)
    uint8 Strength;
    
    UPROPERTY(EditAnywhere)
    uint8 Magic;
    
    UPROPERTY(EditAnywhere)
    uint8 Vitality;
    
    UPROPERTY(EditAnywhere)
    uint8 Spilit;
    
    UPROPERTY(EditAnywhere)
    uint8 Luck;
    
    UPROPERTY(EditAnywhere)
    uint8 Dexterity;
    
    UPROPERTY(EditAnywhere)
    uint8 SPMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Experience;
    
    UPROPERTY(EditAnywhere)
    uint8 TreeLevel;
    
    FEndDataTablePlayerParameter();
};

