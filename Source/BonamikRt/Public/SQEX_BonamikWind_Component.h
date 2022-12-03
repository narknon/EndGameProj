#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ESQEX_Bonamik_WindAreaType.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_BonamikWind_Component.generated.h"

class USQEX_BonamikWindDesc;
class USQEX_BonamikWind;

UCLASS(Blueprintable, CollapseCategories, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USQEX_BonamikWind_Component : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_BonamikWindDesc* m_BonamikWindDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESQEX_Bonamik_WindAreaType> m_BonamikWindAreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_BonamikWindGlobalAddition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_BonamikWindBoxAreaSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_BonamikWindBoxAreaHalfSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BonamikWindSphereAreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BonamikWindAreaMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_BonamikWindAbsoluteDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BonamikWindDirectionYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BonamikWindDirectionPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQEX_BonamikWind* m_BonamikWind;
    
    USQEX_BonamikWind_Component();
    UFUNCTION(BlueprintCallable)
    void SetWindScale(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindScale() const;
    
    UFUNCTION(BlueprintCallable)
    void Enable(bool Value);
    
};

