#pragma once
#include "CoreMinimal.h"
#include "EEndNavAreaPermission.h"
#include "AI/Navigation/NavAreas/NavArea.h"
#include "EndNavAreaCover.generated.h"

UCLASS(Blueprintable)
class UEndNavAreaCover : public UNavArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Capacity;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEndNavAreaPermission::Type> Permission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PermissionCharas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    UEndNavAreaCover();
};

