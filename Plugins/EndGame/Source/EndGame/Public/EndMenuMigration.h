#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "EndMenuMigration.generated.h"

class UWidget;

UCLASS(BlueprintType)
class UEndMenuMigration : public UObject {
    GENERATED_BODY()
public:
    UEndMenuMigration();
    UFUNCTION(BlueprintCallable)
    static void SetTextToTextBlock(UWidget* InTextBlock, FText InText);
    
    UFUNCTION(BlueprintCallable)
    static FText GetTextFromTextBlock(UWidget* InTextBlock);
    
};

