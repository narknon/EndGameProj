#include "EndParticleModuleStaticMesh.h"

UEndParticleModuleStaticMesh::UEndParticleModuleStaticMesh() {
    this->m_StaticMesh = NULL;
    this->m_SelectKind = EEndEffectStaticMeshSelectKind::Random;
    this->m_OrderOffset = 0;
    this->m_OrderReverse = false;
    this->m_bMultiplySurfaceArea = false;
}

