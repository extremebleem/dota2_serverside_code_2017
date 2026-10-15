
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ItemsMatch  (line 38, @0x0000000002e39a00, libserver.so)
// calls: _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::ValidateEconItems, CDOTA_BaseNPC_Hero::CacheTogglableWearable
bool __fastcall ItemsMatch(CEconItemView *pCurItem, CEconItemView *pNewItem)
{
  __int64 (__fastcall ***v4)(_QWORD); // rax
  __int16 v5; // r13
  unsigned __int16 (__fastcall ***v6)(_QWORD); // rax
  bool result; // al
  __int64 v8; // rbx

  if ( pNewItem == 0 || !pNewItem->m_bInitialized.m_Value )
    return 0;
  if ( (*(pCurItem->_vptr_IEconItemInterface + 14))(pCurItem) == 0
    || (*(pNewItem->_vptr_IEconItemInterface + 14))(pNewItem) == 0 )
  {
    v4 = (*(pNewItem->_vptr_IEconItemInterface + 12))(pNewItem);
    v5 = (**v4)(v4);
    v6 = (*(pCurItem->_vptr_IEconItemInterface + 12))(pCurItem);
    if ( v5 != (**v6)(v6) )
      return 0;
  }
  if ( pNewItem->m_iEntityQuality.m_Value != 0 )
  {
    v8 = (*(pNewItem->_vptr_IEconItemInterface + 14))(pNewItem);
    return v8 == (*(pCurItem->_vptr_IEconItemInterface + 14))(pCurItem);
  }
  else
  {
    result = 0;
    if ( pCurItem->m_iEntityQuality.m_Value == 0 )
      return pNewItem->m_iItemDefinitionIndex.m_Value.m_Data == pCurItem->m_iItemDefinitionIndex.m_Value.m_Data;
  }
  return result;
}


// StringFieldToInt  (line 84, @0x0000000002e31a90, libserver.so)
// calls: V_stricmp_fast
// callers: CPetModifier::Init, StringFieldToInt, createAssetModifierType<CPetModifier>, CDOTAHeroTaunt::GetSpeechConcept, CDOTAVictoryPrediction::GetSpeechConcept, CEconTool_LeagueViewPass::BInitFromKV
__int64 __fastcall StringFieldToInt(
        const char *szValue,
        const char **pValueStrings,
        int iNumStrings,
        unsigned int nDefault,
        bool bDontAssert)
{
  unsigned int v9; // ebx

  v9 = 0;
  if ( iNumStrings <= 0 )
    return nDefault;
  while ( V_stricmp_fast(szValue, *pValueStrings) != 0 )
  {
    ++v9;
    ++pValueStrings;
    if ( v9 == iNumStrings )
      return nDefault;
  }
  return v9;
}


// StringFieldToInt  (line 84, @0x0000000002e39ae0, libserver.so)
// calls: StringFieldToInt
// callers: CDOTA_RealtimeCombatAnalyzer::ParsePostTests, CCLSearchFieldFactory<SCLNeutralCampStackFields, (DOTA_COMBATLOG_TYPES)20>::CreateSearchFields, CCLSearchFieldFactory<SCLPickupRuneFields, (DOTA_COMBATLOG_TYPES)21>::CreateSearchFields, CCLSearchFieldFactory<SCLTeamBuildingKillFields, (DOTA_COMBATLOG_TYPES)17>::CreateSearchFields, CCLSearchFieldFactory<SCLDeathFields, (DOTA_COMBATLOG_TYPES)4>::CreateSearchFields, CCLSearchFieldFactory<SCLAttackFields, (DOTA_COMBATLOG_TYPES)0>::CreateSearchFields, CDOTA_RealtimeCombatAnalyzer::ParsePostMatchIncrements, CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery, CDOTA_Item::Spawn, GetCombatLogEventType, GetCompendiumStatCollector, GetCompendiumStatAggregator (19 total)
int __fastcall StringFieldToInt(
        const char *szValue,
        const char **pValueStrings,
        int iNumStrings,
        int nDefault,
        bool bDontAssert)
{
  if ( szValue != 0 && *szValue != 0 )
    return StringFieldToInt(szValue, pValueStrings, iNumStrings, nDefault, bDontAssert);
  else
    return nDefault;
}


// StringFieldToInt  (line 105, @0x0000000002e39b00, libserver.so)  // inlines: StringFieldToInt
// calls: StringFieldToInt
int __fastcall StringFieldToInt(
        const char *szValue,
        const CUtlVector<char const*,CUtlMemory<char const*,int> > *const vecValueStrings,
        int nDefault,
        bool bDontAssert)
{
  bool v4; // r8
  int result; // eax
  int m_Size; // edx
  const char **m_pMemory; // rsi

  result = nDefault;
  m_Size = vecValueStrings->m_Size;
  m_pMemory = vecValueStrings->m_Memory.m_pMemory;
  if ( szValue != 0 && *szValue != 0 )
    return StringFieldToInt(szValue, m_pMemory, m_Size, result, v4);
  return result;
}


// CEconItem::CEconItem  (line 113, @0x0000000002e39b30, libserver.so)  // inlines: EquippedInstance_t, item_definition_index_t, itemid_t, memset, style_index_t
// callers: CEconItem::DeserializeFromProtoBufItem, GCSDK::CreateSharedObjectSubclass<CEconItem>, CPlayerInventory::GetSOCDataForItem
void __fastcall CEconItem::CEconItem(CEconItem *const this)
{
  this->_vptr_CSharedObject = off_47A3D10;
  this->_vptr_IEconItemInterface = &off_47A3E18;
  this->m_ulID.m_Data = 0;
  this->m_ulOriginalID.m_Data = 0;
  this->m_unDefIndex.m_Data = 0;
  this->m_unStyle.m_Data = 0;
  this->m_EquipInstanceSingleton.m_unEquippedClass = 0;
  this->m_EquipInstanceSingleton.m_unEquippedSlot = -1;
  this->m_unQuantity = 1;
  this->m_pCustomData = 0;
  this->m_dirtyBits = 0;
}


// CEconItem::~CEconItem  (line 144, @0x0000000002e3a820, libserver.so)  // inlines: ~CSharedObject, ~IEconItemInterface
// calls: CEconItemCustomData::~CEconItemCustomData, operator delete, CEconItemCustomData::FreeAttributeMemory
// callers: CEconItem::~CEconItem, CPlayerInventory::GetSOCDataForItem
void __fastcall CEconItem::~CEconItem(CEconItem *const this)
{
  bool v2; // zf
  CEconItemCustomData *m_pCustomData; // r12

  v2 = (*&this->m_dirtyBits & 4) == 0;
  this->_vptr_CSharedObject = off_47A3D10;
  this->_vptr_IEconItemInterface = &off_47A3E18;
  if ( !v2 )
    CEconItemCustomData::FreeAttributeMemory(&this->m_CustomAttribSingleton);
  m_pCustomData = this->m_pCustomData;
  if ( m_pCustomData != 0 )
  {
    CEconItemCustomData::~CEconItemCustomData(this->m_pCustomData);
    operator delete(m_pCustomData);
  }
  this->_vptr_IEconItemInterface = &off_47A67F0;
  this->_vptr_CSharedObject = off_40DB630;
}


// CEconItem::~CEconItem  (line 144, @0x0000000002e3a8a0, libserver.so)
// calls: CEconItem::~CEconItem, operator delete
void __fastcall CEconItem::~CEconItem(CEconItem *const this)
{
  CEconItem::~CEconItem(this);
  operator delete(this);
}


// CEconItemCustomData::~CEconItemCustomData  (line 164, @0x0000000002e3a750, libserver.so)  // inlines: Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEconItemCustomData::FreeAttributeMemory, CUtlMemory<CEconItem::EquippedInstance_t, int>::Purge, CUtlMemory<CEconItem::attribute_t, int>::Purge
// callers: CEconItem::~CEconItem, CEconItem::operator=, CEconItem::DeserializeFromProtoBufItem
void __fastcall CEconItemCustomData::~CEconItemCustomData(CEconItemCustomData *const this)
{
  __int64 v2; // r12
  int i; // ebx
  __int64 v4; // rdi
  bool v5; // zf

  v2 = 0;
  for ( i = 0; this->m_vecAttributes.m_Size > i; ++i )
  {
    v4 = v2;
    v2 += 16;
    CEconItemCustomData::FreeAttributeMemory((this->m_vecAttributes.m_Memory.m_pMemory + v4));
  }
  if ( this->m_pInteriorItem != 0 )
    (*(this->m_pInteriorItem->_vptr_CSharedObject + 1))(this->m_pInteriorItem);
  v5 = (this->m_vecEquipped.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecEquipped.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CEconItem::EquippedInstance_t,int>::Purge(&this->m_vecEquipped.m_Memory);
    if ( (this->m_vecEquipped.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconItem::EquippedInstance_t,int>::Purge(&this->m_vecEquipped.m_Memory);
  }
  v5 = (this->m_vecAttributes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecAttributes.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CEconItem::attribute_t,int>::Purge(&this->m_vecAttributes.m_Memory);
    if ( (this->m_vecAttributes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconItem::attribute_t,int>::Purge(&this->m_vecAttributes.m_Memory);
  }
}


// CEconItem::CopyAttributesFrom  (line 180, @0x0000000002e39b90, libserver.so)  // inlines: GetDynamicAttributeCountInternal, GetDynamicAttributeInternal, GetMutableDynamicAttributeInternal, _Alloc_hider, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, basic_string, operator[], ~basic_string
// calls: GetItemSchema, CEconItemSchema::GetAttributeDefinition, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: CEconItem::operator=
void __fastcall CEconItem::CopyAttributesFrom(CEconItem *const this, const CEconItem *const source)
{
  __int64 i; // r12
  CEconItem::attribute_t *p_m_CustomAttribSingleton; // r15
  int m_unDefinitionIndex; // ebx
  GameItemSchema_t *ItemSchema; // rax
  const CEconItemAttributeDefinition *AttributeDefinition; // rax
  const ISchemaAttributeType *m_pAttrType; // rbx
  const CEconItemAttributeDefinition *v8; // r13
  char *v9; // rdi
  CEconItemCustomData *m_pCustomData; // rax
  int v11; // eax
  int v12; // edx
  char v15; // [rsp+2Fh] [rbp-41h] BYREF
  std::string sBytes; // [rsp+30h] [rbp-40h] BYREF

  for ( i = 0; ; ++i )
  {
    m_pCustomData = source->m_pCustomData;
    if ( m_pCustomData == 0 )
      break;
    if ( i >= m_pCustomData->m_vecAttributes.m_Size )
      return;
    p_m_CustomAttribSingleton = &m_pCustomData->m_vecAttributes.m_Memory.m_pMemory[i];
LABEL_4:
    m_unDefinitionIndex = p_m_CustomAttribSingleton->m_unDefinitionIndex;
    ItemSchema = GetItemSchema();
    AttributeDefinition = CEconItemSchema::GetAttributeDefinition(ItemSchema, m_unDefinitionIndex);
    m_pAttrType = AttributeDefinition->m_pAttrType;
    v8 = AttributeDefinition;
    sBytes._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
    (*(m_pAttrType->_vptr_ISchemaAttributeType + 4))(m_pAttrType, &p_m_CustomAttribSingleton->m_value, &sBytes);
    (*(m_pAttrType->_vptr_ISchemaAttributeType + 7))(m_pAttrType, this, v8, &sBytes);
    v9 = sBytes._M_dataplus._M_p - 24;
    if ( sBytes._M_dataplus._M_p - 24 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v11 = _InterlockedExchangeAdd(v9 + 4, 0xFFFFFFFF);
      }
      else
      {
        v12 = *(sBytes._M_dataplus._M_p - 2);
        *(sBytes._M_dataplus._M_p - 2) = v12 - 1;
        v11 = v12;
      }
      if ( v11 <= 0 )
        std::string::_Rep::_M_destroy(v9, &v15);
    }
  }
  if ( i < ((*&source->m_dirtyBits & 4) != 0) )
  {
    p_m_CustomAttribSingleton = &source->m_CustomAttribSingleton;
    goto LABEL_4;
  }
}


// CEconItem::CEconItem  (line 205, @0x0000000002e46920, libserver.so)  // inlines: EquippedInstance_t, item_definition_index_t, itemid_t, memset, style_index_t, ~CSharedObject, ~IEconItemInterface
// calls: CEconItem::operator=, _Unwind_Resume
// callers: CDOTA_BaseNPC::UpdateAssetModifiers, CDOTA_BaseNPC::PrecacheWearables, AddEconItemToStringTable, CEconItemView::CopyInternal
void __fastcall CEconItem::CEconItem(CEconItem *const this, const CEconItem *const that)
{
  this->_vptr_CSharedObject = off_47A3D10;
  this->m_ulID.m_Data = 0;
  this->_vptr_IEconItemInterface = &off_47A3E18;
  this->m_EquipInstanceSingleton.m_unEquippedClass = 0;
  this->m_EquipInstanceSingleton.m_unEquippedSlot = -1;
  this->m_ulOriginalID.m_Data = 0;
  this->m_unDefIndex.m_Data = 0;
  this->m_unStyle.m_Data = 0;
  this->m_unQuantity = 1;
  this->m_pCustomData = 0;
  this->m_dirtyBits = 0;
  CEconItem::operator=(this, that);
}


// CEconItem::operator=  (line 227, @0x0000000002e467a0, libserver.so)  // inlines: GetOriginalID, SetOriginalID, SetQuantity, operator!=, operator=
// calls: CEconItem::EnsureCustomDataExists, CUtlVectorBase<CEconItem::EquippedInstance_t, CUtlMemory<CEconItem::EquippedInstance_t, int> >::SetCount, CEconItem::CopyAttributesFrom, CEconItemCustomData::~CEconItemCustomData, operator delete, CEconItemCustomData::FreeAttributeMemory
// callers: CEconItem::CEconItem, CEconItem::BUpdateFromNetwork, CEconItem::Copy
CEconItem *__fastcall CEconItem::operator=(CEconItem *const this, const CEconItem *const rhs)
{
  uint64 m_Data; // rax
  uint16 v5; // ax
  bool v6; // zf
  CEconItemCustomData *m_pCustomData; // r13
  CEconItemCustomData *v8; // r14
  int m_Size; // r15d
  unsigned __int64 v10; // rdx
  CEconItemCustomData *v12; // r13

  if ( rhs != this )
  {
    this->m_ulID.m_Data = rhs->m_ulID.m_Data;
    m_Data = rhs->m_ulOriginalID.m_Data;
    if ( m_Data == 0 )
      m_Data = rhs->m_ulID.m_Data;
    if ( this->m_ulID.m_Data != m_Data )
      this->m_ulOriginalID.m_Data = m_Data;
    this->m_unAccountID = rhs->m_unAccountID;
    this->m_unDefIndex.m_Data = rhs->m_unDefIndex.m_Data;
    this->m_unLevel = rhs->m_unLevel;
    this->m_nQuality = rhs->m_nQuality;
    this->m_unInventory = rhs->m_unInventory;
    v5 = (*(rhs->_vptr_CSharedObject + 17))(rhs);
    v6 = (*&this->m_dirtyBits & 4) == 0;
    this->m_unQuantity = v5;
    this->m_unFlags = rhs->m_unFlags;
    this->m_unOrigin = rhs->m_unOrigin;
    this->m_unStyle.m_Data = rhs->m_unStyle.m_Data;
    this->m_EquipInstanceSingleton = rhs->m_EquipInstanceSingleton;
    if ( !v6 )
      CEconItemCustomData::FreeAttributeMemory(&this->m_CustomAttribSingleton);
    this->m_dirtyBits = (*&rhs->m_dirtyBits & 0xFB);
    if ( rhs->m_pCustomData != 0 )
    {
      CEconItem::EnsureCustomDataExists(this);
      m_pCustomData = rhs->m_pCustomData;
      v8 = this->m_pCustomData;
      if ( &v8->m_vecEquipped != &m_pCustomData->m_vecEquipped )
      {
        m_Size = m_pCustomData->m_vecEquipped.m_Size;
        CUtlVectorBase<CEconItem::EquippedInstance_t,CUtlMemory<CEconItem::EquippedInstance_t,int>>::SetCount(
          &v8->m_vecEquipped,
          m_Size);
        if ( m_Size > 0 )
        {
          v10 = 0;
          do
          {
            v8->m_vecEquipped.m_Memory.m_pMemory[v10 / 4] = m_pCustomData->m_vecEquipped.m_Memory.m_pMemory[v10 / 4];
            v10 += 4LL;
          }
          while ( v10 != 4LL * (m_Size - 1) + 4 );
        }
      }
    }
    else
    {
      v12 = this->m_pCustomData;
      if ( v12 != 0 )
      {
        CEconItemCustomData::~CEconItemCustomData(this->m_pCustomData);
        operator delete(v12);
      }
      this->m_pCustomData = 0;
    }
    CEconItem::CopyAttributesFrom(this, rhs);
  }
  return this;
}


// CEconItem::SetItemID  (line 282, @0x0000000002e39cd0, libserver.so)  // inlines: SetOriginalID
// callers: CPlayerInventory::GetSOCDataForItem
void __fastcall CEconItem::SetItemID(CEconItem *const this, itemid_t ulID)
{
  uint64 m_Data; // rax

  m_Data = this->m_ulID.m_Data;
  this->m_ulID = ulID;
  if ( m_Data != 0 && ulID.m_Data != m_Data && this->m_ulOriginalID.m_Data == 0 && ulID.m_Data != 0 )
    this->m_ulOriginalID.m_Data = m_Data;
}


// CEconItem::GetOriginalID  (line 297, @0x0000000002e39d00, libserver.so)
itemid_t __fastcall CEconItem::GetOriginalID(const CEconItem *const this)
{
  if ( this->m_ulOriginalID.m_Data != 0 )
    return this->m_ulOriginalID.m_Data;
  else
    return this->m_ulID.m_Data;
}


// CEconItem::SetOriginalID  (line 307, @0x0000000002e39d20, libserver.so)
void __fastcall CEconItem::SetOriginalID(CEconItem *const this, itemid_t ulOriginalID)
{
  if ( this->m_ulID.m_Data != ulOriginalID.m_Data )
    this->m_ulOriginalID = ulOriginalID;
}


// CEconItem::GetQuantity  (line 318, @0x0000000002e308f0, libserver.so)
uint16 __fastcall CEconItem::GetQuantity(const CEconItem *const this)
{
  return this->m_unQuantity;
}


// CEconItem::GetQuality  (line 326, @0x0000000002e30f90, libserver.so)  // inlines: GetDBQuality
// calls: IsSocketQuality, GetSocketQuality
int32 __fastcall CEconItem::GetQuality(const CEconItem *const this)
{
  int32 m_nQuality; // ebx
  EEconItemQuality SocketQuality; // eax

  m_nQuality = this->m_nQuality;
  if ( !IsSocketQuality(m_nQuality) && m_nQuality != 4 )
    return m_nQuality;
  SocketQuality = GetSocketQuality(&this->IEconItemInterface, m_nQuality);
  if ( SocketQuality != EEconItemQuality::AE_UNDEFINED )
    return SocketQuality;
  return m_nQuality;
}


// CEconItem::SetQuantity  (line 343, @0x0000000002e39d30, libserver.so)
void __fastcall CEconItem::SetQuantity(CEconItem *const this, uint16 unQuantity)
{
  this->m_unQuantity = unQuantity;
}


// GetCustomNameOrAttributeDesc  (line 351, @0x0000000002e30910, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, FindAttribute_UnsafeBitwiseCast<CAttribute_String, char const*, CEconItem>
// callers: CEconItem::GetCustomDesc, CEconItem::GetCustomName
const char *__fastcall GetCustomNameOrAttributeDesc(
        const CEconItem *pItem,
        const CEconItemAttributeDefinition *pAttrDef)
{
  __int64 v2; // rbp
  int (**vptr_CSharedObject)(...); // rax
  const char *pszStrContents; // [rsp+0h] [rbp-30h] BYREF
  _QWORD v6[3]; // [rsp+8h] [rbp-28h] BYREF
  char v7; // [rsp+20h] [rbp-10h]
  __int64 v8; // [rsp+28h] [rbp-8h]

  if ( pAttrDef == 0 )
    return 0;
  v8 = v2;
  v6[0] = off_479F250;
  v6[2] = &pszStrContents;
  vptr_CSharedObject = pItem->_vptr_CSharedObject;
  v6[1] = pAttrDef;
  v7 = 0;
  vptr_CSharedObject[11](pItem, v6);
  if ( v7 != 0 )
    return pszStrContents;
  else
    return 0;
}


// SetCustomNameOrDescAttribute  (line 370, @0x0000000002e4de70, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, ConvertTypedValueToEconAttributeValue, FindAttribute<CAttribute_String>, FindAttribute<IEconItemInterface, CAttribute_String>, FindAttribute_UnsafeBitwiseCast<CAttribute_String, CAttribute_String, IEconItemInterface>, GetTypedAttributeType<CAttribute_String>, SetDynamicAttributeValue<CAttribute_String>, _Alloc_hider, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, assign, basic_string, length, operator=, set_has_value, set_value, ~basic_string
// calls: CEconItem::RemoveDynamicAttribute, CAttribute_String::CAttribute_String, strlen, std::string::assign(char const*,ulong), __dynamic_cast, CEconItem::FindDynamicAttributeInternal, CAttribute_String::CopyFrom, CAttribute_String::~CAttribute_String, CEconItem::AddDynamicAttributeInternal, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: CEconItem::SetCustomName, CEconItem::SetCustomDesc
// globals: `typeinfo for'ISchemaAttributeTypeBase<CAttribute_String>, `typeinfo for'ISchemaAttributeType
void __fastcall SetCustomNameOrDescAttribute(
        CEconItem *pItem,
        const CEconItemAttributeDefinition *pAttrDef,
        const char *pszNewValue)
{
  size_t v6; // rax
  const ISchemaAttributeType *m_pAttrType; // rdi
  void *v8; // r12
  CEconItem::attribute_t *DynamicAttributeInternal; // r15
  int (**vptr_IEconItemInterface)(...); // rax
  char *v11; // rdi
  char *v12; // rdi
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // edx
  char *v17; // [rsp+0h] [rbp-B0h] BYREF
  char *v18; // [rsp+10h] [rbp-A0h] BYREF
  _BYTE v19[16]; // [rsp+20h] [rbp-90h] BYREF
  int v20; // [rsp+30h] [rbp-80h]
  std::string *v21; // [rsp+38h] [rbp-78h]
  _BYTE v22[32]; // [rsp+40h] [rbp-70h] BYREF
  _QWORD v23[3]; // [rsp+60h] [rbp-50h] BYREF
  char v24; // [rsp+78h] [rbp-38h]

  if ( pAttrDef != 0 )
  {
    if ( pszNewValue != 0 && *pszNewValue != 0 )
    {
      CAttribute_String::CAttribute_String(v19);
      v20 |= 1u;
      v6 = strlen(pszNewValue);
      std::string::assign(v21, pszNewValue, v6);
      m_pAttrType = pAttrDef->m_pAttrType;
      if ( m_pAttrType != 0 )
      {
        v8 = __dynamic_cast(
               m_pAttrType,
               &`typeinfo for'ISchemaAttributeType,
               &`typeinfo for'ISchemaAttributeTypeBase<CAttribute_String>,
               0);
        if ( v8 != 0 )
        {
          DynamicAttributeInternal = CEconItem::FindDynamicAttributeInternal(pItem, pAttrDef);
          if ( DynamicAttributeInternal == 0 )
          {
            DynamicAttributeInternal = CEconItem::AddDynamicAttributeInternal(pItem);
            DynamicAttributeInternal->m_unDefinitionIndex = (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef);
            (*(*v8 + 64LL))(v8, &DynamicAttributeInternal->m_value);
          }
          CAttribute_String::CopyFrom(DynamicAttributeInternal->m_value.asBlobPointer, v19);
          CAttribute_String::CAttribute_String(v22);
          v23[1] = pAttrDef;
          v23[0] = off_47A4750;
          vptr_IEconItemInterface = pItem->_vptr_IEconItemInterface;
          v23[2] = v22;
          v24 = 0;
          vptr_IEconItemInterface[28](&pItem->IEconItemInterface, v23);
          v17 = &std::string::_Rep::_S_empty_rep_storage + 24;
          v18 = &std::string::_Rep::_S_empty_rep_storage + 24;
          (*(*v8 + 96LL))(v8, v19, &v17);
          (*(*v8 + 96LL))(v8, v22, &v18);
          v11 = v18 - 24;
          if ( v18 - 24 != &std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create != 0 )
            {
              v14 = _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF);
            }
            else
            {
              v16 = *(v18 - 2);
              *(v18 - 2) = v16 - 1;
              v14 = v16;
            }
            if ( v14 <= 0 )
              std::string::_Rep::_M_destroy(v11, v23);
          }
          v12 = v17 - 24;
          if ( v17 - 24 != &std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create != 0 )
            {
              v13 = _InterlockedExchangeAdd(v12 + 4, 0xFFFFFFFF);
            }
            else
            {
              v15 = *(v17 - 2);
              *(v17 - 2) = v15 - 1;
              v13 = v15;
            }
            if ( v13 <= 0 )
              std::string::_Rep::_M_destroy(v12, v23);
          }
          CAttribute_String::~CAttribute_String(v22);
        }
      }
      CAttribute_String::~CAttribute_String(v19);
    }
    else
    {
      CEconItem::RemoveDynamicAttribute(pItem, pAttrDef);
    }
  }
}


// CEconItem::GetCustomName  (line 399, @0x0000000002e33b60, libserver.so)  // inlines: CSchemaFieldHandle, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, GetCustomNameOrAttributeDesc, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "custom name attr"
// globals: `guard variable for'CEconItem::GetCustomName(void)::pAttrDef_CustomName, CEconItem::GetCustomName(void)::pAttrDef_CustomName, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
const char *__fastcall CEconItem::GetCustomName(const CEconItem *const this)
{
  CEconItemSchema *v2; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  uint32 v4; // ebx
  const char *m_szName; // r13
  CEconItemSchema *v6; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  CEconItemSchema *v9; // rax
  uint32 m_unResetCount; // eax

  if ( `guard variable for'CEconItem::GetCustomName(void)::pAttrDef_CustomName == 0
    && __cxa_guard_acquire(&`guard variable for'CEconItem::GetCustomName(void)::pAttrDef_CustomName) != 0 )
  {
    CEconItem::GetCustomName(void)const::pAttrDef_CustomName.m_szName = "custom name attr";
    v9 = GEconItemSchema();
    CEconItem::GetCustomName(void)const::pAttrDef_CustomName.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                        v9,
                                                                        "custom name attr");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    CEconItem::GetCustomName(void)const::pAttrDef_CustomName.m_bDestructName = 0;
    CEconItem::GetCustomName(void)const::pAttrDef_CustomName.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CEconItem::GetCustomName(void)::pAttrDef_CustomName);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconItem::GetCustomName(void)const::pAttrDef_CustomName,
      &_dso_handle);
  }
  if ( CEconItem::GetCustomName(void)const::pAttrDef_CustomName.m_szName != 0 )
  {
    v2 = GEconItemSchema();
    m_pRef = CEconItem::GetCustomName(void)const::pAttrDef_CustomName.m_pRef;
    v4 = v2->m_unResetCount;
    if ( v4 != CEconItem::GetCustomName(void)const::pAttrDef_CustomName.m_unSchemaGeneration )
    {
      m_szName = CEconItem::GetCustomName(void)const::pAttrDef_CustomName.m_szName;
      v6 = GEconItemSchema();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v6, m_szName);
      CEconItem::GetCustomName(void)const::pAttrDef_CustomName.m_unSchemaGeneration = v4;
      m_pRef = AttributeDefinitionByName;
      CEconItem::GetCustomName(void)const::pAttrDef_CustomName.m_pRef = AttributeDefinitionByName;
    }
  }
  else
  {
    m_pRef = 0;
  }
  return GetCustomNameOrAttributeDesc(this, m_pRef);
}


// CEconItem::SetCustomName  (line 409, @0x0000000002e4e0e0, libserver.so)  // inlines: CSchemaFieldHandle, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, SetCustomNameOrDescAttribute, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "custom name attr"
// globals: `guard variable for'CEconItem::SetCustomName(char const*)::pAttrDef_CustomName, CEconItem::SetCustomName(char const*)::pAttrDef_CustomName, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
void __fastcall CEconItem::SetCustomName(CEconItem *const this, const char *pName)
{
  CEconItemSchema *v4; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  uint32 v6; // ebx
  const char *m_szName; // r14
  CEconItemSchema *v8; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  CEconItemSchema *v10; // rax
  uint32 m_unResetCount; // eax

  if ( `guard variable for'CEconItem::SetCustomName(char const*)::pAttrDef_CustomName == 0
    && __cxa_guard_acquire(&`guard variable for'CEconItem::SetCustomName(char const*)::pAttrDef_CustomName) != 0 )
  {
    CEconItem::SetCustomName(char const*)::pAttrDef_CustomName.m_szName = "custom name attr";
    v10 = GEconItemSchema();
    CEconItem::SetCustomName(char const*)::pAttrDef_CustomName.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                          v10,
                                                                          "custom name attr");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    CEconItem::SetCustomName(char const*)::pAttrDef_CustomName.m_bDestructName = 0;
    CEconItem::SetCustomName(char const*)::pAttrDef_CustomName.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CEconItem::SetCustomName(char const*)::pAttrDef_CustomName);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconItem::SetCustomName(char const*)::pAttrDef_CustomName,
      &_dso_handle);
  }
  if ( CEconItem::SetCustomName(char const*)::pAttrDef_CustomName.m_szName != 0 )
  {
    v4 = GEconItemSchema();
    m_pRef = CEconItem::SetCustomName(char const*)::pAttrDef_CustomName.m_pRef;
    v6 = v4->m_unResetCount;
    if ( v6 != CEconItem::SetCustomName(char const*)::pAttrDef_CustomName.m_unSchemaGeneration )
    {
      m_szName = CEconItem::SetCustomName(char const*)::pAttrDef_CustomName.m_szName;
      v8 = GEconItemSchema();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v8, m_szName);
      CEconItem::SetCustomName(char const*)::pAttrDef_CustomName.m_unSchemaGeneration = v6;
      m_pRef = AttributeDefinitionByName;
      CEconItem::SetCustomName(char const*)::pAttrDef_CustomName.m_pRef = AttributeDefinitionByName;
    }
  }
  else
  {
    m_pRef = 0;
  }
  SetCustomNameOrDescAttribute(this, m_pRef, pName);
}


// CEconItem::IsEquipped  (line 419, @0x0000000002e39eb0, libserver.so)  // inlines: IsValidClass
// calls: CEconItem::GetEquippedInstanceList, GetItemSchema
// callers: CEconItemView::IsEquipped
bool __fastcall CEconItem::IsEquipped(const CEconItem *const this)
{
  uint32 EquippedInstanceList; // eax
  unsigned __int64 v2; // rbx
  __int64 v3; // r13
  equipped_class_t m_unEquippedClass; // r12
  GameItemSchema_t *ItemSchema; // rax
  const CEconItem::EquippedInstance_t *pList; // [rsp+8h] [rbp-28h] BYREF

  EquippedInstanceList = CEconItem::GetEquippedInstanceList(this, &pList);
  if ( EquippedInstanceList == 0 )
    return 0;
  v2 = 0;
  v3 = 4LL * (EquippedInstanceList - 1) + 4;
  while ( 1 )
  {
    m_unEquippedClass = pList[v2 / 4].m_unEquippedClass;
    ItemSchema = GetItemSchema();
    if ( m_unEquippedClass >= ItemSchema->m_unFirstValidClass && m_unEquippedClass <= ItemSchema->m_unLastValidClass )
      break;
    v2 += 4LL;
    if ( v2 == v3 )
      return 0;
  }
  return 1;
}


// CEconItem::IsEquippedForClass  (line 438, @0x0000000002e39fb0, libserver.so)  // inlines: GetEquippedPositionForClass
// calls: CEconItem::FindEquippedInstanceForClass
bool __fastcall CEconItem::IsEquippedForClass(const CEconItem *const this, equipped_class_t unClass)
{
  const CEconItem::EquippedInstance_t *EquippedInstanceForClass; // rax

  EquippedInstanceForClass = CEconItem::FindEquippedInstanceForClass(this, unClass);
  return EquippedInstanceForClass != 0 && EquippedInstanceForClass->m_unEquippedSlot != 0xFFFF;
}


// CEconItem::GetEquippedPositionForClass  (line 446, @0x0000000002e39f90, libserver.so)
// calls: CEconItem::FindEquippedInstanceForClass
equipped_slot_t __fastcall CEconItem::GetEquippedPositionForClass(
        const CEconItem *const this,
        equipped_class_t unClass)
{
  const CEconItem::EquippedInstance_t *EquippedInstanceForClass; // rax
  equipped_slot_t v3; // dx

  EquippedInstanceForClass = CEconItem::FindEquippedInstanceForClass(this, unClass);
  v3 = -1;
  if ( EquippedInstanceForClass != 0 )
    return EquippedInstanceForClass->m_unEquippedSlot;
  return v3;
}


// CEconItem::FindEquippedInstanceForClass  (line 458, @0x0000000002e39f30, libserver.so)
// calls: CEconItem::GetEquippedInstanceList
// callers: CEconItem::GetEquippedPositionForClass, CEconItem::IsEquippedForClass, CDOTAPlayerInventory::RemoveItemFromLoadout
const CEconItem::EquippedInstance_t *__fastcall CEconItem::FindEquippedInstanceForClass(
        const CEconItem *const this,
        equipped_class_t nClass)
{
  uint32 EquippedInstanceList; // eax
  const CEconItem::EquippedInstance_t *v4; // rdx
  const CEconItem::EquippedInstance_t *v5; // rcx
  const CEconItem::EquippedInstance_t *result; // rax
  const CEconItem::EquippedInstance_t *pList; // [rsp+8h] [rbp-18h] BYREF

  EquippedInstanceList = CEconItem::GetEquippedInstanceList(this, &pList);
  if ( EquippedInstanceList != 0 )
  {
    if ( pList->m_unEquippedClass == nClass )
      return pList;
    v4 = pList + 1;
    v5 = &pList[EquippedInstanceList];
    while ( v4 != v5 )
    {
      result = v4++;
      if ( v4[-1].m_unEquippedClass == nClass )
        return result;
    }
  }
  return 0;
}


// CEconItem::InternalVerifyEquipInstanceIntegrity  (line 473, @0x0000000002e39d40, libserver.so)
void __fastcall CEconItem::InternalVerifyEquipInstanceIntegrity(const CEconItem *const this)
{
  ;
}


// CEconItem::Equip  (line 497, @0x0000000002e469d0, libserver.so)  // inlines: AddToTail, CopyConstruct<CEconItem::EquippedInstance_t>, Element, GrowMemory, operator[]
// calls: CEconItem::UnequipFromClass, CEconItem::EnsureCustomDataExists, CUtlMemory<CEconItem::EquippedInstance_t, int>::Grow
// callers: CEconItem::DeserializeFromProtoBufItem
void __fastcall CEconItem::Equip(CEconItem *const this, equipped_class_t unClass, equipped_slot_t unSlot)
{
  CEconItemCustomData *m_pCustomData; // rbx
  __int64 m_Size; // r12
  int v8; // eax
  CEconItem::EquippedInstance_t *v9; // rax
  CEconItem::dirty_bits_t m_dirtyBits; // al

  CEconItem::UnequipFromClass(this, unClass);
  m_pCustomData = this->m_pCustomData;
  if ( m_pCustomData != 0 )
  {
    m_Size = m_pCustomData->m_vecEquipped.m_Size;
    v8 = m_pCustomData->m_vecEquipped.m_Size;
    if ( m_Size != m_pCustomData->m_vecEquipped.m_Memory.m_nAllocationCount )
      goto LABEL_3;
    goto LABEL_9;
  }
  m_dirtyBits = this->m_dirtyBits;
  if ( (*&m_dirtyBits & 2) == 0 )
  {
    this->m_EquipInstanceSingleton.m_unEquippedClass = unClass;
    this->m_EquipInstanceSingleton.m_unEquippedSlot = unSlot;
    this->m_dirtyBits = (*&m_dirtyBits | 2);
    return;
  }
  CEconItem::EnsureCustomDataExists(this);
  m_pCustomData = this->m_pCustomData;
  m_Size = m_pCustomData->m_vecEquipped.m_Size;
  v8 = m_pCustomData->m_vecEquipped.m_Size;
  if ( m_Size == m_pCustomData->m_vecEquipped.m_Memory.m_nAllocationCount )
  {
LABEL_9:
    CUtlMemory<CEconItem::EquippedInstance_t,int>::Grow(&m_pCustomData->m_vecEquipped.m_Memory, 1);
    v8 = m_pCustomData->m_vecEquipped.m_Size;
  }
LABEL_3:
  m_pCustomData->m_vecEquipped.m_Size = v8 + 1;
  v9 = &m_pCustomData->m_vecEquipped.m_Memory.m_pMemory[m_Size];
  if ( v9 != 0 )
  {
    v9->m_unEquippedClass = unClass;
    v9->m_unEquippedSlot = unSlot;
  }
}


// CEconItem::Unequip  (line 530, @0x0000000002e39d50, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<CEconItem::EquippedInstance_t, int>::Purge
// callers: CEconItem::DeserializeFromProtoBufItem
void __fastcall CEconItem::Unequip(CEconItem *const this)
{
  CEconItem::dirty_bits_t m_dirtyBits; // al
  CEconItemCustomData *m_pCustomData; // rdi
  bool v3; // zf

  m_dirtyBits = this->m_dirtyBits;
  if ( (*&m_dirtyBits & 2) != 0 )
  {
    this->m_dirtyBits = (*&m_dirtyBits & 0xFD);
  }
  else
  {
    m_pCustomData = this->m_pCustomData;
    if ( m_pCustomData != 0 )
    {
      v3 = (m_pCustomData->m_vecEquipped.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      m_pCustomData->m_vecEquipped.m_Size = 0;
      if ( v3 )
        CUtlMemory<CEconItem::EquippedInstance_t,int>::Purge(&m_pCustomData->m_vecEquipped.m_Memory);
    }
  }
}


// CEconItem::UnequipFromClass  (line 548, @0x0000000002e39da0, libserver.so)  // inlines: Element, FastRemove, memcpy, operator[]
// callers: CEconItem::Equip
void __fastcall CEconItem::UnequipFromClass(CEconItem *const this, equipped_class_t unClass)
{
  CEconItem::dirty_bits_t m_dirtyBits; // al
  CEconItemCustomData *m_pCustomData; // rdi
  int m_Size; // ecx
  CEconItem::EquippedInstance_t *m_pMemory; // r9
  int v6; // edx
  CEconItem::EquippedInstance_t *v8; // rax
  CEconItem::EquippedInstance_t *v9; // rsi
  int v10; // ecx

  m_dirtyBits = this->m_dirtyBits;
  if ( (*&m_dirtyBits & 2) != 0 )
  {
    if ( this->m_EquipInstanceSingleton.m_unEquippedClass == unClass )
      this->m_dirtyBits = (*&m_dirtyBits & 0xFD);
  }
  else
  {
    m_pCustomData = this->m_pCustomData;
    if ( m_pCustomData != 0 )
    {
      m_Size = m_pCustomData->m_vecEquipped.m_Size;
      if ( m_Size > 0 )
      {
        m_pMemory = m_pCustomData->m_vecEquipped.m_Memory.m_pMemory;
        v6 = 0;
        v8 = m_pMemory + 1;
        if ( unClass == m_pMemory->m_unEquippedClass )
        {
          v9 = m_pCustomData->m_vecEquipped.m_Memory.m_pMemory;
          v6 = 0;
LABEL_12:
          v10 = m_Size - 1;
          if ( v6 != v10 )
          {
            *v9 = m_pMemory[v10];
            v10 = m_pCustomData->m_vecEquipped.m_Size - 1;
          }
          m_pCustomData->m_vecEquipped.m_Size = v10;
        }
        else
        {
          while ( ++v6 != m_Size )
          {
            v9 = v8++;
            if ( unClass == v8[-1].m_unEquippedClass )
              goto LABEL_12;
          }
        }
      }
    }
  }
}


// CEconItem::GetCustomAttributeList  (line 583, @0x0000000002e39e30, libserver.so)
// callers: CEconItem::FastIterateAttributesOfType, CEconItem::SerializeToProtoBufItem
uint32 __fastcall CEconItem::GetCustomAttributeList(const CEconItem *const this, const CEconItem::attribute_t **ppList)
{
  CEconItemCustomData *m_pCustomData; // rax

  m_pCustomData = this->m_pCustomData;
  if ( m_pCustomData != 0 )
  {
    *ppList = m_pCustomData->m_vecAttributes.m_Memory.m_pMemory;
    return this->m_pCustomData->m_vecAttributes.m_Size;
  }
  else
  {
    *ppList = &this->m_CustomAttribSingleton;
    return (*&this->m_dirtyBits & 4) != 0;
  }
}


// CEconItem::GetEquippedInstanceList  (line 600, @0x0000000002e39e70, libserver.so)
// callers: CEconItem::IsEquipped, CEconItem::FindEquippedInstanceForClass, CEconItem::SerializeToProtoBufItem
uint32 __fastcall CEconItem::GetEquippedInstanceList(
        const CEconItem *const this,
        const CEconItem::EquippedInstance_t **ppList)
{
  CEconItemCustomData *m_pCustomData; // rax

  m_pCustomData = this->m_pCustomData;
  if ( m_pCustomData != 0 )
  {
    *ppList = m_pCustomData->m_vecEquipped.m_Memory.m_pMemory;
    return this->m_pCustomData->m_vecEquipped.m_Size;
  }
  else
  {
    *ppList = &this->m_EquipInstanceSingleton;
    return (*&this->m_dirtyBits & 2) != 0;
  }
}


// CEconItem::GetEquippedInstanceCount  (line 617, @0x0000000002e39fe0, libserver.so)
int __fastcall CEconItem::GetEquippedInstanceCount(const CEconItem *const this)
{
  CEconItemCustomData *m_pCustomData; // rax

  m_pCustomData = this->m_pCustomData;
  if ( m_pCustomData != 0 )
    return m_pCustomData->m_vecEquipped.m_Size;
  else
    return (*&this->m_dirtyBits & 2) != 0;
}


// CEconItem::GetEquippedInstance  (line 628, @0x0000000002e3a010, libserver.so)  // inlines: operator[]
const CEconItem::EquippedInstance_t *__fastcall CEconItem::GetEquippedInstance(const CEconItem *const this, int iIdx)
{
  CEconItemCustomData *m_pCustomData; // rdx
  const CEconItem::EquippedInstance_t *result; // rax

  m_pCustomData = this->m_pCustomData;
  result = &this->m_EquipInstanceSingleton;
  if ( m_pCustomData != 0 )
    return &m_pCustomData->m_vecEquipped.m_Memory.m_pMemory[iIdx];
  return result;
}


// CEconItem::GetCustomDesc  (line 641, @0x0000000002e33a30, libserver.so)  // inlines: CSchemaFieldHandle, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, GetCustomNameOrAttributeDesc, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "custom desc attr"
// globals: `guard variable for'CEconItem::GetCustomDesc(void)::pAttrDef_CustomDesc, CEconItem::GetCustomDesc(void)::pAttrDef_CustomDesc, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
const char *__fastcall CEconItem::GetCustomDesc(const CEconItem *const this)
{
  CEconItemSchema *v2; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  uint32 v4; // ebx
  const char *m_szName; // r13
  CEconItemSchema *v6; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  CEconItemSchema *v9; // rax
  uint32 m_unResetCount; // eax

  if ( `guard variable for'CEconItem::GetCustomDesc(void)::pAttrDef_CustomDesc == 0
    && __cxa_guard_acquire(&`guard variable for'CEconItem::GetCustomDesc(void)::pAttrDef_CustomDesc) != 0 )
  {
    CEconItem::GetCustomDesc(void)const::pAttrDef_CustomDesc.m_szName = "custom desc attr";
    v9 = GEconItemSchema();
    CEconItem::GetCustomDesc(void)const::pAttrDef_CustomDesc.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                        v9,
                                                                        "custom desc attr");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    CEconItem::GetCustomDesc(void)const::pAttrDef_CustomDesc.m_bDestructName = 0;
    CEconItem::GetCustomDesc(void)const::pAttrDef_CustomDesc.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CEconItem::GetCustomDesc(void)::pAttrDef_CustomDesc);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconItem::GetCustomDesc(void)const::pAttrDef_CustomDesc,
      &_dso_handle);
  }
  if ( CEconItem::GetCustomDesc(void)const::pAttrDef_CustomDesc.m_szName != 0 )
  {
    v2 = GEconItemSchema();
    m_pRef = CEconItem::GetCustomDesc(void)const::pAttrDef_CustomDesc.m_pRef;
    v4 = v2->m_unResetCount;
    if ( v4 != CEconItem::GetCustomDesc(void)const::pAttrDef_CustomDesc.m_unSchemaGeneration )
    {
      m_szName = CEconItem::GetCustomDesc(void)const::pAttrDef_CustomDesc.m_szName;
      v6 = GEconItemSchema();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v6, m_szName);
      CEconItem::GetCustomDesc(void)const::pAttrDef_CustomDesc.m_unSchemaGeneration = v4;
      m_pRef = AttributeDefinitionByName;
      CEconItem::GetCustomDesc(void)const::pAttrDef_CustomDesc.m_pRef = AttributeDefinitionByName;
    }
  }
  else
  {
    m_pRef = 0;
  }
  return GetCustomNameOrAttributeDesc(this, m_pRef);
}


// CEconItem::SetCustomDesc  (line 651, @0x0000000002e4e200, libserver.so)  // inlines: CSchemaFieldHandle, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, SetCustomNameOrDescAttribute, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "custom desc attr"
// globals: `guard variable for'CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc, CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
void __fastcall CEconItem::SetCustomDesc(CEconItem *const this, const char *pDesc)
{
  CEconItemSchema *v4; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  uint32 v6; // ebx
  const char *m_szName; // r14
  CEconItemSchema *v8; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  CEconItemSchema *v10; // rax
  uint32 m_unResetCount; // eax

  if ( `guard variable for'CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc == 0
    && __cxa_guard_acquire(&`guard variable for'CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc) != 0 )
  {
    CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc.m_szName = "custom desc attr";
    v10 = GEconItemSchema();
    CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                          v10,
                                                                          "custom desc attr");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc.m_bDestructName = 0;
    CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc,
      &_dso_handle);
  }
  if ( CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc.m_szName != 0 )
  {
    v4 = GEconItemSchema();
    m_pRef = CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc.m_pRef;
    v6 = v4->m_unResetCount;
    if ( v6 != CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc.m_unSchemaGeneration )
    {
      m_szName = CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc.m_szName;
      v8 = GEconItemSchema();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v8, m_szName);
      CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc.m_unSchemaGeneration = v6;
      m_pRef = AttributeDefinitionByName;
      CEconItem::SetCustomDesc(char const*)::pAttrDef_CustomDesc.m_pRef = AttributeDefinitionByName;
    }
  }
  else
  {
    m_pRef = 0;
  }
  SetCustomNameOrDescAttribute(this, m_pRef, pDesc);
}


// CEconItem::GetInUse  (line 661, @0x0000000002e30960, libserver.so)
bool __fastcall CEconItem::GetInUse(const CEconItem *const this)
{
  return *&this->m_dirtyBits & 1;
}


// CEconItem::SetInUse  (line 669, @0x0000000002e3a030, libserver.so)
void __fastcall CEconItem::SetInUse(CEconItem *const this, bool bInUse)
{
  if ( bInUse )
    *&this->m_dirtyBits |= 1u;
  else
    *&this->m_dirtyBits &= ~1u;
}


// CEconItem::GetItemDefinition  (line 684, @0x0000000002e30d80, libserver.so)
// calls: GetItemSchema, CEconItemSchema::GetItemDefinition, __dynamic_cast
// globals: `typeinfo for'CDOTAItemDefinition
const GameItemDefinition_t *__fastcall CEconItem::GetItemDefinition(const CEconItem *const this)
{
  uint16 m_Data; // bx
  GameItemSchema_t *ItemSchema; // rax
  const CEconItemDefinition *ItemDefinition; // rax

  m_Data = this->m_unDefIndex.m_Data;
  ItemSchema = GetItemSchema();
  ItemDefinition = CEconItemSchema::GetItemDefinition(ItemSchema, m_Data, 0);
  if ( ItemDefinition != 0 )
    return __dynamic_cast(ItemDefinition, &`typeinfo for'CEconItemDefinition, &`typeinfo for'CDOTAItemDefinition, 0);
  else
    return 0;
}


// CEconItem::IsSocketable  (line 694, @0x0000000002e316f0, libserver.so)
bool __fastcall CEconItem::IsSocketable(const CEconItem *const this)
{
  __int64 v2; // rax
  char v3; // r12

  v2 = (*(this->_vptr_CSharedObject + 10))(this);
  if ( v2 == 0 )
    return 0;
  v3 = (*(*v2 + 112LL))(v2);
  if ( v3 != 0 )
    return 0;
  if ( (*(this->_vptr_CSharedObject + 15))(this) != 7
    && (*(this->_vptr_CSharedObject + 15))(this) != 5
    && (*(this->_vptr_CSharedObject + 15))(this) != 6 )
  {
    return (*((*(this->_vptr_CSharedObject + 10))(this) + 36) & 0x100000) != 0;
  }
  return v3;
}


// CEconItem::CanAddSockets  (line 712, @0x0000000002e31910, libserver.so)  // inlines: CSocketIterator, CSocketPair
bool __fastcall CEconItem::CanAddSockets(const CEconItem *const this, int nSocketCount)
{
  bool result; // al
  CSocketIterator *m_Sockets; // rax
  int (**vptr_CSharedObject)(...); // rax
  CSocketIterator socketIterator; // [rsp+0h] [rbp-D0h] BYREF

  result = (*(this->_vptr_CSharedObject + 28))(this);
  if ( result )
  {
    socketIterator._vptr_IEconItemAttributeIterator = off_47A8B30;
    m_Sockets = socketIterator.m_Sockets;
    do
    {
      m_Sockets->_vptr_IEconItemAttributeIterator = 0;
      m_Sockets = (m_Sockets + 16);
      *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
    }
    while ( m_Sockets != &socketIterator.m_nSocketCount );
    vptr_CSharedObject = this->_vptr_CSharedObject;
    socketIterator.m_nSocketCount = 0;
    socketIterator.m_nGemCount = 0;
    socketIterator.m_unAttribStorageTypeFlags = 1;
    vptr_CSharedObject[11](this, &socketIterator, &socketIterator.m_nSocketCount);
    return socketIterator.m_nSocketCount + nSocketCount <= 5;
  }
  return result;
}


// CEconItem::GetGemInfo  (line 723, @0x0000000002e3a070, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute<CAttribute_Socket>, FindAttribute<IEconItemInterface, CAttribute_Socket>, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<CAttribute_Socket, CAttribute_Socket, IEconItemInterface>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, Get, GetItemSocket, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: CAttribute_Socket::CAttribute_Socket, __cxa_guard_acquire, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_release, __cxa_atexit, CEconItem::IsTradable, CAttribute_Socket::~CAttribute_Socket, __cxa_guard_abort, _Unwind_Resume
// strings: "socket 1", "gem not removable"
// globals: `guard variable for'CEconItem::GetGemInfo(GemInfo_t *)::pAttr_Socket, CEconItem::GetGemInfo(GemInfo_t *)::pAttr_Socket, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle(), `guard variable for'CEconItem::GetGemInfo(GemInfo_t *)::pAttrDef_GemNotRemovable, CEconItem::GetGemInfo(GemInfo_t *)::pAttrDef_GemNotRemovable
bool __fastcall CEconItem::GetGemInfo(const CEconItem *const this, GemInfo_t *pInfo)
{
  bool v3; // r12
  CEconItemSchema *v6; // rax
  uint32 m_unResetCount; // eax
  uint32 v8; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r15
  CEconItemSchema *v11; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  uint32 v13; // r15d
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  CEconItemSchema *v15; // rax
  int (**v16)(...); // rax
  bool v17; // al
  bool IsTradable; // al
  IItemSocket *m_pSocket; // rdi
  int v20; // eax
  int v21; // edx
  IItemSocket *v22; // rdi
  CEconItemSchema *v23; // rax
  uint32 v24; // eax
  char *pszDefName; // [rsp+0h] [rbp-A0h]
  uint32 unGemNotRemovable; // [rsp+1Ch] [rbp-84h] BYREF
  CAttribute_Socket socket_attrib; // [rsp+20h] [rbp-80h] BYREF
  _QWORD v28[3]; // [rsp+30h] [rbp-70h] BYREF
  bool v29; // [rsp+48h] [rbp-58h]
  _QWORD v30[3]; // [rsp+50h] [rbp-50h] BYREF
  bool v31; // [rsp+68h] [rbp-38h]

  v3 = 0;
  if ( (*((*(this->_vptr_CSharedObject + 10))(this) + 39) & 1) != 0 )
  {
    CAttribute_Socket::CAttribute_Socket(&socket_attrib);
    if ( `guard variable for'CEconItem::GetGemInfo(GemInfo_t *)::pAttr_Socket == 0
      && __cxa_guard_acquire(&`guard variable for'CEconItem::GetGemInfo(GemInfo_t *)::pAttr_Socket) != 0 )
    {
      CEconItem::GetGemInfo(GemInfo_t *)const::pAttr_Socket.m_szName = "socket 1";
      v6 = GEconItemSchema();
      CEconItem::GetGemInfo(GemInfo_t *)const::pAttr_Socket.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                       v6,
                                                                       "socket 1");
      m_unResetCount = GEconItemSchema()->m_unResetCount;
      CEconItem::GetGemInfo(GemInfo_t *)const::pAttr_Socket.m_bDestructName = 0;
      CEconItem::GetGemInfo(GemInfo_t *)const::pAttr_Socket.m_unSchemaGeneration = m_unResetCount;
      __cxa_guard_release(&`guard variable for'CEconItem::GetGemInfo(GemInfo_t *)::pAttr_Socket);
      __cxa_atexit(
        CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
        &CEconItem::GetGemInfo(GemInfo_t *)const::pAttr_Socket,
        &_dso_handle);
    }
    if ( CEconItem::GetGemInfo(GemInfo_t *)const::pAttr_Socket.m_szName == 0 )
      goto LABEL_23;
    v8 = GEconItemSchema()->m_unResetCount;
    m_pRef = CEconItem::GetGemInfo(GemInfo_t *)const::pAttr_Socket.m_pRef;
    if ( v8 != CEconItem::GetGemInfo(GemInfo_t *)const::pAttr_Socket.m_unSchemaGeneration )
    {
      m_szName = CEconItem::GetGemInfo(GemInfo_t *)const::pAttr_Socket.m_szName;
      v11 = GEconItemSchema();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v11, m_szName);
      CEconItem::GetGemInfo(GemInfo_t *)const::pAttr_Socket.m_pRef = m_pRef;
      CEconItem::GetGemInfo(GemInfo_t *)const::pAttr_Socket.m_unSchemaGeneration = v8;
    }
    if ( m_pRef != 0 )
    {
      v28[1] = m_pRef;
      vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
      v28[2] = &socket_attrib;
      v28[0] = off_47A46F0;
      v29 = 0;
      vptr_IEconItemInterface[28](&this->IEconItemInterface, v28);
      v3 = v29;
      if ( v29 )
      {
        if ( `guard variable for'CEconItem::GetGemInfo(GemInfo_t *)::pAttrDef_GemNotRemovable == 0
          && __cxa_guard_acquire(&`guard variable for'CEconItem::GetGemInfo(GemInfo_t *)::pAttrDef_GemNotRemovable) != 0 )
        {
          CEconItem::GetGemInfo(GemInfo_t *)const::pAttrDef_GemNotRemovable.m_szName = "gem not removable";
          v23 = GEconItemSchema();
          CEconItem::GetGemInfo(GemInfo_t *)const::pAttrDef_GemNotRemovable.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                       v23,
                                                                                       "gem not removable");
          v24 = GEconItemSchema()->m_unResetCount;
          CEconItem::GetGemInfo(GemInfo_t *)const::pAttrDef_GemNotRemovable.m_bDestructName = 0;
          CEconItem::GetGemInfo(GemInfo_t *)const::pAttrDef_GemNotRemovable.m_unSchemaGeneration = v24;
          __cxa_guard_release(&`guard variable for'CEconItem::GetGemInfo(GemInfo_t *)::pAttrDef_GemNotRemovable);
          __cxa_atexit(
            CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
            &CEconItem::GetGemInfo(GemInfo_t *)const::pAttrDef_GemNotRemovable,
            &_dso_handle);
        }
        if ( CEconItem::GetGemInfo(GemInfo_t *)const::pAttrDef_GemNotRemovable.m_szName == 0 )
          goto LABEL_24;
        v13 = GEconItemSchema()->m_unResetCount;
        AttributeDefinitionByName = CEconItem::GetGemInfo(GemInfo_t *)const::pAttrDef_GemNotRemovable.m_pRef;
        if ( v13 != CEconItem::GetGemInfo(GemInfo_t *)const::pAttrDef_GemNotRemovable.m_unSchemaGeneration )
        {
          pszDefName = CEconItem::GetGemInfo(GemInfo_t *)const::pAttrDef_GemNotRemovable.m_szName;
          v15 = GEconItemSchema();
          AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v15, pszDefName);
          CEconItem::GetGemInfo(GemInfo_t *)const::pAttrDef_GemNotRemovable.m_pRef = AttributeDefinitionByName;
          CEconItem::GetGemInfo(GemInfo_t *)const::pAttrDef_GemNotRemovable.m_unSchemaGeneration = v13;
        }
        if ( AttributeDefinitionByName != 0 )
        {
          v30[1] = AttributeDefinitionByName;
          v31 = 0;
          v30[2] = &unGemNotRemovable;
          v16 = this->_vptr_IEconItemInterface;
          v30[0] = &wrapper;
          v16[28](&this->IEconItemInterface, v30);
          v17 = v31;
        }
        else
        {
LABEL_24:
          v17 = 0;
        }
        pInfo->m_bIsUnremovableGem = v17;
        IsTradable = CEconItem::IsTradable(this);
        m_pSocket = socket_attrib.m_pSocket;
        pInfo->m_bIsUntradable = !IsTradable;
        v20 = (*(m_pSocket->_vptr_IItemSocket + 14))(m_pSocket);
        v21 = -1;
        v22 = socket_attrib.m_pSocket;
        if ( v20 != 0 )
          v21 = v20;
        pInfo->m_nRequiredHeroID = v21;
        pInfo->m_nGemType = (*(v22->_vptr_IItemSocket + 20))(v22);
      }
    }
    else
    {
LABEL_23:
      v3 = 0;
    }
    CAttribute_Socket::~CAttribute_Socket(&socket_attrib);
  }
  return v3;
}


// CEconItem::IsTradable  (line 753, @0x0000000002e3a050, libserver.so)
// calls: IEconItemInterface::IsTradable
// callers: CEconItem::GetGemInfo
bool __fastcall CEconItem::IsTradable(const CEconItem *const this)
{
  return (*&this->m_dirtyBits & 1) == 0 && IEconItemInterface::IsTradable(&this->IEconItemInterface, 0);
}


// CEconItem::IsMarketable  (line 762, @0x0000000002e31530, libserver.so)
// calls: IEconItemInterface::IsMarketable
bool __fastcall CEconItem::IsMarketable(const CEconItem *const this)
{
  return (*&this->m_dirtyBits & 1) == 0 && IEconItemInterface::IsMarketable(&this->IEconItemInterface);
}


// CEconItem::IsCommodity  (line 771, @0x0000000002e31560, libserver.so)
// calls: IEconItemInterface::IsCommodity
bool __fastcall CEconItem::IsCommodity(const CEconItem *const this)
{
  return (*&this->m_dirtyBits & 1) == 0 && IEconItemInterface::IsCommodity(&this->IEconItemInterface);
}


// CEconItem::IterateAttributes  (line 777, @0x0000000002e33740, libserver.so)  // inlines: GetDynamicAttributeCountInternal, GetDynamicAttributeInternal, GetMutableDynamicAttributeInternal, operator[]
// calls: GetItemSchema, CEconItemSchema::GetAttributeDefinition, CEconItemDefinition::IterateAttributes
void __fastcall CEconItem::IterateAttributes(const CEconItem *const this, IEconItemAttributeIterator *pIterator)
{
  __int64 i; // r12
  CEconItem::attribute_t *p_m_CustomAttribSingleton; // rbx
  int m_unDefinitionIndex; // r15d
  GameItemSchema_t *ItemSchema; // rax
  const CEconItemAttributeDefinition *AttributeDefinition; // rax
  CEconItemCustomData *m_pCustomData; // rax
  const CEconItemDefinition *v10; // rax

  for ( i = 0; ; ++i )
  {
    m_pCustomData = this->m_pCustomData;
    if ( m_pCustomData == 0 )
      break;
    if ( i >= m_pCustomData->m_vecAttributes.m_Size )
      goto LABEL_10;
    p_m_CustomAttribSingleton = &m_pCustomData->m_vecAttributes.m_Memory.m_pMemory[i];
LABEL_4:
    m_unDefinitionIndex = p_m_CustomAttribSingleton->m_unDefinitionIndex;
    ItemSchema = GetItemSchema();
    AttributeDefinition = CEconItemSchema::GetAttributeDefinition(ItemSchema, m_unDefinitionIndex);
    if ( AttributeDefinition != 0
      && (*(AttributeDefinition->m_pAttrType->_vptr_ISchemaAttributeType + 10))(
           AttributeDefinition->m_pAttrType,
           pIterator,
           AttributeDefinition,
           &p_m_CustomAttribSingleton->m_value) == 0 )
    {
      return;
    }
  }
  if ( i < ((*&this->m_dirtyBits & 4) != 0) )
  {
    p_m_CustomAttribSingleton = &this->m_CustomAttribSingleton;
    goto LABEL_4;
  }
LABEL_10:
  v10 = (*(this->_vptr_CSharedObject + 10))(this);
  if ( v10 != 0 )
    CEconItemDefinition::IterateAttributes(v10, pIterator);
}


// CEconItem::IterateDynamicAttributes  (line 801, @0x0000000002e3a3a0, libserver.so)  // inlines: GetDynamicAttributeCountInternal, GetDynamicAttributeInternal, GetMutableDynamicAttributeInternal, operator[]
// calls: GetItemSchema, CEconItemSchema::GetAttributeDefinition
void __fastcall CEconItem::IterateDynamicAttributes(const CEconItem *const this, IEconItemAttributeIterator *pIterator)
{
  __int64 i; // r12
  CEconItem::attribute_t *p_m_CustomAttribSingleton; // rbx
  int m_unDefinitionIndex; // r15d
  GameItemSchema_t *ItemSchema; // rax
  const CEconItemAttributeDefinition *AttributeDefinition; // rax
  CEconItemCustomData *m_pCustomData; // rax

  for ( i = 0; ; ++i )
  {
    m_pCustomData = this->m_pCustomData;
    if ( m_pCustomData != 0 )
    {
      if ( i >= m_pCustomData->m_vecAttributes.m_Size )
        return;
      p_m_CustomAttribSingleton = &m_pCustomData->m_vecAttributes.m_Memory.m_pMemory[i];
    }
    else
    {
      if ( i >= ((*&this->m_dirtyBits & 4) != 0) )
        return;
      p_m_CustomAttribSingleton = &this->m_CustomAttribSingleton;
    }
    m_unDefinitionIndex = p_m_CustomAttribSingleton->m_unDefinitionIndex;
    ItemSchema = GetItemSchema();
    AttributeDefinition = CEconItemSchema::GetAttributeDefinition(ItemSchema, m_unDefinitionIndex);
    if ( AttributeDefinition != 0
      && (*(AttributeDefinition->m_pAttrType->_vptr_ISchemaAttributeType + 10))(
           AttributeDefinition->m_pAttrType,
           pIterator,
           AttributeDefinition,
           &p_m_CustomAttribSingleton->m_value) == 0 )
    {
      break;
    }
  }
}


// CEconItem::FastIterateAttributesOfType  (line 818, @0x0000000002e3a440, libserver.so)
// calls: CEconItem::GetCustomAttributeList, CEconItemDefinition::IterateAttributesOfType
void __fastcall CEconItem::FastIterateAttributesOfType(
        const CEconItem *const this,
        IEconItemAttributeIterator *pIterator,
        const CEconItemAttributeDefinition *const attrDef,
        const CEconItemDefinition *const itemDef)
{
  uint32 v4; // r14d
  uint32 CustomAttributeList; // r12d
  __int64 v7; // r15
  attrib_definition_index_t m_unDefinitionIndex; // bx
  const CEconItem::attribute_t *pAttributes; // [rsp+28h] [rbp-38h] BYREF

  v4 = 0;
  CustomAttributeList = CEconItem::GetCustomAttributeList(this, &pAttributes);
  if ( CustomAttributeList != 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v4;
        m_unDefinitionIndex = pAttributes[v7].m_unDefinitionIndex;
        if ( m_unDefinitionIndex == (*attrDef->_vptr_IEconItemAttributeDefinition)(attrDef) )
          break;
        if ( CustomAttributeList <= ++v4 )
          goto LABEL_7;
      }
      if ( (*(attrDef->m_pAttrType->_vptr_ISchemaAttributeType + 10))(
             attrDef->m_pAttrType,
             pIterator,
             attrDef,
             &pAttributes[v7].m_value) == 0 )
        break;
      ++v4;
      CustomAttributeList = CEconItem::GetCustomAttributeList(this, &pAttributes);
      if ( CustomAttributeList <= v4 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    CEconItemDefinition::IterateAttributesOfType(itemDef, pIterator, attrDef);
  }
}


// CEconItem::IsUsableInCrafting  (line 841, @0x0000000002e31590, libserver.so)
// calls: IEconItemInterface::IsUsableInCrafting
bool __fastcall CEconItem::IsUsableInCrafting(const CEconItem *const this)
{
  return (*&this->m_dirtyBits & 1) == 0 && IEconItemInterface::IsUsableInCrafting(&this->IEconItemInterface);
}


// CEconItem::GetDynamicAttributeCountInternal  (line 888, @0x0000000002e3a500, libserver.so)
int __fastcall CEconItem::GetDynamicAttributeCountInternal(const CEconItem *const this)
{
  CEconItemCustomData *m_pCustomData; // rax

  m_pCustomData = this->m_pCustomData;
  if ( m_pCustomData != 0 )
    return m_pCustomData->m_vecAttributes.m_Size;
  else
    return (*&this->m_dirtyBits & 4) != 0;
}


// CEconItem::GetMutableDynamicAttributeInternal  (line 899, @0x0000000002e3a530, libserver.so)  // inlines: operator[]
CEconItem::attribute_t *__fastcall CEconItem::GetMutableDynamicAttributeInternal(
        CEconItem *const this,
        int iAttrIndexIntoArray)
{
  CEconItemCustomData *m_pCustomData; // rdx
  CEconItem::attribute_t *result; // rax

  m_pCustomData = this->m_pCustomData;
  result = &this->m_CustomAttribSingleton;
  if ( m_pCustomData != 0 )
    return &m_pCustomData->m_vecAttributes.m_Memory.m_pMemory[iAttrIndexIntoArray];
  return result;
}


// CEconItem::FindDynamicAttributeInternal  (line 913, @0x0000000002e3a550, libserver.so)
// callers: CEconItem::SetDynamicMaxTimeAttributeValue, ISchemaAttributeTypeBase<CAttribute_HeroStatue>::LoadByteStreamToEconAttributeValue, ISchemaAttributeTypeBase<CAttribute_HeroStatue>::LoadEconAttributeValue, SetCustomNameOrDescAttribute, ISchemaAttributeTypeBase<long long unsigned int>::LoadEconAttributeValue, ISchemaAttributeTypeBase<float>::LoadEconAttributeValue, ISchemaAttributeTypeBase<unsigned int>::LoadEconAttributeValue, ISchemaAttributeTypeBase<long long unsigned int>::LoadByteStreamToEconAttributeValue, ISchemaAttributeTypeBase<unsigned int>::LoadByteStreamToEconAttributeValue, ISchemaAttributeTypeBase<float>::LoadByteStreamToEconAttributeValue, ISchemaAttributeTypeBase<CAttribute_Socket>::LoadEconAttributeValue, ISchemaAttributeTypeBase<CAttribute_Socket>::LoadByteStreamToEconAttributeValue (16 total)
CEconItem::attribute_t *__fastcall CEconItem::FindDynamicAttributeInternal(
        CEconItem *const this,
        const CEconItemAttributeDefinition *pAttrDef)
{
  CEconItemCustomData *m_pCustomData; // rbx
  __int64 v5; // r12
  int v6; // r13d
  attrib_definition_index_t m_unDefinitionIndex; // bx
  CEconItem::attribute_t *result; // rax
  CEconItem::attribute_t *p_m_CustomAttribSingleton; // r15
  attrib_definition_index_t v10; // r12
  bool v11; // zf

  m_pCustomData = this->m_pCustomData;
  if ( m_pCustomData != 0 )
  {
    v5 = 0;
    v6 = 0;
    if ( m_pCustomData->m_vecAttributes.m_Size <= 0 )
      return 0;
    while ( 1 )
    {
      m_unDefinitionIndex = m_pCustomData->m_vecAttributes.m_Memory.m_pMemory[v5].m_unDefinitionIndex;
      if ( m_unDefinitionIndex == (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef) )
        break;
      m_pCustomData = this->m_pCustomData;
      ++v6;
      ++v5;
      if ( m_pCustomData->m_vecAttributes.m_Size <= v6 )
        return 0;
    }
    return &this->m_pCustomData->m_vecAttributes.m_Memory.m_pMemory[v5];
  }
  else
  {
    if ( (*&this->m_dirtyBits & 4) == 0 )
      return 0;
    p_m_CustomAttribSingleton = &this->m_CustomAttribSingleton;
    v10 = this->m_CustomAttribSingleton.m_unDefinitionIndex;
    v11 = v10 == (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef);
    result = 0;
    if ( v11 )
      return p_m_CustomAttribSingleton;
  }
  return result;
}


// CEconItem::AddDynamicAttributeInternal  (line 937, @0x0000000002e46360, libserver.so)  // inlines: AddToTail, GetDynamicAttributeCountInternal, GrowMemory, operator[]
// calls: CEconItem::EnsureCustomDataExists, CUtlMemory<CEconItem::attribute_t, int>::Grow
// callers: CEconItem::SetDynamicMaxTimeAttributeValue, ISchemaAttributeTypeBase<CAttribute_HeroStatue>::LoadByteStreamToEconAttributeValue, ISchemaAttributeTypeBase<CAttribute_HeroStatue>::LoadEconAttributeValue, SetCustomNameOrDescAttribute, ISchemaAttributeTypeBase<long long unsigned int>::LoadEconAttributeValue, ISchemaAttributeTypeBase<float>::LoadEconAttributeValue, ISchemaAttributeTypeBase<unsigned int>::LoadEconAttributeValue, ISchemaAttributeTypeBase<long long unsigned int>::LoadByteStreamToEconAttributeValue, ISchemaAttributeTypeBase<unsigned int>::LoadByteStreamToEconAttributeValue, ISchemaAttributeTypeBase<float>::LoadByteStreamToEconAttributeValue, ISchemaAttributeTypeBase<CAttribute_Socket>::LoadEconAttributeValue, ISchemaAttributeTypeBase<CAttribute_Socket>::LoadByteStreamToEconAttributeValue (16 total)
CEconItem::attribute_t *__fastcall CEconItem::AddDynamicAttributeInternal(CEconItem *const this)
{
  CEconItemCustomData *m_pCustomData; // r12
  int m_Size; // r13d
  CEconItem::dirty_bits_t m_dirtyBits; // al

  if ( this->m_pCustomData != 0 || ((m_dirtyBits = this->m_dirtyBits) & 4) != 0 )
  {
    CEconItem::EnsureCustomDataExists(this);
    m_pCustomData = this->m_pCustomData;
    m_Size = m_pCustomData->m_vecAttributes.m_Size;
    if ( m_Size == m_pCustomData->m_vecAttributes.m_Memory.m_nAllocationCount )
      CUtlMemory<CEconItem::attribute_t,int>::Grow(&m_pCustomData->m_vecAttributes.m_Memory, 1);
    ++m_pCustomData->m_vecAttributes.m_Size;
    return &this->m_pCustomData->m_vecAttributes.m_Memory.m_pMemory[m_Size];
  }
  else
  {
    this->m_dirtyBits = (*&m_dirtyBits | 4);
    return &this->m_CustomAttribSingleton;
  }
}


// CEconItem::SetDynamicMaxTimeAttributeValue  (line 954, @0x0000000002e463f0, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, ConvertTypedValueToEconAttributeValue, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, GetTypedAttributeType<unsigned int>, SetDynamicAttributeValue<unsigned int>, _Alloc_hider, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, basic_string, ~basic_string
// calls: __dynamic_cast, CEconItem::FindDynamicAttributeInternal, std::string::_Rep::_M_destroy(std::allocator<char> const&), CEconItem::AddDynamicAttributeInternal, std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: CEconItem::SetTradableAfterDateTime
// globals: `typeinfo for'ISchemaAttributeTypeBase<uint>, `typeinfo for'ISchemaAttributeType
void __fastcall CEconItem::SetDynamicMaxTimeAttributeValue(
        CEconItem *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        RTime32 rtTime)
{
  IEconItemInterface *v3; // r14
  int (**v6)(...); // rax
  const ISchemaAttributeType *m_pAttrType; // rdi
  void *v8; // r13
  CEconItem::attribute_t *DynamicAttributeInternal; // r15
  int (**vptr_IEconItemInterface)(...); // rax
  CIterateAllAttributes *v11; // rdi
  char *v12; // rdi
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // edx
  RTime32 rtTimea[2]; // [rsp+Ch] [rbp-74h] BYREF
  char v18; // [rsp+17h] [rbp-69h] BYREF
  RTime32 rtExistingTime; // [rsp+18h] [rbp-68h] BYREF
  _BYTE v20[4]; // [rsp+1Ch] [rbp-64h] BYREF
  char *v21; // [rsp+20h] [rbp-60h] BYREF
  CIterateAllAttributes *v22; // [rsp+30h] [rbp-50h] BYREF
  const CEconItemAttributeDefinition *v23; // [rsp+38h] [rbp-48h]
  RTime32 *p_rtExistingTime; // [rsp+40h] [rbp-40h]
  char v25; // [rsp+48h] [rbp-38h]

  v3 = &this->IEconItemInterface;
  rtTimea[0] = rtTime;
  rtExistingTime = 0;
  if ( pAttrDef == 0
    || (v23 = pAttrDef,
        v22 = &wrapper,
        p_rtExistingTime = &rtExistingTime,
        v6 = this->_vptr_IEconItemInterface,
        v25 = 0,
        v6[28](&this->IEconItemInterface, &v22),
        v25 == 0)
    || rtExistingTime < rtTimea[0] )
  {
    m_pAttrType = pAttrDef->m_pAttrType;
    if ( m_pAttrType != 0 )
    {
      v8 = __dynamic_cast(
             m_pAttrType,
             &`typeinfo for'ISchemaAttributeType,
             &`typeinfo for'ISchemaAttributeTypeBase<unsigned int>,
             0);
      if ( v8 != 0 )
      {
        DynamicAttributeInternal = CEconItem::FindDynamicAttributeInternal(this, pAttrDef);
        if ( DynamicAttributeInternal == 0 )
        {
          DynamicAttributeInternal = CEconItem::AddDynamicAttributeInternal(this);
          DynamicAttributeInternal->m_unDefinitionIndex = (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef);
          (*(*v8 + 64LL))(v8, &DynamicAttributeInternal->m_value);
        }
        DynamicAttributeInternal->m_value.asUint32 = rtTimea[0];
        v22 = &wrapper;
        vptr_IEconItemInterface = this->_vptr_IEconItemInterface;
        v23 = pAttrDef;
        p_rtExistingTime = v20;
        v25 = 0;
        vptr_IEconItemInterface[28](v3, &v22);
        v21 = &std::string::_Rep::_S_empty_rep_storage + 24;
        v22 = &std::string::_Rep::_S_empty_rep_storage + 24;
        (*(*v8 + 96LL))(v8, rtTimea, &v21);
        (*(*v8 + 96LL))(v8, v20, &v22);
        v11 = v22 - 24;
        if ( &v22[-24] != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create != 0 )
          {
            v14 = _InterlockedExchangeAdd(&v11[16], 0xFFFFFFFF);
          }
          else
          {
            v16 = *&v22[-8].gap0;
            *&v22[-8].gap0 = v16 - 1;
            v14 = v16;
          }
          if ( v14 <= 0 )
            std::string::_Rep::_M_destroy(v11, &v18);
        }
        v12 = v21 - 24;
        if ( v21 - 24 != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create != 0 )
          {
            v13 = _InterlockedExchangeAdd(v12 + 4, 0xFFFFFFFF);
          }
          else
          {
            v15 = *(v21 - 2);
            *(v21 - 2) = v15 - 1;
            v13 = v15;
          }
          if ( v13 <= 0 )
            std::string::_Rep::_M_destroy(v12, &v18);
        }
      }
    }
  }
}


// CEconItem::SetTradableAfterDateTime  (line 971, @0x0000000002e46610, libserver.so)  // inlines: CSchemaFieldHandle, Get, GetTypedRef, RTime32TimeCur, operator const CEconItemAttributeDefinition*, operator!
// calls: GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, CEconItem::SetDynamicMaxTimeAttributeValue, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "tradable after date"
// globals: `guard variable for'CEconItem::SetTradableAfterDateTime(uint)::pAttrib_TradableAfter, CEconItem::SetTradableAfterDateTime(uint)::pAttrib_TradableAfter, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
void __fastcall CEconItem::SetTradableAfterDateTime(CEconItem *const this, RTime32 rtTime)
{
  uint32 v4; // r13d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r14
  CEconItemSchema *v7; // rax
  CEconItemSchema *v8; // rax
  const CEconItemAttributeDefinition *v9; // rsi
  uint32 v10; // r13d
  const char *v11; // r14
  CEconItemSchema *v12; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  CEconItemSchema *v14; // rax
  uint32 m_unResetCount; // eax

  if ( rtTime >= CRTime::sm_nTimeCur )
  {
    if ( `guard variable for'CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter == 0
      && __cxa_guard_acquire(&`guard variable for'CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter) != 0 )
    {
      CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_szName = "tradable after date";
      v14 = GEconItemSchema();
      CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                          v14,
                                                                                          "tradable after date");
      m_unResetCount = GEconItemSchema()->m_unResetCount;
      CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_bDestructName = 0;
      CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_unSchemaGeneration = m_unResetCount;
      __cxa_guard_release(&`guard variable for'CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter);
      __cxa_atexit(
        CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
        &CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter,
        &_dso_handle);
    }
    if ( CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_szName != 0 )
    {
      v4 = GEconItemSchema()->m_unResetCount;
      m_pRef = CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_pRef;
      if ( v4 != CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_unSchemaGeneration )
      {
        m_szName = CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_szName;
        v7 = GEconItemSchema();
        m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v7, m_szName);
        CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_unSchemaGeneration = v4;
        CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_pRef = m_pRef;
      }
      if ( m_pRef != 0 )
      {
        if ( CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_szName != 0 )
        {
          v8 = GEconItemSchema();
          v9 = CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_pRef;
          v10 = v8->m_unResetCount;
          if ( v10 != CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_unSchemaGeneration )
          {
            v11 = CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_szName;
            v12 = GEconItemSchema();
            AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v12, v11);
            CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_unSchemaGeneration = v10;
            v9 = AttributeDefinitionByName;
            CEconItem::SetTradableAfterDateTime(unsigned int)::pAttrib_TradableAfter.m_pRef = AttributeDefinitionByName;
          }
        }
        else
        {
          v9 = 0;
        }
        CEconItem::SetDynamicMaxTimeAttributeValue(this, v9, rtTime);
      }
    }
  }
}


// CEconItem::RemoveDynamicAttribute  (line 1006, @0x0000000002e3a660, libserver.so)  // inlines: Element, FastRemove, memcpy, operator[]
// calls: CEconItemCustomData::FreeAttributeMemory
// callers: SetCustomNameOrDescAttribute
void __fastcall CEconItem::RemoveDynamicAttribute(CEconItem *const this, const CEconItemAttributeDefinition *pAttrDef)
{
  CEconItemCustomData *m_pCustomData; // rax
  __int64 v5; // rbx
  int v6; // r12d
  attrib_definition_index_t m_unDefinitionIndex; // r15
  CEconItemCustomData *v8; // rax
  int m_Size; // edx
  int v10; // edx
  CEconItem::attribute_t *m_pMemory; // rcx
  CEconItem::attribute_t *v12; // rdx
  CEconItem::attribute_t *v13; // rbx
  attrib_definition_index_t v14; // bx

  if ( pAttrDef != 0 )
  {
    m_pCustomData = this->m_pCustomData;
    if ( m_pCustomData != 0 )
    {
      if ( m_pCustomData->m_vecAttributes.m_Size > 0 )
      {
        v5 = 0;
        v6 = 0;
        while ( 1 )
        {
          m_unDefinitionIndex = m_pCustomData->m_vecAttributes.m_Memory.m_pMemory[v5].m_unDefinitionIndex;
          if ( m_unDefinitionIndex == (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef) )
            break;
          m_pCustomData = this->m_pCustomData;
          ++v6;
          ++v5;
          if ( m_pCustomData->m_vecAttributes.m_Size <= v6 )
            return;
        }
        CEconItemCustomData::FreeAttributeMemory(&this->m_pCustomData->m_vecAttributes.m_Memory.m_pMemory[v5]);
        v8 = this->m_pCustomData;
        m_Size = v8->m_vecAttributes.m_Size;
        if ( m_Size > 0 )
        {
          v10 = m_Size - 1;
          if ( v6 != v10 )
          {
            m_pMemory = v8->m_vecAttributes.m_Memory.m_pMemory;
            v12 = &m_pMemory[v10];
            v13 = &m_pMemory[v5];
            *&v13->m_unDefinitionIndex = *&v12->m_unDefinitionIndex;
            v13->m_value.asUint64 = v12->m_value.asUint64;
            v10 = v8->m_vecAttributes.m_Size - 1;
          }
          v8->m_vecAttributes.m_Size = v10;
        }
      }
    }
    else if ( (*&this->m_dirtyBits & 4) != 0 )
    {
      v14 = this->m_CustomAttribSingleton.m_unDefinitionIndex;
      if ( v14 == (*pAttrDef->_vptr_IEconItemAttributeDefinition)(pAttrDef) )
      {
        CEconItemCustomData::FreeAttributeMemory(&this->m_CustomAttribSingleton);
        *&this->m_dirtyBits &= ~4u;
      }
    }
  }
}


// CEconItemCustomData::FreeAttributeMemory  (line 1038, @0x0000000002e3a620, libserver.so)
// calls: GetItemSchema, CEconItemSchema::GetAttributeDefinition
// callers: CEconItem::RemoveDynamicAttribute, CEconItemCustomData::~CEconItemCustomData, CEconItem::~CEconItem, CEconItem::operator=
void __fastcall CEconItemCustomData::FreeAttributeMemory(CEconItem::attribute_t *pAttrib)
{
  int m_unDefinitionIndex; // r12d
  GameItemSchema_t *ItemSchema; // rax
  const CEconItemAttributeDefinition *AttributeDefinition; // rax

  m_unDefinitionIndex = pAttrib->m_unDefinitionIndex;
  ItemSchema = GetItemSchema();
  AttributeDefinition = CEconItemSchema::GetAttributeDefinition(ItemSchema, m_unDefinitionIndex);
  (*(AttributeDefinition->m_pAttrType->_vptr_ISchemaAttributeType + 9))(
    AttributeDefinition->m_pAttrType,
    &pAttrib->m_value);
}


// CEconItem::Compact  (line 1054, @0x0000000002e3a8d0, libserver.so)  // inlines: Compact, Purge
// calls: CUtlMemory<CEconItem::attribute_t, int>::Purge, CUtlMemory<CEconItem::EquippedInstance_t, int>::Purge
void __fastcall CEconItem::Compact(CEconItem *const this)
{
  CEconItemCustomData *m_pCustomData; // rbx
  __int64 m_Size; // rdx
  int m_nAllocationCount; // eax
  __int64 v5; // rdx
  int v6; // eax
  CEconItem::EquippedInstance_t *v7; // rsi
  CEconItem::attribute_t *m_pMemory; // rsi

  m_pCustomData = this->m_pCustomData;
  if ( m_pCustomData != 0 )
  {
    m_Size = m_pCustomData->m_vecAttributes.m_Size;
    m_nAllocationCount = m_pCustomData->m_vecAttributes.m_Memory.m_nAllocationCount;
    if ( m_Size <= m_nAllocationCount )
    {
      if ( m_Size != 0 )
      {
        if ( (m_pCustomData->m_vecAttributes.m_Memory.m_nGrowSize & 0xC0000000) == 0 && m_Size != m_nAllocationCount )
        {
          m_pMemory = m_pCustomData->m_vecAttributes.m_Memory.m_pMemory;
          if ( m_pMemory != 0 )
          {
            m_pCustomData->m_vecAttributes.m_Memory.m_nAllocationCount = m_Size;
            m_pCustomData->m_vecAttributes.m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(
                                                                  g_pMemAlloc,
                                                                  m_pMemory,
                                                                  16 * m_Size);
            m_pCustomData = this->m_pCustomData;
          }
        }
      }
      else if ( (m_pCustomData->m_vecAttributes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEconItem::attribute_t,int>::Purge(&m_pCustomData->m_vecAttributes.m_Memory);
        m_pCustomData = this->m_pCustomData;
      }
    }
    v5 = m_pCustomData->m_vecEquipped.m_Size;
    v6 = m_pCustomData->m_vecEquipped.m_Memory.m_nAllocationCount;
    if ( v5 <= v6 )
    {
      if ( v5 != 0 )
      {
        if ( (m_pCustomData->m_vecEquipped.m_Memory.m_nGrowSize & 0xC0000000) == 0 && v5 != v6 )
        {
          v7 = m_pCustomData->m_vecEquipped.m_Memory.m_pMemory;
          if ( v7 != 0 )
          {
            m_pCustomData->m_vecEquipped.m_Memory.m_nAllocationCount = v5;
            m_pCustomData->m_vecEquipped.m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v7, 4 * v5);
          }
        }
      }
      else if ( (m_pCustomData->m_vecEquipped.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEconItem::EquippedInstance_t,int>::Purge(&m_pCustomData->m_vecEquipped.m_Memory);
      }
    }
  }
}


// CEconItem::GetInteriorItem  (line 1354, @0x0000000002e3a9d0, libserver.so)
CEconItem *__fastcall CEconItem::GetInteriorItem(CEconItem *const this)
{
  CEconItemCustomData *m_pCustomData; // rax

  m_pCustomData = this->m_pCustomData;
  if ( m_pCustomData != 0 )
    return m_pCustomData->m_pInteriorItem;
  else
    return 0;
}


// CEconItem::BParseFromMessage  (line 1421, @0x0000000002e46e00, libserver.so)
// calls: CSOEconItem::CSOEconItem, google::protobuf::MessageLite::ParseFromArray(void const*,int), CEconItem::DeserializeFromProtoBufItem, CSOEconItem::~CSOEconItem, _Unwind_Resume
bool __fastcall CEconItem::BParseFromMessage(CEconItem *const this, const CUtlBuffer *const buffer)
{
  char v4; // r12
  _BYTE v6[176]; // [rsp+0h] [rbp-B0h] BYREF

  CSOEconItem::CSOEconItem(v6);
  v4 = google::protobuf::MessageLite::ParseFromArray(v6, buffer->m_Memory.m_pMemory, buffer->m_nMaxPut);
  if ( v4 != 0 )
    CEconItem::DeserializeFromProtoBufItem(this, v6);
  CSOEconItem::~CSOEconItem(v6);
  return v4;
}


// CEconItem::BUpdateFromNetwork  (line 1435, @0x0000000002e469b0, libserver.so)
// calls: CEconItem::operator=
bool __fastcall CEconItem::BUpdateFromNetwork(CEconItem *const this, const GCSDK::CSharedObject *const objUpdate)
{
  CEconItem::operator=(this, objUpdate);
  return 1;
}


// CEconItem::BAddToMessage  (line 1449, @0x0000000002e4e320, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: CSOEconItem::Clear, CEconItem::SerializeToProtoBufItem, google::protobuf::MessageLite::SerializeToString(std::string *), ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CVProfile::ExitScope, _Unwind_Resume, std::terminate(void)
// strings: "CEconItem::BAddToMessage::std::string", "Steam"
// globals: g_msgEconItem
bool __fastcall CEconItem::BAddToMessage(const CEconItem *const this, std::string *pBuffer)
{
  int m_enabled; // eax
  bool v5; // r12
  __int64 v6; // rdi
  char v7; // r13
  unsigned __int64 v9; // r12
  ThreadId_t v10; // r14
  uint64 v11; // rcx
  unsigned __int64 v12; // r15
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v16; // rax
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-38h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v5 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v12 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CEconItem::BAddToMessage::std::string" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CEconItem::BAddToMessage::std::string",
                       0,
                       "Steam",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v16 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v16->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v12 + __rdtsc();
  }
  CSOEconItem::Clear(&g_msgEconItem);
  CEconItem::SerializeToProtoBufItem(this, &g_msgEconItem);
  v7 = google::protobuf::MessageLite::SerializeToString(&g_msgEconItem, pBuffer);
  if ( v5 )
  {
    v9 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v10 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v10 == ThreadGetCurrentId(v6) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v11 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v11 - v9 + __rdtsc();
  }
  return v7;
}


// CEconItem::BAddDestroyToMessage  (line 1464, @0x0000000002e30ff0, libserver.so)  // inlines: set_has_id, set_id
// calls: CSOEconItem::CSOEconItem, google::protobuf::MessageLite::SerializeToString(std::string *), CSOEconItem::~CSOEconItem, _Unwind_Resume
bool __fastcall CEconItem::BAddDestroyToMessage(const CEconItem *const this, std::string *pBuffer)
{
  char v5; // [rsp+Ch] [rbp-B4h]
  _BYTE v6[16]; // [rsp+10h] [rbp-B0h] BYREF
  int v7; // [rsp+20h] [rbp-A0h]
  __int64 v8; // [rsp+28h] [rbp-98h]

  CSOEconItem::CSOEconItem(v6);
  v8 = (*(this->_vptr_CSharedObject + 12))(this);
  v7 |= 1u;
  v5 = google::protobuf::MessageLite::SerializeToString(v6, pBuffer);
  CSOEconItem::~CSOEconItem(v6);
  return v5;
}


// CEconItem::BIsKeyLess  (line 1478, @0x0000000002e30980, libserver.so)  // inlines: operator<
bool __fastcall CEconItem::BIsKeyLess(const CEconItem *const this, const GCSDK::CSharedObject *const soRHS)
{
  return this->m_ulID.m_Data < soRHS[2]._vptr_CSharedObject;
}


// CEconItem::Copy  (line 1490, @0x0000000002e469c0, libserver.so)
// calls: CEconItem::operator=
void __fastcall CEconItem::Copy(CEconItem *const this, const GCSDK::CSharedObject *const soRHS)
{
  CEconItem::operator=(this, soRHS);
}


// CEconItem::Dump  (line 1498, @0x0000000002e3ad70, libserver.so)
// calls: CSOEconItem::CSOEconItem, CEconItem::SerializeToProtoBufItem, GCSDK::CProtoBufSharedObjectBase::Dump, CSOEconItem::~CSOEconItem, _Unwind_Resume
void __fastcall CEconItem::Dump(const CEconItem *const this)
{
  _BYTE v2[160]; // [rsp+0h] [rbp-A0h] BYREF

  CSOEconItem::CSOEconItem(v2);
  CEconItem::SerializeToProtoBufItem(this, v2);
  GCSDK::CProtoBufSharedObjectBase::Dump(v2);
  CSOEconItem::~CSOEconItem(v2);
}


// CEconItem::SerializeToProtoBufItem  (line 1751, @0x0000000002e3a9f0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CSOEconItemAttribute>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CSOEconItemEquipped>::TypeHandler>, GetInteriorItem, GetOriginalID, GetRaw, New, add_attribute, add_equipped_state, mutable_interior_item, mutable_value_bytes, operator!=, set_account_id, set_def_index, set_flags, set_has_account_id, set_has_def_index, set_has_flags, set_has_id, set_has_in_use, set_has_interior_item, set_has_inventory, set_has_level, set_has_new_class, set_has_new_slot, set_has_origin, set_has_original_id, set_has_quality, set_has_quantity, set_has_style, set_has_value_bytes, set_id, set_in_use, set_inventory, set_level, set_new_class, set_new_slot, set_origin, set_original_id, set_quality, set_quantity, set_style
// calls: CEconItem::GetCustomAttributeList, operator new, CSOEconItemAttribute::CSOEconItemAttribute, GetItemSchema, CEconItemSchema::GetAttributeDefinition, CEconItem::GetEquippedInstanceList, CSOEconItemEquipped::CSOEconItemEquipped, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), CSOEconItem::CSOEconItem, operator delete, _Unwind_Resume
// callers: AddEconItemToStringTable, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer, CEconItem::Dump, CEconItem::BAddToMessage
// globals: INVALID_STYLE_INDEX
void __fastcall CEconItem::SerializeToProtoBufItem(const CEconItem *const this, CSOEconItem *const msgItem)
{
  int v4; // edx
  int m_Data; // eax
  uint32 m_unInventory; // eax
  uint32 m_unAccountID; // ecx
  int v8; // eax
  uint64 v9; // rcx
  int m_unLevel; // edx
  int m_unQuantity; // edx
  int m_unFlags; // edx
  int m_unOrigin; // edx
  int v14; // edx
  int m_nQuality; // edx
  uint32 CustomAttributeList; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  CSOEconItemAttribute *v20; // rax
  int v21; // esi
  void (__fastcall *v22)(const ISchemaAttributeType *, attribute_data_union_t *, _QWORD); // rcx
  const CEconItem::attribute_t *v23; // r13
  int v24; // r14d
  GameItemSchema_t *ItemSchema; // rax
  const CEconItemAttributeDefinition *AttributeDefinition; // rax
  const ISchemaAttributeType *m_pAttrType; // r14
  int v28; // esi
  __int64 v29; // rax
  __int64 v30; // rdx
  uint32 EquippedInstanceList; // eax
  char *v32; // r12
  CSOEconItemEquipped *v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // ecx
  int v37; // edx
  __int64 v38; // rax
  int v39; // esi
  char *v40; // r13
  __int64 v41; // rdx
  CEconItemCustomData *m_pCustomData; // rax
  const CEconItem *m_pInteriorItem; // r12
  CSOEconItem *v44; // rsi
  CSOEconItem *v45; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v46; // [rsp+10h] [rbp-50h]
  CSOEconItemAttribute *pMema; // [rsp+18h] [rbp-48h]
  char *pMem; // [rsp+18h] [rbp-48h]
  const CEconItem::attribute_t *pList; // [rsp+28h] [rbp-38h] BYREF

  v4 = *(msgItem + 4);
  *(msgItem + 3) = this->m_ulID.m_Data;
  *(msgItem + 4) = v4 | 1;
  m_Data = this->m_unDefIndex.m_Data;
  *(msgItem + 4) = v4 | 9;
  *(msgItem + 10) = m_Data;
  m_unInventory = this->m_unInventory;
  *(msgItem + 4) = v4 | 0xD;
  *(msgItem + 9) = m_unInventory;
  m_unAccountID = this->m_unAccountID;
  v8 = v4 | 0xF;
  *(msgItem + 4) = v4 | 0xF;
  *(msgItem + 8) = m_unAccountID;
  v9 = this->m_ulOriginalID.m_Data;
  if ( v9 != 0 && v9 != this->m_ulID.m_Data )
  {
    *(msgItem + 13) = v9;
    v8 = v4 | 0x200F;
    *(msgItem + 4) = v4 | 0x200F;
  }
  m_unLevel = this->m_unLevel;
  if ( m_unLevel > 1u )
  {
    v8 |= 0x20u;
    *(msgItem + 12) = m_unLevel;
    *(msgItem + 4) = v8;
  }
  m_unQuantity = this->m_unQuantity;
  if ( m_unQuantity > 1u )
  {
    v8 |= 0x10u;
    *(msgItem + 11) = m_unQuantity;
    *(msgItem + 4) = v8;
  }
  m_unFlags = this->m_unFlags;
  if ( m_unFlags != 0 )
  {
    LOBYTE(v8) = v8 | 0x80;
    *(msgItem + 14) = m_unFlags;
    *(msgItem + 4) = v8;
  }
  m_unOrigin = this->m_unOrigin;
  if ( m_unOrigin != 0 )
  {
    BYTE1(v8) |= 1u;
    *(msgItem + 15) = m_unOrigin;
    *(msgItem + 4) = v8;
  }
  v14 = this->m_unStyle.m_Data;
  if ( INVALID_STYLE_INDEX.m_Data != v14 )
  {
    BYTE1(v8) |= 0x10u;
    *(msgItem + 25) = v14;
    *(msgItem + 4) = v8;
  }
  if ( (*&this->m_dirtyBits & 1) != 0 )
  {
    BYTE1(v8) |= 8u;
    *(msgItem + 96) = 1;
    *(msgItem + 4) = v8;
  }
  m_nQuality = this->m_nQuality;
  *(msgItem + 4) = v8 | 0x40;
  *(msgItem + 13) = m_nQuality;
  CustomAttributeList = CEconItem::GetCustomAttributeList(this, &pList);
  if ( CustomAttributeList != 0 )
  {
    v17 = 0;
    v46 = (16 * (CustomAttributeList - 1 + 1LL));
    do
    {
      v23 = (v17 + pList);
      v24 = *(&v17->elements_ + pList);
      ItemSchema = GetItemSchema();
      AttributeDefinition = CEconItemSchema::GetAttributeDefinition(ItemSchema, v24);
      if ( AttributeDefinition != 0 )
      {
        m_pAttrType = AttributeDefinition->m_pAttrType;
        v28 = *(msgItem + 19);
        v29 = *(msgItem + 18);
        if ( v29 >= v28 )
        {
          if ( v28 == *(msgItem + 20) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve((msgItem + 64), v28 + 1);
          pMema = operator new(0x28u);
          CSOEconItemAttribute::CSOEconItemAttribute(pMema);
          v18 = *(msgItem + 18);
          v19 = *(msgItem + 8);
          ++*(msgItem + 19);
          *(msgItem + 18) = v18 + 1;
          *(v19 + 8 * v18) = pMema;
          v20 = pMema;
        }
        else
        {
          v30 = *(msgItem + 8);
          *(msgItem + 18) = v29 + 1;
          v20 = *(v30 + 8 * v29);
        }
        v21 = *(v20 + 4);
        *(v20 + 6) = v23->m_unDefinitionIndex;
        *(v20 + 4) = v21 | 1;
        v22 = *(m_pAttrType->_vptr_ISchemaAttributeType + 4);
        *(v20 + 4) = v21 | 5;
        v22(m_pAttrType, &v23->m_value, *(v20 + 4));
      }
      v17 = (v17 + 16);
    }
    while ( v17 != v46 );
  }
  EquippedInstanceList = CEconItem::GetEquippedInstanceList(this, &pList);
  if ( EquippedInstanceList != 0 )
  {
    v32 = 0;
    pMem = (4LL * (EquippedInstanceList - 1) + 4);
    do
    {
      v38 = *(msgItem + 30);
      v39 = *(msgItem + 31);
      v40 = &v32[pList];
      if ( v38 >= v39 )
      {
        if ( v39 == *(msgItem + 32) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((msgItem + 112), v39 + 1);
        v33 = operator new(0x20u);
        CSOEconItemEquipped::CSOEconItemEquipped(v33);
        v34 = *(msgItem + 30);
        v35 = *(msgItem + 14);
        ++*(msgItem + 31);
        *(msgItem + 30) = v34 + 1;
        *(v35 + 8 * v34) = v33;
      }
      else
      {
        v41 = *(msgItem + 14);
        *(msgItem + 30) = v38 + 1;
        v33 = *(v41 + 8 * v38);
      }
      v32 += 4;
      v36 = *(v33 + 4);
      *(v33 + 6) = *v40;
      *(v33 + 4) = v36 | 1;
      v37 = *(v40 + 1);
      *(v33 + 4) = v36 | 3;
      *(v33 + 7) = v37;
    }
    while ( v32 != pMem );
  }
  m_pCustomData = this->m_pCustomData;
  if ( m_pCustomData != 0 )
  {
    m_pInteriorItem = m_pCustomData->m_pInteriorItem;
    if ( m_pCustomData->m_pInteriorItem != 0 )
    {
      v44 = *(msgItem + 11);
      *(msgItem + 4) |= 0x400u;
      if ( v44 == 0 )
      {
        v45 = operator new(0x88u);
        CSOEconItem::CSOEconItem(v45);
        *(msgItem + 11) = v45;
        v44 = v45;
      }
      CEconItem::SerializeToProtoBufItem(m_pInteriorItem, v44);
    }
  }
}


// CEconItem::DeserializeFromProtoBufItem  (line 1833, @0x0000000002e46a90, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, Get, Get<google::protobuf::RepeatedPtrField<CSOEconItemAttribute>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CSOEconItemEquipped>::TypeHandler>, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, SetOriginalID, SetQuantity, attribute, equipped_state, interior_item, ~CMicroProfilerGuard, ~CVProfScope
// calls: CEconItemCustomData::~CEconItemCustomData, operator delete, GetItemSchema, CEconItemSchema::GetAttributeDefinition, CEconItem::EnsureCustomDataExists, operator new, CEconItem::CEconItem, CEconItem::Unequip, CEconItem::Equip, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int) (14 total)
// callers: CEconItem::BParseFromMessage
// strings: "CEconItem::DeserializeFromProtoBufItem()", "Steam"
// globals: INVALID_STYLE_INDEX
void __fastcall CEconItem::DeserializeFromProtoBufItem(CEconItem *const this, const CSOEconItem *const msgItem)
{
  int m_enabled; // eax
  CEconItemCustomData *m_pCustomData; // rbx
  uint64 v6; // rax
  uint64 v7; // rdx
  uint8 v8; // al
  uint16 v9; // ax
  __int64 v10; // rbx
  __int64 v11; // r13
  int v12; // eax
  int v13; // r15d
  GameItemSchema_t *ItemSchema; // rax
  const CEconItemAttributeDefinition *AttributeDefinition; // rax
  CEconItem *v16; // rbx
  const CSOEconItem *v17; // rsi
  __int64 i; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  ThreadId_t m_TargetThreadId; // r13
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v24; // rax
  bool VProf_1835; // [rsp+Fh] [rbp-31h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_1835 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v20 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CEconItem::DeserializeFromProtoBufItem()" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CEconItem::DeserializeFromProtoBufItem()",
                       0,
                       "Steam",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v24 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v24->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v20 + __rdtsc();
  }
  m_pCustomData = this->m_pCustomData;
  if ( m_pCustomData != 0 )
  {
    CEconItemCustomData::~CEconItemCustomData(this->m_pCustomData);
    operator delete(m_pCustomData);
    this->m_pCustomData = 0;
  }
  *&this->m_dirtyBits &= 0xF9u;
  v6 = *(msgItem + 3);
  this->m_ulID.m_Data = v6;
  if ( (*(msgItem + 17) & 0x20) != 0 )
  {
    v7 = *(msgItem + 13);
    if ( v6 != v7 )
      this->m_ulOriginalID.m_Data = v7;
  }
  this->m_unAccountID = *(msgItem + 8);
  this->m_unDefIndex.m_Data = *(msgItem + 20);
  this->m_nQuality = *(msgItem + 13);
  this->m_unInventory = *(msgItem + 9);
  this->m_unFlags = *(msgItem + 14);
  this->m_unOrigin = *(msgItem + 15);
  if ( (*(msgItem + 17) & 0x10) != 0 )
    this->m_unStyle.m_Data = *(msgItem + 100);
  else
    this->m_unStyle = INVALID_STYLE_INDEX;
  v8 = 1;
  if ( *(msgItem + 12) != 0 )
    v8 = *(msgItem + 12);
  this->m_unLevel = v8;
  v9 = 1;
  if ( *(msgItem + 11) != 0 )
    v9 = *(msgItem + 11);
  v10 = 0;
  this->m_unQuantity = v9;
  for ( this->m_dirtyBits = (*(msgItem + 96) & 1 | *&this->m_dirtyBits & 0xFE); *(msgItem + 18) > v10; ++v10 )
  {
    v11 = *(*(msgItem + 8) + 8 * v10);
    v12 = *(v11 + 16);
    if ( (v12 & 2) == 0 && (v12 & 4) != 0 )
    {
      v13 = *(v11 + 24);
      ItemSchema = GetItemSchema();
      AttributeDefinition = CEconItemSchema::GetAttributeDefinition(ItemSchema, v13);
      if ( AttributeDefinition != 0 )
        (*(AttributeDefinition->m_pAttrType->_vptr_ISchemaAttributeType + 7))(
          AttributeDefinition->m_pAttrType,
          this,
          AttributeDefinition,
          *(v11 + 32));
    }
  }
  if ( (*(msgItem + 17) & 4) != 0 )
  {
    CEconItem::EnsureCustomDataExists(this);
    v16 = operator new(0x50u);
    CEconItem::CEconItem(v16);
    this->m_pCustomData->m_pInteriorItem = v16;
    v17 = *(msgItem + 11);
    if ( v17 == 0 )
      v17 = *&CSOEconItem::default_instance_->enum_type_count_;
    CEconItem::DeserializeFromProtoBufItem(this->m_pCustomData->m_pInteriorItem, v17);
  }
  CEconItem::Unequip(this);
  for ( i = 0; i < *(msgItem + 30); ++i )
  {
    v19 = *(*(msgItem + 14) + 8 * i);
    CEconItem::Equip(this, *(v19 + 24), *(v19 + 28));
  }
  if ( VProf_1835 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CEconItem::GetAssetInfo  (line 1941, @0x0000000002e3add0, libserver.so)
CEconItemAssetInfo *__fastcall CEconItem::GetAssetInfo(const CEconItem *const this)
{
  return *((*(this->_vptr_CSharedObject + 10))(this) + 176);
}


// CEconItem::EnsureCustomDataExists  (line 1949, @0x0000000002e46210, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEconItem::EquippedInstance_t>, CopyConstruct<CEconItem::attribute_t>, Element, GrowMemory, operator[]
// calls: operator new, CUtlMemory<CEconItem::attribute_t, int>::Grow, CUtlMemory<CEconItem::EquippedInstance_t, int>::Grow
// callers: CEconItem::AddDynamicAttributeInternal, CEconItem::operator=, CEconItem::Equip, CEconItem::DeserializeFromProtoBufItem
void __fastcall CEconItem::EnsureCustomDataExists(CEconItem *const this)
{
  CEconItemCustomData *v2; // rax
  CEconItem::dirty_bits_t m_dirtyBits; // dl
  CEconItemCustomData *m_pCustomData; // r12
  int v5; // r13d
  int v6; // eax
  CEconItem::attribute_t *v7; // rcx
  attribute_data_union_t m_value; // rdx
  __int64 m_Size; // r12
  int v10; // edx
  CEconItem::EquippedInstance_t *v11; // rax
  CEconItem::dirty_bits_t v12; // dl
  CEconItemCustomData *v13; // [rsp+8h] [rbp-28h]

  if ( this->m_pCustomData == 0 )
  {
    v2 = operator new(0x38u);
    v2->m_pInteriorItem = 0;
    v2->m_vecAttributes.m_Size = 0;
    v2->m_vecAttributes.m_Memory.m_pMemory = 0;
    v2->m_vecAttributes.m_Memory.m_nAllocationCount = 0;
    v2->m_vecAttributes.m_Memory.m_nGrowSize = 1;
    v2->m_vecEquipped.m_Size = 0;
    v2->m_vecEquipped.m_Memory.m_pMemory = 0;
    v2->m_vecEquipped.m_Memory.m_nAllocationCount = 0;
    v2->m_vecEquipped.m_Memory.m_nGrowSize = 1;
    m_dirtyBits = this->m_dirtyBits;
    this->m_pCustomData = v2;
    if ( (*&m_dirtyBits & 2) != 0 )
    {
      m_Size = v2->m_vecEquipped.m_Size;
      v10 = v2->m_vecEquipped.m_Size;
      if ( m_Size == v2->m_vecEquipped.m_Memory.m_nAllocationCount )
      {
        v13 = v2;
        CUtlMemory<CEconItem::EquippedInstance_t,int>::Grow(&v2->m_vecEquipped.m_Memory, 1);
        v2 = v13;
        v10 = v13->m_vecEquipped.m_Size;
      }
      v2->m_vecEquipped.m_Size = v10 + 1;
      v11 = &v2->m_vecEquipped.m_Memory.m_pMemory[m_Size];
      if ( v11 != 0 )
        *v11 = this->m_EquipInstanceSingleton;
      v12 = this->m_dirtyBits;
      this->m_EquipInstanceSingleton.m_unEquippedClass = 0;
      this->m_EquipInstanceSingleton.m_unEquippedSlot = -1;
      m_dirtyBits = (*&v12 & 0xFD);
      this->m_dirtyBits = m_dirtyBits;
    }
    if ( (*&m_dirtyBits & 4) != 0 )
    {
      m_pCustomData = this->m_pCustomData;
      v5 = m_pCustomData->m_vecAttributes.m_Size;
      v6 = v5;
      if ( v5 == m_pCustomData->m_vecAttributes.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEconItem::attribute_t,int>::Grow(&m_pCustomData->m_vecAttributes.m_Memory, 1);
        v6 = m_pCustomData->m_vecAttributes.m_Size;
      }
      m_pCustomData->m_vecAttributes.m_Size = v6 + 1;
      v7 = &m_pCustomData->m_vecAttributes.m_Memory.m_pMemory[v5];
      if ( v7 != 0 )
      {
        m_value = this->m_CustomAttribSingleton.m_value;
        *&v7->m_unDefinitionIndex = *&this->m_CustomAttribSingleton.m_unDefinitionIndex;
        v7->m_value = m_value;
      }
      *&this->m_dirtyBits &= ~4u;
    }
  }
}


// CEconItem::IsStyleUnlocked  (line 1972, @0x0000000002e33fa0, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, Element, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, Get, GetAssetInfo, GetStyle, GetTypedRef, GetWithNull, IsLockable, IsValidIndex, operator const CEconItemAttributeDefinition*, operator[]
// calls: GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "unlocked styles"
// globals: INVALID_ITEM_DEF_INDEX, `guard variable for'CEconItem::IsStyleUnlocked(style_index_t)::pAttr_UnlockedStyles, CEconItem::IsStyleUnlocked(style_index_t)::pAttr_UnlockedStyles, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall CEconItem::IsStyleUnlocked(const CEconItem *const this, style_index_t iStyle)
{
  __int64 v4; // rax
  __int64 v5; // rax
  uint32 v6; // r13d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r14
  CEconItemSchema *v9; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  CEconItemSchema *v12; // rax
  uint32 m_unResetCount; // eax
  uint32 nUnlockedStyles; // [rsp+Ch] [rbp-44h] BYREF
  _QWORD v15[3]; // [rsp+10h] [rbp-40h] BYREF
  char v16; // [rsp+28h] [rbp-28h]

  v4 = *(*((*(this->_vptr_CSharedObject + 10))(this) + 176) + 64LL);
  if ( v4 != 0 && iStyle.m_Data < *v4 )
  {
    v5 = *(*(v4 + 8) + 8LL * iStyle.m_Data);
    if ( v5 != 0 && *(v5 + 48) == INVALID_ITEM_DEF_INDEX.m_Data && *(v5 + 64) == 0 && *(v5 + 80) == 0 )
      return 1;
  }
  if ( `guard variable for'CEconItem::IsStyleUnlocked(style_index_t)::pAttr_UnlockedStyles == 0
    && __cxa_guard_acquire(&`guard variable for'CEconItem::IsStyleUnlocked(style_index_t)::pAttr_UnlockedStyles) != 0 )
  {
    CEconItem::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_szName = "unlocked styles";
    v12 = GEconItemSchema();
    CEconItem::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                    v12,
                                                                                    "unlocked styles");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    CEconItem::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_bDestructName = 0;
    CEconItem::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CEconItem::IsStyleUnlocked(style_index_t)::pAttr_UnlockedStyles);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconItem::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles,
      &_dso_handle);
  }
  if ( CEconItem::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_szName == 0 )
    return 0;
  v6 = GEconItemSchema()->m_unResetCount;
  m_pRef = CEconItem::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_pRef;
  if ( v6 != CEconItem::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_unSchemaGeneration )
  {
    m_szName = CEconItem::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_szName;
    v9 = GEconItemSchema();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v9, m_szName);
    CEconItem::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_unSchemaGeneration = v6;
    CEconItem::IsStyleUnlocked(style_index_t)const::pAttr_UnlockedStyles.m_pRef = m_pRef;
  }
  if ( m_pRef != 0
    && (v15[1] = m_pRef,
        v15[2] = &nUnlockedStyles,
        vptr_IEconItemInterface = this->_vptr_IEconItemInterface,
        v15[0] = &wrapper,
        v16 = 0,
        vptr_IEconItemInterface[28](&this->IEconItemInterface, v15),
        v16 != 0)
    && ((1 << iStyle.m_Data) & nUnlockedStyles) != 0 )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}


