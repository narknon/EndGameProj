#include "EndLevelLoader.h"

class UObject;
class AEndCharacter;
class AActor;

void UEndLevelLoader::WaitStreamLevelEmpty(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::WaitShowSlicingLevelSet(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::UnLoadStreamLevelSpecInternal(const UObject* WorldContextObject, int32 Priority, FName SpecName, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::UnLoadStreamLevelSpec(const UObject* WorldContextObject, int32 Priority, FName SpecName, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::UnloadStreamLevelSingle(const UObject* WorldContextObject, int32 Priority, FName LevelNames, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::UnloadStreamLevels(const UObject* WorldContextObject, TArray<FName> LevelNames, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::UnloadStreamLevelGroups(const UObject* WorldContextObject, int32 Priority, TArray<FName> LevelNames, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::SetShowFrameLimitFree(const UObject* WorldContextObject, bool isFree) {
}

FString UEndLevelLoader::MakeLongLevelName(const FString& ShortName) {
    return TEXT("");
}

void UEndLevelLoader::LoadStreamLevelSpecInternal(const UObject* WorldContextObject, int32 Priority, FName SpecName, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::LoadStreamLevelSpec(const UObject* WorldContextObject, int32 Priority, FName SpecName, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::LoadStreamLevelSingleWithHide(const UObject* WorldContextObject, int32 Priority, FName LevelNames, uint8 hide, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::LoadStreamLevelSingle(const UObject* WorldContextObject, int32 Priority, FName LevelNames, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::LoadStreamLevelSet(const UObject* WorldContextObject, StreamLevelSetSlot Slot, int32 Priority, TArray<FName> LevelNames, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::LoadStreamLevels(const UObject* WorldContextObject, TArray<FName> LevelNames, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::LoadStreamLevelGroupsWithHide(const UObject* WorldContextObject, int32 Priority, TArray<FName> LevelNames, TArray<uint8> hides, StreamLevelSetSlot Slot, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::LoadStreamLevelGroups(const UObject* WorldContextObject, int32 Priority, TArray<FName> LevelNames, FLatentActionInfo LatentInfo) {
}

bool UEndLevelLoader::IsLoadStreamLevelSpec(const UObject* WorldContextObject) {
    return false;
}

bool UEndLevelLoader::IsLoadStreamLevel(const UObject* WorldContextObject) {
    return false;
}

bool UEndLevelLoader::IsBoostLoading(const UObject* WorldContextObject) {
    return false;
}

TArray<FName> UEndLevelLoader::GetUnLoadStreamLevelSet(StreamLevelSetSlot Slot) {
    return TArray<FName>();
}

int32 UEndLevelLoader::GetLoadStreamLevelSpecPriority(const UObject* WorldContextObject) {
    return 0;
}

FName UEndLevelLoader::GetLoadStreamLevelSpec(const UObject* WorldContextObject) {
    return NAME_None;
}

TArray<FName> UEndLevelLoader::GetLoadStreamLevelSet(StreamLevelSetSlot Slot) {
    return TArray<FName>();
}

TArray<FName> UEndLevelLoader::GetLoadStreamLevels(const UObject* WorldContextObject, bool load) {
    return TArray<FName>();
}

FName UEndLevelLoader::GetLoadStreamLevel(const UObject* WorldContextObject) {
    return NAME_None;
}

TArray<uint8> UEndLevelLoader::GetCacheLoadStreamHideLevelSet(StreamLevelSetSlot Slot) {
    return TArray<uint8>();
}

void UEndLevelLoader::FinishLoadStreamLevelSpec() {
}

void UEndLevelLoader::FinishLoadStreamLevelSet(StreamLevelSetSlot Slot) {
}

void UEndLevelLoader::FinishLoadStreamLevel(const UObject* WorldContextObject) {
}

AEndCharacter* UEndLevelLoader::FindCharacterFromWorld(FName ActorName) {
    return NULL;
}

AEndCharacter* UEndLevelLoader::FindCharacterFromLevel(FName LevelName, FName ActorName) {
    return NULL;
}

AActor* UEndLevelLoader::FindActorFromWorld(FName ActorName) {
    return NULL;
}

AActor* UEndLevelLoader::FindActorFromLevel(FName LevelName, FName ActorName) {
    return NULL;
}

int32 UEndLevelLoader::DoLoadStreamLevelSet(StreamLevelSetSlot Slot) {
    return 0;
}

void UEndLevelLoader::CheckLoadStreamLevelSepc(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UEndLevelLoader::CheckLoadStreamLevel(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

UEndLevelLoader::UEndLevelLoader() {
}

