#include "EndTextResourceAPI.h"

FString UEndTextResourceAPI::GetTextResourceText(const FString& InTextId, const FString& InLanguage) {
    return TEXT("");
}

FEndTextResourceInfo UEndTextResourceAPI::GetTextResourceInfo(const FString& InTextId, const FString& InLanguage) {
    return FEndTextResourceInfo{};
}

UEndTextResourceAPI::UEndTextResourceAPI() {
}

