#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "EndBikeSplineMetaData.h"
#include "EndBikeSplineJumpAreaData.h"
#include "EndBikeSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndBikeSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBikeSplineMetaData> SplineMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBikeSplineJumpAreaData> SplineJumpAreaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextSplineID;
    
public:
    UEndBikeSplineComponent();
};

