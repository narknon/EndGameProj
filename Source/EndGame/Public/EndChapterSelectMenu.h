#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "EndChapterSelectMenu.generated.h"

class UPaperSprite;
class UEndImage;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndChapterSelectMenu : public UEndUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> _BillboardImagePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> _PlusBillboardImagePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> _CellBillboardPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> _PlusCellBillboardPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> _ChapterInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> _PlusChapterInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndUserWidget* Throbber;
    
public:
    UEndChapterSelectMenu();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCellImage(UEndImage* Widget, UPaperSprite* Sprite);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChapterListSetupItem(UWidget* ItemWidget, int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnChapterListSelectedIndexChanged(int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnChapterListPressedItem(int32 CellIndex);
    
};

