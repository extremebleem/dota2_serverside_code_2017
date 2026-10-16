
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRecipeComponentMatchingIterator::CRecipeComponentMatchingIterator  (line 18, @0x0000000002e38de0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CEconTool_ItemDynamicRecipe::CanApplyTo
void __fastcall CRecipeComponentMatchingIterator::CRecipeComponentMatchingIterator(
        CRecipeComponentMatchingIterator *const this,
        const IEconItemInterface *pSourceItem,
        const IEconItemInterface *pTargetItem)
{
  this->_vptr_IEconItemAttributeIterator = off_47A2770;  // vptr: CRecipeComponentMatchingIterator
  this->m_pSourceItem = pSourceItem;
  this->m_pTargetItem = pTargetItem;
  this->m_bIgnoreCompleted = 1;
  this->m_vecMatchingInputs.m_Size = 0;
  this->m_vecMatchingInputs.m_Memory.m_pMemory = 0;
  this->m_vecMatchingInputs.m_Memory.m_nAllocationCount = 0;
  this->m_vecMatchingInputs.m_Memory.m_nGrowSize = 0;
  this->m_vecMatchingOutputs.m_Size = 0;
  this->m_vecMatchingOutputs.m_Memory.m_pMemory = 0;
  this->m_vecMatchingOutputs.m_Memory.m_nAllocationCount = 0;
  this->m_vecMatchingOutputs.m_Memory.m_nGrowSize = 0;
  this->m_nInputsTotal = 0;
  this->m_nInputsFulfilled = 0;
  this->m_nOutputsTotal = 0;
}


// CRecipeComponentMatchingIterator::OnIterateAttributeValue  (line 28, @0x0000000002e45d90, libserver.so)  // inlines: AddToTail, CopyConstruct<const CEconItemAttributeDefinition*>, Element, GrowMemory, operator[]
// calls: DefinedItemAttribMatch, CUtlMemory<const CEconItemAttributeDefinition*, int>::Grow, _Unwind_Resume
bool __fastcall CRecipeComponentMatchingIterator::OnIterateAttributeValue(
        CRecipeComponentMatchingIterator *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_ItemDynamicRecipeComponent *const value)
{
  bool v6; // zf
  const IEconItemInterface *m_pTargetItem; // rdi
  __int64 v8; // r14
  const IEconItemInterface *v10; // rdi
  __int64 v11; // r14
  int v12; // eax
  const CEconItemAttributeDefinition **v13; // rax
  __int64 m_Size; // r14
  int v15; // eax
  const CEconItemAttributeDefinition **v16; // rax

  v6 = this->m_pSourceItem == 0;
  m_pTargetItem = this->m_pTargetItem;
  if ( !v6 && m_pTargetItem != 0 )
  {
    v8 = (*(m_pTargetItem->_vptr_IEconItemInterface + 14))(m_pTargetItem);
    if ( v8 == (*(this->m_pSourceItem->_vptr_IEconItemInterface + 14))(this->m_pSourceItem) )
      return 1;
    m_pTargetItem = this->m_pTargetItem;
  }
  if ( DefinedItemAttribMatch(value, m_pTargetItem) )
  {
    v10 = this->m_pTargetItem;
    if ( v10 != 0 && (*(v10->_vptr_IEconItemInterface + 6))(v10) == 0 )
      return 1;
LABEL_9:
    if ( (*(value + 40) & 1) != 0 )
    {
      m_Size = this->m_vecMatchingOutputs.m_Size;
      v15 = this->m_vecMatchingOutputs.m_Size;
      if ( m_Size == this->m_vecMatchingOutputs.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEconItemAttributeDefinition const*,int>::Grow(&this->m_vecMatchingOutputs.m_Memory, 1);
        v15 = this->m_vecMatchingOutputs.m_Size;
      }
      this->m_vecMatchingOutputs.m_Size = v15 + 1;
      v16 = &this->m_vecMatchingOutputs.m_Memory.m_pMemory[m_Size];
      if ( v16 != 0 )
        *v16 = pAttrDef;
      this->m_nOutputsTotal += *(value + 11);
    }
    else
    {
      v11 = this->m_vecMatchingInputs.m_Size;
      v12 = this->m_vecMatchingInputs.m_Size;
      if ( v11 == this->m_vecMatchingInputs.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEconItemAttributeDefinition const*,int>::Grow(&this->m_vecMatchingInputs.m_Memory, 1);
        v12 = this->m_vecMatchingInputs.m_Size;
      }
      this->m_vecMatchingInputs.m_Size = v12 + 1;
      v13 = &this->m_vecMatchingInputs.m_Memory.m_pMemory[v11];
      if ( v13 != 0 )
        *v13 = pAttrDef;
      this->m_nInputsTotal += *(value + 11);
      this->m_nInputsFulfilled += *(value + 12);
    }
    return 1;
  }
  if ( this->m_pTargetItem == 0 )
    goto LABEL_9;
  return 1;
}


// DefinedItemAttribMatch  (line 59, @0x0000000002e38e50, libserver.so)
// callers: CRecipeComponentMatchingIterator::OnIterateAttributeValue
bool __fastcall DefinedItemAttribMatch(
        const CAttribute_ItemDynamicRecipeComponent *const attribValue,
        const IEconItemInterface *pItem)
{
  unsigned __int16 (__fastcall ***v4)(_QWORD); // rax
  int v5; // edx
  _QWORD *v6; // r13
  int v8; // r14d
  int v9; // r12d
  int v10; // r14d

  if ( pItem == 0 || *(attribValue + 12) == *(attribValue + 11) )
    return 0;
  v4 = (*(pItem->_vptr_IEconItemInterface + 12))(pItem);
  v5 = *(attribValue + 10);
  v6 = v4;
  if ( (v5 & 4) != 0 )
  {
    v8 = *(attribValue + 6);
    if ( v8 != (**v4)(v4) )
      return 0;
    v5 = *(attribValue + 10);
  }
  if ( (v5 & 8) != 0 )
  {
    v10 = *(attribValue + 7);
    if ( v10 != (*(pItem->_vptr_IEconItemInterface + 15))(pItem) )
      return 0;
    v5 = *(attribValue + 10);
  }
  if ( (v5 & 0x10) != 0 )
  {
    v9 = *(attribValue + 13);
    if ( v9 != (*(*v6 + 80LL))(v6) )
      return 0;
    v5 = *(attribValue + 10);
  }
  return ((v5 & 0x40) == 0 || v6[24] == 0) && ((v5 & 0x80) == 0 || (*(*v6 + 128LL))(v6) == 0);
}


// DecodeAttributeStringIntoAttributes  (line 96, @0x0000000002e45ed0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, GrowMemory, Purge, PurgeAndDeleteElements, RemoveAll, _M_data, c_str, operator[], ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), V_atoi, GEconItemSchema, CEconItemSchema::GetAttributeDefinition, CUtlMemory<CEconItem::attribute_t, int>::Grow, CUtlMemory<char*, int>::Purge, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: DecodeItemFromEncodedAttributeString
// globals: g_pszAttrEncodeSeparator
bool __fastcall DecodeAttributeStringIntoAttributes(
        const CAttribute_ItemDynamicRecipeComponent *const attribValue,
        CUtlVector<CEconItem::attribute_t,CUtlMemory<CEconItem::attribute_t,int> > *const vecAttribs)
{
  _QWORD *v3; // rax
  int m_Size; // edx
  __int64 v5; // r15
  CEconItem::attribute_t *v6; // rbx
  const ISchemaAttributeType *m_pAttrType; // r13
  int v8; // eax
  int v9; // ebx
  CEconItemSchema *v10; // rax
  const CEconItemAttributeDefinition *AttributeDefinition; // r12
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // r12
  int v15; // ebx
  char *v16; // rsi
  int j; // [rsp+1Ch] [rbp-54h]
  int jb; // [rsp+1Ch] [rbp-54h]
  char ja; // [rsp+1Ch] [rbp-54h]
  CUtlStringList vecAttributeStrings; // [rsp+20h] [rbp-50h] BYREF

  v3 = *(attribValue + 4);
  vecAttributeStrings.m_Size = 0;
  vecAttributeStrings.m_Memory.m_pMemory = 0;
  vecAttributeStrings.m_Memory.m_nAllocationCount = 0;
  vecAttributeStrings.m_Memory.m_nGrowSize = 0;
  V_SplitString(*v3, g_pszAttrEncodeSeparator, &vecAttributeStrings);
  m_Size = vecAttributeStrings.m_Size;
  if ( (vecAttributeStrings.m_Size & 1) != 0 )
  {
    v8 = 0;
  }
  else
  {
    if ( vecAttributeStrings.m_Size <= 0 )
    {
      LOBYTE(v8) = 1;
      goto LABEL_13;
    }
    v5 = 0;
    j = 0;
    while ( 1 )
    {
      v9 = V_atoi(vecAttributeStrings.m_Memory.m_pMemory[v5]);
      v10 = GEconItemSchema();
      AttributeDefinition = CEconItemSchema::GetAttributeDefinition(v10, v9);
      if ( AttributeDefinition == 0 )
        break;
      v12 = vecAttribs->m_Size;
      v13 = vecAttribs->m_Size;
      if ( v12 == vecAttribs->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEconItem::attribute_t,int>::Grow(&vecAttribs->m_Memory, 1);
        v13 = vecAttribs->m_Size;
      }
      vecAttribs->m_Size = v13 + 1;
      v6 = &vecAttribs->m_Memory.m_pMemory[v12];
      v6->m_unDefinitionIndex = AttributeDefinition->GetDefinitionIndex();
      v6 = (v6 + 8);
      m_pAttrType = AttributeDefinition->m_pAttrType;
      (*(m_pAttrType->_vptr_ISchemaAttributeType + 8))(m_pAttrType, v6);
      v8 = (*(m_pAttrType->_vptr_ISchemaAttributeType + 5))(
             m_pAttrType,
             AttributeDefinition,
             vecAttributeStrings.m_Memory.m_pMemory[v5 + 1],
             v6,
             0);
      if ( v8 == 0 )
      {
        m_Size = vecAttributeStrings.m_Size;
        goto LABEL_10;
      }
      j += 2;
      v5 += 2;
      m_Size = vecAttributeStrings.m_Size;
      if ( vecAttributeStrings.m_Size <= j )
        goto LABEL_10;
    }
    m_Size = vecAttributeStrings.m_Size;
    v8 = 0;
  }
LABEL_10:
  if ( m_Size > 0 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      jb = v8;
      ++v15;
      v16 = vecAttributeStrings.m_Memory.m_pMemory[v14++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v16);
      v8 = jb;
    }
    while ( v15 < vecAttributeStrings.m_Size );
  }
LABEL_13:
  vecAttributeStrings.m_Size = 0;
  if ( (vecAttributeStrings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    ja = v8;
    CUtlMemory<char *,int>::Purge(&vecAttributeStrings.m_Memory);
    LOBYTE(v8) = ja;
    if ( (vecAttributeStrings.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&vecAttributeStrings.m_Memory);
      LOBYTE(v8) = ja;
    }
  }
  return v8;
}


// DecodeItemFromEncodedAttributeString  (line 141, @0x0000000002e460e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, SetFlags, SetQuality, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: DecodeAttributeStringIntoAttributes, GetItemSchema, CEconItemSchema::GetAttributeDefinition, CUtlMemory<CEconItem::attribute_t, int>::Purge, CUtlVectorBase<CEconItem::attribute_t, CUtlMemory<CEconItem::attribute_t, int> >::~CUtlVectorBase, _Unwind_Resume
bool __fastcall DecodeItemFromEncodedAttributeString(
        const CAttribute_ItemDynamicRecipeComponent *const attribValue,
        CEconItem *pItem)
{
  uint16 v3; // ax
  int v4; // eax
  bool v5; // r15
  __int64 v6; // rbx
  int v7; // r13d
  int m_unDefinitionIndex; // r12d
  GameItemSchema_t *ItemSchema; // rax
  const CEconItemAttributeDefinition *AttributeDefinition; // rax
  const ISchemaAttributeType *m_pAttrType; // r12
  CUtlVector<CEconItem::attribute_t,CUtlMemory<CEconItem::attribute_t,int> > vecAttribs; // [rsp+10h] [rbp-50h] BYREF

  vecAttribs.m_Size = 0;
  v3 = *(attribValue + 12);
  vecAttribs.m_Memory.m_pMemory = 0;
  vecAttribs.m_Memory.m_nAllocationCount = 0;
  vecAttribs.m_Memory.m_nGrowSize = 0;
  pItem->m_unDefIndex.m_Data = v3;
  v4 = *(attribValue + 7);
  pItem->m_unFlags = 0;
  pItem->m_nQuality = v4;
  v5 = DecodeAttributeStringIntoAttributes(attribValue, &vecAttribs);
  if ( v5 && vecAttribs.m_Size > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      m_unDefinitionIndex = vecAttribs.m_Memory.m_pMemory[v6].m_unDefinitionIndex;
      ItemSchema = GetItemSchema();
      AttributeDefinition = CEconItemSchema::GetAttributeDefinition(ItemSchema, m_unDefinitionIndex);
      m_pAttrType = AttributeDefinition->m_pAttrType;
      (*(m_pAttrType->_vptr_ISchemaAttributeType + 3))(
        m_pAttrType,
        pItem,
        AttributeDefinition,
        &vecAttribs.m_Memory.m_pMemory[v6].m_value);
      (*(m_pAttrType->_vptr_ISchemaAttributeType + 9))(m_pAttrType, &vecAttribs.m_Memory.m_pMemory[v6].m_value);
      ++v7;
      ++v6;
    }
    while ( vecAttribs.m_Size > v7 );
  }
  vecAttribs.m_Size = 0;
  if ( (vecAttribs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEconItem::attribute_t,int>::Purge(&vecAttribs.m_Memory);
    if ( (vecAttribs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEconItem::attribute_t,int>::Purge(&vecAttribs.m_Memory);
  }
  return v5;
}


// IsItemEligibleForRecipeUsage  (line 169, @0x0000000002e38f40, libserver.so)  // inlines: RTime32TimeCur
bool __fastcall IsItemEligibleForRecipeUsage(const IEconItemInterface *pEconItem)
{
  char v2; // r12

  if ( (*(pEconItem->_vptr_IEconItemInterface + 12))(pEconItem) == 0 )
    return 0;
  if ( (*(pEconItem->_vptr_IEconItemInterface + 9))(pEconItem) == 0 )
    return 0;
  v2 = (*(pEconItem->_vptr_IEconItemInterface + 6))(pEconItem);
  if ( v2 == 0
    || (*(pEconItem->_vptr_IEconItemInterface + 11))(pEconItem) != 0
    && (*(pEconItem->_vptr_IEconItemInterface + 11))(pEconItem) < CRTime::sm_nTimeCur )
  {
    return 0;
  }
  return v2;
}


// DoesItemMatchAttribute  (line 189, @0x0000000002e38fb0, libserver.so)  // inlines: _M_data, _M_rep, empty, size
// calls: GetItemSchema, CEconItemSchema::GetLootListByName, CEconLootListDefinition::ContainsItemDef
// globals: INVALID_ITEM_DEF_INDEX
bool __fastcall DoesItemMatchAttribute(
        const IEconItemInterface *pEconItem,
        const CAttribute_ItemDynamicRecipeComponent *const attr,
        uint32 unFlags)
{
  char v4; // r12
  __int64 (__fastcall ***v6)(_QWORD); // rax
  uint16 m_Data; // r14
  bool result; // al
  __int64 v9; // rax
  _QWORD *v10; // rbx
  const char *v11; // rbx
  GameItemSchema_t *ItemSchema; // rax
  const CEconLootListDefinition *LootListByName; // rax

  v4 = unFlags;
  if ( (*(pEconItem->_vptr_IEconItemInterface + 12))(pEconItem) != 0 )
  {
    v6 = (*(pEconItem->_vptr_IEconItemInterface + 12))(pEconItem);
    m_Data = (**v6)(v6);
  }
  else
  {
    m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  }
  if ( (v4 & 4) != 0 && *(attr + 12) != m_Data )
    return 0;
  if ( (v4 & 8) != 0 && (*(pEconItem->_vptr_IEconItemInterface + 15))(pEconItem) != *(attr + 7) )
    return 0;
  v9 = (*(pEconItem->_vptr_IEconItemInterface + 12))(pEconItem);
  v10 = v9;
  if ( v9 == 0 || (v4 & 0x10) != 0 && (*(*v9 + 80LL))(v9) != *(attr + 13) )
    return 0;
  if ( (v4 & 0x40) != 0 && v10[24] != 0 || v4 < 0 && (*(*v10 + 128LL))(v10) != 0 )
    return 0;
  v11 = **(attr + 7);
  result = 1;
  if ( *(v11 - 3) != 0 )
  {
    ItemSchema = GetItemSchema();
    LootListByName = CEconItemSchema::GetLootListByName(ItemSchema, v11, 0);
    if ( LootListByName != 0 )
      return CEconLootListDefinition::ContainsItemDef(LootListByName, m_Data, 1, 1);
    return 0;
  }
  return result;
}


