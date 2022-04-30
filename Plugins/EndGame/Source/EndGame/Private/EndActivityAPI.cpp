#include "EndActivityAPI.h"

class UObject;

EEndActivityInitResult UEndActivityAPI::GetActivityInitResult() {
    return EEndActivityInitResult::None;
}

void UEndActivityAPI::ActivityInit(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

UEndActivityAPI::UEndActivityAPI() {
}

