#include "EndPartyAPI.h"

class UObject;
class AActor;
class AEndCharacter;

void UEndPartyAPI::WaitPlayerStream(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UEndPartyAPI::WaitLoadCache(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UEndPartyAPI::UpdatePreloadCurrentCharaSpecList() {
}

void UEndPartyAPI::StartPlayerStream() {
}

bool UEndPartyAPI::ShouldUsePreloadCharaSpecsForPartyDebug() {
    return false;
}

void UEndPartyAPI::SetPlayerStatus(EPlayerType Type, EPlayerStatus Status) {
}

void UEndPartyAPI::SetPlayerName(EEquipmentType equipment, EPlayerType Type, FName Name) {
}

void UEndPartyAPI::SetPlayerActor(EEquipmentType equipment, EPlayerType Type, AActor* Actor) {
}

void UEndPartyAPI::SetPartyLeaderType(EPlayerType InLeader, bool bIsInputTrigered, bool bForce) {
}

void UEndPartyAPI::SetPartyLeader(AActor* InLeader, bool bIsInputTrigered) {
}

void UEndPartyAPI::ReturnActorToad(EPlayerType Type) {
}

void UEndPartyAPI::ResetPlayerPosition() {
}

void UEndPartyAPI::PreloadCurrentCharaSpecList(TArray<EPlayerType> players, TArray<EEquipmentType> equipments) {
}

void UEndPartyAPI::LoadCache() {
}

bool UEndPartyAPI::IsPlayerActorRefreshState() {
    return false;
}

bool UEndPartyAPI::IsFinishPlayerStream() {
    return false;
}

bool UEndPartyAPI::IsCurrentCharaSpecListPreloadFinished() {
    return false;
}

void UEndPartyAPI::InitPartyLevel(const UObject* WorldContextObject, AActor* InPlayerTrigger) {
}

AActor* UEndPartyAPI::GetPlayerToadActor(EPlayerType Type) {
    return NULL;
}

EPlayerStatus UEndPartyAPI::GetPlayerStatus(EPlayerType Type) {
    return EPlayerStatus::EPlayerType_NONE;
}

AActor* UEndPartyAPI::GetPlayerReturnActor(EPlayerType Type) {
    return NULL;
}

FName UEndPartyAPI::GetPlayerName(EEquipmentType equipment, EPlayerType Type) {
    return NAME_None;
}

EPlayerActorRefreshState UEndPartyAPI::GetPlayerActorRefreshState(EEquipmentType equipment, EPlayerType Type) {
    return EPlayerActorRefreshState::EPlayerActorRefreshState_NONE;
}

FName UEndPartyAPI::GetPlayerActorName(EPlayerType Type) {
    return NAME_None;
}

AActor* UEndPartyAPI::GetPlayerActor(EEquipmentType equipment, EPlayerType Type) {
    return NULL;
}

EPlayerType UEndPartyAPI::GetPartyMemberType(int32 Slot) {
    return EPlayerType::EPlayerType_CLOUD;
}

TArray<AEndCharacter*> UEndPartyAPI::GetPartyMembers() {
    return TArray<AEndCharacter*>();
}

int32 UEndPartyAPI::GetPartyMemberCountForPartyStatus(EPlayerStatus findPlayerStatus) {
    return 0;
}

int32 UEndPartyAPI::GetPartyMemberCount() {
    return 0;
}

AEndCharacter* UEndPartyAPI::GetPartyMember(int32 Index) {
    return NULL;
}

EPlayerType UEndPartyAPI::GetPartyLeaderType() {
    return EPlayerType::EPlayerType_CLOUD;
}

FName UEndPartyAPI::GetPartyLeaderName() {
    return NAME_None;
}

AActor* UEndPartyAPI::GetPartyLeader() {
    return NULL;
}

int32 UEndPartyAPI::GetArrivalPartyMemberCount() {
    return 0;
}

void UEndPartyAPI::FinishPlayerStream() {
}

void UEndPartyAPI::CheckPlayerStream(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UEndPartyAPI::ChangeActorToad(EPlayerType Type) {
}

void UEndPartyAPI::CallTeleported(const FVector& NewLocation, AActor* InLeader) {
}

UEndPartyAPI::UEndPartyAPI() {
}

