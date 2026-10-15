
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// attachedparticlesystem_t::attachedparticlesystem_t  (line 47, @0x0000000002eaf540, libserver.so)  // inlines: CCopyableUtlVector, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ~CUtlVector
// calls: CUtlVectorBase<attachedparticlecontrolpoint_t, CUtlMemory<attachedparticlecontrolpoint_t, int> >::CopyArray, CUtlVectorBase<attachedparticlecontrolpoint_t, CUtlMemory<attachedparticlecontrolpoint_t, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall attachedparticlesystem_t::attachedparticlesystem_t(
        attachedparticlesystem_t *const this,
        const attachedparticlesystem_t *const a2)
{
  attachedparticle_toent_t nAttachToEntity; // eax

  this->symResourceName.u.m_Id = a2->symResourceName.u.m_Id;
  this->symSystemName.u.m_Id = a2->symSystemName.u.m_Id;
  this->symAttachmentName.u.m_Id = a2->symAttachmentName.u.m_Id;
  this->bFollowRootBone = a2->bFollowRootBone;
  this->bFlyingCourier = a2->bFlyingCourier;
  this->bGroundCourier = a2->bGroundCourier;
  this->bDireOnly = a2->bDireOnly;
  this->bRadiantOnly = a2->bRadiantOnly;
  this->iCustomType = a2->iCustomType;
  this->iCount = a2->iCount;
  this->nSystemID = a2->nSystemID;
  this->colorDefault = a2->colorDefault;
  this->defaultR = a2->defaultR;
  this->defaultG = a2->defaultG;
  this->defaultB = a2->defaultB;
  this->nRootAttachType = a2->nRootAttachType;
  nAttachToEntity = a2->nAttachToEntity;
  this->vecControlPoints.m_Size = 0;
  this->vecControlPoints.m_Memory.m_pMemory = 0;
  this->vecControlPoints.m_Memory.m_nAllocationCount = 0;
  this->nAttachToEntity = nAttachToEntity;
  this->vecControlPoints.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<attachedparticlecontrolpoint_t,CUtlMemory<attachedparticlecontrolpoint_t,int>>::CopyArray(
    &this->vecControlPoints,
    a2->vecControlPoints.m_Memory.m_pMemory,
    a2->vecControlPoints.m_Size);
}


