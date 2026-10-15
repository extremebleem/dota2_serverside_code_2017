
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRagdoll::Schema_DynamicBinding  (line 19, @0x0000000002373240, libserver.so)
// calls: CRagdoll::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CRagdoll::Schema_DynamicBinding(const CRagdoll *const this)
{
  CRagdoll::Schema_VerifyBindingIsRegistered();
  return CRagdoll::s_pSchemaBinding;
}


// CRagdoll::GetDataMap  (line 26, @0x0000000002371240, libserver.so)
// globals: CRagdoll::m_DataMap
datamap_t *__fastcall CRagdoll::GetDataMap(CRagdoll *const this)
{
  return &CRagdoll::m_DataMap;
}


// CRagdoll::RagdollBoneCount  (line 47, @0x0000000002371250, libserver.so)
int __fastcall CRagdoll::RagdollBoneCount(const CRagdoll *const this)
{
  return this->m_ragdoll.listCount;
}


// CRagdoll::AllowStretch  (line 48, @0x0000000002371260, libserver.so)
bool __fastcall CRagdoll::AllowStretch(const CRagdoll *const this)
{
  return this->m_ragdoll.allowStretch;
}


// CRagdoll::IsValid  (line 51, @0x0000000002371270, libserver.so)
bool __fastcall CRagdoll::IsValid(const CRagdoll *const this)
{
  return this->m_ragdoll.listCount > 0;
}


// CRagdoll::GetRootBone  (line 53, @0x0000000002371280, libserver.so)
int __fastcall CRagdoll::GetRootBone(const CRagdoll *const this)
{
  return this->m_ragdoll.boneIndex[0];
}


// CRagdoll::GetLastVPhysicsUpdateTime  (line 56, @0x0000000002371290, libserver.so)
float __fastcall CRagdoll::GetLastVPhysicsUpdateTime(const CRagdoll *const this)
{
  return this->m_lastUpdate;
}


