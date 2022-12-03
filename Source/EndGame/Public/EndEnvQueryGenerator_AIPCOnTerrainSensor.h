#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "DataProviders/AIDataProvider.h"
#include "EndEnvQueryGenerator_AIPCOnTerrainSensor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndEnvQueryGenerator_AIPCOnTerrainSensor : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue SpaceBetween;
    
    UEndEnvQueryGenerator_AIPCOnTerrainSensor();
};

