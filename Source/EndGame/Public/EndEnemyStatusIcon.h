#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "EndEnemyStatusIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndEnemyStatusIcon : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor _BpDefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor _BpRegenerateColor;
    
    UEndEnemyStatusIcon();
};

