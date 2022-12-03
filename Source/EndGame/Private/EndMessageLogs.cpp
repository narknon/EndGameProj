#include "EndMessageLogs.h"

void UEndMessageLogs::ClearMessages() {
}

void UEndMessageLogs::AddMessage(const FString& Message) {
}

UEndMessageLogs::UEndMessageLogs() {
    this->ContentClass = NULL;
    this->ScrollTime = 0.50f;
    this->WaitTime = 2.00f;
    this->GradientSize = 0.25f;
}

