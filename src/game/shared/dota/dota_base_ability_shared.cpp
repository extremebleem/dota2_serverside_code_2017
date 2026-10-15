
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetItemQuality  (line 44, @0x000000000242c420, libserver.so)  // inlines: _V_strcmp
// calls: strcmp
// callers: CDOTABaseAbility::ProcessAbilityData
// globals: szItemQualityStrings
ItemQuality_t __fastcall GetItemQuality(const char *pszQuality)
{
  __int64 v2; // rbx

  v2 = 0;
  while ( strcmp(pszQuality, szItemQualityStrings[v2]) != 0 )
  {
    if ( ++v2 == 7 )
      return ItemQuality_t::DOTA_ITEM_QUALITY_PLAIN;
  }
  return v2;
}


// GetColorForItemQuality  (line 57, @0x000000000242c480, libserver.so)
// globals: jpt_242C499
Color __fastcall GetColorForItemQuality(ItemQuality_t quality)
{
  Color result; // eax

  switch ( quality )
  {
    case ItemQuality_t::DOTA_ITEM_QUALITY_COMMON:
      result = -16732885;
      break;
    case ItemQuality_t::DOTA_ITEM_QUALITY_RARE:
      result = -161510;
      break;
    case ItemQuality_t::DOTA_ITEM_QUALITY_EPIC:
      result = -126533;
      break;
    case ItemQuality_t::DOTA_ITEM_QUALITY_ARTIFACT:
      result = -16736538;
      break;
    case ItemQuality_t::DOTA_ITEM_QUALITY_SECRET_SHOP:
      result = -3158224;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


// ParseSpecialBonusOperation  (line 79, @0x000000000242c500, libserver.so)  // inlines: V_isempty
// calls: V_stricmp_fast
// callers: CDOTABaseAbility::LoadAbilityDataSpecial
// strings: "SPECIAL_BONUS_ADD", "SPECIAL_BONUS_MULTIPLY"
bool __fastcall ParseSpecialBonusOperation(const char *pszValue, EDOTASpecialBonusOperation *const eOperation)
{
  if ( pszValue == 0 || *pszValue == 0 )
    return 0;
  if ( V_stricmp_fast(pszValue, "SPECIAL_BONUS_ADD") != 0 )
  {
    if ( V_stricmp_fast(pszValue, "SPECIAL_BONUS_MULTIPLY") != 0 )
      return 0;
    *eOperation = EDOTASpecialBonusOperation::SPECIAL_BONUS_MULTIPLY;
    return 1;
  }
  else
  {
    *eOperation = EDOTASpecialBonusOperation::SPECIAL_BONUS_ADD;
    return 1;
  }
}


// DOTAAbilityData_t::~DOTAAbilityData_t  (line 98, @0x000000000242c570, libserver.so)  // inlines: Destruct<CUtlString>, Destruct<DOTASpecialAbility_t>, Element, Free, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~DOTASpecialAbility_t
// calls: CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<short unsigned int, int>::Purge
// callers: CSchemaClassBinding<DOTAAbilityData_t>::Deallocate, CSchemaClassBinding<DOTAAbilityData_t>::DestructInPlace, CDOTAGameManager::DestroyAddOnGameKeyValues, CDOTAGameManager::DestroyGameKeyValues
void __fastcall DOTAAbilityData_t::~DOTAAbilityData_t(DOTAAbilityData_t *const this)
{
  int v1; // r14d
  __int64 i; // r13
  DOTASpecialAbility_t *v4; // r15
  bool *p_m_bSpellDamageField; // rbx
  CVariantBase<CVariantDefaultAllocator> *m_Values; // r15
  int m_Size; // ebx
  __int64 j; // r13
  CUtlString *v9; // rdi
  bool v10; // zf

  v1 = 0;
  for ( i = 0; this->m_nSpecialAbilities > v1; ++i )
  {
    v4 = &this->m_pSpecialAbilities[i];
    p_m_bSpellDamageField = &v4->m_bSpellDamageField;
    m_Values = v4->m_Values;
    if ( m_Values != 0 )
    {
      do
      {
        p_m_bSpellDamageField -= 16;
        if ( p_m_bSpellDamageField[10] )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *p_m_bSpellDamageField);
          *(p_m_bSpellDamageField + 5) &= ~1u;
        }
        *p_m_bSpellDamageField = 0;
        *(p_m_bSpellDamageField + 4) = 0;
      }
      while ( m_Values != p_m_bSpellDamageField );
    }
    ++v1;
  }
  m_Size = this->m_InvalidHeroes.m_Size;
  for ( j = 8LL * m_Size - 8; --m_Size >= 0; j -= 8 )
  {
    v9 = (this->m_InvalidHeroes.m_Memory.m_pMemory + j);
    if ( v9->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v9);
  }
  v10 = (this->m_InvalidHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_InvalidHeroes.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_InvalidHeroes.m_Memory);
    if ( (this->m_InvalidHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_InvalidHeroes.m_Memory);
  }
  v10 = (this->m_vecItemCombinesInto.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecItemCombinesInto.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<unsigned short,int>::Purge(&this->m_vecItemCombinesInto.m_Memory);
    if ( (this->m_vecItemCombinesInto.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned short,int>::Purge(&this->m_vecItemCombinesInto.m_Memory);
  }
}


// CDOTABaseAbility::GetDataDescMap  (line 108, @0x000000000241f570, libserver.so)
// globals: CDOTABaseAbility::m_DataMap
datamap_t *__fastcall CDOTABaseAbility::GetDataDescMap(CDOTABaseAbility *const this)
{
  return &CDOTABaseAbility::m_DataMap;
}


// CDOTABaseAbility::AddDatadescMetadataKeys  (line 108, @0x000000000242c6d0, libserver.so)
void __fastcall CDOTABaseAbility::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CDOTABaseAbility::GetBaseMap  (line 108, @0x000000000242c6e0, libserver.so)
datamap_t *__cdecl CDOTABaseAbility::GetBaseMap()
{
  return 0;
}


// DataMapInit<CDOTABaseAbility>  (line 108, @0x000000000242c6f0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_dota_01.cpp
// strings: "CDOTABaseAbility"
// globals: `guard variable for'DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::nameHolder, DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::dataDesc, CDOTABaseAbility::m_DataMap, DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::nameHolder.m_pszBase = "CDOTABaseAbility";
    DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::nameHolder,
      &_dso_handle);
  }
  CDOTABaseAbility::m_DataMap.baseMap = 0;
  CDOTABaseAbility::m_DataMap.dataDesc = DataMapInit<CDOTABaseAbility>(CDOTABaseAbility *)::dataDesc;
  CDOTABaseAbility::m_DataMap.dataNumFields = 1;
  return &CDOTABaseAbility::m_DataMap;
}


// CDOTABaseAbility::LoadAbilityData  (line 120, @0x000000000242dfe0, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetAbilityData, GetCaster, GetEntityName, GetOwnerEntity, memset, operator new
// calls: DevMsg, DOTAGameManager, CDOTAGameManager::GetAbilityDataByName, KeyValues::GetFirstSubKey, KeyValues::GetString, KeyValues::GetName, ParseKeyvalue, KeyValues::GetNextKey, CDOTABaseAbility::SetHidden, CEntityHandle::GetHandleEntity, CDOTABaseAbility::InitBaseValues, DOTAAbilityData_t::DOTAAbilityData_t
// callers: CDOTABaseAbility::GetAbilityType, CDOTABaseAbility::IsHiddenAbilityCastable, CDOTA_Ability_Lua::Script_IsHiddenAbilityCastable, CDOTABaseAbility::IsGrantedByScepter, CDOTABaseAbility::GetCastRangeBuffer, CDOTABaseAbility::GetModifierValue, CDOTABaseAbility::GetModifierValueBonus, CDOTABaseAbility::GetBehavior, CDOTA_Ability_Lua::Script_GetBehavior, CDOTABaseAbility::GetAbilityTargetType, CDOTABaseAbility::GetAbilityDamageType, CDOTABaseAbility::GetCurrentAbilityDamageType (200 total)
// strings: "Loading ability...%s\n", "Key: %s Value: %s\n", "...done!\n"
void __fastcall CDOTABaseAbility::LoadAbilityData(CDOTABaseAbility *const this, bool bFromPrecache)
{
  const char *m_pAsString; // rbx
  CDOTAGameManager *v5; // rax
  DOTAAbilityData_t *AbilityDataByName; // rbx
  const KeyValues *m_pKVData; // rdi
  KeyValues *i; // r12
  __int64 j; // rbx
  const char *String; // r13
  const char *Name; // rax
  const char *v12; // r13
  const char *v13; // rax
  DOTAAbilityData_t *v14; // r12

  m_pAsString = "";
  if ( this->m_pEntity->m_name.u.m_Id != 0 )
    m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
  DevMsg(2, "Loading ability...%s\n", m_pAsString);
  v5 = DOTAGameManager();
  AbilityDataByName = CDOTAGameManager::GetAbilityDataByName(v5, m_pAsString);
  this->m_pAbilityData = AbilityDataByName;
  if ( AbilityDataByName == 0 )
  {
    v14 = (**g_pMemAlloc)(g_pMemAlloc, 384);
    memset(v14, 0, sizeof(DOTAAbilityData_t));
    AbilityDataByName = v14;
    DOTAAbilityData_t::DOTAAbilityData_t(v14);
    this->m_pAbilityData = v14;
  }
  m_pKVData = AbilityDataByName->m_pKVData;
  if ( m_pKVData != 0 )
  {
    for ( i = KeyValues::GetFirstSubKey(m_pKVData); i != 0; i = KeyValues::GetNextKey(i) )
    {
      for ( j = (*(this->_vptr_IHandleEntity + 34))(this); j != 0; j = *(j + 24) )
      {
        while ( 1 )
        {
          String = KeyValues::GetString(i, 0, "", 0, 0);
          Name = KeyValues::GetName(i);
          if ( ParseKeyvalue(this, *j, *(j + 8), Name, String) )
            break;
          j = *(j + 24);
          if ( j == 0 )
            goto LABEL_12;
        }
        v12 = KeyValues::GetString(i, 0, "", 0, 0);
        v13 = KeyValues::GetName(i);
        DevMsg(2, "Key: %s Value: %s\n", v13, v12);
      }
LABEL_12:
      ;
    }
    AbilityDataByName = this->m_pAbilityData;
    if ( AbilityDataByName == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      AbilityDataByName = this->m_pAbilityData;
    }
  }
  CDOTABaseAbility::SetHidden(this, AbilityDataByName->m_iAbilityBehavior & 1);
  if ( !bFromPrecache && CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value) != 0 )
    CDOTABaseAbility::InitBaseValues(this);
  DevMsg(2, "...done!\n");
}


// CDOTABaseAbility::LoadAbilityDataSpecial  (line 172, @0x0000000002431910, libserver.so)  // inlines: AllocType<DOTASpecialAbility_t>, CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, CVariantBase, Construct<DOTASpecialAbility_t>, DOTASpecialAbility_t, GetBool, Purge, PurgeAndDeleteElements, RemoveAll, V_isempty, _V_strstr, atoi, strstr, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetString, CUtlScratchMemoryPool::AllocAligned, CDOTABaseAbility::GetFieldType, KeyValues::GetName, strstr, KeyValues::GetInt, ParseSpecialBonusOperation, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CDOTABaseAbility::SetSpecialValue (18 total)
// callers: CDOTABaseAbility::ProcessAbilityData
// strings: "AbilitySpecial", "levelkey", "LinkedSpecialBonus", "CalculateSpellDamageTooltip", "LinkedSpecialBonusOperation", "#AbilityDamage" (10 total)
void __fastcall CDOTABaseAbility::LoadAbilityDataSpecial(
        int nVersion,
        KeyValues *pKV,
        CUtlScratchMemoryPool *pMemPool,
        int *pNumSpecialAbilities,
        DOTASpecialAbility_t **pSpecialAbilities)
{
  KeyValues *Key; // rax
  const KeyValues *v7; // r12
  int v8; // ebx
  KeyValues *i; // rax
  const char *String; // rax
  __int64 v11; // r14
  const char *v12; // rax
  KeyValues *FirstSubKey; // r14
  __int64 v14; // r15
  DOTASpecialAbility_t *v15; // r13
  CVariantBase<CVariantDefaultAllocator> *m_Values; // rax
  KeyValues *v17; // rax
  const KeyValues *v18; // rbx
  const char *v19; // rax
  fieldtype_t FieldType; // eax
  KeyValues *NextKey; // rbx
  const char *v22; // rax
  const char *m_pszName; // rdi
  char *v24; // rax
  int Int; // eax
  const char *v26; // rax
  __int64 v27; // r12
  int v28; // ebx
  bool v29; // cc
  __int64 v30; // r13
  int v31; // r12d
  char *v32; // rsi
  const char *v33; // rbx
  __int64 v34; // r13
  int v35; // r12d
  int v36; // r12d
  DOTASpecialAbility_t *v37; // r13
  CVariantBase<CVariantDefaultAllocator> *v38; // rax
  int m_Size; // eax
  __int64 v40; // rbx
  const char *v41; // rax
  const char *v42; // r13
  __int64 v43; // r15
  int v44; // r14d
  int v45; // ebx
  int v46; // eax
  const char *Name; // r12
  const char *v48; // rax
  const char *v49; // rbx
  const char *v50; // rax
  const char *v51; // rbx
  const char *v52; // rax
  DOTASpecialAbility_t *v53; // rbx
  CVariantBase<CVariantDefaultAllocator> *v54; // rax
  int v55; // eax
  __int64 v56; // r13
  int v57; // r12d
  int nIndex; // [rsp+3Ch] [rbp-54h]
  CUtlStringList szValues; // [rsp+40h] [rbp-50h] BYREF

  Key = KeyValues::FindKey(pKV, "AbilitySpecial", 0);
  v7 = Key;
  if ( Key != 0 )
  {
    v8 = 0;
    for ( i = KeyValues::GetFirstSubKey(Key); i != 0; i = KeyValues::GetNextKey(i) )
      ++v8;
    String = KeyValues::GetString(pKV, "AbilityDamage", "", 0, 0);
    if ( String != 0 )
      v11 = *String != 0;
    else
      LODWORD(v11) = 0;
    v12 = KeyValues::GetString(pKV, "AbilityCastRange", "", 0, 0);
    if ( v12 != 0 )
      LODWORD(v11) = v11 - ((*v12 == 0) - 1);
    *pSpecialAbilities = CUtlScratchMemoryPool::AllocAligned(pMemPool, 368 * (v8 + v11), 8);
    *pNumSpecialAbilities = 0;
    FirstSubKey = KeyValues::GetFirstSubKey(v7);
    if ( FirstSubKey != 0 )
    {
      v14 = 0;
      nIndex = 0;
      while ( 1 )
      {
        ++nIndex;
        v15 = &(*pSpecialAbilities)[v14];
        if ( v15 != 0 )
        {
          m_Values = v15->m_Values;
          do
          {
            m_Values->m_uint64 = 0;
            m_Values->m_type = 0;
            ++m_Values;
            m_Values[-1].m_flags = 0;
          }
          while ( m_Values != &v15->m_bSpellDamageField );
          v15->m_pszName = 0;
          v15->m_pszValue = 0;
          v15->m_pszLevelKey = 0;
          v15->m_pszSpecialBonusAbility = 0;
        }
        ++*pNumSpecialAbilities;
        v17 = KeyValues::GetFirstSubKey(FirstSubKey);
        v18 = v17;
        if ( v17 == 0 )
          break;
        v19 = KeyValues::GetString(v17, 0, "", 0, 0);
        FieldType = CDOTABaseAbility::GetFieldType(v19);
        v15->m_FieldType = FieldType;
        if ( FieldType == fieldtype_t::FIELD_VOID )
        {
          Name = KeyValues::GetName(FirstSubKey);
          v48 = KeyValues::GetName(pKV);
          DevMsg(1, "Unsupported special ability type in %s(%s)!\n", v48, Name);
        }
        NextKey = KeyValues::GetNextKey(v18);
        v15->m_pszName = KeyValues::GetName(NextKey);
        v15->m_pszValue = KeyValues::GetString(NextKey, 0, "", 0, 0);
        v15->m_pszLevelKey = KeyValues::GetString(FirstSubKey, "levelkey", 0, 0, 0);
        v22 = KeyValues::GetString(FirstSubKey, "LinkedSpecialBonus", 0, 0, 0);
        m_pszName = v15->m_pszName;
        v15->m_pszSpecialBonusAbility = v22;
        v24 = strstr(m_pszName, "damage");
        Int = KeyValues::GetInt(FirstSubKey, "CalculateSpellDamageTooltip", v24 != 0);
        v15->m_eSpecialBonusOperation = EDOTASpecialBonusOperation::SPECIAL_BONUS_ADD;
        v15->m_bSpellDamageField = Int != 0;
        v26 = KeyValues::GetString(FirstSubKey, "LinkedSpecialBonusOperation", 0, 0, 0);
        if ( v26 != 0 && *v26 != 0 && !ParseSpecialBonusOperation(v26, &v15->m_eSpecialBonusOperation) )
        {
          v49 = KeyValues::GetName(FirstSubKey);
          v50 = KeyValues::GetName(pKV);
          DevMsg(1, "Unsupported special bonus operation in %s(%s)!\n", v50, v49);
        }
        szValues.m_Size = 0;
        szValues.m_Memory.m_pMemory = 0;
        szValues.m_Memory.m_nAllocationCount = 0;
        szValues.m_Memory.m_nGrowSize = 0;
        V_SplitString(v15->m_pszValue, " ", &szValues);
        v27 = 0;
        v28 = 0;
        v29 = szValues.m_Size <= 0;
        v15->m_nCount = szValues.m_Size;
        if ( !v29 )
        {
          do
            CDOTABaseAbility::SetSpecialValue(v15, v28++, szValues.m_Memory.m_pMemory[v27++]);
          while ( szValues.m_Size > v28 );
          if ( szValues.m_Size > 0 )
          {
            v30 = 0;
            v31 = 0;
            do
            {
              ++v31;
              v32 = szValues.m_Memory.m_pMemory[v30++];
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v32);
            }
            while ( v31 < szValues.m_Size );
          }
        }
        szValues.m_Size = 0;
        if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
          if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
        }
        ++v14;
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          goto LABEL_28;
      }
      v51 = KeyValues::GetName(FirstSubKey);
      v52 = KeyValues::GetName(pKV);
      DevMsg(1, "Failed to load special ability %s(%s)!\n", v52, v51);
    }
    else
    {
      nIndex = 0;
LABEL_28:
      v33 = KeyValues::GetString(pKV, "AbilityDamage", "", 0, 0);
      szValues.m_Size = 0;
      szValues.m_Memory.m_pMemory = 0;
      szValues.m_Memory.m_nAllocationCount = 0;
      szValues.m_Memory.m_nGrowSize = 0;
      V_SplitString(v33, " ", &szValues);
      if ( szValues.m_Size <= 0 )
      {
LABEL_56:
        v36 = nIndex;
      }
      else
      {
        v34 = 0;
        v35 = 0;
        while ( strtol(szValues.m_Memory.m_pMemory[v34], 0, 10) == 0 )
        {
          ++v35;
          ++v34;
          if ( szValues.m_Size <= v35 )
            goto LABEL_56;
        }
        v36 = nIndex + 1;
        v37 = &(*pSpecialAbilities)[nIndex];
        v38 = v37->m_Values;
        if ( v37 != 0 )
        {
          do
          {
            v38->m_uint64 = 0;
            v38->m_type = 0;
            ++v38;
            v38[-1].m_flags = 0;
          }
          while ( v38 != &v37->m_bSpellDamageField );
          v37->m_pszName = 0;
          v37->m_pszValue = 0;
          v37->m_pszLevelKey = 0;
          v37->m_pszSpecialBonusAbility = 0;
        }
        ++*pNumSpecialAbilities;
        v37->m_pszValue = v33;
        v37->m_pszName = "#AbilityDamage";
        m_Size = szValues.m_Size;
        v37->m_FieldType = fieldtype_t::FIELD_INTEGER;
        v37->m_bSpellDamageField = 1;
        v37->m_nCount = m_Size;
        if ( m_Size > 0 )
        {
          v40 = 0;
          do
          {
            CDOTABaseAbility::SetSpecialValue(v37, v40, szValues.m_Memory.m_pMemory[v40]);
            ++v40;
          }
          while ( szValues.m_Size > v40 );
        }
      }
      CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(&szValues);
      CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&szValues);
      v41 = KeyValues::GetString(pKV, "AbilityCastRange", "", 0, 0);
      szValues.m_Size = 0;
      v42 = v41;
      szValues.m_Memory.m_pMemory = 0;
      szValues.m_Memory.m_nAllocationCount = 0;
      szValues.m_Memory.m_nGrowSize = 0;
      V_SplitString(v41, " ", &szValues);
      if ( szValues.m_Size > 0 )
      {
        v43 = 1;
        v44 = 0;
        v45 = strtol(*szValues.m_Memory.m_pMemory, 0, 10);
        while ( szValues.m_Size > ++v44 )
        {
          v46 = strtol(szValues.m_Memory.m_pMemory[v43], 0, 10);
          if ( v44 != 0 )
          {
            if ( v45 != v46 )
            {
              v53 = &(*pSpecialAbilities)[v36];
              v54 = v53->m_Values;
              if ( v53 != 0 )
              {
                do
                {
                  v54->m_uint64 = 0;
                  v54->m_type = 0;
                  ++v54;
                  v54[-1].m_flags = 0;
                }
                while ( v54 != &v53->m_bSpellDamageField );
                v53->m_pszName = 0;
                v53->m_pszValue = 0;
                v53->m_pszLevelKey = 0;
                v53->m_pszSpecialBonusAbility = 0;
              }
              ++*pNumSpecialAbilities;
              v53->m_pszValue = v42;
              v53->m_pszName = "#AbilityCastRange";
              v55 = szValues.m_Size;
              v53->m_FieldType = fieldtype_t::FIELD_INTEGER;
              v53->m_nCount = v55;
              if ( v55 > 0 )
              {
                v56 = 0;
                v57 = 0;
                do
                  CDOTABaseAbility::SetSpecialValue(v53, v57++, szValues.m_Memory.m_pMemory[v56++]);
                while ( szValues.m_Size > v57 );
              }
              break;
            }
          }
          else
          {
            v45 = v46;
          }
          ++v43;
        }
      }
      CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(&szValues);
      CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&szValues);
    }
  }
}


// CDOTABaseAbility::LoadAbilityDataType  (line 345, @0x000000000242c7b0, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: KeyValues::GetString, strcmp, Warning
// callers: CDOTABaseAbility::ProcessAbilityData
// strings: "Unknown ability type during parse! (%s)\n"
int __fastcall CDOTABaseAbility::LoadAbilityDataType(int nVersion, KeyValues *pKV)
{
  const char *String; // r12
  __int64 v3; // rbx
  const char *v4; // rsi

  String = KeyValues::GetString(pKV, "AbilityType", 0, 0, 0);
  if ( String == 0 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = g_DOTAAbilityTypeText[v3];
    if ( String == v4 || strcmp(String, v4) == 0 )
      break;
    if ( ++v3 == 4 )
    {
      Warning("Unknown ability type during parse! (%s)\n", String);
      return 0;
    }
  }
  return v3;
}


// CDOTABaseAbility::LoadAbilityDataImmunityType  (line 366, @0x000000000242c850, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: KeyValues::GetString, strcmp, Warning
// callers: CDOTABaseAbility::ProcessAbilityData
// strings: "SpellImmunityType", "Unknown spell immunity type during parse! (%s)\n"
int __fastcall CDOTABaseAbility::LoadAbilityDataImmunityType(int nVersion, KeyValues *pKV)
{
  const char *String; // r12
  __int64 v3; // rbx
  const char *v4; // rsi

  String = KeyValues::GetString(pKV, "SpellImmunityType", 0, 0, 0);
  if ( String == 0 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = g_DOTASpellImmunityTypeText[v3];
    if ( String == v4 || strcmp(String, v4) == 0 )
      break;
    if ( ++v3 == 5 )
    {
      Warning("Unknown spell immunity type during parse! (%s)\n", String);
      return 0;
    }
  }
  return v3;
}


// CDOTABaseAbility::LoadAbilityDataDispellableType  (line 387, @0x000000000242c8f0, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: KeyValues::GetString, strcmp, Warning
// callers: CDOTABaseAbility::ProcessAbilityData
// strings: "SpellDispellableType", "Unknown spell immunity type during parse! (%s)\n"
int __fastcall CDOTABaseAbility::LoadAbilityDataDispellableType(int nVersion, KeyValues *pKV)
{
  const char *String; // r12
  __int64 v3; // rbx
  const char *v4; // rsi

  String = KeyValues::GetString(pKV, "SpellDispellableType", 0, 0, 0);
  if ( String == 0 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = g_DOTASpellDispellableTypeText[v3];
    if ( String == v4 || strcmp(String, v4) == 0 )
      break;
    if ( ++v3 == 4 )
    {
      Warning("Unknown spell immunity type during parse! (%s)\n", String);
      return 0;
    }
  }
  return v3;
}


// CDOTABaseAbility::LoadAbilityDataBehavior  (line 408, @0x00000000024320c0, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, V_stristr_fast, _V_strcmp, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector
// calls: KeyValues::GetString, strcmp, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), V_stristr_fast(char const*,char const*), CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, Warning, _Unwind_Resume
// callers: CDOTABaseAbility::ProcessAbilityData
// strings: "Unknown ability behavior during parse! (%s)\n"
int __fastcall CDOTABaseAbility::LoadAbilityDataBehavior(int nVersion, KeyValues *pKV)
{
  const char *String; // rax
  int result; // eax
  char v4; // r15
  int v5; // r12d
  __int64 j; // rbx
  int v7; // eax
  int v8; // eax
  const char *pBehaviorValue; // [rsp+10h] [rbp-60h]
  __int64 i; // [rsp+18h] [rbp-58h]
  int ia; // [rsp+18h] [rbp-58h]
  CUtlStringList szValues; // [rsp+20h] [rbp-50h] BYREF

  String = KeyValues::GetString(pKV, "AbilityBehavior", 0, 0, 0);
  pBehaviorValue = String;
  if ( String == 0 )
    return 0;
  result = strcmp(String, g_DOTAAbilityBehaviorText[0]);
  if ( result != 0 )
  {
    szValues.m_Size = 0;
    szValues.m_Memory.m_pMemory = 0;
    szValues.m_Memory.m_nAllocationCount = 0;
    szValues.m_Memory.m_nGrowSize = 0;
    V_SplitString(pBehaviorValue, &unk_34E9DAD, &szValues);
    v4 = 0;
    v5 = 0;
    i = 0;
    if ( szValues.m_Size <= 0 )
      goto LABEL_11;
    do
    {
      for ( j = 0; j != 32; ++j )
      {
        if ( V_stristr_fast(szValues.m_Memory.m_pMemory[i], g_DOTAAbilityBehaviorText[j + 1]) != 0 )
        {
          v4 = 1;
          v5 |= 1 << j;
        }
      }
      v7 = i++;
    }
    while ( v7 + 1 < szValues.m_Size );
    v8 = v5;
    if ( v4 == 0 )
    {
LABEL_11:
      Warning("Unknown ability behavior during parse! (%s)\n", pBehaviorValue);
      v8 = 0;
    }
    ia = v8;
    CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(&szValues);
    CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&szValues);
    return ia;
  }
  return result;
}


// CDOTABaseAbility::LoadAbilityDataTargetTeam  (line 448, @0x0000000002432240, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, FStrEq, Purge, RemoveAll, _V_strcmp, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetString, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlMemory<char*, int>::Purge, KeyValues::GetName, Warning, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTABaseAbility::ProcessAbilityData
// strings: "AbilityUnitTargetTeam", "DOTA_UNIT_TARGET_TEAM_FRIENDLY", "DOTA_UNIT_TARGET_TEAM_ENEMY", "DOTA_UNIT_TARGET_TEAM_CUSTOM", "DOTA_UNIT_TARGET_TEAM_BOTH", "Unknown Ability Target Team Value: %s in ability %s!\n"
int __fastcall CDOTABaseAbility::LoadAbilityDataTargetTeam(int nVersion, KeyValues *pKV)
{
  const char *String; // rax
  __int64 v3; // rbx
  int v4; // r12d
  char *v5; // rax
  int result; // eax
  const char *Name; // rax
  CUtlStringList szValues; // [rsp+10h] [rbp-50h] BYREF

  String = KeyValues::GetString(pKV, "AbilityUnitTargetTeam", 0, 0, 0);
  if ( String == 0 )
    return 0;
  szValues.m_Size = 0;
  szValues.m_Memory.m_pMemory = 0;
  szValues.m_Memory.m_nAllocationCount = 0;
  szValues.m_Memory.m_nGrowSize = 0;
  V_SplitString(String, " | ", &szValues);
  if ( szValues.m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = szValues.m_Memory.m_pMemory[v3];
        if ( v5 != "DOTA_UNIT_TARGET_TEAM_FRIENDLY"
          && strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_TEAM_FRIENDLY") != 0 )
        {
          break;
        }
        v4 |= 1u;
LABEL_5:
        if ( szValues.m_Size <= ++v3 )
          goto LABEL_11;
      }
      if ( v5 != "DOTA_UNIT_TARGET_TEAM_ENEMY"
        && strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_TEAM_ENEMY") != 0 )
      {
        if ( v5 == "DOTA_UNIT_TARGET_TEAM_CUSTOM"
          || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_TEAM_CUSTOM") == 0 )
        {
          v4 |= 4u;
        }
        else if ( v5 == "DOTA_UNIT_TARGET_TEAM_BOTH"
               || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_TEAM_BOTH") == 0 )
        {
          v4 |= 3u;
        }
        else
        {
          Name = KeyValues::GetName(pKV);
          Warning("Unknown Ability Target Team Value: %s in ability %s!\n", szValues.m_Memory.m_pMemory[v3], Name);
        }
        goto LABEL_5;
      }
      v4 |= 2u;
      if ( szValues.m_Size <= ++v3 )
        goto LABEL_11;
    }
  }
  v4 = 0;
LABEL_11:
  CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(&szValues);
  result = v4;
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
    result = v4;
    if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
      return v4;
    }
  }
  return result;
}


// CDOTABaseAbility::LoadAbilityDataTargetType  (line 474, @0x0000000002432460, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, FStrEq, Purge, RemoveAll, _V_strcmp, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetString, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlMemory<char*, int>::Purge, KeyValues::GetName, Warning, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTABaseAbility::ProcessAbilityData
// strings: "AbilityUnitTargetType", "DOTA_UNIT_TARGET_HERO", "DOTA_UNIT_TARGET_CREEP", "DOTA_UNIT_TARGET_BUILDING", "DOTA_UNIT_TARGET_TREE", "DOTA_UNIT_TARGET_BASIC" (9 total)
int __fastcall CDOTABaseAbility::LoadAbilityDataTargetType(int nVersion, KeyValues *pKV)
{
  const char *String; // rax
  __int64 v3; // rbx
  int v4; // r12d
  char *v5; // rax
  int result; // eax
  const char *Name; // rax
  CUtlStringList szValues; // [rsp+10h] [rbp-50h] BYREF

  String = KeyValues::GetString(pKV, "AbilityUnitTargetType", 0, 0, 0);
  if ( String == 0 )
    return 0;
  szValues.m_Size = 0;
  szValues.m_Memory.m_pMemory = 0;
  szValues.m_Memory.m_nAllocationCount = 0;
  szValues.m_Memory.m_nGrowSize = 0;
  V_SplitString(String, " | ", &szValues);
  if ( szValues.m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = szValues.m_Memory.m_pMemory[v3];
        if ( v5 != "DOTA_UNIT_TARGET_HERO" && strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_HERO") != 0 )
          break;
        v4 |= 1u;
LABEL_5:
        if ( szValues.m_Size <= ++v3 )
          goto LABEL_11;
      }
      if ( v5 != "DOTA_UNIT_TARGET_CREEP" && strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_CREEP") != 0 )
      {
        if ( v5 == "DOTA_UNIT_TARGET_BUILDING"
          || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_BUILDING") == 0 )
        {
          v4 |= 4u;
        }
        else if ( v5 == "DOTA_UNIT_TARGET_TREE" || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_TREE") == 0 )
        {
          v4 |= 0x40u;
        }
        else if ( v5 == "DOTA_UNIT_TARGET_BASIC"
               || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_BASIC") == 0 )
        {
          v4 |= 0x12u;
        }
        else if ( v5 == "DOTA_UNIT_TARGET_ALL" || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_ALL") == 0 )
        {
          v4 |= 0x37u;
        }
        else if ( v5 == "DOTA_UNIT_TARGET_CUSTOM"
               || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_CUSTOM") == 0 )
        {
          LOBYTE(v4) = v4 | 0x80;
        }
        else
        {
          Name = KeyValues::GetName(pKV);
          Warning("Unknown Ability Target Type Value: %s in ability %s!\n", szValues.m_Memory.m_pMemory[v3], Name);
        }
        goto LABEL_5;
      }
      v4 |= 2u;
      if ( szValues.m_Size <= ++v3 )
        goto LABEL_11;
    }
  }
  v4 = 0;
LABEL_11:
  CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(&szValues);
  result = v4;
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
    result = v4;
    if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
      return v4;
    }
  }
  return result;
}


// CDOTABaseAbility::LoadAbilityDataTargetFlags  (line 503, @0x00000000024326e0, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, FStrEq, Purge, PurgeAndDeleteElements, RemoveAll, _V_strcmp, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetString, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlMemory<char*, int>::Purge, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume, Warning
// callers: CDOTABaseAbility::ProcessAbilityData
// strings: "AbilityUnitTargetFlags", "DOTA_UNIT_TARGET_FLAG_MAGIC_IMMUNE_ENEMIES", "DOTA_UNIT_TARGET_FLAG_NOT_MAGIC_IMMUNE_ALLIES", "DOTA_UNIT_TARGET_FLAG_INVULNERABLE", "DOTA_UNIT_TARGET_FLAG_NOT_ANCIENTS", "DOTA_UNIT_TARGET_FLAG_NOT_SUMMONED" (12 total)
int __fastcall CDOTABaseAbility::LoadAbilityDataTargetFlags(int nVersion, KeyValues *pKV)
{
  const char *String; // rax
  __int64 v3; // r12
  int v4; // ebx
  int v5; // r13d
  int m_Size; // eax
  char *v7; // rax
  __int64 v8; // r12
  int v9; // ebx
  char *v10; // rsi
  CUtlStringList szValues; // [rsp+10h] [rbp-50h] BYREF

  String = KeyValues::GetString(pKV, "AbilityUnitTargetFlags", 0, 0, 0);
  if ( String == 0 )
    return 0;
  szValues.m_Size = 0;
  szValues.m_Memory.m_pMemory = 0;
  szValues.m_Memory.m_nAllocationCount = 0;
  szValues.m_Memory.m_nGrowSize = 0;
  V_SplitString(String, " | ", &szValues);
  if ( szValues.m_Size <= 0 )
  {
    v5 = 0;
    goto LABEL_14;
  }
  v3 = 0;
  v4 = 0;
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v7 = szValues.m_Memory.m_pMemory[v3];
      if ( v7 != "DOTA_UNIT_TARGET_FLAG_MAGIC_IMMUNE_ENEMIES"
        && strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_FLAG_MAGIC_IMMUNE_ENEMIES") != 0 )
      {
        break;
      }
      v5 |= 0x10u;
LABEL_5:
      m_Size = szValues.m_Size;
      ++v4;
      ++v3;
      if ( szValues.m_Size <= v4 )
        goto LABEL_11;
    }
    if ( v7 != "DOTA_UNIT_TARGET_FLAG_NOT_MAGIC_IMMUNE_ALLIES"
      && strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_FLAG_NOT_MAGIC_IMMUNE_ALLIES") != 0 )
    {
      if ( v7 == "DOTA_UNIT_TARGET_FLAG_INVULNERABLE"
        || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_FLAG_INVULNERABLE") == 0 )
      {
        v5 |= 0x40u;
      }
      else if ( v7 == "DOTA_UNIT_TARGET_FLAG_NOT_ANCIENTS"
             || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_FLAG_NOT_ANCIENTS") == 0 )
      {
        v5 |= 0x200u;
      }
      else if ( v7 == "DOTA_UNIT_TARGET_FLAG_NOT_SUMMONED"
             || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_FLAG_NOT_SUMMONED") == 0 )
      {
        v5 |= 0x1000u;
      }
      else if ( v7 == "DOTA_UNIT_TARGET_FLAG_NOT_ILLUSIONS"
             || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_FLAG_NOT_ILLUSIONS") == 0 )
      {
        v5 |= 0x2000u;
      }
      else if ( v7 == "DOTA_UNIT_TARGET_FLAG_NOT_DOMINATED"
             || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_FLAG_NOT_DOMINATED") == 0 )
      {
        v5 |= 0x800u;
      }
      else if ( v7 == "DOTA_UNIT_TARGET_FLAG_FOW_VISIBLE"
             || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_FLAG_FOW_VISIBLE") == 0 )
      {
        LOBYTE(v5) = v5 | 0x80;
      }
      else if ( v7 == "DOTA_UNIT_TARGET_FLAG_NOT_CREEP_HERO"
             || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_FLAG_NOT_CREEP_HERO") == 0 )
      {
        v5 |= 0x20000u;
      }
      else if ( v7 == "DOTA_UNIT_TARGET_FLAG_PREFER_ENEMIES"
             || strcmp(szValues.m_Memory.m_pMemory[v3], "DOTA_UNIT_TARGET_FLAG_PREFER_ENEMIES") == 0 )
      {
        v5 |= 0x100000u;
      }
      else
      {
        Warning("Unknown Ability Target Flag Value: %s!\n", szValues.m_Memory.m_pMemory[v3]);
      }
      goto LABEL_5;
    }
    m_Size = szValues.m_Size;
    ++v4;
    v5 |= 0x20u;
    ++v3;
  }
  while ( szValues.m_Size > v4 );
LABEL_11:
  if ( m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      ++v9;
      v10 = szValues.m_Memory.m_pMemory[v8++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10);
    }
    while ( v9 < szValues.m_Size );
  }
LABEL_14:
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
    if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  }
  return v5;
}


// CDOTABaseAbility::LoadAbilityDataDamageType  (line 535, @0x00000000024329d0, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, FStrEq, Purge, PurgeAndDeleteElements, RemoveAll, _V_strcmp, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetString, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlMemory<char*, int>::Purge, Warning, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTABaseAbility::ProcessAbilityData
// strings: "AbilityUnitDamageType", "DAMAGE_TYPE_PHYSICAL", "DAMAGE_TYPE_MAGICAL", "DAMAGE_TYPE_PURE", "DAMAGE_TYPE_HP_REMOVAL", "DAMAGE_TYPE_NONE" (7 total)
int __fastcall CDOTABaseAbility::LoadAbilityDataDamageType(int nVersion, KeyValues *pKV)
{
  const char *String; // rax
  __int64 v3; // r12
  int v4; // ebx
  int v5; // r13d
  int m_Size; // eax
  char *v7; // rax
  __int64 v8; // r12
  int v9; // ebx
  char *v10; // rsi
  CUtlStringList szValues; // [rsp+10h] [rbp-50h] BYREF

  String = KeyValues::GetString(pKV, "AbilityUnitDamageType", 0, 0, 0);
  if ( String == 0 )
    return 0;
  szValues.m_Size = 0;
  szValues.m_Memory.m_pMemory = 0;
  szValues.m_Memory.m_nAllocationCount = 0;
  szValues.m_Memory.m_nGrowSize = 0;
  V_SplitString(String, " | ", &szValues);
  if ( szValues.m_Size <= 0 )
  {
    v5 = 0;
    goto LABEL_14;
  }
  v3 = 0;
  v4 = 0;
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v7 = szValues.m_Memory.m_pMemory[v3];
      if ( v7 != "DAMAGE_TYPE_PHYSICAL" && strcmp(szValues.m_Memory.m_pMemory[v3], "DAMAGE_TYPE_PHYSICAL") != 0 )
        break;
      v5 |= 1u;
LABEL_5:
      m_Size = szValues.m_Size;
      ++v4;
      ++v3;
      if ( szValues.m_Size <= v4 )
        goto LABEL_11;
    }
    if ( v7 != "DAMAGE_TYPE_MAGICAL" && strcmp(szValues.m_Memory.m_pMemory[v3], "DAMAGE_TYPE_MAGICAL") != 0 )
    {
      if ( v7 == "DAMAGE_TYPE_PURE" || strcmp(szValues.m_Memory.m_pMemory[v3], "DAMAGE_TYPE_PURE") == 0 )
      {
        v5 |= 4u;
      }
      else if ( v7 == "DAMAGE_TYPE_HP_REMOVAL" || strcmp(szValues.m_Memory.m_pMemory[v3], "DAMAGE_TYPE_HP_REMOVAL") == 0 )
      {
        v5 |= 8u;
      }
      else if ( v7 != "DAMAGE_TYPE_NONE" && strcmp(szValues.m_Memory.m_pMemory[v3], "DAMAGE_TYPE_NONE") != 0 )
      {
        Warning("Unknown Ability Damage Type Value: %s!\n", szValues.m_Memory.m_pMemory[v3]);
      }
      goto LABEL_5;
    }
    m_Size = szValues.m_Size;
    ++v4;
    v5 |= 2u;
    ++v3;
  }
  while ( szValues.m_Size > v4 );
LABEL_11:
  if ( m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      ++v9;
      v10 = szValues.m_Memory.m_pMemory[v8++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10);
    }
    while ( v9 < szValues.m_Size );
  }
LABEL_14:
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
    if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  }
  return v5;
}


// CDOTABaseAbility::GetFieldType  (line 565, @0x000000000242c990, libserver.so)  // inlines: FStrEq, _V_strcmp
// callers: CDOTABaseAbility::LoadAbilityDataSpecial
// strings: "FIELD_FLOAT", "FIELD_INTEGER"
fieldtype_t __fastcall CDOTABaseAbility::GetFieldType(const char *szFieldTypeName)
{
  fieldtype_t result; // eax

  if ( szFieldTypeName == "FIELD_FLOAT" )
    return fieldtype_t::FIELD_FLOAT;
  result = fieldtype_t::FIELD_FLOAT;
  if ( strcmp(szFieldTypeName, "FIELD_FLOAT") != 0 )
  {
    if ( szFieldTypeName == "FIELD_INTEGER" || strcmp(szFieldTypeName, "FIELD_INTEGER") == 0 )
      return fieldtype_t::FIELD_INTEGER;
    else
      return fieldtype_t::FIELD_VOID;
  }
  return result;
}


// CDOTABaseAbility::SetSpecialValue  (line 582, @0x000000000242c9f0, libserver.so)  // inlines: Free, atof, atoi, operator=
// calls: strtol, DevMsg, strtod
// callers: CDOTABaseAbility::LoadAbilityDataSpecial
// strings: "Unknown Type!\n"
void __fastcall CDOTABaseAbility::SetSpecialValue(
        DOTASpecialAbility_t *pSpecialAbility,
        int nSlot,
        const char *pszValue)
{
  fieldtype_t m_FieldType; // eax
  fieldtype_t *v4; // rbx
  int v5; // r13d
  fieldtype_t *v6; // rbx
  float v7; // xmm0_4
  float v8; // [rsp+Ch] [rbp-24h]

  m_FieldType = pSpecialAbility->m_FieldType;
  if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
  {
    v6 = &pSpecialAbility->m_FieldType + 4 * nSlot;
    v7 = strtod(pszValue, 0);
    if ( (*(v6 + 18) & 1) != 0 )
    {
      v8 = v7;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *(v6 + 1));
      v7 = v8;
      *(v6 + 9) &= ~1u;
    }
    *(v6 + 1) = 0;
    *(v6 + 8) = 1;
    *(v6 + 2) = v7;
  }
  else if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
  {
    v4 = &pSpecialAbility->m_FieldType + 4 * nSlot;
    v5 = strtol(pszValue, 0, 10);
    if ( (*(v4 + 18) & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *(v4 + 1));
      *(v4 + 9) &= ~1u;
    }
    *(v4 + 1) = 0;
    *(v4 + 8) = 5;
    *(v4 + 2) = v5;
  }
  else
  {
    DevMsg(1, "Unknown Type!\n");
  }
}


// CDOTABaseAbility::DumpSpecialAbilities  (line 609, @0x000000000242e8c0, libserver.so)  // inlines: GetAbilityData, GetFloat, GetInt, GetNumSpecialAbilities, GetSpecialAbilityByIndex, operator float, operator int
// calls: Msg, CDOTABaseAbility::LoadAbilityData
void __fastcall CDOTABaseAbility::DumpSpecialAbilities(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_nSpecialAbilities; // edx
  unsigned __int64 v4; // r13
  DOTASpecialAbility_t *v5; // r12
  double v6; // xmm0_8
  fieldtype_t m_FieldType; // eax
  unsigned __int64 i; // xmm0_8
  DOTASpecialAbility_t *v9; // rbx
  int v10; // r15d
  int m_float; // esi
  int16 m_type; // ax
  int v13; // r15d
  DOTASpecialAbility_t *v14; // rbx
  float m_float64; // xmm0_4
  __int64 v16; // [rsp-40h] [rbp-40h]

  if ( developer.m_pParent->m_Value.m_nValue > 1 )
  {
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_nSpecialAbilities = m_pAbilityData->m_nSpecialAbilities;
    if ( m_nSpecialAbilities > 0 )
    {
      v4 = 0;
      v16 = 368 * ((m_nSpecialAbilities - 1) + 1LL);
      if ( m_pAbilityData == 0 )
        goto LABEL_19;
      while ( 1 )
      {
        v5 = &m_pAbilityData->m_pSpecialAbilities[v4 / 0x170];
        if ( v5 == 0 )
          goto LABEL_17;
        *&v6 = Msg("%s(%s)\n", v5->m_pszName, v5->m_pszValue).m128_u64[0];
        m_FieldType = v5->m_FieldType;
        if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
        {
          v13 = 0;
          v14 = v5;
          for ( i = Msg("  ", v6).m128_u64[0]; v5->m_nCount > v13; i = Msg(" %f", m_float64).m128_u64[0] )
          {
            if ( v14->m_Values[0].m_type == 34 )
              m_float64 = v14->m_Values[0].m_float64;
            else
              m_float64 = v14->m_Values[0].m_float;
            ++v13;
            v14 = (v14 + 16);
          }
        }
        else
        {
          if ( m_FieldType != fieldtype_t::FIELD_INTEGER )
            goto LABEL_17;
          i = Msg("  ", v6).m128_u64[0];
          if ( v5->m_nCount > 0 )
          {
            v9 = v5;
            v10 = 0;
            do
            {
              m_type = v9->m_Values[0].m_type;
              if ( m_type == 1 )
              {
                m_float = v9->m_Values[0].m_float;
              }
              else if ( m_type == 34 )
              {
                m_float = v9->m_Values[0].m_float64;
              }
              else
              {
                m_float = v9->m_Values[0].m_int;
              }
              ++v10;
              v9 = (v9 + 16);
              i = Msg(" %d", m_float).m128_u64[0];
            }
            while ( v5->m_nCount > v10 );
          }
        }
        Msg("\n", *&i);
LABEL_17:
        v4 += 368LL;
        if ( v4 == v16 )
          return;
        m_pAbilityData = this->m_pAbilityData;
        if ( m_pAbilityData == 0 )
        {
LABEL_19:
          CDOTABaseAbility::LoadAbilityData(this, 0);
          m_pAbilityData = this->m_pAbilityData;
        }
      }
    }
  }
}


// CDOTABaseAbility::ProcessAbilityData  (line 660, @0x0000000002443450, libserver.so)  // inlines: AddToTail, AllocType<char>, AllocType<float>, AllocType<int>, CUtlMemory, CUtlString, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlString>, DupString, Element, GetBool, GetInt, GrowMemory, HKeySymbol, Purge, PurgeAndDeleteElements, RemoveAll, StringAfterPrefix<char const>, V_memcpy, V_strlen, V_strncmp<int>, atof, atoi, memcpy, operator[], ~CUtlString, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector
// calls: KeyValues::GetName, KeyValues::KeyValues, KeyValues::CopySubkeys, KeyValues::MergeFrom, KeyValues::GetString, KeyValues::GetInt, CDOTABaseAbility::LoadAbilityDataType, CDOTABaseAbility::LoadAbilityDataBehavior, CDOTABaseAbility::LoadAbilityDataTargetTeam, CDOTABaseAbility::LoadAbilityDataTargetType, CDOTABaseAbility::LoadAbilityDataTargetFlags, CDOTABaseAbility::LoadAbilityDataDamageType (41 total)
// callers: CDOTAGameManager::SetupItemSymbolsAndDictionary, CDOTAGameManager::SetupCustomItemSymbolsAndDictionary
// strings: "AbilityTextureName", "AbilitySharedCooldown", "AssociatedConsumable", "item_", "HotKeyOverride", "AbilityCastRangeBuffer" (26 total)
void __fastcall CDOTABaseAbility::ProcessAbilityData(
        int version,
        KeyValues *pAbilityKeys,
        KeyValues *pAbilityBase,
        KeyValues *pAbilitiesKeyValues,
        DOTAAbilityData_t *pAbilityData,
        CUtlScratchMemoryPool *pMemPool,
        int nAbilityIDOverride)
{
  const char *Name; // r14
  const char *String; // rax
  const char *v12; // rax
  const char *v13; // rax
  int Int; // eax
  const char *m_pszAbilityName; // rdi
  int v16; // eax
  KeyValues *Key; // rax
  int v18; // eax
  const char *v19; // rax
  char v20; // al
  const char *v21; // rax
  int v22; // r14d
  int *m_pCastRanges; // rax
  unsigned __int64 v24; // r15
  __int64 v25; // r14
  int *v26; // r13
  const char *v27; // rdi
  __int64 v28; // r14
  int i; // r13d
  char *v30; // rdi
  const char *v31; // rax
  const char *v32; // rax
  int v33; // r14d
  float *m_pCastPoints; // rax
  unsigned __int64 v35; // r15
  __int64 v36; // r14
  float *v37; // r13
  const char *v38; // rdi
  __m128d v39; // xmm0
  __int64 v40; // r14
  int j; // r13d
  char *v42; // rdi
  const char *v43; // rax
  int v44; // r14d
  float *m_pChannelTimes; // rax
  unsigned __int64 v46; // r15
  __int64 v47; // r14
  float *v48; // r13
  const char *v49; // rdi
  __m128d v50; // xmm0
  __int64 v51; // r14
  int k; // r13d
  char *v53; // rdi
  const char *v54; // rax
  int v55; // r14d
  float *m_pCooldowns; // rax
  unsigned __int64 v57; // r15
  __int64 v58; // r14
  float *v59; // r13
  const char *v60; // rdi
  __m128d v61; // xmm0
  __int64 v62; // r14
  int m; // r13d
  char *v64; // rdi
  const char *v65; // rax
  int v66; // r14d
  float *m_pDurations; // rax
  unsigned __int64 v68; // r15
  __int64 v69; // r14
  float *v70; // r13
  const char *v71; // rdi
  __m128d v72; // xmm0
  __int64 v73; // r14
  int n; // r13d
  char *v75; // rdi
  const char *v76; // rax
  int v77; // r14d
  int *m_pDamages; // rax
  unsigned __int64 v79; // r15
  __int64 v80; // r14
  int *v81; // r13
  const char *v82; // rdi
  __int64 v83; // r14
  int ii; // r13d
  char *v85; // rdi
  const char *v86; // rax
  int v87; // r14d
  int *m_pManaCosts; // rax
  unsigned __int64 v89; // r15
  __int64 v90; // r14
  int *v91; // r13
  const char *v92; // rdi
  __int64 v93; // r14
  int jj; // r13d
  char *v95; // rdi
  const char *v96; // rax
  int v97; // r14d
  int *m_pChannelledManaCosts; // rax
  unsigned __int64 v99; // r15
  __int64 v100; // r14
  int *v101; // r13
  const char *v102; // rdi
  __int64 v103; // r14
  int kk; // r13d
  char *v105; // rdi
  const char *v106; // rax
  int v107; // r14d
  int *m_pGoldCosts; // rax
  unsigned __int64 v109; // r15
  __int64 v110; // r14
  int *v111; // r13
  const char *v112; // rdi
  __int64 v113; // r14
  int mm; // r13d
  char *v115; // rdi
  const char *v116; // rax
  int v117; // r14d
  int *m_pGoldCostsForUpgrade; // rax
  unsigned __int64 v119; // r15
  __int64 v120; // r14
  int *v121; // r13
  const char *v122; // rdi
  __int64 v123; // r14
  int nn; // r13d
  char *v125; // rdi
  const char *v126; // rax
  __m128d v127; // xmm0
  float v128; // xmm5_4
  const char *v129; // rax
  __m128d v130; // xmm0
  float v131; // xmm6_4
  CDOTAGameManager *v132; // rax
  KeyValues *v133; // rax
  CDOTAGameManager *v134; // rax
  KeyValues *v135; // rax
  int v136; // eax
  float v137; // xmm1_4
  int v138; // eax
  bool v139; // zf
  const char *v140; // rax
  int v141; // r15d
  void *v142; // rax
  const char *v143; // rax
  const char *v144; // rax
  const char *v145; // rax
  int v146; // r13d
  const char *v147; // rax
  int *v148; // rax
  int m_Size; // r15d
  __int64 v150; // r13
  int v151; // r14d
  __int64 v152; // rax
  char v153; // al
  int *v154; // r13
  __int64 v155; // rax
  const char *v156; // rax
  const char *v157; // rax
  __int64 v158; // r15
  int v159; // r14d
  CUtlString *v160; // r13
  const char *v161; // rax
  const char *v162; // rsi
  __int64 v163; // r13
  int v164; // eax
  int m_iAbilityType; // eax
  int *v166; // r13
  __int64 v167; // rax
  bool v171; // [rsp+28h] [rbp-1A8h]
  CUtlString v172[2]; // [rsp+30h] [rbp-1A0h] BYREF
  CUtlStringList szValues; // [rsp+40h] [rbp-190h] BYREF
  KeyValues kvAbility; // [rsp+60h] [rbp-170h] BYREF
  CFmtStrN<256,false> v175; // [rsp+80h] [rbp-150h] BYREF
  unsigned __int64 v176; // [rsp+198h] [rbp-38h]

  v176 = __readfsqword(0x28u);
  v171 = pAbilityData == 0 || pAbilityKeys == 0;
  if ( v171 || pAbilityBase == 0 )
    return;
  Name = KeyValues::GetName(pAbilityKeys);
  KeyValues::KeyValues(&kvAbility, Name);
  KeyValues::CopySubkeys(pAbilityBase, &kvAbility);
  KeyValues::MergeFrom(&kvAbility, pAbilityKeys, KeyValues::MergeKeyValuesOp_t::MERGE_KV_UPDATE);
  pAbilityData->m_pszAbilityName = Name;
  String = KeyValues::GetString(pAbilityKeys, "BaseClass", Name, 0, 0);
  pAbilityData->m_pszTextureName = KeyValues::GetString(pAbilityKeys, "AbilityTextureName", String, 0, 0);
  v12 = KeyValues::GetString(pAbilityBase, "AbilitySharedCooldown", 0, 0, 0);
  v13 = KeyValues::GetString(pAbilityKeys, "AbilitySharedCooldown", v12, 0, 0);
  if ( v13 != 0 && *v13 != 0 )
    pAbilityData->m_pszSharedCooldownName = v13;
  else
    pAbilityData->m_pszSharedCooldownName = 0;
  pAbilityData->m_iAbilityID = KeyValues::GetInt(&kvAbility, "ID", nAbilityIDOverride);
  pAbilityData->m_iAbilityType = CDOTABaseAbility::LoadAbilityDataType(version, &kvAbility);
  pAbilityData->m_iAbilityBehavior = CDOTABaseAbility::LoadAbilityDataBehavior(version, &kvAbility);
  pAbilityData->m_iAbilityTargetTeam = CDOTABaseAbility::LoadAbilityDataTargetTeam(version, &kvAbility);
  pAbilityData->m_iAbilityTargetType = CDOTABaseAbility::LoadAbilityDataTargetType(version, &kvAbility);
  pAbilityData->m_iAbilityTargetFlags = CDOTABaseAbility::LoadAbilityDataTargetFlags(version, &kvAbility);
  pAbilityData->m_iAbilityDamageType = CDOTABaseAbility::LoadAbilityDataDamageType(version, &kvAbility);
  pAbilityData->m_iAbilityImmunityType = CDOTABaseAbility::LoadAbilityDataImmunityType(version, &kvAbility);
  pAbilityData->m_iAbilityDispellableType = CDOTABaseAbility::LoadAbilityDataDispellableType(version, &kvAbility);
  pAbilityData->m_iFightRecapLevel = KeyValues::GetInt(&kvAbility, "FightRecapLevel", 0);
  pAbilityData->m_iAssociatedConsumableItemDef = KeyValues::GetInt(&kvAbility, "AssociatedConsumable", 0);
  pAbilityData->m_iAssociatedEventID = KeyValues::GetInt(&kvAbility, "EventID", 0);
  *(pAbilityData + 377) = (8 * (KeyValues::GetInt(&kvAbility, "OnLearnbar", 1) != 0)) | *(pAbilityData + 377) & 0xF7;
  *(pAbilityData + 377) = (16 * (KeyValues::GetInt(&kvAbility, "IsGrantedByScepter", 0) != 0))
                        | *(pAbilityData + 377) & 0xEF;
  *(pAbilityData + 377) = (32 * (KeyValues::GetInt(&kvAbility, "IsCastableWhileHidden", 0) != 0))
                        | *(pAbilityData + 377) & 0xDF;
  *(pAbilityData + 377) = (KeyValues::GetInt(&kvAbility, "DisplayAdditionalHeroes", 0) != 0)
                        | *(pAbilityData + 377) & 0xFE;
  *(pAbilityData + 377) = ((KeyValues::GetInt(&kvAbility, "AnimationIgnoresModelScale", 0) != 0) << 6)
                        | *(pAbilityData + 377) & 0xBF;
  *(pAbilityData + 377) = ((KeyValues::GetInt(&kvAbility, "PlayerSpecificCooldown", 0) != 0) << 7)
                        | *(pAbilityData + 377) & 0x7F;
  Int = KeyValues::GetInt(&kvAbility, "HasScepterUpgrade", 0);
  m_pszAbilityName = pAbilityData->m_pszAbilityName;
  pAbilityData->m_bHasScepterUpgrade = Int != 0;
  v16 = _V_strncmp(m_pszAbilityName, "item_", 5);
  *(pAbilityData + 376) = (v16 == 0) | *(pAbilityData + 376) & 0xFE;
  if ( v16 != 0 )
  {
    Key = KeyValues::FindKey(&kvAbility, "MaxLevel", 0);
    pAbilityData->m_iItemID = 0;
    if ( Key != 0 )
    {
      v18 = KeyValues::GetInt(&kvAbility, "MaxLevel", 4);
    }
    else
    {
      m_iAbilityType = pAbilityData->m_iAbilityType;
      if ( m_iAbilityType == 1 )
      {
        pAbilityData->m_iMaxLevel = 3;
        goto LABEL_10;
      }
      if ( m_iAbilityType == 2 )
      {
        pAbilityData->m_iMaxLevel = 4;
        goto LABEL_10;
      }
      v18 = m_iAbilityType == 0 ? 4 : 0;
    }
  }
  else
  {
    pAbilityData->m_iItemID = KeyValues::GetInt(&kvAbility, "ID", -1);
    v18 = KeyValues::GetInt(&kvAbility, "MaxUpgradeLevel", 0);
  }
  pAbilityData->m_iMaxLevel = v18;
LABEL_10:
  pAbilityData->m_iRequiredLevel = KeyValues::GetInt(&kvAbility, "RequiredLevel", -1);
  pAbilityData->m_iLevelsBetweenUpgrades = KeyValues::GetInt(&kvAbility, "LevelsBetweenUpgrades", -1);
  v19 = KeyValues::GetString(pAbilityBase, "HotKeyOverride", 0, 0, 0);
  pAbilityData->m_pszKeyOverride = KeyValues::GetString(pAbilityKeys, "HotKeyOverride", v19, 0, 0);
  pAbilityData->m_iItemBaseLevel = KeyValues::GetInt(&kvAbility, "ItemBaseLevel", -1);
  v20 = *(pAbilityData + 376);
  pAbilityData->m_pszItemRecipeName = "";
  *(pAbilityData + 376) = v20 & 0xFB;
  if ( (v20 & 1) != 0 )
  {
    v132 = DOTAGameManager();
    v133 = KeyValues::FindKey(&kvAbility, v132->m_hKvSymbols[4]);
    if ( v133 != 0 )
      v171 = CKeyValues_Data::Internal_GetInt(v133) != 0;
    *(pAbilityData + 376) = (2 * v171) | *(pAbilityData + 376) & 0xFD;
    v134 = DOTAGameManager();
    v135 = KeyValues::FindKey(&kvAbility, v134->m_hKvSymbols[6]);
    if ( v135 != 0 )
      v136 = CKeyValues_Data::Internal_GetInt(v135);
    else
      v136 = 0;
    pAbilityData->m_iItemCost = v136;
    *(pAbilityData + 376) = (8 * (KeyValues::GetInt(&kvAbility, "SecretShop", 0) != 0)) | *(pAbilityData + 376) & 0xF7;
    *(pAbilityData + 376) = (16 * (KeyValues::GetInt(&kvAbility, "SideShop", 0) != 0)) | *(pAbilityData + 376) & 0xEF;
    pAbilityData->m_iItemStockMax = KeyValues::GetInt(&kvAbility, "ItemStockMax", 0);
    pAbilityData->m_fItemStockTime = KeyValues::GetFloat(&kvAbility, "ItemStockTime", v137);
    *(pAbilityData + 376) = (32 * (KeyValues::GetInt(&kvAbility, "ItemSupport", 0) != 0)) | *(pAbilityData + 376) & 0xDF;
    *(pAbilityData + 376) = ((KeyValues::GetInt(&kvAbility, "ItemPurchasable", 0) != 0) << 6)
                          | *(pAbilityData + 376) & 0xBF;
    *(pAbilityData + 376) = ((KeyValues::GetInt(&kvAbility, "ItemStackable", 0) != 0) << 7)
                          | *(pAbilityData + 376) & 0x7F;
    *(pAbilityData + 377) = (2 * (KeyValues::GetInt(&kvAbility, "ItemContributesToNetWorthWhenDropped", 1) != 0))
                          | *(pAbilityData + 377) & 0xFD;
    v138 = KeyValues::GetInt(&kvAbility, "AllowedInBackpack", 1);
    v139 = (*(pAbilityData + 376) & 2) == 0;
    *(pAbilityData + 378) = (v138 != 0) | *(pAbilityData + 378) & 0xFE;
    if ( v139 )
    {
      v140 = _V_StringAfterPrefix(pAbilityData->m_pszAbilityName, "item_");
      if ( v140 != 0 )
      {
        CFmtStrN<256,false>::CFmtStrN(&v175, "item_recipe_%s", v140);
        if ( KeyValues::FindKey(pAbilitiesKeyValues, v175.m_szBuf, 0) != 0 )
        {
          *(pAbilityData + 376) |= 4u;
          v141 = strlen(v175.m_szBuf) + 1;
          v142 = CUtlScratchMemoryPool::AllocAligned(pMemPool, v141, 1);
          pAbilityData->m_pszItemRecipeName = memcpy(v142, v175.m_szBuf, v141);
        }
      }
    }
    v143 = KeyValues::GetString(pAbilityBase, "Model", "models/props_gameplay/red_box.vmdl", 0, 0);
    pAbilityData->m_pModelName = KeyValues::GetString(pAbilityKeys, "Model", v143, 0, 0);
    v144 = KeyValues::GetString(pAbilityBase, "Model", "models/props_gameplay/red_box.vmdl", 0, 0);
    pAbilityData->m_pModelAlternateName = KeyValues::GetString(pAbilityKeys, "ModelAlternate", v144, 0, 0);
    v145 = KeyValues::GetString(pAbilityBase, "Effect", "particles/generic_gameplay/dropped_item.vpcf", 0, 0);
    pAbilityData->m_pEffectName = KeyValues::GetString(pAbilityKeys, "Effect", v145, 0, 0);
    pAbilityData->m_pPingOverrideText = KeyValues::GetString(pAbilityKeys, "PingOverrideText", 0, 0, 0);
    v146 = ((*(pAbilityData + 376) & 8) != 0) - (((*(pAbilityData + 376) & 0x10) == 0) - 1);
    v147 = KeyValues::GetString(&kvAbility, "ItemShopTags", 0, 0, 0);
    if ( v147 != 0 )
    {
      szValues.m_Size = 0;
      szValues.m_Memory.m_pMemory = 0;
      szValues.m_Memory.m_nAllocationCount = 0;
      szValues.m_Memory.m_nGrowSize = 0;
      V_SplitString(v147, ";", &szValues);
      v148 = CUtlScratchMemoryPool::AllocAligned(pMemPool, 4 * (v146 + szValues.m_Size), 4);
      m_Size = szValues.m_Size;
      pAbilityData->m_pItemShopTagKeys = v148;
      if ( m_Size > 0 )
      {
        v150 = 0;
        v151 = 0;
        do
        {
          v152 = KeyValuesSystem();
          ++v151;
          pAbilityData->m_pItemShopTagKeys[v150] = (*(*v152 + 16LL))(v152, szValues.m_Memory.m_pMemory[v150], 1);
          ++v150;
          m_Size = szValues.m_Size;
        }
        while ( szValues.m_Size > v151 );
      }
      CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(&szValues);
      CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&szValues);
    }
    else
    {
      pAbilityData->m_pItemShopTagKeys = CUtlScratchMemoryPool::AllocAligned(pMemPool, 4 * v146, 4);
      m_Size = 0;
    }
    v153 = *(pAbilityData + 376);
    if ( (v153 & 8) != 0 )
    {
      v166 = &pAbilityData->m_pItemShopTagKeys[m_Size];
      v167 = KeyValuesSystem();
      *v166 = (*(*v167 + 16LL))(v167, "secretshop", 1);
      ++m_Size;
      v153 = *(pAbilityData + 376);
    }
    if ( (v153 & 0x10) != 0 )
    {
      v154 = &pAbilityData->m_pItemShopTagKeys[m_Size];
      v155 = KeyValuesSystem();
      *v154 = (*(*v155 + 16LL))(v155, "sideshop", 1);
    }
    v156 = KeyValues::GetString(&kvAbility, "ItemQuality", "component", 0, 0);
    pAbilityData->m_ItemQuality = GetItemQuality(v156);
    v157 = KeyValues::GetString(&kvAbility, "InvalidHeroes", 0, 0, 0);
    if ( v157 != 0 )
    {
      szValues.m_Size = 0;
      szValues.m_Memory.m_pMemory = 0;
      szValues.m_Memory.m_nAllocationCount = 0;
      szValues.m_Memory.m_nGrowSize = 0;
      V_SplitString(v157, ";", &szValues);
      if ( szValues.m_Size > 0 )
      {
        v158 = 0;
        v159 = 0;
        do
        {
          v162 = szValues.m_Memory.m_pMemory[v158];
          v172[0].m_pString = 0;
          CUtlString::Set(v172, v162);
          v163 = pAbilityData->m_InvalidHeroes.m_Size;
          v164 = pAbilityData->m_InvalidHeroes.m_Size;
          if ( v163 == pAbilityData->m_InvalidHeroes.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CUtlString,int>::Grow(&pAbilityData->m_InvalidHeroes.m_Memory, 1);
            v164 = pAbilityData->m_InvalidHeroes.m_Size;
          }
          pAbilityData->m_InvalidHeroes.m_Size = v164 + 1;
          v160 = &pAbilityData->m_InvalidHeroes.m_Memory.m_pMemory[v163];
          if ( v160 != 0 )
          {
            v160->m_pString = 0;
            v161 = CUtlString::Get(v172);
            CUtlString::Set(v160, v161);
          }
          if ( v172[0].m_pString != 0 )
            CUtlString::FreeMemoryBlock(v172);
          ++v159;
          ++v158;
        }
        while ( szValues.m_Size > v159 );
      }
      CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(&szValues);
      CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&szValues);
    }
  }
  else
  {
    pAbilityData->m_iItemCost = 0;
    *(pAbilityData + 376) = v20 & 0xF9;
    pAbilityData->m_pModelName = "";
    pAbilityData->m_pModelAlternateName = "";
    pAbilityData->m_pEffectName = "";
  }
  CDOTABaseAbility::LoadAbilityDataSpecial(
    version,
    pAbilityKeys,
    pMemPool,
    &pAbilityData->m_nSpecialAbilities,
    &pAbilityData->m_pSpecialAbilities);
  szValues.m_Size = 0;
  szValues.m_Memory.m_pMemory = 0;
  szValues.m_Memory.m_nAllocationCount = 0;
  szValues.m_Memory.m_nGrowSize = 0;
  v21 = KeyValues::GetString(&kvAbility, "AbilityCastRange", "", 0, 0);
  V_SplitString(v21, " ", &szValues);
  v22 = szValues.m_Size;
  pAbilityData->m_nCastRanges = szValues.m_Size;
  m_pCastRanges = CUtlScratchMemoryPool::AllocAligned(pMemPool, 4 * v22, 4);
  pAbilityData->m_pCastRanges = m_pCastRanges;
  if ( v22 > 0 )
  {
    v24 = 0;
    v25 = 4LL * (v22 - 1) + 4;
    while ( 1 )
    {
      v26 = &m_pCastRanges[v24 / 4];
      v27 = szValues.m_Memory.m_pMemory[v24 / 4];
      v24 += 4LL;
      *v26 = strtol(v27, 0, 10);
      if ( v24 == v25 )
        break;
      m_pCastRanges = pAbilityData->m_pCastRanges;
    }
  }
  v28 = 0;
  for ( i = 0; i < szValues.m_Size; ++i )
  {
    v30 = szValues.m_Memory.m_pMemory[v28++];
    operator delete(v30);
  }
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  v31 = KeyValues::GetString(&kvAbility, "AbilityCastRangeBuffer", "", 0, 0);
  pAbilityData->m_nCastRangeBuffer = strtol(v31, 0, 10);
  v32 = KeyValues::GetString(&kvAbility, "AbilityCastPoint", "", 0, 0);
  V_SplitString(v32, " ", &szValues);
  v33 = szValues.m_Size;
  pAbilityData->m_nCastPoints = szValues.m_Size;
  m_pCastPoints = CUtlScratchMemoryPool::AllocAligned(pMemPool, 4 * v33, 4);
  pAbilityData->m_pCastPoints = m_pCastPoints;
  if ( v33 > 0 )
  {
    v35 = 0;
    v36 = 4LL * (v33 - 1) + 4;
    while ( 1 )
    {
      v37 = &m_pCastPoints[v35 / 4];
      v38 = szValues.m_Memory.m_pMemory[v35 / 4];
      v35 += 4LL;
      v39.m128d_f64[0] = strtod(v38, 0);
      *v37 = _mm_movedup_pd(v39).m128d_f64[0];
      if ( v35 == v36 )
        break;
      m_pCastPoints = pAbilityData->m_pCastPoints;
    }
  }
  v40 = 0;
  for ( j = 0; j < szValues.m_Size; ++j )
  {
    v42 = szValues.m_Memory.m_pMemory[v40++];
    operator delete(v42);
  }
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  v43 = KeyValues::GetString(&kvAbility, "AbilityChannelTime", "", 0, 0);
  V_SplitString(v43, " ", &szValues);
  v44 = szValues.m_Size;
  pAbilityData->m_nChannelTimes = szValues.m_Size;
  m_pChannelTimes = CUtlScratchMemoryPool::AllocAligned(pMemPool, 4 * v44, 4);
  pAbilityData->m_pChannelTimes = m_pChannelTimes;
  if ( v44 > 0 )
  {
    v46 = 0;
    v47 = 4LL * (v44 - 1) + 4;
    while ( 1 )
    {
      v48 = &m_pChannelTimes[v46 / 4];
      v49 = szValues.m_Memory.m_pMemory[v46 / 4];
      v46 += 4LL;
      v50.m128d_f64[0] = strtod(v49, 0);
      *v48 = _mm_movedup_pd(v50).m128d_f64[0];
      if ( v46 == v47 )
        break;
      m_pChannelTimes = pAbilityData->m_pChannelTimes;
    }
  }
  v51 = 0;
  for ( k = 0; k < szValues.m_Size; ++k )
  {
    v53 = szValues.m_Memory.m_pMemory[v51++];
    operator delete(v53);
  }
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  v54 = KeyValues::GetString(&kvAbility, "AbilityCooldown", "", 0, 0);
  V_SplitString(v54, " ", &szValues);
  v55 = szValues.m_Size;
  pAbilityData->m_nCooldowns = szValues.m_Size;
  m_pCooldowns = CUtlScratchMemoryPool::AllocAligned(pMemPool, 4 * v55, 4);
  pAbilityData->m_pCooldowns = m_pCooldowns;
  if ( v55 > 0 )
  {
    v57 = 0;
    v58 = 4LL * (v55 - 1) + 4;
    while ( 1 )
    {
      v59 = &m_pCooldowns[v57 / 4];
      v60 = szValues.m_Memory.m_pMemory[v57 / 4];
      v57 += 4LL;
      v61.m128d_f64[0] = strtod(v60, 0);
      *v59 = _mm_movedup_pd(v61).m128d_f64[0];
      if ( v57 == v58 )
        break;
      m_pCooldowns = pAbilityData->m_pCooldowns;
    }
  }
  v62 = 0;
  for ( m = 0; m < szValues.m_Size; ++m )
  {
    v64 = szValues.m_Memory.m_pMemory[v62++];
    operator delete(v64);
  }
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  v65 = KeyValues::GetString(&kvAbility, "AbilityDuration", "", 0, 0);
  V_SplitString(v65, " ", &szValues);
  v66 = szValues.m_Size;
  pAbilityData->m_nDurations = szValues.m_Size;
  m_pDurations = CUtlScratchMemoryPool::AllocAligned(pMemPool, 4 * v66, 4);
  pAbilityData->m_pDurations = m_pDurations;
  if ( v66 > 0 )
  {
    v68 = 0;
    v69 = 4LL * (v66 - 1) + 4;
    while ( 1 )
    {
      v70 = &m_pDurations[v68 / 4];
      v71 = szValues.m_Memory.m_pMemory[v68 / 4];
      v68 += 4LL;
      v72.m128d_f64[0] = strtod(v71, 0);
      *v70 = _mm_movedup_pd(v72).m128d_f64[0];
      if ( v68 == v69 )
        break;
      m_pDurations = pAbilityData->m_pDurations;
    }
  }
  v73 = 0;
  for ( n = 0; n < szValues.m_Size; ++n )
  {
    v75 = szValues.m_Memory.m_pMemory[v73++];
    operator delete(v75);
  }
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  v76 = KeyValues::GetString(&kvAbility, "AbilityDamage", "", 0, 0);
  V_SplitString(v76, " ", &szValues);
  v77 = szValues.m_Size;
  pAbilityData->m_nDamages = szValues.m_Size;
  m_pDamages = CUtlScratchMemoryPool::AllocAligned(pMemPool, 4 * v77, 4);
  pAbilityData->m_pDamages = m_pDamages;
  if ( v77 > 0 )
  {
    v79 = 0;
    v80 = 4LL * (v77 - 1) + 4;
    while ( 1 )
    {
      v81 = &m_pDamages[v79 / 4];
      v82 = szValues.m_Memory.m_pMemory[v79 / 4];
      v79 += 4LL;
      *v81 = strtol(v82, 0, 10);
      if ( v79 == v80 )
        break;
      m_pDamages = pAbilityData->m_pDamages;
    }
  }
  v83 = 0;
  for ( ii = 0; ii < szValues.m_Size; ++ii )
  {
    v85 = szValues.m_Memory.m_pMemory[v83++];
    operator delete(v85);
  }
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  v86 = KeyValues::GetString(&kvAbility, "AbilityManaCost", "", 0, 0);
  V_SplitString(v86, " ", &szValues);
  v87 = szValues.m_Size;
  pAbilityData->m_nManaCosts = szValues.m_Size;
  m_pManaCosts = CUtlScratchMemoryPool::AllocAligned(pMemPool, 4 * v87, 4);
  pAbilityData->m_pManaCosts = m_pManaCosts;
  if ( v87 > 0 )
  {
    v89 = 0;
    v90 = 4LL * (v87 - 1) + 4;
    while ( 1 )
    {
      v91 = &m_pManaCosts[v89 / 4];
      v92 = szValues.m_Memory.m_pMemory[v89 / 4];
      v89 += 4LL;
      *v91 = strtol(v92, 0, 10);
      if ( v89 == v90 )
        break;
      m_pManaCosts = pAbilityData->m_pManaCosts;
    }
  }
  v93 = 0;
  for ( jj = 0; jj < szValues.m_Size; ++jj )
  {
    v95 = szValues.m_Memory.m_pMemory[v93++];
    operator delete(v95);
  }
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  v96 = KeyValues::GetString(&kvAbility, "AbilityChannelledManaCostPerSecond", "", 0, 0);
  V_SplitString(v96, " ", &szValues);
  v97 = szValues.m_Size;
  pAbilityData->m_nChannelledManaCosts = szValues.m_Size;
  m_pChannelledManaCosts = CUtlScratchMemoryPool::AllocAligned(pMemPool, 4 * v97, 4);
  pAbilityData->m_pChannelledManaCosts = m_pChannelledManaCosts;
  if ( v97 > 0 )
  {
    v99 = 0;
    v100 = 4LL * (v97 - 1) + 4;
    while ( 1 )
    {
      v101 = &m_pChannelledManaCosts[v99 / 4];
      v102 = szValues.m_Memory.m_pMemory[v99 / 4];
      v99 += 4LL;
      *v101 = strtol(v102, 0, 10);
      if ( v99 == v100 )
        break;
      m_pChannelledManaCosts = pAbilityData->m_pChannelledManaCosts;
    }
  }
  v103 = 0;
  for ( kk = 0; kk < szValues.m_Size; ++kk )
  {
    v105 = szValues.m_Memory.m_pMemory[v103++];
    operator delete(v105);
  }
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  v106 = KeyValues::GetString(&kvAbility, "AbilityGoldCost", "", 0, 0);
  V_SplitString(v106, " ", &szValues);
  v107 = szValues.m_Size;
  pAbilityData->m_nGoldCosts = szValues.m_Size;
  m_pGoldCosts = CUtlScratchMemoryPool::AllocAligned(pMemPool, 4 * v107, 4);
  pAbilityData->m_pGoldCosts = m_pGoldCosts;
  if ( v107 > 0 )
  {
    v109 = 0;
    v110 = 4LL * (v107 - 1) + 4;
    while ( 1 )
    {
      v111 = &m_pGoldCosts[v109 / 4];
      v112 = szValues.m_Memory.m_pMemory[v109 / 4];
      v109 += 4LL;
      *v111 = strtol(v112, 0, 10);
      if ( v109 == v110 )
        break;
      m_pGoldCosts = pAbilityData->m_pGoldCosts;
    }
  }
  v113 = 0;
  for ( mm = 0; mm < szValues.m_Size; ++mm )
  {
    v115 = szValues.m_Memory.m_pMemory[v113++];
    operator delete(v115);
  }
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  v116 = KeyValues::GetString(&kvAbility, "AbilityUpgradeGoldCost", "", 0, 0);
  V_SplitString(v116, " ", &szValues);
  v117 = szValues.m_Size;
  pAbilityData->m_nGoldCostsForUpgrade = szValues.m_Size;
  m_pGoldCostsForUpgrade = CUtlScratchMemoryPool::AllocAligned(pMemPool, 4 * v117, 4);
  pAbilityData->m_pGoldCostsForUpgrade = m_pGoldCostsForUpgrade;
  if ( v117 > 0 )
  {
    v119 = 0;
    v120 = 4LL * (v117 - 1) + 4;
    while ( 1 )
    {
      v121 = &m_pGoldCostsForUpgrade[v119 / 4];
      v122 = szValues.m_Memory.m_pMemory[v119 / 4];
      v119 += 4LL;
      *v121 = strtol(v122, 0, 10);
      if ( v119 == v120 )
        break;
      m_pGoldCostsForUpgrade = pAbilityData->m_pGoldCostsForUpgrade;
    }
  }
  v123 = 0;
  for ( nn = 0; nn < szValues.m_Size; ++nn )
  {
    v125 = szValues.m_Memory.m_pMemory[v123++];
    operator delete(v125);
  }
  szValues.m_Size = 0;
  if ( (szValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<char *,int>::Purge(&szValues.m_Memory);
  v126 = KeyValues::GetString(&kvAbility, "AbilityModifierSupportValue", "", 0, 0);
  v127.m128d_f64[0] = strtod(v126, 0);
  v128 = _mm_movedup_pd(v127).m128d_f64[0];
  pAbilityData->m_flModifierValue = v128;
  v129 = KeyValues::GetString(&kvAbility, "AbilityModifierSupportBonus", "", 0, 0);
  v130.m128d_f64[0] = strtod(v129, 0);
  v131 = _mm_movedup_pd(v130).m128d_f64[0];
  pAbilityData->m_flModifierValueBonus = v131;
  CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&szValues);
  KeyValues::~KeyValues(&kvAbility);
}


// CDOTABaseAbility::GetSpecialAbility  (line 1023, @0x000000000242eac0, libserver.so)  // inlines: FStrEq, GetAbilityData, GetNumSpecialAbilities, _V_strcmp
// calls: strcmp, CDOTABaseAbility::LoadAbilityData
// callers: CDOTABaseAbility_BotScript::GetSpecialValueInt, CDOTABaseAbility_BotScript::GetSpecialValueFloat, CDOTA_Ability_DataDriven::LookupValueSymbol, CDOTABaseAbility::Script_GetLevelSpecialValueFor, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Modifier_GreaterClarity::OnCreated, CDOTA_Modifier_Healing_Campfire_Heal::OnCreated, CDOTA_Modifier_UpgradedMortar::OnCreated, CDOTA_Modifier_Radar_Thinker::OnCreated, CDOTA_Item_DataDriven::LookupValueSymbol (44 total)
DOTASpecialAbility_t *__fastcall CDOTABaseAbility::GetSpecialAbility(CDOTABaseAbility *const this, const char *szName)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_nSpecialAbilities; // r14d
  unsigned __int64 v6; // rbx
  DOTASpecialAbility_t *m_pSpecialAbilities; // r12
  __int64 v8; // r14
  DOTASpecialAbility_t *v9; // r15

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_nSpecialAbilities = m_pAbilityData->m_nSpecialAbilities;
  if ( m_nSpecialAbilities <= 0 )
    return 0;
  v6 = 0;
  m_pSpecialAbilities = m_pAbilityData->m_pSpecialAbilities;
  v8 = 368 * ((m_nSpecialAbilities - 1) + 1LL);
  while ( 1 )
  {
    v9 = &m_pSpecialAbilities[v6 / 0x170];
    if ( &m_pSpecialAbilities[v6 / 0x170] != 0 && (v9->m_pszName == szName || strcmp(v9->m_pszName, szName) == 0) )
      break;
    v6 += 368LL;
    if ( v6 == v8 )
      return 0;
  }
  return v9;
}


// CDOTABaseAbility::Script_GetLevelSpecialValueFor  (line 1045, @0x000000000243ac40, libserver.so)  // inlines: CVariantBase, GetEffectiveLevel, GetFloat, GetInt, operator float, operator int, ~CVariantBase
// calls: CDOTABaseAbility::GetSpecialAbility, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDOTABaseAbility::Script_GetSpecialValueFor
CVariantBase<CVariantDefaultAllocator> *__fastcall CDOTABaseAbility::Script_GetLevelSpecialValueFor(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CDOTABaseAbility *const this,
        const char *szName,
        int nLevel)
{
  int v4; // r12d
  DOTASpecialAbility_t *SpecialAbility; // rax
  int m_nCount; // edx
  int v8; // ecx
  bool v9; // cc
  fieldtype_t m_FieldType; // edx
  fieldtype_t *v11; // rax
  __int16 v12; // dx
  int v13; // eax
  int m_Value; // eax
  fieldtype_t *v16; // rax
  int v17; // xmm0_4
  ScriptVariant_t returnValue; // [rsp+0h] [rbp-20h] BYREF

  v4 = nLevel;
  if ( nLevel == -1 )
  {
    m_Value = this->m_iLevel.m_Value;
    v4 = m_Value - 1;
    if ( m_Value == 0 )
      goto LABEL_12;
  }
  SpecialAbility = CDOTABaseAbility::GetSpecialAbility(this, szName);
  if ( SpecialAbility == 0 )
    goto LABEL_12;
  m_nCount = SpecialAbility->m_nCount;
  v8 = m_nCount - 1;
  v9 = m_nCount <= v4;
  m_FieldType = SpecialAbility->m_FieldType;
  if ( v9 )
    v4 = v8;
  if ( m_FieldType != fieldtype_t::FIELD_FLOAT )
  {
    if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
    {
      v11 = &SpecialAbility->m_FieldType + 4 * v4;
      v12 = *(v11 + 8);
      if ( v12 == 1 )
      {
        v13 = *(v11 + 2);
      }
      else if ( v12 == 34 )
      {
        v13 = *(v11 + 1);
      }
      else
      {
        v13 = *(v11 + 2);
      }
      a1->m_type = 0;
      a1->m_flags = 0;
      returnValue.m_type = 5;
      returnValue.m_flags = 0;
      returnValue.m_int = v13;
      CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&returnValue, a1);
      CVariantBase<CVariantDefaultAllocator>::Free(&returnValue);
      return a1;
    }
LABEL_12:
    a1->m_int = 0;
    a1->m_flags = 0;
    a1->m_type = 1;
    return a1;
  }
  v16 = &SpecialAbility->m_FieldType + 4 * v4;
  if ( *(v16 + 8) == 34 )
    *&v17 = *(v16 + 1);
  else
    v17 = *(v16 + 2);
  returnValue.m_int = v17;
  returnValue.m_type = 1;
  returnValue.m_flags = 0;
  a1->m_type = 0;
  a1->m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&returnValue, a1);
  CVariantBase<CVariantDefaultAllocator>::Free(&returnValue);
  return a1;
}


// CDOTABaseAbility::Script_GetSpecialValueFor  (line 1089, @0x000000000243ae00, libserver.so)
// calls: CDOTABaseAbility::Script_GetLevelSpecialValueFor
CVariantBase<CVariantDefaultAllocator> *__fastcall CDOTABaseAbility::Script_GetSpecialValueFor(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CDOTABaseAbility *const this,
        const char *szName)
{
  CDOTABaseAbility::Script_GetLevelSpecialValueFor(a1, this, szName, -1);
  return a1;
}


// CDOTABaseAbility::GetHeroLevelRequiredToUpgrade  (line 1097, @0x000000000242eb70, libserver.so)  // inlines: GetAbilityData, GetLevel, GetMaxLevel
// calls: CDOTABaseAbility::LoadAbilityData
// callers: CDOTABaseAbility_BotScript::GetHeroLevelRequiredToUpgrade, CDOTABaseAbility::CanAbilityBeUpgraded
int __fastcall CDOTABaseAbility::GetHeroLevelRequiredToUpgrade(CDOTABaseAbility *const this)
{
  int v2; // eax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iMaxLevel; // r8d
  _BOOL4 v5; // edi
  int v6; // esi
  int v7; // edi
  int m_iRequiredLevel; // eax
  int m_iLevelsBetweenUpgrades; // ecx
  int m_Value; // edx
  int iAbilityType; // [rsp+Ch] [rbp-14h]

  v2 = (*(this->_vptr_IHandleEntity + 214))(this);
  if ( v2 == 3 )
    return 0x7FFFFFFF;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    iAbilityType = v2;
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
    v2 = iAbilityType;
  }
  m_iMaxLevel = m_pAbilityData->m_iMaxLevel;
  if ( v2 == 1 )
  {
    v6 = 6;
    v7 = 6;
  }
  else
  {
    v5 = v2 == 2;
    v6 = 3 * v5 + 2;
    v7 = 9 * v5 + 1;
  }
  m_iRequiredLevel = m_pAbilityData->m_iRequiredLevel;
  m_iLevelsBetweenUpgrades = m_pAbilityData->m_iLevelsBetweenUpgrades;
  m_Value = this->m_iLevel.m_Value;
  if ( m_iRequiredLevel == -1 )
    m_iRequiredLevel = v7;
  if ( m_iLevelsBetweenUpgrades == -1 )
    m_iLevelsBetweenUpgrades = v6;
  if ( m_iMaxLevel <= m_Value )
    return 0x7FFFFFFF;
  else
    return m_Value * m_iLevelsBetweenUpgrades + m_iRequiredLevel;
}


// CDOTABaseAbility::CanAbilityBeUpgraded  (line 1142, @0x000000000242ec80, libserver.so)  // inlines: Get, GetAbilityData, GetCaster, GetGameMode, GetLevel, GetMaxLevel, GetOwnerEntity
// calls: CEntityHandle::GetHandleEntity, CDOTABaseAbility::GetHeroLevelRequiredToUpgrade, CDOTABaseAbility::LoadAbilityData
// callers: CDOTABaseAbility_BotScript::CanAbilityBeUpgraded, DOTA_ExecuteOrders, HeroMaxLevel
AbilityLearnResult_t __fastcall CDOTABaseAbility::CanAbilityBeUpgraded(CDOTABaseAbility *const this)
{
  char v2; // dl
  AbilityLearnResult_t result; // eax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_Value; // r12d
  IHandleEntity *HandleEntity; // rax
  int vptr_IHandleEntity_high; // r12d

  v2 = (*(this->_vptr_IHandleEntity + 251))(this);
  result = AbilityLearnResult_t::ABILITY_NOT_LEARNABLE;
  if ( (v2 & 0x40) == 0 && (!this->m_bStolen.m_Value || *&g_pGameRules[6].m_szQuestName[68] == 18) )
  {
    if ( (*(this->_vptr_IHandleEntity + 214))(this) == 3 )
    {
      return AbilityLearnResult_t::ABILITY_CANNOT_BE_UPGRADED_NOT_UPGRADABLE;
    }
    else
    {
      m_pAbilityData = this->m_pAbilityData;
      m_Value = this->m_iLevel.m_Value;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(this, 0);
        m_pAbilityData = this->m_pAbilityData;
      }
      result = AbilityLearnResult_t::ABILITY_CANNOT_BE_UPGRADED_AT_MAX;
      if ( m_Value < m_pAbilityData->m_iMaxLevel )
      {
        HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
        if ( HandleEntity != 0 && (HandleEntity[261]._vptr_IHandleEntity & 1) != 0 )
        {
          vptr_IHandleEntity_high = HIDWORD(HandleEntity[266]._vptr_IHandleEntity);
          return 3 * (vptr_IHandleEntity_high < CDOTABaseAbility::GetHeroLevelRequiredToUpgrade(this));
        }
        else
        {
          return AbilityLearnResult_t::ABILITY_CAN_BE_UPGRADED;
        }
      }
    }
  }
  return result;
}


// CDOTABaseAbility::GetEffectiveLevel  (line 1173, @0x000000000242cb10, libserver.so)
// callers: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Modifier_GreaterClarity::OnCreated, CDOTA_Modifier_Healing_Campfire_Heal::OnCreated, CDOTA_Modifier_UpgradedMortar::OnCreated, CDOTA_Modifier_Radar_Thinker::OnCreated, CDOTA_Item_DataDriven::LookupValueSymbol, CDOTA_Ability_BigThunderLizard_Frenzy::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Black_BrainSap::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Orange_LightStrikeArray::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Black_Nightmare::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Purple_VenomousGale::DoDesiredCast (182 total)
int __fastcall CDOTABaseAbility::GetEffectiveLevel(CDOTABaseAbility *const this)
{
  return this->m_iLevel.m_Value - 1;
}


// CDOTABaseAbility::CastFilterResult  (line 1181, @0x000000000242e680, libserver.so)  // inlines: CEntityHandle, Get, GetAbilityData, GetAbilityTargetFlags, GetAbilityTargetTeam, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, LookupEntity
// calls: UnitFilter, CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Ability_DataDriven::CastFilterResult, CDOTA_Ability_Lua::Script_CastFilterResultTarget, CDOTA_Ability_Throw_Snowball::CastFilterResult, CDOTA_Ability_Throw_Coal::CastFilterResult, CDOTA_Item_Lua::Script_CastFilterResultTarget, CDOTA_Item_DataDriven::CastFilterResult, CDOTA_Ability_AncientApparition_ColdFeet::CastFilterResult, CDOTA_Ability_Bloodseeker_Rupture::CastFilterResult, CDOTA_Ability_Lina_LagunaBlade::CastFilterResult, CDOTA_Ability_Bane_Nightmare::CastFilterResult, CDOTA_Ability_Bloodseeker_Bloodrage::CastFilterResult, CDOTA_Ability_Kunkka_XMarksTheSpot::CastFilterResult (36 total)
int __fastcall CDOTABaseAbility::CastFilterResult(CDOTABaseAbility *const this, CDOTA_BaseNPC *pTarget)
{
  unsigned __int16 v4; // dx
  __int64 v5; // rsi
  __int64 v6; // rcx
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  char *v9; // rdx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int v11; // r14d
  int m_iAbilityTargetFlags; // r13d
  int v13; // eax
  DOTAAbilityData_t *v14; // rsi
  int v16; // [rsp+Ch] [rbp-34h]

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = 0;
  v7 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  if ( v7 + 2 > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v8 != 0 )
    {
      v5 = 120 * (v5 & 0x1FF);
      v9 = v8 + v5;
      if ( v9 != 0 && v7 == *(v9 + 4) )
        v6 = *v9;
    }
  }
  m_pAbilityData = this->m_pAbilityData;
  v11 = *(v6 + 383);
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityTargetFlags = m_pAbilityData->m_iAbilityTargetFlags;
  v13 = (*(this->_vptr_IHandleEntity + 252))(this, v5);
  v14 = this->m_pAbilityData;
  if ( v14 == 0 )
  {
    v16 = v13;
    CDOTABaseAbility::LoadAbilityData(this, 0);
    v14 = this->m_pAbilityData;
    v13 = v16;
  }
  return UnitFilter(pTarget, v14->m_iAbilityTargetTeam, v13, m_iAbilityTargetFlags, v11);
}


// CDOTABaseAbility::CastFilterResult  (line 1186, @0x000000000241f580, libserver.so)  // inlines: operator==
// callers: CDOTA_Item_Lua::Script_CastFilterResultLocation, CDOTA_Ability_Furion_ForceOfNature::CastFilterResult
int __fastcall CDOTABaseAbility::CastFilterResult(CDOTABaseAbility *const this, const Vector *const vLocation)
{
  int result; // eax

  if ( vec3_invalid.x != vLocation->x )
    return 0;
  if ( vec3_invalid.y != vLocation->y )
    return 0;
  result = 24;
  if ( vec3_invalid.z != vLocation->z )
    return 0;
  return result;
}


// CDOTABaseAbility::IsCooldownReady  (line 1194, @0x0000000002423db0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetCaster, GetCooldownTime, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetModifier_Constant_Highest, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsListeningToEvent, LookupEntity, Set, operator=
// calls: CEntityHandle::GetHandleEntity, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal
// callers: CDOTA_Item::IsCooldownReady, CDOTA_Ability_NianCharge::IsCooldownReady
bool __fastcall CDOTABaseAbility::IsCooldownReady(CDOTABaseAbility *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  unsigned __int16 v4; // dx
  __int64 v5; // rsi
  uint32 v6; // eax
  CEntitySystem *v7; // rcx
  CEntityIdentity *v8; // rdx
  __int64 v9; // rsi
  char v10; // r12
  CEntityInstance *m_pInstance; // rdi
  __int64 v13; // rax
  CModifierParams params; // [rsp+10h] [rbp-A0h] BYREF

  params.bCraniumBasherTested = 0;
  params.ability.m_Index = -1;
  params.fDamage = 0.0;
  params.fOriginalDamage = 0.0;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.ability.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  v7 = g_pEntitySystem;
  v8 = (v6 + 2);
  if ( v8 > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v8 != 0 )
    {
      v9 = v5 & 0x1FF;
      v7 = (8 * v9);
      v5 = 120 * v9;
      v8 = (v8 + v5);
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 )
        {
          v13 = BYTE1(m_pInstance[69].m_iszPrivateVScripts.u.m_Id);
          if ( v13 != 0xFF
            && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v13) > 0
            && CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                 &m_pInstance[64].m_worldGroupId,
                 modifierfunction::MODIFIER_PROPERTY_IGNORE_COOLDOWN,
                 &params) > 0.0 )
          {
            return 1;
          }
        }
      }
    }
  }
  v10 = (*(this->_vptr_IHandleEntity + 238))(this, v5, v8, v7);
  if ( v10 != 0 )
    return 0;
  if ( (CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value) == 0 || this->m_fCooldown.m_Value <= 0.0)
    && !this->m_bInIndefiniteCooldown.m_Value )
  {
    return 1;
  }
  return v10;
}


// CDOTABaseAbility::GetCooldownTimeRemaining  (line 1209, @0x000000000241f5d0, libserver.so)
// callers: CDOTA_Item::OnAbilityPinged, Script_GetShrineCooldown, CDOTA_Bot_AbilityUsage_Refresher::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast::GetCurrentUsageDesire, CDOTA_Bot_Hero_Pudge::IsSavingBlink, CDOTA_BotMode_Attack_Sven::GetDesire, CDOTA_Bot_AbilityUsage_Zuus_ArcLightning::GetCurrentUsageDesire, CDOTAGCServerSystem::SendScoreboardUpdate, CDOTAGCServerSystem::UpdateRealtimeGameState, CDOTA_Modifier_Holdout_GodsStrength::OnDeath, CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::OnCreated (17 total)
float __fastcall CDOTABaseAbility::GetCooldownTimeRemaining(CDOTABaseAbility *const this)
{
  char v2; // al
  float result; // xmm0_4

  v2 = (*(this->_vptr_IHandleEntity + 245))(this);
  result = 0.0;
  if ( v2 == 0 )
    return this->m_fCooldown.m_Value;
  return result;
}


// CDOTABaseAbility::GetCooldownTime  (line 1220, @0x0000000002421380, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// callers: CDOTA_Bot_Hero_Pudge::IsSavingBlink
float __fastcall CDOTABaseAbility::GetCooldownTime(CDOTABaseAbility *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 > 1
    && (v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9]) != 0
    && (v5 = &v4[v2 & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && v5->m_pInstance != 0 )
  {
    return this->m_fCooldown.m_Value;
  }
  else
  {
    return 0.0;
  }
}


// CDOTABaseAbility::GetCooldown  (line 1231, @0x000000000242edb0, libserver.so)  // inlines: GetAbilityData, GetEffectiveLevel
// calls: CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Ability_Lua::Script_GetCooldown, CDOTA_Item_Lua::Script_GetCooldown, CDOTA_Ability_AncientApparition_ColdFeet::GetCooldown, CDOTA_Ability_Bloodseeker_Rupture::GetCooldown, CDOTA_Ability_Juggernaut_Omnislash::GetCooldown, CDOTA_Ability_Pudge_MeatHook::GetCooldown, CDOTA_Ability_AntiMage_Blink::GetCooldown, CDOTA_Ability_Axe_CullingBlade::GetCooldown, CDOTA_Ability_Bloodseeker_Bloodbath::GetCooldown, CDOTA_Ability_Earthshaker_EnchantTotem::GetCooldown, CDOTA_Ability_Lina_DragonSlave::GetCooldown, CDOTA_Ability_Nevermore_Shadowraze::GetCooldown (72 total)
float __fastcall CDOTABaseAbility::GetCooldown(CDOTABaseAbility *const this, int iLevel)
{
  int v3; // ebx
  DOTAAbilityData_t *m_pAbilityData; // rax
  float result; // xmm0_4

  v3 = iLevel;
  if ( iLevel == -1 )
    v3 = this->m_iLevel.m_Value - 1;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  result = 0.0;
  if ( v3 > m_pAbilityData->m_nCooldowns - 1 )
    v3 = m_pAbilityData->m_nCooldowns - 1;
  if ( v3 >= 0 )
    return m_pAbilityData->m_pCooldowns[v3];
  return result;
}


// CDOTABaseAbility::GetCooldownModifier  (line 1246, @0x0000000002422a20, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetCaster, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsListeningToEvent, LookupEntity, Set, operator=
// calls: CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
float __fastcall CDOTABaseAbility::GetCooldownModifier(CDOTABaseAbility *const this, int iLevel)
{
  uint32 m_Index; // edx
  uint32 v4; // esi
  unsigned __int16 v5; // cx
  int v6; // edi
  uint32 v7; // eax
  CEntitySystem *v8; // r8
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  CEntityIdentity *m_pEntity; // rax
  __int16 v13; // di
  unsigned __int16 v14; // cx
  int v15; // r9d
  CEntityInstance *m_pInstance; // rdi
  int v17; // eax
  CEntityIdentity *v18; // rcx
  CEntityIdentity *v19; // rcx
  __int64 v20; // rax
  float Modifier_Constant_Highest_Internal; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  unsigned __int16 v24; // dx
  int v25; // ecx
  CEntityInstance *v26; // rdi
  int v27; // eax
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  __int64 v30; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float v32; // [rsp+8h] [rbp-B8h]
  CModifierParams params; // [rsp+20h] [rbp-A0h] BYREF

  m_Index = this->m_hOwnerEntity.m_Value.m_Index;
  v4 = m_Index >> 15;
  if ( m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  v7 = (v4 << 15) | v5 & 0x7FFF;
  params.ability.m_Index = v7;
  v8 = g_pEntitySystem;
  if ( v7 + 2 <= 1 )
    return 1.0;
  v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
  if ( v9 == 0 )
    return 1.0;
  v10 = &v9[v6 & 0x1FF];
  if ( v10 == 0 || v7 != v10->m_EHandle.m_Index || v10->m_pInstance == 0 )
    return 1.0;
  m_pEntity = this->m_pEntity;
  params.bCraniumBasherTested = 0;
  params.ability.m_Index = -1;
  params.fDamage = 0.0;
  params.fOriginalDamage = 0.0;
  params.bTooltip = 0;
  params.nActivity = -1;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  if ( m_pEntity != 0 )
  {
    v13 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    params.ability.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
  }
  if ( m_Index == -1 )
  {
    v14 = 0x7FFF;
    v15 = 0x7FFF;
  }
  else
  {
    v14 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v15 = v14;
  }
  m_pInstance = 0;
  v17 = (v4 << 15) | v14 & 0x7FFF;
  if ( (v17 + 2) > 1 )
  {
    v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9];
    if ( v18 != 0 )
    {
      v19 = &v18[v15 & 0x1FF];
      if ( v19 != 0 && v17 == v19->m_EHandle.m_Index )
        m_pInstance = v19->m_pInstance;
    }
  }
  v20 = BYTE5(m_pInstance[67].m_iszPrivateVScripts.u.m_pAsString);
  if ( v20 == 0xFF || *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v20) <= 0 )
  {
    v22 = 1.0;
    v23 = 1.0;
    if ( m_Index != -1 )
      goto LABEL_24;
  }
  else
  {
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &m_pInstance[64].m_worldGroupId,
                                           modifierfunction::MODIFIER_PROPERTY_COOLDOWN_PERCENTAGE,
                                           &params);
    v22 = 1.0;
    v8 = g_pEntitySystem;
    v23 = 1.0 - (Modifier_Constant_Highest_Internal / 100.0);
    v4 = this->m_hOwnerEntity.m_Value.m_Index >> 15;
    if ( this->m_hOwnerEntity.m_Value.m_Index != -1 )
    {
LABEL_24:
      v24 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v25 = v24;
      goto LABEL_25;
    }
  }
  v24 = 0x7FFF;
  v25 = 0x7FFF;
LABEL_25:
  v26 = 0;
  v27 = (v4 << 15) | v24 & 0x7FFF;
  if ( (v27 + 2) > 1 )
  {
    v28 = v8->m_EntityList.m_pIdentityChunks[v25 >> 9];
    if ( v28 != 0 )
    {
      v29 = &v28[v25 & 0x1FF];
      if ( v29 != 0 && v27 == v29->m_EHandle.m_Index )
        v26 = v29->m_pInstance;
    }
  }
  v30 = BYTE6(v26[67].m_iszPrivateVScripts.u.m_pAsString);
  if ( v30 != 0xFF && *(*&v26[65].m_worldGroupId.m_nHashCode + 24 * v30) > 0 )
  {
    v32 = v23;
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &v26[64].m_worldGroupId,
                                            modifierfunction::MODIFIER_PROPERTY_COOLDOWN_PERCENTAGE_STACKING,
                                            &params);
    v23 = v32;
    v22 = 1.0 - (Modifier_Constant_Additive_Internal / 100.0);
  }
  return v22 * v23;
}


// CDOTABaseAbility::GetEffectiveCooldown  (line 1263, @0x000000000241f600, libserver.so)
float __fastcall CDOTABaseAbility::GetEffectiveCooldown(CDOTABaseAbility *const this, int iLevel)
{
  float v5; // [rsp+Ch] [rbp-14h]

  v5 = (*(this->_vptr_IHandleEntity + 242))(this);
  return (*(this->_vptr_IHandleEntity + 243))(this, iLevel) * v5;
}


// CDOTABaseAbility::GetManaCost  (line 1271, @0x000000000242ee30, libserver.so)  // inlines: GetAbilityData, GetEffectiveLevel
// calls: CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Ability_Lua::Script_GetManaCost, CDOTA_Item_Lua::Script_GetManaCost, CDOTA_Ability_SkeletonKing_Reincarnation::GetManaCost, CDOTA_Ability_DeathProphet_CarrionSwarm::GetManaCost, CDOTA_Ability_DeathProphet_Silence::GetManaCost, CDOTA_Ability_Lion_FingerOfDeath::GetManaCost, CDOTA_Ability_Viper_ViperStrike::GetManaCost, CDOTA_Ability_Invoker_Invoke::GetManaCost, CDOTA_Ability_Ogre_Magi_Fireblast::GetManaCost
int __fastcall CDOTABaseAbility::GetManaCost(CDOTABaseAbility *const this, int iLevel)
{
  int v3; // ebx
  DOTAAbilityData_t *m_pAbilityData; // rax

  v3 = iLevel;
  if ( iLevel == -1 )
    v3 = this->m_iLevel.m_Value - 1;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  if ( v3 > m_pAbilityData->m_nManaCosts - 1 )
    v3 = m_pAbilityData->m_nManaCosts - 1;
  if ( v3 < 0 )
    return 0;
  else
    return m_pAbilityData->m_pManaCosts[v3];
}


// CDOTABaseAbility::GetEffectiveManaCost  (line 1286, @0x0000000002422700, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetCaster, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetModifier_Constant_Highest, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsListeningToEvent, LookupEntity, Set, operator=
// calls: CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal
int __fastcall CDOTABaseAbility::GetEffectiveManaCost(CDOTABaseAbility *const this, int iLevel)
{
  __int64 m_Index; // rcx
  uint32 v5; // esi
  unsigned __int16 v6; // dx
  int v7; // edi
  uint32 v8; // eax
  CEntitySystem *v9; // r8
  CEntityIdentity *v10; // rdx
  float v11; // xmm1_4
  CEntityIdentity *m_pEntity; // rax
  __int16 v14; // di
  unsigned __int16 v15; // dx
  CEntityInstance *m_pInstance; // rdi
  int v17; // eax
  __int64 m_nHashCode_low; // rax
  CModifierParams params; // [rsp+20h] [rbp-A0h] BYREF

  m_Index = this->m_hOwnerEntity.m_Value.m_Index;
  v5 = this->m_hOwnerEntity.m_Value.m_Index >> 15;
  if ( m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  v8 = (v5 << 15) | v6 & 0x7FFF;
  params.ability.m_Index = v8;
  v9 = g_pEntitySystem;
  v10 = (v8 + 2);
  if ( v10 > 1
    && (v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9]) != 0
    && (v10 += v7 & 0x1FF, v10 != 0)
    && v8 == v10->m_EHandle.m_Index
    && v10->m_pInstance != 0 )
  {
    m_pEntity = this->m_pEntity;
    params.bCraniumBasherTested = 0;
    params.ability.m_Index = -1;
    params.fDamage = 0.0;
    params.fOriginalDamage = 0.0;
    params.bTooltip = 0;
    params.nActivity = -1;
    params.nTooltipParam = 0;
    params.bIgnoreInvis = 0;
    params.bNoCooldown = 0;
    params.bReincarnate = 0;
    params.bDoNotConsume = 0;
    params.fDistance = 0.0;
    params.inflictor.m_Index = -1;
    params.nDamageflags = 0;
    params.nDamageCategory = 0;
    memset(&params.pOrb, 0, 24);
    params.bHeartRegenApplied = 0;
    params.bDiffusalApplied = 0;
    params.bChainLightningConsidered = 0;
    params.bSuppressDamage = 0;
    params.bRangedAttack = 0;
    params.nPlayerids_stick = 0;
    params.hattacker.m_Index = -1;
    params.htarget.m_Index = -1;
    params.hunit.m_Index = -1;
    if ( m_pEntity != 0 )
    {
      v14 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.ability.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
    }
    if ( m_Index == -1 )
    {
      v15 = 0x7FFF;
      m_Index = 0x7FFF;
    }
    else
    {
      v15 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      m_Index = v15;
    }
    m_pInstance = 0;
    v17 = (v5 << 15) | v15 & 0x7FFF;
    v10 = (v17 + 2);
    if ( v10 > 1 )
    {
      v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[m_Index >> 9];
      if ( v10 != 0 )
      {
        m_Index = 120 * (m_Index & 0x1FF);
        v10 = (v10 + m_Index);
        if ( v10 != 0 && v17 == v10->m_EHandle.m_Index )
          m_pInstance = v10->m_pInstance;
      }
    }
    m_nHashCode_low = LOBYTE(m_pInstance[67].m_worldGroupId.m_nHashCode);
    v11 = 1.0;
    if ( m_nHashCode_low != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * m_nHashCode_low) > 0 )
      v11 = 1.0
          - (CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
               &m_pInstance[64].m_worldGroupId,
               modifierfunction::MODIFIER_PROPERTY_MANACOST_PERCENTAGE,
               &params)
           / 100.0);
  }
  else
  {
    v11 = 1.0;
  }
  return ((*(this->_vptr_IHandleEntity + 273))(this, iLevel, v10, m_Index, v9) * v11);
}


// CDOTABaseAbility::GetChannelledManaCostPerSecond  (line 1301, @0x000000000242eeb0, libserver.so)  // inlines: GetAbilityData, GetEffectiveLevel
// calls: CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Ability_Lua::Script_GetChannelledManaCostPerSecond, CDOTA_Item_Lua::Script_GetChannelledManaCostPerSecond
int __fastcall CDOTABaseAbility::GetChannelledManaCostPerSecond(CDOTABaseAbility *const this, int iLevel)
{
  int v3; // ebx
  DOTAAbilityData_t *m_pAbilityData; // rax

  v3 = iLevel;
  if ( iLevel == -1 )
    v3 = this->m_iLevel.m_Value - 1;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  if ( v3 > m_pAbilityData->m_nChannelledManaCosts - 1 )
    v3 = m_pAbilityData->m_nChannelledManaCosts - 1;
  if ( v3 < 0 )
    return 0;
  else
    return m_pAbilityData->m_pChannelledManaCosts[v3];
}


// CDOTABaseAbility::GetGoldCost  (line 1316, @0x000000000242ef30, libserver.so)  // inlines: GetAbilityData, GetEffectiveLevel
// calls: CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Ability_Lua::Script_GetGoldCost, CDOTA_Item_Lua::Script_GetGoldCost
int __fastcall CDOTABaseAbility::GetGoldCost(CDOTABaseAbility *const this, int iLevel)
{
  int v3; // ebx
  DOTAAbilityData_t *m_pAbilityData; // rax

  v3 = iLevel;
  if ( iLevel == -1 )
    v3 = this->m_iLevel.m_Value - 1;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  if ( v3 > m_pAbilityData->m_nGoldCosts - 1 )
    v3 = m_pAbilityData->m_nGoldCosts - 1;
  if ( v3 < 0 )
    return 0;
  else
    return m_pAbilityData->m_pGoldCosts[v3];
}


// CDOTABaseAbility::GetGoldCostForUpgrade  (line 1331, @0x000000000242efb0, libserver.so)  // inlines: GetAbilityData, GetEffectiveLevel, GetLevel
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility::GetGoldCostForUpgrade(CDOTABaseAbility *const this, int iCurrentLevel)
{
  int m_Value; // ebx
  DOTAAbilityData_t *m_pAbilityData; // rax

  m_Value = iCurrentLevel + 1;
  if ( iCurrentLevel == -2 )
    m_Value = this->m_iLevel.m_Value;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  if ( m_Value > m_pAbilityData->m_nGoldCostsForUpgrade - 1 )
    m_Value = m_pAbilityData->m_nGoldCostsForUpgrade - 1;
  if ( m_Value < 0 )
    return 0;
  else
    return m_pAbilityData->m_pGoldCostsForUpgrade[m_Value];
}


// CDOTABaseAbility::IsOwnersManaEnough  (line 1349, @0x0000000002424060, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetModifier_Constant_Highest, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsListeningToEvent, LookupEntity, NetworkStateChanged, Set, operator=<int>
// calls: CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CEntityHandle::GetHandleEntity
// callers: CDOTABaseAbility::IsFullyCastable, CDOTABaseAbility::OnAbilityPinged, CDOTABaseAbility_BotScript::IsFullyCastable, CDOTABaseAbility_BotScript::IsOwnersManaEnough, DOTA_ExecuteOrders, CDOTA_Item::OnAbilityPinged, CDOTA_Ability_BigThunderLizard_Frenzy::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Black_BrainSap::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Orange_LightStrikeArray::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Black_Nightmare::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Purple_VenomousGale::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Green_Overgrowth::DoDesiredCast (117 total)
bool __fastcall CDOTABaseAbility::IsOwnersManaEnough(CDOTABaseAbility *const this)
{
  int v2; // r12d
  unsigned __int16 v3; // dx
  int v4; // esi
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  bool result; // al
  CEntityInstance *m_pInstance; // rdi
  __int64 m_pEntity_high; // rax

  v2 = (*(this->_vptr_IHandleEntity + 274))(this, 0xFFFFFFFFLL);
  if ( v2 != this->m_iManaCost.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 832, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iManaCost.m_Value = v2;
  }
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  if ( v5 + 2 <= 1 )
    return 0;
  v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
  if ( v6 == 0 )
    return 0;
  v7 = &v6[v4 & 0x1FF];
  if ( v7 == 0 || v5 != v7->m_EHandle.m_Index )
    return 0;
  m_pInstance = v7->m_pInstance;
  result = 0;
  if ( v7->m_pInstance != 0 )
  {
    m_pEntity_high = HIBYTE(m_pInstance[69].m_pEntity);
    return m_pEntity_high != 0xFF
        && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * m_pEntity_high) > 0
        && CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
             &m_pInstance[64].m_worldGroupId,
             modifierfunction::MODIFIER_PROPERTY_SPELLS_REQUIRE_HP,
             &CModifierParams::s_Default) == 1.0
        || *&CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value)[267]._vptr_IHandleEntity >= this->m_iManaCost.m_Value;
  }
  return result;
}


// CDOTABaseAbility::IsOwnersGoldEnough  (line 1367, @0x0000000002423c30, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTA_PlayerResource::GetGold, CEntityHandle::GetHandleEntity
// callers: CDOTABaseAbility::IsFullyCastable, CDOTABaseAbility_BotScript::IsFullyCastable, DOTA_ExecuteOrders, CDOTA_Ability_BigThunderLizard_Frenzy::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Black_BrainSap::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Orange_LightStrikeArray::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Black_Nightmare::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Purple_VenomousGale::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Green_Overgrowth::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Purple_PlagueWard::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Orange_DragonSlave::DoDesiredCast, CDOTA_Ability_DarkTrollWarlord_RaiseDead::DoDesiredCast (110 total)
bool __fastcall CDOTABaseAbility::IsOwnersGoldEnough(CDOTABaseAbility *const this, int nIssuerPlayerID)
{
  int v4; // r13d
  IHandleEntity *HandleEntity; // rax
  unsigned __int16 v7; // dx
  int v8; // edi
  uint32 v9; // edx
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax

  v4 = (*(this->_vptr_IHandleEntity + 276))(this, 0xFFFFFFFFLL);
  if ( v4 <= 0 )
    return 1;
  if ( nIssuerPlayerID == -1 )
  {
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    if ( HandleEntity == 0 )
      return 0;
    nIssuerPlayerID = (*(HandleEntity->_vptr_IHandleEntity + 414))(HandleEntity);
    if ( nIssuerPlayerID == -1 )
    {
      if ( CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value) == 0 )
        return 0;
      if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
      {
        v7 = 0x7FFF;
        v8 = 0x7FFF;
      }
      else
      {
        v7 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
        v8 = v7;
      }
      v9 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF;
      m_pInstance = 0;
      if ( v9 + 2 > 1 )
      {
        v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
        if ( v11 != 0 )
        {
          v12 = &v11[v8 & 0x1FF];
          if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
            m_pInstance = v12->m_pInstance;
        }
      }
      nIssuerPlayerID = m_pInstance[46]._vptr_IHandleEntity;
      if ( nIssuerPlayerID == -1 )
        return 0;
    }
  }
  return v4 <= CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, nIssuerPlayerID);
}


// CDOTABaseAbility::IsOwnersGoldEnoughForUpgrade  (line 1391, @0x0000000002421fe0, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTA_PlayerResource::GetGold
// callers: DOTA_ExecuteOrders
bool __fastcall CDOTABaseAbility::IsOwnersGoldEnoughForUpgrade(CDOTABaseAbility *const this)
{
  int v2; // r12d
  unsigned __int16 v3; // cx
  int v4; // edi
  uint32 v5; // edx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  int v9; // eax

  v2 = (*(this->_vptr_IHandleEntity + 277))(this, 4294967294LL);
  if ( v2 <= 0 )
    return 1;
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  return v5 + 2 > 1
      && (v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9]) != 0
      && (v7 = &v6[v4 & 0x1FF]) != 0
      && v5 == v7->m_EHandle.m_Index
      && v7->m_pInstance != 0
      && (v9 = (*(v7->m_pInstance->_vptr_IHandleEntity + 414))(v7->m_pInstance)) != -1
      && v2 <= CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, v9);
}


// CDOTABaseAbility::GetAbilityDamage  (line 1410, @0x000000000242f030, libserver.so)  // inlines: GetAbilityData, GetEffectiveLevel
// calls: CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTABaseAbility::GetAbilityDamage(CDOTABaseAbility *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  int v3; // edx

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  v3 = m_pAbilityData->m_nDamages - 1;
  if ( this->m_iLevel.m_Value - 1 <= v3 )
    v3 = this->m_iLevel.m_Value - 1;
  if ( v3 < 0 )
    return 0;
  else
    return m_pAbilityData->m_pDamages[v3];
}


// CDOTABaseAbility::GetCaster  (line 1422, @0x000000000242cb20, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// callers: CDOTA_Ability_Throw_Snowball::CastFilterResult, CDOTA_Ability_Throw_Coal::CastFilterResult, CDOTA_Ability_Corspselord_Revive::OnSpellStart, CDOTA_Ability_ShootFirework::OnSpellStart, CDOTA_Ability_Lesser_NightCrawler_Pounce::OnSpellStart, CDOTA_Ability_Corspselord_Revive::OnChannelFinish, CDOTA_Item_UpgradedMortar::OnSpellStart, CDOTA_Ability_Creature_Fire_Breath::OnChannelThink, CDOTA_Ability_Creature_Fire_Breath::OnProjectileHit, CDOTA_Item_BagOfGold::OnSpellStart, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Ability_Zombie_Berserk::OnSpellStart (1538 total)
CDOTA_BaseNPC *__fastcall CDOTABaseAbility::GetCaster(CDOTABaseAbility *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  CDOTA_BaseNPC *result; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  result = 0;
  if ( v3 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v2 & 0x1FF];
      if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
        return v6->m_pInstance;
    }
  }
  return result;
}


// CDOTABaseAbility::CreateAbilityParticleEffect  (line 1428, @0x000000000242cbd0, libserver.so)  // inlines: CEntityHandle, Get, GetCaster, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: GetParticleManager, CDOTA_ParticleManager::CreateParticle
// callers: CDOTA_Ability_Nevermore_Requiem::OnAbilityPhaseStart, CDOTA_Ability_Axe_BattleHunger::OnAbilityPhaseStart, CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker, CDOTA_Ability_AncientApparition_IceBlast::OnProjectileHit_ExtraData, CDOTA_Ability_CrystalMaiden_Frostbite::OnSpellStart, CDOTA_Ability_AntiMage_Blink::OnSpellStart, CDOTA_Ability_Pudge_FleshHeap::OnHeroDiedNearby, CDOTA_Ability_Bloodseeker_Rupture::OnSpellStart, CDOTA_Ability_Pudge_MeatHook::OnSpellStart, CDOTA_Ability_Pudge_MeatHook::OnProjectileHit_ExtraData, CDOTA_Ability_SandKing_BurrowStrike::OnSpellStart, CDOTA_Ability_Bane_BrainSap::OnSpellStart (84 total)
int __fastcall CDOTABaseAbility::CreateAbilityParticleEffect(
        CDOTABaseAbility *const this,
        const char *pParticleName,
        int iAttachType,
        CBaseEntity *pEntityAttach,
        CRecipientFilter *pFilter)
{
  unsigned __int16 v8; // dx
  int v9; // esi
  CBaseEntity *m_pInstance; // r14
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_ParticleManager *ParticleManager; // rax

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v8 = 0x7FFF;
    v9 = 0x7FFF;
  }
  else
  {
    v8 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v9 = v8;
  }
  m_pInstance = 0;
  v11 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v8 & 0x7FFF;
  if ( v11 + 2 > 1 )
  {
    v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v9 >> 9];
    if ( v12 != 0 )
    {
      v13 = &v12[v9 & 0x1FF];
      if ( v13 != 0 && v11 == v13->m_EHandle.m_Index )
        m_pInstance = v13->m_pInstance;
    }
  }
  ParticleManager = GetParticleManager();
  return CDOTA_ParticleManager::CreateParticle(
           ParticleManager,
           pParticleName,
           iAttachType,
           pEntityAttach,
           pFilter,
           m_pInstance);
}


