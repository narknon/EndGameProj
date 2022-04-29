#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EPlayerType.h"
#include "EndMenuMemberSelectBtn.generated.h"

UCLASS(EditInlineNew)
class UEndMenuMemberSelectBtn : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndMenuMemberSelectBtn();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupSelectBtn(EPlayerType PlayerType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupCharacterCell(EPlayerType PlayerType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeCharacterCell(EPlayerType PlayerType);
    
};

