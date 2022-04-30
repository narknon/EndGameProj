#pragma once
#include "CoreMinimal.h"
#include "HSFLipMapShapeAttribute.h"
#include "HSFLipMapShape.generated.h"

USTRUCT(BlueprintType)
struct HSFLIPSYNCRUNTIME_API FHSFLipMapShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHSFLipMapShapeAttribute> Attributes;
    
    UPROPERTY(EditAnywhere)
    float AudioMin;
    
    UPROPERTY(EditAnywhere)
    float AudioMax;
    
    UPROPERTY(EditAnywhere)
    float AudioPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlend;
    
    UPROPERTY(EditAnywhere)
    float BlendIn;
    
    UPROPERTY(EditAnywhere)
    float BlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizePerChannel;
    
    UPROPERTY(EditAnywhere)
    float RandomMin;
    
    UPROPERTY(EditAnywhere)
    float RandomMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceShape;
    
    FHSFLipMapShape();
};

