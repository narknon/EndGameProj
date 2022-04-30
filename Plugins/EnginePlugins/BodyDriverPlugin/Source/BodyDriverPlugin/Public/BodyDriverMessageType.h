#pragma once
#include "CoreMinimal.h"
#include "BodyDriverMessageType.generated.h"

UENUM()
enum BodyDriverMessageType {
    kMessageImpulseTypeDefault,
    kMessageImpulseTypeMelee,
    kMessageImpulseTypeBullet,
    kMessageTriggerRagdollActivation,
    kMessageFreezeRagdollAndDisableCollision,
    kMessageCharacterCollision,
    kMessageExplosion_Contact,
    kMessageExplosion_FreeOrigin,
    kMessageExplosion_MeleeUnstructuredFall,
    kMessageExplosion_BulletUnstructuredFall,
    kMessageInitializeData,
    kMessageForceSwitchToAnimated,
    kMessage_END_LaunchSmallClose,
    kMessage_END_LaunchSmallFar,
    kMessage_END_BlowSmallClose,
    kMessage_END_BlowSmallFar,
    kMessage_END_LaunchLargeClose,
    kMessage_END_LaunchLargeFar,
    kMessage_END_BlowLargeClose,
    kMessage_END_BlowLargeFar,
    kMessage_END_Strike,
    kMessageFallFromBike_END,
};

