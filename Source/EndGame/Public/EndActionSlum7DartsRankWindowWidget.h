#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndActionSlum7DartsRankWindowWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ENDGAME_API UEndActionSlum7DartsRankWindowWidget : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InMiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InAction;
    
    UEndActionSlum7DartsRankWindowWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnSetupItems(UWidget* ItemWidget, int32 Index);
    
};

