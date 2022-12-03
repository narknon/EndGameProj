#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EEqsType.h"
#include "UObject/NoExportTypes.h"
#include "EndEnvQueryComponent.generated.h"

class AActor;
class UEnvQuery;

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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQueryVisible(TEnumAsByte<EEqsType::Type> Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScore(TEnumAsByte<EEqsType::Type> Index, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocation(TEnumAsByte<EEqsType::Type> Index, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActor(TEnumAsByte<EEqsType::Type> Index, int32 ID);
    
};

