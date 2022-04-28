#pragma once
#include "CoreMinimal.h"
#include "UserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EndMenuResidentResource.generated.h"

class UEndFont;

UCLASS(EditInlineNew)
class UEndMenuResidentResource : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UEndFont*> SystemFonts;
    
    UPROPERTY(EditAnywhere)
    TArray<UEndFont*> DigitFonts;
    
    UEndMenuResidentResource();
};

