#include "EndTextResource.h"

FEndTextResourceInfo UEndTextResource::GetTextInfo(const FString& InTextId) const {
    return FEndTextResourceInfo{};
}

FString UEndTextResource::GetText(const FString& InTextId) const {
    return TEXT("");
}

UEndTextResource::UEndTextResource() {
}

