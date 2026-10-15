// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/econ/dota_item_inventory.cpp:2409
struct OwningItemInfo_t {
	const GameItemDefinition_t * m_pOwningItemDef;  // +0x8
	int m_nPrice;  // +0x10
	int m_nRegularPrice;  // +0x14

	int m_nPackagingFlags;  // +0x1c
	int m_nPackagingNestingLevel;  // +0x20
	bool m_bSuppressAddingItem;  // +0x24
	bool m_bHasComputedPrice;  // +0x25
	OwningItemInfo_t();

	// sizeof = 40
};

// src/game/shared/dota/econ/dota_item_inventory.cpp:2435
struct LoadoutListBuildInfo_t {
	int m_nHeroID;  // +0x0

	bool m_bExplodeTreasureItems;  // +0x10

	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// InventoryManager  (line 65, @0x0000000002e36690, libserver.so)
// callers: CEconItemSchema::ItemTesting_GetLocalInventory, CGCClientSystem::SetupGC, CEconItemView::GetSOCData
// globals: g_DOTAInventoryManager
CInventoryManager *__cdecl InventoryManager()
{
  return &g_DOTAInventoryManager;
}


// DOTAInventoryManager  (line 69, @0x0000000002e366a0, libserver.so)
// callers: CSource2Server::GetEconItemNamesForCharacter, CSource2Server::FindUnitDataByModelNameCheckModelModifiers, CSource2Server::GetEconItemsInfoForCharacter, CDOTABaseAbility::CastAbility, CDOTA_BaseNPC::OnSpawnWearable, ClientActive, CDOTA_BaseNPC::ComputeGeneratingItem, CGCUserUpdatedAdditionalItems::BYieldingRunJobFromMsg, CDOTAGamerules::ClientMsg_FreeInventory, CGCServerJobGetAdditionalItems::BYieldingRunJob, TournamentItemEvent, CDOTAGamerules::SetGameWinner (31 total)
// globals: g_DOTAInventoryManager
CDOTAInventoryManager *__cdecl DOTAInventoryManager()
{
  return &g_DOTAInventoryManager;
}


// CDOTAInventoryManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 74, @0x0000000002e366b0, libserver.so)
void __cdecl CDOTAInventoryManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CEconItemLoadout::CEconItemLoadout  (line 81, @0x0000000002e36900, libserver.so)  // inlines: EconItemIDs_t, itemid_t, style_index_t
// calls: CEconItemView::CEconItemView, CEconItemLoadout::ClearItems, _Unwind_Resume
// callers: CDOTA_BaseNPC::BuildWearableSpawnList
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CEconItemLoadout::CEconItemLoadout(CEconItemLoadout *const this)
{
  uint16 m_Data; // dx
  CEconItemLoadout *v2; // rax
  __int64 v4; // rbx
  CEconItemView *v5; // r12

  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  v2 = (this + 8);
  *this = -2;
  *(this + 1) = -1;
  do
  {
    *v2 = 0;
    v2 = (v2 + 16);
    *(v2 - 4) = m_Data;
  }
  while ( v2 != (this + 264) );
  do
  {
    *v2 = -1;
    v2 = (v2 + 1);
  }
  while ( v2 != (this + 280) );
  v4 = 15;
  v5 = (this + 288);
  do
  {
    CEconItemView::CEconItemView(v5);
    --v4;
    ++v5;
  }
  while ( v4 != -1 );
  CEconItemLoadout::ClearItems(this);
}


// CEconItemLoadout::CEconItemLoadout  (line 86, @0x0000000002e366c0, libserver.so)  // inlines: EconItemIDs_t, itemid_t, style_index_t
// calls: CEconItemView::CEconItemView, CEconItemView::operator=, _Unwind_Resume
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CEconItemLoadout::CEconItemLoadout(CEconItemLoadout *const this, const CEconItemLoadout *const other)
{
  CEconItemLoadout *v2; // rax
  char *v4; // r14
  uint16 m_Data; // dx
  __int64 v7; // r12
  CEconItemView *v8; // r13
  __int64 i; // rax
  __int16 v10; // dx
  __int64 j; // rax
  char v12; // al
  CEconItemView *v13; // rdi
  __int64 v14; // r12
  char *v15; // rbx
  CEconItemView *v16; // [rsp+0h] [rbp-40h]
  char *v17; // [rsp+8h] [rbp-38h]

  v2 = (this + 8);
  v4 = this + 8;
  v17 = this + 8;
  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  do
  {
    *v2 = 0;
    v2 = (v2 + 16);
    *(v2 - 4) = m_Data;
  }
  while ( v2 != (this + 264) );
  do
  {
    *v2 = -1;
    v2 = (v2 + 1);
  }
  while ( v2 != (this + 280) );
  v7 = 15;
  v16 = (this + 288);
  v8 = (this + 288);
  do
  {
    CEconItemView::CEconItemView(v8);
    --v7;
    ++v8;
  }
  while ( v7 != -1 );
  *this = *other;
  *(this + 1) = *(other + 1);
  for ( i = 0; ; v4 = &v17[i] )
  {
    *v4 = *(other + i + 8);
    v10 = *(other + i + 16);
    i += 16;
    *(v4 + 4) = v10;
    if ( i == 256 )
      break;
  }
  for ( j = 0; j != 16; ++j )
    *(this + j + 264) = *(other + j + 264);
  v12 = *(other + 280);
  *(this + 280) = v12;
  if ( v12 != 0 )
  {
    v13 = v16;
    v14 = 0;
    v15 = other + 288;
    while ( 1 )
    {
      CEconItemView::operator=(v13, &v15[v14 * 216]);
      if ( ++v14 == 16 )
        break;
      v13 = &v16[v14];
    }
  }
}


// CEconItemLoadout::ClearItems  (line 110, @0x0000000002e36880, libserver.so)  // inlines: V_memset, memset
// calls: CEconItemView::Invalidate
// callers: CEconItemLoadout::CEconItemLoadout, CEconItemLoadout::SetItems, CEconItemLoadout::SetItemsFromBaseSet
// globals: INVALID_STYLE_INDEX
void __fastcall CEconItemLoadout::ClearItems(CEconItemLoadout *const this)
{
  char *v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rax
  CEconItemView *v5; // rdi

  v2 = this + 288;
  v3 = 0;
  v4 = 0x101010101010101LL * INVALID_STYLE_INDEX.m_Data;
  *(this + 33) = v4;
  *(this + 34) = v4;
  memset(this + 8, 0, 0x100u);
  do
  {
    v5 = &v2[v3];
    v3 += 216;
    CEconItemView::Invalidate(v5);
  }
  while ( v3 != 3456 );
  *(this + 280) = 0;
}


// CEconItemLoadout::HasBeenInitialized  (line 124, @0x0000000002e36a00, libserver.so)
bool __fastcall CEconItemLoadout::HasBeenInitialized(const CEconItemLoadout *const this)
{
  return *this != -2;
}


// CEconItemLoadout::InitHeroLoadout  (line 129, @0x0000000002e36a10, libserver.so)
// callers: CDOTA_BaseNPC::BuildWearableSpawnList
void __fastcall CEconItemLoadout::InitHeroLoadout(CEconItemLoadout *const this, int nHeroID, int nPrimarySlotIndex)
{
  *this = nHeroID;
  *(this + 1) = nPrimarySlotIndex;
}


// CEconItemLoadout::InitGlobalItemLoadout  (line 135, @0x0000000002e36a20, libserver.so)  // inlines: DoLookup<int>, Find, GetItemSlotsForHero, GetSlotIndexBySlotType, InitGlobalItemLoadoutBySlotIndex, operator[]
// calls: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>
// callers: CDOTA_BaseNPC::BuildWearableSpawnList
bool __fastcall CEconItemLoadout::InitGlobalItemLoadout(CEconItemLoadout *const this, int nSlotType)
{
  int v5; // eax
  int *v6; // rdx
  __int64 v7; // rax

  if ( stru_4D583D0.m_nUsed == 0 )
    return 0;
  v5 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
         &stru_4D583D0,
         1000,
         0xA56120D8,
         stru_4D583D0.m_nUsed);
  if ( v5 == -1 )
    return 0;
  v6 = &stru_4D583D0.m_table.m_pMemory[v5].data[2];
  if ( &stru_4D583D0.m_table.m_pMemory[v5] == -12LL )
    return 0;
  v7 = 0;
  while ( nSlotType != v6[v7 + 32] )
  {
    if ( ++v7 == 16 )
      return 0;
  }
  *(this + 1) = v7;
  *this = 1000;
  return 1;
}


// CEconItemLoadout::InitGlobalItemLoadoutBySlotIndex  (line 148, @0x0000000002e36ac0, libserver.so)
void __fastcall CEconItemLoadout::InitGlobalItemLoadoutBySlotIndex(CEconItemLoadout *const this, int nPrimarySlotIndex)
{
  *this = 1000;
  *(this + 1) = nPrimarySlotIndex;
}


// CEconItemLoadout::GetPrimarySlotIndex  (line 154, @0x0000000002e36ad0, libserver.so)
int __fastcall CEconItemLoadout::GetPrimarySlotIndex(const CEconItemLoadout *const this)
{
  return *(this + 1);
}


// CEconItemLoadout::GetHeroID  (line 159, @0x0000000002e36ae0, libserver.so)
int __fastcall CEconItemLoadout::GetHeroID(const CEconItemLoadout *const this)
{
  return *this;
}


// CEconItemLoadout::IsGlobalItem  (line 164, @0x0000000002e36af0, libserver.so)
bool __fastcall CEconItemLoadout::IsGlobalItem(const CEconItemLoadout *const this)
{
  return *this == 1000;
}


// CEconItemLoadout::GetPrimarySlotType  (line 169, @0x0000000002e36b00, libserver.so)  // inlines: DoLookup<int>, Find, GetItemSlotsForHero, GetSlotType, operator(), operator[]
// calls: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>
int __fastcall CEconItemLoadout::GetPrimarySlotType(const CEconItemLoadout *const this)
{
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *v1; // rcx
  int v2; // esi
  __int64 v3; // rbx
  unsigned int v5; // edx
  unsigned int v6; // edx
  int v7; // eax
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v8; // rdx

  v2 = *this;
  if ( *this < 0 )
    return -1;
  v3 = *(this + 1);
  if ( v3 < 0 )
    return -1;
  if ( stru_4D583D0.m_nUsed == 0 )
    return -1;
  v5 = 33 * (((4097 * v2 + 2127912214) >> 19) ^ (4097 * v2 + 2127912214) ^ 0xC761C23C);
  v6 = 9 * ((v5 - 369570787) ^ ((v5 + 374761393) << 9)) - 42973499;
  v7 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
         &stru_4D583D0,
         v2,
         HIWORD(v6) ^ v6 ^ 0xB55A4F09,
         v1);
  if ( v7 == -1 )
    return -1;
  v8 = &stru_4D583D0.m_table.m_pMemory[v7];
  if ( v8 == -12LL || v3 > 0xF )
    return -1;
  else
    return v8->data[v3 + 34];
}


// CEconItemLoadout::SetItems  (line 181, @0x0000000002e36e30, libserver.so)  // inlines: DoLookup<int>, Find, GetItemSlotsForHero, GetSlotIndexBySlotType, operator(), operator[]
// calls: CEconItemLoadout::ClearItems, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>, CEconItemDefinition::HasHeroID, CDOTAInventoryManager::GetBaseItemForHero, CEconItemView::operator=, CEconItemView::Init
// globals: INVALID_ITEM_DEF_INDEX, g_DOTAInventoryManager, INVALID_STYLE_INDEX
void __fastcall CEconItemLoadout::SetItems(
        CEconItemLoadout *const this,
        EconItemLoadoutBehavior_t behavior,
        int nCount,
        CEconItem **pSOEconItems,
        const style_index_t *pStyleIndices)
{
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *v8; // rcx
  int v9; // esi
  unsigned int v10; // edx
  unsigned int v11; // edx
  int v12; // eax
  int *v13; // r13
  CEconItem **v14; // r15
  const style_index_t *v15; // r12
  CEconItem *v16; // r14
  const CEconItemDefinition *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  CEconItemView *v20; // r13
  int i; // r12d
  int v22; // eax
  CEconItemView *BaseItemForHero; // rax
  const CEconItemView *v24; // r14
  __int64 (__fastcall ***v25)(_QWORD); // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rsi
  const style_index_t *v29; // rax
  style_index_t v30; // dl
  uint8 v31; // al
  __int64 v32; // [rsp+8h] [rbp-58h]
  __int64 v33; // [rsp+10h] [rbp-50h]
  const CDOTAItemDefinition *pItemDef; // [rsp+20h] [rbp-40h]
  const CDOTAItemDefinition *pItemDefa; // [rsp+20h] [rbp-40h]
  __int64 v37; // [rsp+28h] [rbp-38h]

  if ( *this >= 0 )
  {
    CEconItemLoadout::ClearItems(this);
    v9 = *this;
    if ( stru_4D583D0.m_nUsed != 0 )
    {
      v10 = 33 * (((4097 * v9 + 2127912214) >> 19) ^ (4097 * v9 + 2127912214) ^ 0xC761C23C);
      v11 = 9 * ((v10 - 369570787) ^ ((v10 + 374761393) << 9)) - 42973499;
      v12 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
              &stru_4D583D0,
              v9,
              HIWORD(v11) ^ v11 ^ 0xB55A4F09,
              v8);
      if ( v12 != -1 )
      {
        v13 = &stru_4D583D0.m_table.m_pMemory[v12].data[2];
        if ( &stru_4D583D0.m_table.m_pMemory[v12] != -12LL )
        {
          *(this + 280) = 1;
          if ( nCount > 0 )
          {
            v14 = pSOEconItems;
            v15 = pStyleIndices;
            v37 = &v14[(nCount - 1) + 1];
            do
            {
              while ( 1 )
              {
                v16 = *v14;
                if ( *v14 != 0 && INVALID_ITEM_DEF_INDEX.m_Data != v16->m_unDefIndex.m_Data )
                {
                  v17 = (*(v16->_vptr_CSharedObject + 10))(*v14);
                  if ( v17 != 0 )
                  {
                    pItemDef = v17;
                    if ( CEconItemDefinition::HasHeroID(v17, *this) )
                    {
                      v18 = 0;
                      while ( 1 )
                      {
                        v19 = v18;
                        if ( pItemDef->m_nSlotType == v13[v18 + 32] )
                          break;
                        if ( ++v18 == 16 )
                          goto LABEL_15;
                      }
                      if ( *this != 1000 )
                        break;
                      v26 = *(this + 1);
                      if ( v26 < 0 || v26 == v19 )
                        break;
                    }
                  }
                }
LABEL_15:
                ++v14;
                ++v15;
                if ( v14 == v37 )
                  goto LABEL_16;
              }
              v32 = v19;
              v33 = 16 * v19;
              pItemDefa = (this + 16 * v19);
              v27 = (*(v16->_vptr_CSharedObject + 12))(v16);
              v28 = v32;
              pItemDefa->m_pKVItem = v27;
              *(this + v33 + 16) = v16->m_unDefIndex.m_Data;
              v29 = &INVALID_STYLE_INDEX;
              if ( pStyleIndices != 0 )
                v29 = v15;
              v30.m_Data = v29->m_Data;
              if ( v29->m_Data == INVALID_STYLE_INDEX.m_Data )
              {
                v31 = (*(v16->_vptr_CSharedObject + 20))(v16);
                v28 = v32;
                v30.m_Data = v31;
              }
              ++v14;
              ++v15;
              CEconItemView::Init((this + 216 * v28 + 288), v16, v30);
            }
            while ( v14 != v37 );
          }
LABEL_16:
          v20 = (this + 288);
          for ( i = 0; i != 16; ++i )
          {
            if ( !v20->m_bInitialized.m_Value && (*this != 1000 || (v22 = *(this + 1)) < 0 || i == v22) )
            {
              BaseItemForHero = CDOTAInventoryManager::GetBaseItemForHero(g_DOTAInventoryManager, *this, i);
              v24 = BaseItemForHero;
              if ( BaseItemForHero != 0 && BaseItemForHero->m_bInitialized.m_Value )
              {
                v25 = (*(BaseItemForHero->_vptr_IEconItemInterface + 12))(BaseItemForHero);
                *(this + 8 * i + 8) = (**v25)(v25);
                CEconItemView::operator=(v20, v24);
              }
            }
            ++v20;
          }
        }
      }
    }
  }
}


// CEconItemLoadout::GetEconItemViewInSlotIndex  (line 275, @0x0000000002e36bd0, libserver.so)
const CEconItemView *__fastcall CEconItemLoadout::GetEconItemViewInSlotIndex(
        const CEconItemLoadout *const this,
        int nSlotIndex)
{
  return (this + 216 * nSlotIndex + 288);
}


// CEconItemLoadout::SetItems  (line 281, @0x0000000002e37190, libserver.so)  // inlines: DoLookup<int>, Find, GetItemSlotsForHero, GetSlotIndexBySlotType, GetStaticDataForItemByDefIndex, operator(), operator[]
// calls: CEconItemLoadout::ClearItems, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>, ItemSystem, CEconItemSchema::GetItemDefinition, CEconItemDefinition::HasHeroID, CDOTAInventoryManager::GetBaseItemForHero
// callers: CDOTA_BaseNPC::BuildWearableSpawnList
// globals: INVALID_ITEM_DEF_INDEX, g_DOTAInventoryManager
void __fastcall CEconItemLoadout::SetItems(
        CEconItemLoadout *const this,
        EconItemLoadoutBehavior_t behavior,
        int nCount,
        const EconItemIDs_t *pIDs,
        const style_index_t *pStyleIndices)
{
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *v8; // rcx
  int v9; // esi
  unsigned int v10; // edx
  unsigned int v11; // edx
  int v12; // eax
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v13; // r8
  int *v14; // r14
  uint16 m_Data; // ax
  const style_index_t *v16; // r15
  uint16 v17; // r12
  CEconItemSystem *v18; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  CEconItemLoadout *v22; // r12
  int v23; // ebx
  int v24; // eax
  CEconItemView *BaseItemForHero; // rax
  __int64 (__fastcall ***v26)(_QWORD); // rax
  __int64 v27; // rax
  int v28; // eax
  const CDOTAItemDefinition *pItemDef; // [rsp+10h] [rbp-40h]
  const EconItemIDs_t *v31; // [rsp+18h] [rbp-38h]

  if ( *this >= 0 )
  {
    CEconItemLoadout::ClearItems(this);
    v9 = *this;
    if ( stru_4D583D0.m_nUsed != 0 )
    {
      v10 = 33 * (((4097 * v9 + 2127912214) >> 19) ^ (4097 * v9 + 2127912214) ^ 0xC761C23C);
      v11 = 9 * ((v10 - 369570787) ^ ((v10 + 374761393) << 9)) - 42973499;
      v12 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
              &stru_4D583D0,
              v9,
              HIWORD(v11) ^ v11 ^ 0xB55A4F09,
              v8);
      if ( v12 != -1 )
      {
        v13 = &stru_4D583D0.m_table.m_pMemory[v12];
        v14 = &v13->data[2];
        if ( v13 != -12LL )
        {
          m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
          if ( nCount > 0 )
          {
            v16 = pStyleIndices;
            v31 = &pIDs[(nCount - 1) + 1];
            do
            {
              v17 = pIDs->m_nItemDefIndex.m_Data;
              if ( pIDs->m_nItemID.m_Data == 0 && v17 != m_Data )
              {
                v18 = ItemSystem();
                ItemDefinition = CEconItemSchema::GetItemDefinition(&v18->m_itemSchema, v17, 0);
                if ( ItemDefinition != 0 )
                {
                  pItemDef = ItemDefinition;
                  if ( CEconItemDefinition::HasHeroID(ItemDefinition, *this) )
                  {
                    v20 = 0;
                    while ( 1 )
                    {
                      v21 = v20;
                      if ( pItemDef->m_nSlotType == v14[v20 + 32] )
                        break;
                      if ( ++v20 == 16 )
                        goto LABEL_15;
                    }
                    if ( *this != 1000 || (v28 = *(this + 1)) < 0 || v28 == v21 )
                    {
                      v27 = 16 * v21;
                      *(this + v27 + 8) = 0;
                      *(this + v27 + 16) = v17;
                      if ( pStyleIndices != 0 )
                        *(this + v21 + 264) = v16->m_Data;
                    }
                  }
                }
LABEL_15:
                m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
              }
              ++pIDs;
              ++v16;
            }
            while ( pIDs != v31 );
          }
          v22 = this;
          v23 = 0;
          while ( 1 )
          {
            if ( *(v22 + 8) == m_Data && (*this != 1000 || (v24 = *(this + 1)) < 0 || v23 == v24) )
            {
              BaseItemForHero = CDOTAInventoryManager::GetBaseItemForHero(g_DOTAInventoryManager, *this, v23);
              if ( BaseItemForHero != 0 && BaseItemForHero->m_bInitialized.m_Value )
              {
                v26 = (*(BaseItemForHero->_vptr_IEconItemInterface + 12))(BaseItemForHero);
                *(this + 8 * v23 + 8) = (**v26)(v26);
              }
            }
            ++v23;
            v22 = (v22 + 16);
            if ( v23 == 16 )
              break;
            m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
          }
        }
      }
    }
  }
}


// CEconItemLoadout::SetItemsFromBaseSet  (line 425, @0x0000000002e370e0, libserver.so)
// calls: CEconItemLoadout::ClearItems, CDOTAInventoryManager::GetBaseItemForHero
// globals: g_DOTAInventoryManager
void __fastcall CEconItemLoadout::SetItemsFromBaseSet(CEconItemLoadout *const this)
{
  int i; // ebx
  CEconItemView *BaseItemForHero; // rax
  __int64 (__fastcall ***v4)(_QWORD); // rax

  if ( *this >= 0 )
  {
    CEconItemLoadout::ClearItems(this);
    for ( i = 0; i != 16; ++i )
    {
      BaseItemForHero = CDOTAInventoryManager::GetBaseItemForHero(g_DOTAInventoryManager, *this, i);
      if ( BaseItemForHero != 0 )
      {
        v4 = (*(BaseItemForHero->_vptr_IEconItemInterface + 12))(BaseItemForHero);
        *(this + 8 * i + 8) = (**v4)(v4);
      }
    }
  }
}


// CEconItemLoadout::operator==  (line 445, @0x0000000002e36bf0, libserver.so)  // inlines: operator!=, operator==
// calls: CEconItemView::operator==
// callers: CEconItemLoadout::operator!=
bool __fastcall CEconItemLoadout::operator==(const CEconItemLoadout *const this, const CEconItemLoadout *const other)
{
  char v3; // dl
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  char *v8; // r13

  if ( *this != *other )
    return 0;
  if ( *(this + 1) != *(other + 1) )
    return 0;
  v3 = *(this + 280);
  if ( v3 != *(other + 280) || *(other + 8) != *(this + 8) || *(other + 1) != *(this + 1) )
    return 0;
  v4 = 0;
  while ( *(other + v4 + 32) == *(this + v4 + 32) && *(other + v4 + 24) == *(this + v4 + 24) )
  {
    v4 += 16;
    if ( v4 == 240 )
    {
      if ( *(other + 264) == *(this + 264) )
      {
        v5 = 0;
        while ( *(other + v5 + 265) == *(this + v5 + 265) )
        {
          if ( ++v5 == 15 )
          {
            if ( v3 == 0 )
              return 1;
            v6 = other + 288;
            v7 = 0;
            v8 = this + 288;
            while ( CEconItemView::operator==(&v8[v7], &v6[v7]) )
            {
              v7 += 216;
              if ( v7 == 3456 )
                return 1;
            }
            return 0;
          }
        }
      }
      return 0;
    }
  }
  return 0;
}


// CEconItemLoadout::operator!=  (line 480, @0x0000000002e36cf0, libserver.so)
// calls: CEconItemLoadout::operator==
bool __fastcall CEconItemLoadout::operator!=(const CEconItemLoadout *const this, const CEconItemLoadout *const other)
{
  return !CEconItemLoadout::operator==(this, other);
}


// CDOTAInventoryManager::CDOTAInventoryManager  (line 489, @0x0000000002e3f880, libserver.so)  // inlines: CUtlHashtable, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, V_memset, memset, style_index_t, ~CAutoGameSystem, ~CInventoryManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CInventoryManager::CInventoryManager, CEconItemView::CEconItemView, CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::~CUtlHashtable, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::~CUtlHashtable, IGameSystem::~IGameSystem, _Unwind_Resume, CUtlMemory<CInventoryManager::inventories_t, int>::Purge
// callers: __static_initialization_and_destruction_0
void __fastcall CDOTAInventoryManager::CDOTAInventoryManager(CDOTAInventoryManager *const this)
{
  CEconItemView *v2; // r12
  __int64 v3; // rbx

  v2 = (this + 128);
  v3 = 15;
  CInventoryManager::CInventoryManager(this);
  *(this + 6) = 0;
  *this = &off_47A04D0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 16) = 0;
  *(this + 17) = 32;
  *(this + 72) = 0;
  *(this + 10) = 0;
  *(this + 22) = 0;
  *(this + 23) = 0;
  *(this + 24) = 0;
  *(this + 25) = 32;
  *(this + 104) = 0;
  *(this + 120) = -1;
  do
  {
    CEconItemView::CEconItemView(v2);
    --v3;
    ++v2;
  }
  while ( v3 != -1 );
  *(this + 28) = -1;
  *(this + 896) = 0;
  *(this + 449) = 0;
  *(this + 900) = 0;
  *(this + 901) = 0;
  *(this + 453) = 0;
  *(this + 908) = 0;
  *(this + 909) = 0;
  *(this + 910) = 0;
  *(this + 911) = 32;
  *(this + 3648) = 0;
  *(this + 451) = 0;
  *(this + 452) = 0;
}


// CDOTAInventoryManager::PostInit  (line 502, @0x0000000002e47f30, libserver.so)
// calls: CInventoryManager::PostInit, COM_TimestampedLog, CDOTAInventoryManager::InitItemSlots, CDOTAInventoryManager::GenerateBaseItems
// strings: "CDOTAInventoryManager::PostInit - Called Base", "CDOTAInventoryManager::PostInit - InitItemSlots", "CDOTAInventoryManager::PostInit - GenerateBaseItems"
void __fastcall CDOTAInventoryManager::PostInit(CDOTAInventoryManager *const this)
{
  CInventoryManager::PostInit(this);
  COM_TimestampedLog("CDOTAInventoryManager::PostInit - Called Base");
  CDOTAInventoryManager::InitItemSlots(this);
  COM_TimestampedLog("CDOTAInventoryManager::PostInit - InitItemSlots");
  CDOTAInventoryManager::GenerateBaseItems(this);
  COM_TimestampedLog("CDOTAInventoryManager::PostInit - GenerateBaseItems");
}


// CDOTAInventoryManager::GameInit  (line 524, @0x0000000002e30e60, libserver.so)  // inlines: GetBool, GetInt
// calls: CInventoryManager::GameInit, CInventoryManager::PreInitGC
void __fastcall CDOTAInventoryManager::GameInit(CDOTAInventoryManager *const this, const EventGameInit_t *const msg)
{
  CInventoryManager::GameInit(this, msg);
  if ( items_game_use_gc_copy.m_pParent->m_Value.m_nValue == 0 )
    CInventoryManager::PreInitGC(this);
}


// CDOTAInventoryManager::Shutdown  (line 540, @0x0000000002e305b0, libserver.so)  // inlines: FirstHandle, NextHandle
void __fastcall CDOTAInventoryManager::Shutdown(CDOTAInventoryManager *const this)
{
  int v2; // ecx
  int *v3; // rdx
  int *v4; // rax
  int v5; // r13d
  int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rdi
  int v10; // esi
  int v11; // eax
  int *v12; // rcx

  v2 = *(this + 22);
  v3 = *(this + 10);
  if ( v2 > 0 )
  {
    v4 = v3 + 35;
    v5 = 0;
    if ( *v3 < 0 )
    {
      while ( ++v5 != v2 )
      {
        v4 += 35;
        if ( *(v4 - 35) >= 0 )
          goto LABEL_8;
      }
    }
    else
    {
      v5 = 0;
      do
      {
        v6 = 0;
        v7 = 35LL * v5;
        do
        {
          v8 = 2LL * v6;
          v9 = *&v3[v8 + 3 + v7];
          if ( v9 != 0 )
          {
            (*(*v9 + 16LL))(v9);
            *(v7 * 4 + *(this + 10) + v8 * 4 + 12) = 0;
            v3 = *(this + 10);
          }
          ++v6;
        }
        while ( v6 != 16 );
        v10 = *(this + 22);
        v11 = v5 + 1;
        if ( v5 + 1 >= v10 )
          break;
        if ( v3[v7 + 35] < 0 )
        {
          v12 = &v3[35 * v11 + 35];
          while ( ++v11 != v10 )
          {
            v12 += 35;
            if ( *(v12 - 35) >= 0 )
              goto LABEL_7;
          }
          return;
        }
LABEL_7:
        v5 = v11;
LABEL_8:
        ;
      }
      while ( v5 != -1 );
    }
  }
}


// CDOTAInventoryManager::GetItemSlotsForHero  (line 564, @0x0000000002e36d00, libserver.so)  // inlines: DoLookup<int>, Find, operator(), operator[]
// calls: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>
// callers: CSource2Server::GetEconItemNamesForCharacter, CSource2Server::FindUnitDataByModelNameCheckModelModifiers, CSource2Server::GetEconItemsInfoForCharacter, CDOTA_BaseNPC::OnSpawnWearable, CDOTA_BaseNPC::ComputeGeneratingItem, CDOTA_BaseNPC_Hero::BuildWearableSpawnList, CDOTA_BaseNPC_Hero::PerformAutoTaunt, CEconItemView::CacheAssetModifiers
CDOTAHeroSlots *__fastcall CDOTAInventoryManager::GetItemSlotsForHero(CDOTAInventoryManager *const this, int nHeroID)
{
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *v2; // rcx
  unsigned int v5; // edx
  unsigned int v6; // edx
  int v7; // eax

  if ( *(this + 16) == 0 )
    return 0;
  v5 = 33 * (((4097 * nHeroID + 2127912214) >> 19) ^ (4097 * nHeroID + 2127912214) ^ 0xC761C23C);
  v6 = 9 * ((v5 - 369570787) ^ ((v5 + 374761393) << 9)) - 42973499;
  v7 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
         (this + 48),
         nHeroID,
         HIWORD(v6) ^ v6 ^ 0xB55A4F09,
         v2);
  if ( v7 == -1 )
    return 0;
  else
    return (*(this + 6) + 700LL * v7 + 12);
}


// CDOTAInventoryManager::SelectRandomEconItemForHeroAndSlot  (line 576, @0x0000000002e45040, libserver.so)  // inlines: DOTAItemCriteria_t, DOTAItemSystem, DoLookup<int>, Find, GetItemSlotsForHero, GetSlotType, operator(), operator[]
// calls: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>, ItemSystem, CDOTAItemSystem::SelectItemDefFromCriteria
// globals: INVALID_ITEM_DEF_INDEX
// local variable allocation has failed, the output may be wrong!
item_definition_index_t __fastcall CDOTAInventoryManager::SelectRandomEconItemForHeroAndSlot(
        CDOTAInventoryManager *const this,
        int nHeroID,
        int nSlotIndex,
        bool bRecentOnly)
{
  __int64 v4; // r12
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // eax
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v10; // rax
  int v11; // edx
  CDOTAItemSystem *v12; // rax
  DOTAItemCriteria_t criteria; // [rsp+10h] [rbp-30h] BYREF

  v4 = nSlotIndex;
  if ( stru_4D583D0.m_nUsed == 0 )
    return INVALID_ITEM_DEF_INDEX;
  v7 = 33 * (((4097 * nHeroID + 2127912214) >> 19) ^ (4097 * nHeroID + 2127912214) ^ 0xC761C23C);
  v8 = 9 * ((v7 - 369570787) ^ ((v7 + 374761393) << 9)) - 42973499;
  v9 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
         &stru_4D583D0,
         nHeroID,
         HIWORD(v8) ^ v8 ^ 0xB55A4F09,
         bRecentOnly);
  if ( v9 == -1 )
    return INVALID_ITEM_DEF_INDEX;
  v10 = &stru_4D583D0.m_table.m_pMemory[v9];
  if ( v10 == -12LL )
    return INVALID_ITEM_DEF_INDEX;
  criteria.m_bIsBaseItem = 0;
  v11 = -1;
  criteria.m_pName = 0;
  criteria.m_nHeroID = nHeroID;
  if ( v4 <= 0xF )
    v11 = v10->data[v4 + 34];
  criteria.m_nSlotType = v11;
  criteria.m_bRecentOnly = bRecentOnly;
  v12 = ItemSystem();
  return CDOTAItemSystem::SelectItemDefFromCriteria(v12, &criteria);
}


// CDOTAInventoryManager::InitItemSlots  (line 628, @0x0000000002e47010, libserver.so)  // inlines: AddSlotUnit, AddToTail, CUtlMemory, CUtlString, CUtlVectorBase, ClearSlotUnits, Construct<CUtlString>, Destruct<CUtlString>, Element, GetBool, GetDOTASlotType, GetHeroesKeyValues, GrowMemory, Insert, IsAddOnGame, ParseLoadoutPreviewMode, Purge, RemoveAll, SetItemVisibleOnGeneratedUnits, SetSlotBudget, SetSlotLoadoutPreviewMode, SetSlotShouldDisplayInLoadout, SetSlotText, SetSlotType, _V_strcmp, operator(), operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: DOTAGameManager, KeyValues::GetFirstSubKey, KeyValues::GetInt, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoInsert<int>, KeyValues::FindKey, KeyValues::GetString, strcmp, CUtlString::Set, CUtlString::FreeMemoryBlock, operator delete, KeyValues::GetNextKey, operator new (15 total)
// callers: CDOTAInventoryManager::PostInit
// strings: "ItemSlots", "SlotName", "TextureWidth", "TextureHeight", "MaxPolygonsLOD0", "MaxPolygonsLOD1" (12 total)
// globals: GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings, ParseLoadoutPreviewMode(char const*)::s_pPreviewModes
void __fastcall CDOTAInventoryManager::InitItemSlots(CDOTAInventoryManager *const this)
{
  CDOTAGameManager *v2; // rax
  int Int; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  __int64 v6; // rbx
  KeyValues *Key; // rax
  KeyValues *FirstSubKey; // r12
  const char *String; // rbx
  __int64 v10; // r14
  __int64 v11; // r15
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rcx
  char v18; // dl
  __int64 v19; // rbx
  __int64 v20; // r14
  int *v21; // rbx
  int v22; // eax
  __int64 i; // r15
  CUtlString *v24; // rdi
  bool v25; // zf
  KeyValues *v26; // rax
  KeyValues *NextKey; // rbx
  __int64 v28; // rcx
  int v29; // edi
  _QWORD *v30; // rax
  const char *v31; // r14
  __int64 v32; // r15
  int *v33; // rdx
  int *v34; // rax
  __int64 v35; // rdx
  char v36; // r14
  int v37; // eax
  const KeyValues *m_pkvAddOnHeroes; // rdi
  KeyValues *pKeyHero; // [rsp+8h] [rbp-58h]
  int nTexWidth; // [rsp+10h] [rbp-50h]
  int nTexWidtha; // [rsp+10h] [rbp-50h]
  int iSlot; // [rsp+14h] [rbp-4Ch]
  int nTexHeightb; // [rsp+18h] [rbp-48h]
  __int64 nTexHeight; // [rsp+18h] [rbp-48h]
  __int64 nTexHeighta; // [rsp+18h] [rbp-48h]
  int nMaxPolygonsLOD0; // [rsp+20h] [rbp-40h]
  int nMaxPolygonsLOD0a; // [rsp+20h] [rbp-40h]
  int *nMaxPolygonsLOD0b; // [rsp+20h] [rbp-40h]
  const char *nMaxPolygonsLOD0c; // [rsp+20h] [rbp-40h]
  __int64 v50; // [rsp+28h] [rbp-38h]

  v2 = DOTAGameManager();
  if ( *&v2->m_bCustomGame != 0 )
    m_pkvAddOnHeroes = v2->m_pkvAddOnHeroes;
  else
    m_pkvAddOnHeroes = v2->m_pkvHeroes;
  if ( m_pkvAddOnHeroes != 0 )
  {
    pKeyHero = KeyValues::GetFirstSubKey(m_pkvAddOnHeroes);
    if ( pKeyHero != 0 )
    {
      while ( 1 )
      {
        Int = KeyValues::GetInt(pKeyHero, "HeroID", 0);
        v4 = 33 * (((4097 * Int + 2127912214) >> 19) ^ (4097 * Int + 2127912214) ^ 0xC761C23C);
        v5 = 9 * ((v4 - 369570787) ^ ((v4 + 374761393) << 9)) - 42973499;
        v6 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoInsert<int>(
               (this + 48),
               Int,
               HIWORD(v5) ^ v5 ^ 0xB55A4F09,
               0);
        Key = KeyValues::FindKey(pKeyHero, "ItemSlots", 0);
        if ( Key != 0 )
        {
          FirstSubKey = KeyValues::GetFirstSubKey(Key);
          if ( FirstSubKey != 0 )
            break;
        }
LABEL_42:
        pKeyHero = KeyValues::GetNextKey(pKeyHero);
        if ( pKeyHero == 0 )
          return;
      }
      iSlot = 0;
      v50 = 700 * v6;
      while ( 1 )
      {
        String = KeyValues::GetString(FirstSubKey, "SlotName", 0, 0, 0);
        if ( String != 0 )
          break;
LABEL_41:
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          goto LABEL_42;
      }
      v10 = 0;
      while ( strcmp(*(&GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings + v10), String) != 0 )
      {
        if ( ++v10 == 45 )
          goto LABEL_41;
      }
      if ( iSlot > 0xF )
      {
        KeyValues::GetInt(FirstSubKey, "TextureWidth", 0);
        KeyValues::GetInt(FirstSubKey, "TextureHeight", 0);
        KeyValues::GetInt(FirstSubKey, "MaxPolygonsLOD0", 0);
        KeyValues::GetInt(FirstSubKey, "MaxPolygonsLOD1", 0);
        KeyValues::GetInt(FirstSubKey, "no_import", 0);
        KeyValues::GetString(FirstSubKey, "SlotText", 0, 0, 0);
        KeyValues::GetInt(FirstSubKey, "DisplayInLoadout", 1);
        KeyValues::GetInt(FirstSubKey, "ShowItemOnGeneratedUnits", 0);
        v11 = iSlot;
      }
      else
      {
        v11 = iSlot;
        *(v50 + *(this + 6) + 4LL * iSlot + 128 + 12) = v10;
        nTexWidth = KeyValues::GetInt(FirstSubKey, "TextureWidth", 0);
        nTexHeightb = KeyValues::GetInt(FirstSubKey, "TextureHeight", 0);
        nMaxPolygonsLOD0 = KeyValues::GetInt(FirstSubKey, "MaxPolygonsLOD0", 0);
        v12 = KeyValues::GetInt(FirstSubKey, "MaxPolygonsLOD1", 0);
        v13 = KeyValues::GetInt(FirstSubKey, "no_import", 0);
        v14 = *(this + 6) + v50 + 20LL * iSlot;
        *(v14 + 220) = v13 != 0;
        *(v14 + 208) = nTexHeightb;
        *(v14 + 212) = nMaxPolygonsLOD0;
        *(v14 + 204) = nTexWidth;
        *(v14 + 216) = v12;
        v15 = KeyValues::GetString(FirstSubKey, "SlotText", 0, 0, 0);
        if ( v15 != 0 )
          CUtlString::Set((*(this + 6) + v50 + 12 + 8LL * iSlot), v15);
        *(*(this + 6) + v50 + iSlot + 652) = KeyValues::GetInt(FirstSubKey, "DisplayInLoadout", 1) != 0;
        *(*(this + 6) + v50 + iSlot + 668) = KeyValues::GetInt(FirstSubKey, "ShowItemOnGeneratedUnits", 0) != 0;
      }
      v16 = KeyValues::GetString(FirstSubKey, "LoadoutPreviewMode", "", 0, 0);
      v17 = v16;
      if ( v16 != 0 && *v16 != 0 )
      {
        v35 = 0;
        while ( 1 )
        {
          v36 = v35;
          nTexHeighta = v35;
          nMaxPolygonsLOD0c = v17;
          v37 = V_stricmp_fast(*(&ParseLoadoutPreviewMode(char const*)::s_pPreviewModes + v35), v17);
          v17 = nMaxPolygonsLOD0c;
          if ( v37 == 0 )
            break;
          v35 = nTexHeighta + 1;
          if ( nTexHeighta == 13 )
            goto LABEL_19;
        }
        v18 = v36;
      }
      else
      {
LABEL_19:
        v18 = -1;
      }
      v19 = *(this + 6) + v50;
      if ( iSlot <= 0xF )
      {
        *(*(this + 6) + v50 + v11 + 684) = v18;
        v19 = *(this + 6) + v50;
      }
      v20 = v19 + 8 * v11;
      nTexHeight = 8 * v11;
      v21 = *(v20 + 524);
      if ( v21 != 0 )
      {
        v22 = *v21;
        for ( i = 8LL * *v21 - 8; --v22 >= 0; i -= 8 )
        {
          v24 = (*(v21 + 1) + i);
          if ( v24->m_pString != 0 )
          {
            nMaxPolygonsLOD0a = v22;
            CUtlString::FreeMemoryBlock(v24);
            v22 = nMaxPolygonsLOD0a;
          }
        }
        v25 = (v21[5] & 0xC0000000) == 0;
        *v21 = 0;
        if ( v25 )
        {
          CUtlMemory<CUtlString,int>::Purge((v21 + 2));
          if ( (v21[5] & 0xC0000000) == 0 )
            CUtlMemory<CUtlString,int>::Purge((v21 + 2));
        }
        operator delete(v21);
        *(v20 + 524) = 0;
      }
      v26 = KeyValues::FindKey(FirstSubKey, "GeneratesUnits", 0);
      if ( v26 == 0 || (NextKey = KeyValues::GetFirstSubKey(v26)) == 0 )
      {
LABEL_40:
        ++iSlot;
        goto LABEL_41;
      }
      while ( 1 )
      {
        v31 = KeyValues::GetString(NextKey, 0, "", 0, 0);
        v32 = *(this + 6) + v50 + nTexHeight;
        v33 = *(v32 + 524);
        if ( v33 != 0 )
        {
          v28 = *v33;
          v29 = *v33;
          if ( v28 == v33[4] )
            goto LABEL_39;
        }
        else
        {
          v34 = operator new(0x18u);
          *v34 = 0;
          v33 = v34;
          *(v34 + 1) = 0;
          v34[4] = 0;
          v34[5] = 0;
          *(v32 + 524) = v34;
          v28 = *v34;
          v29 = *v34;
          if ( v28 == v34[4] )
          {
LABEL_39:
            nTexWidtha = v28;
            nMaxPolygonsLOD0b = v33;
            CUtlMemory<CUtlString,int>::Grow((v33 + 2), 1);
            v33 = nMaxPolygonsLOD0b;
            v28 = nTexWidtha;
            v29 = *nMaxPolygonsLOD0b;
          }
        }
        *v33 = v29 + 1;
        v30 = (*(v33 + 1) + 8 * v28);
        if ( v30 != 0 )
          *v30 = 0;
        CUtlString::Set((*(*(v32 + 524) + 8LL) + 8 * v28), v31);
        NextKey = KeyValues::GetNextKey(NextKey);
        if ( NextKey == 0 )
          goto LABEL_40;
      }
    }
  }
}


// CDOTAInventoryManager::InitPlayerLoadoutSlots  (line 684, @0x0000000002e47630, libserver.so)  // inlines: GetDOTASlotName, GetGeneratedUnitCount, GetSlotLoadoutPreviewMode, GetSlotType, Insert, SetItemVisibleOnGeneratedUnits, SetSlotLoadoutPreviewMode, SetSlotText, SetSlotType, operator[]
// calls: ItemSystem, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoInsert<int>, CDOTAItemSchema::GetPlayerLoadoutSlotType, V_sprintf_safe<256ul>, CUtlString::Set, __stack_chk_fail
// callers: CDOTAItemSchema::BInitSchema
// strings: "#LoadoutSlot_%s"
// globals: GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings
void __fastcall CDOTAInventoryManager::InitPlayerLoadoutSlots(CDOTAInventoryManager *const this)
{
  CEconItemSystem *v2; // r14
  __int64 v3; // r15
  unsigned int *v4; // r12
  CUtlString *v5; // rbx
  unsigned int PlayerLoadoutSlotType; // eax
  char v7; // dl
  const char *v8; // rdx
  int *m_pString; // rdx
  unsigned int v10; // edx
  unsigned int v11; // esi
  __int64 v12; // [rsp+10h] [rbp-160h]
  char pBuf[256]; // [rsp+30h] [rbp-140h] BYREF
  unsigned __int64 v14; // [rsp+138h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  v2 = ItemSystem();
  if ( v2 != -8LL )
  {
    v12 = *(this + 6)
        + 700LL
        * CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoInsert<int>(
            (this + 48),
            1000,
            0xA56120D8,
            0);
    if ( v2->m_itemSchema.m_vecPlayerLoadoutSlots.m_Size > 0 )
    {
      v3 = 0;
      v4 = (v12 + 140);
      v5 = (v12 + 12);
      while ( 1 )
      {
        PlayerLoadoutSlotType = CDOTAItemSchema::GetPlayerLoadoutSlotType(&v2->m_itemSchema, v3);
        if ( PlayerLoadoutSlotType != -1 )
          break;
LABEL_16:
        ++v5;
        ++v3;
        ++v4;
        if ( v2->m_itemSchema.m_vecPlayerLoadoutSlots.m_Size <= v3 )
          return;
      }
      if ( v3 <= 0xF )
      {
        if ( PlayerLoadoutSlotType <= 0x2C )
          *v4 = PlayerLoadoutSlotType;
        if ( PlayerLoadoutSlotType == 29 || PlayerLoadoutSlotType == 33 )
        {
          *(v12 + 12 + v3 + 656) = 1;
          goto LABEL_13;
        }
      }
      else if ( PlayerLoadoutSlotType == 33 || PlayerLoadoutSlotType == 29 )
      {
        goto LABEL_13;
      }
      if ( PlayerLoadoutSlotType == 43 )
      {
        if ( v3 <= 0xF )
          *(v12 + v3 + 684) = 11;
LABEL_20:
        v8 = *(&GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings + PlayerLoadoutSlotType);
LABEL_14:
        V_sprintf_safe<256ul>(pBuf, "#LoadoutSlot_%s", v8);
        if ( v3 <= 0xF )
          CUtlString::Set(v5, pBuf);
        goto LABEL_16;
      }
      if ( v3 <= 0xF )
      {
        v7 = *(v12 + v3 + 684);
        if ( v7 != -1 )
        {
          if ( v7 != 0 )
            goto LABEL_13;
          goto LABEL_12;
        }
        m_pString = v5[64].m_pString;
        if ( m_pString == 0 || *m_pString <= 0 )
        {
          v10 = *v4;
          v11 = *v4 & 0xFFFFFFF7;
          if ( v11 != 19 && v10 - 29 > 4 && v10 != 37 && v11 != 35 )
LABEL_12:
            *(v12 + v3 + 684) = 10;
        }
      }
LABEL_13:
      v8 = 0;
      if ( PlayerLoadoutSlotType > 0x2C )
        goto LABEL_14;
      goto LABEL_20;
    }
  }
}


// CDOTAInventoryManager::GenerateBaseItems  (line 726, @0x0000000002e478b0, libserver.so)  // inlines: CHeroBaseItems, CUtlKeyValuePair<int>, Construct<CUtlKeyValuePair<int, CHeroBaseItems>, int>, DOTAItemSystem, DoInsert<int>, DoLookup<int>, Find, FirstHandle, GetSlotIndexBySlotType, Insert, IsValidIndex, Key, NextHandle, Purge, operator(), operator[]
// calls: CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int>::Purge, ItemSystem, DOTAGameManager, CDOTAGameManager::GetHeroDataByHeroID, KeyValues::GetString, CDOTAGameManager::GetHeroIDByName, CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::DoInsertUnconstructed, CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::DoLookup<int>, Warning, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>, operator new (16 total)
// callers: CDOTAInventoryManager::PostInit
// strings: "ItemDef %u claims to be a default item, but that slot was already filled by itemdef %u.\n
// globals: INVALID_STYLE_INDEX
void __fastcall CDOTAInventoryManager::GenerateBaseItems(CDOTAInventoryManager *const this)
{
  CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> >::handle_t *v2; // rcx
  int v3; // edx
  int *v4; // rsi
  int *v5; // rax
  int v6; // r13d
  __int64 v7; // r14
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v8; // rax
  _DWORD *m_elem; // r12
  int v10; // edx
  int *v11; // rcx
  int *v12; // rax
  int v13; // r12d
  __int64 v14; // r13
  int v15; // r14d
  CDOTAGameManager *v16; // rax
  KeyValues *HeroDataByHeroID; // rax
  const char *String; // r14
  CDOTAGameManager *v19; // rax
  int HeroIDByName; // eax
  unsigned __int16 v21; // dx
  __int64 v22; // rdi
  int j; // edx
  __int64 v24; // rsi
  int *v25; // rax
  int v26; // esi
  int v27; // eax
  int *v28; // rdx
  __int64 v29; // r12
  int v30; // r15d
  unsigned int v31; // eax
  unsigned int v32; // r14d
  int inserted; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rsi
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  int *v42; // rdx
  unsigned int v43; // r13d
  int v44; // eax
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *v45; // rcx
  int v46; // r9d
  unsigned int v47; // edx
  int v48; // eax
  __int64 v49; // rdx
  unsigned int v50; // r10d
  CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> >::handle_t *v51; // rcx
  int v52; // r8d
  __int64 v53; // r15
  __int64 v54; // rdi
  __int64 (__fastcall ***v55)(_QWORD); // rax
  unsigned __int16 v56; // ax
  unsigned __int16 v57; // ax
  unsigned __int16 v58; // ax
  item_definition_index_t v59; // ax
  unsigned int v60; // ecx
  unsigned int v61; // edx
  CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> > *v62; // [rsp+18h] [rbp-58h]
  __int64 v63; // [rsp+20h] [rbp-50h]
  int v64; // [rsp+20h] [rbp-50h]
  unsigned int v65; // [rsp+20h] [rbp-50h]
  CEconItemView *pNewItem; // [rsp+28h] [rbp-48h]
  int pNewItema; // [rsp+28h] [rbp-48h]
  int pNewItemb; // [rsp+28h] [rbp-48h]
  CEconItemView *pNewItemc; // [rsp+28h] [rbp-48h]
  int i; // [rsp+34h] [rbp-3Ch]
  CEconItemSystem *v71; // [rsp+38h] [rbp-38h]

  v62 = (this + 80);
  CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::RemoveAll((this + 80));
  if ( (*(this + 23) & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>::Purge(&v62->m_table);
  v3 = *(this + 14);
  v4 = *(this + 6);
  if ( v3 <= 0 )
    goto LABEL_8;
  v5 = v4 + 175;
  v6 = 0;
  if ( *v4 >= 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v29 = 175LL * v6;
      v30 = v4[v29 + 1];
      v31 = 9
          * ((33 * (((4097 * v30 + 2127912214) >> 19) ^ (4097 * v30 + 2127912214) ^ 0xC761C23C) - 369570787)
           ^ ((33 * (((4097 * v30 + 2127912214) >> 19) ^ (4097 * v30 + 2127912214) ^ 0xC761C23C) + 374761393) << 9))
          - 42973499;
      v32 = HIWORD(v31) ^ v31 ^ 0xB55A4F09;
      if ( *(this + 24) != 0 )
      {
        inserted = CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::DoLookup<int>(
                     v62,
                     v30,
                     v32,
                     v2);
        if ( inserted != -1 )
          goto LABEL_41;
      }
      inserted = CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::DoInsertUnconstructed(
                   v62,
                   v32,
                   1);
      v34 = *(this + 10);
      v35 = v34 + 140LL * inserted;
      if ( v35 != -4 )
        break;
LABEL_42:
      v38 = 140LL * inserted;
      v39 = 0;
      while ( 1 )
      {
        v40 = v39++;
        *(v38 + v34 + 8 * v40 + 12) = 0;
        if ( v39 == 16 )
          break;
        v34 = *(this + 10);
      }
      v2 = *(this + 14);
      v41 = v6 + 1;
      v4 = *(this + 6);
      if ( v6 + 1 >= v2 )
        goto LABEL_8;
      if ( v4[v29 + 175] < 0 )
      {
        v42 = &v4[175 * v41 + 175];
        while ( ++v41 != v2 )
        {
          v42 += 175;
          if ( *(v42 - 175) >= 0 )
            goto LABEL_35;
        }
        goto LABEL_8;
      }
LABEL_35:
      v6 = v41;
LABEL_36:
      if ( v6 == -1 )
        goto LABEL_8;
    }
    *(v35 + 4) = v30;
    v36 = 0;
    v37 = v35 + 12;
    do
    {
      *(v37 + v36) = 0;
      v36 += 8;
    }
    while ( v36 != 128 );
LABEL_41:
    v34 = *(this + 10);
    goto LABEL_42;
  }
  while ( ++v6 != v3 )
  {
    v5 += 175;
    if ( *(v5 - 175) >= 0 )
      goto LABEL_36;
  }
LABEL_8:
  v7 = 0;
  i = 0;
  v71 = ItemSystem();
  if ( v71->m_itemSchema.m_mapItems.m_nMaxElement > 0 )
  {
    do
    {
      v8 = &v71->m_itemSchema.m_mapItems.m_memNodes.m_pMemory[v7];
      if ( v8->m_iNextNode >= -1 )
      {
        m_elem = v8->m_elem;
        if ( m_elem != 0 && (*(*m_elem + 112LL))(m_elem) != 0 )
        {
          v43 = 0;
          if ( (*(*m_elem + 72LL))(m_elem) >= 0 )
          {
LABEL_55:
            while ( v43 < (*(*m_elem + 208LL))(m_elem) )
            {
              v44 = (*(*m_elem + 216LL))(m_elem, v43);
              v45 = *(this + 16);
              v46 = v44;
              v47 = 33 * (((4097 * v44 + 2127912214) >> 19) ^ (4097 * v44 + 2127912214) ^ 0xC761C23C);
              v48 = (v47 - 369570787) ^ ((v47 + 374761393) << 9);
              v49 = &loc_2BBFD44;
              v50 = ((9 * v48 - 42973499) >> 16) ^ (9 * v48 - 42973499) ^ 0xB55A4F09;
              if ( v45 != 0 )
              {
                v65 = ((9 * v48 - 42973499) >> 16) ^ (9 * v48 - 42973499) ^ 0xB55A4F09;
                pNewItema = v46;
                v57 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
                        (this + 48),
                        v46,
                        v50,
                        v45);
                v50 = v65;
                v46 = pNewItema;
                v49 = 700LL * v57;
              }
              v51 = 0;
              while ( 1 )
              {
                v52 = v51;
                if ( m_elem[102] == *(*(this + 6) + v49 + 12 + 4LL * v51 + 128) )
                  break;
                v51 = (v51 + 1);
                if ( v51 == &stru_10 )
                {
                  ++v43;
                  goto LABEL_55;
                }
              }
              v53 = 9174900;
              if ( *(this + 24) != 0 )
              {
                pNewItemb = v51;
                v58 = CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::DoLookup<int>(
                        v62,
                        v46,
                        v50,
                        v51);
                v52 = pNewItemb;
                v53 = 140LL * v58;
              }
              v63 = v52;
              pNewItem = (8LL * v52);
              if ( *(&pNewItem->m_iEntityQuality.m_Value + *(this + 10) + v53) != 0 )
              {
                ++v43;
                v64 = (**m_elem)(m_elem);
                v54 = *(&pNewItem->m_iEntityQuality.m_Value + *(this + 10) + v53);
                v55 = (*(*v54 + 96LL))(v54);
                v56 = (**v55)(v55);
                Warning(
                  "ItemDef %u claims to be a default item, but that slot was already filled by itemdef %u.\n",
                  v56,
                  v64);
              }
              else
              {
                pNewItemc = operator new(0xD8u);
                CEconItemView::CEconItemView(pNewItemc);
                ++v43;
                v59.m_Data = (**m_elem)(m_elem);
                CEconItemView::Init(pNewItemc, v59, 9999, 9999, 0, 0, INVALID_STYLE_INDEX);
                *(v53 + *(this + 10) + 8 * v63 + 12) = pNewItemc;
              }
            }
          }
        }
      }
      ++i;
      ++v7;
    }
    while ( v71->m_itemSchema.m_mapItems.m_nMaxElement > i );
  }
  v10 = *(this + 22);
  v11 = *(this + 10);
  if ( v10 > 0 )
  {
    if ( *v11 >= 0 )
    {
      v13 = 0;
      goto LABEL_21;
    }
    v12 = v11 + 35;
    v13 = 0;
    while ( ++v13 != v10 )
    {
      v12 += 35;
      if ( *(v12 - 35) >= 0 )
      {
        while ( v13 != -1 )
        {
LABEL_21:
          v14 = 35LL * v13;
          v15 = v11[v14 + 1];
          v16 = DOTAGameManager();
          HeroDataByHeroID = CDOTAGameManager::GetHeroDataByHeroID(v16, v15);
          if ( HeroDataByHeroID != 0 && (String = KeyValues::GetString(HeroDataByHeroID, "BaseClass", 0, 0, 0)) != 0 )
          {
            v19 = DOTAGameManager();
            HeroIDByName = CDOTAGameManager::GetHeroIDByName(v19, String);
            v21 = -1;
            if ( *(this + 24) != 0 )
            {
              v60 = 33 * (((4097 * HeroIDByName + 2127912214) >> 19) ^ (4097 * HeroIDByName + 2127912214) ^ 0xC761C23C);
              v61 = 9 * ((v60 - 369570787) ^ ((v60 + 374761393) << 9)) - 42973499;
              v21 = CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::DoLookup<int>(
                      v62,
                      HeroIDByName,
                      HIWORD(v61) ^ v61 ^ 0xB55A4F09,
                      HIWORD(v61));
            }
            v11 = *(this + 10);
            v22 = 35LL * v21;
            for ( j = 0; j != 16; ++j )
            {
              while ( 1 )
              {
                v24 = 2LL * j;
                v25 = &v11[v14 + v24];
                if ( *(v25 + 3) == 0 )
                  break;
                if ( ++j == 16 )
                  goto LABEL_29;
              }
              *(v25 + 3) = *&v11[v24 + 3 + v22];
              v11 = *(this + 10);
            }
          }
          else
          {
            v11 = *(this + 10);
          }
LABEL_29:
          v26 = *(this + 22);
          v27 = v13 + 1;
          if ( v13 + 1 >= v26 )
            return;
          if ( v11[v14 + 35] < 0 )
          {
            v28 = &v11[35 * v27 + 35];
            while ( ++v27 != v26 )
            {
              v28 += 35;
              if ( *(v28 - 35) >= 0 )
                goto LABEL_19;
            }
            return;
          }
LABEL_19:
          v13 = v27;
        }
        return;
      }
    }
  }
}


// CDOTAInventoryManager::GetBaseItemForHero  (line 809, @0x0000000002e36d90, libserver.so)  // inlines: DoLookup<int>, Find, operator(), operator[]
// calls: CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::DoLookup<int>
// callers: CSource2Server::GetEconItemsInfoForCharacter, CDOTA_BaseNPC_Hero::BuildWearableSpawnList, CEconItemLoadout::SetItems, CEconItemLoadout::SetItemsFromBaseSet, CDOTAItemSystem::GetDefaultItemForSlot, CDOTAPlayerInventory::GetOverriddenItemInLoadout, CDOTAInventoryManager::GetItemInLoadoutForHero, CDOTAPlayerInventory::GetItemInLoadout, CDOTAPlayerInventory::BuildOwnedLoadoutItemList
CEconItemView *__fastcall CDOTAInventoryManager::GetBaseItemForHero(
        CDOTAInventoryManager *const this,
        int nHeroID,
        int iSlotIndex)
{
  CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> >::handle_t *v3; // rcx
  __int64 v4; // r12
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // eax

  v4 = iSlotIndex;
  if ( iSlotIndex > 0xF )
    return 0;
  if ( *(this + 24) == 0 )
    return 0;
  v7 = 33 * (((4097 * nHeroID + 2127912214) >> 19) ^ (4097 * nHeroID + 2127912214) ^ 0xC761C23C);
  v8 = 9 * ((v7 - 369570787) ^ ((v7 + 374761393) << 9)) - 42973499;
  v9 = CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::DoLookup<int>(
         (this + 80),
         nHeroID,
         HIWORD(v8) ^ v8 ^ 0xB55A4F09,
         v3);
  if ( v9 == -1 )
    return 0;
  else
    return *(*(this + 10) + 140LL * v9 + 8 * v4 + 12);
}


// CDOTAInventoryManager::GetBaseItemByDefIndex  (line 824, @0x0000000002e373e0, libserver.so)  // inlines: DoLookup<int>, Find, GetStaticDataForItemByDefIndex, operator(), operator==
// calls: ItemSystem, CEconItemSchema::GetItemDefinition, CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::DoLookup<int>
CEconItemView *__fastcall CDOTAInventoryManager::GetBaseItemByDefIndex(
        CDOTAInventoryManager *const this,
        int nHeroID,
        item_definition_index_t iDefIndex)
{
  CEconItemSystem *v6; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> >::handle_t *v8; // rcx
  CEconItemView *result; // rax
  unsigned int v10; // edx
  int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi

  v6 = ItemSystem();
  ItemDefinition = CEconItemSchema::GetItemDefinition(&v6->m_itemSchema, iDefIndex, 0);
  if ( ItemDefinition == 0 )
    return 0;
  if ( nHeroID < 0 )
    nHeroID = (*(ItemDefinition->_vptr_IEconItemDefinition + 27))(ItemDefinition, 0);
  if ( *(this + 24) == 0 )
    return 0;
  v10 = 33 * (((4097 * nHeroID + 2127912214) >> 19) ^ (4097 * nHeroID + 2127912214) ^ 0xC761C23C);
  v11 = 9 * ((v10 - 369570787) ^ ((v10 + 374761393) << 9)) - 42973499;
  v12 = CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::DoLookup<int>(
          (this + 80),
          nHeroID,
          HIWORD(v11) ^ v11 ^ 0xB55A4F09,
          v8);
  if ( v12 == -1 )
    return 0;
  v13 = 0;
  v14 = *(this + 10) + 140LL * v12 + 12;
  while ( 1 )
  {
    result = *(v14 + v13);
    if ( result != 0
      && result->m_bInitialized.m_Value
      && result->m_iItemDefinitionIndex.m_Value.m_Data == iDefIndex.m_Data )
    {
      break;
    }
    v13 += 8;
    if ( v13 == 128 )
      return 0;
  }
  return result;
}


// CDOTAInventoryManager::IsDemoingHero  (line 851, @0x0000000002e374f0, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::IsCustomGame_HeroDemoOrWorkshopTest
// callers: CDOTA_BaseNPC::OnSpawnWearable, CDOTAPlayerInventory::GetOverriddenItemInLoadout, UseEconItem
bool __fastcall CDOTAInventoryManager::IsDemoingHero(const CDOTAInventoryManager *const this, int nHeroID)
{
  if ( g_pGameRules == 0 )
    return 0;
  if ( CDOTAGamerules::IsCustomGame_HeroDemoOrWorkshopTest() )
    return *(this + 28) == nHeroID;
  return 0;
}


// CDOTAInventoryManager::SetUpDemoHeroItems  (line 856, @0x0000000002e3c540, libserver.so)  // inlines: DoLookup<int>, Find, GetItemSlotsForHero, GetSlotIndexBySlotType, GetStyleCount, operator(), operator[]
// calls: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>, CDOTA_PlayerResource::GetSteamID, GCClientSystem, GCSDK::CGCClient::FindSOCache, CInventoryManager::FindItemInSOCache, CUtlVectorBase<itemid_t, CUtlMemory<itemid_t, int> >::RemoveAll, CEconItemView::Init
// callers: CDOTAInventoryManager::GetHeroDemoModeItemForHero, CDOTAInventoryManager::FindDemoItemForNetworkedItem, CDOTAPlayerInventory::GetOverriddenItemInLoadout, UseEconItem
// globals: INVALID_STYLE_INDEX
void __fastcall CDOTAInventoryManager::SetUpDemoHeroItems(CDOTAInventoryManager *const this)
{
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *v1; // rcx
  int v3; // ebx
  int v4; // esi
  unsigned int v5; // edx
  unsigned int v6; // edx
  int v7; // eax
  int *v8; // r14
  GCSDK::SOID_t::ID_t SteamID; // r12
  CGCClientSystem *v10; // rax
  GCSDK::CGCClientSharedObjectCache *SOCache; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  CEconItem *ItemInSOCache; // rax
  CEconItem *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // rax
  int v20; // eax
  int v21; // edx
  __int64 v22; // [rsp+8h] [rbp-38h]
  GCSDK::SOID_t v23; // 0:rsi.8,8:rdx.8

  v3 = *(this + 896);
  if ( v3 != 0 )
  {
    v4 = *(this + 28);
    if ( stru_4D583D0.m_nUsed != 0 )
    {
      v5 = 33 * (((4097 * v4 + 2127912214) >> 19) ^ (4097 * v4 + 2127912214) ^ 0xC761C23C);
      v6 = 9 * ((v5 - 369570787) ^ ((v5 + 374761393) << 9)) - 42973499;
      v7 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
             &stru_4D583D0,
             v4,
             HIWORD(v6) ^ v6 ^ 0xB55A4F09,
             v1);
      if ( v7 != -1 )
      {
        v8 = &stru_4D583D0.m_table.m_pMemory[v7].data[2];
        if ( &stru_4D583D0.m_table.m_pMemory[v7] != -12LL && g_pDOTAPlayerResource != 0 )
        {
          SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, *(this + 29));
          v10 = GCClientSystem();
          v23.m_id = SteamID;
          *&v23.m_type = 1;
          SOCache = GCSDK::CGCClient::FindSOCache((v10 + 24), v23);
          if ( SOCache != 0 )
          {
            if ( v3 > 0 )
            {
              v12 = 8LL * (v3 - 1) + 8;
              v13 = 0;
              v22 = v12;
              do
              {
                while ( 1 )
                {
                  ItemInSOCache = CInventoryManager::FindItemInSOCache(SOCache, *(*(this + 449) + v13));
                  v15 = ItemInSOCache;
                  if ( ItemInSOCache != 0 )
                    break;
LABEL_14:
                  v13 += 8;
                  if ( v13 == v22 )
                    goto LABEL_15;
                }
                v16 = (*(ItemInSOCache->_vptr_CSharedObject + 10))(ItemInSOCache);
                v17 = 0;
                while ( 1 )
                {
                  v18 = v17;
                  if ( *(v16 + 408) == v8[v17 + 32] )
                    break;
                  if ( ++v17 == 16 )
                    goto LABEL_14;
                }
                v19 = *(*(v16 + 176) + 64LL);
                if ( v19 != 0 )
                  v20 = *v19 - (*v19 > 0);
                else
                  v20 = 0;
                v21 = *(this + 120);
                if ( INVALID_STYLE_INDEX.m_Data != v21 && v20 <= v21 )
                  LOBYTE(v21) = v20;
                v13 += 8;
                *(this + v18 + 3608) = 1;
                CEconItemView::Init((this + 216 * v18 + 128), v15, v21);
              }
              while ( v13 != v22 );
            }
LABEL_15:
            CUtlVectorBase<itemid_t,CUtlMemory<itemid_t,int>>::RemoveAll((this + 3584));
          }
        }
      }
    }
  }
}


// CDOTAInventoryManager::GetHeroDemoModeItemForHero  (line 909, @0x0000000002e3c720, libserver.so)
// calls: CDOTAInventoryManager::SetUpDemoHeroItems
CEconItemView *__fastcall CDOTAInventoryManager::GetHeroDemoModeItemForHero(
        CDOTAInventoryManager *const this,
        int nHeroID,
        int iSlotIndex)
{
  CEconItemView *result; // rax

  CDOTAInventoryManager::SetUpDemoHeroItems(this);
  result = 0;
  if ( *(this + 28) == nHeroID && *(this + iSlotIndex + 3608) != 0 )
    return (this + 216 * iSlotIndex + 128);
  return result;
}


// CDOTAInventoryManager::SetHeroDemoModeItems  (line 922, @0x0000000002e435b0, libserver.so)  // inlines: AddToTail, CopyConstruct<itemid_t>, DoLookup<int>, Element, Find, GetItemSlotsForHero, GetSlotIndexBySlotType, GetStaticDataForItemByDefIndex, GetStyleCount, GrowMemory, V_memset, memset, operator(), operator[]
// calls: CUtlVectorBase<itemid_t, CUtlMemory<itemid_t, int> >::RemoveAll, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>, ItemSystem, CEconItemSchema::GetItemDefinition, CEconItemView::Init, CUtlMemory<itemid_t, int>::Grow
// callers: CDOTAGamerules::OnDemoHero
// globals: INVALID_ITEM_DEF_INDEX, INVALID_STYLE_INDEX
void __fastcall CDOTAInventoryManager::SetHeroDemoModeItems(
        CDOTAInventoryManager *const this,
        int nPlayerID,
        int nHeroID,
        style_index_t nStyleIndex,
        int nItemDefIndexCount,
        const item_definition_index_t *pItemDefIndices,
        int nItemIDCount,
        const itemid_t *pItemIDs)
{
  CUtlVectorBase<itemid_t,CUtlMemory<itemid_t,int> > *v9; // rdi
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // edx
  int v16; // eax
  int *v17; // r12
  const item_definition_index_t *v18; // r13
  uint16 m_Data; // r15
  CEconItemSystem *v20; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  const itemid_t *v24; // rbx
  const itemid_t *v25; // rdx
  uint64 v26; // r12
  __int64 v27; // r13
  int v28; // eax
  uint64 *v29; // rax
  CUtlVector<CEconStyleInfo*,CUtlMemory<CEconStyleInfo*,int> > *m_pStyles; // rax
  int v31; // eax
  int unStyleOverride; // edx
  const itemid_t *v33; // [rsp+8h] [rbp-38h]

  v9 = (this + 3584);
  *(this + 28) = nHeroID;
  HIDWORD(v9[-145].m_Memory.m_pMemory) = nPlayerID;
  LOBYTE(v9[-145].m_Memory.m_nAllocationCount) = nStyleIndex;
  *&v9[1].m_Size = 0;
  v9[1].m_Memory.m_pMemory = 0;
  CUtlVectorBase<itemid_t,CUtlMemory<itemid_t,int>>::RemoveAll(v9);
  if ( stru_4D583D0.m_nUsed != 0 )
  {
    v14 = 33 * (((4097 * nHeroID + 2127912214) >> 19) ^ (4097 * nHeroID + 2127912214) ^ 0xC761C23C);
    v15 = 9 * ((v14 - 369570787) ^ ((v14 + 374761393) << 9)) - 42973499;
    v16 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
            &stru_4D583D0,
            nHeroID,
            HIWORD(v15) ^ v15 ^ 0xB55A4F09,
            v13);
    if ( v16 != -1 )
    {
      v17 = &stru_4D583D0.m_table.m_pMemory[v16].data[2];
      if ( &stru_4D583D0.m_table.m_pMemory[v16] != -12LL )
      {
        if ( nItemDefIndexCount > 0 )
        {
          v18 = &pItemDefIndices[nItemDefIndexCount - 1 + 1];
          do
          {
            while ( 1 )
            {
              m_Data = pItemDefIndices->m_Data;
              if ( pItemDefIndices->m_Data != INVALID_ITEM_DEF_INDEX.m_Data )
              {
                v20 = ItemSystem();
                ItemDefinition = CEconItemSchema::GetItemDefinition(&v20->m_itemSchema, m_Data, 0);
                if ( ItemDefinition != 0 )
                  break;
              }
LABEL_12:
              if ( ++pItemDefIndices == v18 )
                goto LABEL_13;
            }
            v22 = 0;
            while ( 1 )
            {
              v23 = v22;
              if ( LODWORD(ItemDefinition[1].m_pKVItem) == v17[v22 + 32] )
                break;
              if ( ++v22 == 16 )
                goto LABEL_12;
            }
            m_pStyles = ItemDefinition->m_pAssetInfo->m_pStyles;
            if ( m_pStyles != 0 )
              v31 = m_pStyles->m_Size - (m_pStyles->m_Size > 0);
            else
              v31 = 0;
            unStyleOverride = *(this + 120);
            if ( unStyleOverride != INVALID_STYLE_INDEX.m_Data && v31 <= unStyleOverride )
              LOBYTE(unStyleOverride) = v31;
            ++pItemDefIndices;
            *(this + v23 + 3608) = 1;
            CEconItemView::Init((this + 216 * v23 + 128), m_Data, 9999, 9999, 0, 0, unStyleOverride);
          }
          while ( pItemDefIndices != v18 );
        }
LABEL_13:
        if ( nItemIDCount > 0 )
        {
          v24 = pItemIDs;
          v25 = &pItemIDs[(nItemIDCount - 1) + 1];
          do
          {
            v26 = v24->m_Data;
            if ( v24->m_Data != 0 )
            {
              v27 = *(this + 896);
              v28 = *(this + 896);
              if ( v27 == *(this + 900) )
              {
                v33 = v25;
                CUtlMemory<itemid_t,int>::Grow((this + 3592), 1);
                v28 = *(this + 896);
                v25 = v33;
              }
              *(this + 896) = v28 + 1;
              v29 = (*(this + 449) + 8 * v27);
              if ( v29 != 0 )
                *v29 = v26;
            }
            ++v24;
          }
          while ( v24 != v25 );
        }
      }
    }
  }
}


// CDOTAInventoryManager::FindDemoItemForNetworkedItem  (line 977, @0x0000000002e3c770, libserver.so)
// calls: CDOTAInventoryManager::SetUpDemoHeroItems
CEconItemView *__fastcall CDOTAInventoryManager::FindDemoItemForNetworkedItem(
        CDOTAInventoryManager *const this,
        CEconItemView *pNetworkedItem)
{
  int (**vptr_IEconItemInterface)(...); // rax
  CEconItemView *v5; // rdi
  CEconItemView *v6; // r12
  __int64 v7; // rbx
  __int64 (__fastcall ***v8)(_QWORD); // rax
  __int16 v9; // r14
  unsigned __int16 (__fastcall ***v10)(_QWORD); // rax

  if ( pNetworkedItem == 0 )
    return 0;
  CDOTAInventoryManager::SetUpDemoHeroItems(this);
  vptr_IEconItemInterface = pNetworkedItem->_vptr_IEconItemInterface;
  v5 = pNetworkedItem;
  v6 = (this + 128);
  v7 = 0;
  v8 = (vptr_IEconItemInterface[12])(v5);
  v9 = (**v8)(v8);
  while ( 1 )
  {
    if ( *(this + v7 + 3608) != 0 )
    {
      v10 = (*(v6->_vptr_IEconItemInterface + 12))(v6);
      if ( (**v10)(v10) == v9 )
        break;
    }
    ++v7;
    ++v6;
    if ( v7 == 16 )
      return 0;
  }
  return v6;
}


// CDOTAInventoryManager::GetItemInLoadoutForHero  (line 1004, @0x0000000002e3c9a0, libserver.so)
// calls: CDOTAInventoryManager::GetInventoryForPlayerID, CDOTAPlayerInventory::GetOverriddenItemInLoadout, CDOTAInventoryManager::GetBaseItemForHero
// callers: CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType
CEconItemView *__fastcall CDOTAInventoryManager::GetItemInLoadoutForHero(
        CDOTAInventoryManager *const this,
        int nHeroID,
        int iSlotIndex,
        int *pPlayerID)
{
  CDOTAPlayerInventory *InventoryForPlayerID; // rax
  CEconItemView *result; // rax

  if ( pPlayerID != 0 )
  {
    InventoryForPlayerID = CDOTAInventoryManager::GetInventoryForPlayerID(this, *pPlayerID, 1);
    if ( InventoryForPlayerID != 0 )
      return (*(InventoryForPlayerID->_vptr_ISharedObjectListener + 9))(InventoryForPlayerID, nHeroID, iSlotIndex);
  }
  result = CDOTAPlayerInventory::GetOverriddenItemInLoadout(nHeroID, iSlotIndex, 0);
  if ( result == 0 )
    return CDOTAInventoryManager::GetBaseItemForHero(this, nHeroID, iSlotIndex);
  return result;
}


// CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType  (line 1036, @0x0000000002e3ca30, libserver.so)  // inlines: DoLookup<int>, Find, GetItemSlotsForHero, GetSlotIndexBySlotType, operator(), operator[]
// calls: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>, CDOTAInventoryManager::GetItemInLoadoutForHero
// callers: TournamentItemEvent, CDOTAGamerules::SetGameWinner, EconEntity_OnOwnerKillEaterEvent, CDOTAGamerules::StartCreateHeroStatues, CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue, CDOTA_BaseNPC_Hero::ValidateEconItems, CDOTA_BaseNPC_Hero::CacheTogglableWearable, CDOTA_BaseNPC_Hero::GetGreevil, CDOTA_BaseNPC_Hero::CheckForCourierOrWardChange, CDOTA_BaseNPC_Hero::UpdateSharedEconItemSlots, CDOTA_BaseNPC_Hero::BuildWearableSpawnList, CDOTA_BaseNPC_Hero::UpdateActionItemSlot (18 total)
CEconItemView *__fastcall CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(
        CDOTAInventoryManager *const this,
        int nHeroID,
        int iSlotType,
        int *pPlayerID)
{
  unsigned int v8; // edx
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax

  if ( *(this + 16) == 0 )
    return 0;
  v8 = 33 * (((4097 * nHeroID + 2127912214) >> 19) ^ (4097 * nHeroID + 2127912214) ^ 0xC761C23C);
  v9 = 9 * ((v8 - 369570787) ^ ((v8 + 374761393) << 9)) - 42973499;
  v10 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
          (this + 48),
          nHeroID,
          HIWORD(v9) ^ v9 ^ 0xB55A4F09,
          pPlayerID);
  if ( v10 == -1 )
    return 0;
  v11 = *(this + 6) + 700LL * v10 + 12;
  if ( *(this + 6) + 700LL * v10 == -12 )
    return 0;
  v12 = 0;
  while ( iSlotType != *(v11 + 4 * v12 + 128) )
  {
    if ( ++v12 == 16 )
      return 0;
  }
  return CDOTAInventoryManager::GetItemInLoadoutForHero(this, nHeroID, v12, pPlayerID);
}


// CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotName  (line 1053, @0x0000000002e3cb10, libserver.so)  // inlines: GetDOTASlotType, _V_strcmp
// calls: DOTAGameManager, CDOTAGameManager::GetHeroIDByName, strcmp, CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType
// globals: GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings
CEconItemView *__fastcall CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotName(
        CDOTAInventoryManager *const this,
        const char *pszHeroName,
        const char *pszSlotName,
        int *pPlayerID)
{
  CDOTAGameManager *v7; // rax
  int HeroIDByName; // r14d
  __int64 v9; // rbx
  int v10; // edx

  v7 = DOTAGameManager();
  HeroIDByName = CDOTAGameManager::GetHeroIDByName(v7, pszHeroName);
  if ( pszSlotName != 0 )
  {
    v9 = 0;
    while ( strcmp(*(&GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings + v9), pszSlotName) != 0 )
    {
      if ( ++v9 == 45 )
        goto LABEL_7;
    }
    v10 = v9;
  }
  else
  {
LABEL_7:
    v10 = -1;
  }
  return CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(this, HeroIDByName, v10, pPlayerID);
}


// CDOTAInventoryManager::GetInventoryForPlayerID  (line 1065, @0x0000000002e37540, libserver.so)
// calls: CDOTA_PlayerResource::GetSteamAccountID
// callers: CDOTABaseAbility::CastAbility, CDOTAGamerules::ClientMsg_FreeInventory, EconEntity_OnOwnerKillEaterEvent, CDOTAGamerules::FinalizeHeroSelections, CDOTA_BaseNPC_HallofFame::FindPlayersWithGlowEnabled, CDOTA_BaseNPC_Hero::BuildWearableSpawnList, CDOTA_BaseNPC_Hero::PerformAutoTaunt, UseEconItemID, CDOTAInventoryManager::GetItemInLoadoutForHero
CDOTAPlayerInventory *__fastcall CDOTAInventoryManager::GetInventoryForPlayerID(
        CDOTAInventoryManager *const this,
        int nPlayerID,
        bool bPreferLocalInventory)
{
  AccountID_t SteamAccountID; // eax

  if ( nPlayerID < 0 )
    return 0;
  SteamAccountID = CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, nPlayerID);
  return (*(*this + 320LL))(this, SteamAccountID, bPreferLocalInventory);
}


// CDOTAInventoryManager::DetermineSocketTypeForItem  (line 1077, @0x0000000002e37600, libserver.so)  // inlines: CSocketIterator, CSocketPair
// calls: CSocketIterator::GetSocket
// callers: AddItemToLoadoutList
// globals: INVALID_ITEM_DEF_INDEX
ItemSocketType_t __fastcall CDOTAInventoryManager::DetermineSocketTypeForItem(
        CDOTAInventoryManager *const this,
        CEconItemView *pEconItemView)
{
  CSocketIterator *m_Sockets; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  int v5; // r12d
  ItemSocketType_t v6; // r14
  IItemSocket *Socket; // rax
  IItemSocket *v8; // rbx
  CSocketIterator socketIterator; // [rsp+0h] [rbp-F0h] BYREF

  if ( pEconItemView == 0 )
    return ItemSocketType_t::ITEM_HAS_NO_SOCKETS;
  if ( (*((*(pEconItemView->_vptr_IEconItemInterface + 12))(pEconItemView) + 39) & 1) != 0 )
    return ItemSocketType_t::ITEM_HAS_NO_SOCKETS;
  socketIterator._vptr_IEconItemAttributeIterator = off_47A8B30;
  m_Sockets = socketIterator.m_Sockets;
  do
  {
    m_Sockets->_vptr_IEconItemAttributeIterator = 0;
    m_Sockets = (m_Sockets + 16);
    *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
  }
  while ( m_Sockets != &socketIterator.m_nSocketCount );
  vptr_IEconItemInterface = pEconItemView->_vptr_IEconItemInterface;
  socketIterator.m_nSocketCount = 0;
  socketIterator.m_nGemCount = 0;
  socketIterator.m_unAttribStorageTypeFlags = 1;
  vptr_IEconItemInterface[28](pEconItemView, &socketIterator, &socketIterator.m_nSocketCount);
  if ( socketIterator.m_nSocketCount <= 0 )
    return ItemSocketType_t::ITEM_HAS_NO_SOCKETS;
  v5 = 0;
  v6 = ItemSocketType_t::ITEM_HAS_NO_SOCKETS;
  do
  {
    Socket = CSocketIterator::GetSocket(&socketIterator, v5);
    v8 = Socket;
    if ( Socket != 0 && (*(Socket->_vptr_IItemSocket + 27))(Socket) == 0 )
    {
      if ( v6 == ItemSocketType_t::ITEM_HAS_NO_SOCKETS )
        v6 = ItemSocketType_t::ITEM_HAS_ONLY_EMPTY_SOCKETS;
      if ( INVALID_ITEM_DEF_INDEX.m_Data != (*(v8->_vptr_IItemSocket + 21))(v8) )
      {
        if ( (*(v8->_vptr_IItemSocket + 20))(v8) == 1 || (*(v8->_vptr_IItemSocket + 20))(v8) == 2 )
          return ItemSocketType_t::ITEM_HAS_RARE_GEMS;
        v6 = ItemSocketType_t::ITEM_HAS_ONLY_COMMON_GEMS;
      }
    }
    ++v5;
  }
  while ( socketIterator.m_nSocketCount > v5 );
  return v6;
}


// CDOTAPlayerInventory::CDOTAPlayerInventory  (line 2200, @0x0000000002e43810, libserver.so)  // inlines: CLoadoutSlotShuffle, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, ResetDbgInfo, SetLessContext, SetLessFunc
// calls: CPlayerInventory::CPlayerInventory
// callers: CDOTAInventoryManager::GeneratePlayerInventoryObject
// globals: CDefOps<int>::LessFunc(int const&,int const&)
void __fastcall CDOTAPlayerInventory::CDOTAPlayerInventory(CDOTAPlayerInventory *const this)
{
  CUtlVectorBase<itemid_t,CUtlMemory<itemid_t,int> >::CAllocator *p_m_Memory; // rcx
  CDOTAPlayerInventory *v3; // rax
  CDOTAPlayerInventory *v4; // rdx
  signed __int64 v5; // rdx
  bool v6; // zf

  CPlayerInventory::CPlayerInventory(this);
  this->_vptr_ISharedObjectListener = &off_47A0650;
  this->m_FreeLoadoutItems.m_Tree.m_FirstFree = -1;
  p_m_Memory = &this->m_ShuffledPlayerLoadoutSlots.m_randomizeLoadoutSlot[0].m_Memory;
  this->m_LoadoutItems.m_Tree.m_Root = -1;
  this->m_LoadoutItems.m_Tree.m_NumElements = 0;
  this->m_FreeLoadoutItems.m_Tree.m_LastAlloc.index = -1;
  v3 = &this->m_ShuffledPlayerLoadoutSlots.m_randomizeLoadoutSlot[0].m_Memory;
  this->m_LoadoutItems.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_LoadoutItems.m_Tree.m_Elements.m_pMemory = 0;
  this->m_LoadoutItems.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_LoadoutItems.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_LoadoutItems.m_Tree.m_FirstFree = -1;
  this->m_LoadoutItems.m_Tree.m_LastAlloc.index = -1;
  this->m_LoadoutItems.m_Tree.m_pElements = 0;
  this->m_FreeLoadoutItems.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_FreeLoadoutItems.m_Tree.m_Elements.m_pMemory = 0;
  this->m_FreeLoadoutItems.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_FreeLoadoutItems.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_FreeLoadoutItems.m_Tree.m_Root = -1;
  this->m_FreeLoadoutItems.m_Tree.m_NumElements = 0;
  this->m_FreeLoadoutItems.m_Tree.m_pElements = 0;
  do
  {
    v3[-1].m_ShuffledPlayerLoadoutSlots.m_randomizeLoadoutSlot[15].m_Memory.m_nAllocationCount = 0;
    v4 = v3;
    v3 = (v3 + 24);
    v5 = v4 - &this->m_ShuffledPlayerLoadoutSlots;
    *(p_m_Memory + v5 - 8) = 0;
    *(&p_m_Memory->m_pMemory + v5) = 0;
    *(&p_m_Memory->m_pMemory + v5 + 4) = 0;
  }
  while ( v3 != (this + 560) );
  v6 = this->m_LoadoutItems.m_Tree.m_LessFunc.m_LessFunc == 0;
  this->m_aInventoryItems.m_pLessContext = this;
  if ( v6 )
    this->m_LoadoutItems.m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
  if ( this->m_FreeLoadoutItems.m_Tree.m_LessFunc.m_LessFunc == 0 )
    this->m_FreeLoadoutItems.m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
}


// CDOTAPlayerInventory::IsLoadoutValid  (line 2216, @0x0000000002e37760, libserver.so)
bool __fastcall CDOTAPlayerInventory::IsLoadoutValid(CDOTAPlayerInventory *const this)
{
  GCSDK::CGCClientSharedObjectCache *m_pSOCache; // rax

  m_pSOCache = this->m_pSOCache;
  return m_pSOCache != 0 && m_pSOCache->m_bInitialized;
}


// CDOTAPlayerInventory::UpdateFreeItemListForHero  (line 2228, @0x0000000002e37780, libserver.so)
void __fastcall CDOTAPlayerInventory::UpdateFreeItemListForHero(
        CDOTAPlayerInventory *const this,
        item_definition_index_t unItemDef,
        int nHeroID,
        int iSlotIndex)
{
  ;
}


// ComputePackagingFlagsForHero  (line 2242, @0x0000000002e3e680, libserver.so)  // inlines: CSchemaFieldHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<rolled_item_defs_t>, Element, Get, GetSlotIndexBySlotType, GetTypedRef, IsLoadingScreen, Purge, RemoveAll, _V_strcmp, operator const CEconItemAttributeDefinition*, operator[], ~CCopyableUtlVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~rolled_item_defs_t
// calls: __cxa_guard_acquire, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, FindAttribute_UnsafeBitwiseCast<CAttribute_String, char const*, CDOTAItemDefinition>, GetItemSchema, CEconItemSchema::GetLootListByName, __dynamic_cast, CUtlMemory<const CEconLootListDefinition*, int>::Purge, CUtlMemory<rolled_item_defs_t, int>::Purge, CEconItemDefinition::HasHeroID, __cxa_guard_release, __cxa_atexit (15 total)
// callers: AddItemToLoadoutList
// strings: "treasure_chest", "treasure loot list"
// globals: `guard variable for'ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList, ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList, `typeinfo for'CDOTAItemDefinition, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
int __fastcall ComputePackagingFlagsForHero(
        int nHeroID,
        CDOTAHeroSlots *pHeroSlots,
        const GameItemDefinition_t *pItemDef)
{
  const char *v6; // rax
  CEconItemSchema *v7; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  uint32 v9; // r12d
  const char *m_szName; // r15
  CEconItemSchema *v11; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  int v13; // r12d
  bundleinfo_t *m_BundleInfo; // rcx
  __int64 v16; // r15
  int v17; // ebx
  const GameItemDefinition_t *v18; // rdx
  int v19; // eax
  const char *v20; // rbx
  GameItemSchema_t *ItemSchema; // rax
  const CEconLootListDefinition *LootListByName; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // r15
  const GameItemDefinition_t *v25; // rdx
  const CEconItemDefinition *m_pItemDef; // rdi
  int m_Size; // r13d
  __int64 i; // r14
  CUtlMemory<const CEconLootListDefinition*,int> *v29; // rbx
  bool v30; // zf
  __int64 v31; // rax
  CEconItemSchema *v32; // rax
  uint32 m_unResetCount; // eax
  CUtlVectorBase<rolled_item_defs_t,CUtlMemory<rolled_item_defs_t,int> > *v34; // [rsp+8h] [rbp-68h]
  const char *pszLootList; // [rsp+18h] [rbp-58h] BYREF
  CUtlVector<rolled_item_defs_t,CUtlMemory<rolled_item_defs_t,int> > vecItems; // [rsp+20h] [rbp-50h] BYREF

  v6 = (*(pItemDef->_vptr_IEconItemDefinition + 1))(pItemDef);
  if ( v6 != 0 && strcmp(v6, "treasure_chest") == 0 )
  {
    if ( `guard variable for'ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList == 0
      && __cxa_guard_acquire(&`guard variable for'ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList) != 0 )
    {
      ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList.m_szName = "treasure loot list";
      v32 = GEconItemSchema();
      ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v32, "treasure loot list");
      m_unResetCount = GEconItemSchema()->m_unResetCount;
      ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList.m_bDestructName = 0;
      ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList.m_unSchemaGeneration = m_unResetCount;
      __cxa_guard_release(&`guard variable for'ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList);
      __cxa_atexit(
        CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
        &ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList,
        &_dso_handle);
    }
    if ( ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList.m_szName != 0 )
    {
      v7 = GEconItemSchema();
      m_pRef = ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList.m_pRef;
      v9 = v7->m_unResetCount;
      if ( v9 != ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList.m_unSchemaGeneration )
      {
        m_szName = ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList.m_szName;
        v11 = GEconItemSchema();
        AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v11, m_szName);
        ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList.m_unSchemaGeneration = v9;
        m_pRef = AttributeDefinitionByName;
        ComputePackagingFlagsForHero(int,CDOTAHeroSlots *,CDOTAItemDefinition const*)::pAttrDef_TreasureLootList.m_pRef = AttributeDefinitionByName;
      }
    }
    else
    {
      m_pRef = 0;
    }
    if ( FindAttribute_UnsafeBitwiseCast<CAttribute_String,char const*,CDOTAItemDefinition>(
           pItemDef,
           m_pRef,
           &pszLootList) )
    {
      v20 = pszLootList;
      ItemSchema = GetItemSchema();
      LootListByName = CEconItemSchema::GetLootListByName(ItemSchema, v20, 0);
      if ( LootListByName != 0 )
      {
        vecItems.m_Size = 0;
        vecItems.m_Memory.m_pMemory = 0;
        vecItems.m_Memory.m_nAllocationCount = 0;
        vecItems.m_Memory.m_nGrowSize = 0;
        (*(LootListByName->_vptr_IEconLootListDefinition + 23))(LootListByName, &vecItems, 1);
        if ( vecItems.m_Size <= 0 )
        {
          m_Size = vecItems.m_Size;
          v13 = 0;
        }
        else
        {
          v23 = 0;
          v13 = 0;
          v24 = 16 * (3LL * (vecItems.m_Size - 1) + 3);
          do
          {
            m_pItemDef = vecItems.m_Memory.m_pMemory[v23 / 0x30].m_pItemDef;
            if ( m_pItemDef != 0 )
              v25 = __dynamic_cast(
                      m_pItemDef,
                      &`typeinfo for'CEconItemDefinition,
                      &`typeinfo for'CDOTAItemDefinition,
                      0);
            else
              v25 = 0;
            v23 += 48LL;
            v13 |= ComputePackagingFlagsForHero(nHeroID, pHeroSlots, v25);
          }
          while ( v23 != v24 );
          m_Size = vecItems.m_Size;
        }
        for ( i = 48LL * m_Size - 48; --m_Size >= 0; i -= 48 )
        {
          v29 = (vecItems.m_Memory.m_pMemory + i);
          v30 = (*(&vecItems.m_Memory.m_pMemory->m_vecAffectingLootLists.m_Memory.m_nGrowSize + i) & 0xC0000000) == 0;
          *(&vecItems.m_Memory.m_pMemory->m_vecAffectingLootLists.m_Size + i) = 0;
          if ( v30 )
          {
            CUtlMemory<CEconLootListDefinition const*,int>::Purge(v29 + 2);
            if ( (v29[2].m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CEconLootListDefinition const*,int>::Purge(v29 + 2);
          }
        }
        vecItems.m_Size = 0;
        if ( (vecItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<rolled_item_defs_t,int>::Purge(&vecItems.m_Memory);
          if ( (vecItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<rolled_item_defs_t,int>::Purge(&vecItems.m_Memory);
        }
        return v13;
      }
    }
    return 0;
  }
  if ( (*(pItemDef->_vptr_IEconItemDefinition + 16))(pItemDef) != 0 )
  {
    m_BundleInfo = pItemDef->m_BundleInfo;
    if ( m_BundleInfo != 0 && m_BundleInfo->vecItemDefs.m_Size > 0 )
    {
      v16 = 0;
      v17 = 0;
      v13 = 0;
      do
      {
        v34 = m_BundleInfo;
        ++v17;
        v18 = m_BundleInfo->vecItemDefs.m_Memory.m_pMemory[v16++];
        v19 = ComputePackagingFlagsForHero(nHeroID, pHeroSlots, v18);
        m_BundleInfo = v34;
        v13 |= v19;
      }
      while ( v34->m_Size > v17 );
      return v13;
    }
    return 0;
  }
  v13 = *(pItemDef + 528) >> 7;
  if ( pHeroSlots != 0 )
  {
    if ( CEconItemDefinition::HasHeroID(pItemDef, nHeroID) )
      v13 |= 2u;
    v31 = 0;
    while ( pItemDef->m_nSlotType != pHeroSlots->m_nSlotTypes[v31] )
    {
      if ( ++v31 == 16 )
        return v13 | 2;
    }
  }
  return v13;
}


// CDOTAInventoryManager::HasTeamSpecificViews  (line 2345, @0x0000000002e41b20, libserver.so)  // inlines: GetModelName, GetModifier
// calls: FindAssetModifier<CEconItemDefinition, CCourierModifier>, FindAssetModifier<CEconItemDefinition, CCourierFlyingModifier>, CUtlString::Get, V_stricmp_fast
// callers: AddItemToLoadoutList
bool __fastcall CDOTAInventoryManager::HasTeamSpecificViews(
        CDOTAInventoryManager *const this,
        const GameItemDefinition_t *pItemDef)
{
  bool v2; // r12
  const CCourierModifier *Asset; // r12
  const CCourierModifier *v5; // rax
  bool v6; // r14
  const CCourierFlyingModifier *v7; // r13
  const CCourierFlyingModifier *v8; // rax
  bool v9; // r12
  const char *v11; // r13
  const char *v12; // rax
  const char *v13; // rbx
  const char *v14; // rax

  v2 = 1;
  if ( pItemDef->m_nSlotType == 37 )
    return v2;
  Asset = FindAssetModifier<CEconItemDefinition,CCourierModifier>(pItemDef, "radiant");
  v5 = FindAssetModifier<CEconItemDefinition,CCourierModifier>(pItemDef, "dire");
  if ( v5 != 0 && Asset != 0 )
  {
    v11 = CUtlString::Get(&v5->m_strModifier);
    v12 = CUtlString::Get(&Asset->m_strModifier);
    v6 = V_stricmp_fast(v12, v11) != 0;
  }
  else
  {
    v6 = 0;
  }
  v7 = FindAssetModifier<CEconItemDefinition,CCourierFlyingModifier>(pItemDef, "radiant");
  v8 = FindAssetModifier<CEconItemDefinition,CCourierFlyingModifier>(pItemDef, "dire");
  v9 = v7 != 0 && v8 != 0;
  if ( !v9 )
    return v6;
  v13 = CUtlString::Get(&v8->m_strModifier);
  v14 = CUtlString::Get(&v7->m_strModifier);
  if ( V_stricmp_fast(v14, v13) == 0 )
    return v6;
  return v9;
}


// ComputeItemCountInSetWithNoSpecialPreview  (line 2375, @0x0000000002e34580, libserver.so)  // inlines: DoesSlotHaveSpecialLoadoutPreview, GetGeneratedUnitCount, GetSlotIndexBySlotType, GetSlotLoadoutPreviewMode
// calls: GetItemSchema, CEconItemSchema::GetItemDefinition, __dynamic_cast
// callers: CDOTAPlayerInventory::GetItemSetForLoadoutItems, AddItemToLoadoutList
// globals: `typeinfo for'CDOTAItemDefinition
int __fastcall ComputeItemCountInSetWithNoSpecialPreview(
        CDOTAHeroSlots *pHeroSlots,
        const IEconItemSetDefinition *pSet)
{
  int v4; // r13d
  unsigned int i; // ebx
  item_definition_index_t v6; // r14
  GameItemSchema_t *ItemSchema; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  _DWORD *v9; // rax
  int v10; // ecx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rsi
  HeroSlotLoadoutPreviewMode_t v15; // dl
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *v16; // rdx
  int nResult; // [rsp+Ch] [rbp-34h]

  nResult = 0;
  v4 = (*(pSet->_vptr_IEconItemSetDefinition + 4))(pSet);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      while ( 1 )
      {
        v6.m_Data = (*(pSet->_vptr_IEconItemSetDefinition + 5))(pSet, i);
        ItemSchema = GetItemSchema();
        ItemDefinition = CEconItemSchema::GetItemDefinition(ItemSchema, v6, 0);
        if ( ItemDefinition == 0 )
          goto LABEL_8;
        v9 = __dynamic_cast(ItemDefinition, &`typeinfo for'CEconItemDefinition, &`typeinfo for'CDOTAItemDefinition, 0);
        if ( v9 != 0 )
        {
          v10 = v9[102];
          v11 = 0;
          while ( 1 )
          {
            v12 = pHeroSlots->m_nSlotTypes[v11];
            v13 = v11;
            if ( v10 == v12 )
              break;
            if ( ++v11 == 16 )
              goto LABEL_8;
          }
          v15 = pHeroSlots->m_nLoadoutPreviewMode[v11];
          if ( v15 != HeroSlotLoadoutPreviewMode_t::HERO_SLOT_LOADOUT_PREVIEW_AUTODETECT )
            break;
          v16 = pHeroSlots->m_pSlotUnits[v13];
          if ( (v16 == 0 || v16->m_Size <= 0)
            && (v12 & 0xFFFFFFF7) != 0x13
            && (v12 - 29) > 4
            && v12 != 37
            && (v12 & 0xFFFFFFF7) != 0x23 )
          {
            goto LABEL_12;
          }
        }
LABEL_8:
        if ( ++i == v4 )
          return nResult;
      }
      if ( v15 != HeroSlotLoadoutPreviewMode_t::HERO_SLOT_LOADOUT_PREVIEW_HERO )
        goto LABEL_8;
LABEL_12:
      ++nResult;
    }
  }
  return nResult;
}


// AddItemToLoadoutList  (line 2443, @0x0000000002e43970, libserver.so)  // inlines: AddToTail, CSchemaFieldHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Clear, ComputeItemCountInSetWithNoSpecialPreview, ComputePriceAndOwnershipType, Construct<DOTAEconItemInfo_t>, DOTAEconItemInfo_t, DoLookup<int>, DoesSlotHaveSpecialLoadoutPreview, EconItemIDs_t, Element, Find, Get, GetGeneratedUnitCount, GetItemSlotsForHero, GetSlotIndexBySlotType, GetSlotLoadoutPreviewMode, GetSlotType, GetStyleCount, GetTypedRef, GrowMemory, IsPurgatory, _V_strcmp, itemid_t, operator const CEconItemAttributeDefinition*, operator const IEconItemSetDefinition*, operator(), operator=, operator[], ~CUtlVector
// calls: __cxa_guard_acquire, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, FindAttribute_UnsafeBitwiseCast<CAttribute_String, char const*, CDOTAItemDefinition>, GetItemSchema, CEconItemSchema::GetLootListByName, CommandLine, __dynamic_cast, CSchemaFieldHandle<IEconItemSetDefinition>::Set, CDOTAInventoryManager::HasTeamSpecificViews, CDOTAInventoryManager::DetermineSocketTypeForItem, CEconItemDefinition::HasHeroID (22 total)
// callers: AddItemToLoadoutList
// strings: "treasure_chest", "-perfectworld", "treasure loot list"
// globals: `guard variable for'AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*, AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEcon, `typeinfo for'CDOTAItemDefinition, INVALID_ITEM_DEF_INDEX, g_DOTAInventoryManager, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
void __fastcall AddItemToLoadoutList(
        const LoadoutListBuildInfo_t *const build,
        OwningItemInfo_t *pOwningItemInfo,
        DOTAEconItemPackaging_t packaging,
        int nNestingLevel,
        CEconItemView *pEconItemView,
        const GameItemDefinition_t *pItemDef,
        CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> > *pList)
{
  __int64 v11; // rax
  __int64 v12; // rcx
  _BYTE *v13; // rsi
  bool v14; // zf
  const char *v15; // rdi
  DOTAEconItemPackaging_t v16; // r15
  CEconItemSchema *v17; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  CEconItemSchema *v19; // rax
  GameItemSchema_t *ItemSchema; // rax
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // rdx
  int v24; // ecx
  unsigned __int64 v25; // r12
  DOTAEconItemPackaging_t v26; // dl
  rolled_item_defs_t *v27; // r13
  const CEconItemDefinition *m_pItemDef; // rdi
  const GameItemDefinition_t *v29; // r9
  char v30; // al
  char v31; // dl
  bundleinfo_t *m_BundleInfo; // r15
  DOTAEconItemPackaging_t v33; // r12
  __int64 v34; // r12
  int m_nHeroID; // r15d
  _BOOL4 m_bHasComputedPrice; // ecx
  int m_bSuppressAddingItem; // ecx
  int m_Size; // r14d
  int v39; // edx
  DOTAEconItemInfo_t *v40; // rax
  uint16 m_Data; // si
  DOTAEconItemInfo_t *v42; // rdx
  char v43; // al
  __int64 v44; // rsi
  uint16 v45; // ax
  __int64 v46; // rsi
  DOTAEconItemInfo_t *v47; // rdx
  char v48; // cl
  __int64 v49; // rax
  uint16 v50; // ax
  char v51; // al
  DOTAEconItemInfo_t *v52; // rdx
  char v53; // si
  bool v54; // cl
  HeroSlotLoadoutPreviewMode_t v55; // al
  CEconItemView *v56; // rdx
  CEconItemSchema *v57; // rax
  uint32 v58; // r14d
  const IEconItemSetDefinition *v59; // rax
  char v60; // al
  char v61; // cl
  char v62; // al
  CUtlVector<CEconStyleInfo*,CUtlMemory<CEconStyleInfo*,int> > *m_pStyles; // rax
  int v64; // ecx
  CEconItemView *v65; // rdi
  int (**vptr_IEconItemInterface)(...); // rax
  char v67; // al
  uint8 v68; // al
  DOTAEconItemOwnershipType_t m_nOwnershipType; // cl
  uint8 m_unClientFlags; // cl
  uint8 v71; // al
  bool v72; // cl
  __int64 v73; // rax
  signed int v74; // esi
  char v75; // al
  CEconItemSchema *v76; // rax
  uint32 m_unResetCount; // eax
  const GameItemDefinition_t *m_pOwningItemDef; // rdx
  CEconItemView *m_pOwningEconItemView; // rax
  CEconItemSchema *v80; // rax
  __int64 (__fastcall *v81)(GameItemSchema_t *, _QWORD); // r14
  unsigned int v82; // eax
  char v83; // al
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *v84; // rcx
  unsigned int v85; // edx
  int v86; // edx
  int v87; // eax
  int *v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rax
  int *p_m_Size; // rax
  int v92; // eax
  bool v93; // [rsp+Ch] [rbp-94h]
  unsigned int v94; // [rsp+10h] [rbp-90h]
  unsigned int v95; // [rsp+10h] [rbp-90h]
  char v96; // [rsp+10h] [rbp-90h]
  bool v97; // [rsp+10h] [rbp-90h]
  DOTAEconItemInfo_t *v98; // [rsp+10h] [rbp-90h]
  DOTAEconItemInfo_t *v99; // [rsp+18h] [rbp-88h]
  DOTAEconItemInfo_t *v100; // [rsp+18h] [rbp-88h]
  DOTAEconItemInfo_t *v101; // [rsp+18h] [rbp-88h]
  DOTAEconItemInfo_t *v102; // [rsp+18h] [rbp-88h]
  DOTAEconItemInfo_t *v103; // [rsp+18h] [rbp-88h]
  CEconItemView *v104; // [rsp+18h] [rbp-88h]
  _BOOL4 v105; // [rsp+18h] [rbp-88h]
  GameItemSchema_t *p_m_itemSchema; // [rsp+18h] [rbp-88h]
  int v107; // [rsp+18h] [rbp-88h]
  uint32 iSlotIndexa; // [rsp+20h] [rbp-80h]
  signed int iSlotIndex; // [rsp+20h] [rbp-80h]
  const char *pLootListDefb; // [rsp+28h] [rbp-78h]
  const char *pLootListDefc; // [rsp+28h] [rbp-78h]
  const CEconLootListDefinition *pLootListDef; // [rsp+28h] [rbp-78h]
  char pLootListDefd; // [rsp+28h] [rbp-78h]
  CDOTAHeroSlots *pLootListDefa; // [rsp+28h] [rbp-78h]
  int pEconItemViewb; // [rsp+30h] [rbp-70h]
  DOTAEconItemPackaging_t pEconItemViewc; // [rsp+30h] [rbp-70h]
  CEconItemView *pEconItemViewe; // [rsp+30h] [rbp-70h]
  CEconItemView *pEconItemViewd; // [rsp+30h] [rbp-70h]
  __int64 nNestingLevelb; // [rsp+38h] [rbp-68h]
  int nNestingLevelc; // [rsp+38h] [rbp-68h]
  const char *pszLootList; // [rsp+48h] [rbp-58h] BYREF
  CUtlVector<rolled_item_defs_t,CUtlMemory<rolled_item_defs_t,int> > vecItems; // [rsp+50h] [rbp-50h] BYREF

  if ( pOwningItemInfo->m_bSuppressAddingItem )
    return;
  v11 = (*(pItemDef->_vptr_IEconItemDefinition + 1))(pItemDef);
  v14 = v11 == 0;
  if ( v11 == 0 )
    goto LABEL_26;
  v15 = "treasure_chest";
  v12 = 15;
  v13 = v11;
  do
  {
    if ( v12 == 0 )
      break;
    v14 = *v13++ == *v15++;
    --v12;
  }
  while ( v14 );
  if ( !v14 )
  {
LABEL_26:
    v23 = 0;
    goto LABEL_27;
  }
  v16 = packaging;
  if ( `guard variable for'AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList == 0
    && __cxa_guard_acquire(&`guard variable for'AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList) != 0 )
  {
    AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList.m_szName = "treasure loot list";
    v76 = GEconItemSchema();
    AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v76, "treasure loot list");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList.m_bDestructName = 0;
    AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList,
      &_dso_handle);
  }
  if ( AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList.m_szName != 0 )
  {
    v17 = GEconItemSchema();
    m_pRef = AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList.m_pRef;
    if ( v17->m_unResetCount != AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList.m_unSchemaGeneration )
    {
      iSlotIndexa = v17->m_unResetCount;
      pLootListDefb = AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList.m_szName;
      v19 = GEconItemSchema();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v19, pLootListDefb);
      AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList.m_pRef = m_pRef;
      AddItemToLoadoutList(LoadoutListBuildInfo_t const&,OwningItemInfo_t *,DOTAEconItemPackaging_t,int,CEconItemView *,CDOTAItemDefinition const*,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *)::pAttrDef_TreasureLootList.m_unSchemaGeneration = iSlotIndexa;
    }
  }
  else
  {
    m_pRef = 0;
  }
  if ( FindAttribute_UnsafeBitwiseCast<CAttribute_String,char const*,CDOTAItemDefinition>(
         pItemDef,
         m_pRef,
         &pszLootList) )
  {
    pLootListDefc = pszLootList;
    ItemSchema = GetItemSchema();
    pLootListDef = CEconItemSchema::GetLootListByName(ItemSchema, pLootListDefc, 0);
    if ( pLootListDef != 0 )
    {
      v21 = CommandLine();
      v22 = (*(*v21 + 32LL))(v21, "-perfectworld");
      v12 = pLootListDef;
      if ( v22 == 0 || (*(pItemDef + 529) & 0x10) != 0 )
      {
        v23 = 1;
        if ( build->m_bExplodeTreasureItems )
        {
          vecItems.m_Size = 0;
          vecItems.m_Memory.m_pMemory = 0;
          vecItems.m_Memory.m_nAllocationCount = 0;
          vecItems.m_Memory.m_nGrowSize = 0;
          (*(pLootListDef->_vptr_IEconLootListDefinition + 23))(pLootListDef, &vecItems, 1);
          if ( vecItems.m_Size > 0 )
          {
            v24 = nNestingLevel;
            v25 = 0;
            nNestingLevelb = 16 * (3LL * (vecItems.m_Size - 1) + 3);
            pEconItemViewb = v24 + 1;
            do
            {
              v27 = &vecItems.m_Memory.m_pMemory[v25 / 0x30];
              m_pItemDef = vecItems.m_Memory.m_pMemory[v25 / 0x30].m_pItemDef;
              if ( m_pItemDef != 0 )
                v29 = __dynamic_cast(
                        m_pItemDef,
                        &`typeinfo for'CEconItemDefinition,
                        &`typeinfo for'CDOTAItemDefinition,
                        0);
              else
                v29 = 0;
              if ( v16 != DOTAEconItemPackaging_t::DOTA_ITEM_IS_UNPACKED )
                v26 = v16;
              else
                v26 = 3 - !v27->m_bIsAdditionalDrop;
              AddItemToLoadoutList(build, pOwningItemInfo, v26, pEconItemViewb, 0, v29, pList);
              v25 += 48LL;
            }
            while ( v25 != nNestingLevelb );
          }
          CUtlVectorBase<rolled_item_defs_t,CUtlMemory<rolled_item_defs_t,int>>::~CUtlVectorBase(&vecItems);
          return;
        }
LABEL_27:
        pLootListDefd = v23;
        v30 = (*(pItemDef->_vptr_IEconItemDefinition + 16))(pItemDef, v13, v23, v12);
        v31 = pLootListDefd;
        if ( v30 != 0 )
        {
          m_BundleInfo = pItemDef->m_BundleInfo;
          if ( m_BundleInfo != 0 && m_BundleInfo->vecItemDefs.m_Size > 0 )
          {
            v33 = DOTAEconItemPackaging_t::DOTA_ITEM_IS_IN_BUNDLE;
            if ( packaging != DOTAEconItemPackaging_t::DOTA_ITEM_IS_UNPACKED )
              v33 = packaging;
            nNestingLevelc = nNestingLevel + 1;
            pEconItemViewc = v33;
            v34 = 0;
            do
              AddItemToLoadoutList(
                build,
                pOwningItemInfo,
                pEconItemViewc,
                nNestingLevelc,
                0,
                m_BundleInfo->vecItemDefs.m_Memory.m_pMemory[v34++],
                pList);
            while ( m_BundleInfo->vecItemDefs.m_Size > v34 );
          }
          return;
        }
        m_nHeroID = build->m_nHeroID;
        pLootListDefa = build->m_pHeroSlots;
        if ( v31 != 0 )
        {
          m_nHeroID = -1;
          pLootListDefa = 0;
          iSlotIndex = -1;
        }
        else
        {
          if ( build->m_pHeroSlots != 0 )
          {
            if ( !CEconItemDefinition::HasHeroID(pItemDef, m_nHeroID) )
              return;
            v73 = 0;
            while ( 1 )
            {
              v74 = v73;
              if ( pItemDef->m_nSlotType == pLootListDefa->m_nSlotTypes[v73] )
                break;
              if ( ++v73 == 16 )
                return;
            }
          }
          else
          {
            iSlotIndex = -1;
            m_nHeroID = (*(pItemDef->_vptr_IEconItemDefinition + 9))(pItemDef);
            if ( stru_4D583D0.m_nUsed == 0 )
              goto LABEL_37;
            v85 = 33 * (((4097 * m_nHeroID + 2127912214) >> 19) ^ (4097 * m_nHeroID + 2127912214) ^ 0xC761C23C);
            v86 = 9 * ((v85 - 369570787) ^ ((v85 + 374761393) << 9)) - 42973499;
            v87 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
                    &stru_4D583D0,
                    m_nHeroID,
                    HIWORD(v86) ^ v86 ^ 0xB55A4F09,
                    v84);
            if ( v87 == -1 )
              goto LABEL_37;
            v88 = &stru_4D583D0.m_table.m_pMemory[v87].data[2];
            pLootListDefa = v88;
            if ( &stru_4D583D0.m_table.m_pMemory[v87] == -12LL )
              goto LABEL_37;
            v89 = 0;
            while ( 1 )
            {
              v74 = v89;
              if ( pItemDef->m_nSlotType == v88[v89 + 32] )
                break;
              if ( ++v89 == 16 )
              {
                iSlotIndex = -1;
                goto LABEL_37;
              }
            }
          }
          iSlotIndex = v74;
        }
LABEL_37:
        m_bHasComputedPrice = pOwningItemInfo->m_bHasComputedPrice;
        if ( m_bHasComputedPrice )
          goto LABEL_38;
        m_pOwningItemDef = pOwningItemInfo->m_pOwningItemDef;
        pOwningItemInfo->m_bHasComputedPrice = 1;
        v105 = m_bHasComputedPrice;
        pOwningItemInfo->m_nPackagingFlags = ComputePackagingFlagsForHero(m_nHeroID, pLootListDefa, m_pOwningItemDef);
        m_pOwningEconItemView = pOwningItemInfo->m_pOwningEconItemView;
        if ( pOwningItemInfo->m_pOwningEconItemView != 0 )
        {
          pOwningItemInfo->m_nRegularPrice = 0;
          m_bSuppressAddingItem = v105;
          pOwningItemInfo->m_nPrice = 0;
          pOwningItemInfo->m_nOwnershipType = (m_pOwningEconItemView->m_iInventoryPosition.m_Value & 0x20000000) != 0
                                            ? DOTAEconItemOwnershipType_t::DOTA_ITEM_OWNED_IN_PURGATORY
                                            : DOTAEconItemOwnershipType_t::DOTA_ITEM_OWNED;
        }
        else
        {
          m_bSuppressAddingItem = 1;
        }
        if ( build->m_nCheckForOwnershipType != LoadoutOwnershipCheckType_t::LOADOUT_OWNERSHIPCHECK_AVAILABLE_ONLY )
LABEL_38:
          m_bSuppressAddingItem = pOwningItemInfo->m_bSuppressAddingItem;
        else
          pOwningItemInfo->m_bSuppressAddingItem = m_bSuppressAddingItem;
        if ( m_bSuppressAddingItem == 0 )
        {
          m_Size = pList->m_Size;
          v39 = pList->m_Size;
          if ( pList->m_Size == pList->m_Memory.m_nAllocationCount )
          {
            v107 = m_bSuppressAddingItem;
            CUtlMemory<DOTAEconItemInfo_t,int>::Grow(&pList->m_Memory, 1);
            m_bSuppressAddingItem = v107;
            v39 = pList->m_Size;
          }
          pList->m_Size = v39 + 1;
          v40 = &pList->m_Memory.m_pMemory[m_Size];
          if ( v40 != 0 )
          {
            m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
            v40->m_Id.m_nItemID.m_Data = 0;
            v40->m_packageId.m_nItemID.m_Data = 0;
            v40->m_pSet.m_szName = 0;
            v40->m_pSet.m_pRef = 0;
            v40->m_Id.m_nItemDefIndex.m_Data = m_Data;
            v40->m_packageId.m_nItemDefIndex.m_Data = m_Data;
            v40->m_pSet.m_bDestructName = 0;
            v40->m_pSet.m_unSchemaGeneration = 0;
            v42 = &pList->m_Memory.m_pMemory[m_Size];
          }
          else
          {
            v42 = 0;
          }
          if ( pEconItemView != 0
            && (v94 = m_bSuppressAddingItem,
                v99 = v42,
                v43 = (*(pItemDef->_vptr_IEconItemDefinition + 14))(pItemDef),
                v42 = v99,
                m_bSuppressAddingItem = v94,
                v43 == 0) )
          {
            v90 = (*(pEconItemView->_vptr_IEconItemInterface + 14))(pEconItemView, v44, v99, v94);
            v42 = v99;
            m_bSuppressAddingItem = v94;
            v99->m_Id.m_nItemID.m_Data = v90;
          }
          else
          {
            v42->m_Id.m_nItemID.m_Data = 0;
          }
          v95 = m_bSuppressAddingItem;
          v100 = v42;
          v45 = (*pItemDef->_vptr_IEconItemDefinition)(pItemDef);
          v47 = v100;
          v48 = v95;
          v100->m_Id.m_nItemDefIndex.m_Data = v45;
          if ( pOwningItemInfo->m_pOwningItemDef != pItemDef )
          {
            if ( pOwningItemInfo->m_pOwningEconItemView != 0 )
            {
              v49 = (*(pOwningItemInfo->m_pOwningEconItemView->_vptr_IEconItemInterface + 14))(
                      pOwningItemInfo->m_pOwningEconItemView,
                      v46,
                      v100,
                      v95);
              v47 = v100;
              v48 = v95;
              v100->m_packageId.m_nItemID.m_Data = v49;
            }
            else
            {
              v100->m_packageId.m_nItemID.m_Data = 0;
            }
            v96 = v48;
            v101 = v47;
            v50 = (*pOwningItemInfo->m_pOwningItemDef->_vptr_IEconItemDefinition)(pOwningItemInfo->m_pOwningItemDef);
            v47 = v101;
            v48 = v96;
            v101->m_packageId.m_nItemDefIndex.m_Data = v50;
          }
          v97 = v48;
          v102 = v47;
          v51 = (*(pItemDef->_vptr_IEconItemDefinition + 14))(pItemDef);
          v52 = v102;
          v53 = (v51 << 7) | *(v102 + 61) & 0x7F;
          *(v102 + 61) = v53;
          v54 = v97;
          if ( v53 < 0 )
          {
            v98 = v102;
            v93 = v54;
            p_m_itemSchema = &ItemSystem()->m_itemSchema;
            v81 = *(p_m_itemSchema->_vptr_IEconItemSchema + 46);
            v82 = (*pItemDef->_vptr_IEconItemDefinition)(pItemDef);
            v83 = v81(p_m_itemSchema, v82);
            v52 = v98;
            v54 = v93;
            if ( v83 != 0 )
              *(v98 + 61) &= ~0x80u;
          }
          v52->m_nHeroID = m_nHeroID;
          if ( pLootListDefa != 0 )
          {
            if ( iSlotIndex <= 0xF )
            {
              v55 = pLootListDefa->m_nLoadoutPreviewMode[iSlotIndex];
              if ( v55 == HeroSlotLoadoutPreviewMode_t::HERO_SLOT_LOADOUT_PREVIEW_AUTODETECT )
              {
                p_m_Size = &pLootListDefa->m_pSlotUnits[iSlotIndex]->m_Size;
                if ( p_m_Size == 0 || (v54 = 1, *p_m_Size <= 0) )
                {
                  v54 = 1;
                  v92 = pLootListDefa->m_nSlotTypes[iSlotIndex];
                  if ( (v92 & 0xFFFFFFF7) != 0x13 && (v92 - 29) > 4 && v92 != 37 && v92 != 35 )
                    v54 = v92 == 43;
                }
              }
              else
              {
                v54 = v55 != HeroSlotLoadoutPreviewMode_t::HERO_SLOT_LOADOUT_PREVIEW_HERO;
              }
            }
          }
          else
          {
            v54 = 1;
          }
          *(v52 + 62) = v54 | *(v52 + 62) & 0xFE;
          v103 = v52;
          CSchemaFieldHandle<IEconItemSetDefinition>::Set(&v52->m_pSet, pItemDef->m_pItemSetDef);
          v56 = v103;
          if ( v103->m_pSet.m_szName == 0 )
            goto LABEL_60;
          v57 = GEconItemSchema();
          v56 = v103;
          v58 = v57->m_unResetCount;
          if ( v58 == v103->m_pSet.m_unSchemaGeneration )
          {
            v59 = v103->m_pSet.m_pRef;
          }
          else
          {
            v80 = GEconItemSchema();
            v59 = (*(v80->_vptr_IEconItemSchema + 30))(v80, v103->m_pSet.m_szName);
            v56 = v103;
            v103->m_pSet.m_pRef = v59;
            v103->m_pSet.m_unSchemaGeneration = v58;
          }
          if ( v59 != 0 && pLootListDefa != 0 )
          {
            v104 = v56;
            v75 = ComputeItemCountInSetWithNoSpecialPreview(pLootListDefa, v59);
            v56 = v104;
            v60 = v75 & 0xF;
          }
          else
          {
LABEL_60:
            v60 = 0;
          }
          v61 = v60 | HIBYTE(v56->m_iEntityQuantity) & 0xF0;
          v62 = BYTE2(v56->m_iEntityQuantity);
          HIBYTE(v56->m_iEntityQuantity) = v61;
          BYTE2(v56->m_iEntityQuantity) = iSlotIndex & 0x1F | v62 & 0xE0;
          m_pStyles = pItemDef->m_pAssetInfo->m_pStyles;
          if ( m_pStyles != 0 )
            v64 = m_pStyles->m_Size & 0x1F;
          else
            LOBYTE(v64) = 0;
          v56->m_unClientFlags = v64 | v56->m_unClientFlags & 0xE0;
          v65 = pEconItemView;
          if ( pEconItemView != 0 )
          {
            vptr_IEconItemInterface = pEconItemView->_vptr_IEconItemInterface;
            pEconItemViewe = v56;
            v67 = vptr_IEconItemInterface[16](v65);
            v56 = pEconItemViewe;
            *(&pEconItemViewe->m_unClientFlags + 1) = v67 & 0x1F | *(&pEconItemViewe->m_unClientFlags + 1) & 0xE0;
          }
          else
          {
            *(&v56->m_unClientFlags + 1) &= 0xE0u;
          }
          pEconItemViewd = v56;
          v68 = (2 * CDOTAInventoryManager::HasTeamSpecificViews(g_DOTAInventoryManager, pItemDef))
              | *(&v56->m_unClientFlags + 2) & 0xFD;
          *(&pEconItemViewd->m_unClientFlags + 2) = v68;
          m_nOwnershipType = pOwningItemInfo->m_nOwnershipType;
          LOBYTE(pEconItemViewd->m_unOverrideOrigin) = packaging;
          *(&pEconItemViewd->m_unClientFlags + 3) = m_nOwnershipType;
          m_unClientFlags = pEconItemViewd->m_unClientFlags;
          v71 = (8 * (nNestingLevel & 7)) | v68 & 0xC7;
          *(&pEconItemViewd->m_unClientFlags + 2) = v71;
          pEconItemViewd->m_unClientFlags = (32 * (pOwningItemInfo->m_nPackagingFlags & 3)) | m_unClientFlags & 0x9F;
          *(&pEconItemViewd->m_unOverrideOrigin + 1) = pOwningItemInfo->m_nPrice;
          LODWORD(pEconItemViewd->m_pDescription) = pOwningItemInfo->m_nRegularPrice;
          v72 = pOwningItemInfo->m_pOwningEconItemView != 0
             && (pOwningItemInfo->m_pOwningEconItemView->m_iInventoryPosition.m_Value & 0x20000000) != 0;
          *(&pEconItemViewd->m_unClientFlags + 2) = (4 * v72) | v71 & 0xFB;
          HIDWORD(pEconItemViewd->m_pDescription) = CRTime::sm_nTimeCur
                                                  - pOwningItemInfo->m_pOwningItemDef->m_rtDefCreation;
          *(&pEconItemViewd->m_unClientFlags + 1) = (32
                                                   * (CDOTAInventoryManager::DetermineSocketTypeForItem(
                                                        g_DOTAInventoryManager,
                                                        pOwningItemInfo->m_pOwningEconItemView)
                                                    & 3))
                                                  | *(&pEconItemViewd->m_unClientFlags + 1) & 0x9F;
        }
      }
    }
  }
}


// AddItemToLoadoutList  (line 2615, @0x0000000002e443e0, libserver.so)  // inlines: OwningItemInfo_t
// calls: AddItemToLoadoutList
// callers: CDOTAInventoryManager::BuildDeveloperLoadoutItemList, CDOTAPlayerInventory::BuildOwnedLoadoutItemList, CDOTAInventoryManager::BuildLoadoutItemListForItem, CDOTAInventoryManager::BuildItemListForItem, CDOTAInventoryManager::BuildAvailableLoadoutItemList
void __fastcall AddItemToLoadoutList(
        const LoadoutListBuildInfo_t *const build,
        CEconItemView *pEconItemView,
        const GameItemDefinition_t *pItemDef,
        CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> > *pList)
{
  OwningItemInfo_t info; // [rsp+10h] [rbp-30h] BYREF

  info.m_pOwningEconItemView = pEconItemView;
  info.m_pOwningItemDef = pItemDef;
  info.m_nPrice = 0;
  info.m_nRegularPrice = 0;
  info.m_nOwnershipType = DOTAEconItemOwnershipType_t::DOTA_ITEM_OWNERSHIP_INVALID;
  info.m_nPackagingFlags = 0;
  info.m_nPackagingNestingLevel = 0;
  info.m_bHasComputedPrice = 0;
  info.m_bSuppressAddingItem = 0;
  AddItemToLoadoutList(build, &info, DOTAEconItemPackaging_t::DOTA_ITEM_IS_UNPACKED, 0, pEconItemView, pItemDef, pList);
}


// CDOTAPlayerInventory::BuildOwnedLoadoutItemList  (line 2624, @0x0000000002e445b0, libserver.so)  // inlines: Destruct<DOTAEconItemInfo_t>, DoLookup<int>, Element, Find, GetItem, GetItemSlotsForHero, Purge, RemoveAll, operator(), operator[], ~CSchemaFieldHandle, ~DOTAEconItemInfo_t
// calls: CUtlMemory<DOTAEconItemInfo_t, int>::Purge, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>, CDOTAInventoryManager::GetBaseItemForHero, AddItemToLoadoutList, CDOTAInventoryManager::BuildDeveloperLoadoutItemList
// globals: g_DOTAInventoryManager
void __fastcall CDOTAPlayerInventory::BuildOwnedLoadoutItemList(
        CDOTAPlayerInventory *const this,
        int nHeroID,
        CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> > *pOwnedItems)
{
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *v3; // rcx
  int m_Size; // ebx
  __int64 i; // r15
  char *v9; // rax
  bool v10; // zf
  unsigned int v11; // edx
  unsigned int v12; // edx
  int v13; // eax
  CDOTAHeroSlots *v14; // rax
  int v15; // ebx
  CEconItemView *BaseItemForHero; // rax
  CEconItemView *v17; // r15
  const GameItemDefinition_t *v18; // rax
  int v19; // eax
  LoadoutListBuildInfo_t *v20; // r15
  CEconItemView *v21; // rbx
  const GameItemDefinition_t *v22; // rax
  LoadoutListBuildInfo_t *build; // [rsp+8h] [rbp-58h]
  int v24; // [rsp+10h] [rbp-50h] BYREF
  CDOTAHeroSlots *pHeroSlots; // [rsp+18h] [rbp-48h]
  char v26; // [rsp+20h] [rbp-40h]
  int v27; // [rsp+24h] [rbp-3Ch]

  m_Size = pOwnedItems->m_Size;
  for ( i = 80LL * pOwnedItems->m_Size - 80; --m_Size >= 0; i -= 80 )
  {
    v9 = pOwnedItems->m_Memory.m_pMemory + i;
    if ( v9[52] != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *(v9 + 4));
  }
  v10 = (pOwnedItems->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  pOwnedItems->m_Size = 0;
  if ( v10 )
    CUtlMemory<DOTAEconItemInfo_t,int>::Purge(&pOwnedItems->m_Memory);
  if ( stru_4D583D0.m_nUsed != 0 )
  {
    v11 = 33 * (((4097 * nHeroID + 2127912214) >> 19) ^ (4097 * nHeroID + 2127912214) ^ 0xC761C23C);
    v12 = 9 * ((v11 - 369570787) ^ ((v11 + 374761393) << 9)) - 42973499;
    v13 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
            &stru_4D583D0,
            nHeroID,
            HIWORD(v12) ^ v12 ^ 0xB55A4F09,
            v3);
    if ( v13 != -1 )
    {
      v14 = &stru_4D583D0.m_table.m_pMemory[v13].data[2];
      if ( v14 != 0 )
      {
        pHeroSlots = v14;
        v15 = 0;
        v26 = 1;
        v27 = 0;
        v24 = nHeroID;
        do
        {
          BaseItemForHero = CDOTAInventoryManager::GetBaseItemForHero(g_DOTAInventoryManager, nHeroID, v15);
          v17 = BaseItemForHero;
          if ( BaseItemForHero != 0 )
          {
            v18 = (*(BaseItemForHero->_vptr_IEconItemInterface + 12))(BaseItemForHero);
            AddItemToLoadoutList(&v24, v17, v18, pOwnedItems);
          }
          ++v15;
        }
        while ( v15 != 16 );
        v19 = this->m_aInventoryItems.m_Size;
        if ( v19 > 0 )
        {
          v20 = 0;
          build = (8LL * (v19 - 1) + 8);
          do
          {
            v21 = *(this->m_aInventoryItems.m_Memory.m_pMemory + v20);
            if ( v21 != 0 )
            {
              v22 = (*(v21->_vptr_IEconItemInterface + 12))(v21);
              AddItemToLoadoutList(&v24, v21, v22, pOwnedItems);
            }
            v20 = (v20 + 8);
          }
          while ( v20 != build );
        }
        CDOTAInventoryManager::BuildDeveloperLoadoutItemList(g_DOTAInventoryManager, nHeroID, pOwnedItems);
      }
    }
  }
}


// CDOTAInventoryManager::BuildDeveloperLoadoutItemList  (line 2693, @0x0000000002e44440, libserver.so)  // inlines: DoLookup<int>, Find, GetItemSlotsForHero, IsValidIndex, operator(), operator[]
// calls: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>, ItemSystem, __dynamic_cast, AddItemToLoadoutList
// callers: CDOTAPlayerInventory::BuildOwnedLoadoutItemList
// globals: `typeinfo for'CDOTAItemDefinition
void __fastcall CDOTAInventoryManager::BuildDeveloperLoadoutItemList(
        CDOTAInventoryManager *const this,
        int nHeroID,
        CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> > *pAvailableItems)
{
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *v5; // rcx
  unsigned int v6; // edx
  unsigned int v7; // edx
  int v8; // eax
  CDOTAHeroSlots *v9; // rax
  __int64 v10; // r12
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v11; // ebx
  CEconItemSystem *v12; // r15
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v13; // rsi
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::ElemType_t m_elem; // rdi
  GameItemDefinition_t *v15; // rax
  const GameItemDefinition_t *v16; // r14
  LoadoutListBuildInfo_t build; // [rsp+10h] [rbp-50h] BYREF

  if ( (*(g_pApplication->_vptr_IAppSystem + 21))(g_pApplication) != 0 && stru_4D583D0.m_nUsed != 0 )
  {
    v6 = 33 * (((4097 * nHeroID + 2127912214) >> 19) ^ (4097 * nHeroID + 2127912214) ^ 0xC761C23C);
    v7 = 9 * ((v6 - 369570787) ^ ((v6 + 374761393) << 9)) - 42973499;
    v8 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
           &stru_4D583D0,
           nHeroID,
           HIWORD(v7) ^ v7 ^ 0xB55A4F09,
           v5);
    if ( v8 != -1 )
    {
      v9 = &stru_4D583D0.m_table.m_pMemory[v8].data[2];
      if ( v9 != 0 )
      {
        build.m_nHeroID = nHeroID;
        v10 = 0;
        v11 = 0;
        build.m_bExplodeTreasureItems = 1;
        build.m_nCheckForOwnershipType = LoadoutOwnershipCheckType_t::LOADOUT_OWNERSHIPCHECK_DONT_CARE;
        build.m_pHeroSlots = v9;
        v12 = ItemSystem();
        if ( v12->m_itemSchema.m_mapItems.m_nMaxElement > 0 )
        {
          do
          {
            v13 = &v12->m_itemSchema.m_mapItems.m_memNodes.m_pMemory[v10];
            if ( v13->m_iNextNode >= -1 )
            {
              m_elem = v13->m_elem;
              if ( m_elem != 0 )
              {
                v15 = __dynamic_cast(m_elem, &`typeinfo for'CEconItemDefinition, &`typeinfo for'CDOTAItemDefinition, 0);
                v16 = v15;
                if ( v15 != 0
                  && (*(&v15->CEconItemDefinition + 272) & 2) == 0
                  && (*(v15->_vptr_IEconItemDefinition + 14))(v15) == 0
                  && (*(v16->_vptr_IEconItemDefinition + 15))(v16) == 0 )
                {
                  AddItemToLoadoutList(&build, 0, v16, pAvailableItems);
                }
              }
            }
            ++v11;
            ++v10;
          }
          while ( v12->m_itemSchema.m_mapItems.m_nMaxElement > v11 );
        }
      }
    }
  }
}


// CDOTAInventoryManager::PurgeItemsForHeroesCache  (line 2729, @0x0000000002e3fa60, libserver.so)  // inlines: Destruct<DOTAEconItemInfo_t>, Element, FirstHandle, NextHandle, Purge, RemoveAll, operator[], ~CSchemaFieldHandle, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~DOTAEconItemInfo_t
// calls: CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::RemoveAll, CUtlMemory<DOTAEconItemInfo_t, int>::Purge, operator delete, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int>::Purge
// callers: CDOTAInventoryManager::OnTestItemDefinitionAdded, CDOTAItemSchema::OnTestItemDefinitionAdded, CDOTAInventoryManager::OnTestItemDefinitionRemoved, CDOTAItemSchema::OnTestItemDefinitionRemoved, CDOTAInventoryManager::OnTestItemSetAdded, CDOTAItemSchema::OnTestItemSetAdded, CDOTAInventoryManager::OnTestItemSetRemoved, CDOTAItemSchema::OnTestItemSetRemoved
void __fastcall CDOTAInventoryManager::PurgeItemsForHeroesCache(CDOTAInventoryManager *const this)
{
  int v2; // edx
  int *v3; // rsi
  int *v4; // rax
  int v5; // r15d
  __int64 v6; // r14
  int *v7; // r15
  int v8; // ebx
  __int64 i; // r12
  __int64 v10; // rdx
  int v11; // ebx
  bool v12; // zf
  __int64 j; // r12
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // eax
  int *v17; // rdx
  CUtlMemory<DOTAEconItemInfo_t,int> *v18; // [rsp+0h] [rbp-40h]
  int v19; // [rsp+Ch] [rbp-34h]

  v2 = *(this + 908);
  v3 = *(this + 453);
  if ( v2 > 0 )
  {
    v4 = v3 + 5;
    v5 = 0;
    if ( *v3 < 0 )
    {
      while ( ++v5 != v2 )
      {
        v4 += 5;
        if ( *(v4 - 5) >= 0 )
        {
          if ( v5 != -1 )
          {
            v19 = v5;
            goto LABEL_10;
          }
          break;
        }
      }
    }
    else
    {
      v19 = 0;
      do
      {
LABEL_10:
        v6 = 5LL * v19;
        v7 = *&v3[v6 + 3];
        v8 = *v7;
        for ( i = 80LL * *v7 - 80; --v8 >= 0; i -= 80 )
        {
          v10 = *(v7 + 1) + i;
          if ( *(v10 + 52) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *(v10 + 32));
        }
        v11 = 0;
        v12 = (v7[5] & 0xC0000000) == 0;
        *v7 = 0;
        v18 = (v7 + 2);
        if ( v12 )
        {
          CUtlMemory<DOTAEconItemInfo_t,int>::Purge((v7 + 2));
          v11 = *v7;
        }
        for ( j = 80LL * v11 - 80; --v11 >= 0; j -= 80 )
        {
          v14 = *(v7 + 1) + j;
          if ( *(v14 + 52) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *(v14 + 32));
        }
        v12 = (v7[5] & 0xC0000000) == 0;
        *v7 = 0;
        if ( v12 )
        {
          CUtlMemory<DOTAEconItemInfo_t,int>::Purge(v18);
          if ( (v7[5] & 0xC0000000) == 0 )
            CUtlMemory<DOTAEconItemInfo_t,int>::Purge(v18);
        }
        operator delete(v7);
        v15 = *(this + 908);
        v3 = *(this + 453);
        v16 = v19 + 1;
        if ( v19 + 1 >= v15 )
          break;
        v17 = &v3[5 * v16 + 5];
        if ( v3[v6 + 5] < 0 )
        {
          while ( ++v16 != v15 )
          {
            v17 += 5;
            if ( *(v17 - 5) >= 0 )
              goto LABEL_29;
          }
          break;
        }
LABEL_29:
        v19 = v16;
      }
      while ( v16 != -1 );
    }
  }
  CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::RemoveAll((this + 3624));
  if ( (*(this + 909) & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>::Purge((this + 3624));
}


// CDOTAInventoryManager::OnTestItemDefinitionAdded  (line 2740, @0x0000000002e3fca0, libserver.so)
// calls: CDOTAInventoryManager::PurgeItemsForHeroesCache
void __fastcall CDOTAInventoryManager::OnTestItemDefinitionAdded(
        CDOTAInventoryManager *const this,
        item_definition_index_t unDefIndex)
{
  CDOTAInventoryManager::PurgeItemsForHeroesCache(this);
}


// CDOTAInventoryManager::OnTestItemDefinitionRemoved  (line 2748, @0x0000000002e3fcd0, libserver.so)
// calls: CDOTAInventoryManager::PurgeItemsForHeroesCache
void __fastcall CDOTAInventoryManager::OnTestItemDefinitionRemoved(
        CDOTAInventoryManager *const this,
        item_definition_index_t unDefIndex)
{
  CDOTAInventoryManager::PurgeItemsForHeroesCache(this);
}


// CDOTAInventoryManager::OnTestItemSetAdded  (line 2756, @0x0000000002e3fd00, libserver.so)
// calls: CDOTAInventoryManager::PurgeItemsForHeroesCache
void __fastcall CDOTAInventoryManager::OnTestItemSetAdded(CDOTAInventoryManager *const this, const char *pItemSetName)
{
  CDOTAInventoryManager::PurgeItemsForHeroesCache(this);
}


// CDOTAInventoryManager::OnTestItemSetRemoved  (line 2761, @0x0000000002e3fd30, libserver.so)
// calls: CDOTAInventoryManager::PurgeItemsForHeroesCache
void __fastcall CDOTAInventoryManager::OnTestItemSetRemoved(
        CDOTAInventoryManager *const this,
        const char *pItemSetName)
{
  CDOTAInventoryManager::PurgeItemsForHeroesCache(this);
}


// CDOTAInventoryManager::BuildAvailableLoadoutItemList  (line 2766, @0x0000000002e47f90, libserver.so)  // inlines: AddMultipleToTail, CSchemaFieldHandle, CUtlKeyValuePair<int, CUtlVector<DOTAEconItemInfo_t>*>, CUtlMemory, CUtlVector, CUtlVectorBase, Clear, Construct<CUtlKeyValuePair<int, CUtlVector<DOTAEconItemInfo_t>*>, int, CUtlVector<DOTAEconItemInfo_t>*>, Construct<DOTAEconItemInfo_t>, CopyConstruct<DOTAEconItemInfo_t>, DOTAEconItemInfo_t, Destruct<DOTAEconItemInfo_t>, DoInsert<int>, DoLookup<int>, EconItemIDs_t, Element, Find, GetItemSlotsForHero, GrowMemory, GrowVector, Insert, InsertMultipleBefore, IsValidIndex, Purge, RemoveAll, ShiftElementsRight, V_strlen, V_strncpy<int>, itemid_t, operator(), operator[], ~CSchemaFieldHandle, ~DOTAEconItemInfo_t
// calls: CUtlMemory<DOTAEconItemInfo_t, int>::Purge, CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::DoLookup<int>, CUtlMemory<DOTAEconItemInfo_t, int>::Grow, strlen, _V_strncpy, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>, CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::DoInsertUnconstructed, operator new, ItemSystem, CEconItemSchema::GetItemDefinitionByMapIndex, __dynamic_cast, AddItemToLoadoutList (13 total)
// globals: `typeinfo for'CDOTAItemDefinition, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTAInventoryManager::BuildAvailableLoadoutItemList(
        CDOTAInventoryManager *const this,
        int nHeroID,
        CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> > *pAvailableItems)
{
  CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> > *v3; // r8
  int m_Size; // r12d
  __int64 i; // r14
  char *v8; // rax
  bool v9; // zf
  CUtlMemory<DOTAEconItemInfo_t,int> *p_m_Memory; // r12
  unsigned __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // r14d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // r13
  int m_nAllocationCount; // eax
  int v22; // r14d
  int v23; // r14d
  __int64 v24; // r15
  __int64 v25; // r12
  char *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rdx
  const char *v31; // rax
  int v32; // eax
  int v33; // edx
  __int64 v34; // rsi
  __int64 v35; // rax
  char v36; // al
  char v37; // al
  char v38; // al
  char v39; // al
  char v40; // al
  char v41; // al
  int v42; // eax
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v43; // rax
  CDOTAHeroSlots *v44; // rax
  CDOTAHeroSlots *v45; // r9
  CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*>,int> >::handle_t *v46; // rcx
  CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> > *v47; // r8
  int inserted; // eax
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // r14
  _QWORD *v52; // rax
  CDOTAHeroSlots *v53; // r8
  __int64 v54; // rdx
  int v55; // r13d
  CEconItemSystem *v56; // rax
  LoadoutListBuildInfo_t *v57; // r8
  CEconItemSystem *v58; // rax
  CEconItemSystem *v59; // rax
  const CEconItemDefinition *ItemDefinitionByMapIndex; // rax
  GameItemDefinition_t *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rsi
  GameItemDefinition_t *v65; // r15
  char v66; // al
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rsi
  int v70; // esi
  __int64 v71; // rdx
  DOTAEconItemInfo_t *v72; // rax
  uint16 v73; // di
  __int64 v74; // rax
  __int64 m_pString_low; // rbx
  __int64 v76; // rax
  int v77; // r14d
  __int64 v78; // r15
  int m_pString; // eax
  int v80; // r13d
  __int64 v81; // r12
  __int64 v82; // r13
  __int64 v83; // r9
  int j; // r15d
  char *v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rdx
  char v88; // al
  __int64 v89; // rdx
  int v90; // eax
  int v91; // edx
  __int64 v92; // rsi
  __int64 v93; // rax
  char v94; // al
  char v95; // al
  char v96; // al
  char v97; // al
  char v98; // al
  char v99; // al
  int v100; // eax
  int v101; // esi
  __int64 v102; // rdx
  __int64 v103; // rax
  uint16 m_Data; // di
  char v105; // al
  bool v106; // al
  LoadoutListBuildInfo_t *v107; // [rsp+0h] [rbp-70h]
  LoadoutListBuildInfo_t *v108; // [rsp+0h] [rbp-70h]
  CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> > *v109; // [rsp+8h] [rbp-68h]
  unsigned int v110; // [rsp+8h] [rbp-68h]
  CDOTAHeroSlots *v111; // [rsp+8h] [rbp-68h]
  LoadoutListBuildInfo_t *v112; // [rsp+8h] [rbp-68h]
  __int64 v113; // [rsp+8h] [rbp-68h]
  CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> > *v114; // [rsp+10h] [rbp-60h]
  int v115; // [rsp+10h] [rbp-60h]
  int v116; // [rsp+10h] [rbp-60h]
  CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> > *v117; // [rsp+10h] [rbp-60h]
  CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> > *v118; // [rsp+10h] [rbp-60h]
  __int64 v119; // [rsp+10h] [rbp-60h]
  __int64 v120; // [rsp+10h] [rbp-60h]
  unsigned int v121; // [rsp+10h] [rbp-60h]
  CDOTAHeroSlots *pHeroSlotsd; // [rsp+18h] [rbp-58h]
  CDOTAHeroSlots *pHeroSlotse; // [rsp+18h] [rbp-58h]
  unsigned int pHeroSlotsf; // [rsp+18h] [rbp-58h]
  int pHeroSlotsg; // [rsp+18h] [rbp-58h]
  CDOTAHeroSlots *pHeroSlots; // [rsp+18h] [rbp-58h]
  unsigned int pHeroSlotsa; // [rsp+18h] [rbp-58h]
  CDOTAHeroSlots *pHeroSlotsh; // [rsp+18h] [rbp-58h]
  CDOTAHeroSlots *pHeroSlotsi; // [rsp+18h] [rbp-58h]
  CDOTAHeroSlots *pHeroSlotsb; // [rsp+18h] [rbp-58h]
  CDOTAHeroSlots *pHeroSlotsc; // [rsp+18h] [rbp-58h]
  CDOTAHeroSlots *pHeroSlotsj; // [rsp+18h] [rbp-58h]
  CDOTAHeroSlots *pHeroSlotsk; // [rsp+18h] [rbp-58h]
  LoadoutListBuildInfo_t build; // [rsp+20h] [rbp-50h] BYREF

  v3 = pAvailableItems;
  m_Size = pAvailableItems->m_Size;
  for ( i = 80LL * pAvailableItems->m_Size - 80; --m_Size >= 0; i -= 80 )
  {
    v8 = v3->m_Memory.m_pMemory + i;
    if ( v8[52] != 0 )
    {
      pHeroSlotsd = v3;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *(v8 + 4));
      v3 = pHeroSlotsd;
    }
  }
  v9 = (v3->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  v3->m_Size = 0;
  p_m_Memory = &v3->m_Memory;
  if ( v9 )
  {
    pHeroSlotse = v3;
    CUtlMemory<DOTAEconItemInfo_t,int>::Purge(&v3->m_Memory);
    v3 = pHeroSlotse;
  }
  v11 = *(this + 910);
  v12 = 33 * (((4097 * nHeroID + 2127912214) >> 19) ^ (4097 * nHeroID + 2127912214) ^ 0xC761C23C);
  v13 = 9 * ((v12 - 369570787) ^ ((v12 + 374761393) << 9)) - 42973499;
  v14 = HIWORD(v13) ^ v13 ^ 0xB55A4F09;
  if ( v11 == 0
    || (v114 = v3,
        pHeroSlotsf = *(this + 910),
        v15 = CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::DoLookup<int>(
                (this + 3624),
                nHeroID,
                v14,
                v11),
        v11 = pHeroSlotsf,
        v3 = v114,
        v15 == -1) )
  {
    if ( stru_4D583D0.m_nUsed != 0 )
    {
      v117 = v3;
      pHeroSlotsa = v11;
      v42 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
              &stru_4D583D0,
              nHeroID,
              v14,
              v11);
      if ( v42 != -1 )
      {
        v43 = &stru_4D583D0.m_table.m_pMemory[v42];
        v9 = &v43->data[2] == 0;
        v44 = &v43->data[2];
        v45 = v44;
        if ( !v9 )
        {
          v46 = pHeroSlotsa;
          v47 = v117;
          if ( pHeroSlotsa == 0
            || (pHeroSlotsj = v44,
                v100 = CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::DoLookup<int>(
                         (this + 3624),
                         nHeroID,
                         v14,
                         v46),
                v45 = pHeroSlotsj,
                v47 = v117,
                v100 == -1) )
          {
            v118 = v47;
            pHeroSlotsh = v45;
            inserted = CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::DoInsertUnconstructed(
                         (this + 3624),
                         v14,
                         1);
            v45 = pHeroSlotsh;
            v49 = inserted;
            v47 = v118;
            v50 = *(this + 453) + 20LL * inserted;
            if ( v50 != -4 )
            {
              *(v50 + 4) = nHeroID;
              *(v50 + 12) = 0;
            }
          }
          else
          {
            v49 = v100;
          }
          v111 = v47;
          pHeroSlotsi = v45;
          v51 = 20 * v49;
          v52 = operator new(0x18u);
          v119 = 0;
          *v52 = 0;
          v53 = v111;
          v52[1] = 0;
          *(v52 + 4) = 0;
          *(v52 + 5) = 0;
          v54 = *(this + 453);
          build.m_nHeroID = nHeroID;
          v55 = 0;
          *(v54 + v51 + 12) = v52;
          build.m_bExplodeTreasureItems = 1;
          build.m_nCheckForOwnershipType = LoadoutOwnershipCheckType_t::LOADOUT_OWNERSHIPCHECK_AVAILABLE_ONLY;
          build.m_pHeroSlots = pHeroSlotsi;
          while ( 1 )
          {
            pHeroSlotsb = v53;
            ItemSystem();
            v56 = ItemSystem();
            v57 = pHeroSlotsb;
            if ( v55 >= v56->m_itemSchema.m_mapItems.m_nMaxElement )
              break;
            v58 = ItemSystem();
            v53 = pHeroSlotsb;
            if ( v55 < v58->m_itemSchema.m_mapItems.m_nMaxElement
              && v58->m_itemSchema.m_mapItems.m_memNodes.m_pMemory[v119].m_iNextNode >= -1 )
            {
              v59 = ItemSystem();
              ItemDefinitionByMapIndex = CEconItemSchema::GetItemDefinitionByMapIndex(&v59->m_itemSchema, v55);
              v53 = pHeroSlotsb;
              if ( ItemDefinitionByMapIndex != 0 )
              {
                v61 = __dynamic_cast(
                        ItemDefinitionByMapIndex,
                        &`typeinfo for'CEconItemDefinition,
                        &`typeinfo for'CDOTAItemDefinition,
                        0);
                v53 = pHeroSlotsb;
                v65 = v61;
                if ( v61 != 0 )
                {
                  v66 = (*(v61->_vptr_IEconItemDefinition + 14))(v61, v64, v62, v63, pHeroSlotsb);
                  v53 = pHeroSlotsb;
                  if ( v66 == 0 && (*(&v65->CEconItemDefinition + 272) & 2) == 0 )
                  {
                    v105 = (*(v65->_vptr_IEconItemDefinition + 15))(v65, v69, v67, v68, pHeroSlotsb);
                    v53 = pHeroSlotsb;
                    if ( v105 != 0 || (v106 = IsAppDota2Main(), v53 = pHeroSlotsb, v106) )
                    {
                      pHeroSlotsk = v53;
                      AddItemToLoadoutList(&build, 0, v65, *(*(this + 453) + v51 + 12));
                      v53 = pHeroSlotsk;
                    }
                  }
                }
              }
            }
            ++v119;
            ++v55;
          }
          v74 = *(this + 453);
          m_pString_low = SLODWORD(pHeroSlotsb->m_szSlotText[0].m_pString);
          v76 = *(v74 + v51 + 12);
          v77 = *v76;
          v78 = *(v76 + 8);
          if ( *v76 != 0 )
          {
            m_pString = pHeroSlotsb->m_szSlotText[2].m_pString;
            v80 = v77 + m_pString_low;
            if ( v77 + m_pString_low > m_pString )
            {
              CUtlMemory<DOTAEconItemInfo_t,int>::Grow(p_m_Memory, v80 - m_pString);
              v57 = pHeroSlotsb;
            }
            v57->m_nHeroID = v80;
            if ( v78 != 0 )
            {
              if ( v77 > 0 )
              {
                v81 = v78;
                v82 = v78 + 40;
                v83 = 80 * m_pString_low - v78;
                for ( j = 0; j < v77; ++j )
                {
                  v85 = v57->m_pHeroSlots + v81 + v83;
                  if ( v85 != 0 )
                  {
                    v86 = *(v81 + 8);
                    *v85 = *v81;
                    *(v85 + 1) = v86;
                    v87 = *(v81 + 24);
                    *(v85 + 2) = *(v81 + 16);
                    *(v85 + 3) = v87;
                    *(v85 + 5) = *v82;
                    v88 = *(v82 + 12);
                    v85[52] = v88;
                    v89 = *(v82 - 8);
                    *(v85 + 4) = v89;
                    *(v85 + 12) = *(v82 + 8);
                    if ( v88 != 0 && v89 != 0 )
                    {
                      pHeroSlotsc = *(v82 - 8);
                      if ( pHeroSlotsc != 0 )
                      {
                        v112 = v57;
                        v120 = v83;
                        v90 = strlen(*(v82 - 8));
                        v83 = v120;
                        v57 = v112;
                        v91 = v90 + 1;
                        v92 = v90 + 1;
                      }
                      else
                      {
                        v92 = 1;
                        v91 = 1;
                      }
                      v108 = v57;
                      v113 = v83;
                      v121 = v91;
                      v93 = (**g_pMemAlloc)(g_pMemAlloc, v92);
                      *(v85 + 4) = v93;
                      _V_strncpy(v93, pHeroSlotsc, v121);
                      v57 = v108;
                      v83 = v113;
                    }
                    *(v85 + 28) = *(v81 + 56);
                    v85[58] = *(v81 + 58) & 0x1F | v85[58] & 0xE0;
                    v85[59] = *(v81 + 59) & 0xF | v85[59] & 0xF0;
                    v94 = *(v81 + 60) & 0x1F | v85[60] & 0xE0;
                    v85[60] = v94;
                    v85[60] = *(v81 + 60) & 0x60 | v94 & 0x9F;
                    v95 = *(v81 + 61) & 0x1F | v85[61] & 0xE0;
                    v85[61] = v95;
                    v96 = *(v81 + 61) & 0x60 | v95 & 0x9F;
                    v85[61] = v96;
                    v85[61] = *(v81 + 61) & 0x80 | v96 & 0x7F;
                    v97 = *(v81 + 62) & 1 | v85[62] & 0xFE;
                    v85[62] = v97;
                    v98 = *(v81 + 62) & 2 | v97 & 0xFD;
                    v85[62] = v98;
                    v99 = *(v81 + 62) & 4 | v98 & 0xFB;
                    v85[62] = v99;
                    v85[62] = *(v81 + 62) & 0x38 | v99 & 0xC7;
                    v85[63] = *(v81 + 63);
                    v85[64] = *(v81 + 64);
                    *(v85 + 17) = *(v81 + 68);
                    *(v85 + 18) = *(v81 + 72);
                    *(v85 + 19) = *(v81 + 76);
                  }
                  v81 += 80;
                  v82 += 80;
                }
              }
            }
            else if ( v77 > 0 )
            {
              v101 = 0;
              v102 = 80 * m_pString_low;
              do
              {
                v103 = v57->m_pHeroSlots + v102;
                if ( v103 != 0 )
                {
                  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
                  *v103 = 0;
                  *(v103 + 16) = 0;
                  *(v103 + 32) = 0;
                  *(v103 + 40) = 0;
                  *(v103 + 8) = m_Data;
                  *(v103 + 24) = m_Data;
                  *(v103 + 52) = 0;
                  *(v103 + 48) = 0;
                }
                ++v101;
                v102 += 80;
              }
              while ( v77 > v101 );
            }
          }
        }
      }
    }
  }
  else
  {
    v16 = *(this + 453);
    v17 = v114->m_Size;
    v18 = *(v16 + 20LL * v15 + 12);
    v19 = *v18;
    v20 = *(v18 + 8);
    if ( *v18 != 0 )
    {
      m_nAllocationCount = v114->m_Memory.m_nAllocationCount;
      v22 = v19 + v17;
      if ( v19 + v17 > m_nAllocationCount )
      {
        pHeroSlotsg = v19;
        CUtlMemory<DOTAEconItemInfo_t,int>::Grow(p_m_Memory, v22 - m_nAllocationCount);
        v3 = v114;
        v19 = pHeroSlotsg;
      }
      v3->m_Size = v22;
      if ( v20 != 0 )
      {
        if ( v19 > 0 )
        {
          v23 = 0;
          v24 = v20 + 40;
          v25 = 80 * v17 - v20;
          do
          {
            v26 = v3->m_Memory.m_pMemory + v20 + v25;
            if ( v26 != 0 )
            {
              v27 = *(v20 + 8);
              *v26 = *v20;
              *(v26 + 1) = v27;
              v28 = *(v20 + 24);
              *(v26 + 2) = *(v20 + 16);
              *(v26 + 3) = v28;
              *(v26 + 5) = *v24;
              v29 = *(v24 + 12);
              v26[52] = v29;
              v30 = *(v24 - 8);
              *(v26 + 4) = v30;
              *(v26 + 12) = *(v24 + 8);
              if ( v29 != 0 && v30 != 0 )
              {
                v31 = *(v24 - 8);
                pHeroSlots = v31;
                if ( v31 != 0 )
                {
                  v109 = v3;
                  v115 = v19;
                  v32 = strlen(v31);
                  v19 = v115;
                  v3 = v109;
                  v33 = v32 + 1;
                  v34 = v32 + 1;
                }
                else
                {
                  v34 = 1;
                  v33 = 1;
                }
                v107 = v3;
                v116 = v19;
                v110 = v33;
                v35 = (**g_pMemAlloc)(g_pMemAlloc, v34);
                *(v26 + 4) = v35;
                _V_strncpy(v35, pHeroSlots, v110);
                v3 = v107;
                v19 = v116;
              }
              *(v26 + 28) = *(v20 + 56);
              v26[58] = *(v20 + 58) & 0x1F | v26[58] & 0xE0;
              v26[59] = *(v20 + 59) & 0xF | v26[59] & 0xF0;
              v36 = *(v20 + 60) & 0x1F | v26[60] & 0xE0;
              v26[60] = v36;
              v26[60] = *(v20 + 60) & 0x60 | v36 & 0x9F;
              v37 = *(v20 + 61) & 0x1F | v26[61] & 0xE0;
              v26[61] = v37;
              v38 = *(v20 + 61) & 0x60 | v37 & 0x9F;
              v26[61] = v38;
              v26[61] = *(v20 + 61) & 0x80 | v38 & 0x7F;
              v39 = *(v20 + 62) & 1 | v26[62] & 0xFE;
              v26[62] = v39;
              v40 = *(v20 + 62) & 2 | v39 & 0xFD;
              v26[62] = v40;
              v41 = *(v20 + 62) & 4 | v40 & 0xFB;
              v26[62] = v41;
              v26[62] = *(v20 + 62) & 0x38 | v41 & 0xC7;
              v26[63] = *(v20 + 63);
              v26[64] = *(v20 + 64);
              *(v26 + 17) = *(v20 + 68);
              *(v26 + 18) = *(v20 + 72);
              *(v26 + 19) = *(v20 + 76);
            }
            ++v23;
            v20 += 80;
            v24 += 80;
          }
          while ( v19 > v23 );
        }
      }
      else if ( v19 > 0 )
      {
        v70 = 0;
        v71 = v17;
        do
        {
          v72 = &v3->m_Memory.m_pMemory[v71];
          if ( v72 != 0 )
          {
            v73 = INVALID_ITEM_DEF_INDEX.m_Data;
            v72->m_Id.m_nItemID.m_Data = 0;
            v72->m_packageId.m_nItemID.m_Data = 0;
            v72->m_pSet.m_szName = 0;
            v72->m_pSet.m_pRef = 0;
            v72->m_Id.m_nItemDefIndex.m_Data = v73;
            v72->m_packageId.m_nItemDefIndex.m_Data = v73;
            v72->m_pSet.m_bDestructName = 0;
            v72->m_pSet.m_unSchemaGeneration = 0;
          }
          ++v70;
          ++v71;
        }
        while ( v19 > v70 );
      }
    }
  }
}


// CDOTAInventoryManager::BuildLoadoutItemListForItem  (line 2816, @0x0000000002e447b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<DOTAEconItemInfo_t>, DoLookup<int>, Element, Find, GetItemSlotsForHero, Purge, RemoveAll, V_memset, memset, operator(), operator[], ~CSchemaFieldHandle, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~DOTAEconItemInfo_t
// calls: memset, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>, AddItemToLoadoutList, CUtlMemory<DOTAEconItemInfo_t, int>::Purge, CUtlVectorBase<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CDOTAInventoryManager::BuildLoadoutItemListForItem(
        CDOTAInventoryManager *const this,
        int nHeroID,
        CEconItemView *pEconItemView,
        const GameItemDefinition_t *pItemDef,
        EconItemIDs_t *pLoadoutItems,
        style_index_t *pStyleIndices,
        int nLoadoutSlotCount)
{
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // edx
  int v14; // eax
  CDOTAHeroSlots *v15; // rax
  DOTAEconItemInfo_t *m_pMemory; // rcx
  __int64 m_Size; // r8
  int v18; // r15d
  DOTAEconItemInfo_t *v19; // rdx
  DOTAEconItemInfo_t *v20; // rdi
  char v21; // al
  EconItemIDs_t *v22; // rax
  __int64 v23; // rbx
  LoadoutListBuildInfo_t build; // [rsp+10h] [rbp-70h] BYREF
  CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> > items; // [rsp+30h] [rbp-50h] BYREF

  memset(pLoadoutItems, 0, 16LL * nLoadoutSlotCount);
  if ( stru_4D583D0.m_nUsed != 0 )
  {
    v12 = 33 * (((4097 * nHeroID + 2127912214) >> 19) ^ (4097 * nHeroID + 2127912214) ^ 0xC761C23C);
    v13 = 9 * ((v12 - 369570787) ^ ((v12 + 374761393) << 9)) - 42973499;
    v14 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
            &stru_4D583D0,
            nHeroID,
            HIWORD(v13) ^ v13 ^ 0xB55A4F09,
            v11);
    if ( v14 != -1 )
    {
      v15 = &stru_4D583D0.m_table.m_pMemory[v14].data[2];
      if ( v15 != 0 )
      {
        build.m_nHeroID = nHeroID;
        build.m_bExplodeTreasureItems = 1;
        build.m_nCheckForOwnershipType = LoadoutOwnershipCheckType_t::LOADOUT_OWNERSHIPCHECK_DONT_CARE;
        build.m_pHeroSlots = v15;
        items.m_Size = 0;
        items.m_Memory.m_pMemory = 0;
        items.m_Memory.m_nAllocationCount = 0;
        items.m_Memory.m_nGrowSize = 0;
        AddItemToLoadoutList(&build, pEconItemView, pItemDef, &items);
        m_Size = items.m_Size;
        if ( items.m_Size <= 0 )
        {
          v18 = items.m_Size - 1;
        }
        else
        {
          m_pMemory = items.m_Memory.m_pMemory;
          v18 = items.m_Size - 1;
          v19 = items.m_Memory.m_pMemory + 1;
          v20 = &items.m_Memory.m_pMemory[(items.m_Size - 1) + 1];
          while ( 1 )
          {
            v21 = (8 * *(m_pMemory + 58)) >> 3;
            if ( v21 >= 0 && nLoadoutSlotCount > v21 )
            {
              v22 = &pLoadoutItems[v21];
              v22->m_nItemID.m_Data = m_pMemory->m_Id.m_nItemID.m_Data;
              v22->m_nItemDefIndex.m_Data = m_pMemory->m_Id.m_nItemDefIndex.m_Data;
              if ( pStyleIndices != 0 )
                pStyleIndices[(8 * *(m_pMemory + 58)) >> 3].m_Data = *(m_pMemory + 61) & 0x1F;
            }
            m_pMemory = v19;
            if ( v19 == v20 )
              break;
            ++v19;
          }
        }
        v23 = 80 * m_Size - 80;
        while ( v18 >= 0 )
        {
          if ( *(&items.m_Memory.m_pMemory->m_pSet.m_bDestructName + v23) )
            (*(*g_pMemAlloc + 16LL))(
              g_pMemAlloc,
              *(&items.m_Memory.m_pMemory->m_pSet.m_szName + v23),
              *g_pMemAlloc,
              m_pMemory);
          v23 -= 80;
          --v18;
        }
        items.m_Size = 0;
        if ( (items.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<DOTAEconItemInfo_t,int>::Purge(&items.m_Memory);
          if ( (items.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<DOTAEconItemInfo_t,int>::Purge(&items.m_Memory);
        }
      }
    }
  }
}


// CDOTAInventoryManager::BuildAvailableItemListContainingItem  (line 2848, @0x0000000002e3ee80, libserver.so)  // inlines: ComputeItemContainmentDepth, IsValidIndex, Purge, RemoveAll
// calls: ItemSystem, CEconItemSchema::GetItemDefinitionByMapIndex, __dynamic_cast, ComputeItemContainmentDepth_R, IsAppDota2Main
// globals: `typeinfo for'CDOTAItemDefinition
void __fastcall CDOTAInventoryManager::BuildAvailableItemListContainingItem(
        CDOTAInventoryManager *const this,
        const GameItemDefinition_t *pContainedItemDef,
        CUtlVector<ContainedItemInfo_t,CUtlMemory<ContainedItemInfo_t,int> > *pAvailableItems)
{
  bool v5; // zf
  __int64 v6; // r13
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v7; // ebx
  CEconItemSystem *v8; // rax
  const CEconItemDefinition *ItemDefinitionByMapIndex; // rax
  GameItemDefinition_t *v10; // rax
  GameItemDefinition_t *v11; // r14
  CEconItemSystem *v12; // rax

  v5 = (pAvailableItems->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  pAvailableItems->m_Size = 0;
  if ( v5 )
  {
    if ( pAvailableItems->m_Memory.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      pAvailableItems->m_Memory.m_pMemory = 0;
    }
    pAvailableItems->m_Memory.m_nAllocationCount = 0;
  }
  v6 = 0;
  v7 = 0;
  if ( pContainedItemDef != 0 )
  {
    while ( 1 )
    {
      ItemSystem();
      if ( v7 >= ItemSystem()->m_itemSchema.m_mapItems.m_nMaxElement )
        break;
      v12 = ItemSystem();
      if ( v7 < v12->m_itemSchema.m_mapItems.m_nMaxElement
        && v12->m_itemSchema.m_mapItems.m_memNodes.m_pMemory[v6].m_iNextNode >= -1 )
      {
        v8 = ItemSystem();
        ItemDefinitionByMapIndex = CEconItemSchema::GetItemDefinitionByMapIndex(&v8->m_itemSchema, v7);
        if ( ItemDefinitionByMapIndex != 0 )
        {
          v10 = __dynamic_cast(
                  ItemDefinitionByMapIndex,
                  &`typeinfo for'CEconItemDefinition,
                  &`typeinfo for'CDOTAItemDefinition,
                  0);
          v11 = v10;
          if ( v10 != 0
            && (*(v10->_vptr_IEconItemDefinition + 14))(v10) == 0
            && (*(&v11->CEconItemDefinition + 272) & 2) == 0
            && ((*(v11->_vptr_IEconItemDefinition + 15))(v11) != 0 || IsAppDota2Main()) )
          {
            ComputeItemContainmentDepth_R(pContainedItemDef, v11, 0);
          }
        }
      }
      ++v7;
      ++v6;
    }
  }
}


// ComputeItemContainmentDepth_R  (line 2894, @0x0000000002e3ea30, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<rolled_item_defs_t>, Element, Get, GetTypedRef, Purge, RemoveAll, _V_strcmp, operator const CEconItemAttributeDefinition*, operator[], ~CCopyableUtlVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~rolled_item_defs_t
// calls: __cxa_guard_acquire, CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle, __cxa_guard_release, __cxa_atexit, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, FindAttribute_UnsafeBitwiseCast<CAttribute_String, char const*, CDOTAItemDefinition>, GetItemSchema, CEconItemSchema::GetLootListByName, __dynamic_cast, CUtlMemory<const CEconLootListDefinition*, int>::Purge, CUtlMemory<rolled_item_defs_t, int>::Purge (15 total)
// callers: CDOTAInventoryManager::ComputeItemContainmentDepth, CDOTAInventoryManager::IsItemContainedWithinItem, CDOTAInventoryManager::BuildAvailableItemListContainingItem
// strings: "treasure_chest", "treasure loot list"
// globals: `guard variable for'ComputeItemContainmentDepth_R(CDOTAItemDefinition const*,CDOTAItemDefinition const*,int)::pAttrDef_TreasureLootList, ComputeItemContainmentDepth_R(CDOTAItemDefinition const*,CDOTAItemDefinition const*,int)::pAttrDef_TreasureLootList, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle(), `typeinfo for'CDOTAItemDefinition
int __fastcall ComputeItemContainmentDepth_R(
        const GameItemDefinition_t *pItemDef,
        const GameItemDefinition_t *pParentItemDef,
        int nDepth)
{
  bundleinfo_t *m_BundleInfo; // r13
  int v7; // r15d
  __int64 v8; // rbx
  int v9; // r12d
  int result; // eax
  const char *v11; // rax
  CEconItemSchema *v12; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  uint32 m_unResetCount; // r12d
  const char *m_szName; // r13
  CEconItemSchema *v16; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v18; // rbx
  GameItemSchema_t *ItemSchema; // rax
  const CEconLootListDefinition *LootListByName; // rax
  int m_Size; // r12d
  int v22; // r15d
  unsigned __int64 v23; // rbx
  __int64 v24; // r12
  const GameItemDefinition_t *v25; // rsi
  const CEconItemDefinition *m_pItemDef; // rdi
  __int64 i; // r14
  CUtlMemory<const CEconLootListDefinition*,int> *v28; // rbx
  bool v29; // zf
  int v30; // [rsp+Ch] [rbp-64h]
  int v31; // [rsp+Ch] [rbp-64h]
  const char *pszLootList; // [rsp+18h] [rbp-58h] BYREF
  CUtlVector<rolled_item_defs_t,CUtlMemory<rolled_item_defs_t,int> > vecItems; // [rsp+20h] [rbp-50h] BYREF

  if ( pItemDef == 0 || pParentItemDef == 0 )
    return -1;
  if ( pItemDef == pParentItemDef )
    return nDepth;
  if ( (*(pParentItemDef->_vptr_IEconItemDefinition + 16))(pParentItemDef) != 0 )
  {
    m_BundleInfo = pParentItemDef->m_BundleInfo;
    if ( m_BundleInfo != 0 && m_BundleInfo->vecItemDefs.m_Size > 0 )
    {
      v7 = nDepth + 1;
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        result = ComputeItemContainmentDepth_R(pItemDef, m_BundleInfo->vecItemDefs.m_Memory.m_pMemory[v8], v7);
        if ( result >= 0 )
          break;
        ++v9;
        ++v8;
        if ( m_BundleInfo->vecItemDefs.m_Size <= v9 )
          return -1;
      }
      return result;
    }
    return -1;
  }
  v11 = (*(pParentItemDef->_vptr_IEconItemDefinition + 1))(pParentItemDef);
  if ( v11 == 0 || strcmp(v11, "treasure_chest") != 0 )
    return -1;
  if ( `guard variable for'ComputeItemContainmentDepth_R(CDOTAItemDefinition const*,CDOTAItemDefinition const*,int)::pAttrDef_TreasureLootList == 0
    && __cxa_guard_acquire(&`guard variable for'ComputeItemContainmentDepth_R(CDOTAItemDefinition const*,CDOTAItemDefinition const*,int)::pAttrDef_TreasureLootList) != 0 )
  {
    CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle(
      &ComputeItemContainmentDepth_R(CDOTAItemDefinition const*,CDOTAItemDefinition const*,int)::pAttrDef_TreasureLootList,
      "treasure loot list");
    __cxa_guard_release(&`guard variable for'ComputeItemContainmentDepth_R(CDOTAItemDefinition const*,CDOTAItemDefinition const*,int)::pAttrDef_TreasureLootList);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &ComputeItemContainmentDepth_R(CDOTAItemDefinition const*,CDOTAItemDefinition const*,int)::pAttrDef_TreasureLootList,
      &_dso_handle);
  }
  if ( ComputeItemContainmentDepth_R(CDOTAItemDefinition const*,CDOTAItemDefinition const*,int)::pAttrDef_TreasureLootList.m_szName != 0 )
  {
    v12 = GEconItemSchema();
    m_pRef = ComputeItemContainmentDepth_R(CDOTAItemDefinition const*,CDOTAItemDefinition const*,int)::pAttrDef_TreasureLootList.m_pRef;
    m_unResetCount = v12->m_unResetCount;
    if ( m_unResetCount != ComputeItemContainmentDepth_R(CDOTAItemDefinition const*,CDOTAItemDefinition const*,int)::pAttrDef_TreasureLootList.m_unSchemaGeneration )
    {
      m_szName = ComputeItemContainmentDepth_R(CDOTAItemDefinition const*,CDOTAItemDefinition const*,int)::pAttrDef_TreasureLootList.m_szName;
      v16 = GEconItemSchema();
      AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v16, m_szName);
      ComputeItemContainmentDepth_R(CDOTAItemDefinition const*,CDOTAItemDefinition const*,int)::pAttrDef_TreasureLootList.m_unSchemaGeneration = m_unResetCount;
      m_pRef = AttributeDefinitionByName;
      ComputeItemContainmentDepth_R(CDOTAItemDefinition const*,CDOTAItemDefinition const*,int)::pAttrDef_TreasureLootList.m_pRef = AttributeDefinitionByName;
    }
  }
  else
  {
    m_pRef = 0;
  }
  if ( !FindAttribute_UnsafeBitwiseCast<CAttribute_String,char const*,CDOTAItemDefinition>(
          pParentItemDef,
          m_pRef,
          &pszLootList) )
    return -1;
  v18 = pszLootList;
  ItemSchema = GetItemSchema();
  LootListByName = CEconItemSchema::GetLootListByName(ItemSchema, v18, 0);
  if ( LootListByName == 0 )
    return -1;
  vecItems.m_Size = 0;
  vecItems.m_Memory.m_pMemory = 0;
  vecItems.m_Memory.m_nAllocationCount = 0;
  vecItems.m_Memory.m_nGrowSize = 0;
  (*(LootListByName->_vptr_IEconLootListDefinition + 23))(LootListByName, &vecItems, 1);
  m_Size = vecItems.m_Size;
  if ( vecItems.m_Size <= 0 )
  {
    result = -1;
  }
  else
  {
    v22 = nDepth + 1;
    v23 = 0;
    v24 = 16 * (3LL * (vecItems.m_Size - 1) + 3);
    do
    {
      m_pItemDef = vecItems.m_Memory.m_pMemory[v23 / 0x30].m_pItemDef;
      if ( m_pItemDef != 0 )
        v25 = __dynamic_cast(m_pItemDef, &`typeinfo for'CEconItemDefinition, &`typeinfo for'CDOTAItemDefinition, 0);
      else
        v25 = 0;
      result = ComputeItemContainmentDepth_R(pItemDef, v25, v22);
      if ( result >= 0 )
      {
        m_Size = vecItems.m_Size;
        goto LABEL_31;
      }
      v23 += 48LL;
    }
    while ( v23 != v24 );
    m_Size = vecItems.m_Size;
    result = -1;
  }
LABEL_31:
  for ( i = 48LL * m_Size - 48; --m_Size >= 0; i -= 48 )
  {
    v28 = (vecItems.m_Memory.m_pMemory + i);
    v29 = (*(&vecItems.m_Memory.m_pMemory->m_vecAffectingLootLists.m_Memory.m_nGrowSize + i) & 0xC0000000) == 0;
    *(&vecItems.m_Memory.m_pMemory->m_vecAffectingLootLists.m_Size + i) = 0;
    if ( v29 )
    {
      v30 = result;
      CUtlMemory<CEconLootListDefinition const*,int>::Purge(v28 + 2);
      result = v30;
      if ( (v28[2].m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEconLootListDefinition const*,int>::Purge(v28 + 2);
        result = v30;
      }
    }
  }
  vecItems.m_Size = 0;
  if ( (vecItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    v31 = result;
    CUtlMemory<rolled_item_defs_t,int>::Purge(&vecItems.m_Memory);
    result = v31;
    if ( (vecItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<rolled_item_defs_t,int>::Purge(&vecItems.m_Memory);
      return v31;
    }
  }
  return result;
}


// CDOTAInventoryManager::ComputeItemContainmentDepth  (line 2951, @0x0000000002e3eda0, libserver.so)
// calls: ComputeItemContainmentDepth_R
int __fastcall CDOTAInventoryManager::ComputeItemContainmentDepth(
        CDOTAInventoryManager *const this,
        const GameItemDefinition_t *pItemDef,
        const GameItemDefinition_t *pParentItemDef)
{
  return ComputeItemContainmentDepth_R(pItemDef, pParentItemDef, 0);
}


// CDOTAInventoryManager::IsItemContainedWithinItem  (line 2956, @0x0000000002e3edc0, libserver.so)  // inlines: ComputeItemContainmentDepth
// calls: ComputeItemContainmentDepth_R
bool __fastcall CDOTAInventoryManager::IsItemContainedWithinItem(
        CDOTAInventoryManager *const this,
        const GameItemDefinition_t *pItemDef,
        const GameItemDefinition_t *pParentItemDef)
{
  return ComputeItemContainmentDepth_R(pItemDef, pParentItemDef, 0) > 0;
}


// CDOTAInventoryManager::IsItemContainedWithinItem  (line 2962, @0x0000000002e3ede0, libserver.so)  // inlines: ComputeItemContainmentDepth, IsItemContainedWithinItem
// calls: GetItemSchema, CEconItemSchema::GetItemDefinition, __dynamic_cast, ComputeItemContainmentDepth_R
// globals: `typeinfo for'CDOTAItemDefinition
bool __fastcall CDOTAInventoryManager::IsItemContainedWithinItem(
        CDOTAInventoryManager *const this,
        item_definition_index_t nItemDef,
        item_definition_index_t nParentItemDef)
{
  GameItemSchema_t *ItemSchema; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  const GameItemDefinition_t *v7; // rbx
  GameItemSchema_t *v8; // rax
  const CEconItemDefinition *v9; // rax
  const GameItemDefinition_t *v10; // rsi

  ItemSchema = GetItemSchema();
  ItemDefinition = CEconItemSchema::GetItemDefinition(ItemSchema, nItemDef, 0);
  if ( ItemDefinition != 0 )
    v7 = __dynamic_cast(ItemDefinition, &`typeinfo for'CEconItemDefinition, &`typeinfo for'CDOTAItemDefinition, 0);
  else
    v7 = 0;
  v8 = GetItemSchema();
  v9 = CEconItemSchema::GetItemDefinition(v8, nParentItemDef, 0);
  if ( v9 != 0 )
    v10 = __dynamic_cast(v9, &`typeinfo for'CEconItemDefinition, &`typeinfo for'CDOTAItemDefinition, 0);
  else
    v10 = 0;
  return ComputeItemContainmentDepth_R(v7, v10, 0) > 0;
}


// CDOTAInventoryManager::BuildItemListForItem  (line 2970, @0x0000000002e449e0, libserver.so)  // inlines: Destruct<DOTAEconItemInfo_t>, Element, Purge, RemoveAll, operator[], ~CSchemaFieldHandle, ~DOTAEconItemInfo_t
// calls: CUtlMemory<DOTAEconItemInfo_t, int>::Purge, ItemSystem, CEconItemSchema::GetItemDefinition, __dynamic_cast, AddItemToLoadoutList
// globals: `typeinfo for'CDOTAItemDefinition
void __fastcall CDOTAInventoryManager::BuildItemListForItem(
        CDOTAInventoryManager *const this,
        item_definition_index_t nItemDef,
        bool bExplodeTreasureItems,
        CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> > *pItems)
{
  int m_Size; // ebx
  __int64 i; // r12
  char *v9; // rax
  bool v10; // zf
  CEconItemSystem *v11; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  const GameItemDefinition_t *v13; // rax
  LoadoutListBuildInfo_t build; // [rsp+0h] [rbp-50h] BYREF

  m_Size = pItems->m_Size;
  for ( i = 80LL * pItems->m_Size - 80; --m_Size >= 0; i -= 80 )
  {
    v9 = pItems->m_Memory.m_pMemory + i;
    if ( v9[52] != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *(v9 + 4));
  }
  v10 = (pItems->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  pItems->m_Size = 0;
  if ( v10 )
    CUtlMemory<DOTAEconItemInfo_t,int>::Purge(&pItems->m_Memory);
  v11 = ItemSystem();
  ItemDefinition = CEconItemSchema::GetItemDefinition(&v11->m_itemSchema, nItemDef, 0);
  if ( ItemDefinition != 0 )
  {
    v13 = __dynamic_cast(ItemDefinition, &`typeinfo for'CEconItemDefinition, &`typeinfo for'CDOTAItemDefinition, 0);
    if ( v13 != 0 )
    {
      build.m_bExplodeTreasureItems = bExplodeTreasureItems;
      build.m_nCheckForOwnershipType = LoadoutOwnershipCheckType_t::LOADOUT_OWNERSHIPCHECK_DONT_CARE;
      build.m_nHeroID = -1;
      build.m_pHeroSlots = 0;
      AddItemToLoadoutList(&build, 0, v13, pItems);
    }
  }
}


// CDOTAPlayerInventory::OnTestItemDefinitionAdded  (line 3004, @0x0000000002e37790, libserver.so)  // inlines: MakeTestItemID
void __fastcall CDOTAPlayerInventory::OnTestItemDefinitionAdded(
        CDOTAPlayerInventory *const this,
        item_definition_index_t unDefIndex)
{
  (*(this->_vptr_ISharedObjectListener + 16))(this, 0, unDefIndex.m_Data, unDefIndex.m_Data - 65537LL);
}


// CDOTAPlayerInventory::OnTestItemDefinitionRemoved  (line 3009, @0x0000000002e377b0, libserver.so)  // inlines: MakeTestItemID
void __fastcall CDOTAPlayerInventory::OnTestItemDefinitionRemoved(
        CDOTAPlayerInventory *const this,
        item_definition_index_t unDefIndex)
{
  (*(this->_vptr_ISharedObjectListener + 16))(this, 1, unDefIndex.m_Data, unDefIndex.m_Data - 65537LL);
}


// CDOTAPlayerInventory::GetMaxItemCount  (line 3017, @0x0000000002e33390, libserver.so)  // inlines: FindTypeCache, GetObject, GetSOCacheGameAccountClient
// calls: GCSDK::CSharedObjectCache::FindBaseTypeCache
int __fastcall CDOTAPlayerInventory::GetMaxItemCount(const CDOTAPlayerInventory *const this)
{
  GCSDK::CGCClientSharedObjectCache *m_pSOCache; // rdi
  GCSDK::CSharedObjectTypeCache *BaseTypeCache; // rax
  int result; // eax
  GCSDK::CSharedObject *v4; // rax

  m_pSOCache = this->m_pSOCache;
  if ( m_pSOCache == 0 )
    return 10000;
  BaseTypeCache = GCSDK::CSharedObjectCache::FindBaseTypeCache(m_pSOCache, 7);
  if ( BaseTypeCache == 0 || BaseTypeCache->m_vecObjects.m_Size != 1 )
    return 10000;
  v4 = *BaseTypeCache->m_vecObjects.m_Memory.m_pMemory;
  if ( v4 == 0 )
    return 10000;
  result = LODWORD(v4[4]._vptr_CSharedObject) + 10000;
  if ( result > 34000 )
    return 34000;
  return result;
}


// CDOTAPlayerInventory::SOCacheSubscribed  (line 3036, @0x0000000002e4d180, libserver.so)
// calls: CPlayerInventory::SOCacheSubscribed
void __fastcall CDOTAPlayerInventory::SOCacheSubscribed(
        CDOTAPlayerInventory *const this,
        GCSDK::SOID_t owner,
        GCSDK::ESOCacheEvent eEvent)
{
  CPlayerInventory::SOCacheSubscribed(this, owner, eEvent);
}


// CDOTAPlayerInventory::SOUpdated  (line 3050, @0x0000000002e4d190, libserver.so)
// calls: CPlayerInventory::SOUpdated
void __fastcall CDOTAPlayerInventory::SOUpdated(
        CDOTAPlayerInventory *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  CPlayerInventory::SOUpdated(this, owner, pObject, eEvent);
}


// CDOTAPlayerInventory::SODestroyed  (line 3065, @0x0000000002e4d1a0, libserver.so)
// calls: CPlayerInventory::SODestroyed
void __fastcall CDOTAPlayerInventory::SODestroyed(
        CDOTAPlayerInventory *const this,
        GCSDK::SOID_t owner,
        const GCSDK::CSharedObject *pObject,
        GCSDK::ESOCacheEvent eEvent)
{
  CPlayerInventory::SODestroyed(this, owner, pObject, eEvent);
}


// CDOTAPlayerInventory::OnHasNewItems  (line 3081, @0x0000000002e306e0, libserver.so)
void __fastcall CDOTAPlayerInventory::OnHasNewItems(CDOTAPlayerInventory *const this, int nCount, itemid_t *pNewItems)
{
  ;
}


// CDOTAPlayerInventory::ValidateInventoryPositions  (line 3176, @0x0000000002e4d1b0, libserver.so)
// calls: CPlayerInventory::ValidateInventoryPositions
void __fastcall CDOTAPlayerInventory::ValidateInventoryPositions(CDOTAPlayerInventory *const this)
{
  CPlayerInventory::ValidateInventoryPositions(this);
}


// CDOTAPlayerInventory::DumpInventoryToConsole  (line 3711, @0x0000000002e306f0, libserver.so)
void __fastcall CDOTAPlayerInventory::DumpInventoryToConsole(CDOTAPlayerInventory *const this, bool bRoot)
{
  ;
}


// CDOTAPlayerInventory::GetEconItemDefInFreeLoadout  (line 3752, @0x0000000002e40330, libserver.so)  // inlines: CFreeHeroLoadout, Element, Find, GetItemDefInLoadoutSlot, Node_t, item_definition_index_t, memset, operator[]
// calls: CUtlRBTree<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CFreeHeroLoadout>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int>, short unsigned int> >::Find
// globals: INVALID_ITEM_DEF_INDEX
item_definition_index_t __fastcall CDOTAPlayerInventory::GetEconItemDefInFreeLoadout(
        CDOTAPlayerInventory *const this,
        int nHeroID,
        int iSlotIndex)
{
  __int64 v4; // rbx
  CUtlMap<int,CFreeHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t *p_elem; // rax
  unsigned __int16 v6; // ax
  CUtlMap<int,CFreeHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+0h] [rbp-C0h] BYREF

  v4 = iSlotIndex;
  p_elem = &search.elem;
  do
  {
    p_elem = (p_elem + 2);
    HIWORD(p_elem[-1].m_pFreeHeroLoadoutItemView[15]) = 0;
  }
  while ( p_elem != search.elem.m_pFreeHeroLoadoutItemView );
  search.key = nHeroID;
  memset(&search.elem, 0, sizeof(search.elem));
  v6 = CUtlRBTree<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_FreeLoadoutItems.m_Tree,
         &search);
  if ( v6 == 0xFFFF )
    return INVALID_ITEM_DEF_INDEX;
  else
    return this->m_FreeLoadoutItems.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem.m_FreeHeroLoadout[v4].m_Data;
}


// CDOTAPlayerInventory::GetEconItemViewInFreeLoadout  (line 3764, @0x0000000002e3fd60, libserver.so)  // inlines: CFreeHeroLoadout, Element, Find, GetItemDefInLoadoutSlot, GetItemViewInLoadoutSlot, Node_t, SetItemViewInLoadoutSlot, item_definition_index_t, memset, operator[]
// calls: CUtlRBTree<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CFreeHeroLoadout>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int>, short unsigned int> >::Find, operator new, CEconItemView::CEconItemView, CEconItemView::Init, operator delete, _Unwind_Resume
// callers: CDOTAPlayerInventory::GetItemInLoadout
// globals: INVALID_ITEM_DEF_INDEX, INVALID_STYLE_INDEX
CEconItemView *__fastcall CDOTAPlayerInventory::GetEconItemViewInFreeLoadout(
        CDOTAPlayerInventory *const this,
        int nHeroID,
        int iSlotIndex)
{
  CUtlMap<int,CFreeHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t *p_elem; // rax
  __int64 v4; // r13
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // rbx
  UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout>::Node_t,short unsigned int> *v8; // rax
  item_definition_index_t v9; // r14
  CEconItemView *v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD); // rax
  __int16 v12; // ax
  CEconItemView *v13; // rdx
  CEconItemView *v14; // r15
  CEconItemView *v16; // [rsp+8h] [rbp-E8h]
  CUtlMap<int,CFreeHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+10h] [rbp-E0h] BYREF

  p_elem = &search.elem;
  v4 = iSlotIndex;
  do
  {
    p_elem = (p_elem + 2);
    HIWORD(p_elem[-1].m_pFreeHeroLoadoutItemView[15]) = 0;
  }
  while ( p_elem != search.elem.m_pFreeHeroLoadoutItemView );
  search.key = nHeroID;
  memset(&search.elem, 0, sizeof(search.elem));
  v6 = CUtlRBTree<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_FreeLoadoutItems.m_Tree,
         &search);
  if ( v6 == 0xFFFF )
    return 0;
  v7 = 88LL * v6;
  v8 = &this->m_FreeLoadoutItems.m_Tree.m_Elements.m_pMemory[v7 / 0x58];
  v9.m_Data = v8->m_Data.elem.m_FreeHeroLoadout[v4].m_Data;
  if ( v9.m_Data == INVALID_ITEM_DEF_INDEX.m_Data )
    return 0;
  v10 = v8->m_Data.elem.m_pFreeHeroLoadoutItemView[v4];
  if ( v10 == 0 )
    goto LABEL_8;
  v16 = v8->m_Data.elem.m_pFreeHeroLoadoutItemView[v4];
  v11 = (*(v10->_vptr_IEconItemInterface + 12))(v10);
  v12 = (**v11)(v11);
  v13 = v16;
  if ( v9.m_Data != v12 )
  {
    (*(v16->_vptr_IEconItemInterface + 2))(v16);
    *(&this->m_FreeLoadoutItems.m_Tree.m_Elements.m_pMemory->m_Data.elem.m_pFreeHeroLoadoutItemView[v4] + 2 * v7) = 0;
LABEL_8:
    v14 = operator new(0xD8u);
    CEconItemView::CEconItemView(v14);
    CEconItemView::Init(v14, v9, 9999, 9999, 0, 0, INVALID_STYLE_INDEX);
    v13 = v14;
    *(&this->m_FreeLoadoutItems.m_Tree.m_Elements.m_pMemory->m_Data.elem.m_pFreeHeroLoadoutItemView[v4] + 2 * v7) = v14;
  }
  return v13;
}


// CDOTAPlayerInventory::GetOverriddenItemInLoadout  (line 3800, @0x0000000002e3c800, libserver.so)  // inlines: GetBool, GetHeroDemoModeItemForHero, GetInt
// calls: CDOTAInventoryManager::GetBaseItemForHero, CDOTAInventoryManager::IsDemoingHero, CDOTAInventoryManager::SetUpDemoHeroItems, __cxa_guard_acquire, CommandLine, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CDOTAInventoryManager::GetItemInLoadoutForHero, CDOTAPlayerInventory::GetItemInLoadout
// strings: "-herorecorder_preview", "-herorecorder"
// globals: `guard variable for'CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorder, `guard variable for'CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorderPreview, CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorder, CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorderPreview, g_DOTAInventoryManager
CEconItemView *__fastcall CDOTAPlayerInventory::GetOverriddenItemInLoadout(
        int nHeroID,
        int iSlotIndex,
        bool bIgnoreDemoItems)
{
  __int64 v3; // r13
  CEconItemView *result; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = iSlotIndex;
  if ( `guard variable for'CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorder == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorder) != 0 )
  {
    v8 = CommandLine();
    CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorder = (*(*v8 + 64LL))(v8, "-herorecorder") != 0;
    __cxa_guard_release(&`guard variable for'CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorder);
  }
  if ( `guard variable for'CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorderPreview == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorderPreview) != 0 )
  {
    v7 = CommandLine();
    CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorderPreview = (*(*v7 + 64LL))(
                                                                                             v7,
                                                                                             "-herorecorder_preview") != 0;
    __cxa_guard_release(&`guard variable for'CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorderPreview);
  }
  if ( (CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorder
     || CDOTAPlayerInventory::GetOverriddenItemInLoadout(int,int,bool)::bHeroRecorderPreview)
    && dota_recorder_use_default_items.m_pParent->m_Value.m_nValue != 0 )
  {
    return CDOTAInventoryManager::GetBaseItemForHero(g_DOTAInventoryManager, nHeroID, v3);
  }
  if ( bIgnoreDemoItems || !CDOTAInventoryManager::IsDemoingHero(g_DOTAInventoryManager, nHeroID) )
    return 0;
  CDOTAInventoryManager::SetUpDemoHeroItems(g_DOTAInventoryManager);
  result = 0;
  if ( nHeroID == dword_4D58410 && byte_4D591B0[v3 + 8] != 0 )
    return &g_DOTAInventoryManager[27 * v3 + 16];
  return result;
}


// CDOTAPlayerInventory::GetItemInLoadout  (line 3827, @0x0000000002e3fef0, libserver.so)  // inlines: DoLookup<int>, Element, Find, GetItemSlotsForHero, operator(), operator[]
// calls: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>, CDOTAPlayerInventory::GetOverriddenItemInLoadout, CDOTAPlayerInventory::GetEconItemViewInFreeLoadout, CUtlMap<int, CHeroLoadout, short unsigned int, bool (*)(int const&, int const&)>::Find, CDOTAInventoryManager::GetBaseItemForHero, CPlayerInventory::GetInventoryItemByItemID, CEconItemView::GetStaticData
// callers: CDOTAPlayerInventory::GetItemInLoadout, CDOTAPlayerInventory::GetItemSetForLoadoutItems
// globals: g_DOTAInventoryManager
// local variable allocation has failed, the output may be wrong!
CEconItemView *__fastcall CDOTAPlayerInventory::GetItemInLoadout(
        CDOTAPlayerInventory *const this,
        int nHeroID,
        int iSlotIndex,
        bool bIgnoreDemoItems)
{
  CEconItemView *OverriddenItemInLoadout; // rbx
  unsigned int v9; // edx
  unsigned int v10; // edx
  int v11; // eax
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v12; // r13
  CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::IndexType_t v13; // ax
  itemid_t *v14; // rax
  CEconItemView *InventoryItemByItemID; // rax
  CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t nHeroIDa[13]; // [rsp+Ch] [rbp-34h] BYREF

  OverriddenItemInLoadout = 0;
  nHeroIDa[0] = nHeroID;
  if ( iSlotIndex <= 0xF && stru_4D583D0.m_nUsed != 0 )
  {
    v9 = 33 * (((4097 * nHeroID + 2127912214) >> 19) ^ (4097 * nHeroID + 2127912214) ^ 0xC761C23C);
    v10 = 9 * ((v9 - 369570787) ^ ((v9 + 374761393) << 9)) - 42973499;
    v11 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
            &stru_4D583D0,
            nHeroID,
            HIWORD(v10) ^ v10 ^ 0xB55A4F09,
            bIgnoreDemoItems);
    if ( v11 != -1 )
    {
      v12 = &stru_4D583D0.m_table.m_pMemory[v11];
      if ( v12 != -12LL )
      {
        OverriddenItemInLoadout = CDOTAPlayerInventory::GetOverriddenItemInLoadout(
                                    nHeroID,
                                    iSlotIndex,
                                    bIgnoreDemoItems);
        if ( OverriddenItemInLoadout == 0 )
        {
          OverriddenItemInLoadout = CDOTAPlayerInventory::GetEconItemViewInFreeLoadout(this, nHeroIDa[0], iSlotIndex);
          if ( OverriddenItemInLoadout == 0 )
          {
            v13 = CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Find(
                    &this->m_LoadoutItems,
                    nHeroIDa);
            if ( v13 == 0xFFFF )
              return CDOTAInventoryManager::GetBaseItemForHero(g_DOTAInventoryManager, nHeroIDa[0], iSlotIndex);
            v14 = &this->m_LoadoutItems.m_Tree.m_Elements.m_pMemory[v13].m_Data.elem.m_HeroLoadout[iSlotIndex];
            if ( v14->m_Data == 0 )
              return CDOTAInventoryManager::GetBaseItemForHero(g_DOTAInventoryManager, nHeroIDa[0], iSlotIndex);
            InventoryItemByItemID = CPlayerInventory::GetInventoryItemByItemID(this, v14->m_Data, 0);
            OverriddenItemInLoadout = InventoryItemByItemID;
            if ( InventoryItemByItemID == 0
              || CEconItemView::GetStaticData(InventoryItemByItemID)->m_nSlotType != v12->data[iSlotIndex + 34] )
            {
              return CDOTAInventoryManager::GetBaseItemForHero(g_DOTAInventoryManager, nHeroIDa[0], iSlotIndex);
            }
          }
        }
      }
    }
  }
  return OverriddenItemInLoadout;
}


// CDOTAPlayerInventory::HasItemsForHero  (line 3872, @0x0000000002e377d0, libserver.so)
// calls: CEconItemView::GetStaticData, CEconItemDefinition::HasHeroID
bool __fastcall CDOTAPlayerInventory::HasItemsForHero(CDOTAPlayerInventory *const this, int nHeroID)
{
  __int64 v4; // rbx
  const GameItemDefinition_t *StaticData; // rax
  bool result; // al

  v4 = 0;
  if ( this->m_aInventoryItems.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    StaticData = CEconItemView::GetStaticData(this->m_aInventoryItems.m_Memory.m_pMemory[v4]);
    result = CEconItemDefinition::HasHeroID(StaticData, nHeroID);
    if ( result )
      break;
    if ( this->m_aInventoryItems.m_Size <= ++v4 )
      return 0;
  }
  return result;
}


// CDOTAPlayerInventory::HasHero  (line 3887, @0x0000000002e3f200, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild
// calls: CUtlMap<int, CHeroLoadout, short unsigned int, bool (*)(int const&, int const&)>::Find
bool __fastcall CDOTAPlayerInventory::HasHero(CDOTAPlayerInventory *const this, int nHeroID)
{
  CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::IndexType_t v3; // ax
  __int64 v4; // rcx
  unsigned __int16 v5; // dx
  __int64 m_nAllocationCount; // rax
  bool v7; // sf
  bool v8; // of
  bool result; // al
  unsigned __int16 m_Left; // ax
  CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t nHeroIDa[5]; // [rsp+Ch] [rbp-14h] BYREF

  nHeroIDa[0] = nHeroID;
  v3 = CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Find(&this->m_LoadoutItems, nHeroIDa);
  v4 = v3;
  v5 = v3;
  m_nAllocationCount = this->m_LoadoutItems.m_Tree.m_Elements.m_nAllocationCount;
  v8 = __OFSUB__(v4, m_nAllocationCount);
  v7 = v4 - m_nAllocationCount < 0;
  result = 0;
  if ( v7 != v8 && v5 <= this->m_LoadoutItems.m_Tree.m_LastAlloc.index )
  {
    m_Left = -1;
    if ( v5 != 0xFFFF )
      m_Left = this->m_LoadoutItems.m_Tree.m_Elements.m_pMemory[v4].m_Left;
    return v5 != m_Left;
  }
  return result;
}


// CDOTAPlayerInventory::GetItemSetForLoadoutItems  (line 3893, @0x0000000002e40060, libserver.so)  // inlines: ComputeItemCountInSetWithNoSpecialPreview, DoLookup<int>, DoesSlotHaveSpecialLoadoutPreview, Find, GetGeneratedUnitCount, GetItemSlotsForHero, GetSlotLoadoutPreviewMode, GetSlotType, operator(), operator[]
// calls: CDOTAPlayerInventory::GetItemInLoadout, ComputeItemCountInSetWithNoSpecialPreview, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTAPlayerInventory::GetItemSetForLoadoutItems(
        CDOTAPlayerInventory *const this,
        int nHeroID,
        int nPrimarySlotIndex,
        bool bIgnoreDemoItems,
        LoadoutInfo_t *pInfo)
{
  CDOTAHeroSlots *v5; // r15
  int v7; // eax
  __int64 v8; // r12
  int v9; // r13d
  CEconItemView *ItemInLoadout; // rax
  const CEconItemView *v11; // r14
  __int64 v12; // rsi
  HeroSlotLoadoutPreviewMode_t v13; // cl
  const IEconItemSetDefinition *m_pSet; // rsi
  int v15; // eax
  int *p_m_Size; // rax
  bool v17; // al
  int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // edx
  int v21; // eax
  const GameItemDefinition_t *pItemDef; // [rsp+8h] [rbp-58h]
  bool bIsConsistentSet; // [rsp+13h] [rbp-4Dh]
  int nNonBaseItemsFound; // [rsp+14h] [rbp-4Ch]
  bool v28; // [rsp+2Ch] [rbp-34h]
  bool v29; // [rsp+2Ch] [rbp-34h]

  v5 = 0;
  if ( stru_4D583D0.m_nUsed != 0 )
  {
    v29 = bIgnoreDemoItems;
    v19 = 33 * (((4097 * nHeroID + 2127912214) >> 19) ^ (4097 * nHeroID + 2127912214) ^ 0xC761C23C);
    v20 = 9 * ((v19 - 369570787) ^ ((v19 + 374761393) << 9)) - 42973499;
    v21 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
            &stru_4D583D0,
            nHeroID,
            HIWORD(v20) ^ v20 ^ 0xB55A4F09,
            bIgnoreDemoItems);
    bIgnoreDemoItems = v29;
    if ( v21 != -1 )
      v5 = &stru_4D583D0.m_table.m_pMemory[v21].data[2];
  }
  bIsConsistentSet = 1;
  nNonBaseItemsFound = 0;
  pInfo->m_pSet = 0;
  pInfo->m_pSingleItem = 0;
  v28 = bIgnoreDemoItems;
  v7 = nHeroID;
  v8 = 0;
  v9 = v7;
  do
  {
    ItemInLoadout = CDOTAPlayerInventory::GetItemInLoadout(this, v9, v8, v28);
    v11 = ItemInLoadout;
    if ( ItemInLoadout == 0 || !ItemInLoadout->m_bInitialized.m_Value )
      goto LABEL_9;
    v12 = (*(ItemInLoadout->_vptr_IEconItemInterface + 12))(ItemInLoadout);
    if ( v5 != 0 )
    {
      v13 = v5->m_nLoadoutPreviewMode[v8];
      if ( v13 == HeroSlotLoadoutPreviewMode_t::HERO_SLOT_LOADOUT_PREVIEW_AUTODETECT )
      {
        p_m_Size = &v5->m_pSlotUnits[v8]->m_Size;
        if ( p_m_Size != 0 && *p_m_Size > 0
          || ((v18 = v5->m_nSlotTypes[v8]) & 0xFFFFFFF7) == 0x13
          || (v18 - 29) <= 4
          || v18 == 37
          || (v18 & 0xFFFFFFF7) == 0x23 )
        {
LABEL_17:
          if ( nPrimarySlotIndex != v8 )
            goto LABEL_9;
          goto LABEL_18;
        }
      }
      else if ( v13 != HeroSlotLoadoutPreviewMode_t::HERO_SLOT_LOADOUT_PREVIEW_HERO )
      {
        goto LABEL_17;
      }
      if ( nPrimarySlotIndex != -1 )
        goto LABEL_9;
    }
LABEL_18:
    pItemDef = v12;
    if ( (*(*v12 + 112LL))(v12) == 0 )
    {
      if ( nNonBaseItemsFound != 0 )
      {
        ++nNonBaseItemsFound;
        pInfo->m_pSingleItem = 0;
        v17 = bIsConsistentSet;
        if ( pInfo->m_pSet != pItemDef->m_pItemSetDef )
          v17 = 0;
        bIsConsistentSet = v17;
      }
      else
      {
        nNonBaseItemsFound = 1;
        pInfo->m_pSet = pItemDef->m_pItemSetDef;
        pInfo->m_pSingleItem = v11;
      }
    }
LABEL_9:
    ++v8;
  }
  while ( v8 != 16 );
  pInfo->m_bIsBaseSet = nNonBaseItemsFound == 0;
  if ( bIsConsistentSet )
  {
    m_pSet = pInfo->m_pSet;
    pInfo->m_bIsPartialSet = 0;
    if ( m_pSet != 0 )
    {
      v15 = 1;
      if ( nPrimarySlotIndex == -1 )
      {
        if ( v5 != 0 )
          v15 = ComputeItemCountInSetWithNoSpecialPreview(v5, m_pSet);
        else
          v15 = (*(m_pSet->_vptr_IEconItemSetDefinition + 4))(m_pSet);
      }
      pInfo->m_bIsPartialSet = nNonBaseItemsFound != v15;
    }
  }
  else
  {
    pInfo->m_bIsPartialSet = 0;
    pInfo->m_pSet = 0;
  }
}


// CDOTAPlayerInventory::GetStyleIndexForItems  (line 4411, @0x0000000002e37840, libserver.so)  // inlines: operator==
// calls: CPlayerInventory::GetInventoryItemByItemID
// globals: INVALID_STYLE_INDEX
style_index_t __fastcall CDOTAPlayerInventory::GetStyleIndexForItems(
        CDOTAPlayerInventory *const this,
        int nCount,
        const EconItemIDs_t *pIds)
{
  uint8 m_Data; // r14
  const EconItemIDs_t *v5; // rbx
  const EconItemIDs_t *v6; // r12
  uint8 v7; // al
  CEconItemView *InventoryItemByItemID; // rax

  m_Data = INVALID_STYLE_INDEX.m_Data;
  if ( nCount <= 0 )
    return m_Data;
  v5 = pIds;
  v6 = &pIds[(nCount - 1) + 1];
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = INVALID_STYLE_INDEX.m_Data;
      if ( v5->m_nItemID.m_Data != 0 )
      {
        InventoryItemByItemID = CPlayerInventory::GetInventoryItemByItemID(this, v5->m_nItemID, 0);
        if ( InventoryItemByItemID != 0 )
          v7 = (*(InventoryItemByItemID->_vptr_IEconItemInterface + 16))(InventoryItemByItemID);
        else
          v7 = INVALID_STYLE_INDEX.m_Data;
      }
      if ( INVALID_STYLE_INDEX.m_Data == v7 )
        goto LABEL_6;
      if ( m_Data != INVALID_STYLE_INDEX.m_Data )
        break;
      ++v5;
      m_Data = v7;
      if ( v5 == v6 )
        return m_Data;
    }
    if ( m_Data != v7 )
      return INVALID_STYLE_INDEX;
LABEL_6:
    if ( ++v5 == v6 )
      return m_Data;
  }
}


// CDOTAPlayerInventory::RemoveItemFromLoadout  (line 4442, @0x0000000002e48cc0, libserver.so)  // inlines: Element, GetEquippedPositionForClass, IsEquippedForClass, operator[]
// calls: CEconItemView::GetStaticData, CEconItem::FindEquippedInstanceForClass, CEconItemView::GetSOCData, CUtlMap<int, CHeroLoadout, short unsigned int, bool (*)(int const&, int const&)>::Find, CUtlMap<int, CHeroLoadout, short unsigned int, bool (*)(int const&, int const&)>::Insert
// callers: CDOTAPlayerInventory::ItemIsBeingRemoved, CDOTAPlayerInventory::ItemHasBeenUpdated
void __fastcall CDOTAPlayerInventory::RemoveItemFromLoadout(CDOTAPlayerInventory *const this, CEconItemView *pItem)
{
  const GameItemDefinition_t *StaticData; // rax
  unsigned int v5; // r13d
  const CEconItem::EquippedInstance_t *EquippedInstanceForClass; // rax
  int v7; // r15d
  __int64 v8; // r12
  UtlRBTreeNode_t<CUtlMap<int,CHeroLoadout>::Node_t,short unsigned int> *v9; // rdx
  itemid_t *v10; // r15
  CEconItem *v11; // rax
  const CEconItem::EquippedInstance_t *v12; // rax
  const GameItemDefinition_t *v13; // rax
  __int64 v14; // r12
  CEconItem *SOCData; // rax
  __int64 v16; // rax
  CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)> *p_m_LoadoutItems; // [rsp+10h] [rbp-50h]
  uint32 unNumHeroes; // [rsp+18h] [rbp-48h]
  equipped_class_t v19; // [rsp+1Ch] [rbp-44h]
  CUtlMap<int,CHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t nHeroID[13]; // [rsp+2Ch] [rbp-34h] BYREF

  StaticData = CEconItemView::GetStaticData(pItem);
  unNumHeroes = (*(StaticData->_vptr_IEconItemDefinition + 26))(StaticData);
  if ( unNumHeroes != 0 )
  {
    v5 = 0;
    p_m_LoadoutItems = &this->m_LoadoutItems;
    do
    {
LABEL_11:
      v13 = CEconItemView::GetStaticData(pItem);
      nHeroID[0] = (*(v13->_vptr_IEconItemDefinition + 27))(v13, v5);
      v14 = CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Find(p_m_LoadoutItems, nHeroID);
      if ( v14 == 0xFFFF )
        v14 = CUtlMap<int,CHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Insert(
                p_m_LoadoutItems,
                nHeroID);
      SOCData = CEconItemView::GetSOCData(pItem);
      if ( SOCData != 0
        && (EquippedInstanceForClass = CEconItem::FindEquippedInstanceForClass(SOCData, nHeroID[0])) != 0
        && (LOWORD(v7) = EquippedInstanceForClass->m_unEquippedSlot, v7 != 0xFFFF) )
      {
        v8 = v14;
        v9 = &this->m_LoadoutItems.m_Tree.m_Elements.m_pMemory[v8];
      }
      else
      {
        v8 = v14;
        v7 = 0;
        while ( 1 )
        {
          v16 = (*(pItem->_vptr_IEconItemInterface + 14))(pItem);
          v9 = &this->m_LoadoutItems.m_Tree.m_Elements.m_pMemory[v8];
          if ( v16 == v9->m_Data.elem.m_HeroLoadout[v7].m_Data )
            break;
          if ( ++v7 == 16 )
          {
            if ( ++v5 != unNumHeroes )
              goto LABEL_11;
            return;
          }
        }
      }
      v10 = &v9->m_Data.elem.m_HeroLoadout[v7];
      v19 = nHeroID[0];
      if ( CEconItemView::GetSOCData(pItem) != 0
        && (v11 = CEconItemView::GetSOCData(pItem), (v12 = CEconItem::FindEquippedInstanceForClass(v11, v19)) != 0)
        && v12->m_unEquippedSlot != 0xFFFF )
      {
        v10->m_Data = (*(pItem->_vptr_IEconItemInterface + 14))(pItem);
        this->m_LoadoutItems.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem.m_bLoadoutChanged = 1;
      }
      else if ( (*(pItem->_vptr_IEconItemInterface + 14))(pItem) == v10->m_Data )
      {
        v10->m_Data = 0;
        this->m_LoadoutItems.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem.m_bLoadoutChanged = 1;
      }
      ++v5;
    }
    while ( v5 != unNumHeroes );
  }
}


// CDOTAPlayerInventory::ItemHasBeenUpdated  (line 4512, @0x0000000002e4d1c0, libserver.so)
// calls: CPlayerInventory::ItemHasBeenUpdated, CDOTAPlayerInventory::RemoveItemFromLoadout
void __fastcall CDOTAPlayerInventory::ItemHasBeenUpdated(
        CDOTAPlayerInventory *const this,
        CEconItemView *pItem,
        bool bUpdateAckFile,
        bool bWriteAckFile)
{
  CPlayerInventory::ItemHasBeenUpdated(this, pItem, bUpdateAckFile, bWriteAckFile);
  CDOTAPlayerInventory::RemoveItemFromLoadout(this, pItem);
}


// CDOTAPlayerInventory::ItemIsBeingRemoved  (line 4522, @0x0000000002e48ea0, libserver.so)
// calls: CDOTAPlayerInventory::RemoveItemFromLoadout
void __fastcall CDOTAPlayerInventory::ItemIsBeingRemoved(CDOTAPlayerInventory *const this, CEconItemView *pItem)
{
  CDOTAPlayerInventory::RemoveItemFromLoadout(this, pItem);
}


// CDOTAPlayerInventory::SendInventoryUpdateEvent  (line 4540, @0x0000000002e4d1f0, libserver.so)  // inlines: GetSteamIDFromSOID
// calls: CDOTA_PlayerResource::GetPlayerIDBySteamID, CDOTAPlayer::GetPlayerByPlayerID, CPlayerInventory::SendInventoryUpdateEvent
void __fastcall CDOTAPlayerInventory::SendInventoryUpdateEvent(
        CDOTAPlayerInventory *const this,
        InventoryChangeReason_t reason,
        item_definition_index_t unItemDef,
        itemid_t unItemID)
{
  GCSDK::SOID_t::ID_t m_id; // rsi
  int PlayerIDBySteamID; // eax
  CDOTAPlayer *PlayerByPlayerID; // rax

  m_id = this->m_OwnerID.m_id;
  if ( this->m_OwnerID.m_type != 1 )
    m_id = 0;
  PlayerIDBySteamID = CDOTA_PlayerResource::GetPlayerIDBySteamID(g_pDOTAPlayerResource, m_id);
  PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(PlayerIDBySteamID);
  if ( PlayerByPlayerID != 0 )
    (*(PlayerByPlayerID->_vptr_IHandleEntity + 559))(PlayerByPlayerID, this);
  CPlayerInventory::SendInventoryUpdateEvent(this, reason, unItemDef, unItemID);
}


// CDOTAPlayerInventory::AddItemToFreeLoadout  (line 4561, @0x0000000002e48eb0, libserver.so)  // inlines: CFreeHeroLoadout, Element, Find, FindInsertionPosition, Insert, InsertAt, LeftChild, Node_t, RightChild, SetItemDefInLoadoutSlot, item_definition_index_t, memset, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CFreeHeroLoadout>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CFreeHeroLoadout>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CFreeHeroLoadout>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// callers: CGCUserUpdatedAdditionalItems::BYieldingRunJobFromMsg, CDOTAGamerules::ClientMsg_FreeInventory, CGCServerJobGetAdditionalItems::BYieldingRunJob
void __fastcall CDOTAPlayerInventory::AddItemToFreeLoadout(
        CDOTAPlayerInventory *const this,
        int nHeroID,
        int iSlotIndex,
        item_definition_index_t unItemDef)
{
  CUtlMap<int,CFreeHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t *p_elem; // rax
  __int64 v8; // rax
  CUtlMap<int,CFreeHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t *v9; // rax
  unsigned __int16 m_Root; // r15
  bool v11; // r13
  unsigned __int16 m_Left; // ax
  char v13; // dl
  bool v14; // zf
  UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v16; // ax
  CUtlMap<int,CFreeHeroLoadout,short unsigned int,bool (*)(int const&,int const&)> *p_m_FreeLoadoutItems; // [rsp+8h] [rbp-F8h]
  int iIdx; // [rsp+10h] [rbp-F0h]
  CUtlMap<int,CFreeHeroLoadout,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+20h] [rbp-E0h] BYREF

  p_elem = &search.elem;
  do
  {
    p_elem = (p_elem + 2);
    HIWORD(p_elem[-1].m_pFreeHeroLoadoutItemView[15]) = 0;
  }
  while ( p_elem != search.elem.m_pFreeHeroLoadoutItemView );
  memset(&search.elem, 0, sizeof(search.elem));
  search.key = nHeroID;
  p_m_FreeLoadoutItems = &this->m_FreeLoadoutItems;
  v8 = CUtlRBTree<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_FreeLoadoutItems.m_Tree,
         &search);
  if ( v8 != 0xFFFF )
    goto LABEL_4;
  v9 = &search.elem;
  do
  {
    v9 = (v9 + 2);
    HIWORD(v9[-1].m_pFreeHeroLoadoutItemView[15]) = 0;
  }
  while ( v9 != search.elem.m_pFreeHeroLoadoutItemView );
  m_Root = this->m_FreeLoadoutItems.m_Tree.m_Root;
  memset(&search.elem, 0, sizeof(search.elem));
  search.key = nHeroID;
  if ( m_Root == 0xFFFF )
  {
    m_Root = -1;
    v11 = 0;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v14 = !this->m_FreeLoadoutItems.m_Tree.m_LessFunc.m_LessFunc(
             &search,
             &this->m_FreeLoadoutItems.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
    m_pMemory = this->m_FreeLoadoutItems.m_Tree.m_Elements.m_pMemory;
    if ( v14 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v13 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_13;
LABEL_10:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v13 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_10;
LABEL_13:
  v11 = v13;
LABEL_14:
  v16 = CUtlRBTree<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &p_m_FreeLoadoutItems->m_Tree,
          &search);
  iIdx = v16;
  CUtlRBTree<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &p_m_FreeLoadoutItems->m_Tree,
    v16,
    m_Root,
    v11);
  v8 = iIdx;
  ++this->m_FreeLoadoutItems.m_Tree.m_NumElements;
LABEL_4:
  this->m_FreeLoadoutItems.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem.m_FreeHeroLoadout[iSlotIndex] = unItemDef;
}


// CDOTAPlayerInventory::ClearFreeLoadout  (line 4572, @0x0000000002e40400, libserver.so)  // inlines: RemoveAll
// calls: CUtlRBTree<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int, CUtlMap<int, CFreeHeroLoadout>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll
// callers: CGCUserUpdatedAdditionalItems::BYieldingRunJobFromMsg
void __fastcall CDOTAPlayerInventory::ClearFreeLoadout(CDOTAPlayerInventory *const this)
{
  CUtlRBTree<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CFreeHeroLoadout,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_FreeLoadoutItems.m_Tree);
}


