#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EndEnvQueryCoverTest.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEndEnvQueryCoverTest : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Size;
    
    UEndEnvQueryCoverTest();
};

