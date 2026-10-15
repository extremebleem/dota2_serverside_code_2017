
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFeModel::GetDefaultLocalForce  (line 1035, @0x00000000031b8a90, libserver.so)
// callers: CFeModelCombiner::CollectMemory<CFeModelCombiner>
float __fastcall CFeModel::GetDefaultLocalForce(const CFeModel_0 *const this)
{
  return this->m_flLocalForce;
}


// CFeModel::GetDefaultLocalRotation  (line 1036, @0x00000000031b8aa0, libserver.so)
// callers: CFeModelCombiner::CollectMemory<CFeModelCombiner>
float __fastcall CFeModel::GetDefaultLocalRotation(const CFeModel_0 *const this)
{
  return this->m_flLocalRotation;
}


// CFeModel::GetDefaultNodeCollisionRadius  (line 1037, @0x00000000031b8ab0, libserver.so)
// callers: CFeModelCombiner::CollectMemory<CFeModelCombiner>
float __fastcall CFeModel::GetDefaultNodeCollisionRadius(const CFeModel_0 *const this)
{
  return 0.0;
}


// CFeModel::GetDefaultLegacyStretchForce  (line 1038, @0x00000000031b8ac0, libserver.so)
// callers: CFeModelCombiner::CollectMemory<CFeModelCombiner>
float __fastcall CFeModel::GetDefaultLegacyStretchForce(const CFeModel_0 *const this)
{
  return 0.0;
}


// CFeModel::GetDefaultNodeIntegrator  (line 1039, @0x00000000031b8ad0, libserver.so)
// callers: CFeModelCombiner::CollectMemory<CFeModelCombiner>
FeNodeIntegrator_t __fastcall CFeModel::GetDefaultNodeIntegrator(const CFeModel_0 *const this)
{
  FeNodeIntegrator_t result; // 0:xmm0_8.8,8:xmm1_8.8

  *&result.flPointDamping = 0;
  *&result.flAnimationVertexAttraction = 0x43B4000000000000LL;
  return result;
}


// CFeModel::GetDefaultCtrlName  (line 1040, @0x00000000031b8af0, libserver.so)
// callers: CFeModelCombiner::CollectMemory<CFeModelCombiner>
const char *__fastcall CFeModel::GetDefaultCtrlName(const CFeModel_0 *const this)
{
  return 0;
}


// CFeModel::GetDefaultInitPose  (line 1041, @0x00000000031b8b00, libserver.so)
// callers: CFeModelCombiner::CollectMemory<CFeModelCombiner>
CTransform *__fastcall CFeModel::GetDefaultInitPose(CTransform *__return_ptr retstr, const CFeModel_0 *const this)
{
  __int64 v3; // rdx

  retstr->m_vPosition = g_TransformIdentity.m_vPosition;
  v3 = *&g_TransformIdentity.m_orientation.z;
  *&retstr->m_orientation.x = *&g_TransformIdentity.m_orientation.x;
  *&retstr->m_orientation.z = v3;
  return retstr;
}


// CFeModel::GetDefaultNodeInvMass  (line 1042, @0x00000000031b8b30, libserver.so)
// callers: CFeModelCombiner::CollectMemory<CFeModelCombiner>
float __fastcall CFeModel::GetDefaultNodeInvMass(const CFeModel_0 *const this)
{
  return 0.0;
}


// CFeModel::GetDefaultCtrlHash  (line 1043, @0x00000000031b8b40, libserver.so)
// callers: CFeModelCombiner::CollectMemory<CFeModelCombiner>
uint32 __fastcall CFeModel::GetDefaultCtrlHash(const CFeModel_0 *const this)
{
  return 0;
}


