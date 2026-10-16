
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_ModifierManager::Schema_DynamicBinding  (line 37, @0x000000000262eef0, libserver.so)
// calls: CDOTA_ModifierManager::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_ModifierManager::Schema_DynamicBinding(
        const CDOTA_ModifierManager *const this)
{
  CDOTA_ModifierManager::Schema_VerifyBindingIsRegistered();
  return CDOTA_ModifierManager::s_pSchemaBinding;
}


// CDOTA_ModifierManager::NetworkStateChanged  (line 39, @0x00000000026242d0, libserver.so)
void __fastcall CDOTA_ModifierManager::NetworkStateChanged(CDOTA_ModifierManager *const this)
{
  ;
}


// CDOTA_ModifierManager::NetworkStateChanged  (line 39, @0x00000000026242e0, libserver.so)
void __fastcall CDOTA_ModifierManager::NetworkStateChanged(
        CDOTA_ModifierManager *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CDOTA_ModifierManager::NetworkStateChangedLog  (line 39, @0x00000000026242f0, libserver.so)
void __fastcall CDOTA_ModifierManager::NetworkStateChangedLog(
        const CDOTA_ModifierManager *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CDOTA_ModifierManager::GetModifier_Constant_Additive  (line 118, @0x0000000002975c90, libserver.so)  // inlines: IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
// callers: DamageImpact
float __fastcall CDOTA_ModifierManager::GetModifier_Constant_Additive(
        CDOTA_ModifierManager *const this,
        modifierfunction Property,
        const CModifierParams *const params)
{
  __int64 v3; // rax

  v3 = this->m_buffsForModifiers[Property];
  if ( v3 == 0xFF || this->m_buffModifiers.m_Memory.m_pMemory[v3].m_Size <= 0 )
    return 0.0;
  else
    return CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(this, Property, params);
}


// CDOTA_ModifierManager::GetModifier_Constant_Highest  (line 133, @0x0000000002883ff0, libserver.so)  // inlines: IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal
// callers: CDOTABehaviorCommandMoveToTargetToAttack::Update
float __fastcall CDOTA_ModifierManager::GetModifier_Constant_Highest(
        CDOTA_ModifierManager *const this,
        modifierfunction Property,
        const CModifierParams *const params)
{
  __int64 v3; // rax

  v3 = this->m_buffsForModifiers[Property];
  if ( v3 == 0xFF || this->m_buffModifiers.m_Memory.m_pMemory[v3].m_Size <= 0 )
    return 0.0;
  else
    return CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(this, Property, params);
}


// CDOTA_ModifierManager::GetModifier_Constant_First  (line 151, @0x0000000002567710, libserver.so)  // inlines: IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_First_Internal
// callers: DOTA_ExecuteOrders, CDOTAHeroList::GiveExperience, CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_Item_Tango::OnSpellStart
float __fastcall CDOTA_ModifierManager::GetModifier_Constant_First(
        CDOTA_ModifierManager *const this,
        modifierfunction Property,
        const CModifierParams *const params)
{
  __int64 v3; // rax

  v3 = this->m_buffsForModifiers[Property];
  if ( v3 == 0xFF || this->m_buffModifiers.m_Memory.m_pMemory[v3].m_Size <= 0 )
    return -1.0;
  else
    return CDOTA_ModifierManager::GetModifier_Constant_First_Internal(this, Property, params);
}


// CDOTA_ModifierManager::GetParent  (line 180, @0x00000000026a83c0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, Set
// callers: CDOTAPlayer::ClientCommand
int *__fastcall CDOTA_ModifierManager::GetParent(int *a1, CDOTA_ModifierManager *const this)
{
  int *result; // rax
  uint32 v3; // edi
  unsigned __int16 v4; // cx
  int v5; // esi
  int v6; // edx
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CEntityInstance *m_pInstance; // rdx
  CEntityIdentity *m_pEntity; // rcx
  int v11; // edx
  __int16 v12; // si

  result = a1;
  v3 = this->m_hModifierParent.m_Value.m_Index >> 15;
  if ( this->m_hModifierParent.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hModifierParent.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (v3 << 15) | v4 & 0x7FFF;
  if ( (v6 + 2) > 1
    && (v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9]) != 0
    && (v8 = &v7[v5 & 0x1FF]) != 0
    && v6 == v8->m_EHandle.m_Index )
  {
    m_pInstance = v8->m_pInstance;
    *result = -1;
    if ( m_pInstance != 0 )
    {
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v12 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        *result = v12 | *result & 0x8000;
        *result = (v11 << 15) | *result & 0x7FFF;
      }
    }
  }
  else
  {
    *result = -1;
  }
  return result;
}


// CDOTA_ActiveModifiersList::~CDOTA_ActiveModifiersList  (line 296, @0x0000000002634300, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<CDOTA_ModifierManager*, int>::Purge
void __fastcall CDOTA_ActiveModifiersList::~CDOTA_ActiveModifiersList(CDOTA_ActiveModifiersList *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_ModifierManager*,CUtlMemory<CDOTA_ModifierManager*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_modifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_412D110;  // vptr: CDOTA_ActiveModifiersList
  this->m_modifiers.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_modifiers.m_Memory;
    CUtlMemory<CDOTA_ModifierManager *,int>::Purge(&this->m_modifiers.m_Memory);
    if ( (this->m_modifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_ModifierManager *,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CDOTA_ActiveModifiersList::~CDOTA_ActiveModifiersList  (line 296, @0x0000000002634360, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CDOTA_ActiveModifiersList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<CDOTA_ModifierManager*, int>::Purge
void __fastcall CDOTA_ActiveModifiersList::~CDOTA_ActiveModifiersList(CDOTA_ActiveModifiersList *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_ModifierManager*,CUtlMemory<CDOTA_ModifierManager*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_modifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_412D110;  // vptr: CDOTA_ActiveModifiersList
  this->m_modifiers.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_modifiers.m_Memory;
    CUtlMemory<CDOTA_ModifierManager *,int>::Purge(&this->m_modifiers.m_Memory);
    if ( (this->m_modifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_ModifierManager *,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_ActiveModifiersList::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 298, @0x0000000002624300, libserver.so)
void __fastcall CDOTA_ActiveModifiersList::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTA_ActiveModifiersList *const this)
{
  ;
}


// CDOTA_ActiveModifiersList::DoesGameSystemReallocate  (line 298, @0x0000000002624310, libserver.so)
// globals: CDOTA_ActiveModifiersList::sm_Factory
bool __fastcall CDOTA_ActiveModifiersList::DoesGameSystemReallocate(const CDOTA_ActiveModifiersList *const this)
{
  return (*(CDOTA_ActiveModifiersList::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_ActiveModifiersList::sm_Factory);
}


// CDOTA_ActiveModifiersList::SetGameSystemGlobalPtrs  (line 298, @0x0000000002624330, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_ActiveModifiersList::sm_Factory
void __fastcall CDOTA_ActiveModifiersList::SetGameSystemGlobalPtrs(CDOTA_ActiveModifiersList *const this, void *pValue)
{
  if ( CDOTA_ActiveModifiersList::sm_Factory != 0 )
    (*(CDOTA_ActiveModifiersList::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CDOTA_ActiveModifiersList::sm_Factory,
      pValue);
}


