#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SQEXSEAD_BGM.generated.h"

class USQEXSEADSound;

UCLASS(Blueprintable)
class USQEXSEAD_BGM : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSound* Sound_;
    
    USQEXSEAD_BGM();
};

