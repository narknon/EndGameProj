#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SQEXSEADAutoSeComponent.generated.h"

class USkeletalMeshComponent;
class USQEXSEADAutoSeComponentCallback;
class USQEXSEADAutoSeComponentSetting;
class UPawnMovementComponent;
class USQEXSEADAutoSeComponentAssetTable;
class USQEXSEADAutoSeDetectionSetting;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADAutoSeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    USQEXSEADAutoSeComponentCallback* AutoSeCallback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USQEXSEADAutoSeComponentSetting* SettingData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USQEXSEADAutoSeComponentAssetTable* AssetTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USQEXSEADAutoSeDetectionSetting* DetectionSetting;
    
private:
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* CachedMeshReference;
    
    UPROPERTY(Export, Transient)
    UPawnMovementComponent* CachedMovementComponent;
    
public:
    USQEXSEADAutoSeComponent();
};

