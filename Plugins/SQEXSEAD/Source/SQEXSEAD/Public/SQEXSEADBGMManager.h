#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectionSetting.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADBGMManager.generated.h"

class USQEXSEADBGMSlot;
class USQEXSEADBGMSlotController;

UCLASS(DefaultConfig)
class SQEXSEAD_API USQEXSEADBGMManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADBGMManager")
    TArray<class USQEXSEADBGMSlot*> Slots_;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADBGMManager")
    TArray<class USQEXSEADBGMSlotController*> Controllers_;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADBGMManager")
    class USQEXSEADBGMSlot* PlayingSlot_;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADBGMManager")
    TArray<struct FSQEXSEAD_BGMSlotSetting> SlotSettings_;
    
public:
    USQEXSEADBGMManager();
};
