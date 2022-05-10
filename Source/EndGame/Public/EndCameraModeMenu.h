#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndMenuColorCorrectionSelection.h"
#include "EndCameraModeMenu.generated.h"

class UEndTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UEndCameraModeMenu : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndMenuColorCorrectionSelection> ColorCorrectionSelections;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UEndTextBlock* KeyGuideTextBlock;
    
public:
    UEndCameraModeMenu();
};

