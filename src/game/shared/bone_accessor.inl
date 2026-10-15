
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBoneAccessor<matrix3x4a_t>::Cleanup  (line 228, @0x0000000001f86600, libserver.so)
// calls: operator delete []
// callers: CDecalGameSystem::RenderDebuggingData, CDecalGameSystem::UpdateSkinnedEntityDecals, CPhysicsGameSystem::ForceUpdateIfKeyframed, CBaseAnimating::HitboxToWorldTransforms, CBaseAnimating::DrawVCollide, CSkeletonInstance::CalcWorldSpaceBones, CSkeletonInstance::SetBoneTransformsInSceneObject, CGameSceneNode::PerformHierarchySetupWork, CSkeletonInstance::BuildTransformations, CSkeletonInstance::CalcWorldSpaceAttachments, CSkeletonInstance::GetWorldSpaceTransform, CSkeletonInstance::GetHitBoxListAndTransforms (14 total)
void __fastcall CBoneAccessor<matrix3x4a_t>::Cleanup(CBoneAccessor<matrix3x4a_t> *const this)
{
  matrix3x4a_t *m_pBones; // rdi
  uint32 *m_pReadableBones; // rdi

  if ( this->m_bOwnsMemory )
  {
    m_pBones = this->m_pBones;
    if ( m_pBones != 0 )
      operator delete[](m_pBones);
    m_pReadableBones = this->m_pReadableBones;
    if ( m_pReadableBones != 0 )
      operator delete[](m_pReadableBones);
  }
  this->m_pBones = 0;
  this->m_pReadableBones = 0;
  this->m_nBones = 0;
  this->m_bOwnsMemory = 0;
}


// CBoneAccessor<CTransform>::Cleanup  (line 228, @0x0000000002111cd0, libserver.so)
// calls: operator delete []
// callers: CSkeletonInstance::BuildInterpolatedTransformations, CSkeletonInstance::CalcWorldSpaceBones, CSkeletonInstance::BuildTransformations
void __fastcall CBoneAccessor<CTransform>::Cleanup(CBoneAccessor<CTransform> *const this)
{
  CTransform *m_pBones; // rdi
  uint32 *m_pReadableBones; // rdi

  if ( this->m_bOwnsMemory )
  {
    m_pBones = this->m_pBones;
    if ( m_pBones != 0 )
      operator delete[](m_pBones);
    m_pReadableBones = this->m_pReadableBones;
    if ( m_pReadableBones != 0 )
      operator delete[](m_pReadableBones);
  }
  this->m_pBones = 0;
  this->m_pReadableBones = 0;
  this->m_nBones = 0;
  this->m_bOwnsMemory = 0;
}


