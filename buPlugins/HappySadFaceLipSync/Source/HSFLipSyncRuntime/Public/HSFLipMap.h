#pragma once
#include "CoreMinimal.h"
#include "HSFLipMapShape.h"
#include "UObject/Object.h"
#include "HSFLipMap.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UHSFLipMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHSFLipMapShape> Shapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHSFLipMapShape DefaultShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHSFLipMapShape MaxDifferenceShape;
    
    UHSFLipMap();
};

