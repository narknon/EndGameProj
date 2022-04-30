#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EEndFieldAIFollowPosition.h"
#include "EndEnvQueryTest_Field_CheckFollowPosition.generated.h"

UCLASS(Blueprintable)
class UEndEnvQueryTest_Field_CheckFollowPosition : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndFieldAIFollowPosition m_FollowPositionType;
    
    UEndEnvQueryTest_Field_CheckFollowPosition();
};

