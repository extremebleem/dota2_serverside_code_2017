
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_ActiveModifiersList::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 64, @0x00000000025f16b0, libserver.so)
void __cdecl CDOTA_ActiveModifiersList::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDOTA_ActiveModifiersList::GameInit  (line 66, @0x00000000025e50b0, libserver.so)  // inlines: RemoveAll, V_memset, memset
// calls: memset
void __fastcall CDOTA_ActiveModifiersList::GameInit(
        CDOTA_ActiveModifiersList *const this,
        const EventGameInit_t *const msg)
{
  int *m_iActiveEventsHandlers; // rdi

  m_iActiveEventsHandlers = this->m_iActiveEventsHandlers;
  *(m_iActiveEventsHandlers - 6) = 0;
  memset(m_iActiveEventsHandlers, 0, 0x2B4u);
}


// CDOTA_ActiveModifiersList::GetActiveModifierByIndex  (line 72, @0x00000000025f16c0, libserver.so)  // inlines: operator[]
// callers: CDOTAPlayer::ClientCommand
CDOTA_ModifierManager *__fastcall CDOTA_ActiveModifiersList::GetActiveModifierByIndex(
        CDOTA_ActiveModifiersList *const this,
        int iIndex)
{
  return this->m_modifiers.m_Memory.m_pMemory[iIndex];
}


// SortBuffsByPriority  (line 77, @0x00000000025df0a0, libserver.so)
// callers: FireModifierEvent
int __fastcall SortBuffsByPriority(CDOTA_Buff *const *p1, CDOTA_Buff *const *p2)
{
  CDOTA_Buff *v2; // rbx
  int v3; // r12d

  v2 = *p2;
  v3 = (*(**p1 + 48LL))(*p1);
  return 2 * (v3 <= (*(v2->_vptr_CDOTA_Buff + 6))(v2)) - 1;
}


// FireModifierEvent  (line 88, @0x000000000261d780, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<CDOTA_Buff*>, Element, GetActiveModifierByIndex, GrowMemory, IsEventActiveOnServer, IsListeningToEvent, Purge, Purge_FixedGrowable, RemoveAll, Sort, V_swap<CDOTA_Buff*>, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CDOTA_ModifierManager::GetBuffByIndex, CUtlMemory<CDOTA_Buff*, int>::Grow, V_qsort, CDOTA_Buff::ModifierEvent, SortBuffsByPriority, CUtlMemory<CDOTA_Buff*, int>::Purge, __stack_chk_fail, CUtlVectorBase<CDOTA_Buff*, CUtlMemoryFixedGrowable<CDOTA_Buff*, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTABaseAbility::EndChannel, CDOTABaseAbility::ToggleAbility, CDOTABaseAbility::CastAbility, DOTA_ExecuteOrders, CDOTA_Modifier_Teleporting::OnCreated, CDOTA_ProjectileManager::ProjectileDodge, CDOTA_ProjectileManager::FrameUpdatePostEntityThink, CDOTALocomotor::UpdateMotionControlledMovement, CDOTALocomotor::UpdateStandardMovement, CDOTABehaviorAttack::OnEnd, CDOTABehaviorAttackPhase::OnEnd, CDOTABehaviorAttackPhase::OnStart (36 total)
// globals: g_pDOTAActiveModifiers, SortBuffsByPriority(CDOTA_Buff * const*,CDOTA_Buff * const*)
void __fastcall FireModifierEvent(modifierfunction Event, const CModifierParams *const params)
{
  CDOTA_ActiveModifiersList *v3; // rax
  int m_Size; // ecx
  int v5; // ecx
  CDOTA_ModifierManager *v6; // r15
  __int64 v7; // rax
  __int64 v8; // r12
  int v9; // ebx
  int v10; // edx
  CDOTA_Buff **v11; // rax
  CDOTA_Buff *BuffByIndex; // r13
  int v13; // eax
  __int64 v14; // rbx
  int v15; // r15d
  __int64 v16; // rbx
  int v17; // r12d
  __int64 v18; // r13
  _QWORD *v19; // rax
  __int64 *v20; // rbx
  __int64 v21; // rdx
  uint32 v22; // eax
  unsigned __int64 v23; // [rsp+8h] [rbp-F8h]
  __int64 Eventa; // [rsp+18h] [rbp-E8h]
  __int64 v25; // [rsp+20h] [rbp-E0h]
  CUtlVectorFixedGrowable<CDOTA_Buff*,16ul> buffList; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v28; // [rsp+C8h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  v3 = g_pDOTAActiveModifiers;
  Eventa = Event;
  if ( g_pDOTAActiveModifiers->m_iActiveEventsHandlers[Event] > 0 )
  {
    buffList.m_Size = 0;
    m_Size = g_pDOTAActiveModifiers->m_modifiers.m_Size;
    buffList.m_Memory.m_nAllocationCount = 16;
    buffList.m_Memory.m_nGrowSize = 0x80000000;
    buffList.m_Memory.m_pMemory = &buffList.m_Memory.m_FixedMemory;
    v5 = m_Size - 1;
    if ( v5 < 0 )
    {
      v22 = 0x80000000;
    }
    else
    {
      v25 = 8LL * v5;
      v23 = 8 * (v5 - v5);
      while ( 1 )
      {
        v6 = v3->m_modifiers.m_Memory.m_pMemory[v25 / 8];
        v7 = v6->m_buffsForModifiers[Eventa];
        if ( v7 != 0xFF && v6->m_buffModifiers.m_Memory.m_pMemory[v7].m_Size > 0 )
        {
          LODWORD(v8) = 0;
          if ( v6->m_bufflist.m_Size > 0 )
          {
            v8 = 0;
            v9 = 0;
            do
            {
              BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(v6, v9, 0);
              if ( BuffByIndex != 0 )
              {
                v13 = v8;
                if ( buffList.m_Memory.m_nAllocationCount == v8 )
                {
                  CUtlMemory<CDOTA_Buff *,int>::Grow(&buffList.m_Memory, 1);
                  v13 = buffList.m_Size;
                }
                v10 = v13 + 1;
                buffList.m_Size = v13 + 1;
                v11 = &buffList.m_Memory.m_pMemory[v8];
                if ( v11 != 0 )
                {
                  *v11 = BuffByIndex;
                  v8 = buffList.m_Size;
                }
                else
                {
                  v8 = v10;
                }
              }
              ++v9;
            }
            while ( v9 < v6->m_bufflist.m_Size );
          }
          if ( v8 > 1 )
          {
            if ( buffList.m_Memory.m_pMemory != 0 )
            {
              V_qsort(buffList.m_Memory.m_pMemory, v8, 8, SortBuffsByPriority);
            }
            else
            {
              v15 = v8 - 1;
              do
              {
                if ( v15 > 0 )
                {
                  v16 = 0;
                  v17 = 1;
                  while ( 1 )
                  {
                    v18 = v16 + 8;
                    if ( SortBuffsByPriority(
                           (buffList.m_Memory.m_pMemory + v16),
                           (buffList.m_Memory.m_pMemory + v16 + 8)) >= 0 )
                    {
                      if ( ++v17 > v15 )
                        break;
                    }
                    else
                    {
                      ++v17;
                      v19 = (buffList.m_Memory.m_pMemory + v18);
                      v20 = (buffList.m_Memory.m_pMemory + v16);
                      v21 = *v20;
                      *v20 = *(buffList.m_Memory.m_pMemory + v18);
                      *v19 = v21;
                      if ( v17 > v15 )
                        break;
                    }
                    v16 = v18;
                  }
                }
                --v15;
              }
              while ( v15 != -1 );
            }
            LODWORD(v8) = buffList.m_Size;
          }
          v14 = 0;
          if ( v8 > 0 )
          {
            do
              CDOTA_Buff::ModifierEvent(buffList.m_Memory.m_pMemory[v14++], Event, params);
            while ( buffList.m_Size > v14 );
          }
        }
        buffList.m_Size = 0;
        if ( v25 == v23 )
          break;
        v3 = g_pDOTAActiveModifiers;
        v25 -= 8;
      }
      v22 = buffList.m_Memory.m_nGrowSize & 0xC0000000;
      if ( buffList.m_Memory.m_nAllocationCount < 0 )
        goto LABEL_33;
    }
    if ( buffList.m_Memory.m_pMemory == &buffList.m_Memory.m_FixedMemory )
    {
LABEL_33:
      if ( v22 == 0 )
        CUtlMemory<CDOTA_Buff *,int>::Purge(&buffList.m_Memory);
      return;
    }
    if ( buffList.m_Memory.m_pMemory != 0 && v22 == 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// FireSingleModifierEvent  (line 135, @0x00000000025f1ea0, libserver.so)  // inlines: GetActiveModifierByIndex, IsEventActiveOnServer, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::ModifierEvent
// globals: g_pDOTAActiveModifiers
void __fastcall FireSingleModifierEvent(modifierfunction Event, const CModifierParams *const params)
{
  CDOTA_ActiveModifiersList *v3; // rax
  int v4; // edx
  __int64 v6; // r15
  CDOTA_ModifierManager *v7; // r12
  __int64 v8; // rax
  int v9; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  unsigned __int64 v11; // [rsp+0h] [rbp-40h]
  __int64 Eventa; // [rsp+8h] [rbp-38h]

  Eventa = Event;
  v3 = g_pDOTAActiveModifiers;
  if ( g_pDOTAActiveModifiers->m_iActiveEventsHandlers[Event] > 0 )
  {
    v4 = g_pDOTAActiveModifiers->m_modifiers.m_Size - 1;
    if ( v4 >= 0 )
    {
      v6 = 8LL * v4;
      v11 = 8 * (v4 - v4);
      while ( 1 )
      {
        v7 = v3->m_modifiers.m_Memory.m_pMemory[v6 / 8];
        v8 = v7->m_buffsForModifiers[Eventa];
        if ( v8 != 0xFF && v7->m_buffModifiers.m_Memory.m_pMemory[v8].m_Size > 0 && v7->m_bufflist.m_Size > 0 )
          break;
LABEL_12:
        if ( v6 == v11 )
          return;
        v3 = g_pDOTAActiveModifiers;
        v6 -= 8;
      }
      v9 = 0;
      while ( 1 )
      {
        BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(v7, v9, 0);
        if ( BuffByIndex != 0 && CDOTA_Buff::ModifierEvent(BuffByIndex, Event, params) )
          break;
        if ( ++v9 >= v7->m_bufflist.m_Size )
          goto LABEL_12;
      }
    }
  }
}


// CDOTA_ModifierManager::CDOTA_ModifierManager  (line 166, @0x00000000025f16e0, libserver.so)  // inlines: CEntityHandle, CNetworkHandleBase, CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, InvalidateOnBuffListChange, V_memset, memset
// callers: CDOTA_BaseNPC::CDOTA_BaseNPC, CSchemaClassBinding<CDOTA_ModifierManager>::Allocate, CSchemaClassBinding<CDOTA_ModifierManager>::ConstructInPlace, CSchemaClassBinding<CDOTA_ModifierManager>::AllocateAndCopyConstruct
void __fastcall CDOTA_ModifierManager::CDOTA_ModifierManager(CDOTA_ModifierManager *const this)
{
  unsigned __int8 *m_buffsForModifiers; // rdi

  this->_vptr_CDOTA_ModifierManager = off_41161D0;  // vptr: CDOTA_ModifierManager
  this->m_hModifierParent.m_Value.m_Index = -1;
  this->m_bufflist.m_Size = 0;
  this->m_bufflist.m_Memory.m_pMemory = 0;
  this->m_bufflist.m_Memory.m_nAllocationCount = 0;
  this->m_bufflist.m_Memory.m_nGrowSize = 0;
  this->m_buffModifiers.m_Size = 0;
  this->m_buffModifiers.m_Memory.m_pMemory = 0;
  this->m_buffModifiers.m_Memory.m_nAllocationCount = 0;
  this->m_buffModifiers.m_Memory.m_nGrowSize = 0;
  m_buffsForModifiers = this->m_buffsForModifiers;
  memset(m_buffsForModifiers, 0xFFu, 0xA8u);
  m_buffsForModifiers += 168;
  *m_buffsForModifiers = -1;
  m_buffsForModifiers[4] = -1;
  this->m_nHasTruesightForTeam = 0;
  this->m_nHasTruesightForTeamValid = 0;
  this->m_iBuffIndex = 0;
  this->m_iLockRefCount = 0;
}


// CDOTA_ModifierManager::~CDOTA_ModifierManager  (line 184, @0x00000000025fd250, libserver.so)  // inlines: Destruct<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> >, Element, Purge, PurgeAndDeleteElements, RemoveAll, RemoveModifierFromList, operator[], ~CCopyableUtlVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CDOTA_Buff*, int>::Purge, CUtlVectorBase<CDOTA_ModifierManager*, CUtlMemory<CDOTA_ModifierManager*, int> >::FindAndRemove, CUtlMemory<CDOTA_ModifierManager::BuffModifier_t, int>::Purge, CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>, int>::Purge
// callers: CDOTA_BaseNPC::CDOTA_BaseNPC, CDOTA_BaseNPC::~CDOTA_BaseNPC, CSchemaClassBinding<CDOTA_ModifierManager>::Deallocate, CSchemaClassBinding<CDOTA_ModifierManager>::DestructInPlace
// globals: g_pDOTAActiveModifiers
void __fastcall CDOTA_ModifierManager::~CDOTA_ModifierManager(CDOTA_ModifierManager *const this)
{
  __int64 v1; // r13
  int v2; // r12d
  CDOTA_Buff *v4; // rdi
  bool v5; // zf
  int m_Size; // r13d
  __int64 i; // r14
  char *v8; // r12
  CUtlVectorBase<CDOTA_Buff*,CUtlMemory<CDOTA_Buff*,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-48h]
  CDOTA_ModifierManager *src; // [rsp+18h] [rbp-38h] BYREF

  v1 = 0;
  v2 = 0;
  for ( this->_vptr_CDOTA_ModifierManager = off_41161D0; v2 < this->m_bufflist.m_Size; ++v1 )
  {
    v4 = this->m_bufflist.m_Memory.m_pMemory[v1];
    if ( v4 != 0 )
      (*(v4->_vptr_CDOTA_Buff + 2))(v4);
    ++v2;
  }
  v5 = (this->m_bufflist.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_bufflist.m_Size = 0;
  p_m_Memory = &this->m_bufflist.m_Memory;
  if ( v5 )
    CUtlMemory<CDOTA_Buff *,int>::Purge(p_m_Memory);
  src = this;
  CUtlVectorBase<CDOTA_ModifierManager *,CUtlMemory<CDOTA_ModifierManager *,int>>::FindAndRemove(
    &g_pDOTAActiveModifiers->m_modifiers,
    &src);
  m_Size = this->m_buffModifiers.m_Size;
  for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v8 = this->m_buffModifiers.m_Memory.m_pMemory + i;
    v5 = (*(v8 + 5) & 0xC0000000) == 0;
    *v8 = 0;
    if ( v5 )
    {
      CUtlMemory<CDOTA_ModifierManager::BuffModifier_t,int>::Purge((v8 + 8));
      if ( (*(v8 + 5) & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_ModifierManager::BuffModifier_t,int>::Purge((v8 + 8));
    }
  }
  v5 = (this->m_buffModifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_buffModifiers.m_Size = 0;
  if ( !v5
    || (CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>,int>::Purge(&this->m_buffModifiers.m_Memory),
        (this->m_buffModifiers.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v5 = (this->m_bufflist.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_bufflist.m_Size = 0;
    if ( !v5 )
      return;
  }
  else
  {
    CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>,int>::Purge(&this->m_buffModifiers.m_Memory);
    v5 = (this->m_bufflist.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_bufflist.m_Size = 0;
    if ( !v5 )
      return;
  }
  CUtlMemory<CDOTA_Buff *,int>::Purge(p_m_Memory);
  if ( (this->m_bufflist.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CDOTA_Buff *,int>::Purge(p_m_Memory);
}


// CDOTA_ModifierManager::AddNewModifier  (line 209, @0x00000000026227c0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CDOTA_Buff*>, DOTAGameRules, Element, FindModifierByName, Get, GetBool, GetEHandle, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetParent, GetSerialNumber, GrowMemory, InState, IndexToIdentity, Init, InvalidateOnBuffListChange, IsInvulnerable, LookupEntity, Set, SetCaster, SetIndex, SetProvidedByAura, ToDOTAAbility, ToDOTABaseNPC, operator CBaseEntity*, operator=, operator[]
// calls: CEntityHandle::operator CEntityInstance*, KeyValues::GetString, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, KeyValues::SetInt, KeyValues::SetFloat, CDOTA_Buff::DoRefresh, CDOTA_BaseNPC::RefreshedModifier, CDOTA_Buff::Prepare, KeyValues::GetInt, KeyValues::FindKey (21 total)
// callers: CDOTABaseAbility::RefreshIntrinsicModifier, CDOTA_Item::CreateModifier, CDOTA_BaseNPC::Script_AddNewModifier, CDOTA_BaseNPC::AddNewModifier
// strings: "stack_count", "existing_duration", "isProvidedByAura", "creationtime"
CDOTA_Buff *__fastcall CDOTA_ModifierManager::AddNewModifier(
        CDOTA_ModifierManager *const this,
        CBaseEntity *pCaster,
        CDOTABaseAbility *pAbility,
        const char *pszScriptName,
        KeyValues *pKV,
        int iForcedIndex,
        const CDOTAModifierBuffTableEntry *pEntry)
{
  unsigned __int16 v11; // dx
  int v12; // esi
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // rax
  CEntityInstance *v17; // r14
  CModifieractoryDictionary *v18; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax
  __int64 v21; // r12
  int v22; // eax
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rdx
  CModifieractoryDictionary *v26; // rax
  unsigned __int16 v27; // dx
  int v28; // esi
  uint32 v29; // eax
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  CBaseEntity *v32; // rax
  bool v33; // dl
  __int64 m_Size; // rax
  int v35; // edx
  CDOTA_Buff **v36; // rax
  float v37; // xmm1_4
  CEntityIdentity *v38; // rdx
  int v39; // eax
  __int16 v40; // cx
  CDOTA_BaseNPC *v41; // rcx
  int v42; // eax
  void *v43; // rbx
  __int64 v44; // r13
  int v45; // r14d
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rdi
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v51; // cx
  CEntityInstance *v52; // rax
  CEntityIdentity *v53; // rdx
  int v54; // eax
  __int16 v55; // cx
  float pAbilityb; // [rsp+20h] [rbp-50h]
  const char *pszClassName; // [rsp+28h] [rbp-48h]
  float pszClassNameb; // [rsp+28h] [rbp-48h]
  int pszClassNamea; // [rsp+28h] [rbp-48h]
  CEntityHandle v62; // [rsp+30h] [rbp-40h] BYREF

  if ( this->m_hModifierParent.m_Value.m_Index == -1 )
  {
    v11 = 0x7FFF;
    v12 = 0x7FFF;
  }
  else
  {
    v11 = this->m_hModifierParent.m_Value.m_Index & 0x7FFF;
    v12 = v11;
  }
  v13 = (this->m_hModifierParent.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
  v62.m_Index = v13;
  if ( v13 + 2 > 1
    && (v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9]) != 0
    && (v15 = &v14[v12 & 0x1FF]) != 0
    && v13 == v15->m_EHandle.m_Index )
  {
    m_pInstance = v15->m_pInstance;
    v62.m_Index = -1;
    if ( m_pInstance != 0 )
    {
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v51 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v51 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v62.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v51 & 0x7FFF;
      }
    }
  }
  else
  {
    v62.m_Index = -1;
  }
  v16 = CEntityHandle::operator CEntityInstance *(&v62);
  if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
    v17 = v16;
  else
    v17 = 0;
  pszClassName = KeyValues::GetString(pKV, "BaseClass", pszScriptName, 0, 0);
  v18 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v18, pszScriptName);
  ModifierByName = CDOTA_ModifierManager::FindModifierByName(this, Factory, pszScriptName, 0);
  v21 = ModifierByName;
  if ( ModifierByName != 0 && ((*(ModifierByName->_vptr_CDOTA_Buff + 7))(ModifierByName) & 2) == 0 )
  {
    v22 = (*(*v21 + 216LL))(v21);
    KeyValues::SetInt(pKV, "stack_count", v22);
    (*(*v21 + 248LL))(v21);
    KeyValues::SetFloat(pKV, "existing_duration", v23);
    if ( pCaster == 0 || (v24 = pCaster, !pCaster->m_bIsDOTANPC) )
      v24 = 0;
    CDOTA_Buff::DoRefresh(v21, pKV, v24, pAbility);
    if ( v17 != 0 )
      CDOTA_BaseNPC::RefreshedModifier(v17);
    return v21;
  }
  v26 = ModifierFactoryDictionary();
  v21 = (*(v26->_vptr_CModifieractoryDictionary + 1))(v26, pszClassName);
  if ( v21 == 0 )
    return v21;
  if ( this->m_hModifierParent.m_Value.m_Index == -1 )
  {
    v27 = 0x7FFF;
    v28 = 0x7FFF;
  }
  else
  {
    v27 = this->m_hModifierParent.m_Value.m_Index & 0x7FFF;
    v28 = v27;
  }
  v29 = (this->m_hModifierParent.m_Value.m_Index >> 15 << 15) | v27 & 0x7FFF;
  v62.m_Index = v29;
  if ( v29 + 2 > 1
    && (v30 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v28 >> 9]) != 0
    && (v31 = &v30[v28 & 0x1FF]) != 0
    && v29 == v31->m_EHandle.m_Index )
  {
    v52 = v31->m_pInstance;
    v62.m_Index = -1;
    if ( v52 != 0 )
    {
      v53 = v52->m_pEntity;
      if ( v53 != 0 )
      {
        v54 = (v53->m_EHandle.m_Index >> 15) - (v53->m_flags & 1);
        v55 = 0x7FFF;
        if ( v53->m_EHandle.m_Index != -1 )
          v55 = v53->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v62.m_Index) = v55 | v62.m_Index & 0x8000;
        v62.m_Index = (v54 << 15) | v62.m_Index & 0x7FFF;
      }
    }
  }
  else
  {
    v62.m_Index = -1;
  }
  v32 = CEntityHandle::operator CEntityInstance *(&v62);
  CDOTA_Buff::Prepare(v21, pszClassName, v32, pKV);
  if ( (*(v17->_vptr_IHandleEntity + 408))(v17) == 0 && (*(*v21 + 184LL))(v21) == 0
    || (v33 = KeyValues::GetInt(pKV, "isProvidedByAura", 0) != 0,
        *(v21 + 138) = (16 * v33) | *(v21 + 138) & 0xEF,
        pCaster != 0)
    && pCaster->m_bIsDOTANPC
    && pCaster->m_iTeamNum.m_Value != HIBYTE(v17[7].m_CScriptComponent)
    && (v33
     || (CDOTA_BaseNPC::TriggerModifierDodge(v17), pCaster->m_iTeamNum.m_Value != HIBYTE(v17[7].m_CScriptComponent)))
    && ((LOBYTE(v17[71]._vptr_IHandleEntity) != 0 || (BYTE1(v17[58]._vptr_IHandleEntity) & 1) != 0)
     && ((*(*v21 + 56LL))(v21) & 4) == 0
     || *(&g_pGameRules[13].m_nQuestPhase + 4) == 0
     && pCaster->m_iTeamNum.m_Value != 4
     && HIBYTE(v17[7].m_CScriptComponent) != 4) )
  {
    v47 = *v21;
    v48 = v21;
    v21 = 0;
    (*(v47 + 16))(v48);
    return v21;
  }
  m_Size = this->m_bufflist.m_Size;
  ++this->m_iBuffIndex;
  v35 = m_Size;
  if ( m_Size == this->m_bufflist.m_Memory.m_nAllocationCount )
  {
    pszClassNamea = m_Size;
    CUtlMemory<CDOTA_Buff *,int>::Grow(&this->m_bufflist.m_Memory, 1);
    v35 = this->m_bufflist.m_Size;
    m_Size = pszClassNamea;
  }
  this->m_bufflist.m_Size = v35 + 1;
  v36 = &this->m_bufflist.m_Memory.m_pMemory[m_Size];
  if ( v36 != 0 )
    *v36 = v21;
  this->m_nHasTruesightForTeamValid = 0;
  if ( KeyValues::FindKey(pKV, "creationtime", 0) == 0 )
    KeyValues::SetFloat(pKV, "creationtime", v37);
  if ( iForcedIndex == -1 )
    *(v21 + 72) = this->m_iBuffIndex;
  else
    *(v21 + 72) = iForcedIndex;
  if ( pCaster != 0 )
  {
    v38 = pCaster->m_pEntity;
    if ( v38 != 0 )
    {
      v39 = (v38->m_EHandle.m_Index >> 15) - (v38->m_flags & 1);
      v40 = 0x7FFF;
      if ( v38->m_EHandle.m_Index != -1 )
        v40 = v38->m_EHandle.m_Index & 0x7FFF;
      *(v21 + 96) = v40 | *(v21 + 96) & 0x8000;
      *(v21 + 96) = (v39 << 15) | *(v21 + 96) & 0x7FFF;
    }
    else
    {
      *(v21 + 96) = -1;
    }
    CDOTA_Buff::SetAbility(v21, pAbility);
    (*(*v21 + 680LL))(v21, pKV);
    CDOTA_ModifierManager::AddEventsFromBuff(this, v21);
    (*(*v21 + 456LL))(v21, pKV);
    CDOTA_Buff::CheckAura(v21);
    (*(v17->_vptr_IHandleEntity + 449))(v17, v21);
    if ( pCaster->m_bIsDOTANPC )
    {
      v41 = pCaster;
      goto LABEL_44;
    }
  }
  else
  {
    *(v21 + 96) = -1;
    CDOTA_Buff::SetAbility(v21, pAbility);
    (*(*v21 + 680LL))(v21, pKV);
    CDOTA_ModifierManager::AddEventsFromBuff(this, v21);
    (*(*v21 + 456LL))(v21, pKV);
    CDOTA_Buff::CheckAura(v21);
    (*(v17->_vptr_IHandleEntity + 449))(v17, v21);
  }
  v41 = 0;
LABEL_44:
  CDOTA_CombatLog::AddModifierEvent(g_pDOTACombatLog, 2, v17, v41, v21, 0, 0, 0);
  v42 = (*(*v21 + 688LL))(v21);
  CDOTA_Buff::SendBuffCreationToClients(v21, v42, 0);
  if ( (v17[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
    && LOBYTE(v17[71].m_pEntity) == 0
    && pCaster != 0
    && pCaster->m_bIsDOTANPC )
  {
    v43 = pAbility != 0 ? __dynamic_cast(pAbility, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0) : 0LL;
    if ( pCaster != v17
      && (pCaster[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
      && v43 != 0
      && (*(*v43 + 1784LL))(v43) == 0
      && ((*(*v43 + 2192LL))(v43, 0xFFFFFFFFLL) > 0 && (*(v21 + 138) & 0x10) == 0 || (*(*v43 + 1896LL))(v43) > 0.0) )
    {
      v44 = (*(pCaster->_vptr_IHandleEntity + 413))(pCaster);
      if ( v44 != 0 )
      {
        pszClassNameb = (*(*v43 + 1896LL))(v43);
        v45 = (*(*v43 + 2192LL))(v43, 0xFFFFFFFFLL);
        pAbilityb = (*(*v43 + 1888LL))(v43);
        v46 = (*(*v44 + 3144LL))(v44);
        CDOTA_PlayerResource::AddSupportAbilityValue(g_pDOTAPlayerResource, v46, ((v45 * pAbilityb) + pszClassNameb));
      }
    }
  }
  return v21;
}


// CDOTA_ModifierManager::AddEventsFromBuff  (line 377, @0x000000000261e260, libserver.so)
// calls: CDOTA_ModifierManager::AddEventFromBuff
// callers: CDOTA_ModifierManager::AddNewModifier
void __fastcall CDOTA_ModifierManager::AddEventsFromBuff(CDOTA_ModifierManager *const this, CDOTA_Buff *pBuff)
{
  CDOTA_Buff::lambda *m_Functions; // r12
  modifierfunction i; // ebx

  m_Functions = pBuff->m_Functions;
  for ( i = modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE; i != modifierfunction::MODIFIER_FUNCTION_LAST; ++i )
  {
    if ( m_Functions->__pfn != 0 )
      CDOTA_ModifierManager::AddEventFromBuff(this, i, pBuff);
    ++m_Functions;
  }
}


// CDOTA_ModifierManager::RemoveEventFromBuff  (line 389, @0x0000000002613a70, libserver.so)  // inlines: AddToTail, BuffListForModifier, CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> >, Element, FastRemove, GrowMemory, HasFunction, IsListeningToEvent, SetEventState, memcpy, operator[]
// calls: CDOTA_ModifierManager::GetBuffIndex, CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>, int>::Grow
// callers: CDOTA_ModifierManager::RemoveEvents, CDOTA_Buff::Destroy, CDOTA_Modifier_Item_PowerTreads::SwitchStat
// globals: g_pDOTAActiveModifiers
void __fastcall CDOTA_ModifierManager::RemoveEventFromBuff(
        CDOTA_ModifierManager *const this,
        modifierfunction modifier,
        CDOTA_Buff *pBuff)
{
  __int64 v3; // r12
  __int64 v5; // rax
  int BuffIndex; // eax
  __int64 v8; // rdx
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *m_pMemory; // rcx
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v10; // rdx
  int v11; // ecx
  CDOTA_ModifierManager::BuffModifier_t *v12; // rsi
  CDOTA_ModifierManager::BuffModifier_t *v13; // rcx
  CDOTA_ModifierManager::BuffModifier_t *v14; // rax
  int m_Size; // r14d
  int v16; // edx
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v17; // rdx
  int nIndex; // [rsp+Ch] [rbp-24h]

  v3 = modifier;
  v5 = this->m_buffsForModifiers[modifier];
  if ( v5 != 0xFF && this->m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0 )
  {
    BuffIndex = CDOTA_ModifierManager::GetBuffIndex(this, modifier, pBuff);
    if ( BuffIndex >= 0 )
    {
      v8 = this->m_buffsForModifiers[v3];
      if ( v8 == 0xFF )
      {
        m_Size = this->m_buffModifiers.m_Size;
        v16 = m_Size;
        if ( m_Size == this->m_buffModifiers.m_Memory.m_nAllocationCount )
        {
          nIndex = BuffIndex;
          CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>,int>::Grow(
            &this->m_buffModifiers.m_Memory,
            1);
          v16 = this->m_buffModifiers.m_Size;
          BuffIndex = nIndex;
        }
        m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
        this->m_buffModifiers.m_Size = v16 + 1;
        v17 = &m_pMemory[m_Size];
        if ( v17 != 0 )
        {
          v17->m_Size = 0;
          v17->m_Memory.m_pMemory = 0;
          v17->m_Memory.m_nAllocationCount = 0;
          v17->m_Memory.m_nGrowSize = 0;
          m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
        }
        v8 = m_Size;
        this->m_buffsForModifiers[v3] = m_Size;
      }
      else
      {
        m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
      }
      v10 = &m_pMemory[v8];
      if ( v10->m_Size > 0 )
      {
        v11 = v10->m_Size - 1;
        if ( BuffIndex != v11 )
        {
          v12 = v10->m_Memory.m_pMemory;
          v13 = &v12[v11];
          v14 = &v12[BuffIndex];
          v14->m_pBuff = v13->m_pBuff;
          v14->m_pFn.__pfn = v13->m_pFn.__pfn;
          v14->m_pFn.__delta = v13->m_pFn.__delta;
          v11 = v10->m_Size - 1;
        }
        v10->m_Size = v11;
      }
      if ( pBuff != 0 && pBuff->m_Functions[v3].__pfn != 0 )
        --g_pDOTAActiveModifiers->m_iActiveEventsHandlers[v3];
    }
  }
}


// CDOTA_ModifierManager::AddEventFromBuff  (line 410, @0x000000000261e130, libserver.so)  // inlines: AddToTail, BuffListForModifier, CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> >, CopyConstruct<CDOTA_ModifierManager::BuffModifier_t>, Element, GrowMemory, SetEventState, operator[]
// calls: CUtlMemory<CDOTA_ModifierManager::BuffModifier_t, int>::Grow, CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>, int>::Grow
// callers: CDOTA_ModifierManager::AddEventsFromBuff, CDOTA_Modifier_Item_PowerTreads::SwitchStat
// globals: g_pDOTAActiveModifiers
void __fastcall CDOTA_ModifierManager::AddEventFromBuff(
        CDOTA_ModifierManager *const this,
        modifierfunction modifier,
        CDOTA_Buff *pBuff)
{
  __int64 v3; // r12
  CDOTA_Buff::lambda *v5; // rax
  ModifierVariant_t (*pfn)(CDOTA_Buff *, const CModifierParams *); // r14
  __int64 delta; // r15
  __int64 v8; // rax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *m_pMemory; // rcx
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v10; // rbx
  __int64 v11; // r13
  int v12; // eax
  CDOTA_Buff **p_m_pBuff; // rax
  int m_Size; // r13d
  int v15; // eax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v16; // rax
  CDOTA_Buff *pBuffa; // [rsp+8h] [rbp-38h]
  CDOTA_Buff *pBuffb; // [rsp+8h] [rbp-38h]

  v3 = modifier;
  v5 = &pBuff->m_Functions[modifier];
  pfn = v5->__pfn;
  delta = v5->__delta;
  v8 = this->m_buffsForModifiers[modifier];
  if ( v8 == 0xFF )
  {
    m_Size = this->m_buffModifiers.m_Size;
    v15 = m_Size;
    if ( m_Size == this->m_buffModifiers.m_Memory.m_nAllocationCount )
    {
      pBuffb = pBuff;
      CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>,int>::Grow(
        &this->m_buffModifiers.m_Memory,
        1);
      v15 = this->m_buffModifiers.m_Size;
      pBuff = pBuffb;
    }
    m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
    this->m_buffModifiers.m_Size = v15 + 1;
    v16 = &m_pMemory[m_Size];
    if ( v16 != 0 )
    {
      v16->m_Size = 0;
      v16->m_Memory.m_pMemory = 0;
      v16->m_Memory.m_nAllocationCount = 0;
      v16->m_Memory.m_nGrowSize = 0;
      m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
    }
    v8 = m_Size;
    this->m_buffsForModifiers[v3] = m_Size;
  }
  else
  {
    m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
  }
  v10 = &m_pMemory[v8];
  v11 = v10->m_Size;
  v12 = v10->m_Size;
  if ( v11 == v10->m_Memory.m_nAllocationCount )
  {
    pBuffa = pBuff;
    CUtlMemory<CDOTA_ModifierManager::BuffModifier_t,int>::Grow(&v10->m_Memory, 1);
    v12 = v10->m_Size;
    pBuff = pBuffa;
  }
  v10->m_Size = v12 + 1;
  p_m_pBuff = &v10->m_Memory.m_pMemory[v11].m_pBuff;
  if ( p_m_pBuff != 0 )
  {
    *p_m_pBuff = pBuff;
    p_m_pBuff[1] = pfn;
    p_m_pBuff[2] = delta;
  }
  ++g_pDOTAActiveModifiers->m_iActiveEventsHandlers[v3];
}


// CDOTA_ModifierManager::GetBuffIndex  (line 428, @0x0000000002613990, libserver.so)  // inlines: AddToTail, BuffListForModifier, CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> >, Element, GrowMemory, operator[]
// calls: CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>, int>::Grow
// callers: CDOTA_ModifierManager::RemoveEventFromBuff
int __fastcall CDOTA_ModifierManager::GetBuffIndex(
        CDOTA_ModifierManager *const this,
        modifierfunction Property,
        const CDOTA_Buff *pBuff)
{
  __int64 v3; // r12
  __int64 v5; // rax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *m_pMemory; // rcx
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v7; // rcx
  int result; // eax
  int v9; // esi
  const CDOTA_Buff **p_m_pBuff; // rcx
  int m_Size; // r13d
  int v12; // eax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v13; // rax
  const CDOTA_Buff *pBuffa; // [rsp+8h] [rbp-28h]

  v3 = Property;
  v5 = this->m_buffsForModifiers[Property];
  if ( v5 == 0xFF )
  {
    m_Size = this->m_buffModifiers.m_Size;
    v12 = m_Size;
    if ( m_Size == this->m_buffModifiers.m_Memory.m_nAllocationCount )
    {
      pBuffa = pBuff;
      CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>,int>::Grow(
        &this->m_buffModifiers.m_Memory,
        1);
      v12 = this->m_buffModifiers.m_Size;
      pBuff = pBuffa;
    }
    m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
    this->m_buffModifiers.m_Size = v12 + 1;
    v13 = &m_pMemory[m_Size];
    if ( v13 != 0 )
    {
      v13->m_Size = 0;
      v13->m_Memory.m_pMemory = 0;
      v13->m_Memory.m_nAllocationCount = 0;
      v13->m_Memory.m_nGrowSize = 0;
      m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
    }
    v5 = m_Size;
    this->m_buffsForModifiers[v3] = m_Size;
  }
  else
  {
    m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
  }
  v7 = &m_pMemory[v5];
  result = -1;
  v9 = v7->m_Size;
  if ( v7->m_Size > 0 )
  {
    p_m_pBuff = &v7->m_Memory.m_pMemory->m_pBuff;
    result = 0;
    if ( *p_m_pBuff != pBuff )
    {
      while ( ++result != v9 )
      {
        p_m_pBuff += 3;
        if ( *p_m_pBuff == pBuff )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CDOTA_ModifierManager::RemoveEvents  (line 442, @0x0000000002613bc0, libserver.so)
// calls: CDOTA_ModifierManager::RemoveEventFromBuff
void __fastcall CDOTA_ModifierManager::RemoveEvents(CDOTA_ModifierManager *const this, CDOTA_Buff *pRemovedBuff)
{
  modifierfunction i; // ebx

  for ( i = modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE; i != modifierfunction::MODIFIER_FUNCTION_LAST; ++i )
    CDOTA_ModifierManager::RemoveEventFromBuff(this, i, pRemovedBuff);
}


// CDOTA_ModifierManager::RemoveModifier  (line 453, @0x0000000002601240, libserver.so)  // inlines: InvalidateOnBuffListChange, RemoveModifierFromList
// calls: CUtlVectorBase<CDOTA_Buff*, CUtlMemory<CDOTA_Buff*, int> >::FindAndRemove, CUtlVectorBase<CDOTA_ModifierManager*, CUtlMemory<CDOTA_ModifierManager*, int> >::FindAndRemove
// callers: CDOTA_Buff::FinalDestroy
// globals: g_pDOTAActiveModifiers
void __fastcall CDOTA_ModifierManager::RemoveModifier(CDOTA_ModifierManager *const this, CDOTA_Buff *pModifier)
{
  int m_Size; // ecx
  CDOTA_Buff *pModifiera; // [rsp+8h] [rbp-28h] BYREF
  CDOTA_ModifierManager *src; // [rsp+18h] [rbp-18h] BYREF

  pModifiera = pModifier;
  CUtlVectorBase<CDOTA_Buff *,CUtlMemory<CDOTA_Buff *,int>>::FindAndRemove(&this->m_bufflist, &pModifiera);
  m_Size = this->m_bufflist.m_Size;
  this->m_nHasTruesightForTeamValid = 0;
  if ( m_Size == 0 )
  {
    src = this;
    CUtlVectorBase<CDOTA_ModifierManager *,CUtlMemory<CDOTA_ModifierManager *,int>>::FindAndRemove(
      &g_pDOTAActiveModifiers->m_modifiers,
      &src);
  }
  if ( pModifiera != 0 )
    (*(pModifiera->_vptr_CDOTA_Buff + 2))(pModifiera);
}


// CDOTA_ModifierManager::HasTruesightForTeam  (line 473, @0x00000000025f1f90, libserver.so)
// calls: CDOTA_ModifierManager::GetBuffByIndex
// callers: CDOTA_BaseNPC::IsInvisibleTo
bool __fastcall CDOTA_ModifierManager::HasTruesightForTeam(CDOTA_ModifierManager *const this, int nTeam)
{
  int v2; // r15d
  uint16 m_nHasTruesightForTeamValid; // dx
  int m_Size; // r13d
  uint16 m_nHasTruesightForTeam; // ax
  int v8; // ebx
  CDOTA_Buff *BuffByIndex; // rax

  v2 = 1 << nTeam;
  m_nHasTruesightForTeamValid = this->m_nHasTruesightForTeamValid;
  if ( ((1 << nTeam) & m_nHasTruesightForTeamValid) != 0 )
  {
    m_nHasTruesightForTeam = this->m_nHasTruesightForTeam;
  }
  else
  {
    m_Size = this->m_bufflist.m_Size;
    m_nHasTruesightForTeam = this->m_nHasTruesightForTeam & ~v2;
    this->m_nHasTruesightForTeam = m_nHasTruesightForTeam;
    if ( m_Size > 0 )
    {
      v8 = 0;
      while ( 1 )
      {
        BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(this, v8, 0);
        if ( BuffByIndex != 0 && (*(BuffByIndex->_vptr_CDOTA_Buff + 84))(BuffByIndex, nTeam) != 0 )
          break;
        if ( ++v8 == m_Size )
        {
          m_nHasTruesightForTeamValid = this->m_nHasTruesightForTeamValid;
          m_nHasTruesightForTeam = this->m_nHasTruesightForTeam;
          goto LABEL_8;
        }
      }
      m_nHasTruesightForTeamValid = this->m_nHasTruesightForTeamValid;
      m_nHasTruesightForTeam = this->m_nHasTruesightForTeam | v2;
      this->m_nHasTruesightForTeam = m_nHasTruesightForTeam;
    }
LABEL_8:
    this->m_nHasTruesightForTeamValid = v2 | m_nHasTruesightForTeamValid;
  }
  return (v2 & m_nHasTruesightForTeam) != 0;
}


// CDOTA_ModifierManager::RemoveModifierByName  (line 527, @0x0000000002616150, libserver.so)  // inlines: Destroy, FStrEq, GetName, String, ToCStr, _V_strcmp
// calls: strcmp, CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::Destroy
// callers: CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC_Building::RemoveBackdoorProtection, CDOTA_BaseNPC::OnLoadState, CDOTA_BaseNPC_Building::ReduceInvulnCount, CDOTA_BaseNPC_Building::SetInvulnCount, CDOTA_ScriptedSpawner::InputSetInvulnerable, CDOTA_BaseNPC_HoldoutTower::Spawn, CDOTA_BaseNPC_Hero::RespawnHero, CDOTA_Ability_Holdout_CullingBlade::DoChop, CDOTA_Ability_Axe_CullingBlade::OnSpellStart, CDOTA_Modifier_BountyHunter_Track::OnDeath, CDOTA_Ability_Life_Stealer_Assimilate::OnSpellStart (24 total)
void __fastcall CDOTA_ModifierManager::RemoveModifierByName(
        CDOTA_ModifierManager *const this,
        const char *pszScriptName)
{
  int m_Size; // r14d
  int v5; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v7; // r15
  const char *m_pAsString; // rdi

  m_Size = this->m_bufflist.m_Size;
  if ( m_Size > 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(this, v5, 0);
      v7 = BuffByIndex;
      if ( BuffByIndex != 0 )
      {
        m_pAsString = BuffByIndex->m_name.u.m_pAsString;
        if ( m_pAsString == 0 )
          m_pAsString = "";
        if ( pszScriptName == m_pAsString || strcmp(m_pAsString, pszScriptName) == 0 )
          break;
      }
      if ( ++v5 == m_Size )
        return;
    }
    if ( (*(v7 + 138) & 4) == 0 )
      CDOTA_Buff::Destroy(v7, 0, 0, 0);
  }
}


// CDOTA_ModifierManager::RemoveAbilityBasedModifier  (line 550, @0x00000000026161f0, libserver.so)  // inlines: Destroy, FStrEq, Get, GetAbility, GetInstance, GetName, String, ToCStr, _V_strcmp, operator==<CBaseEntity>
// calls: CDOTA_ModifierManager::GetBuffByIndex, strcmp, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::Destroy
// callers: CDOTA_Item_DivineRapier::OnUnequip
void __fastcall CDOTA_ModifierManager::RemoveAbilityBasedModifier(
        CDOTA_ModifierManager *const this,
        const char *pszScriptName,
        CDOTABaseAbility *pAbility)
{
  int m_Size; // r14d
  int v6; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v8; // r15
  const char *m_pAsString; // rdi

  m_Size = this->m_bufflist.m_Size;
  if ( m_Size > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(this, v6, 0);
      v8 = BuffByIndex;
      if ( BuffByIndex != 0 )
      {
        m_pAsString = BuffByIndex->m_name.u.m_pAsString;
        if ( m_pAsString == 0 )
          m_pAsString = "";
        if ( (pszScriptName == m_pAsString || strcmp(m_pAsString, pszScriptName) == 0)
          && pAbility == CEntityHandle::operator CEntityInstance *(&v8->m_hAbility) )
        {
          break;
        }
      }
      if ( ++v6 == m_Size )
        return;
    }
    if ( (*(v8 + 138) & 4) == 0 )
      CDOTA_Buff::Destroy(v8, 0, 0, 0);
  }
}


// CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal  (line 573, @0x0000000002617dc0, libserver.so)  // inlines: AddToTail, BuffListForModifier, CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase, CallFn, Construct<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> >, Element, GrowMemory, operator[]
// calls: CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>, int>::Grow
// callers: CDOTA_BaseNPC::GetMoveSpeedModifier, CDOTA_Modifier_TutorialNPCBlocker::GetModifierMoveSpeed_Limit, CDOTA_Bot::DoCreepAttackAndDeny, CDOTA_Bot_Script::GetSpellAmp, CDOTA_BaseNPC::GetPercentageBasedManaRegen, CDOTA_BaseNPC::GetDayTimeVisionRange, CDOTA_BaseNPC::GetNightTimeVisionRange, CDOTA_BaseNPC_Hero::AddExperience, CDOTA_BaseNPC::GetDamageBonus, CDOTA_BaseNPC::UnitThink, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::GetAverageTrueAttackDamage (14 total)
float __fastcall CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
        CDOTA_ModifierManager *const this,
        modifierfunction func,
        const CModifierParams *const params)
{
  __int64 v4; // r12
  __int64 v6; // rax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *m_pMemory; // rdx
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v8; // rax
  CDOTA_ModifierManager::BuffModifier_t *v9; // rbx
  CDOTA_ModifierManager::BuffModifier_t *v10; // r12
  float v11; // xmm0_4
  ModifierVariant_t (*pfn)(CDOTA_Buff *, const CModifierParams *); // rax
  _QWORD *v13; // rdi
  int m_Size; // r14d
  int v16; // eax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v17; // rax

  v4 = func;
  v6 = this->m_buffsForModifiers[func];
  if ( v6 == 0xFF )
  {
    m_Size = this->m_buffModifiers.m_Size;
    v16 = m_Size;
    if ( m_Size == this->m_buffModifiers.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>,int>::Grow(
        &this->m_buffModifiers.m_Memory,
        1);
      v16 = this->m_buffModifiers.m_Size;
    }
    m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
    this->m_buffModifiers.m_Size = v16 + 1;
    v17 = &m_pMemory[m_Size];
    if ( v17 != 0 )
    {
      v17->m_Size = 0;
      v17->m_Memory.m_pMemory = 0;
      v17->m_Memory.m_nAllocationCount = 0;
      v17->m_Memory.m_nGrowSize = 0;
      m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
    }
    v6 = m_Size;
    this->m_buffsForModifiers[v4] = m_Size;
  }
  else
  {
    m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
  }
  v8 = &m_pMemory[v6];
  v9 = v8->m_Memory.m_pMemory;
  v10 = &v9[v8->m_Size];
  if ( v10 == v9 )
    return 1.0;
  v11 = 100.0;
  do
  {
    pfn = v9->m_pFn.__pfn;
    v13 = (&v9->m_pBuff->_vptr_CDOTA_Buff + v9->m_pFn.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v13 - 1);
    ++v9;
    v11 = v11 + COERCE_FLOAT((pfn)(v13, params) >> 32);
  }
  while ( v10 != v9 );
  return v11 / 100.0;
}


// CDOTA_ModifierManager::GetModifier_Constant_First_Internal  (line 597, @0x00000000025f1780, libserver.so)  // inlines: BuffListPtrForModifier, CallFn, operator[]
// callers: CDOTA_Item_BagOfGold::OnSpellStart, CDOTA_BaseNPC::GetBaseAttackTime, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetHasteFactor, CDOTA_ModifierManager::GetModifier_Constant_First, CDOTA_Modifier_Illusion::OnDestroy, CDOTA_BaseNPC::IsTemporaryHero, CDOTA_Modifier_Special_Bonus_Gold_Income::OnIntervalThink, OnCreateIllusionsSpawnCompletion, CDOTABody::ManageOverrideAnimations, CDOTA_BotMode_Attack::FindPotentialAttackTarget, CDOTA_BaseNPC::IsTempestDouble (43 total)
float __fastcall CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
        CDOTA_ModifierManager *const this,
        modifierfunction func,
        const CModifierParams *const params)
{
  __int64 v3; // rax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v5; // rax
  CDOTA_ModifierManager::BuffModifier_t *m_pMemory; // rbx
  CDOTA_ModifierManager::BuffModifier_t *v7; // r13
  CDOTA_ModifierManager::BuffModifier_t *v8; // r14
  int v9; // r12d
  int v10; // eax
  ModifierVariant_t (*pfn)(CDOTA_Buff *, const CModifierParams *); // rax
  _QWORD *v12; // rdi
  float result; // xmm0_4

  v3 = this->m_buffsForModifiers[func];
  if ( v3 == 0xFF )
    return -1.0;
  v5 = &this->m_buffModifiers.m_Memory.m_pMemory[v3];
  if ( v5 == 0 )
    return -1.0;
  m_pMemory = v5->m_Memory.m_pMemory;
  v7 = &m_pMemory[v5->m_Size];
  if ( v7 == m_pMemory )
    return -1.0;
  v8 = 0;
  v9 = -999;
  do
  {
    v10 = (*(m_pMemory->m_pBuff->_vptr_CDOTA_Buff + 6))(m_pMemory->m_pBuff);
    if ( v10 > v9 )
    {
      v8 = m_pMemory;
      v9 = v10;
    }
    ++m_pMemory;
  }
  while ( v7 != m_pMemory );
  if ( v8 == 0 )
    return -1.0;
  pfn = v8->m_pFn.__pfn;
  v12 = (&v8->m_pBuff->_vptr_CDOTA_Buff + v8->m_pFn.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *(pfn + *v12 - 1);
  LODWORD(result) = (pfn)(v12, params) >> 32;
  return result;
}


// SortBuffListByPriority  (line 633, @0x00000000025df0e0, libserver.so)
// callers: CDOTA_ModifierManager::GetModifier_First_Valid_Internal
int __fastcall SortBuffListByPriority(
        const CDOTA_ModifierManager::BuffModifier_t *p1,
        const CDOTA_ModifierManager::BuffModifier_t *p2)
{
  CDOTA_Buff *m_pBuff; // rbx
  int v3; // r12d

  m_pBuff = p2->m_pBuff;
  v3 = (*(p1->m_pBuff->_vptr_CDOTA_Buff + 6))(p1->m_pBuff);
  return 2 * (v3 <= (*(m_pBuff->_vptr_CDOTA_Buff + 6))(m_pBuff)) - 1;
}


// CDOTA_ModifierManager::GetModifier_First_Valid_Internal  (line 644, @0x00000000025f19e0, libserver.so)  // inlines: BuffListPtrForModifier, CallFn, Element, Sort, V_swap<CDOTA_ModifierManager::BuffModifier_t>, operator[]
// calls: V_qsort, SortBuffListByPriority
// callers: CDOTA_BaseNPC::TriggerModifierDodge, CDOTA_BaseNPC::TriggerSpellReflect, CDOTA_BaseNPC::TriggerSpellAbsorb
// globals: SortBuffListByPriority(CDOTA_ModifierManager::BuffModifier_t const*,CDOTA_ModifierManager::BuffModifier_t const*)
float __fastcall CDOTA_ModifierManager::GetModifier_First_Valid_Internal(
        CDOTA_ModifierManager *const this,
        modifierfunction func,
        const CModifierParams *const params)
{
  __int64 v3; // rax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v4; // r14
  __int64 m_Size; // rax
  CDOTA_ModifierManager::BuffModifier_t *v6; // rdi
  CDOTA_ModifierManager::BuffModifier_t *m_pMemory; // rbx
  CDOTA_ModifierManager::BuffModifier_t *v8; // r12
  ModifierVariant_t (*pfn)(CDOTA_Buff *, const CModifierParams *); // rax
  _QWORD *v10; // rdi
  float result; // xmm0_4
  int v12; // r13d
  __int64 v13; // rbx
  int v14; // r12d
  __int64 v15; // r15
  CDOTA_ModifierManager::BuffModifier_t *v16; // rcx
  _QWORD *v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx

  v3 = this->m_buffsForModifiers[func];
  if ( v3 == 0xFF )
    return -1.0;
  v4 = &this->m_buffModifiers.m_Memory.m_pMemory[v3];
  if ( v4 == 0 )
    return -1.0;
  m_Size = v4->m_Size;
  if ( m_Size <= 1 )
  {
    m_pMemory = v4->m_Memory.m_pMemory;
  }
  else
  {
    v6 = v4->m_Memory.m_pMemory;
    if ( v6 != 0 )
    {
      V_qsort(v6, m_Size, 24, SortBuffListByPriority);
      m_Size = v4->m_Size;
      m_pMemory = v4->m_Memory.m_pMemory;
    }
    else
    {
      v12 = m_Size - 1;
      do
      {
        if ( v12 > 0 )
        {
          v13 = 0;
          v14 = 1;
          while ( 1 )
          {
            v15 = v13 + 24;
            if ( SortBuffListByPriority((v6 + v13), (v6 + v13 + 24)) >= 0 )
            {
              ++v14;
              v6 = v4->m_Memory.m_pMemory;
              if ( v14 > v12 )
                break;
            }
            else
            {
              v16 = v4->m_Memory.m_pMemory;
              ++v14;
              v17 = (&v16->m_pBuff + v15);
              v18 = (v16 + v13);
              v19 = *(&v16->m_pBuff + v15);
              v20 = *v18;
              v21 = v18[1];
              v22 = v18[2];
              *v18 = v19;
              v18[1] = v17[1];
              v18[2] = v17[2];
              *v17 = v20;
              v17[1] = v21;
              v17[2] = v22;
              v6 = v4->m_Memory.m_pMemory;
              if ( v14 > v12 )
                break;
            }
            v13 = v15;
          }
        }
        --v12;
      }
      while ( v12 != -1 );
      m_Size = v4->m_Size;
      m_pMemory = v6;
    }
  }
  v8 = &m_pMemory[m_Size];
  if ( v8 == m_pMemory )
    return -1.0;
  while ( 1 )
  {
    pfn = m_pMemory->m_pFn.__pfn;
    v10 = (&m_pMemory->m_pBuff->_vptr_CDOTA_Buff + m_pMemory->m_pFn.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v10 - 1);
    LODWORD(result) = (pfn)(v10, params) >> 32;
    if ( result == 1.0 )
      break;
    if ( v8 == ++m_pMemory )
      return -1.0;
  }
  return result;
}


// CDOTA_ModifierManager::GetModifier_String_First  (line 673, @0x0000000002617ca0, libserver.so)  // inlines: AddToTail, BuffListForModifier, CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase, CallFn, Construct<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> >, Element, GrowMemory, operator[]
// calls: CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>, int>::Grow
// callers: CDOTA_BaseNPC::PerformAttack
const char *__fastcall CDOTA_ModifierManager::GetModifier_String_First(
        CDOTA_ModifierManager *const this,
        modifierfunction func,
        const CModifierParams *const params)
{
  __int64 v4; // r12
  __int64 v6; // rax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *m_pMemory; // rdx
  CDOTA_ModifierManager::BuffModifier_t *v8; // r14
  int v9; // r12d
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v10; // rax
  CDOTA_ModifierManager::BuffModifier_t *v11; // rbx
  CDOTA_ModifierManager::BuffModifier_t *v12; // r13
  int v13; // eax
  ModifierVariant_t (*pfn)(CDOTA_Buff *, const CModifierParams *); // rax
  CDOTA_Buff *v15; // rdi
  const char *v16; // rdx
  int m_Size; // r13d
  int v19; // eax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v20; // rax

  v4 = func;
  v6 = this->m_buffsForModifiers[func];
  if ( v6 == 0xFF )
  {
    m_Size = this->m_buffModifiers.m_Size;
    v19 = m_Size;
    if ( m_Size == this->m_buffModifiers.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>,int>::Grow(
        &this->m_buffModifiers.m_Memory,
        1);
      v19 = this->m_buffModifiers.m_Size;
    }
    m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
    this->m_buffModifiers.m_Size = v19 + 1;
    v20 = &m_pMemory[m_Size];
    if ( v20 != 0 )
    {
      v20->m_Size = 0;
      v20->m_Memory.m_pMemory = 0;
      v20->m_Memory.m_nAllocationCount = 0;
      v20->m_Memory.m_nGrowSize = 0;
      m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
    }
    v6 = m_Size;
    this->m_buffsForModifiers[v4] = m_Size;
  }
  else
  {
    m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
  }
  v8 = 0;
  v9 = -999;
  v10 = &m_pMemory[v6];
  v11 = v10->m_Memory.m_pMemory;
  v12 = &v11[v10->m_Size];
  if ( v12 == v11 )
    return 0;
  do
  {
    v13 = (*(v11->m_pBuff->_vptr_CDOTA_Buff + 6))(v11->m_pBuff);
    if ( v13 > v9 )
    {
      v8 = v11;
      v9 = v13;
    }
    ++v11;
  }
  while ( v12 != v11 );
  if ( v8 == 0 )
    return 0;
  pfn = v8->m_pFn.__pfn;
  v15 = (v8->m_pBuff + v8->m_pFn.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *(v15->_vptr_CDOTA_Buff + pfn - 1);
  pfn(v15, params);
  return v16;
}


// CDOTA_ModifierManager::GetModifier_Percentage_Highest_Internal  (line 708, @0x00000000025f1b80, libserver.so)  // inlines: BuffListPtrForModifier, CallFn, fpmax, operator[]
// callers: CDOTA_BaseNPC::GetDamageBonus, CDOTA_BaseNPC::UnitThink, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::GetAverageTrueAttackDamage
float __fastcall CDOTA_ModifierManager::GetModifier_Percentage_Highest_Internal(
        CDOTA_ModifierManager *const this,
        modifierfunction func,
        const CModifierParams *const params)
{
  float result; // xmm0_4
  __int64 v4; // rax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v6; // rax
  CDOTA_ModifierManager::BuffModifier_t *m_pMemory; // rbx
  CDOTA_ModifierManager::BuffModifier_t *v8; // r12
  float v9; // xmm0_4
  ModifierVariant_t (*pfn)(CDOTA_Buff *, const CModifierParams *); // rax
  _QWORD *v11; // rdi

  result = 1.0;
  v4 = this->m_buffsForModifiers[func];
  if ( v4 != 0xFF )
  {
    v6 = &this->m_buffModifiers.m_Memory.m_pMemory[v4];
    if ( v6 != 0 )
    {
      m_pMemory = v6->m_Memory.m_pMemory;
      v8 = &m_pMemory[v6->m_Size];
      if ( v8 != m_pMemory )
      {
        v9 = 100.0;
        do
        {
          pfn = m_pMemory->m_pFn.__pfn;
          v11 = (&m_pMemory->m_pBuff->_vptr_CDOTA_Buff + m_pMemory->m_pFn.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v11 - 1);
          ++m_pMemory;
          v9 = fmaxf(v9, COERCE_FLOAT((pfn)(v11, params) >> 32));
        }
        while ( v8 != m_pMemory );
        return v9 / 100.0;
      }
    }
  }
  return result;
}


// CDOTA_ModifierManager::GetModifier_Percentage_Multiplicative_Internal  (line 732, @0x0000000002613820, libserver.so)  // inlines: AddToTail, BuffListForModifier, CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase, CallFn, Construct<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> >, Element, GrowMemory, operator[]
// calls: CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>, int>::Grow
// callers: CDOTA_BaseNPC::GetMagicalArmorValue, CGridNavPath::Update, CDOTA_Bot_Script::GetEvasion, CDOTALocomotor::UpdateFacing, CDOTALocomotor::GetCastAngle, DamageImpact
float __fastcall CDOTA_ModifierManager::GetModifier_Percentage_Multiplicative_Internal(
        CDOTA_ModifierManager *const this,
        modifierfunction func,
        const CModifierParams *const params)
{
  __int64 v4; // r12
  __int64 v6; // rax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *m_pMemory; // rdx
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v8; // rax
  CDOTA_ModifierManager::BuffModifier_t *v9; // rbx
  CDOTA_ModifierManager::BuffModifier_t *v10; // r12
  __m128d v11; // xmm1
  ModifierVariant_t (*pfn)(CDOTA_Buff *, const CModifierParams *); // rax
  _QWORD *v13; // rdi
  float v14; // xmm0_4
  int m_Size; // r14d
  int v17; // eax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v18; // rax
  float flReturn; // [rsp+Ch] [rbp-24h]

  v4 = func;
  v6 = this->m_buffsForModifiers[func];
  if ( v6 == 0xFF )
  {
    m_Size = this->m_buffModifiers.m_Size;
    v17 = m_Size;
    if ( m_Size == this->m_buffModifiers.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>,int>::Grow(
        &this->m_buffModifiers.m_Memory,
        1);
      v17 = this->m_buffModifiers.m_Size;
    }
    m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
    this->m_buffModifiers.m_Size = v17 + 1;
    v18 = &m_pMemory[m_Size];
    if ( v18 != 0 )
    {
      v18->m_Size = 0;
      v18->m_Memory.m_pMemory = 0;
      v18->m_Memory.m_nAllocationCount = 0;
      v18->m_Memory.m_nGrowSize = 0;
      m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
    }
    v6 = m_Size;
    this->m_buffsForModifiers[v4] = m_Size;
  }
  else
  {
    m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
  }
  v8 = &m_pMemory[v6];
  v9 = v8->m_Memory.m_pMemory;
  v10 = &v9[v8->m_Size];
  if ( v10 == v9 )
    return 1.0;
  flReturn = 1.0;
  do
  {
    while ( 1 )
    {
      pfn = v9->m_pFn.__pfn;
      v13 = (&v9->m_pBuff->_vptr_CDOTA_Buff + v9->m_pFn.__delta);
      if ( (pfn & 1) != 0 )
        pfn = *(pfn + *v13 - 1);
      LODWORD(v14) = (pfn)(v13, params) >> 32;
      if ( v14 > 99.989998 )
        break;
      ++v9;
      v11 = _mm_cvtps_pd(LODWORD(flReturn));
      v11.m128d_f64[0] = v11.m128d_f64[0] * (1.0 - (v14 / 100.0));
      flReturn = _mm_movedup_pd(v11).m128d_f64[0];
      if ( v10 == v9 )
        return (1.0 - flReturn) + 1.0;
    }
    ++v9;
    flReturn = 0.0;
  }
  while ( v10 != v9 );
  return (1.0 - flReturn) + 1.0;
}


// CDOTA_ModifierManager::FindModifierByProperty_Constant_Highest_Internal  (line 762, @0x0000000002617ee0, libserver.so)  // inlines: AddToTail, BuffListForModifier, CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase, CallFn, Construct<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> >, Element, GrowMemory, operator[]
// calls: CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>, int>::Grow
// callers: CDOTA_BaseNPC::SpendMana
CDOTA_Buff *__fastcall CDOTA_ModifierManager::FindModifierByProperty_Constant_Highest_Internal(
        CDOTA_ModifierManager *const this,
        modifierfunction func,
        const CModifierParams *const params)
{
  __int64 v4; // r12
  __int64 v6; // rax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *m_pMemory; // rdx
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v8; // rax
  CDOTA_Buff **p_m_pBuff; // rbx
  CDOTA_Buff **v10; // r12
  CDOTA_Buff *v11; // r14
  CDOTA_Buff *v12; // rax
  _QWORD *v13; // rdi
  unsigned __int64 v14; // rax
  int m_Size; // r14d
  int v17; // eax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v18; // rax
  float flReturn; // [rsp+Ch] [rbp-24h]

  v4 = func;
  v6 = this->m_buffsForModifiers[func];
  if ( v6 == 0xFF )
  {
    m_Size = this->m_buffModifiers.m_Size;
    v17 = m_Size;
    if ( m_Size == this->m_buffModifiers.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>,int>::Grow(
        &this->m_buffModifiers.m_Memory,
        1);
      v17 = this->m_buffModifiers.m_Size;
    }
    m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
    this->m_buffModifiers.m_Size = v17 + 1;
    v18 = &m_pMemory[m_Size];
    if ( v18 != 0 )
    {
      v18->m_Size = 0;
      v18->m_Memory.m_pMemory = 0;
      v18->m_Memory.m_nAllocationCount = 0;
      v18->m_Memory.m_nGrowSize = 0;
      m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
    }
    v6 = m_Size;
    this->m_buffsForModifiers[v4] = m_Size;
  }
  else
  {
    m_pMemory = this->m_buffModifiers.m_Memory.m_pMemory;
  }
  v8 = &m_pMemory[v6];
  p_m_pBuff = &v8->m_Memory.m_pMemory->m_pBuff;
  v10 = &p_m_pBuff[3 * v8->m_Size];
  if ( v10 == p_m_pBuff )
    return 0;
  v11 = 0;
  flReturn = 0.0;
  do
  {
    v12 = p_m_pBuff[1];
    v13 = (&(*p_m_pBuff)->_vptr_CDOTA_Buff + p_m_pBuff[2]);
    if ( (v12 & 1) != 0 )
      v12 = *(v12 + *v13 - 1);
    v14 = (v12)(v13, params) >> 32;
    if ( *&v14 > flReturn )
    {
      v11 = *p_m_pBuff;
      flReturn = *&v14;
    }
    p_m_pBuff += 3;
  }
  while ( v10 != p_m_pBuff );
  return v11;
}


// CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal  (line 791, @0x00000000025f1c30, libserver.so)  // inlines: BuffListPtrForModifier, CallFn, fpmax, operator[]
// callers: CDOTABaseAbility::GetCastRangeBonus, CDOTABaseAbility::GetEffectiveManaCost, CDOTABaseAbility::GetCooldownModifier, CDOTABaseAbility::IsCooldownReady, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::StartCooldown, CDOTA_BaseNPC::IsEntityExceptToAttack, CDOTA_BaseNPC::GetMoveSpeedModifier, CDOTA_BaseNPC::GetAttackRange, CDOTA_Modifier_TutorialNPCBlocker::GetModifierMoveSpeed_Limit, CDOTA_Bot::GetGankDistance, CDOTABody::ManageOverrideAnimations (61 total)
float __fastcall CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
        CDOTA_ModifierManager *const this,
        modifierfunction func,
        const CModifierParams *const params)
{
  float result; // xmm0_4
  __int64 v4; // rax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v6; // rax
  CDOTA_ModifierManager::BuffModifier_t *m_pMemory; // rbx
  CDOTA_ModifierManager::BuffModifier_t *i; // r12
  ModifierVariant_t (*pfn)(CDOTA_Buff *, const CModifierParams *); // rax
  _QWORD *v10; // rdi

  result = 0.0;
  v4 = this->m_buffsForModifiers[func];
  if ( v4 != 0xFF )
  {
    v6 = &this->m_buffModifiers.m_Memory.m_pMemory[v4];
    if ( v6 != 0 )
    {
      m_pMemory = v6->m_Memory.m_pMemory;
      for ( i = &m_pMemory[v6->m_Size]; i != m_pMemory; result = fmaxf(result, COERCE_FLOAT((pfn)(v10, params) >> 32)) )
      {
        pfn = m_pMemory->m_pFn.__pfn;
        v10 = (&m_pMemory->m_pBuff->_vptr_CDOTA_Buff + m_pMemory->m_pFn.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v10 - 1);
        ++m_pMemory;
      }
    }
  }
  return result;
}


// CDOTA_ModifierManager::GetModifiers_Constant_Internal  (line 817, @0x000000000261e2b0, libserver.so)  // inlines: AddToTail, BuffListPtrForModifier, CallFn, CopyConstruct<const CDOTA_Buff*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<const CDOTA_Buff*, int>::Grow
void __fastcall CDOTA_ModifierManager::GetModifiers_Constant_Internal(
        CDOTA_ModifierManager *const this,
        CUtlVector<const CDOTA_Buff*,CUtlMemory<const CDOTA_Buff*,int> > *const list,
        modifierfunction func,
        const CModifierParams *const params)
{
  __int64 v4; // rax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v5; // rax
  CUtlVectorBase<const CDOTA_Buff*,CUtlMemory<const CDOTA_Buff*,int> >::CAllocator *p_m_Memory; // r14
  CDOTA_ModifierManager::BuffModifier_t *m_pMemory; // rbx
  CDOTA_ModifierManager::BuffModifier_t *i; // r12
  ModifierVariant_t (*pfn)(CDOTA_Buff *, const CModifierParams *); // rax
  _QWORD *v12; // rdi
  __int64 m_Size; // rax
  const CDOTA_Buff *m_pBuff; // rcx
  int v15; // edx
  const CDOTA_Buff **v16; // rax
  int v17; // [rsp-44h] [rbp-44h]
  CDOTA_Buff *v18; // [rsp-40h] [rbp-40h]

  v4 = this->m_buffsForModifiers[func];
  if ( v4 != 0xFF )
  {
    v5 = &this->m_buffModifiers.m_Memory.m_pMemory[v4];
    if ( v5 != 0 )
    {
      p_m_Memory = &list->m_Memory;
      m_pMemory = v5->m_Memory.m_pMemory;
      for ( i = &m_pMemory[v5->m_Size]; i != m_pMemory; ++m_pMemory )
      {
        pfn = m_pMemory->m_pFn.__pfn;
        v12 = (&m_pMemory->m_pBuff->_vptr_CDOTA_Buff + m_pMemory->m_pFn.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v12 - 1);
        if ( COERCE_FLOAT((pfn)(v12, params) >> 32) > 0.0 )
        {
          m_Size = list->m_Size;
          m_pBuff = m_pMemory->m_pBuff;
          v15 = list->m_Size;
          if ( m_Size == list->m_Memory.m_nAllocationCount )
          {
            v17 = list->m_Size;
            v18 = m_pMemory->m_pBuff;
            CUtlMemory<CDOTA_Buff const*,int>::Grow(p_m_Memory, 1);
            v15 = list->m_Size;
            m_Size = v17;
            m_pBuff = v18;
          }
          list->m_Size = v15 + 1;
          v16 = &list->m_Memory.m_pMemory[m_Size];
          if ( v16 != 0 )
            *v16 = m_pBuff;
        }
      }
    }
  }
}


// CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal  (line 843, @0x00000000025f1cc0, libserver.so)  // inlines: BuffListPtrForModifier, CallFn, fpmin, operator[]
// callers: CDOTABaseAbility::GetEffectiveCastPoint, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetMoveSpeedModifier, CDOTA_BaseNPC::GetBaseMoveSpeed, CDOTA_BaseNPC::GetMagicalArmorValue, CDOTABehaviorAbilityPhase::BeginCast, CDOTA_BaseNPC::SetHealth, CDOTA_Modifier_AncientApparition_IceBlast::OnIntervalThink, CDOTA_Modifier_AncientApparition_IceBlast::OnTakeDamage, CDOTA_Modifier_Necrolyte_ReapersScythe::OnTakeDamageKillCredit
float __fastcall CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal(
        CDOTA_ModifierManager *const this,
        modifierfunction func,
        const CModifierParams *const params)
{
  __int64 v3; // rax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v5; // rax
  CDOTA_ModifierManager::BuffModifier_t *m_pMemory; // rbx
  CDOTA_ModifierManager::BuffModifier_t *v7; // r12
  float v8; // r14d
  ModifierVariant_t (*pfn)(CDOTA_Buff *, const CModifierParams *); // rax
  _QWORD *v10; // rdi
  float v11; // xmm0_4
  __m128i v12; // xmm1

  v3 = this->m_buffsForModifiers[func];
  if ( v3 == 0xFF )
    return 0.0;
  v5 = &this->m_buffModifiers.m_Memory.m_pMemory[v3];
  if ( v5 == 0 )
    return 0.0;
  m_pMemory = v5->m_Memory.m_pMemory;
  v7 = &m_pMemory[v5->m_Size];
  if ( v7 == m_pMemory )
    return 0.0;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(0x7F7FFFFFu));
  do
  {
    pfn = m_pMemory->m_pFn.__pfn;
    v10 = (&m_pMemory->m_pBuff->_vptr_CDOTA_Buff + m_pMemory->m_pFn.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v10 - 1);
    LODWORD(v11) = (pfn)(v10, params) >> 32;
    if ( v11 != 0.0 )
    {
      v12 = _mm_cvtsi32_si128(LODWORD(v8));
      *v12.m128i_i32 = fminf(*v12.m128i_i32, v11);
      v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
    }
    ++m_pMemory;
  }
  while ( v7 != m_pMemory );
  if ( v8 == 3.4028235e38 )
    return 0.0;
  else
    return v8;
}


// CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal  (line 875, @0x00000000025f1dd0, libserver.so)  // inlines: BuffListPtrForModifier, CallFn, operator[]
// callers: CDOTABaseAbility::GetCastRangeBonus, CDOTABaseAbility::GetCooldownModifier, CDOTA_ActionRunner::PerformAction_CreateBonusAttack, CDOTA_BaseNPC::GetIncreasedAttackSpeed, CDOTA_BaseNPC::GetMoveSpeedModifier, CDOTA_BaseNPC::GetMagicalArmorValue, CDOTA_BaseNPC::GetAttackRange, CDOTA_BaseNPC::GetBaseDamageMin, CDOTA_BaseNPC::GetBaseDamageMax, CDOTA_Modifier_TutorialNPCBlocker::GetModifierMoveSpeed_Limit, CDOTA_Bot::GetGankDistance, CDOTA_Bot::FindEstimatedAttackLocation (77 total)
float __fastcall CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
        CDOTA_ModifierManager *const this,
        modifierfunction func,
        const CModifierParams *const params)
{
  float result; // xmm0_4
  __int64 v4; // rax
  CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> *v6; // rax
  CDOTA_ModifierManager::BuffModifier_t *m_pMemory; // rbx
  CDOTA_ModifierManager::BuffModifier_t *i; // r12
  ModifierVariant_t (*pfn)(CDOTA_Buff *, const CModifierParams *); // rax
  _QWORD *v10; // rdi

  result = 0.0;
  v4 = this->m_buffsForModifiers[func];
  if ( v4 != 0xFF )
  {
    v6 = &this->m_buffModifiers.m_Memory.m_pMemory[v4];
    if ( v6 != 0 )
    {
      m_pMemory = v6->m_Memory.m_pMemory;
      for ( i = &m_pMemory[v6->m_Size]; i != m_pMemory; result = result + COERCE_FLOAT((pfn)(v10, params) >> 32) )
      {
        pfn = m_pMemory->m_pFn.__pfn;
        v10 = (&m_pMemory->m_pBuff->_vptr_CDOTA_Buff + m_pMemory->m_pFn.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v10 - 1);
        ++m_pMemory;
      }
    }
  }
  return result;
}


// CDOTA_ModifierManager::GetModifier_GetFirstOrb  (line 902, @0x00000000025f2080, libserver.so)
// calls: CDOTA_ModifierManager::GetBuffByIndex
// callers: CDOTA_BaseNPC::CreateAttackRecord
CDOTA_Orb *__fastcall CDOTA_ModifierManager::GetModifier_GetFirstOrb(
        CDOTA_ModifierManager *const this,
        CDOTA_AttackRecord *pRecord)
{
  int v3; // r15d
  int v4; // r12d
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v6; // r13
  int v7; // r14d
  int v8; // esi
  CDOTA_Buff *v9; // rax
  int iBestOrbIndex_CastAttack; // [rsp+Ch] [rbp-44h]
  int iBestOrbIndex_NoCastAttack; // [rsp+10h] [rbp-40h]
  int iBestOrbPriority_CastAttack; // [rsp+14h] [rbp-3Ch]

  if ( this->m_bufflist.m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    iBestOrbIndex_NoCastAttack = -1;
    iBestOrbPriority_CastAttack = 0;
    iBestOrbIndex_CastAttack = -1;
    do
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(this, v3, 0);
      v6 = BuffByIndex;
      if ( BuffByIndex != 0 )
      {
        v7 = (*(BuffByIndex->_vptr_CDOTA_Buff + 50))(BuffByIndex, pRecord);
        if ( (*(v6->_vptr_CDOTA_Buff + 82))(v6) != 0 && v7 > iBestOrbPriority_CastAttack )
        {
          iBestOrbPriority_CastAttack = v7;
          iBestOrbIndex_CastAttack = v3;
        }
        if ( v7 > v4 )
        {
          v4 = v7;
          iBestOrbIndex_NoCastAttack = v3;
        }
      }
      ++v3;
    }
    while ( v3 < this->m_bufflist.m_Size );
    if ( pRecord->m_bUseCastAttackOrb && iBestOrbIndex_CastAttack != -1 )
    {
      v8 = iBestOrbIndex_CastAttack;
      goto LABEL_13;
    }
    v8 = iBestOrbIndex_NoCastAttack;
    if ( iBestOrbIndex_NoCastAttack != -1 )
    {
LABEL_13:
      v9 = CDOTA_ModifierManager::GetBuffByIndex(this, v8, 0);
      return (*(v9->_vptr_CDOTA_Buff + 49))(v9, pRecord);
    }
  }
  return 0;
}


// CDOTA_ModifierManager::GetModifier_GetSecondOrb  (line 949, @0x00000000025f2180, libserver.so)
// calls: CDOTA_ModifierManager::GetBuffByIndex
// callers: CDOTA_BaseNPC::CreateAttackRecord
CDOTA_Orb *__fastcall CDOTA_ModifierManager::GetModifier_GetSecondOrb(
        CDOTA_ModifierManager *const this,
        CDOTA_AttackRecord *pRecord)
{
  CDOTA_Orb *m_pOrb; // rdi
  int v6; // r14d
  int v7; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v9; // r15
  int v10; // esi
  CDOTA_Buff *v11; // rax
  int iBestOrbPriority_CastAttack; // [rsp+Ch] [rbp-44h]
  int iBestOrbIndex_CastAttack; // [rsp+10h] [rbp-40h]
  int iOrbPriority; // [rsp+14h] [rbp-3Ch]
  int iBestOrbIndex_NoCastAttack; // [rsp+18h] [rbp-38h]
  int iBestOrbPriority_NoCastAttack; // [rsp+1Ch] [rbp-34h]

  m_pOrb = pRecord->m_pOrb;
  if ( m_pOrb == 0 )
    return 0;
  if ( (*(m_pOrb->_vptr_CDOTA_Orb + 4))(m_pOrb) == 3 )
  {
    v6 = ((*(pRecord->m_pOrb->_vptr_CDOTA_Orb + 4))(pRecord->m_pOrb) == 2) + 2;
  }
  else
  {
    if ( (*(pRecord->m_pOrb->_vptr_CDOTA_Orb + 4))(pRecord->m_pOrb) != 2 )
      return 0;
    v6 = 3;
  }
  if ( this->m_bufflist.m_Size <= 0 )
    return 0;
  v7 = 0;
  iBestOrbPriority_NoCastAttack = 0;
  iBestOrbIndex_NoCastAttack = -1;
  iBestOrbPriority_CastAttack = 0;
  iBestOrbIndex_CastAttack = -1;
  do
  {
    while ( 1 )
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(this, v7, 0);
      v9 = BuffByIndex;
      if ( BuffByIndex != 0 && v6 == (*(BuffByIndex->_vptr_CDOTA_Buff + 51))(BuffByIndex, pRecord) )
      {
        iOrbPriority = (*(v9->_vptr_CDOTA_Buff + 50))(v9, pRecord);
        if ( (*(v9->_vptr_CDOTA_Buff + 82))(v9) != 0 && iBestOrbPriority_CastAttack < iOrbPriority )
        {
          iBestOrbPriority_CastAttack = iOrbPriority;
          iBestOrbIndex_CastAttack = v7;
        }
        if ( iOrbPriority > iBestOrbPriority_NoCastAttack )
          break;
      }
      if ( ++v7 >= this->m_bufflist.m_Size )
        goto LABEL_16;
    }
    iBestOrbIndex_NoCastAttack = v7++;
    iBestOrbPriority_NoCastAttack = iOrbPriority;
  }
  while ( v7 < this->m_bufflist.m_Size );
LABEL_16:
  if ( pRecord->m_bUseCastAttackOrb && iBestOrbIndex_CastAttack != -1 )
  {
    v10 = iBestOrbIndex_CastAttack;
  }
  else
  {
    v10 = iBestOrbIndex_NoCastAttack;
    if ( iBestOrbIndex_NoCastAttack == -1 )
      return 0;
  }
  v11 = CDOTA_ModifierManager::GetBuffByIndex(this, v10, 0);
  return (*(v11->_vptr_CDOTA_Buff + 49))(v11, pRecord);
}


// CDOTA_ModifierManager::FindAllModifiers  (line 1107, @0x000000000261dfc0, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_Buff*>, Element, GrowMemory, operator[]
// calls: CDOTA_ModifierManager::GetBuffByIndex, CUtlMemory<CDOTA_Buff*, int>::Grow
// callers: CDOTA_BaseNPC::Script_FindAllModifiers
void __fastcall CDOTA_ModifierManager::FindAllModifiers(
        CDOTA_ModifierManager *const this,
        CUtlVector<CDOTA_Buff*,CUtlMemory<CDOTA_Buff*,int> > *pBuffs)
{
  CUtlVectorBase<CDOTA_Buff*,CUtlMemory<CDOTA_Buff*,int> >::CAllocator *p_m_Memory; // r15
  int i; // ebx
  CDOTA_Buff **v6; // rdx
  CDOTA_Buff *BuffByIndex; // rax
  __int64 m_Size; // r13
  int v9; // edx
  CDOTA_Buff *pBuff; // [rsp+8h] [rbp-38h]

  p_m_Memory = &pBuffs->m_Memory;
  for ( i = 0; i < this->m_bufflist.m_Size; ++i )
  {
    BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(this, i, 0);
    if ( BuffByIndex != 0 )
    {
      m_Size = pBuffs->m_Size;
      v9 = pBuffs->m_Size;
      if ( m_Size == pBuffs->m_Memory.m_nAllocationCount )
      {
        pBuff = BuffByIndex;
        CUtlMemory<CDOTA_Buff *,int>::Grow(p_m_Memory, 1);
        v9 = pBuffs->m_Size;
        BuffByIndex = pBuff;
      }
      pBuffs->m_Size = v9 + 1;
      v6 = &pBuffs->m_Memory.m_pMemory[m_Size];
      if ( v6 != 0 )
        *v6 = BuffByIndex;
    }
  }
}


// CDOTA_ModifierManager::FindModifiersOfName  (line 1119, @0x000000000261e060, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_Buff*>, Element, FStrEq, GetName, GrowMemory, String, ToCStr, _V_strcmp, operator[]
// calls: CDOTA_ModifierManager::GetBuffByIndex, strcmp, CUtlMemory<CDOTA_Buff*, int>::Grow
// callers: CDOTA_Item_DataDriven::RefreshIntrinsicModifier, CDOTA_Item_DataDriven::OnUnequip, CDOTA_BaseNPC::Script_FindAllModifiersByName, CDOTA_Ability_DeathProphet_Exorcism::OnSpellStart
void __fastcall CDOTA_ModifierManager::FindModifiersOfName(
        CDOTA_ModifierManager *const this,
        const char *pszModifierName,
        CUtlVector<CDOTA_Buff*,CUtlMemory<CDOTA_Buff*,int> > *pBuffs)
{
  int v6; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v8; // r15
  const char *m_pAsString; // rsi
  __int64 m_Size; // rax
  int v11; // ecx
  CDOTA_Buff **v12; // rax
  int v13; // [rsp+4h] [rbp-3Ch]
  CUtlVectorBase<CDOTA_Buff*,CUtlMemory<CDOTA_Buff*,int> >::CAllocator *i; // [rsp+8h] [rbp-38h]

  v6 = 0;
  for ( i = &pBuffs->m_Memory; v6 < this->m_bufflist.m_Size; ++v6 )
  {
    while ( 1 )
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(this, v6, 0);
      v8 = BuffByIndex;
      if ( BuffByIndex != 0 )
      {
        m_pAsString = BuffByIndex->m_name.u.m_pAsString;
        if ( m_pAsString == 0 )
          m_pAsString = "";
        if ( pszModifierName == m_pAsString || strcmp(pszModifierName, m_pAsString) == 0 )
        {
          m_Size = pBuffs->m_Size;
          if ( m_Size == pBuffs->m_Memory.m_nAllocationCount )
          {
            v13 = pBuffs->m_Size;
            CUtlMemory<CDOTA_Buff *,int>::Grow(i, 1);
            v11 = pBuffs->m_Size;
            m_Size = v13;
          }
          else
          {
            v11 = pBuffs->m_Size;
          }
          pBuffs->m_Size = v11 + 1;
          v12 = &pBuffs->m_Memory.m_pMemory[m_Size];
          if ( v12 != 0 )
            break;
        }
      }
      if ( ++v6 >= this->m_bufflist.m_Size )
        return;
    }
    *v12 = v8;
  }
}


// CDOTA_ModifierManager::RemoveAllModifiers  (line 1135, @0x00000000026162b0, libserver.so)  // inlines: Destroy, FinalDestroy
// calls: CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::Destroy, CDOTA_Buff::FinalDestroy
// callers: CDOTA_ProjectileManager::FinishTrackingProjectile, CDOTA_ProjectileManager::InternalDestroyLinearProjectile, CDOTA_BaseNPC::Event_Killed, CDOTA_Modifier_AncientApparition_IceBlast::OnIntervalThink
void __fastcall CDOTA_ModifierManager::RemoveAllModifiers(
        CDOTA_ModifierManager *const this,
        int targets,
        bool bNow,
        bool bPermanent,
        bool bDeath)
{
  int v8; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v10; // r15
  int v11; // ebx
  CDOTA_Buff *v12; // rax

  v8 = this->m_bufflist.m_Size - 1;
  if ( v8 >= 0 )
  {
    while ( 1 )
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(this, v8, 0);
      v10 = BuffByIndex;
      if ( BuffByIndex != 0
        && (targets == 0
         || ((*(BuffByIndex->_vptr_CDOTA_Buff + 12))(BuffByIndex) == 0 || targets != 2)
         && ((*(v10->_vptr_CDOTA_Buff + 12))(v10) != 0 || targets != 1))
        && ((*(v10->_vptr_CDOTA_Buff + 23))(v10) == 0 || bPermanent) )
      {
        if ( bDeath )
          break;
        if ( (*(v10 + 138) & 4) == 0 )
          goto LABEL_18;
      }
LABEL_12:
      if ( --v8 == -1 )
        goto LABEL_13;
    }
    if ( (*(v10->_vptr_CDOTA_Buff + 54))(v10) == 0 || (*(v10 + 138) & 4) != 0 )
      goto LABEL_12;
LABEL_18:
    CDOTA_Buff::Destroy(v10, 0, 0, 0);
    goto LABEL_12;
  }
LABEL_13:
  if ( bNow && this->m_iLockRefCount <= 0 )
  {
    v11 = this->m_bufflist.m_Size - 1;
    if ( v11 >= 0 )
    {
      do
      {
        v12 = CDOTA_ModifierManager::GetBuffByIndex(this, v11, 1);
        if ( v12 != 0 && (*(v12 + 138) & 4) != 0 )
          CDOTA_Buff::FinalDestroy(v12);
        --v11;
      }
      while ( v11 != -1 );
    }
  }
}


// CDOTA_ModifierManager::Think  (line 1179, @0x0000000002615fe0, libserver.so)  // inlines: FinalDestroy, GetName, Lock, String, ToCStr, Unlock
// calls: CDOTA_Buff::OnThink, CDOTA_Buff::OnCheckLifetime, CDOTA_Buff::FinalDestroy, UTIL_ClientPrintAll, CDOTA_ModifierManager::GetBuffByIndex, Msg
// callers: CDOTA_BaseNPC::ModifierManagerThink, CDOTA_BaseNPC::UnitThink
// strings: "HEY! Leaving modifier think with a locked modifier manager!\n"
void __fastcall CDOTA_ModifierManager::Think(CDOTA_ModifierManager *const this)
{
  int v2; // edx
  CDOTA_Buff **m_pMemory; // rax
  unsigned __int64 v4; // r15
  __int64 v5; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  int m_iLockRefCount; // eax
  __int64 i; // rbx
  __int64 v10; // rdi
  int v11; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  const char *m_pAsString; // rsi
  __int64 v14; // [rsp+8h] [rbp-38h]

  v2 = this->m_bufflist.m_Size - 1;
  if ( v2 >= 0 )
  {
    m_pMemory = this->m_bufflist.m_Memory.m_pMemory;
    v4 = 8 * (v2 - v2);
    v14 = 8LL * v2;
    v5 = v14;
    v6 = v4 - 8;
    while ( 1 )
    {
      v7 = *(m_pMemory + v5);
      if ( v7 == 0 || (*(v7 + 138) & 4) != 0 )
      {
        v5 -= 8;
        if ( v5 == v6 )
          goto LABEL_9;
      }
      else
      {
        ++this->m_iLockRefCount;
        CDOTA_Buff::OnThink(v7);
        CDOTA_Buff::OnCheckLifetime(v7);
        m_iLockRefCount = this->m_iLockRefCount;
        if ( m_iLockRefCount > 0 )
          this->m_iLockRefCount = m_iLockRefCount - 1;
        v5 -= 8;
        m_pMemory = this->m_bufflist.m_Memory.m_pMemory;
        if ( v5 == v6 )
        {
LABEL_9:
          for ( i = v14; ; i -= 8 )
          {
            v10 = *(m_pMemory + i);
            if ( v10 != 0 && (*(v10 + 138) & 4) != 0 )
            {
              CDOTA_Buff::FinalDestroy(v10);
              if ( i == v4 )
                goto LABEL_15;
            }
            else if ( i == v4 )
            {
              goto LABEL_15;
            }
            m_pMemory = this->m_bufflist.m_Memory.m_pMemory;
          }
        }
      }
    }
  }
LABEL_15:
  if ( this->m_iLockRefCount > 0 )
  {
    UTIL_ClientPrintAll(3, "HEY! Leaving modifier think with a locked modifier manager!\n", 0, 0, 0, 0);
    if ( this->m_bufflist.m_Size > 0 )
    {
      v11 = 0;
      do
      {
        BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(this, v11, 0);
        if ( BuffByIndex != 0 )
        {
          m_pAsString = "";
          if ( BuffByIndex->m_name.u.m_Id != 0 )
            m_pAsString = BuffByIndex->m_name.u.m_pAsString;
          Msg("%s\n", m_pAsString);
        }
        ++v11;
      }
      while ( v11 < this->m_bufflist.m_Size );
    }
  }
}


// CDOTA_ModifierManager::FindModifierByName  (line 1244, @0x00000000025f22f0, libserver.so)  // inlines: FStrEq, GetName, String, ToCStr, _V_strcmp
// calls: CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::GetCaster, strcmp
// callers: CDOTA_ModifierManager::AddNewModifier, CDOTA_Bot_AbilityUsage_Mekansm::GetCurrentUsageDesire, CDOTA_BaseNPC_Creep_Neutral::CanAcceptTargetToAttack, CDOTA_BaseNPC::Script_FindModifierByName, CDOTA_BaseNPC::Script_FindModifierByNameAndCaster, CDOTA_BaseNPC::Script_RemoveModifierByNameAndCaster, CDOTA_BaseNPC::Script_SetModifierStackCount, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC_Hero::HandleKillEaterKills, CDOTA_BaseNPC_HallofFame::SetGlowEnabled, CDOTA_BaseNPC_Building::OnTakeDamage_Alive, DamageImpact (39 total)
CDOTA_Buff *__fastcall CDOTA_ModifierManager::FindModifierByName(
        CDOTA_ModifierManager *const this,
        IModifierFactory *pFactory,
        const char *pName,
        CBaseEntity *pCaster)
{
  int v7; // r14d
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v9; // r15
  const char *m_pAsString; // rdi
  int m_Size; // r14d
  int v13; // r13d
  CDOTA_Buff *v14; // rax
  const char *v15; // rdi

  if ( pFactory != 0 )
  {
    v7 = 0;
    if ( this->m_bufflist.m_Size <= 0 )
      return 0;
    while ( 1 )
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(this, v7, 0);
      v9 = BuffByIndex;
      if ( BuffByIndex != 0
        && pFactory == BuffByIndex->m_pFactory
        && (pCaster == 0 || pCaster == CDOTA_Buff::GetCaster(BuffByIndex)) )
      {
        if ( (*(v9->_vptr_CDOTA_Buff + 66))(v9) == 0 )
          break;
        m_pAsString = v9->m_name.u.m_pAsString;
        if ( m_pAsString == 0 )
          m_pAsString = "";
        if ( pName == m_pAsString || strcmp(m_pAsString, pName) == 0 )
          break;
      }
      if ( ++v7 >= this->m_bufflist.m_Size )
        return 0;
    }
    return v9;
  }
  m_Size = this->m_bufflist.m_Size;
  if ( m_Size > 0 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = CDOTA_ModifierManager::GetBuffByIndex(this, v13, 0);
      v9 = v14;
      if ( v14 != 0 && (pCaster == 0 || pCaster == CDOTA_Buff::GetCaster(v14)) )
      {
        v15 = v9->m_name.u.m_pAsString;
        if ( v15 == 0 )
          v15 = "";
        if ( pName == v15 || strcmp(v15, pName) == 0 )
          break;
      }
      if ( ++v13 == m_Size )
        return 0;
    }
    return v9;
  }
  return 0;
}


// CDOTA_ModifierManager::FindBuffByInternalIndex  (line 1278, @0x00000000025f2440, libserver.so)
// calls: CDOTA_ModifierManager::GetBuffByIndex
// callers: CDOTAGamerules::ClientMsg_ClickedBuff, CDOTAGamerules::ClientMsg_ModifierAlert, IsBuffVisibleToPlayer
CDOTA_Buff *__fastcall CDOTA_ModifierManager::FindBuffByInternalIndex(CDOTA_ModifierManager *const this, int iIndex)
{
  int m_Size; // r13d
  int v5; // ebx
  CDOTA_Buff *result; // rax

  m_Size = this->m_bufflist.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    result = CDOTA_ModifierManager::GetBuffByIndex(this, v5, 0);
    if ( result != 0 && result->m_iIndex == iIndex )
      break;
    if ( ++v5 == m_Size )
      return 0;
  }
  return result;
}


// CDOTA_ModifierManager::CheckAllStates  (line 1294, @0x0000000002620460, libserver.so)  // inlines: CDOTABuffState, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<long long unsigned int, CUtlMemoryFixedGrowable<long long unsigned int, 32ul, int> >::SetCount, CDOTA_ModifierManager::GetBuffByIndex, CUtlMemory<long long unsigned int, int>::Purge, __stack_chk_fail, CUtlVectorBase<long long unsigned int, CUtlMemoryFixedGrowable<long long unsigned int, 32ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BaseNPC::GatherStates
uint64 __fastcall CDOTA_ModifierManager::CheckAllStates(CDOTA_ModifierManager *const this, bool bDebuffsOnly)
{
  int m_Size; // r13d
  __int64 v4; // rbx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v6; // r12
  __int64 v7; // r12
  __int64 v8; // rbx
  int v9; // r15d
  CDOTA_Buff *v10; // rax
  int v11; // eax
  uint32 m_nGrowSize; // edx
  uint32 v13; // eax
  uint32 v14; // eax
  uint64 nEnableMask; // [rsp+18h] [rbp-2A8h]
  int v17; // [rsp+24h] [rbp-29Ch]
  uint64 nPriorityBits; // [rsp+28h] [rbp-298h]
  uint64 nPriorityBitsa; // [rsp+28h] [rbp-298h]
  bool bSet; // [rsp+30h] [rbp-290h]
  CDOTABuffState buffState; // [rsp+40h] [rbp-280h] BYREF
  CUtlVectorFixedGrowable<long long unsigned int,32ul> nEnableBits; // [rsp+50h] [rbp-270h] BYREF
  CUtlVectorFixedGrowable<long long unsigned int,32ul> nDisableBits; // [rsp+170h] [rbp-150h] BYREF
  unsigned __int64 v25; // [rsp+288h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  m_Size = this->m_bufflist.m_Size;
  nEnableBits.m_Memory.m_pMemory = nEnableBits.m_Memory.m_FixedMemory.m_Data;
  nEnableBits.m_Size = 0;
  nEnableBits.m_Memory.m_nAllocationCount = 32;
  nEnableBits.m_Memory.m_nGrowSize = 0x80000000;
  nDisableBits.m_Size = 0;
  nDisableBits.m_Memory.m_nAllocationCount = 32;
  nDisableBits.m_Memory.m_nGrowSize = 0x80000000;
  nDisableBits.m_Memory.m_pMemory = nDisableBits.m_Memory.m_FixedMemory.m_Data;
  CUtlVectorBase<unsigned long long,CUtlMemoryFixedGrowable<unsigned long long,32ul,int>>::SetCount(
    &nEnableBits,
    m_Size);
  CUtlVectorBase<unsigned long long,CUtlMemoryFixedGrowable<unsigned long long,32ul,int>>::SetCount(
    &nDisableBits,
    m_Size);
  if ( m_Size <= 0 )
  {
    nEnableMask = 0;
    goto LABEL_20;
  }
  v4 = 0;
  nPriorityBits = 0;
  nEnableMask = 0;
  do
  {
    while ( 1 )
    {
      nEnableBits.m_Memory.m_pMemory[v4] = 0;
      nDisableBits.m_Memory.m_pMemory[v4] = 0;
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(this, v4, 0);
      v6 = BuffByIndex;
      if ( BuffByIndex != 0 )
      {
        if ( bDebuffsOnly && (*(BuffByIndex->_vptr_CDOTA_Buff + 12))(BuffByIndex) == 0 )
          break;
        buffState.m_nEnabledStateMask = 0;
        buffState.m_nDisabledStateMask = 0;
        (*(v6->_vptr_CDOTA_Buff + 5))(v6, &buffState);
        nEnableBits.m_Memory.m_pMemory[v4] = buffState.m_nEnabledStateMask;
        nDisableBits.m_Memory.m_pMemory[v4] = buffState.m_nDisabledStateMask;
        nEnableMask |= buffState.m_nEnabledStateMask;
        nPriorityBits |= buffState.m_nDisabledStateMask;
      }
      if ( m_Size <= ++v4 )
        goto LABEL_9;
    }
    ++v4;
  }
  while ( m_Size > v4 );
LABEL_9:
  nPriorityBitsa = nEnableMask & nPriorityBits;
  if ( nPriorityBitsa != 0 )
  {
    v17 = 35;
    v7 = 1;
    do
    {
      if ( (v7 & nPriorityBitsa) != 0 )
      {
        v8 = 0;
        bSet = 1;
        v9 = -999;
        do
        {
          while ( 1 )
          {
            if ( (v7 & (nEnableBits.m_Memory.m_pMemory[v8] | nDisableBits.m_Memory.m_pMemory[v8])) != 0 )
            {
              v10 = CDOTA_ModifierManager::GetBuffByIndex(this, v8, 0);
              v11 = (*(v10->_vptr_CDOTA_Buff + 6))(v10);
              if ( v11 > v9 )
                break;
            }
            if ( m_Size <= ++v8 )
              goto LABEL_17;
          }
          v9 = v11;
          bSet = (v7 & nEnableBits.m_Memory.m_pMemory[v8++]) != 0;
        }
        while ( m_Size > v8 );
LABEL_17:
        if ( !bSet )
          nEnableMask &= ~v7;
      }
      v7 *= 2;
      --v17;
    }
    while ( v17 != 0 );
  }
LABEL_20:
  nDisableBits.m_Size = 0;
  if ( nDisableBits.m_Memory.m_nAllocationCount < 0 )
  {
    v13 = nDisableBits.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = nDisableBits.m_Memory.m_nGrowSize;
    v13 = nDisableBits.m_Memory.m_nGrowSize & 0xC0000000;
    if ( nDisableBits.m_Memory.m_pMemory != &nDisableBits.m_Memory.m_FixedMemory )
    {
      if ( nDisableBits.m_Memory.m_pMemory != 0 && v13 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = nDisableBits.m_Memory.m_nGrowSize;
      }
      nDisableBits.m_Memory.m_nAllocationCount = 32;
      nDisableBits.m_Memory.m_pMemory = nDisableBits.m_Memory.m_FixedMemory.m_Data;
      nDisableBits.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_26;
    }
  }
  if ( v13 == 0 )
    CUtlMemory<unsigned long long,int>::Purge(&nDisableBits.m_Memory);
LABEL_26:
  nEnableBits.m_Size = 0;
  v14 = nEnableBits.m_Memory.m_nGrowSize & 0xC0000000;
  if ( nEnableBits.m_Memory.m_nAllocationCount < 0
    || nEnableBits.m_Memory.m_pMemory == &nEnableBits.m_Memory.m_FixedMemory )
  {
    if ( v14 == 0 )
      CUtlMemory<unsigned long long,int>::Purge(&nEnableBits.m_Memory);
  }
  else if ( nEnableBits.m_Memory.m_pMemory != 0 && v14 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return nEnableMask;
}


// CDOTA_ModifierManager::GetHighestPriority  (line 1384, @0x00000000025f25c0, libserver.so)  // inlines: CDOTABuffState
// calls: CDOTA_ModifierManager::GetBuffByIndex
// callers: CDOTAFogOfWarSystem::UpdateFogOfWar, CDOTAFogOfWarSystem::AddFOWEntity, CDOTA_BaseNPC::ProvidesVision, CDOTA_BaseNPC::UpdateVisibility
int __fastcall CDOTA_ModifierManager::GetHighestPriority(
        CDOTA_ModifierManager *const this,
        modifierstate state,
        bool bDebuffsOnly)
{
  __int64 v3; // r13
  int v6; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v8; // r15
  int v10; // eax
  int iPriority; // [rsp+4h] [rbp-4Ch]
  CDOTABuffState buffState; // [rsp+10h] [rbp-40h] BYREF

  v3 = 1LL << state;
  iPriority = -999;
  if ( this->m_bufflist.m_Size > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(this, v6, 0);
      v8 = BuffByIndex;
      if ( BuffByIndex == 0 )
        goto LABEL_4;
      if ( !bDebuffsOnly || (*(BuffByIndex->_vptr_CDOTA_Buff + 12))(BuffByIndex) != 0 )
      {
        buffState.m_nEnabledStateMask = 0;
        buffState.m_nDisabledStateMask = 0;
        (*(v8->_vptr_CDOTA_Buff + 5))(v8, &buffState);
        if ( ((buffState.m_nEnabledStateMask | buffState.m_nDisabledStateMask) & v3) != 0 )
        {
          v10 = (*(v8->_vptr_CDOTA_Buff + 6))(v8);
          if ( iPriority >= v10 )
          {
            if ( iPriority > v10 )
              goto LABEL_4;
            v10 = iPriority;
          }
          iPriority = v10;
        }
LABEL_4:
        if ( ++v6 >= this->m_bufflist.m_Size )
          return iPriority;
      }
      else if ( ++v6 >= this->m_bufflist.m_Size )
      {
        return iPriority;
      }
    }
  }
  return iPriority;
}


// CDOTA_ModifierManager::SendBuffsToClients  (line 1426, @0x0000000002621620, libserver.so)
// calls: CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::SendBuffCreationToClients
// callers: CDOTA_BaseNPC::UpdateNetworkedTeamVisibility
void __fastcall CDOTA_ModifierManager::SendBuffsToClients(CDOTA_ModifierManager *const this, int iTeamBits)
{
  int v2; // r13d
  CDOTA_Buff *BuffByIndex; // r15
  int v4; // ebx
  unsigned int i; // r14d

  if ( iTeamBits != 0 && this->m_bufflist.m_Size > 0 )
  {
    v2 = 0;
    do
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(this, v2, 0);
      if ( BuffByIndex != 0 )
      {
        v4 = iTeamBits;
        for ( i = 2; i != 14; ++i )
        {
          if ( (*(BuffByIndex->_vptr_CDOTA_Buff + 9))(BuffByIndex, i) == 0 )
            v4 &= ~(1 << i);
        }
        CDOTA_Buff::SendBuffCreationToClients(BuffByIndex, v4, 1);
      }
      ++v2;
    }
    while ( v2 < this->m_bufflist.m_Size );
  }
}


// CDOTA_ModifierManager::GetBuffByIndex  (line 1457, @0x00000000025f1e60, libserver.so)  // inlines: IsValidIndex, operator[]
// callers: CDOTA_BaseNPC::HasInvisibilityBuff, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTA_BaseNPC::CalculateActivityModifiers, dota_modifier_dump, FireSingleModifierEvent, CDOTA_ModifierManager::HasTruesightForTeam, CDOTA_ModifierManager::GetModifier_GetFirstOrb, CDOTA_ModifierManager::GetModifier_GetSecondOrb, CDOTA_ModifierManager::FindModifierByName, CDOTA_ModifierManager::FindBuffByInternalIndex, CDOTA_ModifierManager::GetHighestPriority, CDOTA_ActiveModifiersList::ReplaceCasterWithCaster (47 total)
CDOTA_Buff *__fastcall CDOTA_ModifierManager::GetBuffByIndex(
        CDOTA_ModifierManager *const this,
        int iIndex,
        bool bIncludeMarked)
{
  CDOTA_Buff *result; // rax
  CDOTA_Buff *v4; // rcx

  result = 0;
  if ( iIndex >= 0 && iIndex < this->m_bufflist.m_Size )
  {
    v4 = this->m_bufflist.m_Memory.m_pMemory[iIndex];
    if ( v4 != 0 )
    {
      result = this->m_bufflist.m_Memory.m_pMemory[iIndex];
      if ( (*(v4 + 138) & 4) != 0 && !bIncludeMarked )
        return 0;
    }
  }
  return result;
}


// Modifier_Create_Test  (line 1476, @0x00000000025f26b0, libserver.so)  // inlines: ToDOTABaseNPC
// calls: UTIL_EntityByIndex, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::deleteThis, KeyValues::operator delete, _Unwind_Resume
// callers: CC_Modifier_Create_Test
void __fastcall Modifier_Create_Test(
        CBasePlayer *pPlayer,
        CEntityIndex iIndex,
        const char *pszModifierName,
        float flduration)
{
  CDOTA_BaseNPC *v6; // rbx
  KeyValues *v7; // r12
  float v8; // xmm1_4

  if ( pPlayer != 0 )
  {
    v6 = UTIL_EntityByIndex(iIndex);
    if ( (v6 != 0 || (v6 = (*(pPlayer->_vptr_IHandleEntity + 531))(pPlayer)) != 0) && v6->m_bIsDOTANPC )
    {
      v7 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v7, "modifier_test");
      KeyValues::SetFloat(v7, "duration", v8);
      CDOTA_BaseNPC::AddNewModifier(v6, v6, 0, pszModifierName, v7, 0);
      KeyValues::deleteThis(v7);
    }
  }
}


// CC_Modifier_Create_Test  (line 1501, @0x00000000025f2780, libserver.so)  // inlines: Arg, atof, atoi, operator[]
// calls: strtod, strtol, UTIL_GetCommandClient, Modifier_Create_Test
void __fastcall CC_Modifier_Create_Test(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdi
  float v4; // xmm0_4
  const char *v5; // r12
  const char *v6; // rdi
  CEntityIndex v7; // ebx
  CBasePlayer *CommandClient; // rax
  float v9; // [rsp+Ch] [rbp-14h]

  v2 = "";
  if ( args->m_nArgc > 3 )
    v2 = args->m_ppArgv[3];
  v4 = strtod(v2, 0);
  if ( args->m_nArgc <= 2 )
  {
    v5 = "";
    if ( args->m_nArgc != 2 )
    {
      v6 = "";
      goto LABEL_6;
    }
  }
  else
  {
    v5 = args->m_ppArgv[2];
  }
  v6 = args->m_ppArgv[1];
LABEL_6:
  v9 = v4;
  v7.m_Data = strtol(v6, 0, 10);
  CommandClient = UTIL_GetCommandClient();
  Modifier_Create_Test(CommandClient, v7, v5, v9);
}


// CDOTA_ActiveModifiersList::ReplaceCasterWithCaster  (line 1511, @0x00000000025f2810, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetCaster, operator=
// calls: CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::GetCaster
// callers: CDOTA_PlayerResource::OnHeroReplaced, Playtesting_ChangeToRandomHero
void __fastcall CDOTA_ActiveModifiersList::ReplaceCasterWithCaster(
        CDOTA_ActiveModifiersList *const this,
        CBaseEntity *pOldCaster,
        CBaseEntity *pNewCaster)
{
  CDOTA_ModifierManager **m_pMemory; // r12
  __int64 v5; // r13
  CDOTA_ModifierManager *v6; // rdi
  int v7; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v9; // r15
  CEntityIdentity *m_pEntity; // rcx
  int v11; // eax
  __int16 v12; // si
  int i; // [rsp+4h] [rbp-3Ch]

  if ( this->m_modifiers.m_Size > 0 )
  {
    m_pMemory = this->m_modifiers.m_Memory.m_pMemory;
    v5 = 0;
    i = 0;
    while ( 1 )
    {
      v6 = m_pMemory[v5];
      if ( v6->m_bufflist.m_Size > 0 )
        break;
LABEL_13:
      ++i;
      ++v5;
      if ( this->m_modifiers.m_Size <= i )
        return;
    }
    v7 = 0;
    while ( 1 )
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(v6, v7, 0);
      v9 = BuffByIndex;
      if ( BuffByIndex == 0 || CDOTA_Buff::GetCaster(BuffByIndex) != pOldCaster )
        goto LABEL_5;
      if ( pNewCaster != 0 && (m_pEntity = pNewCaster->m_pEntity) != 0 )
      {
        v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v12 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        ++v7;
        LOWORD(v9->m_hCaster.m_Index) = v12 | v9->m_hCaster.m_Index & 0x8000;
        v9->m_hCaster.m_Index = (v11 << 15) | v9->m_hCaster.m_Index & 0x7FFF;
        m_pMemory = this->m_modifiers.m_Memory.m_pMemory;
        v6 = m_pMemory[v5];
        if ( v7 >= v6->m_bufflist.m_Size )
          goto LABEL_13;
      }
      else
      {
        v9->m_hCaster.m_Index = -1;
        m_pMemory = this->m_modifiers.m_Memory.m_pMemory;
LABEL_5:
        v6 = m_pMemory[v5];
        if ( ++v7 >= v6->m_bufflist.m_Size )
          goto LABEL_13;
      }
    }
  }
}


// CDOTA_ModifierManager::SetParent  (line 1527, @0x00000000025f2950, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// callers: CDOTA_BaseNPC::InitialSpawn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_ModifierManager::SetParent(CDOTA_ModifierManager *const this, CBaseEntity *pParent)
{
  CBaseEntity *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx

  m_pInstance = 0;
  m_Index = this->m_hModifierParent.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hModifierParent.m_Value.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hModifierParent.m_Value.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( pParent != m_pInstance )
  {
    (*(this->_vptr_CDOTA_ModifierManager + 2))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( pParent != 0 && (m_pEntity = pParent->m_pEntity) != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v10 = 0x7FFF;
      else
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hModifierParent.m_Value.m_Index) = v10 | this->m_hModifierParent.m_Value.m_Index & 0x8000;
      this->m_hModifierParent.m_Value.m_Index = (v9 << 15) | this->m_hModifierParent.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hModifierParent.m_Value.m_Index = -1;
    }
  }
}


// CDOTA_ModifierManager::Unlock  (line 1532, @0x00000000025f2a60, libserver.so)
// callers: CDOTA_BaseNPC::Script_AddNewModifier, CDOTA_BaseNPC::AddNewModifier
void __fastcall CDOTA_ModifierManager::Unlock(CDOTA_ModifierManager *const this)
{
  int m_iLockRefCount; // eax

  m_iLockRefCount = this->m_iLockRefCount;
  if ( m_iLockRefCount > 0 )
    this->m_iLockRefCount = m_iLockRefCount - 1;
}


// CDOTA_ModifierManager::Lock  (line 1542, @0x00000000025f2a80, libserver.so)
// callers: CDOTA_BaseNPC::Script_AddNewModifier, CDOTA_BaseNPC::AddNewModifier
void __fastcall CDOTA_ModifierManager::Lock(CDOTA_ModifierManager *const this)
{
  ++this->m_iLockRefCount;
}


