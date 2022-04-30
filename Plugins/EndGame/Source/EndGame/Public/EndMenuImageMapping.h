#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "UObject/NoExportTypes.h"
#include "EndMenuImageMapping.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndMenuImageMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MappingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChangeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SubFrameImagePath;
    
    FEndMenuImageMapping();
};

