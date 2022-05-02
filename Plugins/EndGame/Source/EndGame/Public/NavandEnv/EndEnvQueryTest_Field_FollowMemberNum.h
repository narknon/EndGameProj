#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EEndAiMathCmp.h"
#include "EndEnvQueryTest_Field_FollowMemberNum.generated.h"

UCLASS(Blueprintable)
class UEndEnvQueryTest_Field_FollowMemberNum : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndAiMathCmp m_ArithmeticOperation;
    
    UEndEnvQueryTest_Field_FollowMemberNum();
};

