#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ContentWidget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndMenuViewport.generated.h"

class UWorld;
class AActor;

UCLASS(Blueprintable)
class UEndMenuViewport : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UEndMenuViewport();
    UFUNCTION(BlueprintCallable)
    AActor* Spawn(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    void SetViewRotation(FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetViewLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetViewRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetViewportWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetViewLocation() const;
    
};

