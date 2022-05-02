#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Layout/Margin.h"
#include "Components/Widget.h"
#include "UObject/NoExportTypes.h"
#include "EndMessageLogs.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UEndMessageLogs : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnSetupContent, UUserWidget*, MessageWidget, int32, Type, const FString&, Message);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ContentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin SlotPadding;
    
    UPROPERTY(EditAnywhere)
    float ScrollTime;
    
    UPROPERTY(EditAnywhere)
    float WaitTime;
    
    UPROPERTY(EditAnywhere)
    float GradientSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetupContent OnSetupContent;
    
    UEndMessageLogs();
    UFUNCTION(BlueprintCallable)
    void ClearMessages();
    
    UFUNCTION(BlueprintCallable)
    void AddMessage(const FString& Message);
    
};

