
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAItemSystem::SelectItemDefFromCriteria  (line 26, @0x0000000002e44df0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<item_definition_index_t>, Element, GetDefinitionName, GetWithNull, GrowMemory, IsValidIndex, Purge, RemoveAll, String, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEconItemDefinition::HasHeroID, V_stricmp_fast, CUtlMemory<item_definition_index_t, int>::Purge, RandomInt, CEconItemSchema::GetItemDefinition, CUtlMemory<item_definition_index_t, int>::Grow, CUtlVectorBase<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTAInventoryManager::SelectRandomEconItemForHeroAndSlot
// globals: INVALID_ITEM_DEF_INDEX
item_definition_index_t __fastcall CDOTAItemSystem::SelectItemDefFromCriteria(
        CDOTAItemSystem *const this,
        const DOTAItemCriteria_t *const criteria)
{
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t m_nMaxElement; // edi
  __int64 v5; // rbx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v6; // r12d
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v7; // rax
  const CEconItemDefinition *m_elem; // r14
  int m_nSlotType; // eax
  const char *m_pName; // rdi
  __int64 m_Size; // r14
  int v12; // eax
  item_definition_index_t *v13; // rax
  uint16 m_Data; // dx
  item_definition_index_t result; // ax
  item_definition_index_t v16; // bx
  bool v17; // zf
  char m_bIsBaseItem; // [rsp+18h] [rbp-58h]
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *m_pMemory; // [rsp+18h] [rbp-58h]
  uint16 v20; // [rsp+18h] [rbp-58h]
  CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> > vecMatches; // [rsp+20h] [rbp-50h] BYREF

  vecMatches.m_Size = 0;
  m_nMaxElement = this->m_itemSchema.m_mapItems.m_nMaxElement;
  vecMatches.m_Memory.m_pMemory = 0;
  vecMatches.m_Memory.m_nAllocationCount = 0;
  vecMatches.m_Memory.m_nGrowSize = 0;
  if ( m_nMaxElement <= 0 )
    goto LABEL_18;
  v5 = 0;
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = &this->m_itemSchema.m_mapItems.m_memNodes.m_pMemory[v5];
      if ( v7->m_iNextNode >= -1 )
      {
        m_elem = v7->m_elem;
        m_bIsBaseItem = criteria->m_bIsBaseItem;
        if ( m_bIsBaseItem == (*(m_elem->_vptr_IEconItemDefinition + 14))(m_elem)
          && (!criteria->m_bRecentOnly || (*(m_elem->_vptr_IEconItemDefinition + 30))(m_elem) != 0)
          && (criteria->m_nHeroID < 0 || CEconItemDefinition::HasHeroID(m_elem, criteria->m_nHeroID)) )
        {
          m_nSlotType = criteria->m_nSlotType;
          if ( m_nSlotType < 0 || m_nSlotType == LODWORD(m_elem[1].m_pKVItem) )
          {
            m_pName = criteria->m_pName;
            if ( m_pName == 0 || V_stricmp_fast(m_pName, m_elem->m_symDefinitionName.u.m_Id) == 0 )
            {
              m_Size = vecMatches.m_Size;
              m_pMemory = this->m_itemSchema.m_mapItems.m_memNodes.m_pMemory;
              v12 = vecMatches.m_Size;
              if ( vecMatches.m_Size == vecMatches.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<item_definition_index_t,int>::Grow(&vecMatches.m_Memory, 1);
                v12 = vecMatches.m_Size;
              }
              vecMatches.m_Size = v12 + 1;
              v13 = &vecMatches.m_Memory.m_pMemory[m_Size];
              if ( v13 != 0 )
                break;
            }
          }
        }
      }
      ++v6;
      ++v5;
      if ( this->m_itemSchema.m_mapItems.m_nMaxElement <= v6 )
        goto LABEL_17;
    }
    ++v6;
    m_Data = m_pMemory[v5++].m_key.m_Data;
    v13->m_Data = m_Data;
  }
  while ( this->m_itemSchema.m_mapItems.m_nMaxElement > v6 );
LABEL_17:
  if ( vecMatches.m_Size != 0 )
  {
    v16.m_Data = vecMatches.m_Memory.m_pMemory[RandomInt(0, (vecMatches.m_Size - 1))].m_Data;
    v17 = CEconItemSchema::GetItemDefinition(&this->m_itemSchema, v16, 0) == 0;
    result.m_Data = v16.m_Data;
    if ( v17 )
      result.m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  }
  else
  {
LABEL_18:
    result.m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  }
  if ( (vecMatches.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    v20 = result.m_Data;
    CUtlMemory<item_definition_index_t,int>::Purge(&vecMatches.m_Memory);
    result.m_Data = v20;
    if ( (vecMatches.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<item_definition_index_t,int>::Purge(&vecMatches.m_Memory);
      return v20;
    }
  }
  return result;
}


// DOTAItemSystem  (line 72, @0x0000000002e38510, libserver.so)
// calls: ItemSystem
CDOTAItemSystem *__cdecl DOTAItemSystem()
{
  return ItemSystem();
}


// CDOTAItemSystem::RequestReservedItemDefinitionList  (line 117, @0x0000000002e30710, libserver.so)
void __fastcall CDOTAItemSystem::RequestReservedItemDefinitionList(CDOTAItemSystem *const this)
{
  ;
}


// CDOTAItemSystem::ReserveItemDefinition  (line 168, @0x0000000002e30720, libserver.so)
void __fastcall CDOTAItemSystem::ReserveItemDefinition(
        CDOTAItemSystem *const this,
        item_definition_index_t unDefIndex,
        const char *pszUserName)
{
  ;
}


// CDOTAItemSystem::ReleaseItemDefReservation  (line 219, @0x0000000002e30730, libserver.so)
void __fastcall CDOTAItemSystem::ReleaseItemDefReservation(
        CDOTAItemSystem *const this,
        item_definition_index_t nDefIndex,
        const char *pszUserName)
{
  ;
}


// CDOTAItemSystem::ItemTesting_TestItemSet  (line 227, @0x0000000002e30740, libserver.so)
void __fastcall CDOTAItemSystem::ItemTesting_TestItemSet(
        CDOTAItemSystem *const this,
        const char *pItemSetName,
        bool bBringEngineWindowToFront)
{
  ;
}


// CDOTAItemSystem::ItemTesting_TestItems  (line 284, @0x0000000002e30750, libserver.so)
void __fastcall CDOTAItemSystem::ItemTesting_TestItems(
        CDOTAItemSystem *const this,
        KeyValues *pItemKeyValues,
        bool bBringEngineWindowToFront)
{
  ;
}


// CDOTAItemSystem::AddLeagueImageName  (line 660, @0x0000000002e42ff0, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GrowMemory, operator[], ~CUtlString
// calls: CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, _Unwind_Resume
void __fastcall CDOTAItemSystem::AddLeagueImageName(CDOTAItemSystem *const this, const char *league_name)
{
  __int64 m_Size; // r12
  int v4; // eax
  CUtlString *v5; // rbx
  const char *v6; // rax
  CUtlString v7; // [rsp+0h] [rbp-30h] BYREF

  v7.m_pString = 0;
  CUtlString::Set(&v7, league_name);
  m_Size = this->m_vecLeagueImageNames.m_Size;
  v4 = this->m_vecLeagueImageNames.m_Size;
  if ( m_Size == this->m_vecLeagueImageNames.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CUtlString,int>::Grow(&this->m_vecLeagueImageNames.m_Memory, 1);
    v4 = this->m_vecLeagueImageNames.m_Size;
  }
  this->m_vecLeagueImageNames.m_Size = v4 + 1;
  v5 = &this->m_vecLeagueImageNames.m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
  {
    v5->m_pString = 0;
    v6 = CUtlString::Get(&v7);
    CUtlString::Set(v5, v6);
  }
  if ( v7.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v7);
}


// CDOTAItemSystem::FireGameEvent  (line 665, @0x0000000002e30760, libserver.so)
void __fastcall CDOTAItemSystem::FireGameEvent(CDOTAItemSystem *const this, IGameEvent *event)
{
  ;
}


// CDOTAItemSystem::RequestLeagueInfo  (line 693, @0x0000000002e30780, libserver.so)
void __fastcall CDOTAItemSystem::RequestLeagueInfo(CDOTAItemSystem *const this, uint32 nLeagueID)
{
  ;
}


// CDOTAItemSystem::GetInGameEventIds  (line 702, @0x0000000002e30790, libserver.so)
void __fastcall CDOTAItemSystem::GetInGameEventIds(
        const CDOTAItemSystem *const this,
        CUtlVector<IEconItemSystem::InGameEventDesc_t,CUtlMemory<IEconItemSystem::InGameEventDesc_t,int> > *const events)
{
  ;
}


// CDOTAItemSystem::GetDefaultItemForSlot  (line 718, @0x0000000002e37150, libserver.so)
// calls: CDOTAInventoryManager::GetBaseItemForHero
// globals: g_DOTAInventoryManager, INVALID_ITEM_DEF_INDEX
item_definition_index_t __fastcall CDOTAItemSystem::GetDefaultItemForSlot(
        CDOTAItemSystem *const this,
        int nHeroID,
        int nSlotIndex)
{
  CEconItemView *BaseItemForHero; // rax

  BaseItemForHero = CDOTAInventoryManager::GetBaseItemForHero(g_DOTAInventoryManager, nHeroID, nSlotIndex);
  if ( BaseItemForHero != 0 )
    return BaseItemForHero->m_iItemDefinitionIndex.m_Value.m_Data;
  else
    return INVALID_ITEM_DEF_INDEX;
}


// CDOTAItemSystem::GetItemPortraitDataForModel  (line 735, @0x0000000002e307a0, libserver.so)
const CDOTAPortraitInfo *__fastcall CDOTAItemSystem::GetItemPortraitDataForModel(
        CDOTAItemSystem *const this,
        item_definition_index_t nItemDefinition,
        const char *pModelName)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = *&nItemDefinition;
  v4 = (*(this->_vptr_IEconItemSystem + 2))(this, nItemDefinition.m_Data, pModelName);
  (*(*v4 + 32LL))(v4, v3);
  return 0;
}


// CDOTAItemSystem::GetGlobalPortraitDataForModel  (line 751, @0x0000000002e307e0, libserver.so)
const CDOTAPortraitInfo *__fastcall CDOTAItemSystem::GetGlobalPortraitDataForModel(
        CDOTAItemSystem *const this,
        const char *pModelName)
{
  return 0;
}


