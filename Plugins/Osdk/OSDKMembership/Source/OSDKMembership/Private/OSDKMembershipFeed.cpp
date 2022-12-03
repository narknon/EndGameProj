#include "OSDKMembershipFeed.h"

class UTexture2DDynamic;
class UOSDKWebServiceClient;
class UOSDKMembershipFeed;

void UOSDKMembershipFeed::Terminate() {
}

void UOSDKMembershipFeed::Refresh() {
}

UTexture2DDynamic* UOSDKMembershipFeed::GetQRImage() {
    return NULL;
}

void UOSDKMembershipFeed::GenerateSignupCode() {
}

UOSDKMembershipFeed* UOSDKMembershipFeed::CreateMembershipFeed(UOSDKWebServiceClient* iWebServiceClient, int32 iUpdateDelaySeconds) {
    return NULL;
}

UOSDKMembershipFeed::UOSDKMembershipFeed() {
    this->UpdateDelaySeconds = 0;
    this->State = EOSDKMembershipState::SIGNUP_CODE_LOADING;
    this->Status = EOSDKMembershipStatus::SUCCESS;
}

