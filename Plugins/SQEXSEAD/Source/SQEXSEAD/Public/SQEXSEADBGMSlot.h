#pragma once
#include "CoreMinimal.h"
#include "SQEXSEAD_BGMOptions.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESQEXSEAD_BGMState.h"
#include "SQEXSEADBGMSlot.generated.h"

class USQEXSEAD_BGM;

UCLASS(Blueprintable)
class SQEXSEAD_API USQEXSEADBGMSlot : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEXSEAD_BGMState State;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEAD_BGMOptions DefaultOptions_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEAD_BGM* BGM_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEAD_BGM* PrevBGM_;
    
public:
    USQEXSEADBGMSlot();
};

