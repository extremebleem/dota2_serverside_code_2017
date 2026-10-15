
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEmptyEntityInstance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 54, @0x00000000025609f0, libserver.so)
// calls: CEntityClass::~CEntityClass
void __fastcall CEmptyEntityInstance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEmptyEntityInstance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_40F1710;
  CEntityClass::~CEntityClass(this);
}


// CEmptyEntityInstance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 54, @0x0000000002560a10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEmptyEntityInstance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEmptyEntityInstance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_40F1710;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEmptyEntityInstance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 56, @0x0000000002555580, libserver.so)
// calls: CEmptyEntityInstance::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEmptyEntityInstance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEmptyEntityInstance::CEntityInstanceEntityClass *const this)
{
  CEmptyEntityInstance::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CEmptyEntityInstance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEntityInstance::PreDataUpdate  (line 92, @0x0000000001b4fdb0, libserver.so)
void __fastcall CEntityInstance::PreDataUpdate(CEntityInstance *const this, DataUpdateType_t updateType)
{
  ;
}


// CEntityInstance::DrawEntityDebugOverlays  (line 93, @0x0000000001f03800, libserver.so)
void __fastcall CEntityInstance::DrawEntityDebugOverlays(CEntityInstance *const this, uint64 nDebugOverlays)
{
  ;
}


// CEntityInstance::Save  (line 96, @0x0000000001f03810, libserver.so)
int __fastcall CEntityInstance::Save(CEntityInstance *const this, ISave *const save)
{
  return 1;
}


// CEntityInstance::Restore  (line 97, @0x0000000001f03820, libserver.so)
int __fastcall CEntityInstance::Restore(CEntityInstance *const this, IRestore *const restore)
{
  return 1;
}


// CEntityInstance::OnSave  (line 99, @0x0000000001f03830, libserver.so)
void __fastcall CEntityInstance::OnSave(CEntityInstance *const this)
{
  ;
}


// CEntityInstance::OnRestore  (line 100, @0x0000000001f03840, libserver.so)
void __fastcall CEntityInstance::OnRestore(CEntityInstance *const this)
{
  ;
}


// CEntityInstance::ObjectCaps  (line 102, @0x0000000001f03850, libserver.so)
int __fastcall CEntityInstance::ObjectCaps(CEntityInstance *const this)
{
  return 0;
}


// CEntityInstance::RequiredEdictIndex  (line 103, @0x0000000001f03860, libserver.so)
CEntityIndex __fastcall CEntityInstance::RequiredEdictIndex(CEntityInstance *const this)
{
  return -1;
}


// CEntityInstance::NetworkStateChanged  (line 105, @0x0000000001f03870, libserver.so)
void __fastcall CEntityInstance::NetworkStateChanged(CEntityInstance *const this)
{
  ;
}


// CEntityInstance::NetworkStateChanged  (line 106, @0x0000000001f03880, libserver.so)
void __fastcall CEntityInstance::NetworkStateChanged(
        CEntityInstance *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CEntityInstance::NetworkStateChangedLog  (line 107, @0x0000000001f03890, libserver.so)
void __fastcall CEntityInstance::NetworkStateChangedLog(
        const CEntityInstance *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CEntityInstance::AddChangeAccessorPath  (line 109, @0x0000000001f038a0, libserver.so)
ChangeAccessorFieldPathIndex_t __fastcall CEntityInstance::AddChangeAccessorPath(
        CEntityInstance *const this,
        const CFieldPath *const path)
{
  return -1;
}


// CEntityInstance::DataDescValidate  (line 273, @0x0000000001b4fdc0, libserver.so)
bool __fastcall CEntityInstance::DataDescValidate(const CEntityInstance *const this, ValidationResult_t *pResult)
{
  return 1;
}


// CEntityInstance::DataDescValidateClassname  (line 274, @0x0000000001b4fdd0, libserver.so)
// strings: "CEntityInstance"
const char *__fastcall CEntityInstance::DataDescValidateClassname(const CEntityInstance *const this)
{
  return "CEntityInstance";
}


// CEntityInstance::Schema_DynamicBinding  (line 332, @0x00000000030a00c0, libserver.so)
// calls: CEntityInstance::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityInstance::Schema_DynamicBinding(const CEntityInstance *const this)
{
  CEntityInstance::Schema_VerifyBindingIsRegistered();
  return CEntityInstance::s_pSchemaBinding;
}


// CEntityInstance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 335, @0x0000000001ea2640, libserver.so)
// calls: CEntityClass::~CEntityClass
void __fastcall CEntityInstance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEntityInstance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEntityInstance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 335, @0x0000000001ea2660, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEntityInstance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEntityInstance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEntityInstance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 337, @0x0000000001ea1cd0, libserver.so)
// calls: CEntityInstance::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityInstance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEntityInstance::CEntityInstanceEntityClass *const this)
{
  CEntityInstance::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CEntityInstance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEntityInstance::GetRefEHandle  (line 395, @0x0000000001b4fde0, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init
_WORD *__fastcall CEntityInstance::GetRefEHandle(_WORD *a1, const CEntityInstance *const this)
{
  _WORD *result; // rax
  CEntityIdentity *m_pEntity; // rcx
  int v4; // edx
  __int16 v5; // si

  result = a1;
  m_pEntity = this->m_pEntity;
  v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v5 = 0x7FFF;
  else
    v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  *a1 = v5 | *a1 & 0x8000;
  *a1 = (v4 << 15) | *a1 & 0x7FFF;
  return result;
}


// CEntityInstance::GetClassNameAsCStr  (line 578, @0x00000000030a0040, libserver.so)  // inlines: GetClassNameAsCStr, String
const char *__fastcall CEntityInstance::GetClassNameAsCStr(const CEntityInstance *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_pEntity->m_designerName.u.m_Id != 0 )
    return this->m_pEntity->m_designerName.u.m_pAsString;
  return result;
}


// CEntityInstance::GetEntityNameAsCStr  (line 608, @0x00000000030a0060, libserver.so)  // inlines: GetEntityNameAsCStr, String
const char *__fastcall CEntityInstance::GetEntityNameAsCStr(const CEntityInstance *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_pEntity->m_name.u.m_Id != 0 )
    return this->m_pEntity->m_name.u.m_pAsString;
  return result;
}


// CEntityInstance::GetDebugName  (line 623, @0x00000000030a00e0, libserver.so)
// calls: CEntityIdentity::GetDebugName
const char *__fastcall CEntityInstance::GetDebugName(const CEntityInstance *const this)
{
  return CEntityIdentity::GetDebugName(this->m_pEntity);
}


// CEntityInstance::GetPublicScriptScope  (line 652, @0x0000000002459ba0, libserver.so)
// calls: CEntityInstance::CreatePublicScriptScope
// callers: CDOTA_Ability_DataDriven::Script_ApplyDataDrivenThinker, CDOTA_ActionRunner::SelectActionTargets, CDOTA_ActionRunner::SelectActionPointsWithoutOffset, CDOTA_ActionRunner::PerformAction_RunScript, CDOTA_Modifier_ScriptedMotionController::OnCreated
const CEntityPublicScriptScope *__fastcall CEntityInstance::GetPublicScriptScope(
        const CEntityInstance *const this,
        GetScriptScopeBehavior_t behavior)
{
  CEntityIdentity *m_pEntity; // rax

  m_pEntity = this->m_pEntity;
  if ( behavior == GetScriptScopeBehavior_t::CREATE_IF_NECESSARY && m_pEntity->m_hPublicScope.m_hScope == 0 )
  {
    CEntityInstance::CreatePublicScriptScope(this, 0);
    m_pEntity = this->m_pEntity;
  }
  return &m_pEntity->m_hPublicScope;
}


// CEntityHandle::operator CEntityInstance*  (line 772, @0x000000000224a780, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity
// callers: CBreakable::Die, CEntitySystem::ServiceEntityIOEvents
// globals: CEntityHandle::gm_pEntityList
CEntityInstance *__fastcall CEntityHandle::operator CEntityInstance *(CEntityHandle *const this)
{
  CEntityInstance *result; // rax
  CEntityIdentity *v2; // rcx
  CEntityIdentity *v3; // rcx

  result = 0;
  if ( this->m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[this->m_Index & 0x1FF];
      if ( v3 != 0 && this->m_Index == v3->m_EHandle.m_Index )
        return v3->m_pInstance;
    }
  }
  return result;
}


// CEntityHandle::operator CEntityInstance*  (line 782, @0x0000000001eeff70, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity
// callers: CBaseEntity::FireBullets, CBreakableProp::OnTakeDamage, CBreakableProp::Break, CAmbientGeneric::Activate, CBaseCombatCharacter::Weapon_OwnsThisType, CVisibilityMonitor::EntityIsVisibleToPlayer, CPointCommentaryNode::SetTransmit, CBeam::GetAbsStartPos, CPointCommentaryNode::UpdateViewThink, CVisibilityMonitor::FrameUpdatePostEntityThink, CPointCommentaryNode::CleanupPostCommentary, CPointCommentaryNode::UpdateViewPostThink (1006 total)
// globals: CEntityHandle::gm_pEntityList
CEntityInstance *__fastcall CEntityHandle::operator CEntityInstance *(const CEntityHandle *const this)
{
  CEntityInstance *result; // rax
  CEntityIdentity *v2; // rcx
  CEntityIdentity *v3; // rcx

  result = 0;
  if ( this->m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[this->m_Index & 0x1FF];
      if ( v3 != 0 && this->m_Index == v3->m_EHandle.m_Index )
        return v3->m_pInstance;
    }
  }
  return result;
}


// CEntityHandle::CEntityHandle  (line 792, @0x0000000002e25420, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init
// callers: CDOTA_Item_Ward_Dispenser::OnSpellStart, CDOTA_Item_SentryWard::OnSpellStart
void __fastcall CEntityHandle::CEntityHandle(CEntityHandle *const this, const CEntityInstance *pInstance)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx
  __int64 v5; // [rsp-8h] [rbp-8h]

  if ( pInstance != 0 && (m_pEntity = pInstance->m_pEntity) != 0 )
  {
    v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v4 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    *(&v5 - 8) = v4 | *(&v5 - 2) & 0x8000;
    this->m_Index = (v3 << 15) | *(&v5 - 2) & 0x7FFF;
  }
  else
  {
    this->m_Index = -1;
  }
}


// HScriptToEntity<CBaseEntity>  (line 886, @0x0000000001f866a0, libserver.so)
// calls: GetScriptDesc<CEntityInstance>
// callers: Script_TraceHull, Script_TraceLine, Script_CreateModifierThinker, FindUnitsInRadius_Script, CDOTA_BaseNPC::Script_AddNewModifier
// globals: g_pScriptVM
CBaseEntity *__fastcall HScriptToEntity<CBaseEntity>(HSCRIPT hScript)
{
  CBaseEntity *(__fastcall *v2)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax

  if ( hScript == 0 )
    return 0;
  v2 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CEntityInstance>(0);
  return v2(g_pScriptVM, hScript, Script);
}


