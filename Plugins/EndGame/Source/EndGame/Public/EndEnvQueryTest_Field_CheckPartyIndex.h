#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EEndAiMathCmp.h"
#include "EndEnvQueryTest_Field_CheckPartyIndex.generated.h"

UCLASS(Blueprintable)
class UEndEnvQueryTest_Field_CheckPartyIndex : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndAiMathCmp m_ArithmeticOperation;
    
    UEndEnvQueryTest_Field_CheckPartyIndex();
};

