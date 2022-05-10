#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EndDataTableBattleAbility.h"
#include "EndBattleTalkCharacterComponent.generated.h"

class AEndCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndBattleTalkCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEndBattleTalkCharacterComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool OnNotifyWithAbility(const FName& AnimName, const FName& SoundName, AEndCharacter* ownerChara, AEndCharacter* targetChara, const FName& AbilityID, const FEndDataTableBattleAbility& dataTableBattleAbility, bool bFinishBlow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool OnNotify(const FName& AnimName, const FName& SoundName, AEndCharacter* ownerChara) const;
    
};

