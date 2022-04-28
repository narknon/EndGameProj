#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EndMenuStructs.h"
#include "EndMenuStatusPaneCell.generated.h"

UCLASS(EditInlineNew)
class UEndMenuStatusPaneCell : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush _DefaultBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush _PreviewBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush _StopBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush _AliveBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush _DeadBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush _SupporterBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor _SyncNameColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _SyncActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEndStatusMenuHPColors _DeufaultHPColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEndStatusMenuHPColors _DeadLineHPColor;
    
    UEndMenuStatusPaneCell();
};

