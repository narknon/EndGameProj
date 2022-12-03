#include "OSDKFutureObject.h"

class UObject;

EOSDKFutureStatus UOSDKFutureObject::GetStatus() const {
    return EOSDKFutureStatus::Invalid;
}

void UOSDKFutureObject::Await(UObject* WorldContextObject, EOSDKFutureFinishResult& FinishResult, FLatentActionInfo LatentInfo) {
}

UOSDKFutureObject::UOSDKFutureObject() {
}

