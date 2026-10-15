// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/entity_components/game/damage/damage.cpp:17
class CEntityComponentHelperFactory_CDamageComponent : CEntityComponentHelpers {
	CEntityComponentHelperFactory_CDamageComponent();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDamageComponent::GetEntComponentInfo  (line 17, @0x00000000021a15d0, libserver.so)  // inlines: HashStringFastCaseless, HashToShort
// calls: __cxa_guard_acquire, HashString, MurmurHash2LowerCase, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperInit_CDamageComponent
// strings: "CDamageComponent", "CDamageComponentReferenced", "CDamageComponentReferencedPtr"
// globals: CDamageComponent::s_EntComponentInfo, `guard variable for'CDamageComponent::GetEntComponentInfo(void)::UUID_CDamageComponent, CDamageComponent::GetEntComponentInfo(void)::UUID_CDamageComponent
EntComponentInfo_t *__cdecl CDamageComponent::GetEntComponentInfo()
{
  unsigned int v1; // eax
  uint32 v2; // eax

  if ( CDamageComponent::s_EntComponentInfo.m_pName != 0 )
    return &CDamageComponent::s_EntComponentInfo;
  if ( `guard variable for'CDamageComponent::GetEntComponentInfo(void)::UUID_CDamageComponent == 0
    && __cxa_guard_acquire(&`guard variable for'CDamageComponent::GetEntComponentInfo(void)::UUID_CDamageComponent) != 0 )
  {
    CDamageComponent::GetEntComponentInfo(void)::UUID_CDamageComponent.Data1 = 1857198187;
    v1 = HashString("CDamageComponent");
    CDamageComponent::GetEntComponentInfo(void)::UUID_CDamageComponent.Data2 = HIWORD(v1) ^ v1;
    v2 = MurmurHash2LowerCase("CDamageComponent", 0x3501A674u);
    CDamageComponent::GetEntComponentInfo(void)::UUID_CDamageComponent.Data3 = HIWORD(v2) ^ v2;
    __cxa_guard_release(&`guard variable for'CDamageComponent::GetEntComponentInfo(void)::UUID_CDamageComponent);
  }
  CDamageComponent::s_EntComponentInfo.m_nRuntimeIndex = -1;
  CDamageComponent::s_EntComponentInfo.m_nFlags = 1;
  CDamageComponent::s_EntComponentInfo.m_id = CDamageComponent::GetEntComponentInfo(void)::UUID_CDamageComponent;
  CDamageComponent::s_EntComponentInfo.m_pName = "DamageComponent";
  CDamageComponent::s_EntComponentInfo.m_pCPPClassname = "CDamageComponent";
  CDamageComponent::s_EntComponentInfo.m_pNetworkDataReferencedDescription = "CDamageComponentReferenced";
  CDamageComponent::s_EntComponentInfo.m_pNetworkDataReferencedPtrPropDescription = "CDamageComponentReferencedPtr";
  return &CDamageComponent::s_EntComponentInfo;
}


// CEntityComponentHelperInit_CDamageComponent  (line 17, @0x00000000021a16f0, libserver.so)  // inlines: CEntityComponentHelper, CEntityComponentHelperContained, CEntityComponentHelperT, GetBaseComponentHelper, SetPriority
// calls: CDamageComponent::GetEntComponentInfo, CEntityComponentHelperInit_CEntityComponent, __cxa_guard_acquire, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperFactory_CDamageComponent::CEntityComponentHelperFactory_CDamageComponent, _GLOBAL__sub_I__unity_base_02.cpp
// globals: `guard variable for'CEntityComponentHelperInit_CDamageComponent(void)::componentHelper, CEntityComponentHelperInit_CDamageComponent(void)::s_bIsInitialized, CEntityComponentHelperInit_CDamageComponent(void)::componentHelper
CEntityComponentHelper *__cdecl CEntityComponentHelperInit_CDamageComponent()
{
  EntComponentInfo_t *EntComponentInfo; // rbx
  CEntityComponentHelper *inited; // rax

  if ( `guard variable for'CEntityComponentHelperInit_CDamageComponent(void)::componentHelper == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityComponentHelperInit_CDamageComponent(void)::componentHelper) != 0 )
  {
    CEntityComponentHelperInit_CDamageComponent(void)::componentHelper.m_flags = 0;
    CEntityComponentHelperInit_CDamageComponent(void)::componentHelper.m_pInfo = 0;
    CEntityComponentHelperInit_CDamageComponent(void)::componentHelper.m_nPriority = 0;
    CEntityComponentHelperInit_CDamageComponent(void)::componentHelper._vptr_CEntityComponentHelper = &off_40145D0;
    CEntityComponentHelperInit_CDamageComponent(void)::componentHelper.m_pInfo = CDamageComponent::GetEntComponentInfo();
    CEntityComponentHelperInit_CDamageComponent(void)::componentHelper.m_bFinalized = 0;
    __cxa_guard_release(&`guard variable for'CEntityComponentHelperInit_CDamageComponent(void)::componentHelper);
  }
  if ( !CEntityComponentHelperInit_CDamageComponent(void)::s_bIsInitialized )
  {
    CEntityComponentHelperInit_CDamageComponent(void)::s_bIsInitialized = 1;
    EntComponentInfo = CDamageComponent::GetEntComponentInfo();
    inited = CEntityComponentHelperInit_CEntityComponent();
    EntComponentInfo->m_pScriptClassDesc = 0;
    EntComponentInfo->m_pBaseClassComponentHelper = inited;
    CEntityComponentHelperInit_CDamageComponent(void)::componentHelper.m_nPriority = 0;
  }
  return &CEntityComponentHelperInit_CDamageComponent(void)::componentHelper;
}


// CEntityComponentHelperFactory_CDamageComponent::CEntityComponentHelperFactory_CDamageComponent  (line 17, @0x00000000021a17d0, libserver.so)  // inlines: AddToList
// calls: CEntityComponentHelperInit_CDamageComponent
// globals: CEntityComponentHelpers::GetList(void)::g_pList
void __fastcall CEntityComponentHelperFactory_CDamageComponent::CEntityComponentHelperFactory_CDamageComponent(
        CEntityComponentHelperFactory_CDamageComponent *const this)
{
  CEntityComponentHelper *inited; // rax
  CEntityComponentHelper *v2; // rdx

  inited = CEntityComponentHelperInit_CDamageComponent();
  v2 = CEntityComponentHelpers::GetList(void)::g_pList;
  CEntityComponentHelpers::GetList(void)::g_pList = inited;
  inited->m_pNext = v2;
}


// CDamageComponent::ClearHandlers  (line 23, @0x00000000021a17f0, libserver.so)  // inlines: RemoveAll
// callers: CSchemaClassBinding<CDamageComponent>::DestructInPlace, CSchemaClassBinding<CDamageComponent>::Deallocate, CSchemaClassBinding<CDamageComponent>::ConstructInPlace, CSchemaClassBinding<CDamageComponent>::Allocate, CSchemaClassBinding<CDamageComponent>::AllocateAndCopyConstruct
void __fastcall CDamageComponent::ClearHandlers(CDamageComponent *const this)
{
  this->m_DamageHandlers.m_Size = 0;
}


// CDamageComponent::TakeDamage  (line 30, @0x00000000021a1800, libserver.so)  // inlines: Attribute_GetIntValue, Attribute_GetValue<int>, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, Compare, EntGetDamageOptions, FindEntry_Inline, Find_Inline, GetEntityAttributes, GetIntValue, GetValue<int>, Hash, Head, SetDamageTaken
// calls: operator new
// callers: CBaseEntity::EntTakeDamageS1PortHack
// globals: g_EntAttrDamageOptionsID
int __fastcall CDamageComponent::TakeDamage(
        CDamageComponent *const this,
        CEntityInstance *pEnt,
        CTakeDamageInfo *const info)
{
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // r15
  uint32 v7; // r13d
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v8; // r11
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *m_pHead; // rax
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *v10; // rdi
  int v11; // edx
  int m_key; // ecx
  __int64 m_value; // rdx
  unsigned int v14; // ecx
  __int64 v15; // r15
  int v16; // r13d
  __int64 v18; // r13
  int v19; // r15d
  IDamageHandler *v20; // rdi
  __int64 v21; // r15
  int v22; // r13d
  IDamageHandler *pHandler; // rdi
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v24; // rax
  int damageOption; // [rsp+8h] [rbp-38h]
  char damageOptiona; // [rsp+8h] [rbp-38h]
  int damageOptionb; // [rsp+8h] [rbp-38h]
  CEntityIdentity *damageOptionc; // [rsp+8h] [rbp-38h]

  if ( pEnt != 0 )
  {
    m_pAttributes = pEnt->m_pEntity->m_pAttributes;
    v7 = g_EntAttrDamageOptionsID.m_nHashCode & 0x7FFFFFF;
    if ( m_pAttributes == 0 )
    {
      damageOptionc = pEnt->m_pEntity;
      v24 = operator new(0x38u);
      v24->m_hashTable.m_tables.m_pHead = 0;
      m_pAttributes = v24;
      v24->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
      v24->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
      v24->m_hashTable.m_nNumKeysDeleted = 0;
      v24->m_hashTable.m_nCurrentTableSize = 64;
      v24->m_hashTable.m_nDeletedKeyValue = -1;
      v24->m_hashTable.m_nEmptyKeyValue = -2;
      v24->m_pParentTable = 0;
      damageOptionc->m_pAttributes = v24;
    }
    v8 = m_pAttributes;
    damageOption = m_pAttributes->m_hashTable.m_nCurrentTableSize;
    m_pHead = m_pAttributes->m_hashTable.m_tables.m_pHead;
    while ( 2 )
    {
      while ( 1 )
      {
        v10 = m_pHead;
        if ( m_pHead != 0 )
          break;
LABEL_22:
        v8 = v8->m_pParentTable;
        if ( v8 == 0 )
          return 0;
        damageOption = v8->m_hashTable.m_nCurrentTableSize;
        m_pHead = v8->m_hashTable.m_tables.m_pHead;
      }
LABEL_6:
      v11 = (damageOption - 1) & v7;
      while ( 1 )
      {
        m_key = v10->m_entries[v11].m_key;
        if ( ((m_key ^ v7) & 0x7FFFFFF) == 0 )
          break;
        if ( m_key != v8->m_hashTable.m_nEmptyKeyValue )
        {
          v11 = (damageOption - 1) & (v11 + 1);
          if ( ((damageOption - 1) & v7) != v11 )
            continue;
        }
        v10 = v10->m_pNext;
        if ( v10 != 0 )
          goto LABEL_6;
        goto LABEL_22;
      }
      m_value = v10->m_entries[v11].m_value;
      if ( m_key < 0 )
      {
        LODWORD(m_value) = *(&m_pAttributes->m_pOwningObject->m_pInstance + m_value);
      }
      else if ( v7 != m_key )
      {
        v14 = m_key & 0xF8000000;
        if ( v14 != 0 )
        {
          if ( v14 != 0x8000000 )
            continue;
          LODWORD(m_value) = *&m_value;
        }
      }
      break;
    }
    damageOptiona = m_value;
    if ( m_value != 0 )
    {
      if ( this->m_DamageHandlers.m_Size <= 0 )
      {
LABEL_27:
        if ( damageOptiona == 1 )
        {
          damageOptionb = 0;
        }
        else
        {
          damageOptionb = (*(pEnt->_vptr_IHandleEntity + 158))(pEnt, info);
          info->m_nDamageTaken = damageOptionb;
        }
        if ( this->m_DamageHandlers.m_Size > 0 )
        {
          v21 = 0;
          v22 = 0;
          do
          {
            ++v22;
            pHandler = this->m_DamageHandlers.m_Memory.m_pMemory[v21++].pHandler;
            (*(pHandler->_vptr_IDamageHandler + 3))(pHandler, pEnt, info);
          }
          while ( this->m_DamageHandlers.m_Size > v22 );
        }
        return damageOptionb;
      }
      v15 = 0;
      v16 = 0;
      while ( (*(this->m_DamageHandlers.m_Memory.m_pMemory[v15].pHandler->_vptr_IDamageHandler + 1))(
                this->m_DamageHandlers.m_Memory.m_pMemory[v15].pHandler,
                pEnt,
                info) == 0 )
      {
        ++v16;
        ++v15;
        if ( this->m_DamageHandlers.m_Size <= v16 )
        {
          if ( this->m_DamageHandlers.m_Size > 0 )
          {
            v18 = 0;
            v19 = 0;
            do
            {
              ++v19;
              v20 = this->m_DamageHandlers.m_Memory.m_pMemory[v18++].pHandler;
              (*(v20->_vptr_IDamageHandler + 2))(v20, pEnt, info);
            }
            while ( this->m_DamageHandlers.m_Size > v19 );
          }
          goto LABEL_27;
        }
      }
    }
  }
  return 0;
}


// CDamageComponent::RegisterDamageHandler  (line 83, @0x00000000021b05d0, libserver.so)  // inlines: Element, FindLessOrEqual<sDamageHandlerInfo>, Insert, operator[], sDamageHandlerInfo
// calls: CUtlVectorBase<sDamageHandlerInfo, CUtlMemory<sDamageHandlerInfo, int> >::InsertBefore, AssertMsg_ConditionFailed
// globals: CUtlSortVector<sDamageHandlerInfo,DamageHandlerPriorityLess,CUtlVector<sDamageHandlerInfo,CUtlMemory<sDamageHandlerInfo,int>>>::Insert(sDamageHandlerInfo const&, CUtlSortVector<sDamageHandlerInfo,DamageHandlerPriorityLess,CUtlVector<sDamageHandlerInfo,CUtlMemory<sDamageHandlerInfo,int>>>::FindLessOrEqual<sDamageHandlerIn
void __fastcall CDamageComponent::RegisterDamageHandler(
        CDamageComponent *const this,
        IDamageHandler *pHandler,
        int priority)
{
  bool v4; // zf
  int v5; // esi
  sDamageHandlerInfo *m_pMemory; // r9
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rdx
  IDamageHandler *pHandlera; // [rsp+0h] [rbp-20h] BYREF
  int v11; // [rsp+8h] [rbp-18h]

  pHandlera = pHandler;
  v4 = !this->m_DamageHandlers.m_bNeedsSort;
  v11 = priority;
  if ( !v4 )
  {
    if ( AssertMsg_ConditionFailed(
           &CUtlSortVector<sDamageHandlerInfo,DamageHandlerPriorityLess,CUtlVector<sDamageHandlerInfo,CUtlMemory<sDamageHandlerInfo,int>>>::Insert(sDamageHandlerInfo const&)::_assertionConstants,
           0) != 0 )
      __debugbreak();
    if ( this->m_DamageHandlers.m_bNeedsSort
      && AssertMsg_ConditionFailed(
           &CUtlSortVector<sDamageHandlerInfo,DamageHandlerPriorityLess,CUtlVector<sDamageHandlerInfo,CUtlMemory<sDamageHandlerInfo,int>>>::FindLessOrEqual<sDamageHandlerInfo>(sDamageHandlerInfo const&,bool *)const::_assertionConstants,
           0) != 0 )
    {
      __debugbreak();
    }
  }
  v5 = this->m_DamageHandlers.m_Size - 1;
  if ( v5 >= 0 )
  {
    m_pMemory = this->m_DamageHandlers.m_Memory.m_pMemory;
    v7 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (v7 + v5) >> 1;
        v9 = v8;
        if ( m_pMemory[v9].priority >= v11 )
          break;
        v7 = v8 + 1;
        if ( v5 < v8 + 1 )
          goto LABEL_8;
      }
      if ( m_pMemory[v9].priority <= v11 )
        break;
      v5 = v8 - 1;
      if ( v8 - 1 < v7 )
        goto LABEL_8;
    }
    v5 = (v7 + v5) >> 1;
  }
LABEL_8:
  CUtlVectorBase<sDamageHandlerInfo,CUtlMemory<sDamageHandlerInfo,int>>::InsertBefore(
    &this->m_DamageHandlers,
    v5 + 1,
    &pHandlera);
}


// CDamageComponent::RemoveDamageHandler  (line 88, @0x00000000021a1a50, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
void __fastcall CDamageComponent::RemoveDamageHandler(CDamageComponent *const this, IDamageHandler *pHandler)
{
  int m_Size; // edx
  sDamageHandlerInfo *m_pMemory; // rdi
  int v5; // ecx
  sDamageHandlerInfo *v6; // rax
  sDamageHandlerInfo *v7; // r8

  m_Size = this->m_DamageHandlers.m_Size;
  if ( this->m_DamageHandlers.m_Size > 0 )
  {
    m_pMemory = this->m_DamageHandlers.m_Memory.m_pMemory;
    v5 = 0;
    v6 = m_pMemory + 1;
    if ( m_pMemory->pHandler == pHandler )
    {
      v7 = m_pMemory;
      v5 = 0;
LABEL_7:
      if ( m_Size - v5 - 1 > 0 )
      {
        memmove(v7, &m_pMemory[v5 + 1], 16LL * (m_Size - v5 - 1));
        m_Size = this->m_DamageHandlers.m_Size;
      }
      this->m_DamageHandlers.m_Size = m_Size - 1;
    }
    else
    {
      while ( ++v5 != m_Size )
      {
        v7 = v6++;
        if ( v6[-1].pHandler == pHandler )
          goto LABEL_7;
      }
    }
  }
}


// CDamageComponent::HasDamageHandlers  (line 104, @0x00000000021a1ae0, libserver.so)
bool __fastcall CDamageComponent::HasDamageHandlers(const CDamageComponent *const this)
{
  return this->m_DamageHandlers.m_Size > 0;
}


