#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Slate/WidgetTransform.h"
#include "UObject/NoExportTypes.h"
#include "EndMenuImage.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndMenuImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetTransform RenderTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RenderTransformPivot;
    
    FEndMenuImage();
};

