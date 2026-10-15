// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/entity_components/game/damage/health.cpp:14
class CEntityComponentHelperFactory_CHealthComponent : CEntityComponentHelpers {
	CEntityComponentHelperFactory_CHealthComponent();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CHealthComponent::GetEntComponentInfo  (line 14, @0x0000000002268ff0, libserver.so)  // inlines: HashStringFastCaseless, HashToShort
// calls: __cxa_guard_acquire, HashString, MurmurHash2LowerCase, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperInit_CHealthComponent
// strings: "CHealthComponent", "CHealthComponentReferenced", "CHealthComponentReferencedPtr"
// globals: CHealthComponent::s_EntComponentInfo, `guard variable for'CHealthComponent::GetEntComponentInfo(void)::UUID_CHealthComponent, CHealthComponent::GetEntComponentInfo(void)::UUID_CHealthComponent
EntComponentInfo_t *__cdecl CHealthComponent::GetEntComponentInfo()
{
  unsigned int v1; // eax
  uint32 v2; // eax

  if ( CHealthComponent::s_EntComponentInfo.m_pName != 0 )
    return &CHealthComponent::s_EntComponentInfo;
  if ( `guard variable for'CHealthComponent::GetEntComponentInfo(void)::UUID_CHealthComponent == 0
    && __cxa_guard_acquire(&`guard variable for'CHealthComponent::GetEntComponentInfo(void)::UUID_CHealthComponent) != 0 )
  {
    CHealthComponent::GetEntComponentInfo(void)::UUID_CHealthComponent.Data1 = -107363992;
    v1 = HashString("CHealthComponent");
    CHealthComponent::GetEntComponentInfo(void)::UUID_CHealthComponent.Data2 = HIWORD(v1) ^ v1;
    v2 = MurmurHash2LowerCase("CHealthComponent", 0x3501A674u);
    CHealthComponent::GetEntComponentInfo(void)::UUID_CHealthComponent.Data3 = HIWORD(v2) ^ v2;
    __cxa_guard_release(&`guard variable for'CHealthComponent::GetEntComponentInfo(void)::UUID_CHealthComponent);
  }
  CHealthComponent::s_EntComponentInfo.m_nRuntimeIndex = -1;
  CHealthComponent::s_EntComponentInfo.m_nFlags = 1;
  CHealthComponent::s_EntComponentInfo.m_id = CHealthComponent::GetEntComponentInfo(void)::UUID_CHealthComponent;
  CHealthComponent::s_EntComponentInfo.m_pName = "HealthComponent";
  CHealthComponent::s_EntComponentInfo.m_pCPPClassname = "CHealthComponent";
  CHealthComponent::s_EntComponentInfo.m_pNetworkDataReferencedDescription = "CHealthComponentReferenced";
  CHealthComponent::s_EntComponentInfo.m_pNetworkDataReferencedPtrPropDescription = "CHealthComponentReferencedPtr";
  return &CHealthComponent::s_EntComponentInfo;
}


// CEntityComponentHelperInit_CHealthComponent  (line 14, @0x0000000002269110, libserver.so)  // inlines: CEntityComponentHelper, CEntityComponentHelperContained, CEntityComponentHelperT, GetBaseComponentHelper, SetPriority
// calls: CHealthComponent::GetEntComponentInfo, CEntityComponentHelperInit_CEntityComponent, __cxa_guard_acquire, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperFactory_CHealthComponent::CEntityComponentHelperFactory_CHealthComponent, _GLOBAL__sub_I__unity_base_06.cpp
// globals: `guard variable for'CEntityComponentHelperInit_CHealthComponent(void)::componentHelper, CEntityComponentHelperInit_CHealthComponent(void)::s_bIsInitialized, CEntityComponentHelperInit_CHealthComponent(void)::componentHelper
CEntityComponentHelper *__cdecl CEntityComponentHelperInit_CHealthComponent()
{
  EntComponentInfo_t *EntComponentInfo; // rbx
  CEntityComponentHelper *inited; // rax

  if ( `guard variable for'CEntityComponentHelperInit_CHealthComponent(void)::componentHelper == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityComponentHelperInit_CHealthComponent(void)::componentHelper) != 0 )
  {
    CEntityComponentHelperInit_CHealthComponent(void)::componentHelper.m_flags = 0;
    CEntityComponentHelperInit_CHealthComponent(void)::componentHelper.m_pInfo = 0;
    CEntityComponentHelperInit_CHealthComponent(void)::componentHelper.m_nPriority = 0;
    CEntityComponentHelperInit_CHealthComponent(void)::componentHelper._vptr_CEntityComponentHelper = &off_4052A50;
    CEntityComponentHelperInit_CHealthComponent(void)::componentHelper.m_pInfo = CHealthComponent::GetEntComponentInfo();
    CEntityComponentHelperInit_CHealthComponent(void)::componentHelper.m_bFinalized = 0;
    __cxa_guard_release(&`guard variable for'CEntityComponentHelperInit_CHealthComponent(void)::componentHelper);
  }
  if ( !CEntityComponentHelperInit_CHealthComponent(void)::s_bIsInitialized )
  {
    CEntityComponentHelperInit_CHealthComponent(void)::s_bIsInitialized = 1;
    EntComponentInfo = CHealthComponent::GetEntComponentInfo();
    inited = CEntityComponentHelperInit_CEntityComponent();
    EntComponentInfo->m_pScriptClassDesc = 0;
    EntComponentInfo->m_pBaseClassComponentHelper = inited;
    CEntityComponentHelperInit_CHealthComponent(void)::componentHelper.m_nPriority = 0;
  }
  return &CEntityComponentHelperInit_CHealthComponent(void)::componentHelper;
}


// CEntityComponentHelperFactory_CHealthComponent::CEntityComponentHelperFactory_CHealthComponent  (line 14, @0x00000000022691f0, libserver.so)  // inlines: AddToList
// calls: CEntityComponentHelperInit_CHealthComponent
// globals: CEntityComponentHelpers::GetList(void)::g_pList
void __fastcall CEntityComponentHelperFactory_CHealthComponent::CEntityComponentHelperFactory_CHealthComponent(
        CEntityComponentHelperFactory_CHealthComponent *const this)
{
  CEntityComponentHelper *inited; // rax
  CEntityComponentHelper *v2; // rdx

  inited = CEntityComponentHelperInit_CHealthComponent();
  v2 = CEntityComponentHelpers::GetList(void)::g_pList;
  CEntityComponentHelpers::GetList(void)::g_pList = inited;
  inited->m_pNext = v2;
}


// CHealthComponent::SetLifeState  (line 69, @0x0000000002269210, libserver.so)
// callers: CSchemaClassBinding<CHealthComponent>::Allocate, CSchemaClassBinding<CHealthComponent>::AllocateAndCopyConstruct, CSchemaClassBinding<CHealthComponent>::ConstructInPlace
LifeState_t __fastcall CHealthComponent::SetLifeState(CHealthComponent *const this, LifeState_t lifeState)
{
  LifeState_t result; // eax

  result = this->m_lifeState;
  this->m_lifeState = lifeState;
  return result;
}


// CHealthComponent::TakeHealth  (line 78, @0x0000000002269220, libserver.so)  // inlines: Attribute_GetIntValue, Attribute_GetValue<int>, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, Compare, EntGetDamageOptions, FindEntry_Inline, Find_Inline, GetEntityAttributes, GetIntValue, GetValue<int>, Hash, Head
// calls: operator new
// callers: CBaseEntity::TakeHealth
// globals: g_EntAttrDamageOptionsID
__int64 __fastcall CHealthComponent::TakeHealth(
        CHealthComponent *const this,
        CEntityInstance *pThis,
        float flHealth,
        char options)
{
  CEntityIdentity *m_pEntity; // r14
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // r13
  uint32 v7; // ebx
  int m_nCurrentTableSize; // r14d
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v9; // rax
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *m_pHead; // rdi
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *v11; // r8
  int v12; // ecx
  int m_key; // esi
  __int64 m_value; // rcx
  int v15; // esi
  bool v16; // zf
  int m_iMax; // eax
  int m_iHealth; // edx
  int v19; // ecx
  float v21; // xmm1_4
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v22; // rax
  char optionsa; // [rsp+8h] [rbp-38h]
  float flHealtha; // [rsp+Ch] [rbp-34h]

  if ( this->m_lifeState != LifeState_t::LIFE_ALIVE || flHealth < 0.0 )
    return 0;
  m_pEntity = pThis->m_pEntity;
  m_pAttributes = m_pEntity->m_pAttributes;
  v7 = g_EntAttrDamageOptionsID.m_nHashCode & 0x7FFFFFF;
  if ( m_pAttributes == 0 )
  {
    optionsa = options;
    flHealtha = flHealth;
    v22 = operator new(0x38u);
    flHealth = flHealtha;
    v22->m_hashTable.m_tables.m_pHead = 0;
    m_pAttributes = v22;
    options = optionsa;
    v22->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
    v22->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
    v22->m_hashTable.m_nNumKeysDeleted = 0;
    v22->m_hashTable.m_nCurrentTableSize = 64;
    v22->m_hashTable.m_nDeletedKeyValue = -1;
    v22->m_hashTable.m_nEmptyKeyValue = -2;
    v22->m_pParentTable = 0;
    m_pEntity->m_pAttributes = v22;
  }
  m_nCurrentTableSize = m_pAttributes->m_hashTable.m_nCurrentTableSize;
  v9 = m_pAttributes;
  m_pHead = m_pAttributes->m_hashTable.m_tables.m_pHead;
  while ( 2 )
  {
    while ( 1 )
    {
      v11 = m_pHead;
      if ( m_pHead != 0 )
        break;
LABEL_23:
      v9 = v9->m_pParentTable;
      if ( v9 == 0 )
        return 0;
      m_nCurrentTableSize = v9->m_hashTable.m_nCurrentTableSize;
      m_pHead = v9->m_hashTable.m_tables.m_pHead;
    }
LABEL_7:
    v12 = (m_nCurrentTableSize - 1) & v7;
    while ( 1 )
    {
      m_key = v11->m_entries[v12].m_key;
      if ( ((m_key ^ v7) & 0x7FFFFFF) == 0 )
        break;
      if ( m_key != v9->m_hashTable.m_nEmptyKeyValue )
      {
        v12 = (m_nCurrentTableSize - 1) & (v12 + 1);
        if ( ((m_nCurrentTableSize - 1) & v7) != v12 )
          continue;
      }
      v11 = v11->m_pNext;
      if ( v11 != 0 )
        goto LABEL_7;
      goto LABEL_23;
    }
    m_value = v11->m_entries[v12].m_value;
    if ( m_key < 0 )
    {
      LODWORD(m_value) = *(&m_pAttributes->m_pOwningObject->m_pInstance + m_value);
    }
    else if ( v7 != m_key )
    {
      v15 = m_key & 0x78000000;
      if ( v15 != 0 )
      {
        if ( v15 != 0x8000000 )
          continue;
        LODWORD(m_value) = *&m_value;
      }
    }
    break;
  }
  if ( m_value <= 1u )
    return 0;
  v16 = (options & 1) == 0;
  m_iMax = this->m_iMax;
  m_iHealth = this->m_iHealth;
  if ( v16 )
  {
    if ( m_iMax <= m_iHealth )
      return 0;
    v19 = (m_iHealth + flHealth);
    if ( m_iMax < v19 )
    {
      this->m_iHealth = m_iMax;
      return (m_iMax - m_iHealth);
    }
    else
    {
      this->m_iHealth = v19;
      return (v19 - m_iHealth);
    }
  }
  else
  {
    v21 = m_iHealth + flHealth;
    this->m_iHealth = v21;
    return (v21 - m_iHealth);
  }
}


// CHealthComponent::TakeDamage  (line 112, @0x0000000002269400, libserver.so)  // inlines: Attribute_GetIntValue, Attribute_GetValue<int>, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, Compare, EntGetDamageOptions, FindEntry_Inline, Find_Inline, GetEntityAttributes, GetIntValue, GetValue<int>, Hash, Head, Max<int>
// calls: floorf, operator new
// callers: CBaseEntity::UpdateHealth, CBaseEntity::EntTakeDamageS1PortHack
// globals: g_EntAttrDamageOptionsID
int __fastcall CHealthComponent::TakeDamage(
        CHealthComponent *const this,
        CEntityInstance *pThis,
        const CTakeDamageInfo *const info)
{
  int result; // eax
  float m_flDamage; // xmm0_4
  CEntityIdentity *m_pEntity; // r13
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // rax
  uint32 v8; // ebx
  int m_nCurrentTableSize; // r13d
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v10; // rdi
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *m_pHead; // r11
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *v12; // r8
  int v13; // edx
  int m_key; // ecx
  __int64 m_value; // rdx
  int v16; // ecx
  int m_iHealth; // r13d
  int v18; // ebx
  float v19; // xmm0_4
  float damage; // [rsp+Ch] [rbp-24h]
  float damagea; // [rsp+Ch] [rbp-24h]

  result = 0;
  if ( this->m_lifeState == LifeState_t::LIFE_ALIVE )
  {
    m_flDamage = info->m_flDamage;
    if ( m_flDamage >= 0.0 )
    {
      m_pEntity = pThis->m_pEntity;
      m_pAttributes = m_pEntity->m_pAttributes;
      v8 = g_EntAttrDamageOptionsID.m_nHashCode & 0x7FFFFFF;
      if ( m_pAttributes == 0 )
      {
        damagea = info->m_flDamage;
        m_pAttributes = operator new(0x38u);
        m_flDamage = damagea;
        m_pAttributes->m_hashTable.m_tables.m_pHead = 0;
        m_pAttributes->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
        m_pAttributes->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
        m_pAttributes->m_hashTable.m_nNumKeysDeleted = 0;
        m_pAttributes->m_hashTable.m_nCurrentTableSize = 64;
        m_pAttributes->m_hashTable.m_nDeletedKeyValue = -1;
        m_pAttributes->m_hashTable.m_nEmptyKeyValue = -2;
        m_pAttributes->m_pParentTable = 0;
        m_pEntity->m_pAttributes = m_pAttributes;
      }
      m_nCurrentTableSize = m_pAttributes->m_hashTable.m_nCurrentTableSize;
      v10 = m_pAttributes;
      m_pHead = m_pAttributes->m_hashTable.m_tables.m_pHead;
      while ( 2 )
      {
        while ( 1 )
        {
          v12 = m_pHead;
          if ( m_pHead != 0 )
            break;
LABEL_23:
          v10 = v10->m_pParentTable;
          if ( v10 == 0 )
            return 0;
          m_nCurrentTableSize = v10->m_hashTable.m_nCurrentTableSize;
          m_pHead = v10->m_hashTable.m_tables.m_pHead;
        }
LABEL_7:
        v13 = (m_nCurrentTableSize - 1) & v8;
        while ( 1 )
        {
          m_key = v12->m_entries[v13].m_key;
          if ( ((m_key ^ v8) & 0x7FFFFFF) == 0 )
            break;
          if ( m_key != v10->m_hashTable.m_nEmptyKeyValue )
          {
            v13 = (m_nCurrentTableSize - 1) & (v13 + 1);
            if ( ((m_nCurrentTableSize - 1) & v8) != v13 )
              continue;
          }
          v12 = v12->m_pNext;
          if ( v12 != 0 )
            goto LABEL_7;
          goto LABEL_23;
        }
        m_value = v12->m_entries[v13].m_value;
        if ( m_key < 0 )
        {
          LODWORD(m_value) = *(&m_pAttributes->m_pOwningObject->m_pInstance + m_value);
        }
        else if ( v8 != m_key )
        {
          v16 = m_key & 0x78000000;
          if ( v16 != 0 )
          {
            if ( v16 != 0x8000000 )
              continue;
            LODWORD(m_value) = *&m_value;
          }
        }
        break;
      }
      if ( m_value > 1u )
      {
        m_iHealth = this->m_iHealth;
        damage = this->m_flDamageAccumulator + m_flDamage;
        v18 = (m_iHealth - damage);
        this->m_iHealth = v18;
        v19 = floorf(damage);
        if ( v18 <= 0 )
        {
          this->m_flDamageAccumulator = 0.0;
          v18 = 0;
        }
        else
        {
          this->m_flDamageAccumulator = damage - v19;
        }
        return m_iHealth - v18;
      }
    }
    return 0;
  }
  return result;
}


