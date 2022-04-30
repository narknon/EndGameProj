#include "VfxParticleModuleTypeDataTrajectory.h"

UVfxParticleModuleTypeDataTrajectory::UVfxParticleModuleTypeDataTrajectory() {
    this->m_MaxTrailCount = 0;
    this->m_RenderAxisOption = EVfxTrajectoryRenderAxisOption::EVTRAO_RightVector;
    this->m_fTextureTileDistance = 1;
    this->m_bRenderGeometry = true;
    this->m_bApplyMatrixScaleVelocity = false;
    this->m_bIgnoreLimitTrailLength = false;
    this->m_fTrailDivDistance = 1;
    this->m_BufferCount = 0;
    this->m_UpdateBufferFPS = 0;
    this->m_bDebugDrawBufferPoint = false;
    this->m_bDebugDrawPointCoordinate = false;
    this->m_bDebugDrawPolygonLine = false;
    this->m_bDebugDrawInterpPoint = false;
    this->m_bDebugDrawTangent = false;
}

