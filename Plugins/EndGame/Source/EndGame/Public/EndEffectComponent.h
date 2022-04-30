#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndEffectCategory -FallbackName=EEndEffectCategory
#include "UObject/NoExportTypes.h"
#include "EndEffectComponent.generated.h"

UENUM(Blueprintable)
// Enum Engine.EEndEffectCategory
enum class EEndEffectCategory : uint8
{
    None,
    Field,
    Battle,
    Event,
    Menu,
    Level,
    Resident,
    AnimNotify,
    Blueprint,
    FieldLaser,
    ParticleSystemComponent,
    Debug,
    Max
};

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENDGAME_API UEndEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EEndEffectCategory m_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_Color;
    
    UPROPERTY(EditAnywhere)
    float m_Luminance;
    
    UPROPERTY(EditAnywhere)
    float m_Opacity;
    
public:
    UEndEffectComponent();
};

