#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EEqsType.h"
#include "UObject/NoExportTypes.h"
#include "EndEnvQueryComponent.generated.h"

class UEnvQuery;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndEnvQueryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEndEnvQueryComponent();
    UFUNCTION(BlueprintCallable)
    void SetQueryAllActive(TEnumAsByte<EEqsType::Type> Index, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetQueryActive(TEnumAsByte<EEqsType::Type> Index, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetQuery(TEnumAsByte<EEqsType::Type> Index, UEnvQuery* InQuery);
    
    UFUNCTION(BlueprintCallable)
    void RunQuery(float DeltaTime);
    
    UFUNCTION(BlueprintPure)
    bool IsQueryVisible(TEnumAsByte<EEqsType::Type> Index);
    
    UFUNCTION(BlueprintPure)
    float GetScore(TEnumAsByte<EEqsType::Type> Index, int32 ID);
    
    UFUNCTION(BlueprintPure)
    FVector GetLocation(TEnumAsByte<EEqsType::Type> Index, int32 ID);
    
    UFUNCTION(BlueprintPure)
    AActor* GetActor(TEnumAsByte<EEqsType::Type> Index, int32 ID);
    
};

