#include "EndBattleTalkCharacterComponent.h"

class AEndCharacter;

bool UEndBattleTalkCharacterComponent::OnNotifyWithAbility_Implementation(const FName& AnimName, const FName& SoundName, AEndCharacter* ownerChara, AEndCharacter* targetChara, const FName& AbilityID, const FEndDataTableBattleAbility& dataTableBattleAbility, bool bFinishBlow) const {
    return false;
}

bool UEndBattleTalkCharacterComponent::OnNotify_Implementation(const FName& AnimName, const FName& SoundName, AEndCharacter* ownerChara) const {
    return false;
}

UEndBattleTalkCharacterComponent::UEndBattleTalkCharacterComponent() {
}

