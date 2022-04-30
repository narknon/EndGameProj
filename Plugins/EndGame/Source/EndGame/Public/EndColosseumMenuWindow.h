#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndColosseumMenuWindow.generated.h"

class UEndMenuColosseumPrototypeData;

UCLASS(Blueprintable, EditInlineNew)
class UEndColosseumMenuWindow : public UEndUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEndMenuColosseumPrototypeData* PrototypeData;
    
public:
    UEndColosseumMenuWindow();
};

