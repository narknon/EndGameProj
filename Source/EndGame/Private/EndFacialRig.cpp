#include "EndFacialRig.h"

UEndFacialRig::UEndFacialRig() {
    this->EyeBoneNames.AddDefaulted(2);
    this->EyelidsBoneNames.AddDefaulted(28);
    this->ForeheadBoneNames.AddDefaulted(3);
    this->GlabellaBoneNames.AddDefaulted(3);
    this->BrowBoneNames.AddDefaulted(6);
    this->EyeMoveBlendSpaceName = TEXT("F_Eyelid_move01");
    this->EyeMoveBlendInterpSpeed = 1;
    this->LookAtWeightBias = 1;
    this->LookAtUpWeightBias = 1;
    this->SaccadeMoveAngleMax = 1;
    this->SaccadeMoveAngleSoftLimitRate = 1;
    this->FixationVelocityThreshold = 1;
    this->MicroSaccadeMoveAngle = 1;
    this->RandomAdditiveSaccadeMoveAngle = 1;
    this->RandomAdditiveSaccadeTimeDuration = 1;
    this->BlinkPoseName = TEXT("F_Eyelid_blink01");
    this->BlinkThreshold = 1;
    this->FullBlinkThreshold = 1;
    this->PeriodicBlinkCurve = NULL;
    this->ReflectiveBlinkCurve = NULL;
    this->RefrectiveBlinkSaccadeMoveAngleThreshold = 1;
    this->RefrectiveBlinkIntervalMin = 1;
    this->LipSyncBrowMoveBlendSpaceName = TEXT("F_Clm");
    this->EmotionBlendSpaceName = TEXT("F_Emotion01");
    this->DefaultEmotionBlendInputInterpSpeed = 1;
    this->EmotionBlendCurve = NULL;
    this->EmotionTimeOffset = 1;
    this->EmotionLerpMaxLevel = 0;
}

