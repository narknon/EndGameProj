#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
#include "Templates/SubclassOf.h"
#include "EndListBox.generated.h"

UCLASS(BlueprintType)
class UEndListBox : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSetupItem, UWidget*, ItemWidget, int32, ItemIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedIndexChanged, int32, ItemIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPressedItem, int32, ItemIndex);
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> ContentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin SlotPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetupItem OnSetupItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnPressedItem OnPressedItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnSelectedIndexChanged OnSelectedIndexChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> ContentWidgets;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> CachedWidgets;
    
public:
    UEndListBox();
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndex(int32 UserIndex, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetItemCount(int32 InItemCount);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredCount(int32 InDesiredCount);
    
    UFUNCTION(BlueprintCallable)
    void RefreshItems();
    
    UFUNCTION(BlueprintCallable)
    void RefreshItem(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedIndex(int32 UserIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetChildAt(int32 Index) const;
    
};

