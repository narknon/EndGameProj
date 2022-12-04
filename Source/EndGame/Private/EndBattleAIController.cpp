#include "EndBattleAIController.h"

class AEndCharacter;
class AEndBattleSceneBlueprint;
class UAnimSequence;
class AEndNavModifierVolume;
class AActor;
class UObject;

void AEndBattleAIController::UnregisterOverlapTriggerBox() {
}

bool AEndBattleAIController::TryPossibleEasySpawnCharacter(FName keyword) {
    return false;
}

void AEndBattleAIController::TransformCharacter(FName BattleCharaSpecID) {
}

bool AEndBattleAIController::ToSpawnEasySpawnCharacter(FName keyword, FVector hidePosition, FRotator Rotation) {
    return false;
}

int32 AEndBattleAIController::ToRestoreParts(FName keyword) {
    return 0;
}

void AEndBattleAIController::ToRepairWithHPPercent(FName charaPartsSpecName, FName meshLabelName, float HPPercent) {
}

int32 AEndBattleAIController::ToRepair(FName charaPartsSpecName, FName meshLabelName, EEndPartsRepairConditionType Condition) {
    return 0;
}

bool AEndBattleAIController::ToMoveToSocketEasySpawnCharacter(FName keyword, FName SocketName) {
    return false;
}

void AEndBattleAIController::ToLanding() {
}

bool AEndBattleAIController::ToKillEasySpawnCharacter(FName keyword, bool forceDestroy) {
    return false;
}

int32 AEndBattleAIController::ToDestructionParts(FName keyword) {
    return 0;
}

bool AEndBattleAIController::ToChangeParts(FName meshName, FName meshLabel) {
    return false;
}

void AEndBattleAIController::ToBreak(FName charaPartsSpecName, bool bEnableBreakMessage) {
}

void AEndBattleAIController::ToAerial() {
}

void AEndBattleAIController::SwitchingTriggerBoxCondition() {
}

void AEndBattleAIController::SwitchAroundMove() {
}

void AEndBattleAIController::SuspendDamage() {
}

void AEndBattleAIController::SuspendAll() {
}

void AEndBattleAIController::SuspendAction(bool Ability, bool Motion) {
}

void AEndBattleAIController::StopPartLoopMotion() {
}

void AEndBattleAIController::StopAddMotion() {
}

void AEndBattleAIController::StartDisableLatestContactWall() {
}

bool AEndBattleAIController::StartBurst(bool Force) {
    return false;
}

FVector AEndBattleAIController::SetWorkVector(FName Name, FVector Value) {
    return FVector{};
}

FRotator AEndBattleAIController::SetWorkRotator(FName Name, FRotator Value) {
    return FRotator{};
}

FName AEndBattleAIController::SetWorkName(FName Name, FName Value) {
    return NAME_None;
}

int32 AEndBattleAIController::SetWorkInt32(FName Name, int32 Value) {
    return 0;
}

float AEndBattleAIController::SetWorkFloat(FName Name, float Value) {
    return 0.0f;
}

bool AEndBattleAIController::SetWorkBool(FName Name, bool Value) {
    return false;
}

void AEndBattleAIController::SetWeakConditionDamageOnlyMode(bool enableDamageOnlyMode, bool enableDamageOverEvent) {
}

void AEndBattleAIController::SetVisibilityWeapon(bool bVisible, EWeaponSlot weaponSlotType) {
}

FName AEndBattleAIController::SetupWaterJump(float InRangeMin, float InRangeMax) {
    return NAME_None;
}

void AEndBattleAIController::SetupWarpInformation(TArray<FName> warpPointNames) {
}

bool AEndBattleAIController::SetupWallJumpDetailed(float MinQt, float MaxQt, float KickDistQt, bool InCeil) {
    return false;
}

bool AEndBattleAIController::SetupWallJump(float MinQt, float MaxQt, float KickDistQt, bool InCeil) {
    return false;
}

void AEndBattleAIController::SetupDroppingAbility(float Speed, float Acc, float Rotate, float RotateUp, float RotateDown) {
}

bool AEndBattleAIController::SetupCeilJump(float MinQt, float MaxQt, float KickDistQt, float InLimitAngle) {
    return false;
}

void AEndBattleAIController::SetUncheckEnvStaticMeshContactWall(bool uncheck) {
}

void AEndBattleAIController::SetTurn(TEnumAsByte<EBattleMoveType::Type> InType, bool InTurn) {
}

void AEndBattleAIController::SetTriggerBoxCondition(const ETriggerBoxCondition Condition) {
}

void AEndBattleAIController::SetTargetTurn(bool InTurn) {
}

bool AEndBattleAIController::SetTargetPlayer(EPlayerType Type) {
    return false;
}

void AEndBattleAIController::SetTargetByType(EBattleAISetTargetType InType) {
}

void AEndBattleAIController::SetTargetAbility(AEndCharacter* InChara) {
}

void AEndBattleAIController::SetTarget(AEndCharacter* InChara) {
}

void AEndBattleAIController::SetSubStep(int32 InSubStep) {
}

void AEndBattleAIController::SetStep(int32 InStep, bool InClearSubStep) {
}

void AEndBattleAIController::SetSplinePointFloat(float InPoint) {
}

void AEndBattleAIController::SetSpecialStatusStateChangeID(EEndBattleSpecialStatusChangeType Type, FName StateChangeID, FName paramID) {
}

void AEndBattleAIController::SetSecondRoleTerm(TEnumAsByte<EEndAiBattleSecondRole::Type> InTerm) {
}

void AEndBattleAIController::SetRole(EEndAiBattleRole::Type InRole) {
}

void AEndBattleAIController::SetPushCollisionEnable(FName partId, bool Enable) {
}

void AEndBattleAIController::SetPreAsyncTick(bool bUse) {
}

void AEndBattleAIController::SetPauseUpdateDamageSource(bool Pause) {
}

void AEndBattleAIController::SetOverrideUpperAnim(const FName InName, const FName InInterIn, const FName InInterOut) {
}

void AEndBattleAIController::SetOverrideParamTargetCorrectionNotify(FName motionName, FName abilityName, bool bOverrideDirectionAngle, float OverrideDirectionAngle, bool bOverrideDistance, float OverrideDistance, bool bOverrideNotDistanceMoveStop, EEndBattleAbilityTargetCloseMoveType OverrideNotDistanceMoveStopType) {
}

void AEndBattleAIController::SetOverrideLocomotionAnim(FName InID) {
}

void AEndBattleAIController::SetOverrideKeepFromAbility(FName InAbilityName) {
}

void AEndBattleAIController::SetOverrideKeep(int32 InKeep) {
}

void AEndBattleAIController::SetOverrideConfrontCharacter(AEndCharacter* InChara) {
}

void AEndBattleAIController::SetOverrideBattleCharaSpec(FName BattleCharaSpecID) {
}

void AEndBattleAIController::SetOverrideBattleCharaPartsSpec(FName BaseID, FName OverrideId, bool bChangeHP) {
}

void AEndBattleAIController::SetOverrideAroundPointReserveUpdate(bool InOverride, EAroundPointType InType) {
}

void AEndBattleAIController::SetOverrideAroundPoint(bool InOverride, FVector InPoint) {
}

void AEndBattleAIController::SetOverrideAnim(EEndLocomotionAnim InType, const FName InName, const FName InInter, const EEndAnimWalkType InAfterType) {
}

void AEndBattleAIController::SetOverrideAerialAroundPoint(bool InOverride, FVector InPoint) {
}

void AEndBattleAIController::SetOverrideActiveAimAngle(FVector2D ActiveYawRange, FVector2D ActivePitchRange) {
}

void AEndBattleAIController::SetOverrideAbilityRange(float InPrepareMin, float InPrepareMax, float InMin, float InMax) {
}

void AEndBattleAIController::SetOverrideAbilityKeep(int32 Value) {
}

void AEndBattleAIController::SetOtherMoveAnim(FName InStart, FName InLoop, FName InEnd) {
}

void AEndBattleAIController::SetNextWarpPosition(const FVector& warpPosition) {
}

void AEndBattleAIController::SetNextAbilityTarget(AEndCharacter* InChara) {
}

void AEndBattleAIController::SetMoveModeParam(TEnumAsByte<EBattleMoveType::Type> InType, bool InStrafe, float InRunDistance, float InArrivalRadius) {
}

void AEndBattleAIController::SetMovementMode(bool bMovable, bool bHitWall, bool bHitObject, bool bFitFloor, bool bMaxWeight) {
}

void AEndBattleAIController::SetMeshDisp(bool InDisp) {
}

void AEndBattleAIController::SetIgnore(float InTime) {
}

void AEndBattleAIController::SetHPPercent(int32 Percent) {
}

void AEndBattleAIController::SetHPMinLimitPercent(int32 InPercent) {
}

void AEndBattleAIController::SetHPMinLimitPassiveDamagePercent(int32 InPercent) {
}

void AEndBattleAIController::SetHPMinLimitAIPCAttackPercent(int32 InPercent) {
}

void AEndBattleAIController::SetHPMinLimit(int32 Value) {
}

void AEndBattleAIController::SetHateUpdateFlag() {
}

void AEndBattleAIController::SetForceMoveType(TEnumAsByte<EEndAiMoveMode::Type> InType) {
}

void AEndBattleAIController::SetForceEnableTargetSpecialStatusChange(EEndBattleSpecialStatusChangeType Type, bool Enable) {
}

void AEndBattleAIController::SetForceDefaultSetting() {
}

void AEndBattleAIController::SetForceDefaultCollisionSetting() {
}

void AEndBattleAIController::SetFly(float InHeight, float InUpSpeed, float InDownSpeed) {
}

void AEndBattleAIController::SetEyeTraceFlag(bool InTarget, bool InParty, bool InEnemy) {
}

void AEndBattleAIController::SetEnableWeakCondition(EEndWeakConditionEnable Condition, EEndWeakConditionEnableOption Option) {
}

void AEndBattleAIController::SetEnablePauseUpdateDamageSource(bool Enable) {
}

void AEndBattleAIController::SetEnabledUpdateAimLocation(bool bEnabled) {
}

void AEndBattleAIController::SetEnableContactWallReturnAngle(bool Enable) {
}

void AEndBattleAIController::SetEnableCompletedAbilityExtraActionEvent(bool InEnable) {
}

void AEndBattleAIController::SetDisableTargetPoint(FName SocketName, bool bDisable) {
}

void AEndBattleAIController::SetDisableSuspendAction(bool disable) {
}

void AEndBattleAIController::SetDisableRemainAttributeEffect(EEndBattleAttributeType attribute) {
}

void AEndBattleAIController::SetDisableReaction(bool disable) {
}

void AEndBattleAIController::SetDisableParts(FName partsID, bool bDisableTarget, bool bDisableDamage, bool bDisableDamageCollision) {
}

void AEndBattleAIController::SetDisableBurst(bool disable) {
}

void AEndBattleAIController::SetDisableBPDamage(bool disable) {
}

void AEndBattleAIController::SetCountDownTimer(FName InName, float InParam) {
}

void AEndBattleAIController::SetConfront(float InNear, float InConfront, float InFar) {
}

void AEndBattleAIController::SetCommandLinkageTimeScale(float Scale) {
}

void AEndBattleAIController::SetCapturableBySummon(bool Flag) {
}

void AEndBattleAIController::SetBurstForceAerial(bool Flag) {
}

void AEndBattleAIController::SetBPPercent(float Value) {
}

void AEndBattleAIController::SetBPDamageCoefficient(float coefficient) {
}

void AEndBattleAIController::SetBPAttackChance(bool Enable) {
}

void AEndBattleAIController::SetBP(float Value) {
}

void AEndBattleAIController::SetBodyDummyParts(FName PartsSpecID) {
}

void AEndBattleAIController::SetBattleSensorShapeType(EBattleSensorShapeType InSensorShapeType, float InAngleRange, float InRadiusMin, float InRadiusMax, FName InSocketName) {
}

void AEndBattleAIController::SetBattleSafeTransform(bool bEnable) {
}

void AEndBattleAIController::SetBattleAIParam(TEnumAsByte<EBattleAIInfoParam::Type> InType, float InParam) {
}

void AEndBattleAIController::SetBattleAIFlag(TEnumAsByte<EBattleAIInfoFlag::Type> InType, bool InFlag) {
}

void AEndBattleAIController::SetBattleAbilityRotateStatePointName(FName modifierVolumeName) {
}

void AEndBattleAIController::SetBattleAbilityRotateStateLocation(const FVector& Location) {
}

void AEndBattleAIController::SetAngleRangeTargetPoint(FName SocketName, float baseAngle, float angleRange) {
}

void AEndBattleAIController::SetAISpec(FName InName) {
}

void AEndBattleAIController::SetAerialMoveType(TEnumAsByte<EBattleAirMoveType::Type> InType) {
}

void AEndBattleAIController::SetAerialBoidsLeader(AEndCharacter* InLeader) {
}

void AEndBattleAIController::SetActionTime(FName InName, float InTime) {
}

void AEndBattleAIController::SelfDisappear(bool drawPause) {
}

void AEndBattleAIController::ResetWorkVector(FName Name) {
}

void AEndBattleAIController::ResetWorkRotator(FName Name) {
}

void AEndBattleAIController::ResetWorkName(FName Name) {
}

void AEndBattleAIController::ResetWorkInt32(FName Name) {
}

void AEndBattleAIController::ResetWorkFloat(FName Name) {
}

void AEndBattleAIController::ResetWorkBool(FName Name) {
}

void AEndBattleAIController::ResetWhiteListArea() {
}

void AEndBattleAIController::ResetPathArea() {
}

void AEndBattleAIController::ResetOverrideUpperAnim(bool InPlayEndAnim) {
}

void AEndBattleAIController::ResetOverrideKeep() {
}

void AEndBattleAIController::ResetOverrideBattleCharaSpec() {
}

void AEndBattleAIController::ResetOverrideBattleCharaPartsSpec(FName BaseID) {
}

void AEndBattleAIController::ResetOverrideAnim(EEndLocomotionAnim InType, const FName InInter) {
}

void AEndBattleAIController::ResetOverrideActiveAimAngle() {
}

void AEndBattleAIController::ResetMovementMode() {
}

void AEndBattleAIController::ResetLatestContactWall() {
}

void AEndBattleAIController::ResetIgnoreNavArea() {
}

void AEndBattleAIController::ResetDefenseArea() {
}

void AEndBattleAIController::ResetChaseArea() {
}

void AEndBattleAIController::ResetBP() {
}

void AEndBattleAIController::ResetBlackListArea() {
}

void AEndBattleAIController::ResetATB() {
}

void AEndBattleAIController::ResetAngleRangeTargetPoint(FName SocketName) {
}

void AEndBattleAIController::ResetAllWork() {
}

void AEndBattleAIController::ResetAirPointArea() {
}

void AEndBattleAIController::ResetAerial() {
}

void AEndBattleAIController::ResetActionRequestCount(FName InName) {
}

void AEndBattleAIController::ResetActionLocalCount(FName InName) {
}

void AEndBattleAIController::ResetActionAbilityLocalCountFromID(FName InAbilityID) {
}

bool AEndBattleAIController::ReserveAbility(FName InName, bool InImmediate) {
    return false;
}

void AEndBattleAIController::RequestWandering(FVector InLocation) {
}

void AEndBattleAIController::RequestShowAbilityName(FName InName, float InTime, bool bNonGuardableIcon) {
}

bool AEndBattleAIController::RequestReserveAction2Arg(FName InName, int32 iValue, int32 iValue2, float fValue, float fValue2, const FString& sValue, const FString& sValue2) {
    return false;
}

bool AEndBattleAIController::RequestReserveAction(FName InName, int32 iValue, float fValue, const FString& sValue) {
    return false;
}

bool AEndBattleAIController::RequestPathFindLocation(FVector InLocation, FVector InLookAt, float InRadius, float SmoothingDistance) {
    return false;
}

bool AEndBattleAIController::RequestPathFind(bool IgnoreCanMove) {
    return false;
}

void AEndBattleAIController::RequestOtherMove() {
}

void AEndBattleAIController::RequestOtherLaunch() {
}

void AEndBattleAIController::RequestNextSpline(FName InName) {
}

void AEndBattleAIController::RequestHeliOverridePoint(AEndNavModifierVolume* InNav, FEndBattleHelicopterSpec InSpec) {
}

void AEndBattleAIController::RequestHeliMove(FEndBattleHelicopterSpec InSpec, int32 InGoal, bool InSkip) {
}

void AEndBattleAIController::RequestGuard(float InTime, bool InMovable) {
}

void AEndBattleAIController::RequestGroundSpline(FName InName) {
}

void AEndBattleAIController::RequestGroundCrash(bool InBurst) {
}

void AEndBattleAIController::RequestEscapeWait() {
}

void AEndBattleAIController::RequestDodge(FVector Location, bool InEnemy) {
}

void AEndBattleAIController::RequestBurstLaunch() {
}

bool AEndBattleAIController::RequestBindAction(FName InName) {
    return false;
}

void AEndBattleAIController::RequestAttachSyncAction() {
}

void AEndBattleAIController::RequestAerialCrash(bool InBurst) {
}

void AEndBattleAIController::RequestActorChase(AActor* InActor, FVector InOffset) {
}

bool AEndBattleAIController::RequestActionSubStep(FName InName, int32 InSubStep) {
    return false;
}

bool AEndBattleAIController::RequestActionStep(FName InName, int32 InStep) {
    return false;
}

bool AEndBattleAIController::RequestAction(FName InName) {
    return false;
}

bool AEndBattleAIController::RemoveStatusChange(EEndBattleStatusChangeType Type) {
    return false;
}

void AEndBattleAIController::RemoveSpecialStatusByID(FName ID) {
}

void AEndBattleAIController::RemoveSpecialStatus(EEndBattleSpecialStatusChangeType Type) {
}

void AEndBattleAIController::RemoveSpecialStateEffect(FName specialStateEffectID) {
}

void AEndBattleAIController::RemoveIgnoreNavArea(FName InName) {
}

void AEndBattleAIController::RemoveAttachEffect(const FName AttachSocketName, const FName ResourceName, bool bDestroy) {
}

void AEndBattleAIController::RemoveAllWeakCondiiton() {
}

void AEndBattleAIController::RemakeWeakCondition(ETriggerWeakRemakeType remakeType, bool resetProtectionTime) {
}

bool AEndBattleAIController::RegisterTurn(FName InName, float InYaw, float InMargin, bool InTarget, float InTimeout) {
    return false;
}

void AEndBattleAIController::RegisterOverlapTriggerBox() {
}

bool AEndBattleAIController::RegisterOrder(FName InName, FName InOrder, int32 InCount, FName InRace, TEnumAsByte<EBattleOrderRule::Type> InRule, float InInterest) {
    return false;
}

bool AEndBattleAIController::RegisterMove(FName InName, FVector InLocation, FVector InLookAt, float InRadius, float InTimeout, bool InPathFind, float InWalkRadius, bool InWaitIdle, float SmoothingDistance, bool InImmediate, float InInterval) {
    return false;
}

bool AEndBattleAIController::RegisterMotion(FName InName, float InTime, int32 InOverrideKeep) {
    return false;
}

bool AEndBattleAIController::RegisterConfront(FName InName, float InMin, float InMax) {
    return false;
}

bool AEndBattleAIController::RegisterCombo(FName InName, float InTime, int32 InATB, int32 InRandomATB, FName InAction1, FName InAction2, FName InAction3, FName InAction4, FName InAction5, FName InAction6, FName InAction7, FName InAction8, bool InLock, bool InTimeout) {
    return false;
}

bool AEndBattleAIController::RegisterCharaRangeListener(AEndCharacter* InChara, float InRange) {
    return false;
}

bool AEndBattleAIController::RegisterAbilityListener(FName InAbility) {
    return false;
}

bool AEndBattleAIController::RegisterAbility(FName InName, FName InID, float InTime, float InTimeout, int32 InATB, int32 InRandomATB, float InMinRange, float InMaxRange, float InActionMin, float InActionMax, float InHeightMin, float InHeightMax, float InViewRange, bool ViewReverse, float InDelayMove, float InDelayAbility, float InDelayRandAbility, bool InNeedMove, bool InNeedBetterMove, bool InAerialNeedMove, bool InCancelLostTarget, FName InOverrideLeftAbility, FName InOverrideRightAbility, bool InNeedSee) {
    return false;
}

void AEndBattleAIController::PlayPartMotion(FName motionName, FName InBone, EEndExtraActionLayer Layer, float overrideBlendIn, float overrideBlendOut) {
}

void AEndBattleAIController::PlayPartLoopMotion(FName motionName, FName InBone, EEndExtraActionLayer Layer) {
}

void AEndBattleAIController::PlayMotion(FName motionName) {
}

void AEndBattleAIController::PlayFsmAddMotion(FName motionBegin, FName motionLoop, FName motionEnd) {
}

int32 AEndBattleAIController::PlayBattleCameraSequence(FName SequenceID) {
    return 0;
}

void AEndBattleAIController::PlayAddMotion(FName motionName, EEndExtraActionLayer Layer, bool bInfiniteLoop) {
}




















































bool AEndBattleAIController::OnIsHitDamage_Implementation(AEndCharacter* causerChara, FName AbilityID, int32 abilityUniqueID, FName DamageSourceID) {
    return false;
}






bool AEndBattleAIController::OnGetTargetFieldPosition_Implementation(FVector& outPosition, FName InBattleAbilityID, FName InDamageSourceID, FName InAnimationName) {
    return false;
}

bool AEndBattleAIController::OnGetCreateFieldPosition_Implementation(FVector& outPosition, FName InBattleAbilityID, FName InDamageSourceID, FName InAnimationName) {
    return false;
}




void AEndBattleAIController::OnEventDamageSource(FName DamageSourceID) {
}


















































void AEndBattleAIController::NotifyAbilityReaction(float Param0) {
}

void AEndBattleAIController::NotBoolBranch(FName Name, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal) {
}

int32 AEndBattleAIController::NextSubStep() {
    return 0;
}

void AEndBattleAIController::LockTargetCharaBase(EEndBattleTargetCharaBaseLockType Type, bool bLock) {
}

void AEndBattleAIController::IsWorkInt32Branch(FName Name, int32 Value, EEndAiMathCmp cmp, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal) {
}

bool AEndBattleAIController::IsWorkInt32(FName Name, int32 Value, EEndAiMathCmp cmp) {
    return false;
}

void AEndBattleAIController::IsWorkFloatBranch(FName Name, float Value, EEndAiMathCmp cmp, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal) {
}

bool AEndBattleAIController::IsWorkFloat(FName Name, float Value, EEndAiMathCmp cmp) {
    return false;
}

bool AEndBattleAIController::IsWithinTargetEQS(FVector inP) {
    return false;
}

bool AEndBattleAIController::IsWeakCondition() {
    return false;
}

bool AEndBattleAIController::IsValidPathPoint(FVector& OutLocation, float InQuantity) {
    return false;
}

bool AEndBattleAIController::IsValidPath() {
    return false;
}

bool AEndBattleAIController::IsValidAerialCharaPoint(FVector InOffset, bool InRotateYaw) {
    return false;
}

bool AEndBattleAIController::IsTriggerBoxCondition(const ETriggerBoxCondition Condition) {
    return false;
}

bool AEndBattleAIController::IsToad(EPlayerType PlayerType) {
    return false;
}

bool AEndBattleAIController::IsSubStep(int32 InSubStep) {
    return false;
}

bool AEndBattleAIController::IsStepAndSubStep(int32 InStep, int32 InSubStep) {
    return false;
}

bool AEndBattleAIController::IsStep(int32 InStep) {
    return false;
}

bool AEndBattleAIController::IsSceneSense() {
    return false;
}

bool AEndBattleAIController::IsRunningAITimer() {
    return false;
}

bool AEndBattleAIController::IsRole(TEnumAsByte<EEndAiBattleRole::Type> InRole) {
    return false;
}

bool AEndBattleAIController::IsRangeArea(AEndCharacter* InChara, FVector InLocation, float InRadius) {
    return false;
}

bool AEndBattleAIController::IsOverrideUpperAnim() {
    return false;
}

bool AEndBattleAIController::IsMotionState() {
    return false;
}

bool AEndBattleAIController::IsMotion(FName InName) {
    return false;
}

bool AEndBattleAIController::IsLockTargetCharaBase() const {
    return false;
}

bool AEndBattleAIController::IsInSyncAction() const {
    return false;
}

bool AEndBattleAIController::IsInDummyBattle() const {
    return false;
}

bool AEndBattleAIController::IsIdle() {
    return false;
}

bool AEndBattleAIController::IsHPPercent(int32 Percent, EEndAiMathCmp cmp) {
    return false;
}

bool AEndBattleAIController::IsFly() {
    return false;
}

bool AEndBattleAIController::IsEscaping() {
    return false;
}

void AEndBattleAIController::IsEnemyRangeBranch(float InMin, float InMax, EEndAiMathBinCmp cmp, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal) {
}

bool AEndBattleAIController::IsEnemyRange(float InMin, float InMax) {
    return false;
}

bool AEndBattleAIController::IsEnemyDistanceLow(float InDistance) {
    return false;
}

bool AEndBattleAIController::IsEnemyDistanceHigh(float InDistance) {
    return false;
}

void AEndBattleAIController::IsEnemyDistanceBranch(float InDistance, EEndAiMathCmp cmp, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal) {
}

void AEndBattleAIController::IsEnemyAngleFrontBranch(float InAngle, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal, bool InReverse) {
}

bool AEndBattleAIController::IsEnemyAngleFront(float InAngle, bool InReverse) {
    return false;
}

bool AEndBattleAIController::IsDisableProcessDead() {
    return false;
}

bool AEndBattleAIController::IsDestruction(FName keyword) {
    return false;
}

bool AEndBattleAIController::IsDelayProcessing() {
    return false;
}

bool AEndBattleAIController::IsCombo(FName InName) {
    return false;
}

bool AEndBattleAIController::IsBurst() {
    return false;
}

bool AEndBattleAIController::IsBrokenParts(FName partsID) {
    return false;
}

bool AEndBattleAIController::IsBPAttackChance() {
    return false;
}

void AEndBattleAIController::IsBoolBranch(FName Name, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal) {
}

bool AEndBattleAIController::IsBattleScenePhase(int32 InPhase) {
    return false;
}

bool AEndBattleAIController::IsBattleAIEnableTick() {
    return false;
}

bool AEndBattleAIController::IsBadState() {
    return false;
}

bool AEndBattleAIController::IsATBLightAttack() {
    return false;
}

bool AEndBattleAIController::IsATB(int32 InATB) {
    return false;
}

bool AEndBattleAIController::IsAggressive() {
    return false;
}

bool AEndBattleAIController::IsActionTimeOver(FName InName) {
    return false;
}

bool AEndBattleAIController::IsActionLocalCount(FName InName, int32 InCount, EEndAiMathCmp InCmp) {
    return false;
}

bool AEndBattleAIController::IsActionCount(FName InName, int32 InCount, EEndAiMathCmp InCmp) {
    return false;
}

bool AEndBattleAIController::IsAbilityState() {
    return false;
}

bool AEndBattleAIController::IsAbility(FName InName) {
    return false;
}

void AEndBattleAIController::IntCmpBranch(int32 ValueA, int32 ValueB, EEndAiMathCmp cmp, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal) {
}

void AEndBattleAIController::ImmediateRegisterMoveWeak(FName InName) {
}

bool AEndBattleAIController::ImmediateRegisterMove(FName InName) {
    return false;
}

bool AEndBattleAIController::ImmediateMotion(FName InName, float Inter) {
    return false;
}

bool AEndBattleAIController::ImmediateBindAction(FName InName, int32 InCancelID) {
    return false;
}

bool AEndBattleAIController::ImmediateAction(FName InName) {
    return false;
}

bool AEndBattleAIController::HasStatusDeBarrier(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget) {
    return false;
}

bool AEndBattleAIController::HasStatusChangeEsuna(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget) {
    return false;
}

bool AEndBattleAIController::HasStatusChangeDeSpell(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget) {
    return false;
}

bool AEndBattleAIController::HasStatusChange(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget, EEndBattleStatusChangeType Type) {
    return false;
}

bool AEndBattleAIController::HasSpecialStatusByID(FName ID) {
    return false;
}

bool AEndBattleAIController::HasSpecialStatus(EEndBattleSpecialStatusChangeType Type) {
    return false;
}

bool AEndBattleAIController::HasDamageSource(FName DamageSourceID) {
    return false;
}

bool AEndBattleAIController::HasAbilityCancelNumber() {
    return false;
}

void AEndBattleAIController::HaltAction() {
}

FVector AEndBattleAIController::GetWorkVector(FName Name) {
    return FVector{};
}

FRotator AEndBattleAIController::GetWorkRotator(FName Name) {
    return FRotator{};
}

FName AEndBattleAIController::GetWorkName(FName Name) {
    return NAME_None;
}

int32 AEndBattleAIController::GetWorkInt32(FName Name) {
    return 0;
}

float AEndBattleAIController::GetWorkFloat(FName Name) {
    return 0.0f;
}

bool AEndBattleAIController::GetWorkBool(FName Name) {
    return false;
}

FVector AEndBattleAIController::GetWarpPosition(int32 warpPointId) {
    return FVector{};
}

ETriggerBoxCondition AEndBattleAIController::GetTriggerBoxCondition() {
    return ETriggerBoxCondition::OutSide;
}

AEndCharacter* AEndBattleAIController::GetTargetBase() {
    return NULL;
}

AEndCharacter* AEndBattleAIController::GetTarget() {
    return NULL;
}

TArray<AEndCharacter*> AEndBattleAIController::GetSyncActionCharacter(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget, EEndBattleSyncActionType Type) {
    return TArray<AEndCharacter*>();
}

AEndCharacter* AEndBattleAIController::GetSummonMaster() {
    return NULL;
}

int32 AEndBattleAIController::GetSubStep() {
    return 0;
}

int32 AEndBattleAIController::GetStep() {
    return 0;
}

TArray<AEndCharacter*> AEndBattleAIController::GetStatusChangeCharacter(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget, EEndBattleStatusChangeType Type) {
    return TArray<AEndCharacter*>();
}

float AEndBattleAIController::GetSplinePointFloat() {
    return 0.0f;
}

int32 AEndBattleAIController::GetSplinePoint() {
    return 0;
}

void AEndBattleAIController::GetSpecialStatusType(TArray<EEndBattleSpecialStatusChangeType>& typeList) const {
}

float AEndBattleAIController::GetSpecialStatusParamFloat(EEndBattleSpecialStatusChangeType Type, FName paramID) const {
    return 0.0f;
}

TArray<AEndCharacter*> AEndBattleAIController::GetSpecialStatusChangeCharacter(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget, EEndBattleSpecialStatusChangeType Type) {
    return TArray<AEndCharacter*>();
}

int32 AEndBattleAIController::GetSceneEnemyCount() {
    return 0;
}

int32 AEndBattleAIController::GetRoleCount(TEnumAsByte<EEndAiBattleRole::Type> InRole) {
    return 0;
}

TEnumAsByte<EEndAiBattleRole::Type> AEndBattleAIController::GetRole() {
    return EEndAiBattleRole::None;
}

int32 AEndBattleAIController::GetReserveSubStep() {
    return 0;
}

int32 AEndBattleAIController::GetReserveStep() {
    return 0;
}

TEnumAsByte<EEndAiBattleRole::Type> AEndBattleAIController::GetReserveRole() {
    return EEndAiBattleRole::None;
}

int32 AEndBattleAIController::GetRemainingLightAttackATB() {
    return 0;
}

int32 AEndBattleAIController::GetRemainingHardAttackATB() {
    return 0;
}

int32 AEndBattleAIController::GetRatioSwitch3(int32 Switch0, int32 Switch1, int32 Switch2) {
    return 0;
}

int32 AEndBattleAIController::GetRatioSwitch2(int32 Switch0, int32 Switch1) {
    return 0;
}

int32 AEndBattleAIController::GetRatioSwitch(TArray<int32> inArray) {
    return 0;
}

int32 AEndBattleAIController::GetRaceCount(FName InRace) {
    return 0;
}

int32 AEndBattleAIController::GetRaceAndRoleCount(FName InRace, TEnumAsByte<EEndAiBattleRole::Type> InRole) {
    return 0;
}

float AEndBattleAIController::GetPathDistance(FVector Location) {
    return 0.0f;
}

void AEndBattleAIController::GetPartyMember(TArray<AEndCharacter*>& OutMember, bool bIgnoreSelf) {
}

int32 AEndBattleAIController::GetPartsHPPercent(FName partsID) {
    return 0;
}

FVector AEndBattleAIController::GetNextWarpPosition() {
    return FVector{};
}

float AEndBattleAIController::GetNearestSplinePointFloat() {
    return 0.0f;
}

int32 AEndBattleAIController::GetNearestSplinePoint() {
    return 0;
}

AEndCharacter* AEndBattleAIController::GetLeader() {
    return NULL;
}

int32 AEndBattleAIController::GetHPPercent() {
    return 0;
}

int32 AEndBattleAIController::GetHPMax() {
    return 0;
}

int32 AEndBattleAIController::GetHP() {
    return 0;
}

bool AEndBattleAIController::GetFirstDamageTime(float& FirstDamageTime, const UAnimSequence* AnimSequecne, float StartTime) const {
    return false;
}

TEnumAsByte<EEndAiEscapeState::Type> AEndBattleAIController::GetEscapeState() {
    return EEndAiEscapeState::Aggressive;
}

TEnumAsByte<EBattleEntryType::Type> AEndBattleAIController::GetEntryType() {
    return EBattleEntryType::eNone;
}

FVector AEndBattleAIController::GetEnemyVector() {
    return FVector{};
}

float AEndBattleAIController::GetEnemyToPathDistance(FVector Location) {
    return 0.0f;
}

float AEndBattleAIController::GetEnemysDistance() {
    return 0.0f;
}

FRotator AEndBattleAIController::GetEnemyRotation() {
    return FRotator{};
}

float AEndBattleAIController::GetEnemyPitchAngle() {
    return 0.0f;
}

TArray<AEndCharacter*> AEndBattleAIController::GetEnemyMembersIgnoreSelf() {
    return TArray<AEndCharacter*>();
}

void AEndBattleAIController::GetEnemyMember(TArray<AEndCharacter*>& OutMember, bool bAlive) {
}

FVector AEndBattleAIController::GetEnemyLocation() {
    return FVector{};
}

float AEndBattleAIController::GetEnemyHeightDistanceAbs() {
    return 0.0f;
}

float AEndBattleAIController::GetEnemyHeightDistance() {
    return 0.0f;
}

float AEndBattleAIController::GetEnemyDistance2D() {
    return 0.0f;
}

float AEndBattleAIController::GetEnemyDistance() {
    return 0.0f;
}

float AEndBattleAIController::GetEnemyAngle() {
    return 0.0f;
}

float AEndBattleAIController::GetEnemyABSAngle() {
    return 0.0f;
}

AEndCharacter* AEndBattleAIController::GetEasySpawnCharacter(const FName& keyword) const {
    return NULL;
}

float AEndBattleAIController::GetDistance(AEndCharacter* Target, bool Path) {
    return 0.0f;
}

FName AEndBattleAIController::GetCurrentBindAction() {
    return NAME_None;
}

FName AEndBattleAIController::GetCurrentAction() {
    return NAME_None;
}

FName AEndBattleAIController::GetCharaSpec() {
    return NAME_None;
}

int32 AEndBattleAIController::GetCharaRoleID() {
    return 0;
}

AEndCharacter* AEndBattleAIController::GetCharacter() {
    return NULL;
}

int32 AEndBattleAIController::GetCharaBattleID() {
    return 0;
}

float AEndBattleAIController::GetBPPercent() {
    return 0.0f;
}

float AEndBattleAIController::GetBP() {
    return 0.0f;
}

float AEndBattleAIController::GetBattleScenePhaseTime() {
    return 0.0f;
}

int32 AEndBattleAIController::GetBattleScenePhase() {
    return 0;
}

AEndBattleSceneBlueprint* AEndBattleAIController::GetBattleSceneBlueprint() {
    return NULL;
}

TEnumAsByte<EBattleMoveType::Type> AEndBattleAIController::GetBattleMoveType() {
    return EBattleMoveType::eBM_NONE;
}

EBattleInSituationType AEndBattleAIController::GetBattleInSituation() {
    return EBattleInSituationType::eNone;
}

TEnumAsByte<EBattleAIProgress::Type> AEndBattleAIController::GetBattleAIProgress() {
    return EBattleAIProgress::eBeforeOnPrepare;
}

float AEndBattleAIController::GetBattleAIParam(TEnumAsByte<EBattleAIInfoParam::Type> InType) {
    return 0.0f;
}

bool AEndBattleAIController::GetBattleAIFlag(TEnumAsByte<EBattleAIInfoFlag::Type> InType) {
    return false;
}

int32 AEndBattleAIController::GetATBMax() {
    return 0;
}

int32 AEndBattleAIController::GetATB() {
    return 0;
}

float AEndBattleAIController::GetAirMoveGoalDistance2D() {
    return 0.0f;
}

float AEndBattleAIController::GetAirMoveGoalDistance() {
    return 0.0f;
}

TEnumAsByte<EBattleAirMoveType::Type> AEndBattleAIController::GetAerialMoveType() {
    return EBattleAirMoveType::eBAM_CONFRONT;
}

float AEndBattleAIController::GetAerialHeliVelocity() {
    return 0.0f;
}

AEndCharacter* AEndBattleAIController::GetAerialBoidsLeader() {
    return NULL;
}

float AEndBattleAIController::GetActionTime(FName InName) {
    return 0.0f;
}

int32 AEndBattleAIController::GetActionRequestCount(FName InName) {
    return 0;
}

int32 AEndBattleAIController::GetActionLocalCount(FName InName) {
    return 0;
}

float AEndBattleAIController::GetActionInTime(FName InName) {
    return 0.0f;
}

int32 AEndBattleAIController::GetActionCount(FName InName) {
    return 0;
}

TArray<AEndCharacter*> AEndBattleAIController::GetActionCharacter(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget, FName InActionName) {
    return TArray<AEndCharacter*>();
}

int32 AEndBattleAIController::GetActionAbilityLocalCountFromID(FName InAbilityID) {
    return 0;
}

bool AEndBattleAIController::ForceRequestAction(FName InName) {
    return false;
}

void AEndBattleAIController::ForceEnableAimEffectorSetting(FName EffectorSettingName) {
}

void AEndBattleAIController::ForceDisableAimEffectorSetting(FName EffectorSettingName) {
}

void AEndBattleAIController::FloatCmpBranch(float ValueA, float ValueB, EEndAiMathCmp cmp, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal) {
}

void AEndBattleAIController::FinishEscape() {
}

void AEndBattleAIController::FinishBattle() {
}

void AEndBattleAIController::EndFsmAddMotion() {
}

void AEndBattleAIController::EndDisableLatestContactWall() {
}

void AEndBattleAIController::EndBurstInstant() {
}

void AEndBattleAIController::EnableProcessDead() {
}

void AEndBattleAIController::EnableDamageReactionOwnerSyncAction() {
}

void AEndBattleAIController::DoOnceWithThen(const EEndDoOnceCode Code, FLatentActionInfo LatentInfo, EEndDoOnceOutCode& Result) {
}

void AEndBattleAIController::DisableProcessDead() {
}

void AEndBattleAIController::DestroyDamageSource(FName DamageSourceID, bool bDestroyEffect) {
}

void AEndBattleAIController::CreateSyncAction(FName syncActionID, AEndCharacter* targetChara, bool bOverwrite) {
}

void AEndBattleAIController::CreateOtherPath() {
}

void AEndBattleAIController::CreateDamageSourceByCurrentTargetBase(FName DamageSourceID) {
}

void AEndBattleAIController::CreateDamageSource(FName DamageSourceID, AEndCharacter* targetChara, FName AbilityID, bool bOverrideDamage, int32 OverrideDamage) {
}

void AEndBattleAIController::ClearHPMinLimitPassiveDamage() {
}

void AEndBattleAIController::ClearHPMinLimitAIPCAttack() {
}

void AEndBattleAIController::ClearHPMinLimit() {
}

void AEndBattleAIController::ClearDisableRemainAttributeEffect() {
}

void AEndBattleAIController::ClearBPDamageCoefficient() {
}

void AEndBattleAIController::ClearAction() {
}

void AEndBattleAIController::ChangeBattleScenePhase(int32 Phase) {
}

bool AEndBattleAIController::CanSeeTarget() {
    return false;
}

bool AEndBattleAIController::CanSeeCharacter(AEndCharacter* InChara) {
    return false;
}

bool AEndBattleAIController::CanSeeBlockTarget() {
    return false;
}

bool AEndBattleAIController::CanSeeBlockCharacter(AEndCharacter* InChara) {
    return false;
}

void AEndBattleAIController::CancelGroundSpline() {
}

void AEndBattleAIController::CancelActorChase() {
}

void AEndBattleAIController::CalcATBCompareValue() {
}

void AEndBattleAIController::CalcATBChangeValue(float IntervalTime, bool resetComparetiveATB, bool defaultIntervalSeconds) {
}

void AEndBattleAIController::BranchXOR(bool Flag1, bool Flag2, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal) {
}

void AEndBattleAIController::BranchOR(bool Flag1, bool Flag2, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal) {
}

void AEndBattleAIController::BranchAnd2(TEnumAsByte<EEndAIBranchBit::Type>& OutSignal, bool A, bool B) {
}

void AEndBattleAIController::BranchAnd(bool Flag1, bool Flag2, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal) {
}

void AEndBattleAIController::ApplyHate() {
}

void AEndBattleAIController::AIDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) {
}

void AEndBattleAIController::AddWhiteListArea(FVector InLocation, float InRadius, int32 InGroup) {
}

int32 AEndBattleAIController::AddSubStep() {
    return 0;
}

void AEndBattleAIController::AddSpecialStatusByID(FName ID) {
}

void AEndBattleAIController::AddSpecialStatus(EEndBattleSpecialStatusChangeType Type) {
}

void AEndBattleAIController::AddSpecialStateEffectWithBeamTarget(FName specialStateEffectID, TArray<AEndCharacter*> beamTargetCharaList) {
}

void AEndBattleAIController::AddSpecialStateEffect(FName specialStateEffectID) {
}

void AEndBattleAIController::AddPathArea(FVector InLocation, float InRadius, int32 InGroup) {
}

void AEndBattleAIController::AddIgnoreNavArea(FName InName) {
}

int32 AEndBattleAIController::AddEasySpawnCharacter(FName keyword, FName CharaSpecName, bool spawnedInvisible, bool spawnedDisableCollision, EEndBattleEasySpawnEnableRagdollType enableRagdollType, float destroyTimer, bool recycle, bool enableStartupDestroyTimer) {
    return 0;
}

int32 AEndBattleAIController::AddDestructionPartsName(FName keyword, FName meshName, FName destructionPartsLabelName, FName restorePartsLabelName) {
    return 0;
}

void AEndBattleAIController::AddDefenseArea(FVector InLocation, float InRadius, int32 InGroup) {
}

void AEndBattleAIController::AddChaseArea(FVector InLocation, float InRadius, int32 InGroup) {
}

void AEndBattleAIController::AddBlackListArea(FVector InLocation, float InRadius, int32 InGroup) {
}

bool AEndBattleAIController::AddBindAction(FName InName) {
    return false;
}

void AEndBattleAIController::AddAttachEffect(FEndCharacterAttachEffectArguments args) {
}

void AEndBattleAIController::AddAreaFromModify(TEnumAsByte<EModifierVolumeType::Type> InType, int32 InGroup) {
}

void AEndBattleAIController::AddAirPointArea(FVector InLocation, float InRadius, int32 InGroup) {
}

AEndBattleAIController::AEndBattleAIController() {
    this->PositionAngleQuantity = 1000.00f;
    this->bRunAround = false;
    this->bAroundWalkMode = false;
    this->bAroundStrafeMode = false;
    this->AroundDirection = EBattleAroundDirection::eNone;
    this->AroundAddDistance = 0.00f;
    this->RunAroundThreshold = 5.00f;
    this->bWandering = false;
    this->WanderingRange = 1000.00f;
    this->WanderingInterval = 5.00f;
    this->WanderingIntervalRand = 1.00f;
    this->bWanderingStrafe = true;
    this->bLockMoveMode = false;
    this->bAcceptMoveAbility = false;
    this->SearchMoveTime = -1.00f;
    this->SearchMovePathCheck = true;
    this->bForceEscapeMove = true;
    this->bForceEscapeTurn = true;
    this->bNormalEnemyShrink = true;
    this->bUcpcDifHeightAuto = false;
    this->UcpcDifHeightAutoRange = 400.00f;
    this->ActorChaseEndDistance = 500.00f;
    this->ActorChaseEndDifHeight = 200.00f;
    this->bCanTurnIgnoreMove = false;
    this->SearchDistance = 5000.00f;
    this->DistanceFar = 1400.00f;
    this->DistanceConfront = 800.00f;
    this->DistanceNear = 300.00f;
    this->bDistanceSearchUseConfront = false;
    this->bAerialDistanceSearchTarget = false;
    this->CharaDistance = 200.00f;
    this->CharaDistanceQuantity = 1.00f;
    this->bCanRequestActionAtSync = true;
    this->bForcePositionAngle = false;
    this->ForcePositionAngleRange = 15.00f;
    this->WhiteListGroup = -1;
    this->BlackListGroup = -1;
    this->DefenceAreaGroup = -1;
    this->AirPointGroup = -1;
    this->ChaseGroup = -1;
    this->FearThreshold = 500.00f;
    this->DamageSourceEntryThreshold = 500.00f;
    this->CanReachRange = 100.00f;
    this->bRescueSizeMove = false;
    this->bAcceptActionOutArea = false;
    this->bUseResetPathAtAbility = false;
    this->AerialAroundDirection = EBattleAroundDirection::eNone;
    this->AerialAroundStrafe = true;
    this->bAerialFunnelParentRotate = true;
    this->bAerialFunnelParentTarget = false;
    this->bAerialFunnelFixFlag = false;
    this->AerialFunnelFixTime = 0.00f;
    this->bAeriaDecoyMode = false;
    this->AerialGoalRadius = 100.00f;
    this->AerialUsePath = true;
    this->AerialSplineRotateMargin = 1.00f;
    this->AerialSplineRotateSpeed = 1.00f;
    this->AerialSplineAccSpeed = 0.10f;
    this->bAerialSplineRotatePitch = true;
    this->bAerialSplineRotateRoll = true;
    this->bAerialSplineRun = false;
    this->bAerialSplineThreshold = 30.00f;
    this->bAerialSplineActive = true;
    this->bAerialSplineApproachFront = false;
    this->bAerialSplineApproachDistanceQuantity = 1.00f;
    this->bAerialSplineApproachQuantity = 1.00f;
    this->bAerialSplineUnloopAutoStop = true;
    this->bAerialSplineMotionForwardOnly = false;
    this->bAerialSplineStartStopRootMotion = false;
    this->bAerialSplineStrafe = false;
    this->bAerialSplineOverrideYaw = false;
    this->AerialSplineOverrideYawAngle = 0.00f;
    this->bAerialSplineOverridePitch = false;
    this->AerialSplineOverridePitchAngle = 0.00f;
    this->AerialSplineTurn = true;
    this->bAerialSplineAutoAdjust = true;
    this->AerialRotateSpeed = 1.00f;
    this->AerialHoveringRange = 0.00f;
    this->AerialHoveringInterval = 5.00f;
    this->AerialHoveringIntervalRand = 5.00f;
    this->bAerialHelicopter = false;
    this->bAerialLandingAnywhere = false;
    this->bAerialLandingAnywhereAndTargetEqs = false;
    this->bAerialSplineSpeedMax = false;
    this->AerialSplineSpeed = 200.00f;
    this->AerialSplineLaunch = true;
    this->CanUseFastCalcMove = true;
    this->SplineComponent = NULL;
    this->DebugRequestActionLog = false;
    this->bUseBoids = false;
    this->bUseBoidsAvoid = false;
    this->bTakeDamageDelayMove = false;
    this->bUseHate = true;
    this->bPrepareProcOnce = false;
    this->bFirstUpdateOnce = false;
    this->bAcceptInterceptAtStopStatus = true;
    this->LatestLeader = NULL;
    this->TransformSpline = NULL;
    this->secondsIntervalATBAttack_ = 5.00f;
    this->TriggerBoxCondition = ETriggerBoxCondition::OutSide;
    this->ShowDodgeAngleInfo = false;
    this->ShowSensorRange = false;
    this->ShowBattleAreaDistance = false;
    this->ShowPushCollisionController = false;
}

