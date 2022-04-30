#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EndMenuResidentResource.generated.h"

class UEndFont;

UCLASS(Blueprintable, EditInlineNew)
class UEndMenuResidentResource : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEndFont*> SystemFonts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEndFont*> DigitFonts;
    
    UEndMenuResidentResource();
};

