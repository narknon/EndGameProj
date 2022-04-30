#pragma once
#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "EndInvalidationBox.generated.h"

UCLASS(Blueprintable)
class UEndInvalidationBox : public UContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CacheRelativeTransforms;
    
public:
    UEndInvalidationBox();
    UFUNCTION(BlueprintCallable)
    void SetCanCache(bool CanCache);
    
    UFUNCTION(BlueprintCallable)
    void InvalidateCache();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanCache() const;
    
};

