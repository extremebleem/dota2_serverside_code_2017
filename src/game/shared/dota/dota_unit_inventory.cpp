// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_unit_inventory.cpp:492
class CDOTA_AutoBluePrint {
	char m_szItemName[260];  // +0x0
	char m_szBluePrint[260];  // +0x104
	CDOTA_AutoBluePrint();

	// sizeof = 520
};

// src/game/shared/dota/dota_unit_inventory.cpp:506
class CDOTA_AutoCombinableItems : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	typedef CAutoGameSystem BaseClass;
	CDOTA_AutoCombinableItems(CDOTA_AutoCombinableItems &);
	CDOTA_AutoCombinableItems(const CDOTA_AutoCombinableItems &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_AutoCombinableItems *);
	CDOTA_AutoCombinableItems();
	virtual void GameActivate(const EventGameActivate_t &);
	const char * GetAutoBluePrintForUnit(CDOTA_UnitInventory *, CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *);
	virtual ~CDOTA_AutoCombinableItems();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[8] GameActivate
	// sizeof = 48
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IsBackpackSlot  (line 33, @0x00000000027aac30, libserver.so)
// callers: CDOTA_Item_Armlet::OnToggle
bool __fastcall IsBackpackSlot(int nSlot)
{
  return (nSlot - 6) <= 2;
}


// CDOTA_UnitInventory::CDOTA_UnitInventory  (line 111, @0x00000000027b4bb0, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkArrayBase, CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureValidValue<bool>, EnsureValidValue<int>
// callers: DataTeamPlayer_t::DataTeamPlayer_t, CSchemaClassBinding<CDOTA_UnitInventory>::Allocate, CSchemaClassBinding<CDOTA_UnitInventory>::ConstructInPlace, CSchemaClassBinding<CDOTA_UnitInventory>::AllocateAndCopyConstruct, CDOTA_BaseNPC::CDOTA_BaseNPC
void __fastcall CDOTA_UnitInventory::CDOTA_UnitInventory(CDOTA_UnitInventory *const this)
{
  CDOTA_UnitInventory *p_m_hItems; // rax

  this->_vptr_CDOTA_UnitInventory = off_40DC990;  // vptr: CDOTA_UnitInventory
  this->m_SharedCooldownList.m_Size = 0;
  p_m_hItems = &this->m_hItems;
  this->m_SharedCooldownList.m_Memory.m_pMemory = 0;
  this->m_SharedCooldownList.m_Memory.m_nAllocationCount = 0;
  this->m_SharedCooldownList.m_Memory.m_nGrowSize = 0;
  do
  {
    LODWORD(p_m_hItems->_vptr_CDOTA_UnitInventory) = -1;
    p_m_hItems = (p_m_hItems + 4);
  }
  while ( p_m_hItems != this->m_bItemQueried );
  this->m_iParity.m_Value = 0;
  this->m_hInventoryParent.m_Value.m_Index = -1;
  this->m_bStashEnabled.m_Value = 0;
  this->m_hTransientCastItem.m_Value.m_Index = -1;
  this->m_hPendingCombineItemRemoves.m_Size = 0;
  this->m_hPendingCombineItemRemoves.m_Memory.m_pMemory = 0;
  this->m_hPendingCombineItemRemoves.m_Memory.m_nAllocationCount = 0;
  this->m_hPendingCombineItemRemoves.m_Memory.m_nGrowSize = 0;
  this->m_vecRecentlyDroppedItems.m_Size = 0;
  this->m_vecRecentlyDroppedItems.m_Memory.m_pMemory = 0;
  this->m_vecRecentlyDroppedItems.m_Memory.m_nAllocationCount = 0;
  this->m_vecRecentlyDroppedItems.m_Memory.m_nGrowSize = 0;
  this->m_flRecentlyDroppedItemsTime = -1.0;
  this->m_nPreGamePlayerID = -1;
}


// CDOTA_UnitInventory::Think  (line 130, @0x00000000027aac40, libserver.so)  // inlines: Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Remove, ShiftElementsLeft, ToDOTAAbility, ToDOTAItem, V_memmove, memmove, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CDOTA_Item::GetContainer, UTIL_RemoveImmediate, memmove
// callers: CDOTA_BaseNPC::UnitThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_UnitInventory::Think(CDOTA_UnitInventory *const this)
{
  int v2; // r12d
  __int64 v3; // r13
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_Item *v9; // rax
  CDOTA_Item *v10; // rbx
  CDOTA_Item_Physical *Container; // rax
  int m_Size; // eax

  v2 = this->m_hPendingCombineItemRemoves.m_Size - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v4 = &this->m_hPendingCombineItemRemoves.m_Memory.m_pMemory[v3];
        m_Index = v4->m_Index;
        if ( v4->m_Index + 2 > 1 )
        {
          v6 = v4->m_Index;
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[v6 & 0x1FF];
            if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
            {
              v9 = __dynamic_cast(v8->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
              v10 = v9;
              if ( v9 != 0 && (*(v9->_vptr_IHandleEntity + 223))(v9) != 0 )
              {
                if ( v10->m_iState == 1 )
                  (*(v10->_vptr_IHandleEntity + 334))(v10);
                Container = CDOTA_Item::GetContainer(v10);
                if ( Container != 0 )
                  UTIL_RemoveImmediate(Container);
                if ( !v10->m_bChanneling )
                  break;
              }
            }
          }
        }
        --v2;
        --v3;
        if ( v2 == -1 )
          return;
      }
      UTIL_RemoveImmediate(v10);
      m_Size = this->m_hPendingCombineItemRemoves.m_Size;
      if ( m_Size - v2 - 1 > 0 )
      {
        memmove(
          &this->m_hPendingCombineItemRemoves.m_Memory.m_pMemory[v3],
          &this->m_hPendingCombineItemRemoves.m_Memory.m_pMemory[v3 + 1],
          4LL * (this->m_hPendingCombineItemRemoves.m_Size - v2 - 1));
        m_Size = this->m_hPendingCombineItemRemoves.m_Size;
      }
      --v2;
      --v3;
      this->m_hPendingCombineItemRemoves.m_Size = m_Size - 1;
    }
    while ( v2 != -1 );
  }
}


// CDOTA_UnitInventory::SetParent  (line 189, @0x00000000027b82b0, libserver.so)  // inlines: NetworkStateChanged, Set, SetStashEnabled, ToDOTABaseNPC, operator=, operator=<CBaseEntity*>, operator=<bool>
// calls: CHandle<CBaseEntity>::CHandle, operator!=<CBaseEntity>
// callers: CDOTA_BaseNPC::InitialSpawn
void __fastcall CDOTA_UnitInventory::SetParent(CDOTA_UnitInventory *const this, CBaseEntity *pParent)
{
  CHandle<CBaseEntity> b; // [rsp+0h] [rbp-30h] BYREF

  if ( pParent != 0 && pParent->m_bIsDOTANPC && (pParent[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
  {
    if ( !this->m_bStashEnabled.m_Value )
    {
      (*(this->_vptr_CDOTA_UnitInventory + 2))(this, 129, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bStashEnabled.m_Value = 1;
    }
  }
  else if ( this->m_bStashEnabled.m_Value )
  {
    (*(this->_vptr_CDOTA_UnitInventory + 2))(this, 129, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bStashEnabled.m_Value = 0;
  }
  CHandle<CBaseEntity>::CHandle(&b, pParent);
  if ( operator!=<CBaseEntity>(&this->m_hInventoryParent.m_Value, &b) )
  {
    (*(this->_vptr_CDOTA_UnitInventory + 2))(this, 124, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hInventoryParent.m_Value = b;
  }
}


// CDOTA_UnitInventory::GetItemInSlot  (line 210, @0x00000000027aadc0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTABaseAbility::CastAbility, OnDemoHeroSpawnComplete, CDOTAGamerules::SwapPlayers, CDOTAGamerules::OnARDMDuringMatchSpawnComplete, DOTA_ExecuteOrders, CDOTA_Item::OnUnequip, CDOTA_OGS::LogMatchSnapshot, CDOTAPlayer::CheatHeroRefresh, CDOTA_PlayerResource::ComputeNetWorth, CDOTA_PlayerResource::OnHeroReplaced, CDOTASpectatorGraphManager::RecordHeroInventorySnapshots, HeroRefresh (92 total)
// globals: CEntityHandle::gm_pEntityList
CDOTA_Item *__fastcall CDOTA_UnitInventory::GetItemInSlot(CDOTA_UnitInventory *const this, int i)
{
  CDOTA_Item *result; // rax
  CHandle<CBaseEntity> *v3; // rcx
  uint32 m_Index; // edx
  unsigned __int16 v5; // si
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  if ( i == 18 )
  {
    m_Index = this->m_hTransientCastItem.m_Value.m_Index;
    result = 0;
    if ( m_Index + 2 <= 1 )
      return result;
    v5 = this->m_hTransientCastItem.m_Value.m_Index;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 == 0 )
      return result;
    goto LABEL_5;
  }
  if ( i > 0x10 )
    return 0;
  result = 0;
  v3 = &this->m_hItems.m_Value[i];
  m_Index = v3->m_Index;
  if ( v3->m_Index + 2 > 1 )
  {
    v5 = v3->m_Index;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
LABEL_5:
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        return v7->m_pInstance;
    }
  }
  return result;
}


// CDOTA_UnitInventory::IsAllowedLocation  (line 222, @0x00000000027aaf40, libserver.so)  // inlines: IsStashEnabled
bool __fastcall CDOTA_UnitInventory::IsAllowedLocation(
        CDOTA_UnitInventory *const this,
        int iSlot,
        int iAllowedLocations)
{
  bool result; // al

  if ( (iAllowedLocations & 1) != 0 || (result = 0, iSlot > 8) )
  {
    if ( (iAllowedLocations & 2) != 0 )
    {
      result = this->m_bStashEnabled.m_Value;
      if ( !result )
        return (iSlot - 9) > 5;
    }
    else
    {
      return (iSlot - 9) > 5;
    }
  }
  return result;
}


// CDOTA_UnitInventory::CountItemInInventory  (line 236, @0x00000000027aaf80, libserver.so)  // inlines: FStrEq, GetAbilityName, IsAllowedLocation, _V_strcmp
// calls: CDOTA_UnitInventory::GetItemInSlot, strcmp
// strings: "<NoAbilityName>"
int __fastcall CDOTA_UnitInventory::CountItemInInventory(
        CDOTA_UnitInventory *const this,
        const char *pItemName,
        int iAllowedLocations)
{
  int v3; // r15d
  int v6; // ebx
  int v7; // r13d
  CDOTA_Item *ItemInSlot; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v10; // rdi
  const char *m_pszAbilityName; // rax
  int nCount; // [rsp+Ch] [rbp-34h]

  v3 = 0;
  v6 = iAllowedLocations & 1;
  nCount = 0;
  v7 = iAllowedLocations & 2;
  do
  {
    while ( 1 )
    {
      if ( (v6 != 0 || v3 > 8) && (v7 != 0 && this->m_bStashEnabled.m_Value || (v3 - 9) > 5) )
      {
        ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(this, v3);
        if ( ItemInSlot != 0 )
        {
          m_pAbilityData = ItemInSlot->m_pAbilityData;
          v10 = "<NoAbilityName>";
          if ( m_pAbilityData != 0 )
          {
            m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
            if ( m_pszAbilityName != 0 )
              v10 = m_pszAbilityName;
          }
          if ( pItemName == v10 || strcmp(v10, pItemName) == 0 )
            break;
        }
      }
      if ( ++v3 == 17 )
        return nCount;
    }
    ++nCount;
    ++v3;
  }
  while ( v3 != 17 );
  return nCount;
}


// CDOTA_UnitInventory::FindItemInInventory  (line 260, @0x00000000027ab050, libserver.so)  // inlines: FStrEq, GetAbilityName, IsAllowedLocation, _V_strcmp
// calls: CDOTA_UnitInventory::GetItemInSlot, strcmp
// callers: CDOTA_UnitInventory::AddItem, CDOTA_UnitInventory::AddItems, CDOTA_Bot::GetBlinkManaCost, CDOTA_Bot::HasTeleportAbility, CDOTA_Bot::GetBlinkRange, CDOTA_Bot::CalculateAverageLifestealValue, CDOTA_BotMode_Rune::GetRuneDesire, CDOTA_BotMode_Ward::GetDesire, CDOTA_BotMode_SideShop::GetDesire, CDOTA_BaseNPC::HasItemInInventory, CDOTA_BaseNPC_Hero::DoesMyTeamHaveItem, CDOTA_BaseNPC_Hero::GetSituationalItemPurchase (22 total)
// strings: "<NoAbilityName>"
CDOTA_Item *__fastcall CDOTA_UnitInventory::FindItemInInventory(
        CDOTA_UnitInventory *const this,
        const char *pItemName,
        int iAllowedLocations,
        bool bIgnoreQueriedItems,
        int nMatchesOwnerPlayerID)
{
  __int64 v5; // r14
  int v6; // r13d
  int v7; // r12d
  CDOTA_Item *ItemInSlot; // r8
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v11; // rdi
  const char *m_pszAbilityName; // rax
  int v13; // eax
  CDOTA_Item *pItem; // [rsp+8h] [rbp-48h]

  v5 = 0;
  v6 = iAllowedLocations & 1;
  v7 = iAllowedLocations & 2;
  while ( 1 )
  {
    if ( (v6 != 0 || v5 > 8)
      && (v7 != 0 && this->m_bStashEnabled.m_Value || (v5 - 9) > 5)
      && (!bIgnoreQueriedItems || !this->m_bItemQueried[v5]) )
    {
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(this, v5);
      if ( ItemInSlot != 0
        && (nMatchesOwnerPlayerID == -1 || nMatchesOwnerPlayerID == ItemInSlot->m_iPlayerOwnerID.m_Value) )
      {
        m_pAbilityData = ItemInSlot->m_pAbilityData;
        v11 = "<NoAbilityName>";
        if ( m_pAbilityData != 0 )
        {
          m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
          v11 = "<NoAbilityName>";
          if ( m_pszAbilityName != 0 )
            v11 = m_pszAbilityName;
        }
        if ( pItemName == v11 )
          break;
        pItem = ItemInSlot;
        v13 = strcmp(v11, pItemName);
        ItemInSlot = pItem;
        if ( v13 == 0 )
          break;
      }
    }
    if ( ++v5 == 17 )
      return 0;
  }
  if ( bIgnoreQueriedItems )
    this->m_bItemQueried[v5] = 1;
  return ItemInSlot;
}


// CDOTA_UnitInventory::StartUniqueItemQuery  (line 294, @0x00000000027ab180, libserver.so)  // inlines: V_memset, memset
void __fastcall CDOTA_UnitInventory::StartUniqueItemQuery(CDOTA_UnitInventory *const this)
{
  this->m_bItemQueried[16] = 0;
  *this->m_bItemQueried = 0;
  *&this->m_bItemQueried[8] = 0;
}


// CDOTA_UnitInventory::FindEmptySpaceInInventory  (line 302, @0x00000000027ab1a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsAllowedLocation, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// callers: CDOTA_UnitInventory::DisassembleItem, CDOTA_UnitInventory::CheckPendingCombines, CDOTA_UnitInventory::AddItem, CDOTA_UnitInventory::AddItems, CDOTA_Bot::ConsiderCourierUsage, CDOTA_BotMode_Item::Think, CDOTA_BotMode_Retreat::GetDesire, CDOTA_TeamCommander::UpdateItemsDesire, CDOTA_BaseNPC_Hero::GetSituationalItemPurchase, CDOTA_BaseNPC_Hero::HasAnyAvailableInventorySpace, CDOTA_BaseNPC_Hero::RetrieveItemsFromStash, CDOTA_BaseNPC_Hero::HasRoomForItem (15 total)
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_UnitInventory::FindEmptySpaceInInventory(
        CDOTA_UnitInventory *const this,
        int iAllowedLocations,
        CDOTA_Item *pItem)
{
  int v4; // r13d
  int v5; // r15d
  CNetworkArrayBase<CHandle<CBaseEntity>,17,CDOTA_UnitInventory::NetworkVar_m_hItems> *p_m_hItems; // r12
  int v7; // ebx
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  char v11; // al
  CDOTA_Item *v12; // [rsp+8h] [rbp-38h]

  v4 = iAllowedLocations & 1;
  v5 = iAllowedLocations & 2;
  p_m_hItems = &this->m_hItems;
  v7 = 0;
  while ( 1 )
  {
    if ( (v4 != 0 || v7 > 8)
      && (v5 != 0 && this->m_bStashEnabled.m_Value || (v7 - 9) > 5)
      && (v7 - 15) > 1
      && (p_m_hItems->m_Value[0].m_Index + 2 <= 1
       || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hItems->m_Value[0].m_Index) >> 9) & 0x3F]) == 0
       || (v10 = &v9[p_m_hItems->m_Value[0].m_Index & 0x1FF]) == 0
       || p_m_hItems->m_Value[0].m_Index != v10->m_EHandle.m_Index
       || v10->m_pInstance == 0) )
    {
      if ( (v7 - 6) > 2 )
        break;
      if ( pItem == 0 )
        break;
      v12 = pItem;
      v11 = (*(pItem->_vptr_IHandleEntity + 363))(pItem);
      pItem = v12;
      if ( v11 != 0 )
        break;
    }
    ++v7;
    p_m_hItems = (p_m_hItems + 4);
    if ( v7 == 17 )
      return -1;
  }
  return v7;
}


// CDOTA_UnitInventory::GetParent  (line 332, @0x00000000027ab2c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: __dynamic_cast
// callers: CDOTA_UnitInventory::GetPlayerOwnerID, CDOTA_UnitInventory::MarkAsChanged, CDOTA_UnitInventory::SwapItems, CDOTA_UnitInventory::DropItemAtFountain, CDOTA_UnitInventory::SetNextAutobuyItem, CDOTA_UnitInventory::SetItemInSlot, CDOTA_UnitInventory::RemoveItem, CDOTA_UnitInventory::DropItemOnLocation, CDOTA_UnitInventory::DisassembleItem, CDOTA_UnitInventory::CollectPotentialCombineItems, CDOTA_UnitInventory::TryItemCombine, CDOTA_UnitInventory::CheckPendingCombines (15 total)
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall CDOTA_UnitInventory::GetParent(CDOTA_UnitInventory *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx

  m_Index = this->m_hInventoryParent.m_Value.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hInventoryParent.m_Value.m_Index) >> 9)
                                                            & 0x3F]) != 0
    && (v3 = &v2[this->m_hInventoryParent.m_Value.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && v3->m_pInstance != 0 )
  {
    return __dynamic_cast(v3->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC, 0);
  }
  else
  {
    return 0;
  }
}


// CDOTA_UnitInventory::FindItemSlotInInventory  (line 341, @0x00000000027ab360, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsAllowedLocation, IsValid, LookupEntity, operator CEntityInstance*, operator==
// callers: CDOTABaseAbility::Think, DOTA_ExecuteOrders, CDOTA_Item::Think, CDOTA_UnitInventory::RemoveItem, CDOTA_UnitInventory::DropItemOnLocation, CDOTA_UnitInventory::RemoveComponentsInBluePrint, CDOTA_UnitInventory::TryItemCombine, CDOTA_UnitInventory::MoveItem, CDOTA_BaseNPC::SellItem, CDOTA_BaseNPC::EjectItemFromStash, CDOTA_BaseNPC::GiveItem, CDOTA_BaseNPC::MoveItem (16 total)
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_UnitInventory::FindItemSlotInInventory(
        CDOTA_UnitInventory *const this,
        CDOTA_Item *pItem,
        int iAllowedLocations)
{
  int result; // eax
  int v4; // r10d
  CNetworkArrayBase<CHandle<CBaseEntity>,17,CDOTA_UnitInventory::NetworkVar_m_hItems> *p_m_hItems; // rcx
  int v6; // edx
  CEntityIdentity *v7; // r8
  CEntityIdentity *v8; // r8

  if ( pItem == 0 )
    return -1;
  result = 0;
  v4 = iAllowedLocations & 1;
  p_m_hItems = &this->m_hItems;
  v6 = iAllowedLocations & 2;
  while ( 1 )
  {
    if ( (v4 != 0 || result > 8)
      && (v6 != 0 && this->m_bStashEnabled.m_Value || (result - 9) > 5)
      && p_m_hItems->m_Value[0].m_Index + 2 > 1 )
    {
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hItems->m_Value[0].m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[p_m_hItems->m_Value[0].m_Index & 0x1FF];
        if ( v8 != 0 && p_m_hItems->m_Value[0].m_Index == v8->m_EHandle.m_Index && pItem == v8->m_pInstance )
          break;
      }
    }
    ++result;
    p_m_hItems = (p_m_hItems + 4);
    if ( result == 17 )
      return -1;
  }
  return result;
}


// CDOTA_UnitInventory::FindOrAddSharedCooldown  (line 364, @0x00000000027bbf60, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<sSharedCooldownInfo>, DOTAGameRules, Element, FStrEq, GetGameTime, GrowMemory, _V_strcmp, operator char const*, operator[], sSharedCooldownInfo, ~CUtlString, ~sSharedCooldownInfo
// calls: strcmp, CUtlString::Get, CUtlString::operator=, CUtlString::Set, CUtlString::FreeMemoryBlock, CUtlMemory<sSharedCooldownInfo, int>::Grow, _Unwind_Resume
// callers: CDOTA_UnitInventory::StartCooldown, CDOTA_Item_TranquilBoots::OnDisassemble, CDOTA_Item_TranquilBoots2::OnDisassemble, CDOTA_Modifier_Item_TranquilBoots::OnAttacked, CDOTA_Modifier_Item_TranquilBoots2::OnAttacked
// globals: g_pStringTableCooldownNames
__int64 __fastcall CDOTA_UnitInventory::FindOrAddSharedCooldown(
        CDOTA_UnitInventory *const this,
        const char *pSharedCooldownName,
        double a3,
        float fCooldownLength)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  const char *v8; // rax
  float v9; // xmm0_4
  float v10; // xmm0_4
  sSharedCooldownInfo *v11; // rax
  __int64 result; // rax
  float v13; // xmm0_4
  unsigned int m_Size; // r15d
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rax
  sSharedCooldownInfo *v18; // rax
  sSharedCooldownInfo *v19; // r12
  const char *v20; // rax
  sSharedCooldownInfo *v21; // r14
  float fCooldownLengtha; // [rsp+Ch] [rbp-44h]
  sSharedCooldownInfo newInfo; // [rsp+10h] [rbp-40h] BYREF

  fCooldownLengtha = *&a3;
  if ( g_pStringTableCooldownNames != 0 )
    (*(g_pStringTableCooldownNames->_vptr_INetworkStringTable + 8))(
      g_pStringTableCooldownNames,
      1,
      pSharedCooldownName,
      0xFFFFFFFFLL,
      0,
      a3,
      fCooldownLength);
  v6 = 0;
  if ( this->m_SharedCooldownList.m_Size > 0 )
  {
    while ( 1 )
    {
      v7 = v6;
      v8 = CUtlString::Get(&this->m_SharedCooldownList.m_Memory.m_pMemory[v6].cooldownName);
      if ( pSharedCooldownName == v8 || strcmp(v8, pSharedCooldownName) == 0 )
        break;
      if ( ++v6 >= this->m_SharedCooldownList.m_Size )
        goto LABEL_14;
    }
    v9 = 0.0;
    if ( fCooldownLengtha == 0.0 )
    {
      v21 = &this->m_SharedCooldownList.m_Memory.m_pMemory[v7];
      v21->cooldownLength = fCooldownLengtha;
      v21->cooldownTime = fCooldownLengtha;
      return v6;
    }
    else
    {
      if ( g_pGameRules != 0 )
        v9 = *&g_pGameRules[18].m_szQuestName[20];
      v10 = v9 + fCooldownLengtha;
      v11 = &this->m_SharedCooldownList.m_Memory.m_pMemory[v7];
      if ( v10 > v11->cooldownTime )
      {
        v11->cooldownTime = v10;
        this->m_SharedCooldownList.m_Memory.m_pMemory[v7].cooldownLength = fCooldownLengtha;
        return v6;
      }
      else
      {
        return v6;
      }
    }
  }
  else
  {
LABEL_14:
    newInfo.cooldownName.m_pString = 0;
    CUtlString::operator=(&newInfo.cooldownName, pSharedCooldownName);
    v13 = 0.0;
    if ( g_pGameRules != 0 )
      v13 = *&g_pGameRules[18].m_szQuestName[20];
    m_Size = this->m_SharedCooldownList.m_Size;
    newInfo.cooldownLength = fCooldownLengtha;
    v15 = m_Size == this->m_SharedCooldownList.m_Memory.m_nAllocationCount;
    v16 = m_Size;
    newInfo.cooldownTime = v13 + fCooldownLengtha;
    if ( v15 )
    {
      CUtlMemory<sSharedCooldownInfo,int>::Grow(&this->m_SharedCooldownList.m_Memory, 1);
      v16 = this->m_SharedCooldownList.m_Size;
    }
    this->m_SharedCooldownList.m_Size = v16 + 1;
    v17 = m_Size;
    v15 = &this->m_SharedCooldownList.m_Memory.m_pMemory[v17] == 0;
    v18 = &this->m_SharedCooldownList.m_Memory.m_pMemory[v17];
    v19 = v18;
    if ( !v15 )
    {
      v18->cooldownName.m_pString = 0;
      v20 = CUtlString::Get(&newInfo.cooldownName);
      CUtlString::Set(&v19->cooldownName, v20);
      v19->cooldownLength = newInfo.cooldownLength;
      v19->cooldownTime = newInfo.cooldownTime;
    }
    result = m_Size;
    if ( newInfo.cooldownName.m_pString != 0 )
    {
      CUtlString::FreeMemoryBlock(&newInfo.cooldownName);
      return m_Size;
    }
  }
  return result;
}


// CDOTA_UnitInventory::GetSharedCooldownTime  (line 408, @0x00000000027ab430, libserver.so)  // inlines: FStrEq, _V_strcmp, operator char const*, operator[]
// calls: strcmp, CUtlString::Get
// callers: CDOTABaseAbility::Think, CDOTA_Modifier_Item_TranquilBoots2::OnCreated, CDOTA_Modifier_Item_TranquilBoots::OnCreated
float __fastcall CDOTA_UnitInventory::GetSharedCooldownTime(
        CDOTA_UnitInventory *const this,
        const char *pSharedCooldownName)
{
  __int64 v4; // rbx
  const char *v5; // rax

  if ( pSharedCooldownName == 0 || this->m_SharedCooldownList.m_Size <= 0 )
    return -1.0;
  v4 = 0;
  while ( 1 )
  {
    v5 = CUtlString::Get(&this->m_SharedCooldownList.m_Memory.m_pMemory[v4].cooldownName);
    if ( pSharedCooldownName == v5 || strcmp(v5, pSharedCooldownName) == 0 )
      break;
    if ( ++v4 >= this->m_SharedCooldownList.m_Size )
      return -1.0;
  }
  return this->m_SharedCooldownList.m_Memory.m_pMemory[v4].cooldownTime;
}


// CDOTA_UnitInventory::GetSharedCooldownLength  (line 427, @0x00000000027ab4c0, libserver.so)  // inlines: FStrEq, _V_strcmp, operator char const*, operator[]
// calls: strcmp, CUtlString::Get
float __fastcall CDOTA_UnitInventory::GetSharedCooldownLength(
        CDOTA_UnitInventory *const this,
        const char *pSharedCooldownName)
{
  __int64 v4; // rbx
  const char *v5; // rax

  v4 = 0;
  if ( this->m_SharedCooldownList.m_Size <= 0 )
    return -1.0;
  while ( 1 )
  {
    v5 = CUtlString::Get(&this->m_SharedCooldownList.m_Memory.m_pMemory[v4].cooldownName);
    if ( pSharedCooldownName == v5 || strcmp(v5, pSharedCooldownName) == 0 )
      break;
    if ( this->m_SharedCooldownList.m_Size <= ++v4 )
      return -1.0;
  }
  return this->m_SharedCooldownList.m_Memory.m_pMemory[v4].cooldownLength;
}


// CDOTA_UnitInventory::NumItemsInStash  (line 442, @0x00000000027ab550, libserver.so)
// calls: CDOTA_UnitInventory::GetItemInSlot
// callers: CDOTA_BotMode_Retreat::GetDesire, CDOTA_BaseNPC_Hero::GetNumItemsInStash
int __fastcall CDOTA_UnitInventory::NumItemsInStash(CDOTA_UnitInventory *const this)
{
  int v2; // r12d
  int i; // ebx

  v2 = 0;
  for ( i = 9; i != 15; ++i )
    v2 -= (CDOTA_UnitInventory::GetItemInSlot(this, i) == 0) - 1;
  return v2;
}


// CDOTA_UnitInventory::NumItemsInInventory  (line 457, @0x00000000027ab590, libserver.so)
// calls: CDOTA_UnitInventory::GetItemInSlot
// callers: CDOTA_BotMode_Retreat::GetDesire, CDOTA_BaseNPC_Hero::GetNumItemsInInventory, CDOTA_Ability_Meepo_DividedWeStand::OnInventoryContentsChanged
int __fastcall CDOTA_UnitInventory::NumItemsInInventory(CDOTA_UnitInventory *const this)
{
  int v2; // r12d
  int i; // ebx

  v2 = 0;
  for ( i = 0; i != 9; ++i )
    v2 -= (CDOTA_UnitInventory::GetItemInSlot(this, i) == 0) - 1;
  return v2;
}


// CDOTA_UnitInventory::DumpInventorySlots  (line 473, @0x00000000027ab5d0, libserver.so)  // inlines: GetAbilityName
// calls: Msg, CDOTA_UnitInventory::GetItemInSlot
// callers: DOTA_DumpServerInventory
// strings: "<NoAbilityName>", "[%d] EMPTY\n"
void __fastcall CDOTA_UnitInventory::DumpInventorySlots(CDOTA_UnitInventory *const this)
{
  int i; // ebx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v4; // rdx
  const char *m_pszAbilityName; // rax
  CDOTA_Item *ItemInSlot; // rax

  for ( i = 0; i != 17; ++i )
  {
    while ( 1 )
    {
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(this, i);
      if ( ItemInSlot != 0 )
        break;
      Msg("[%d] EMPTY\n", i++);
      if ( i == 17 )
        return;
    }
    m_pAbilityData = ItemInSlot->m_pAbilityData;
    v4 = "<NoAbilityName>";
    if ( m_pAbilityData != 0 )
    {
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
      if ( m_pszAbilityName != 0 )
        v4 = m_pszAbilityName;
    }
    Msg("[%d] %s\n", i, v4);
  }
}


// CDOTA_AutoCombinableItems::~CDOTA_AutoCombinableItems  (line 506, @0x00000000027d5c80, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CDOTA_AutoBluePrint, CUtlMemory<CDOTA_AutoBluePrint, int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<CDOTA_AutoBluePrint, int>::Purge
void __fastcall CDOTA_AutoCombinableItems::~CDOTA_AutoCombinableItems(CDOTA_AutoCombinableItems *const this)
{
  this->_vptr_IGameSystem = off_42B3F50;  // vptr: CDOTA_AutoCombinableItems
  CUtlVectorBase<CDOTA_AutoBluePrint,CUtlMemory<CDOTA_AutoBluePrint,int>>::RemoveAll(&this->m_AutoBluePrints);
  if ( (this->m_AutoBluePrints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_AutoBluePrint,int>::Purge(&this->m_AutoBluePrints.m_Memory);
    if ( (this->m_AutoBluePrints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_AutoBluePrint,int>::Purge(&this->m_AutoBluePrints.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CDOTA_AutoCombinableItems::~CDOTA_AutoCombinableItems  (line 506, @0x00000000027d5ce0, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CDOTA_AutoCombinableItems, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CDOTA_AutoBluePrint, CUtlMemory<CDOTA_AutoBluePrint, int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CDOTA_AutoBluePrint, int>::Purge
void __fastcall CDOTA_AutoCombinableItems::~CDOTA_AutoCombinableItems(CDOTA_AutoCombinableItems *const this)
{
  this->_vptr_IGameSystem = off_42B3F50;  // vptr: CDOTA_AutoCombinableItems
  CUtlVectorBase<CDOTA_AutoBluePrint,CUtlMemory<CDOTA_AutoBluePrint,int>>::RemoveAll(&this->m_AutoBluePrints);
  if ( (this->m_AutoBluePrints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_AutoBluePrint,int>::Purge(&this->m_AutoBluePrints.m_Memory);
    if ( (this->m_AutoBluePrints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_AutoBluePrint,int>::Purge(&this->m_AutoBluePrints.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_AutoCombinableItems::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 508, @0x00000000027ce900, libserver.so)
void __fastcall CDOTA_AutoCombinableItems::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDOTA_AutoCombinableItems *const this)
{
  ;
}


// CDOTA_AutoCombinableItems::DoesGameSystemReallocate  (line 508, @0x00000000027ce910, libserver.so)
// globals: CDOTA_AutoCombinableItems::sm_Factory
bool __fastcall CDOTA_AutoCombinableItems::DoesGameSystemReallocate(const CDOTA_AutoCombinableItems *const this)
{
  return (*(CDOTA_AutoCombinableItems::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_AutoCombinableItems::sm_Factory);
}


// CDOTA_AutoCombinableItems::SetGameSystemGlobalPtrs  (line 508, @0x00000000027ce930, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_AutoCombinableItems::sm_Factory
void __fastcall CDOTA_AutoCombinableItems::SetGameSystemGlobalPtrs(CDOTA_AutoCombinableItems *const this, void *pValue)
{
  if ( CDOTA_AutoCombinableItems::sm_Factory != 0 )
    (*(CDOTA_AutoCombinableItems::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CDOTA_AutoCombinableItems::sm_Factory,
      pValue);
}


// CDOTA_AutoCombinableItems::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 525, @0x00000000027ab830, libserver.so)
void __cdecl CDOTA_AutoCombinableItems::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDOTA_AutoCombinableItems::GameActivate  (line 530, @0x00000000027bc1b0, libserver.so)  // inlines: AddToTail, CDOTA_AutoBluePrint, CopyConstruct<CDOTA_AutoBluePrint>, DOTAGameRules, Element, GetAbilitiesKeyValues, GetInt, GrowMemory, HKeySymbol, IsAddOnGame, V_memset, V_strncpy<long unsigned int>, memset, operator[]
// calls: CUtlVectorBase<CDOTA_AutoBluePrint, CUtlMemory<CDOTA_AutoBluePrint, int> >::RemoveAll, DOTAGameManager, KeyValues::GetFirstSubKey, CKeyValues_Data::Internal_GetInt, KeyValues::GetNextKey, KeyValues::FindKey, memcpy, KeyValues::GetName, _V_strncpy, KeyValues::GetString, CUtlMemory<CDOTA_AutoBluePrint, int>::Grow, __stack_chk_fail
void __fastcall CDOTA_AutoCombinableItems::GameActivate(
        CDOTA_AutoCombinableItems *const this,
        const EventGameActivate_t *const msg)
{
  CDOTAGameManager *v3; // rax
  const KeyValues *v4; // rdi
  KeyValues *i; // r14
  CDOTAGameManager *v6; // rax
  KeyValues *Key; // rax
  CDOTAGameManager *v8; // rax
  KeyValues *v9; // rax
  CDOTAGameManager *v10; // rax
  KeyValues *v11; // rdi
  KeyValues *j; // r12
  CDOTA_AutoBluePrint *v13; // rdi
  const char *Name; // rax
  const char *String; // rax
  __int64 m_Size; // rax
  int v17; // edx
  int v18; // [rsp+Ch] [rbp-244h]
  CDOTA_AutoBluePrint blueprint; // [rsp+10h] [rbp-240h] BYREF
  unsigned __int64 v20; // [rsp+218h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( g_pGameRules != 0 )
  {
    CUtlVectorBase<CDOTA_AutoBluePrint,CUtlMemory<CDOTA_AutoBluePrint,int>>::RemoveAll(&this->m_AutoBluePrints);
    v3 = DOTAGameManager();
    v4 = *&v3->m_bCustomGame != 0 ? v3->m_pkvAddOnAbilities : v3->m_pkvAbilities;
    if ( v4 != 0 )
    {
      for ( i = KeyValues::GetFirstSubKey(v4); i != 0; i = KeyValues::GetNextKey(i) )
      {
        v6 = DOTAGameManager();
        Key = KeyValues::FindKey(i, v6->m_hKvSymbols[6]);
        if ( Key == 0 || CKeyValues_Data::Internal_GetInt(Key) == 0 )
        {
          v8 = DOTAGameManager();
          v9 = KeyValues::FindKey(i, v8->m_hKvSymbols[4]);
          if ( v9 != 0 && CKeyValues_Data::Internal_GetInt(v9) == 1 )
          {
            v10 = DOTAGameManager();
            v11 = KeyValues::FindKey(i, v10->m_hKvSymbols[5]);
            if ( v11 != 0 )
            {
              for ( j = KeyValues::GetFirstSubKey(v11); j != 0; j = KeyValues::GetNextKey(j) )
              {
                memset(&blueprint, 0, sizeof(blueprint));
                Name = KeyValues::GetName(i);
                _V_strncpy(&blueprint, Name, 260);
                String = KeyValues::GetString(j, 0, "", 0, 0);
                _V_strncpy(blueprint.m_szBluePrint, String, 260);
                m_Size = this->m_AutoBluePrints.m_Size;
                v17 = this->m_AutoBluePrints.m_Size;
                if ( m_Size == this->m_AutoBluePrints.m_Memory.m_nAllocationCount )
                {
                  v18 = this->m_AutoBluePrints.m_Size;
                  CUtlMemory<CDOTA_AutoBluePrint,int>::Grow(&this->m_AutoBluePrints.m_Memory, 1);
                  v17 = this->m_AutoBluePrints.m_Size;
                  m_Size = v18;
                }
                this->m_AutoBluePrints.m_Size = v17 + 1;
                v13 = &this->m_AutoBluePrints.m_Memory.m_pMemory[m_Size];
                if ( v13 != 0 )
                  memcpy(v13, &blueprint, sizeof(CDOTA_AutoBluePrint));
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_AutoCombinableItems::GetAutoBluePrintForUnit  (line 564, @0x00000000027c8520, libserver.so)  // inlines: operator[]
// calls: CDOTA_UnitInventory::IsBluePrintComplete
// callers: CDOTA_UnitInventory::CheckPendingCombines
const char *__fastcall CDOTA_AutoCombinableItems::GetAutoBluePrintForUnit(
        CDOTA_AutoCombinableItems *const this,
        CDOTA_UnitInventory *pInventory,
        CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > *pUsableItems)
{
  int v6; // r12d
  __int64 v7; // rbx

  v6 = 0;
  v7 = 0;
  if ( this->m_AutoBluePrints.m_Size <= 0 )
    return 0;
  while ( !CDOTA_UnitInventory::IsBluePrintComplete(
             pInventory,
             this->m_AutoBluePrints.m_Memory.m_pMemory[v7].m_szBluePrint,
             pUsableItems,
             0) )
  {
    ++v6;
    ++v7;
    if ( this->m_AutoBluePrints.m_Size <= v6 )
      return 0;
  }
  return this->m_AutoBluePrints.m_Memory.m_pMemory[v7].m_szItemName;
}


// CDOTA_UnitInventory::GetPlayerOwnerID  (line 582, @0x00000000027ab330, libserver.so)
// calls: CDOTA_UnitInventory::GetParent
// callers: CDOTA_UnitInventory::GetPlayerOwnerID, CDOTA_UnitInventory::SetItemInSlot, CDOTA_UnitInventory::CollectPotentialCombineItems, CDOTA_UnitInventory::CheckPendingCombines, CDOTA_UnitInventory::AddItem, CDOTA_UnitInventory::AddItems, CDOTA_UnitInventory::OnShopChange, CDOTA_UnitInventory::MoveItem
int __fastcall CDOTA_UnitInventory::GetPlayerOwnerID(CDOTA_UnitInventory *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_UnitInventory::GetParent(this);
  if ( Parent != 0 )
    return (*(Parent->_vptr_IHandleEntity + 414))(Parent);
  else
    return -1;
}


// CDOTA_UnitInventory::GetPlayerOwnerID  (line 582, @0x00000000027ab840, libserver.so)
// calls: CDOTA_UnitInventory::GetPlayerOwnerID
int __fastcall CDOTA_UnitInventory::GetPlayerOwnerID(CDOTA_UnitInventory *const this)
{
  int result; // eax

  result = this->m_nPreGamePlayerID;
  if ( result == -1 )
    return CDOTA_UnitInventory::GetPlayerOwnerID(this);
  return result;
}


// CDOTA_UnitInventory::AddItem  (line 604, @0x00000000027c9450, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CVariantBase, CopyConstruct<CDOTA_Item*>, CreateTableFromKeyValues, DOTAGameRules, Element, Get, GetAbilityName, GetClassNameAsCStr, GetClassname, GetContainedItem, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetInt, GetItemInSlot, GetOwnerEntity, GetParent, GetPlayerOwnerID, GetSerialNumber, GrowMemory, HasItemAddedToInventoryFilter, HasScriptFilter, IsAllowedLocation, RunItemAddedToInventoryFilter, RunScriptFilter, Set, StacksWithOtherOwners, String, ToDOTABaseNPC, VectorAdd, entindex, operator CDOTA_Item*, operator+, operator[], ~CVariantBase
// calls: CGameSceneNode::GetOwnerEntity, CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, CEntityInstance::GetEntityIndex, KeyValues::SetInt, CDOTA_UnitInventory::GetParent, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetInt, KeyValues::~KeyValues, KeyValues::operator delete, CDOTA_UnitInventory::FindItemInInventory (39 total)
// callers: CDOTAGamerules::OnARDMDuringMatchSpawnComplete, CDOTA_UnitInventory::PickupItem, CDOTA_BaseNPC::Script_AddItem, CDOTA_ScriptedSpawner::InputTeleportToWaypoint, CDOTA_BaseNPC::AddItem, CDOTA_BaseNPC::GiveItem, CDOTA_BaseNPC::GiveItems, Playtesting_MoveToOtherTeam, Playtesting_ChangeToRandomHero, CDOTA_BaseNPC::AttemptToPurchaseItem, CDOTA_BaseNPC_Creature::InitializeCreature, CDOTA_Ability_LoneDruid_SpiritBear::SetBear (17 total)
// strings: "ItemAddedToInventoryData", "item_entindex_const", "item_parent_entindex_const", "inventory_parent_entindex_const", "suggested_slot", "<NoAbilityName>" (7 total)
DOTA_INVALID_ORDERS __fastcall CDOTA_UnitInventory::AddItem(
        CDOTA_UnitInventory *const this,
        CDOTA_Item *pItem,
        int inventoryRights,
        int iSuggestedSlot,
        CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > *pResultingItems,
        bool bForceAdd)
{
  CGameSceneNode *m_pParent; // rdi
  CDOTABaseGameMode *GameModeEntity; // rax
  CDOTABaseGameMode *v11; // r14
  CEntityIndex v12; // eax
  int32 m_Data; // edx
  CDOTA_BaseNPC *Parent; // rax
  int32 v15; // edx
  char v16; // r14
  CDOTA_BaseNPC *v17; // rax
  int m_Value; // r8d
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v21; // rsi
  const char *m_pszAbilityName; // rax
  CDOTA_Item *ItemInInventory; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_PlayerResource *v25; // rdi
  int m_nPreGamePlayerID; // esi
  __int64 v27; // r14
  int v28; // eax
  CDOTA_Item **v29; // rax
  CDOTA_BaseNPC *v30; // rax
  int v31; // eax
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // r13
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  __int64 m_Size; // r13
  int v37; // r12d
  int v38; // r12d
  CDOTA_Item **m_pMemory; // rax
  CDOTA_Item **v40; // rax
  int v41; // eax
  CDOTA_Item **v42; // rax
  __int64 (__fastcall *v43)(IScriptVM *, CDOTA_Item *, const char *, _QWORD, _QWORD); // r14
  const char *Name; // rax
  __int64 v45; // r14
  int PlayerOwnerID; // eax
  CBaseEntity *v47; // r15
  CBaseEntity *EntityByClassname; // rax
  CEntityInstance *v49; // rax
  CEntityInstance *v50; // r13
  IHandleEntity *HandleEntity; // r14
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  CEntityIdentity *v54; // rax
  const char *v55; // rdi
  __m128i v56; // xmm0
  float v57; // r13d
  const Vector *AbsOrigin; // rax
  vec_t v59; // xmm0_4
  vec_t v60; // xmm1_4
  CDOTA_Item_Physical *ItemOnPositionSync; // rax
  CEntityIdentity *v62; // rdx
  __int16 v63; // cx
  float m_flRecentlyDroppedItemsTime; // xmm0_4
  double v65; // xmm1_8
  double v66; // xmm0_8
  CGameRules *v67; // rax
  float v68; // xmm0_4
  IScriptVM *v69; // [rsp+10h] [rbp-90h]
  KeyValues *numItemsOnGround; // [rsp+28h] [rbp-78h]
  int numItemsOnGrounda; // [rsp+28h] [rbp-78h]
  CBaseEntity *pOriginalParent; // [rsp+30h] [rbp-70h]
  float iSlota; // [rsp+38h] [rbp-68h]
  CHandle<CBaseEntity> src; // [rsp+40h] [rbp-60h] BYREF
  CDOTA_Item *pCombineResultItem; // [rsp+50h] [rbp-50h] BYREF
  __int16 v79; // [rsp+58h] [rbp-48h]
  __int16 v80; // [rsp+5Ah] [rbp-46h]
  Vector vecLocation; // [rsp+60h] [rbp-40h] BYREF

  pOriginalParent = 0;
  m_pParent = pItem->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    pOriginalParent = CGameSceneNode::GetOwnerEntity(m_pParent);
  if ( g_pGameRules != 0 )
  {
    GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
    v11 = GameModeEntity;
    if ( GameModeEntity != 0
      && GameModeEntity->m_ItemAddedToInventoryFilter.m_hFunction != 0
      && GameModeEntity->m_ItemAddedToInventoryFilter.m_hContext != 0 )
    {
      numItemsOnGround = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(numItemsOnGround, "ItemAddedToInventoryData");
      v12.m_Data = CEntityInstance::GetEntityIndex(pItem).m_Data;
      KeyValues::SetInt(numItemsOnGround, "item_entindex_const", v12.m_Data);
      m_Data = -1;
      if ( pOriginalParent != 0 )
        m_Data = CEntityInstance::GetEntityIndex(pOriginalParent).m_Data;
      KeyValues::SetInt(numItemsOnGround, "item_parent_entindex_const", m_Data);
      Parent = CDOTA_UnitInventory::GetParent(this);
      v15 = -1;
      if ( Parent != 0 )
        v15 = CEntityInstance::GetEntityIndex(Parent).m_Data;
      KeyValues::SetInt(numItemsOnGround, "inventory_parent_entindex_const", v15);
      KeyValues::SetInt(numItemsOnGround, "suggested_slot", iSuggestedSlot);
      if ( v11->m_ItemAddedToInventoryFilter.m_hFunction != 0
        && v11->m_ItemAddedToInventoryFilter.m_hContext != 0
        && numItemsOnGround != 0 )
      {
        v80 = 0;
        v79 = 0;
        pCombineResultItem = 0;
        v69 = g_pScriptVM;
        (*(*g_pScriptVM + 264LL))(g_pScriptVM, &pCombineResultItem);
        if ( pCombineResultItem != 0 )
          Recursive_ConvertKeyValuesToTable(numItemsOnGround, v69, pCombineResultItem);
        vecLocation.z = 0.0;
        *&vecLocation.x = 0;
        (*(*g_pScriptVM + 160LL))(
          g_pScriptVM,
          v11->m_ItemAddedToInventoryFilter.m_hFunction,
          &pCombineResultItem,
          1,
          &vecLocation,
          v11->m_ItemAddedToInventoryFilter.m_hContext,
          1);
        v16 = 0;
        if ( LOWORD(vecLocation.z) == 6 && LOBYTE(vecLocation.x) != 0 )
        {
          v43 = *(*g_pScriptVM + 304LL);
          Name = KeyValues::GetName(numItemsOnGround);
          v45 = v43(g_pScriptVM, pCombineResultItem, Name, 0, 0);
          if ( v45 != 0 )
          {
            KeyValues::~KeyValues(numItemsOnGround);
            KeyValues::operator delete(numItemsOnGround);
            numItemsOnGround = v45;
          }
          v16 = 1;
        }
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &pCombineResultItem);
        CVariantBase<CVariantDefaultAllocator>::Free(&vecLocation);
        CVariantBase<CVariantDefaultAllocator>::Free(&pCombineResultItem);
        if ( v16 == 0 )
        {
          KeyValues::~KeyValues(numItemsOnGround);
          KeyValues::operator delete(numItemsOnGround);
          return DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS;
        }
        iSuggestedSlot = KeyValues::GetInt(numItemsOnGround, "suggested_slot", iSuggestedSlot);
        goto LABEL_19;
      }
      iSuggestedSlot = KeyValues::GetInt(numItemsOnGround, "suggested_slot", iSuggestedSlot);
      if ( numItemsOnGround != 0 )
      {
LABEL_19:
        KeyValues::~KeyValues(numItemsOnGround);
        KeyValues::operator delete(numItemsOnGround);
      }
    }
  }
  if ( (*(pItem->_vptr_IHandleEntity + 357))(pItem) != 0 )
  {
    v17 = CDOTA_UnitInventory::GetParent(this);
    if ( (*(pItem->_vptr_IHandleEntity + 362))(pItem, v17) == 0 )
      return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_CANT_PICK_UP_ITEM;
    v32 = CDOTA_UnitInventory::GetParent(this);
    v33 = v32;
    if ( v32 != 0 && v32->m_bIsDOTANPC )
    {
      v34 = CDOTA_UnitInventory::GetParent(this);
      CBaseEntity::SetParent(pItem, v34, 0, 0);
      v35 = CDOTA_UnitInventory::GetParent(this);
      (*(pItem->_vptr_IHandleEntity + 40))(pItem, v35);
      CBaseEntity::SetLocalOrigin(pItem, &vec3_origin);
      CDOTA_UnitInventory::SetItemInSlot(this, 18, pItem);
      CDOTA_BaseNPC::CastAbilityImmediately(v33, pItem, -1);
      return DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS;
    }
    return DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS;
  }
  if ( (*(pItem->_vptr_IHandleEntity + 346))(pItem) != 0 )
  {
    if ( pItem->m_iSharability.m_Value != 0
      || !pItem->m_bStackWithOtherOwners
      || (v30 = CDOTA_UnitInventory::GetParent(this)) == 0
      || (v30->m_iUnitType & 0x100) != 0 )
    {
      m_Value = pItem->m_iPlayerOwnerID.m_Value;
    }
    else
    {
      m_Value = -1;
    }
    m_pAbilityData = pItem->m_pAbilityData;
    v21 = "<NoAbilityName>";
    if ( m_pAbilityData != 0 )
    {
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
      if ( m_pszAbilityName != 0 )
        v21 = m_pszAbilityName;
    }
    ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(this, v21, inventoryRights, 0, m_Value);
    *&vecLocation.x = ItemInInventory;
    if ( ItemInInventory != 0 )
    {
      CDOTA_Item::CombineStacks(ItemInInventory, pItem);
      CDOTA_UnitInventory::MarkAsChanged(this);
      if ( pResultingItems != 0 )
        CUtlVectorBase<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>>::AddToTail(pResultingItems, &vecLocation);
      UTIL_Remove(pItem);
      return DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS;
    }
  }
  CDOTA_UnitInventory::SetItemInSlot(this, 15, pItem);
  if ( !bForceAdd )
  {
    v24 = CDOTA_UnitInventory::GetParent(this);
    if ( v24 != 0 && (*(pItem->_vptr_IHandleEntity + 362))(pItem, v24) == 0 )
    {
      CDOTA_UnitInventory::SetItemInSlot(this, 15, 0);
      goto LABEL_34;
    }
  }
  v25 = g_pDOTAPlayerResource;
  if ( g_pDOTAPlayerResource == 0 )
    goto LABEL_80;
  m_nPreGamePlayerID = this->m_nPreGamePlayerID;
  if ( m_nPreGamePlayerID == -1 )
  {
    PlayerOwnerID = CDOTA_UnitInventory::GetPlayerOwnerID(this);
    v25 = g_pDOTAPlayerResource;
    m_nPreGamePlayerID = PlayerOwnerID;
  }
  if ( CDOTA_PlayerResource::GetPlayer(v25, m_nPreGamePlayerID) == 0 )
  {
LABEL_80:
    if ( (inventoryRights & 2) != 0 )
      inventoryRights = inventoryRights & 0xFFFFFFF5 | 8;
  }
  pCombineResultItem = 0;
  while ( CDOTA_UnitInventory::CheckPendingCombines(
            this,
            inventoryRights,
            pItem->m_iPlayerOwnerID.m_Value,
            0,
            &pCombineResultItem) )
    ;
  if ( CEntityHandle::operator CEntityInstance *(&this->m_hItems.m_Value[15]) == 0 )
  {
    if ( pResultingItems != 0 )
    {
      m_Size = pResultingItems->m_Size;
      v37 = pResultingItems->m_Size;
      if ( m_Size == pResultingItems->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CDOTA_Item *,int>::Grow(&pResultingItems->m_Memory, 1);
        v37 = pResultingItems->m_Size;
      }
      v38 = v37 + 1;
      m_pMemory = pResultingItems->m_Memory.m_pMemory;
      pResultingItems->m_Size = v38;
      v40 = &m_pMemory[m_Size];
      if ( v40 != 0 )
      {
        *v40 = pItem;
        v38 = pResultingItems->m_Size;
      }
      v41 = v38;
      if ( pResultingItems->m_Memory.m_nAllocationCount == v38 )
      {
        CUtlMemory<CDOTA_Item *,int>::Grow(&pResultingItems->m_Memory, 1);
        v41 = pResultingItems->m_Size;
      }
      pResultingItems->m_Size = v41 + 1;
      v42 = &pResultingItems->m_Memory.m_pMemory[v38];
      if ( v42 != 0 )
        *v42 = pCombineResultItem;
    }
    return DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS;
  }
  CDOTA_UnitInventory::SetItemInSlot(this, 15, 0);
  if ( iSuggestedSlot == -1 )
  {
    iSuggestedSlot = CDOTA_UnitInventory::FindEmptySpaceInInventory(this, inventoryRights, pItem);
  }
  else if ( (inventoryRights & 1) != 0 || iSuggestedSlot > 8 )
  {
    if ( (inventoryRights & 2) == 0 || !this->m_bStashEnabled.m_Value )
    {
      v31 = -1;
      if ( (iSuggestedSlot - 9) > 5 )
        v31 = iSuggestedSlot;
      iSuggestedSlot = v31;
    }
  }
  else
  {
    iSuggestedSlot = -1;
  }
  if ( pResultingItems != 0 )
  {
    v27 = pResultingItems->m_Size;
    v28 = pResultingItems->m_Size;
    if ( v27 == pResultingItems->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CDOTA_Item *,int>::Grow(&pResultingItems->m_Memory, 1);
      v28 = pResultingItems->m_Size;
    }
    pResultingItems->m_Size = v28 + 1;
    v29 = &pResultingItems->m_Memory.m_pMemory[v27];
    if ( v29 != 0 )
      *v29 = pItem;
  }
  if ( iSuggestedSlot != -1 )
    return !CDOTA_UnitInventory::SetItemInSlot(this, iSuggestedSlot, pItem) ? 52 : -1;
  if ( (inventoryRights & 4) == 0 )
  {
    if ( (inventoryRights & 8) != 0 )
    {
LABEL_79:
      CDOTA_UnitInventory::DropItemAtFountain(this, pItem);
      return DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS;
    }
LABEL_34:
    CBaseEntity::SetParent(pItem, pOriginalParent, 0, 0);
    if ( pOriginalParent != 0 )
      CBaseEntity::SetLocalOrigin(pItem, &vec3_origin);
    return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_CANT_PICK_UP_ITEM;
  }
  if ( CDOTA_Item::GetContainer(pItem) != 0 )
    goto LABEL_34;
  if ( (inventoryRights & 0x10) != 0 )
  {
    v47 = 0;
    numItemsOnGrounda = 0;
    while ( 1 )
    {
      EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v47, "dota_item_drop");
      v47 = EntityByClassname;
      if ( EntityByClassname == 0 )
        break;
      v49 = CEntityHandle::operator CEntityInstance *(&EntityByClassname[1].m_vecVelocity);
      v50 = v49;
      if ( v49 != 0 )
      {
        HandleEntity = CEntityHandle::GetHandleEntity(&v49[11].m_pEntity + 1);
        if ( HandleEntity == CEntityHandle::GetHandleEntity(&pItem->m_hOwnerEntity.m_Value) )
        {
          m_pEntity = pItem->m_pEntity;
          m_pAsString = "";
          if ( m_pEntity->m_designerName.u.m_Id != 0 )
            m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
          v54 = v50->m_pEntity;
          v55 = "";
          if ( v54->m_designerName.u.m_Id != 0 )
            v55 = v54->m_designerName.u.m_pAsString;
          numItemsOnGrounda += V_stricmp_fast(v55, m_pAsString) == 0;
        }
      }
    }
    if ( numItemsOnGrounda >= dota_max_physical_items_drop_limit.m_pParent->m_Value.m_nValue )
    {
      CBaseEntity::SetParent(pItem, pOriginalParent, 0, 0);
      return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_CANT_PICK_UP_ITEM;
    }
  }
  CBaseEntity::SetParent(pItem, 0, 0, 0);
  if ( pOriginalParent == 0 )
    goto LABEL_79;
  *v56.m128i_i32 = RandomFloat(-50.0, 50.0);
  v57 = COERCE_FLOAT(_mm_cvtsi128_si32(v56));
  iSlota = RandomFloat(-50.0, 50.0);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pOriginalParent);
  v59 = iSlota + AbsOrigin->x;
  v60 = AbsOrigin->z + 0.0;
  vecLocation.y = v57 + AbsOrigin->y;
  vecLocation.x = v59;
  vecLocation.z = v60;
  ItemOnPositionSync = CreateItemOnPositionSync(pItem, 0, *&vecLocation.x, v60);
  if ( ItemOnPositionSync != 0 )
  {
    v62 = ItemOnPositionSync->m_pEntity;
    src.m_Index = -1;
    if ( v62 != 0 )
    {
      v63 = 0x7FFF;
      if ( v62->m_EHandle.m_Index != -1 )
        v63 = v62->m_EHandle.m_Index & 0x7FFF;
      src.m_Index = (((v62->m_EHandle.m_Index >> 15) - (v62->m_flags & 1)) << 15) | v63 & 0x7FFF;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(
      &this->m_vecRecentlyDroppedItems,
      &src);
  }
  m_flRecentlyDroppedItemsTime = this->m_flRecentlyDroppedItemsTime;
  if ( m_flRecentlyDroppedItemsTime > 0.0 )
  {
    v65 = 0.0;
    v66 = m_flRecentlyDroppedItemsTime + 1.0;
    v67 = g_pGameRules;
    if ( g_pGameRules != 0 )
      v65 = *&g_pGameRules[18].m_szQuestName[20];
    if ( v65 <= v66 )
      goto LABEL_118;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecRecentlyDroppedItems);
  }
  v67 = g_pGameRules;
LABEL_118:
  v68 = 0.0;
  if ( v67 != 0 )
    v68 = *&v67[18].m_szQuestName[20];
  this->m_flRecentlyDroppedItemsTime = v68;
  return DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS;
}


// CDOTA_UnitInventory::AddItems  (line 831, @0x00000000027ca140, libserver.so)  // inlines: CEntityHandle, CHandle, Element, Get, GetAbilityName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetPlayerOwnerID, GetSerialNumber, HasDeletionPendingCombinedItem, HasElement, IndexToIdentity, IsBackpackSlot, IsValid, LookupEntity, Set, StacksWithOtherOwners, ToDOTABaseNPC, operator CDOTA_Item*, operator CEntityInstance*, operator[]
// calls: CDOTA_UnitInventory::FindItemInInventory, CDOTA_Item::CombineStacks, CDOTA_UnitInventory::MarkAsChanged, UTIL_RemoveImmediate, CUtlVectorBase<CHandle<CDOTA_Item>, CUtlMemory<CHandle<CDOTA_Item>, int> >::Remove, CDOTA_UnitInventory::GetPlayerOwnerID, CDOTA_UnitInventory::CheckPendingCombines, CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::GetInventory, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_UnitInventory::FindEmptySpaceInInventory, CDOTA_UnitInventory::SetItemInSlot
// callers: CDOTA_BaseNPC::GiveItems
// strings: "<NoAbilityName>"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_UnitInventory::AddItems(
        CDOTA_UnitInventory *const this,
        CUtlVector<CHandle<CDOTA_Item>,CUtlMemory<CHandle<CDOTA_Item>,int> > *pItems,
        int inventoryRights)
{
  int v5; // r13d
  __int64 v6; // r14
  int m_Value; // r8d
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v9; // rsi
  const char *m_pszAbilityName; // rax
  CDOTA_Item *ItemInInventory; // rax
  CDOTA_Item *m_pInstance; // r15
  CConcreteEntityList *v13; // rsi
  CHandle<CDOTA_Item> *v14; // rdx
  uint32 m_Index; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  __int64 v18; // rcx
  CEntityIdentity *v19; // rdx
  int m_nPreGamePlayerID; // edx
  int v21; // r13d
  __int64 v22; // r14
  CHandle<CDOTA_Item> *v23; // rdx
  uint32 v24; // eax
  __int16 v25; // cx
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  CEntityInstance *v28; // r15
  const CGameSceneNode *m_pObj; // rdi
  CBaseEntity *OwnerEntity; // rax
  CDOTA_BaseNPC *v31; // rdi
  CEntityIdentity *m_pEntity; // rcx
  __int16 v33; // ax
  CDOTA_UnitInventory *Inventory; // rax
  int v35; // r14d
  __int64 v36; // r15
  CDOTA_Item *v37; // r13
  CHandle<CDOTA_Item> *v38; // rdx
  uint32 v39; // eax
  __int16 v40; // cx
  CEntityIdentity *v41; // rdx
  CEntityIdentity *v42; // rdx
  int iSlot; // [rsp+0h] [rbp-50h]
  CHandle<CBaseEntity> v45; // [rsp+10h] [rbp-40h] BYREF

  v5 = pItems->m_Size - 1;
  v6 = v5;
  if ( v5 >= 0 )
  {
    do
    {
      m_pInstance = 0;
      v13 = CEntityHandle::gm_pEntityList;
      v14 = &pItems->m_Memory.m_pMemory[v6];
      m_Index = v14->m_Index;
      if ( v14->m_Index + 2 > 1 )
      {
        v16 = v14->m_Index;
        v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F];
        if ( v17 != 0 )
        {
          v18 = v16 & 0x1FF;
          v13 = (8 * v18);
          v19 = &v17[v18];
          if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
            m_pInstance = v19->m_pInstance;
        }
      }
      if ( (*(m_pInstance->_vptr_IHandleEntity + 346))(m_pInstance, v13) != 0 )
      {
        if ( m_pInstance->m_iSharability.m_Value != 0 || !m_pInstance->m_bStackWithOtherOwners )
          m_Value = m_pInstance->m_iPlayerOwnerID.m_Value;
        else
          m_Value = -1;
        m_pAbilityData = m_pInstance->m_pAbilityData;
        v9 = "<NoAbilityName>";
        if ( m_pAbilityData != 0 )
        {
          m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
          if ( m_pszAbilityName != 0 )
            v9 = m_pszAbilityName;
        }
        ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(this, v9, inventoryRights, 0, m_Value);
        if ( ItemInInventory != 0 )
        {
          CDOTA_Item::CombineStacks(ItemInInventory, m_pInstance);
          CDOTA_UnitInventory::MarkAsChanged(this);
          UTIL_RemoveImmediate(m_pInstance);
          CUtlVectorBase<CHandle<CDOTA_Item>,CUtlMemory<CHandle<CDOTA_Item>,int>>::Remove(pItems, v5);
        }
      }
      --v5;
      --v6;
    }
    while ( v5 != -1 );
  }
  do
  {
    m_nPreGamePlayerID = this->m_nPreGamePlayerID;
    if ( m_nPreGamePlayerID == -1 )
      m_nPreGamePlayerID = CDOTA_UnitInventory::GetPlayerOwnerID(this);
  }
  while ( CDOTA_UnitInventory::CheckPendingCombines(this, inventoryRights, m_nPreGamePlayerID, pItems, 0) );
  v21 = pItems->m_Size - 1;
  v22 = v21;
  if ( v21 >= 0 )
  {
    while ( 1 )
    {
      v23 = &pItems->m_Memory.m_pMemory[v22];
      v24 = v23->m_Index;
      if ( v23->m_Index + 2 <= 1 )
        goto LABEL_24;
      v25 = v23->m_Index;
      v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23->m_Index) >> 9) & 0x3F];
      if ( v26 == 0 )
        goto LABEL_24;
      v27 = &v26[v25 & 0x1FF];
      if ( v27 == 0 )
        goto LABEL_24;
      if ( v24 != v27->m_EHandle.m_Index )
        goto LABEL_24;
      v28 = v27->m_pInstance;
      if ( v27->m_pInstance == 0 || (v28->m_pEntity->m_flags & 0x200) != 0 )
        goto LABEL_24;
      m_pObj = v28[3].m_CScriptComponent[1].m_pOwner.m_pObj;
      if ( m_pObj == 0 )
        goto LABEL_25;
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pObj);
      v31 = OwnerEntity;
      if ( OwnerEntity == 0 || !OwnerEntity->m_bIsDOTANPC )
        goto LABEL_25;
      m_pEntity = v28->m_pEntity;
      v45.m_Index = -1;
      if ( m_pEntity != 0 )
      {
        v33 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v33 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v45.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v33 & 0x7FFF;
      }
      Inventory = CDOTA_BaseNPC::GetInventory(v31);
      if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
             &Inventory->m_hPendingCombineItemRemoves,
             &v45) < 0 )
      {
        --v21;
        --v22;
        if ( v21 == -1 )
        {
LABEL_41:
          v35 = pItems->m_Size - 1;
          if ( v35 >= 0 )
          {
            v36 = v35;
            do
            {
              v37 = 0;
              v38 = &pItems->m_Memory.m_pMemory[v36];
              v39 = v38->m_Index;
              if ( v38->m_Index + 2 > 1 )
              {
                v40 = v38->m_Index;
                v41 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v38->m_Index) >> 9) & 0x3F];
                if ( v41 != 0 )
                {
                  v42 = &v41[v40 & 0x1FF];
                  if ( v42 != 0 && v39 == v42->m_EHandle.m_Index )
                    v37 = v42->m_pInstance;
                }
              }
              iSlot = CDOTA_UnitInventory::FindEmptySpaceInInventory(this, inventoryRights, 0);
              if ( ((*(v37->_vptr_IHandleEntity + 363))(v37) != 0 || (iSlot - 6) > 2)
                && iSlot != -1
                && CDOTA_UnitInventory::SetItemInSlot(this, iSlot, v37) )
              {
                CUtlVectorBase<CHandle<CDOTA_Item>,CUtlMemory<CHandle<CDOTA_Item>,int>>::Remove(pItems, v35);
              }
              --v35;
              --v36;
            }
            while ( v35 != -1 );
          }
          return;
        }
      }
      else
      {
LABEL_24:
        CUtlVectorBase<CHandle<CDOTA_Item>,CUtlMemory<CHandle<CDOTA_Item>,int>>::Remove(pItems, v21);
LABEL_25:
        --v21;
        --v22;
        if ( v21 == -1 )
          goto LABEL_41;
      }
    }
  }
}


// CDOTA_UnitInventory::MarkAsChanged  (line 909, @0x00000000027ab860, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: CDOTA_UnitInventory::GetParent
// callers: CDOTA_UnitInventory::SwapItems, CDOTA_UnitInventory::SetItemInSlot, CDOTA_UnitInventory::DropItemOnLocation, CDOTA_UnitInventory::AddItem, CDOTA_UnitInventory::AddItems
void __fastcall CDOTA_UnitInventory::MarkAsChanged(CDOTA_UnitInventory *const this)
{
  int m_Value; // edx
  int v3; // ebx
  CDOTA_BaseNPC *Parent; // rax

  m_Value = this->m_iParity.m_Value;
  v3 = (m_Value + 1) % 16;
  if ( m_Value != v3 )
  {
    (*(this->_vptr_CDOTA_UnitInventory + 2))(this, 120, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iParity.m_Value = v3;
  }
  Parent = CDOTA_UnitInventory::GetParent(this);
  if ( Parent != 0 )
    (*(Parent->_vptr_IHandleEntity + 478))(Parent);
}


// CDOTA_UnitInventory::RemoveItem  (line 921, @0x00000000027b7e50, libserver.so)  // inlines: CreateEvent, IsRealHero, SetInt, ToDOTABaseNPCHero, entindex
// calls: CDOTA_UnitInventory::FindItemSlotInInventory, CDOTA_UnitInventory::SetItemInSlot, CDOTA_UnitInventory::GetParent, CBaseEntity::SetParent, CEntityInstance::GetEntityIndex, UTIL_RemoveImmediate
// callers: CDOTAGamerules::SwapPlayers, CDOTA_Item::UpdateOnRemove, CDOTA_UnitInventory::EjectItemFromStash, CDOTA_UnitInventory::CheckPendingCombines, CDOTA_BaseNPC::Script_RemoveItem, CDOTA_BaseNPC::Script_TakeItem, CDOTA_BaseNPC::GiveItem, CDOTA_BaseNPC::GiveItems, Playtesting_ChangeToRandomHero, CDOTA_BaseNPC_Hero::Spawn, CDOTA_Modifier_Courier_ReturnStashItems::OnIntervalThink, CDOTA_Ability_LoneDruid_SpiritBear::SetBear (15 total)
// strings: "dota_hero_inventory_item_change", "hero_entindex", "item_entindex"
void __fastcall CDOTA_UnitInventory::RemoveItem(
        CDOTA_UnitInventory *const this,
        CDOTA_Item *pItem,
        bool bDestroy,
        bool bFromStash)
{
  int ItemSlotInInventory; // eax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v10; // r12
  __int64 v11; // r14
  CEntityIndex v12; // eax
  CEntityIndex v13; // eax

  if ( pItem != 0 )
  {
    ItemSlotInInventory = CDOTA_UnitInventory::FindItemSlotInInventory(this, pItem, 3);
    if ( ItemSlotInInventory != -1 )
      CDOTA_UnitInventory::SetItemInSlot(this, ItemSlotInInventory, 0);
    if ( !bFromStash )
      (*(pItem->_vptr_IHandleEntity + 334))(pItem);
    Parent = CDOTA_UnitInventory::GetParent(this);
    v10 = Parent;
    if ( Parent != 0 && (Parent->m_iUnitType & 1) != 0 && !Parent->m_bIsIllusion.m_Value )
    {
      v11 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_hero_inventory_item_change", 0, 0);
      if ( v11 != 0 )
      {
        (*(*v11 + 112LL))(v11, "player_id", LODWORD(v10[1].m_pfnBlocked.__delta));
        v12.m_Data = CEntityInstance::GetEntityIndex(v10).m_Data;
        (*(*v11 + 112LL))(v11, "hero_entindex", v12.m_Data);
        v13.m_Data = CEntityInstance::GetEntityIndex(pItem).m_Data;
        (*(*v11 + 112LL))(v11, "item_entindex", v13.m_Data);
        (*(*v11 + 104LL))(v11, "removed", 1);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v11, 1);
      }
    }
    CBaseEntity::SetParent(pItem, 0, 0, 0);
    if ( bDestroy )
      UTIL_RemoveImmediate(pItem);
  }
}


// CDOTA_UnitInventory::OnShopChange  (line 964, @0x00000000027ca510, libserver.so)  // inlines: GetPlayerOwnerID
// calls: CDOTA_UnitInventory::CheckPendingCombines, CDOTA_UnitInventory::GetPlayerOwnerID
// callers: CDOTA_BaseNPC::EnterShop, CDOTA_BaseNPC::LeaveShop, CDOTA_BaseNPC_Hero::RespawnHero
void __fastcall CDOTA_UnitInventory::OnShopChange(
        CDOTA_UnitInventory *const this,
        DOTA_SHOP_TYPE iPrevShop,
        DOTA_SHOP_TYPE iNewShop)
{
  int m_nPreGamePlayerID; // edx

  if ( iNewShop == DOTA_SHOP_TYPE::DOTA_SHOP_HOME )
  {
    do
    {
      m_nPreGamePlayerID = this->m_nPreGamePlayerID;
      if ( m_nPreGamePlayerID == -1 )
        m_nPreGamePlayerID = CDOTA_UnitInventory::GetPlayerOwnerID(this);
    }
    while ( CDOTA_UnitInventory::CheckPendingCombines(this, 3, m_nPreGamePlayerID, 0, 0) );
  }
}


// CDOTA_UnitInventory::MoveItem  (line 975, @0x00000000027ca560, libserver.so)  // inlines: FStrEq, GetAbilityName, GetPlayerOwnerID, IsBackpackSlot, StacksWithOtherOwners, _V_strcmp
// calls: CDOTA_UnitInventory::FindItemSlotInInventory, CDOTA_UnitInventory::GetItemInSlot, strcmp, CDOTA_UnitInventory::SwapItems, CDOTA_UnitInventory::GetPlayerOwnerID, CDOTA_UnitInventory::CheckPendingCombines, CDOTA_Item::CombineStacks, CDOTA_UnitInventory::SetItemInSlot, UTIL_RemoveImmediate
// callers: OnCreateIllusionsSpawnCompletion, CDOTA_BaseNPC::MoveItem, CDOTA_BaseNPC_Hero::RetrieveItemsFromStash
// strings: "<NoAbilityName>"
void __fastcall CDOTA_UnitInventory::MoveItem(CDOTA_UnitInventory *const this, CDOTA_Item *pItem, int iNewSlot)
{
  int ItemSlotInInventory; // eax
  int v7; // r13d
  CDOTA_Item *ItemInSlot; // r15
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v10; // rsi
  const char *m_pszAbilityName; // rax
  DOTAAbilityData_t *v12; // rax
  const char *v13; // rdi
  const char *v14; // rax
  int m_nPreGamePlayerID; // edx

  ItemSlotInInventory = CDOTA_UnitInventory::FindItemSlotInInventory(this, pItem, 3);
  v7 = ItemSlotInInventory;
  if ( ItemSlotInInventory != -1
    && iNewSlot != -1
    && ItemSlotInInventory != iNewSlot
    && ((iNewSlot - 6) > 2 || (*(pItem->_vptr_IHandleEntity + 363))(pItem) != 0) )
  {
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(this, iNewSlot);
    if ( (pItem->m_pEntity->m_flags & 0x200) == 0 )
    {
      if ( ItemInSlot != 0 )
      {
        if ( (v7 - 6) <= 2 && (*(ItemInSlot->_vptr_IHandleEntity + 363))(ItemInSlot) == 0 )
          return;
        if ( (*(pItem->_vptr_IHandleEntity + 346))(pItem) != 0 )
        {
          m_pAbilityData = pItem->m_pAbilityData;
          v10 = "<NoAbilityName>";
          if ( m_pAbilityData != 0 )
          {
            m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
            if ( m_pszAbilityName != 0 )
              v10 = m_pszAbilityName;
          }
          v12 = ItemInSlot->m_pAbilityData;
          v13 = "<NoAbilityName>";
          if ( v12 != 0 )
          {
            v14 = v12->m_pszAbilityName;
            if ( v14 != 0 )
              v13 = v14;
          }
          if ( (v10 == v13 || strcmp(v13, v10) == 0)
            && (pItem->m_iSharability.m_Value == 0 && pItem->m_bStackWithOtherOwners
             || ItemInSlot->m_iPlayerOwnerID.m_Value == pItem->m_iPlayerOwnerID.m_Value) )
          {
            if ( pItem->m_bChanneling || pItem->m_bInAbilityPhase.m_Value )
            {
              CDOTA_Item::CombineStacks(pItem, ItemInSlot);
              CDOTA_UnitInventory::SwapItems(this, v7, iNewSlot);
              UTIL_RemoveImmediate(ItemInSlot);
            }
            else
            {
              CDOTA_Item::CombineStacks(ItemInSlot, pItem);
              CDOTA_UnitInventory::SetItemInSlot(this, v7, 0);
              UTIL_RemoveImmediate(pItem);
            }
            return;
          }
        }
      }
      else
      {
        (*(pItem->_vptr_IHandleEntity + 346))(pItem);
      }
      CDOTA_UnitInventory::SwapItems(this, v7, iNewSlot);
      if ( (v7 - 9) <= 5 && iNewSlot <= 8 )
      {
        do
        {
          m_nPreGamePlayerID = this->m_nPreGamePlayerID;
          if ( m_nPreGamePlayerID == -1 )
            m_nPreGamePlayerID = CDOTA_UnitInventory::GetPlayerOwnerID(this);
        }
        while ( CDOTA_UnitInventory::CheckPendingCombines(this, 7, m_nPreGamePlayerID, 0, 0) );
      }
    }
  }
}


// CDOTA_UnitInventory::SetItemInSlot  (line 1036, @0x00000000027b7b90, libserver.so)  // inlines: CEntityHandle, CHandle, GetAbilityName, GetEHandle, GetEntryIndex, GetPlayerOwnerID, GetSerialNumber, NetworkStateChanged, Set, SetTemporarilyUncombinable, operator=
// calls: CDOTA_UnitInventory::GetItemInSlot, Warning, CDOTA_UnitInventory::GetParent, CDOTA_Item::ExpireSellback, CBaseEntity::SetParent, CBaseEntity::SetLocalOrigin, memcmp, CDOTA_UnitInventory::MarkAsChanged, operator!=<CBaseEntity>, CDOTA_UnitInventory::GetPlayerOwnerID
// callers: CDOTAGamerules::SwapPlayers, CDOTA_Item_Tombstone::RemoveFromGame, CDOTA_UnitInventory::RemoveItem, CDOTA_UnitInventory::DropItemOnLocation, CDOTA_UnitInventory::DisassembleItem, CDOTA_UnitInventory::RemoveComponentsInBluePrint, CDOTA_UnitInventory::CheckPendingCombines, CDOTA_UnitInventory::AddItem, CDOTA_UnitInventory::AddItems, CDOTA_UnitInventory::MoveItem, CDOTA_BaseNPC_Hero::Spawn
// strings: "<NoAbilityName>", "Attempt to set '%s' in inventory slot already occupied by '%s'!\n"
bool __fastcall CDOTA_UnitInventory::SetItemInSlot(CDOTA_UnitInventory *const this, int iSlot, CDOTA_Item *pItem)
{
  CDOTA_Item *ItemInSlot; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v8; // rdx
  const char *m_pszAbilityName; // rax
  DOTAAbilityData_t *v10; // rax
  const char *v11; // rsi
  const char *v12; // rax
  CDOTA_BaseNPC *Parent; // rax
  int m_nPreGamePlayerID; // eax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CEntityIdentity *v18; // rdx
  __int16 v19; // cx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v21; // cx
  CHandle<CBaseEntity> s2[12]; // [rsp+0h] [rbp-30h] BYREF

  if ( iSlot == -1 )
    return 0;
  if ( pItem != 0 )
  {
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(this, iSlot);
    if ( ItemInSlot != 0 )
    {
      m_pAbilityData = ItemInSlot->m_pAbilityData;
      v8 = "<NoAbilityName>";
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v8 = m_pszAbilityName;
      }
      v10 = pItem->m_pAbilityData;
      v11 = "<NoAbilityName>";
      if ( v10 != 0 )
      {
        v12 = v10->m_pszAbilityName;
        if ( v12 != 0 )
          v11 = v12;
      }
      Warning("Attempt to set '%s' in inventory slot already occupied by '%s'!\n", v11, v8);
      return 0;
    }
    Parent = CDOTA_UnitInventory::GetParent(this);
    if ( Parent != 0 && (Parent->m_iUnitType & 1) != 0 )
    {
      m_nPreGamePlayerID = this->m_nPreGamePlayerID;
      if ( m_nPreGamePlayerID == -1 )
        m_nPreGamePlayerID = CDOTA_UnitInventory::GetPlayerOwnerID(this);
      if ( m_nPreGamePlayerID != pItem->m_iPlayerOwnerID.m_Value )
        CDOTA_Item::ExpireSellback(pItem);
    }
    v16 = CDOTA_UnitInventory::GetParent(this);
    CBaseEntity::SetParent(pItem, v16, 0, 0);
    CBaseEntity::SetLocalOrigin(pItem, &vec3_origin);
    pItem->m_bTemporarilyUncombinable = 0;
    if ( iSlot == 15 )
      goto LABEL_23;
    v17 = CDOTA_UnitInventory::GetParent(this);
    (*(pItem->_vptr_IHandleEntity + 40))(pItem, v17);
    if ( iSlot <= 5 && pItem->m_iState != 1 && !pItem->m_bItemEnabled.m_Value )
      (*(pItem->_vptr_IHandleEntity + 333))(pItem);
    if ( iSlot > 8 )
    {
LABEL_23:
      if ( pItem->m_iState == 1 )
        (*(pItem->_vptr_IHandleEntity + 334))(pItem);
    }
  }
  s2[0].m_Index = -1;
  if ( iSlot == 18 )
  {
    if ( pItem != 0 )
    {
      m_pEntity = pItem->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v21 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        s2[0].m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v21 & 0x7FFF;
      }
    }
    if ( operator!=<CBaseEntity>(&this->m_hTransientCastItem.m_Value, s2) )
    {
      (*(this->_vptr_CDOTA_UnitInventory + 2))(this, 132, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_hTransientCastItem.m_Value = s2[0];
    }
  }
  else
  {
    if ( pItem != 0 )
    {
      v18 = pItem->m_pEntity;
      if ( v18 != 0 )
      {
        v19 = 0x7FFF;
        if ( v18->m_EHandle.m_Index != -1 )
          v19 = v18->m_EHandle.m_Index & 0x7FFF;
        s2[0].m_Index = (((v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1)) << 15) | v19 & 0x7FFF;
      }
    }
    if ( memcmp(&this->m_hItems.m_Value[iSlot], s2, 4u) != 0 )
    {
      (*(this->_vptr_CDOTA_UnitInventory + 2))(this, 32, iSlot, 0xFFFFFFFFLL);
      this->m_hItems.m_Value[iSlot] = s2[0];
    }
  }
  CDOTA_UnitInventory::MarkAsChanged(this);
  return 1;
}


// CDOTA_UnitInventory::SwapItems  (line 1103, @0x00000000027ab8d0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, GetEHandle, GetEntryIndex, GetGameTime, GetSerialNumber, IsBackpackSlot, NetworkStateChanged, Set, operator=
// calls: CDOTA_UnitInventory::GetItemInSlot, CDOTA_UnitInventory::GetParent, CDOTA_BaseNPC::IsInRangeOfShop, CDOTA_Item::SetItemPendingEnable, CDOTA_Item::SetItemEnableTime, memcmp, CDOTA_UnitInventory::MarkAsChanged
// callers: CDOTA_UnitInventory::MoveItem, CDOTA_Bot::SwapWorstItemToBackpack, CDOTA_Bot::OptimizeBackpackItems, CDOTA_BaseNPC::Script_SwapItems
void __fastcall CDOTA_UnitInventory::SwapItems(CDOTA_UnitInventory *const this, int iSlot1, int iSlot2)
{
  CDOTA_Item *ItemInSlot; // r15
  CDOTA_Item *v7; // r14
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  char v12; // al
  float v13; // xmm1_4
  double v14; // xmm0_8
  CEntityIdentity *m_pEntity; // rdx
  __int16 v16; // cx
  CNetworkArrayBase<CHandle<CBaseEntity>,17,CDOTA_UnitInventory::NetworkVar_m_hItems> *p_m_hItems; // r14
  CEntityIdentity *v18; // rdx
  int v19; // eax
  __int16 v20; // cx
  CDOTA_BaseNPC *v21; // rax
  char v22; // al
  float v23; // xmm1_4
  double v24; // xmm0_8
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // [rsp+0h] [rbp-50h]
  unsigned int v29; // [rsp+8h] [rbp-48h]
  unsigned int v30; // [rsp+8h] [rbp-48h]
  _DWORD s2[16]; // [rsp+10h] [rbp-40h] BYREF

  ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(this, iSlot1);
  v7 = CDOTA_UnitInventory::GetItemInSlot(this, iSlot2);
  if ( (iSlot1 - 6) <= 2 && v7 != 0 && (*(v7->_vptr_IHandleEntity + 363))(v7) == 0 )
    return;
  v28 = iSlot2 - 6;
  if ( (iSlot2 - 6) <= 2 && ItemInSlot != 0 && (*(ItemInSlot->_vptr_IHandleEntity + 363))(ItemInSlot) == 0 )
    return;
  Parent = CDOTA_UnitInventory::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) == 0
    && (v21 = CDOTA_UnitInventory::GetParent(this), (*(v21->_vptr_IHandleEntity + 438))(v21) == 0)
    || (v9 = CDOTA_UnitInventory::GetParent(this), CDOTA_BaseNPC::IsInRangeOfShop(v9, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0))
    || (v25 = CDOTA_UnitInventory::GetParent(this),
        CDOTA_BaseNPC::IsInRangeOfShop(v25, DOTA_SHOP_TYPE::DOTA_SHOP_SECRET, 0)) )
  {
    v11 = 1;
  }
  else
  {
    v26 = CDOTA_UnitInventory::GetParent(this);
    LOBYTE(v27) = CDOTA_BaseNPC::IsInRangeOfShop(v26, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0);
    v11 = v27;
  }
  if ( (iSlot1 - 6) > 2 )
  {
    if ( v28 <= 2 && v7 != 0 )
    {
      v30 = v11;
      v22 = (*(v7->_vptr_IHandleEntity + 349))(v7);
      v11 = v30;
      if ( v22 != 0 && v30 == 0 )
      {
        (*(v7->_vptr_IHandleEntity + 334))(v7);
        CDOTA_Item::SetItemPendingEnable(v7, 1);
        *&v24 = 1086324736;
        if ( g_pGameRules != 0 )
          *&v24 = *&g_pGameRules[18].m_szQuestName[20] + 6.0;
        CDOTA_Item::SetItemEnableTime(v7, v24, v23);
      }
    }
  }
  else if ( v28 > 2 )
  {
    v29 = v11;
    if ( ItemInSlot != 0 )
    {
      v12 = (*(ItemInSlot->_vptr_IHandleEntity + 349))(ItemInSlot);
      v11 = v29;
      if ( v12 != 0 && v29 == 0 )
      {
        (*(ItemInSlot->_vptr_IHandleEntity + 334))(ItemInSlot);
        CDOTA_Item::SetItemPendingEnable(ItemInSlot, 1);
        *&v14 = 1086324736;
        if ( g_pGameRules != 0 )
          *&v14 = *&g_pGameRules[18].m_szQuestName[20] + 6.0;
        CDOTA_Item::SetItemEnableTime(ItemInSlot, v14, v13);
      }
    }
  }
  if ( iSlot1 <= 5 && iSlot2 > 5 )
  {
    if ( ItemInSlot != 0 )
      (*(ItemInSlot->_vptr_IHandleEntity + 334))(ItemInSlot, v10, v11);
    if ( v7 != 0 && !v7->m_bItemEnabled.m_Value )
      (*(v7->_vptr_IHandleEntity + 333))(v7, v10, v11);
  }
  if ( iSlot1 <= 5 || iSlot2 > 5 )
  {
    s2[0] = -1;
    if ( v7 != 0 )
    {
LABEL_33:
      m_pEntity = v7->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v16 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        s2[0] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
      }
    }
  }
  else
  {
    if ( ItemInSlot != 0 && !ItemInSlot->m_bItemEnabled.m_Value )
      (*(ItemInSlot->_vptr_IHandleEntity + 333))(ItemInSlot, v10, v11);
    if ( v7 != 0 )
    {
      (*(v7->_vptr_IHandleEntity + 334))(v7, v10, v11);
      s2[0] = -1;
      goto LABEL_33;
    }
    s2[0] = -1;
  }
  p_m_hItems = &this->m_hItems;
  if ( memcmp(&this->m_hItems.m_Value[iSlot1], s2, 4u) != 0 )
  {
    (*(this->_vptr_CDOTA_UnitInventory + 2))(this, 32, iSlot1, 0xFFFFFFFFLL);
    this->m_hItems.m_Value[iSlot1].m_Index = s2[0];
  }
  s2[0] = -1;
  if ( ItemInSlot != 0 )
  {
    v18 = ItemInSlot->m_pEntity;
    if ( v18 != 0 )
    {
      v19 = (v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1);
      v20 = 0x7FFF;
      if ( v18->m_EHandle.m_Index != -1 )
        v20 = v18->m_EHandle.m_Index & 0x7FFF;
      LOWORD(s2[0]) = v20 | s2[0] & 0x8000;
      s2[0] = (v19 << 15) | s2[0] & 0x7FFF;
    }
  }
  if ( memcmp(&p_m_hItems->m_Value[iSlot2], s2, 4u) != 0 )
  {
    (*(this->_vptr_CDOTA_UnitInventory + 2))(this, 32, iSlot2, 0xFFFFFFFFLL);
    p_m_hItems->m_Value[iSlot2].m_Index = s2[0];
  }
  CDOTA_UnitInventory::MarkAsChanged(this);
}


// CDOTA_UnitInventory::DropItemOnLocation  (line 1176, @0x00000000027b7ff0, libserver.so)  // inlines: CreateEvent, DOTAGameRules, GetGameTime, IsRealHero, NetworkStateChanged, Set, SetInt, SetItemEnableTime, SetItemPendingEnable, ToDOTABaseNPCHero, entindex, operator=<bool>, operator=<float>
// calls: CDOTA_UnitInventory::FindItemSlotInInventory, CDOTA_UnitInventory::GetParent, CDOTA_BaseNPC::IsInRangeOfShop, CreateItemOnPositionSync, CDOTA_UnitInventory::SetItemInSlot, CEntityInstance::GetEntityIndex, CBaseEntity::SetParent, CDOTA_UnitInventory::MarkAsChanged
// callers: CDOTA_ActionRunner::PerformAction_DropParentItem, CDOTABehaviorCommandMoveToPositionToDropItem::Update, CDOTA_BaseNPC::Script_DropItemAtPositionImmediate, CDOTA_Modifier_Courier_ReturnStashItems::OnIntervalThink, CDOTA_Unit_Roshan::Event_Killed, CDOTA_Item_DivineRapier::OnOwnerDied, CDOTA_Item_GemOfTrueSight::OnOwnerDied
// strings: "dota_hero_inventory_item_change", "hero_entindex", "item_entindex"
void __fastcall CDOTA_UnitInventory::DropItemOnLocation(
        CDOTA_UnitInventory *const this,
        CDOTA_Item *pItem,
        double a3,
        vec_t a4)
{
  int ItemSlotInInventory; // r13d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // r13
  __int64 v11; // r14
  CEntityIndex v12; // eax
  CEntityIndex v13; // eax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  bool v17; // al
  float v18; // xmm0_4
  float v19; // [rsp+Ch] [rbp-44h]

  if ( pItem != 0 )
  {
    ItemSlotInInventory = CDOTA_UnitInventory::FindItemSlotInInventory(this, pItem, 3);
    if ( ItemSlotInInventory != -1 || pItem->m_bCanBeUsedOutOfInventory.m_Value )
    {
      Parent = CDOTA_UnitInventory::GetParent(this);
      if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0
        || (v14 = CDOTA_UnitInventory::GetParent(this), (*(v14->_vptr_IHandleEntity + 438))(v14) != 0) )
      {
        v8 = CDOTA_UnitInventory::GetParent(this);
        if ( !CDOTA_BaseNPC::IsInRangeOfShop(v8, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0) )
        {
          v15 = CDOTA_UnitInventory::GetParent(this);
          if ( !CDOTA_BaseNPC::IsInRangeOfShop(v15, DOTA_SHOP_TYPE::DOTA_SHOP_SECRET, 0) )
          {
            v16 = CDOTA_UnitInventory::GetParent(this);
            v17 = CDOTA_BaseNPC::IsInRangeOfShop(v16, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0);
            if ( (ItemSlotInInventory - 6) <= 2 && !v17 )
            {
              if ( !pItem->m_bItemEnabled.m_Value )
              {
                (*(pItem->_vptr_IHandleEntity + 22))(pItem, 946, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                pItem->m_bItemEnabled.m_Value = 1;
              }
              v18 = 6.0;
              if ( g_pGameRules != 0 )
                v18 = *&g_pGameRules[18].m_szQuestName[20] + 6.0;
              if ( v18 != pItem->m_flEnableTime.m_Value )
              {
                v19 = v18;
                (*(pItem->_vptr_IHandleEntity + 22))(pItem, 948, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                pItem->m_flEnableTime.m_Value = v19;
              }
            }
          }
        }
      }
      CreateItemOnPositionSync(pItem, 0, a3, a4);
      CDOTA_UnitInventory::SetItemInSlot(this, ItemSlotInInventory, 0);
      (*(pItem->_vptr_IHandleEntity + 334))(pItem);
      v9 = CDOTA_UnitInventory::GetParent(this);
      v10 = v9;
      if ( v9 != 0 && (v9->m_iUnitType & 1) != 0 && !v9->m_bIsIllusion.m_Value )
      {
        v11 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_hero_inventory_item_change", 0, 0);
        if ( v11 != 0 )
        {
          (*(*v11 + 112LL))(v11, "player_id", LODWORD(v10[1].m_pfnBlocked.__delta));
          v12.m_Data = CEntityInstance::GetEntityIndex(v10).m_Data;
          (*(*v11 + 112LL))(v11, "hero_entindex", v12.m_Data);
          v13.m_Data = CEntityInstance::GetEntityIndex(pItem).m_Data;
          (*(*v11 + 112LL))(v11, "item_entindex", v13.m_Data);
          (*(*v11 + 104LL))(v11, "removed", 1);
          (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v11, 1);
        }
      }
      CBaseEntity::SetParent(pItem, 0, 0, 0);
      CDOTA_UnitInventory::MarkAsChanged(this);
    }
  }
}


// CDOTA_UnitInventory::PickupItem  (line 1222, @0x00000000027c9ee0, libserver.so)  // inlines: CreateEvent, Get, GetAbilityName, GetContainedItem, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetInt, ToDOTABaseNPCHero, entindex, operator CDOTA_Item*, operator CEntityInstance*
// calls: UTIL_Remove, CDOTA_UnitInventory::GetParent, CDOTA_BaseNPC::IsInRangeOfFountain, CDOTA_UnitInventory::AddItem, CEntityInstance::GetEntityIndex, UTIL_RemoveImmediate
// callers: CDOTA_Modifier_LootDrop_Thinker::OnIntervalThink, CDOTABehaviorCommandMoveToItemToTake::Update
// strings: "dota_item_picked_up", "UnitEntityIndex", "<NoAbilityName>", "itemname", "ItemEntityIndex", "HeroEntityIndex"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_UnitInventory::PickupItem(CDOTA_UnitInventory *const this, CDOTA_Item_Physical *pItemPhysical)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  bool result; // al
  CDOTA_Item *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  int v10; // edx
  __int64 v11; // r14
  CDOTA_BaseNPC *v12; // rax
  unsigned int v13; // eax
  CDOTA_BaseNPC *v14; // rax
  CEntityIndex v15; // eax
  const char *v16; // rdx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  CEntityIndex v19; // eax
  char v20; // al
  CEntityIndex v21; // eax
  CEntityInstance *v22; // [rsp+8h] [rbp-38h]
  CEntityInstance *v23; // [rsp+8h] [rbp-38h]

  m_Index = pItemPhysical->m_hItem.m_Value.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pItemPhysical->m_hItem.m_Value.m_Index) >> 9)
                                                            & 0x3F]) != 0
    && (v5 = &v4[pItemPhysical->m_hItem.m_Value.m_Index & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0) )
  {
    if ( (pItemPhysical->m_pEntity->m_flags & 0x200) != 0 )
      return 0;
    Parent = CDOTA_UnitInventory::GetParent(this);
    if ( !CDOTA_BaseNPC::IsInRangeOfFountain(Parent)
      || (v20 = (*(m_pInstance->_vptr_IHandleEntity + 349))(m_pInstance), v10 = 7, v20 == 0) )
    {
      v10 = 5;
    }
    if ( CDOTA_UnitInventory::AddItem(this, m_pInstance, v10, -1, 0, 0) == DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
    {
      v11 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_item_picked_up", 0, 0);
      if ( v11 != 0 )
      {
        v12 = CDOTA_UnitInventory::GetParent(this);
        if ( v12 != 0 )
        {
          if ( (v12->m_iUnitType & 1) != 0 )
          {
            v23 = v12;
            (*(*v11 + 112LL))(v11, "PlayerID", LODWORD(v12[1].m_pfnBlocked.__delta));
            v21.m_Data = CEntityInstance::GetEntityIndex(v23).m_Data;
            (*(*v11 + 112LL))(v11, "HeroEntityIndex", v21.m_Data);
          }
          else
          {
            v22 = *(*v11 + 112LL);
            v13 = (*(v12->_vptr_IHandleEntity + 414))(v12);
            (v22)(v11, "PlayerID", v13);
            v14 = CDOTA_UnitInventory::GetParent(this);
            v15.m_Data = CEntityInstance::GetEntityIndex(v14).m_Data;
            (*(*v11 + 112LL))(v11, "UnitEntityIndex", v15.m_Data);
          }
        }
        v16 = "<NoAbilityName>";
        m_pAbilityData = m_pInstance->m_pAbilityData;
        if ( m_pAbilityData != 0 )
        {
          m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
          if ( m_pszAbilityName != 0 )
            v16 = m_pszAbilityName;
        }
        (*(*v11 + 136LL))(v11, "itemname", v16);
        v19.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
        (*(*v11 + 112LL))(v11, "ItemEntityIndex", v19.m_Data);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v11, 1);
      }
      (*(pItemPhysical->_vptr_IHandleEntity + 251))(pItemPhysical);
      result = 1;
      if ( (pItemPhysical->m_nFlags & 1) == 0 )
      {
        UTIL_RemoveImmediate(pItemPhysical);
        return 1;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    UTIL_Remove(pItemPhysical);
    return 1;
  }
  return result;
}


// CDOTA_UnitInventory::SellItem  (line 1282, @0x00000000027b7620, libserver.so)  // inlines: CEntityHandle, CHandle, CreateEvent, DOTAGameRules, FStrEq, Get, GetAbilityName, GetCurrentCharges, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInitialCharges, GetInstance, GetParent, GetPlayerOwnerID, GetSerialNumber, HasDeletionPendingCombinedItem, HasElement, IndexToIdentity, IsRealHero, IsValid, LookupEntity, Set, SetInt, ToDOTABaseNPC, ToDOTABaseNPCHero, _V_strcmp, entindex, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_PlayerResource::GetTeam, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CGameSceneNode::GetOwnerEntity, CDOTAGamerules::GetGameModeEntity, CDOTA_PlayerResource::ModifyGold, CDOTA_Item::InSellback, CDOTAPlayer::GetPlayerByPlayerID, DOTAGameManager, CDOTAGameManager::GetAbilityDataByName, CDOTAGamerules::IncreaseItemStock, CEntityInstance::GetEntityIndex (18 total)
// callers: CDOTAGamerules::SwapPlayers, DOTA_ExecuteOrders, CDOTA_BaseNPC::SellItem
// strings: "<NoAbilityName>", "dota_hero_inventory_item_change", "hero_entindex", "item_entindex", "item_ward_observer"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_UnitInventory::SellItem(CDOTA_UnitInventory *const this, CDOTA_Item *pItem)
{
  int m_Value; // r12d
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r15
  int Team; // eax
  CEntityIdentity *m_pEntity; // rax
  int v10; // edx
  __int16 v11; // cx
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CBaseEntity *v14; // r13
  int v15; // r14d
  CDOTAPlayer *PlayerByPlayerID; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r8
  bool v20; // r13
  _BOOL8 v21; // rdx
  _BOOL8 v22; // r9
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v24; // r14
  const char *m_pszAbilityName; // rax
  CDOTAGameManager *v26; // rax
  DOTAAbilityData_t *AbilityDataByName; // rax
  DOTAAbilityData_t *v28; // r14
  int v29; // eax
  int v30; // esi
  int v31; // ecx
  const char *v32; // rdx
  DOTAAbilityData_t *v33; // rax
  const char *v34; // rax
  DOTAAbilityData_t *v35; // rax
  char *v36; // rsi
  __int64 v37; // r12
  CEntityIndex v38; // eax
  CEntityIndex v39; // eax
  uint32 ItemID; // eax
  const char *v41; // rax
  _BOOL4 v42; // [rsp+8h] [rbp-48h]
  int nTeamNumber; // [rsp+Ch] [rbp-44h]
  CHandle<CBaseEntity> src; // [rsp+10h] [rbp-40h] BYREF

  m_Value = pItem->m_iPlayerOwnerID.m_Value;
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&src, g_pDOTAPlayerResource, m_Value);
  if ( src.m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(src.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[src.m_Index & 0x1FF]) == 0
    || src.m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    m_pInstance = 0;
  }
  Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, m_Value);
  src.m_Index = -1;
  nTeamNumber = Team;
  m_pEntity = pItem->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v11 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(src.m_Index) = v11 | src.m_Index & 0x8000;
    src.m_Index = (v10 << 15) | src.m_Index & 0x7FFF;
  }
  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
         &this->m_hPendingCombineItemRemoves,
         &src) < 0 )
  {
    m_pParent = pItem->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 && (OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent)) != 0 && OwnerEntity->m_bIsDOTANPC )
      v14 = OwnerEntity;
    else
      v14 = 0;
    if ( g_pGameRules == 0
      || CDOTAGamerules::GetGameModeEntity(g_pGameRules) == 0
      || v14 == 0
      || BYTE6(v14[2].m_OnUser2._vptr_CEntityIOOutput) != 0 )
    {
      if ( pItem->m_iInitialCharges.m_Value > 0 && (*(pItem->_vptr_IHandleEntity + 339))(pItem) != 0 )
        v15 = (pItem->m_iCurrentCharges.m_Value * (*(pItem->_vptr_IHandleEntity + 360))(pItem))
            / pItem->m_iInitialCharges.m_Value;
      else
        v15 = (*(pItem->_vptr_IHandleEntity + 360))(pItem);
      CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, m_Value, v15, 0, 6);
      if ( CDOTA_Item::InSellback(pItem) && v15 == (*(pItem->_vptr_IHandleEntity + 360))(pItem) )
      {
        if ( m_pInstance == 0 )
        {
          v20 = 0;
          CDOTAPlayer::GetPlayerByPlayerID(m_Value);
LABEL_26:
          if ( pItem->m_bChanneling )
          {
            CDOTABaseAbility::EndChannel(pItem, 1);
          }
          else if ( pItem->m_bInAbilityPhase.m_Value )
          {
            (*(pItem->_vptr_IHandleEntity + 265))(pItem, v18, v21, v17, v19, v22);
          }
          m_pAbilityData = pItem->m_pAbilityData;
          v24 = "<NoAbilityName>";
          if ( m_pAbilityData != 0 )
          {
            m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
            if ( m_pszAbilityName != 0 )
              v24 = m_pszAbilityName;
          }
          v26 = DOTAGameManager();
          AbilityDataByName = CDOTAGameManager::GetAbilityDataByName(v26, v24);
          v28 = AbilityDataByName;
          if ( AbilityDataByName != 0 )
          {
            if ( AbilityDataByName->m_iItemStockMax > 0 && CDOTA_Item::InSellback(pItem) )
            {
              v29 = pItem->m_iCurrentCharges.m_Value;
              if ( v29 <= 0 || (v30 = pItem->m_iInitialCharges.m_Value) <= 0 )
                v31 = 1;
              else
                v31 = v29 / v30;
              v32 = "<NoAbilityName>";
              v33 = pItem->m_pAbilityData;
              if ( *(v28 + 377) >= 0 )
              {
                if ( v33 != 0 )
                {
                  v41 = v33->m_pszAbilityName;
                  if ( v41 != 0 )
                    v32 = v41;
                }
                CDOTAGamerules::IncreaseItemStock(g_pGameRules, nTeamNumber, v32, v31, -1);
              }
              else
              {
                if ( v33 != 0 )
                {
                  v34 = v33->m_pszAbilityName;
                  if ( v34 != 0 )
                    v32 = v34;
                }
                CDOTAGamerules::IncreaseItemStock(g_pGameRules, -1, v32, v31, m_Value);
              }
            }
            if ( (*(v28 + 376) & 0x20) != 0 )
              CDOTA_PlayerResource::AddGoldSpentOnSupport(g_pDOTAPlayerResource, m_Value, -v28->m_iItemCost);
          }
          if ( CDOTA_Item::InSellback(pItem) )
          {
            v35 = pItem->m_pAbilityData;
            if ( v35 != 0 )
            {
              v36 = v35->m_pszAbilityName;
              if ( v35->m_pszAbilityName != 0
                && (v36 == "item_ward_dispenser" || strcmp(v36, "item_ward_dispenser") == 0) )
              {
                CDOTAGamerules::IncreaseItemStock(
                  g_pGameRules,
                  nTeamNumber,
                  "item_ward_observer",
                  pItem->m_iCurrentCharges.m_Value,
                  -1);
              }
            }
          }
          if ( v20 && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
          {
            v37 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(
                    gameeventmanager,
                    "dota_hero_inventory_item_change",
                    0,
                    0);
            if ( v37 != 0 )
            {
              (*(*v37 + 112LL))(v37, "player_id", LODWORD(m_pInstance[100]._vptr_IHandleEntity));
              v38.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
              (*(*v37 + 112LL))(v37, "hero_entindex", v38.m_Data);
              v39.m_Data = CEntityInstance::GetEntityIndex(pItem).m_Data;
              (*(*v37 + 112LL))(v37, "item_entindex", v39.m_Data);
              (*(*v37 + 104LL))(v37, "removed", 1);
              (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v37, 1);
            }
          }
          UTIL_Remove(pItem);
          return;
        }
        ItemID = CDOTA_Item::GetItemID(pItem);
        CDOTA_BaseNPC_Hero::RemoveSoldBackItemFromHistory(m_pInstance, ItemID);
      }
      PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(m_Value);
      v20 = m_pInstance != 0;
      LOBYTE(v21) = m_pInstance != 0 && PlayerByPlayerID != 0;
      v22 = v21;
      if ( v21 )
      {
        v42 = v21;
        SendOverheadEventMessage(PlayerByPlayerID, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_GOLD, m_pInstance, v15, 0);
        v22 = v42;
        v20 = v42;
      }
      goto LABEL_26;
    }
  }
}


// CDOTA_UnitInventory::DisassembleItem  (line 1376, @0x00000000027b8410, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, CopyAndAddToTail, CopyConstruct<char*>, CreateEvent, Element, GetAbilityName, GetInt, GetPurchaseTime, GrowMemory, HKeySymbol, IsRealHero, NetworkStateChanged, Purge, PurgeAndDeleteElements, QAngle, RemoveAll, Set, SetAssembledTime, SetCombineLocked, SetCreatedByDisassemble, SetInt, SetPtr, SetPurchaseTime, SetPurchasedWhileDead, SetTemporarilyUncombinable, ToDOTABaseNPCHero, V_memcpy, V_strlen, VectorAdd, VectorMultiply, entindex, memcpy, operator*, operator+, operator=, operator=<bool>, operator=<float>, operator[], ~CUtlMemory, ~CUtlString, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::Set, CUtlString::Slice, CUtlString::FreeMemoryBlock, CUtlString::Get, CFmtStrN<256, false>::CFmtStrN, DOTAGameManager, CDOTAGameManager::GetAbilityByName, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetString, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &) (30 total)
// callers: CDOTA_BaseNPC::DisassembleItem
// strings: "<NoAbilityName>", "item_recipe_%s", "dota_hero_inventory_item_change", "hero_entindex", "item_entindex"
void __fastcall CDOTA_UnitInventory::DisassembleItem(CDOTA_UnitInventory *const this, CDOTA_Item *pItem)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v4; // rsi
  const char *m_pszAbilityName; // rax
  char *v6; // r12
  const char *v7; // rax
  CDOTAGameManager *v8; // rax
  KeyValues *AbilityByName; // rbx
  CDOTAGameManager *v10; // rax
  KeyValues *Key; // rax
  int m_nCombineVersion; // r13d
  KeyValues *FirstSubKey; // r12
  int i; // ebx
  const char *String; // rax
  CDOTAGameManager *v16; // rax
  KeyValues *v17; // rax
  __int64 v18; // rsi
  int v19; // r12d
  char *v20; // rax
  char *v21; // r13
  __int64 m_Size; // rbx
  int v23; // ecx
  int v24; // ecx
  char **v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r13
  int v28; // r14d
  int v29; // r12d
  CDOTA_Item *Item; // rax
  double v31; // xmm0_8
  double v32; // xmm1_8
  double v33; // xmm2_8
  CDOTA_Item *v34; // rbx
  double v35; // xmm3_8
  bool v36; // zf
  unsigned int EmptySpaceInInventory; // eax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v40; // xmm0_4
  vec_t v41; // xmm1_4
  CDOTA_BaseNPC *v42; // rax
  CDOTA_BaseNPC *v43; // rbx
  __int64 v44; // r12
  int v45; // ebx
  char *v46; // rsi
  __int64 v47; // r12
  CEntityIndex v48; // eax
  CEntityIndex v49; // eax
  float v50; // [rsp+10h] [rbp-1E0h]
  float v51; // [rsp+14h] [rbp-1DCh]
  float v52; // [rsp+18h] [rbp-1D8h]
  float flOriginalPurchaseTime; // [rsp+1Ch] [rbp-1D4h]
  const KeyValues *iAngleStep; // [rsp+30h] [rbp-1C0h]
  int iAngleStepa; // [rsp+30h] [rbp-1C0h]
  CUtlString itemName; // [rsp+40h] [rbp-1B0h] BYREF
  QAngle angle; // [rsp+50h] [rbp-1A0h] BYREF
  Vector dir; // [rsp+60h] [rbp-190h] BYREF
  Vector vecLocation; // [rsp+70h] [rbp-180h]
  CUtlStringList szComponents; // [rsp+80h] [rbp-170h] BYREF
  CFmtStr recipename; // [rsp+A0h] [rbp-150h] BYREF
  unsigned __int64 v63; // [rsp+1B8h] [rbp-38h]

  v63 = __readfsqword(0x28u);
  m_pAbilityData = pItem->m_pAbilityData;
  v4 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v4 = m_pszAbilityName;
  }
  itemName.m_pString = 0;
  CUtlString::Set(&itemName, v4);
  CUtlString::Slice(&itemName, 5, 0x7FFFFFFF);
  v6 = *&vecLocation.x;
  if ( itemName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&itemName);
  itemName.m_pString = v6;
  v7 = CUtlString::Get(&itemName);
  CFmtStrN<256,false>::CFmtStrN(&recipename, "item_recipe_%s", v7);
  v8 = DOTAGameManager();
  AbilityByName = CDOTAGameManager::GetAbilityByName(v8, recipename.m_szBuf);
  iAngleStep = AbilityByName;
  if ( AbilityByName == 0 )
    goto LABEL_40;
  v10 = DOTAGameManager();
  Key = KeyValues::FindKey(AbilityByName, v10->m_hKvSymbols[5]);
  if ( Key == 0 )
    goto LABEL_40;
  m_nCombineVersion = pItem->m_nCombineVersion;
  FirstSubKey = KeyValues::GetFirstSubKey(Key);
  if ( m_nCombineVersion > 0 )
  {
    for ( i = 0; i != m_nCombineVersion; ++i )
    {
      if ( KeyValues::GetNextKey(FirstSubKey) != 0 )
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
    }
  }
  if ( FirstSubKey == 0 )
  {
LABEL_40:
    if ( itemName.m_pString == 0 )
      return;
    goto LABEL_41;
  }
  szComponents.m_Size = 0;
  szComponents.m_Memory.m_pMemory = 0;
  szComponents.m_Memory.m_nAllocationCount = 0;
  szComponents.m_Memory.m_nGrowSize = 0;
  String = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
  V_SplitString(String, ";", &szComponents);
  v16 = DOTAGameManager();
  v17 = KeyValues::FindKey(iAngleStep, v16->m_hKvSymbols[6]);
  if ( v17 == 0 || CKeyValues_Data::Internal_GetInt(v17) <= 0 )
    goto LABEL_22;
  v19 = strlen(recipename.m_szBuf) + 1;
  v20 = (**g_pMemAlloc)(g_pMemAlloc, v19);
  v21 = v20;
  if ( v19 < 0 )
    __debugbreak();
  memcpy(v20, recipename.m_szBuf, v19);
  m_Size = szComponents.m_Size;
  v23 = szComponents.m_Size;
  if ( szComponents.m_Size == szComponents.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<char *,int>::Grow(&szComponents.m_Memory, 1);
    v23 = szComponents.m_Size;
  }
  v24 = v23 + 1;
  szComponents.m_Size = v24;
  v25 = &szComponents.m_Memory.m_pMemory[m_Size];
  if ( v25 != 0 )
  {
    *v25 = v21;
LABEL_22:
    v24 = szComponents.m_Size;
  }
  flOriginalPurchaseTime = pItem->m_flPurchaseTime.m_Value;
  if ( v24 == 0 )
  {
    CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(&szComponents);
    CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&szComponents);
    goto LABEL_40;
  }
  v26 = (360 % v24);
  iAngleStepa = 360 / v24;
  if ( v24 > 0 )
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    do
    {
      angle.x = 0.0;
      angle.z = 0.0;
      angle.y = v28;
      AngleVectors(&angle, &dir, 0, 0);
      Item = DOTA_CreateItem(szComponents.m_Memory.m_pMemory[v27], 0, pItem->m_iPlayerOwnerID.m_Value);
      v34 = Item;
      if ( Item != 0 )
      {
        *&v35 = LODWORD(flOriginalPurchaseTime);
        if ( flOriginalPurchaseTime != Item->m_flPurchaseTime.m_Value )
        {
          (*(Item->_vptr_IHandleEntity + 22))(
            Item,
            964,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL,
            v31,
            v32,
            v33,
            flOriginalPurchaseTime);
          v34->m_flPurchaseTime.m_Value = flOriginalPurchaseTime;
        }
        if ( v34->m_bPurchasedWhileDead.m_Value )
        {
          (*(v34->_vptr_IHandleEntity + 22))(v34, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v31, v32, v33, v35);
          v34->m_bPurchasedWhileDead.m_Value = 0;
        }
        v36 = v34->m_flAssembledTime.m_Value == 0.0;
        v34->m_bCreatedByDisassemble = 1;
        if ( !v36 )
        {
          (*(v34->_vptr_IHandleEntity + 22))(v34, 968, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v31, v32, v33, v35);
          v34->m_flAssembledTime.m_Value = 0.0;
        }
        if ( !v34->m_bCombineLocked.m_Value )
        {
          (*(v34->_vptr_IHandleEntity + 22))(v34, 980, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v31, v32, v33, v35);
          v34->m_bCombineLocked.m_Value = 1;
        }
        EmptySpaceInInventory = CDOTA_UnitInventory::FindEmptySpaceInInventory(this, 1, 0);
        if ( EmptySpaceInInventory <= 8 )
        {
          CDOTA_UnitInventory::SetItemInSlot(this, EmptySpaceInInventory, v34);
        }
        else
        {
          v52 = 150.0 * dir.x;
          v51 = 150.0 * dir.y;
          v50 = 150.0 * dir.z;
          Parent = CDOTA_UnitInventory::GetParent(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
          v40 = v51 + AbsOrigin->y;
          v41 = v50 + AbsOrigin->z;
          vecLocation.x = v52 + AbsOrigin->x;
          vecLocation.y = v40;
          vecLocation.z = v41;
          CreateItemOnPositionSync(v34, 0, *&vecLocation.x, v41);
          v34->m_bTemporarilyUncombinable = 1;
        }
      }
      ++v29;
      v28 += iAngleStepa;
      ++v27;
    }
    while ( szComponents.m_Size > v29 );
  }
  (*(pItem->_vptr_IHandleEntity + 336))(pItem, v18, v26);
  v42 = CDOTA_UnitInventory::GetParent(this);
  v43 = v42;
  if ( v42 != 0 && (v42->m_iUnitType & 1) != 0 && !v42->m_bIsIllusion.m_Value )
  {
    v47 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_hero_inventory_item_change", 0, 0);
    if ( v47 != 0 )
    {
      (*(*v47 + 112LL))(v47, "player_id", LODWORD(v43[1].m_pfnBlocked.__delta));
      v48.m_Data = CEntityInstance::GetEntityIndex(v43).m_Data;
      (*(*v47 + 112LL))(v47, "hero_entindex", v48.m_Data);
      v49.m_Data = CEntityInstance::GetEntityIndex(pItem).m_Data;
      (*(*v47 + 112LL))(v47, "item_entindex", v49.m_Data);
      (*(*v47 + 104LL))(v47, "removed", 1);
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v47, 1);
    }
  }
  UTIL_Remove(pItem);
  if ( szComponents.m_Size > 0 )
  {
    v44 = 0;
    v45 = 0;
    do
    {
      ++v45;
      v46 = szComponents.m_Memory.m_pMemory[v44++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v46);
    }
    while ( v45 < szComponents.m_Size );
  }
  szComponents.m_Size = 0;
  if ( (szComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&szComponents.m_Memory);
    if ( (szComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&szComponents.m_Memory);
  }
  if ( itemName.m_pString != 0 )
LABEL_41:
    CUtlString::FreeMemoryBlock(&itemName);
}


// CDOTA_UnitInventory::EjectItemFromStash  (line 1475, @0x00000000027b7fc0, libserver.so)
// calls: CDOTA_UnitInventory::RemoveItem, CDOTA_UnitInventory::DropItemAtFountain
// callers: CDOTA_BaseNPC::EjectItemFromStash
void __fastcall CDOTA_UnitInventory::EjectItemFromStash(CDOTA_UnitInventory *const this, CDOTA_Item *pItem)
{
  CDOTA_UnitInventory::RemoveItem(this, pItem, 0, 0);
  CDOTA_UnitInventory::DropItemAtFountain(this, pItem);
}


// CDOTA_UnitInventory::DropItemAtFountain  (line 1483, @0x00000000027abcf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, QAngle, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+=
// calls: CDOTA_UnitInventory::GetParent, FindSpawnEntityForTeam, CBaseEntity::GetAbsOrigin, AngleVectors, CreateItemOnPositionSync
// callers: CDOTA_UnitInventory::EjectItemFromStash, CDOTA_UnitInventory::AddItem, CDOTA_Modifier_Courier_ReturnStashItems::OnIntervalThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_UnitInventory::DropItemAtFountain(CDOTA_UnitInventory *const this, CDOTA_Item *pItem)
{
  CDOTA_BaseNPC *Parent; // rax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const Vector *AbsOrigin; // rax
  int v7; // eax
  float x; // [rsp+4h] [rbp-4Ch]
  float vecLocation; // [rsp+8h] [rbp-48h]
  float vecLocation_4; // [rsp+Ch] [rbp-44h]
  double vecLocation_8; // [rsp+10h] [rbp-40h]
  QAngle angle; // [rsp+20h] [rbp-30h] BYREF
  Vector dir; // [rsp+30h] [rbp-20h] BYREF

  Parent = CDOTA_UnitInventory::GetParent(this);
  FindSpawnEntityForTeam(&dir, Parent->m_iTeamNum.m_Value);
  if ( (LODWORD(dir.x) + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(dir.x) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[LOWORD(dir.x) & 0x1FF];
      if ( v5 != 0 && LODWORD(dir.x) == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v5->m_pInstance);
        x = AbsOrigin->x;
        vecLocation_4 = AbsOrigin->y;
        vecLocation = AbsOrigin->z;
        v7 = (*(*random_valve + 16LL))(random_valve, 0, 360);
        angle.x = 0.0;
        angle.z = 0.0;
        angle.y = v7;
        AngleVectors(&angle, &dir, 0, 0);
        *(&vecLocation_8 + 1) = (dir.y * 100.0) + vecLocation_4;
        *&vecLocation_8 = (100.0 * dir.x) + x;
        CreateItemOnPositionSync(pItem, 0, vecLocation_8, (dir.z * 100.0) + vecLocation);
      }
    }
  }
}


// CDOTA_UnitInventory::CollectPotentialCombineItems  (line 1504, @0x00000000027bc3d0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CDOTA_Item*>, DOTAGameRules, Element, FastSqrt, Get, GetContainedItem, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetGameTime, GetInstance, GetItemInSlot, GetPlayerOwnerID, GetSerialNumber, GrowMemory, HasDeletionPendingCombinedItem, HasElement, IndexToIdentity, IsValid, Length, LookupEntity, Remove, Set, ShiftElementsLeft, StacksWithOtherOwners, ToDOTABaseNPC, ToDOTABaseNPCHero, V_memmove, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, memmove, operator CBaseEntity*, operator CDOTA_Item*, operator CEntityInstance*, operator-, operator[]
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, CDOTA_UnitInventory::GetItemInSlot, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlVectorBase<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> >::Find, CDOTA_BaseNPC::GetInventory, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlVectorBase<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> >::AddToTail, memmove, CDOTA_UnitInventory::GetParent, CGameEntitySystem::FindEntityByClassname, CBaseEntity::GetAbsOrigin (16 total)
// callers: CDOTA_UnitInventory::CheckPendingCombines
// strings: "dota_item_drop"
// globals: CEntityHandle::gm_pEntityList, `guard variable for'CDOTA_UnitInventory::CollectPotentialCombineItems(int,int,CUtlVector<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>> *)::flRadius, CDOTA_UnitInventory::CollectPotentialCombineItems(int,int,CUtlVector<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>> *)::flRadius
void __fastcall CDOTA_UnitInventory::CollectPotentialCombineItems(
        CDOTA_UnitInventory *const this,
        int iAllowedLocations,
        int nOwnerPlayerID,
        CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > *pCombineItems)
{
  CEntityInstance *v7; // rax
  int i; // r13d
  CDOTA_Item *ItemInSlot; // rax
  int m_Size; // r15d
  int v11; // esi
  CDOTA_Item **v12; // rcx
  CEntityInstance *v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  CDOTA_Item **v16; // rdx
  float m_flRecentlyDroppedItemsTime; // xmm0_4
  double v18; // xmm1_8
  double v19; // xmm0_8
  __int64 v20; // rcx
  int k; // r13d
  unsigned __int16 *v22; // rsi
  int v23; // eax
  __int16 v24; // r8
  CEntityIdentity *v25; // rsi
  CEntityIdentity *v26; // rsi
  CEntityInstance *m_pInstance; // r8
  uint32 m_nHashCode; // eax
  unsigned __int64 m_nHashCode_low; // r8
  CEntityIdentity *v30; // rsi
  CEntityIdentity *v31; // rsi
  CDOTA_Item *v32; // r15
  int v33; // eax
  CEntityIdentity *m_pEntity; // rax
  int v35; // esi
  __int16 v36; // di
  CDOTA_UnitInventory *v37; // rax
  int v38; // eax
  int v39; // r12d
  __int64 v40; // r13
  int v41; // eax
  CDOTA_Item *v42; // rax
  CEntityIdentity *v43; // rax
  int v44; // edx
  __int16 v45; // cx
  CDOTA_UnitInventory *v46; // rax
  int m_nPreGamePlayerID; // eax
  CDOTA_UnitInventory *Inventory; // rax
  CBaseEntity *EntityByClassname; // r13
  const Vector *AbsOrigin; // r15
  const Vector *v51; // rax
  float v52; // xmm1_4
  CEntityIdentity *v53; // rax
  int v54; // edx
  __int16 v55; // cx
  CDOTA_UnitInventory *v56; // rax
  int j; // edx
  CDOTA_Item *v58; // rax
  int v59; // edx
  int v60; // r13d
  int v61; // esi
  CDOTA_Item **v62; // rcx
  CDOTA_Item *pItema; // [rsp+8h] [rbp-78h]
  int pItem; // [rsp+8h] [rbp-78h]
  int pItemb; // [rsp+8h] [rbp-78h]
  int v66; // [rsp+10h] [rbp-70h]
  CHandle<CBaseEntity> *v67; // [rsp+10h] [rbp-70h]
  CHandle<CBaseEntity> *v68; // [rsp+10h] [rbp-70h]
  char iAllowedLocationsa; // [rsp+20h] [rbp-60h]
  __int64 iAllowedLocationsb; // [rsp+20h] [rbp-60h]
  __int64 iAllowedLocationsd; // [rsp+20h] [rbp-60h]
  CDOTA_BaseNPC *iAllowedLocationse; // [rsp+20h] [rbp-60h]
  CDOTA_Item *iAllowedLocationsc; // [rsp+20h] [rbp-60h]
  CDOTA_BaseNPC *v74; // [rsp+28h] [rbp-58h]
  CHandle<CBaseEntity> v75[4]; // [rsp+30h] [rbp-50h] BYREF
  CDOTA_Item *pContainedItem; // [rsp+40h] [rbp-40h] BYREF

  iAllowedLocationsa = iAllowedLocations;
  if ( pCombineItems != 0 && nOwnerPlayerID != -1 )
  {
    CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&pContainedItem, g_pDOTAPlayerResource, nOwnerPlayerID);
    v7 = CEntityHandle::operator CEntityInstance *(&pContainedItem);
    if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 && (v7[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      v74 = v7;
    else
      v74 = 0;
    if ( (iAllowedLocationsa & 1) != 0 )
    {
      for ( i = 0; i != 9; ++i )
      {
        ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(this, i);
        if ( ItemInSlot != 0
          && (nOwnerPlayerID == ItemInSlot->m_iPlayerOwnerID.m_Value
           || ItemInSlot->m_iSharability.m_Value == 0 && ItemInSlot->m_bStackWithOtherOwners) )
        {
          m_Size = pCombineItems->m_Size;
          if ( pCombineItems->m_Size == pCombineItems->m_Memory.m_nAllocationCount )
          {
            pItema = ItemInSlot;
            CUtlMemory<CDOTA_Item *,int>::Grow(&pCombineItems->m_Memory, 1);
            v11 = pCombineItems->m_Size;
            ItemInSlot = pItema;
          }
          else
          {
            v11 = pCombineItems->m_Size;
          }
          pCombineItems->m_Size = v11 + 1;
          v12 = &pCombineItems->m_Memory.m_pMemory[m_Size];
          if ( v12 != 0 )
            *v12 = ItemInSlot;
        }
      }
    }
    if ( (iAllowedLocationsa & 2) != 0 )
    {
      m_nPreGamePlayerID = this->m_nPreGamePlayerID;
      if ( m_nPreGamePlayerID == -1 )
        m_nPreGamePlayerID = CDOTA_UnitInventory::GetPlayerOwnerID(this);
      if ( nOwnerPlayerID == m_nPreGamePlayerID || (CDOTA_UnitInventory::GetParent(this)->m_iUnitType & 0x100) == 0 )
      {
        for ( j = 9; j != 15; j = v59 + 1 )
        {
          v66 = j;
          v58 = CDOTA_UnitInventory::GetItemInSlot(this, j);
          v59 = v66;
          if ( v58 != 0 && nOwnerPlayerID == v58->m_iPlayerOwnerID.m_Value )
          {
            v60 = pCombineItems->m_Size;
            if ( pCombineItems->m_Size == pCombineItems->m_Memory.m_nAllocationCount )
            {
              pItemb = v66;
              v68 = v58;
              CUtlMemory<CDOTA_Item *,int>::Grow(&pCombineItems->m_Memory, 1);
              v61 = pCombineItems->m_Size;
              v59 = pItemb;
              v58 = v68;
            }
            else
            {
              v61 = pCombineItems->m_Size;
            }
            pCombineItems->m_Size = v61 + 1;
            v62 = &pCombineItems->m_Memory.m_pMemory[v60];
            if ( v62 != 0 )
              *v62 = v58;
          }
        }
      }
      else if ( v74 != 0 )
      {
        Inventory = CDOTA_BaseNPC::GetInventory(v74);
        CDOTA_UnitInventory::CollectPotentialCombineItems(Inventory, 2, nOwnerPlayerID, pCombineItems);
      }
    }
    v13 = CEntityHandle::operator CEntityInstance *(&this->m_hItems.m_Value[15]);
    if ( v13 != 0 )
    {
      v14 = pCombineItems->m_Size;
      v15 = pCombineItems->m_Size;
      if ( v14 == pCombineItems->m_Memory.m_nAllocationCount )
      {
        pItem = pCombineItems->m_Size;
        v67 = v13;
        CUtlMemory<CDOTA_Item *,int>::Grow(&pCombineItems->m_Memory, 1);
        v15 = pCombineItems->m_Size;
        v14 = pItem;
        v13 = v67;
      }
      pCombineItems->m_Size = v15 + 1;
      v16 = &pCombineItems->m_Memory.m_pMemory[v14];
      if ( v16 != 0 )
        *v16 = v13;
    }
    if ( (iAllowedLocationsa & 4) != 0 )
    {
      m_flRecentlyDroppedItemsTime = this->m_flRecentlyDroppedItemsTime;
      if ( m_flRecentlyDroppedItemsTime > 0.0 )
      {
        v18 = 0.0;
        v19 = m_flRecentlyDroppedItemsTime + 1.0;
        if ( g_pGameRules != 0 )
          v18 = *&g_pGameRules[18].m_szQuestName[20];
        if ( v18 > v19 )
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecRecentlyDroppedItems);
      }
      v20 = 0;
      for ( k = 0; this->m_vecRecentlyDroppedItems.m_Size > k; v20 += 4 )
      {
        v22 = (this->m_vecRecentlyDroppedItems.m_Memory.m_pMemory + v20);
        v23 = *v22;
        if ( (*v22 + 2) > 1 )
        {
          v24 = *v22;
          v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v22 >> 9) & 0x3F];
          if ( v25 != 0 )
          {
            v26 = &v25[v24 & 0x1FF];
            if ( v26 != 0 && v23 == v26->m_EHandle.m_Index )
            {
              m_pInstance = v26->m_pInstance;
              if ( v26->m_pInstance != 0 )
              {
                m_nHashCode = m_pInstance[25].m_worldGroupId.m_nHashCode;
                if ( m_nHashCode + 2 > 1 )
                {
                  m_nHashCode_low = LOWORD(m_pInstance[25].m_worldGroupId.m_nHashCode);
                  v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_nHashCode_low >> 9) & 0x3F];
                  if ( v30 != 0 )
                  {
                    v31 = &v30[m_nHashCode_low & 0x1FF];
                    if ( v31 != 0 && m_nHashCode == v31->m_EHandle.m_Index )
                    {
                      v32 = v31->m_pInstance;
                      pContainedItem = v31->m_pInstance;
                      if ( pContainedItem != 0 )
                      {
                        iAllowedLocationsb = v20;
                        v33 = CUtlVectorBase<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>>::Find(
                                pCombineItems,
                                &pContainedItem);
                        v20 = iAllowedLocationsb;
                        if ( v33 < 0 && nOwnerPlayerID == v32->m_iPlayerOwnerID.m_Value )
                        {
                          if ( v74 == 0 )
                            goto LABEL_51;
                          m_pEntity = v32->m_pEntity;
                          v75[0].m_Index = -1;
                          if ( m_pEntity != 0 )
                          {
                            v35 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                            v36 = 0x7FFF;
                            if ( m_pEntity->m_EHandle.m_Index != -1 )
                              v36 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                            LOWORD(v75[0].m_Index) = v36 | v75[0].m_Index & 0x8000;
                            v75[0].m_Index = (v35 << 15) | v75[0].m_Index & 0x7FFF;
                          }
                          v37 = CDOTA_BaseNPC::GetInventory(v74);
                          v38 = CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                                  &v37->m_hPendingCombineItemRemoves,
                                  v75);
                          v20 = iAllowedLocationsb;
                          if ( v38 < 0 )
                          {
LABEL_51:
                            iAllowedLocationsd = v20;
                            CUtlVectorBase<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>>::AddToTail(
                              pCombineItems,
                              &pContainedItem);
                            v20 = iAllowedLocationsd;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        ++k;
      }
      EntityByClassname = 0;
      while ( 1 )
      {
        EntityByClassname = CGameEntitySystem::FindEntityByClassname(
                              g_pGameEntitySystem,
                              EntityByClassname,
                              "dota_item_drop");
        if ( EntityByClassname == 0 )
          break;
        if ( `guard variable for'CDOTA_UnitInventory::CollectPotentialCombineItems(int,int,CUtlVector<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>> *)::flRadius == 0
          && __cxa_guard_acquire(&`guard variable for'CDOTA_UnitInventory::CollectPotentialCombineItems(int,int,CUtlVector<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>> *)::flRadius) != 0 )
        {
          CDOTA_UnitInventory::CollectPotentialCombineItems(int,int,CUtlVector<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>> *)::flRadius = dota_inventory_combine_ground_items_radius.m_pParent->m_Value.m_fValue;
          __cxa_guard_release(&`guard variable for'CDOTA_UnitInventory::CollectPotentialCombineItems(int,int,CUtlVector<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>> *)::flRadius);
        }
        iAllowedLocationse = CDOTA_UnitInventory::GetParent(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByClassname);
        v51 = CBaseEntity::GetAbsOrigin(iAllowedLocationse);
        v52 = v51->z - AbsOrigin->z;
        if ( CDOTA_UnitInventory::CollectPotentialCombineItems(int,int,CUtlVector<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>> *)::flRadius > fsqrt((((v51->x - AbsOrigin->x) * (v51->x - AbsOrigin->x)) + ((v51->y - AbsOrigin->y) * (v51->y - AbsOrigin->y))) + (v52 * v52)) )
        {
          pContainedItem = CEntityHandle::operator CEntityInstance *(&EntityByClassname[1].m_vecVelocity);
          iAllowedLocationsc = pContainedItem;
          if ( pContainedItem != 0
            && CUtlVectorBase<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>>::Find(pCombineItems, &pContainedItem) < 0
            && nOwnerPlayerID == iAllowedLocationsc->m_iPlayerOwnerID.m_Value )
          {
            if ( v74 == 0 )
              goto LABEL_88;
            v53 = iAllowedLocationsc->m_pEntity;
            v75[0].m_Index = -1;
            if ( v53 != 0 )
            {
              v54 = (v53->m_EHandle.m_Index >> 15) - (v53->m_flags & 1);
              v55 = 0x7FFF;
              if ( v53->m_EHandle.m_Index != -1 )
                v55 = v53->m_EHandle.m_Index & 0x7FFF;
              LOWORD(v75[0].m_Index) = v55 | v75[0].m_Index & 0x8000;
              v75[0].m_Index = (v54 << 15) | v75[0].m_Index & 0x7FFF;
            }
            v56 = CDOTA_BaseNPC::GetInventory(v74);
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &v56->m_hPendingCombineItemRemoves,
                   v75) < 0 )
LABEL_88:
              CUtlVectorBase<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>>::AddToTail(pCombineItems, &pContainedItem);
          }
        }
      }
    }
    v39 = pCombineItems->m_Size - 1;
    v40 = v39;
    if ( v39 >= 0 )
    {
      do
      {
        v42 = pCombineItems->m_Memory.m_pMemory[v40];
        if ( v42 != 0 )
        {
          if ( v42->m_bCombineLocked.m_Value )
            goto LABEL_54;
          if ( v74 != 0 )
          {
            LODWORD(pContainedItem) = -1;
            v43 = v42->m_pEntity;
            if ( v43 != 0 )
            {
              v44 = (v43->m_EHandle.m_Index >> 15) - (v43->m_flags & 1);
              v45 = 0x7FFF;
              if ( v43->m_EHandle.m_Index != -1 )
                v45 = v43->m_EHandle.m_Index & 0x7FFF;
              LOWORD(pContainedItem) = v45 | pContainedItem & 0x8000;
              LODWORD(pContainedItem) = (v44 << 15) | pContainedItem & 0x7FFF;
            }
            v46 = CDOTA_BaseNPC::GetInventory(v74);
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &v46->m_hPendingCombineItemRemoves,
                   &pContainedItem) >= 0 )
            {
LABEL_54:
              v41 = pCombineItems->m_Size;
              if ( pCombineItems->m_Size - v39 - 1 > 0 )
              {
                memmove(
                  &pCombineItems->m_Memory.m_pMemory[v40],
                  &pCombineItems->m_Memory.m_pMemory[v40 + 1],
                  8LL * (pCombineItems->m_Size - v39 - 1));
                v41 = pCombineItems->m_Size;
              }
              pCombineItems->m_Size = v41 - 1;
            }
          }
        }
        --v39;
        --v40;
      }
      while ( v39 != -1 );
    }
  }
}


// CDOTA_UnitInventory::CheckPendingCombines  (line 1638, @0x00000000027c8ac0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_Item*>, CopyConstruct<CHandle<CDOTA_Item> >, CreateEvent, DOTAGameRules, Element, Get, GetAbilityName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetItemInSlot, GetPlayerOwnerID, GetSerialNumber, GetTeamNumber, GrowMemory, HasDeletionPendingCombinedItem, HasElement, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_PlayerResource::GetTeam, CDOTA_UnitInventory::CollectPotentialCombineItems, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetInventory, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_AutoCombinableItems::GetAutoBluePrintForUnit, CDOTA_UnitInventory::GetParent, DOTA_CreateItem, CDOTA_UnitInventory::SetItemInSlot, CUtlVectorBase<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> >::AddToTail, CDOTA_UnitInventory::TryItemCombine (28 total)
// callers: CDOTA_UnitInventory::AddItem, CDOTA_UnitInventory::AddItems, CDOTA_UnitInventory::OnShopChange, CDOTA_UnitInventory::MoveItem, CDOTA_BaseNPC::SetItemCombineLocked
// strings: "dota_item_combined", "<NoAbilityName>", "itemname", "itemcost"
// globals: CEntityHandle::gm_pEntityList, g_DOTAAutoCombinableItems
bool __fastcall CDOTA_UnitInventory::CheckPendingCombines(
        CDOTA_UnitInventory *const this,
        int iAllowedLocations,
        int nOwnerPlayerID,
        CUtlVector<CHandle<CDOTA_Item>,CUtlMemory<CHandle<CDOTA_Item>,int> > *pAdditionalItems,
        CDOTA_Item **ppResultingItem)
{
  int Team; // r12d
  int m_nPreGamePlayerID; // r14d
  bool result; // al
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC_Hero *v10; // r15
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  CHandle<CDOTA_Item> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CDOTA_Item *m_pInstance; // r12
  CEntityIdentity *m_pEntity; // rax
  int v20; // edx
  __int16 v21; // cx
  CDOTA_UnitInventory *Inventory; // rax
  int m_Size; // eax
  CDOTA_Item **v24; // rax
  const char *AutoBluePrintForUnit; // rbx
  CDOTA_BaseNPC *v26; // rax
  __int64 v27; // r12
  int v28; // r13d
  CDOTA_Item *v29; // rbx
  CDOTA_Item *v30; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Item *v32; // rax
  __int64 v33; // r12
  int i; // ebx
  CDOTA_Item *v35; // r13
  CEntityIdentity *v36; // rax
  uint32 m_flags; // ecx
  int v38; // edx
  __int16 v39; // cx
  CDOTA_UnitInventory *v40; // rax
  uint32 ItemID; // eax
  int v42; // esi
  CDOTA_Item *v43; // rdx
  CDOTA_BaseNPC *v44; // rax
  CDOTA_BaseNPC *v45; // r12
  __int64 v46; // rax
  __int64 v47; // rbx
  const char *v48; // rdx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  void (__fastcall *v51)(__int64, const char *, _QWORD); // r12
  unsigned int v52; // eax
  int EmptySpaceInInventory; // eax
  CEntityIdentity *v54; // rdx
  int v55; // eax
  __int16 v56; // cx
  __int64 v57; // rbx
  int v58; // eax
  vec_t *p_m_Index; // rax
  __m128i v60; // xmm0
  float v61; // ebx
  __m128i v62; // xmm0
  float v63; // r12d
  CDOTA_BaseNPC *v64; // rax
  const Vector *AbsOrigin; // rax
  vec_t v66; // xmm2_4
  vec_t v67; // xmm1_4
  CDOTA_Item_Physical *ItemOnPositionSync; // rax
  CEntityIdentity *v69; // rdx
  __int16 v70; // cx
  float v71; // xmm0_4
  int v73; // [rsp+10h] [rbp-C0h]
  char bAnyCombinesHappeneda; // [rsp+38h] [rbp-98h]
  bool bAnyCombinesHappenedb; // [rsp+38h] [rbp-98h]
  CHandle<CBaseEntity> v79; // [rsp+40h] [rbp-90h] BYREF
  int iSlot; // [rsp+44h] [rbp-8Ch] BYREF
  CDOTA_Item *pResultItem; // [rsp+48h] [rbp-88h] BYREF
  Vector vecLocation; // [rsp+50h] [rbp-80h] BYREF
  CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > combineItems; // [rsp+60h] [rbp-70h] BYREF
  CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > resultItems; // [rsp+80h] [rbp-50h] BYREF

  if ( nOwnerPlayerID == -1 || g_pDOTAPlayerResource == 0 )
    return 0;
  Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, nOwnerPlayerID);
  m_nPreGamePlayerID = this->m_nPreGamePlayerID;
  if ( m_nPreGamePlayerID == -1 && (m_nPreGamePlayerID = CDOTA_UnitInventory::GetPlayerOwnerID(this)) == -1 )
  {
    Parent = CDOTA_UnitInventory::GetParent(this);
    if ( Parent != 0 )
    {
      if ( Parent->m_iTeamNum.m_Value == Team )
        goto LABEL_8;
      return 0;
    }
  }
  else
  {
    m_nPreGamePlayerID = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, m_nPreGamePlayerID);
  }
  if ( m_nPreGamePlayerID != Team )
    return 0;
LABEL_8:
  combineItems.m_Size = 0;
  combineItems.m_Memory.m_pMemory = 0;
  combineItems.m_Memory.m_nAllocationCount = 0;
  combineItems.m_Memory.m_nGrowSize = 0;
  CDOTA_UnitInventory::CollectPotentialCombineItems(this, iAllowedLocations, nOwnerPlayerID, &combineItems);
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&vecLocation, g_pDOTAPlayerResource, nOwnerPlayerID);
  v9 = CEntityHandle::operator CEntityInstance *(&vecLocation);
  if ( v9 == 0 || BYTE3(v9[7]._vptr_IHandleEntity) == 0 || (v10 = v9, (v9[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
    v10 = 0;
  if ( pAdditionalItems != 0 && pAdditionalItems->m_Size > 0 )
  {
    v11 = 0;
    v12 = 4LL * (pAdditionalItems->m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        v13 = &pAdditionalItems->m_Memory.m_pMemory[v11 / 4];
        m_Index = v13->m_Index;
        if ( v13->m_Index + 2 > 1 )
        {
          v15 = v13->m_Index;
          v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
          if ( v16 != 0 )
          {
            v17 = &v16[v15 & 0x1FF];
            if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
            {
              m_pInstance = v17->m_pInstance;
              if ( v17->m_pInstance != 0
                && !m_pInstance->m_bCombineLocked.m_Value
                && nOwnerPlayerID == m_pInstance->m_iPlayerOwnerID.m_Value )
              {
                if ( v10 == 0 )
                  goto LABEL_28;
                resultItems.m_Size = -1;
                m_pEntity = m_pInstance->m_pEntity;
                if ( m_pEntity != 0 )
                {
                  v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                  v21 = 0x7FFF;
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(resultItems.m_Size) = v21 | resultItems.m_Size & 0x8000;
                  resultItems.m_Size = (v20 << 15) | resultItems.m_Size & 0x7FFF;
                }
                Inventory = CDOTA_BaseNPC::GetInventory(v10);
                if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                       &Inventory->m_hPendingCombineItemRemoves,
                       &resultItems) < 0 )
                {
LABEL_28:
                  m_Size = combineItems.m_Size;
                  v73 = combineItems.m_Size;
                  if ( combineItems.m_Size == combineItems.m_Memory.m_nAllocationCount )
                  {
                    CUtlMemory<CDOTA_Item *,int>::Grow(&combineItems.m_Memory, 1);
                    m_Size = combineItems.m_Size;
                  }
                  combineItems.m_Size = m_Size + 1;
                  v24 = &combineItems.m_Memory.m_pMemory[v73];
                  if ( v24 != 0 )
                    break;
                }
              }
            }
          }
        }
        v11 += 4LL;
        if ( v11 == v12 )
          goto LABEL_32;
      }
      v11 += 4LL;
      *v24 = m_pInstance;
    }
    while ( v11 != v12 );
  }
LABEL_32:
  if ( combineItems.m_Size > 1 )
  {
    AutoBluePrintForUnit = CDOTA_AutoCombinableItems::GetAutoBluePrintForUnit(
                             &g_DOTAAutoCombinableItems,
                             this,
                             &combineItems);
    if ( AutoBluePrintForUnit != 0 )
    {
      v26 = CDOTA_UnitInventory::GetParent(this);
      *&resultItems.m_Size = DOTA_CreateItem(AutoBluePrintForUnit, v26, nOwnerPlayerID);
      CDOTA_UnitInventory::SetItemInSlot(this, 16, *&resultItems.m_Size);
      CUtlVectorBase<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>>::AddToTail(&combineItems, &resultItems);
    }
    v27 = 0;
    v28 = 0;
    resultItems.m_Size = 0;
    resultItems.m_Memory.m_pMemory = 0;
    resultItems.m_Memory.m_nAllocationCount = 0;
    resultItems.m_Memory.m_nGrowSize = 0;
    if ( combineItems.m_Size <= 0 )
    {
LABEL_48:
      bAnyCombinesHappeneda = 0;
LABEL_49:
      v32 = CEntityHandle::operator CEntityInstance *(&this->m_hItems.m_Value[16]);
      if ( v32 != 0 )
        CDOTA_UnitInventory::RemoveItem(this, v32, 1, 0);
      v33 = 0;
      for ( i = 0; resultItems.m_Size > i; ++v33 )
      {
        v35 = resultItems.m_Memory.m_pMemory[v33];
        if ( v35 != 0 && v10 != 0 )
        {
          v36 = v35->m_pEntity;
          m_flags = v36->m_flags;
          if ( (m_flags & 0x200) == 0 )
          {
            vecLocation.x = NAN;
            v38 = (v36->m_EHandle.m_Index >> 15) - (m_flags & 1);
            v39 = 0x7FFF;
            if ( v36->m_EHandle.m_Index != -1 )
              v39 = v36->m_EHandle.m_Index & 0x7FFF;
            LOWORD(vecLocation.x) = v39 | LOWORD(vecLocation.x) & 0x8000;
            LODWORD(vecLocation.x) = (v38 << 15) | LOWORD(vecLocation.x) & 0x7FFF;
            v40 = CDOTA_BaseNPC::GetInventory(v10);
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &v40->m_hPendingCombineItemRemoves,
                   &vecLocation) < 0 )
            {
              ItemID = CDOTA_Item::GetItemID(v35);
              CDOTA_BaseNPC_Hero::AddItemPurchasedHistory(v10, ItemID, 0);
            }
          }
        }
        ++i;
      }
      resultItems.m_Size = 0;
      if ( (resultItems.m_Memory.m_nGrowSize & 0xC0000000) != 0
        || (CUtlMemory<CDOTA_Item *,int>::Purge(&resultItems.m_Memory),
            (resultItems.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
      {
        result = bAnyCombinesHappeneda;
      }
      else
      {
        CUtlMemory<CDOTA_Item *,int>::Purge(&resultItems.m_Memory);
        result = bAnyCombinesHappeneda;
      }
      goto LABEL_62;
    }
    while ( 1 )
    {
      v29 = combineItems.m_Memory.m_pMemory[v27];
      if ( v29 != 0 && (*(v29->_vptr_IHandleEntity + 347))(combineItems.m_Memory.m_pMemory[v27]) != 0 )
      {
        iSlot = -1;
        v30 = CDOTA_UnitInventory::TryItemCombine(this, v29, &combineItems, &iSlot);
        pResultItem = v30;
        if ( (iSlot - 15) <= 1 )
          iSlot = -1;
        if ( v30 != 0 )
          break;
      }
      ++v28;
      ++v27;
      if ( combineItems.m_Size <= v28 )
        goto LABEL_48;
    }
    CUtlVectorBase<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>>::AddToTail(&resultItems, &pResultItem);
    v42 = iSlot;
    if ( iSlot == -1 )
    {
      EmptySpaceInInventory = CDOTA_UnitInventory::FindEmptySpaceInInventory(this, iAllowedLocations, 0);
      iSlot = EmptySpaceInInventory;
      if ( EmptySpaceInInventory == -1 )
      {
        if ( pAdditionalItems != 0 )
        {
          vecLocation.x = NAN;
          if ( pResultItem != 0 )
          {
            v54 = pResultItem->m_pEntity;
            if ( v54 != 0 )
            {
              v55 = (v54->m_EHandle.m_Index >> 15) - (v54->m_flags & 1);
              v56 = 0x7FFF;
              if ( v54->m_EHandle.m_Index != -1 )
                v56 = v54->m_EHandle.m_Index & 0x7FFF;
              LOWORD(vecLocation.x) = v56 | LOWORD(vecLocation.x) & 0x8000;
              LODWORD(vecLocation.x) = (v55 << 15) | LOWORD(vecLocation.x) & 0x7FFF;
            }
          }
          v57 = pAdditionalItems->m_Size;
          v58 = pAdditionalItems->m_Size;
          if ( v57 == pAdditionalItems->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CDOTA_Item>,int>::Grow(&pAdditionalItems->m_Memory, 1);
            v58 = pAdditionalItems->m_Size;
          }
          pAdditionalItems->m_Size = v58 + 1;
          p_m_Index = &pAdditionalItems->m_Memory.m_pMemory[v57].m_Index;
          if ( p_m_Index != 0 )
            *p_m_Index = vecLocation.x;
        }
        else
        {
          CBaseEntity::SetParent(pResultItem, 0, 0, 0);
          *v60.m128i_i32 = RandomFloat(-50.0, 50.0);
          v61 = COERCE_FLOAT(_mm_cvtsi128_si32(v60));
          *v62.m128i_i32 = RandomFloat(-50.0, 50.0);
          v63 = COERCE_FLOAT(_mm_cvtsi128_si32(v62));
          v64 = CDOTA_UnitInventory::GetParent(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v64);
          v66 = v63 + AbsOrigin->x;
          v67 = AbsOrigin->z + 0.0;
          vecLocation.y = v61 + AbsOrigin->y;
          vecLocation.x = v66;
          vecLocation.z = v67;
          ItemOnPositionSync = CreateItemOnPositionSync(pResultItem, 0, *&vecLocation.x, v67);
          if ( ItemOnPositionSync != 0 )
          {
            v79.m_Index = -1;
            v69 = ItemOnPositionSync->m_pEntity;
            if ( v69 != 0 )
            {
              if ( v69->m_EHandle.m_Index == -1 )
                v70 = 0x7FFF;
              else
                v70 = v69->m_EHandle.m_Index & 0x7FFF;
              v79.m_Index = (((v69->m_EHandle.m_Index >> 15) - (v69->m_flags & 1)) << 15) | v70 & 0x7FFF;
            }
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(
              &this->m_vecRecentlyDroppedItems,
              &v79);
          }
          v71 = 0.0;
          if ( g_pGameRules != 0 )
            v71 = *&g_pGameRules[18].m_szQuestName[20];
          this->m_flRecentlyDroppedItemsTime = v71;
          if ( ppResultingItem != 0 )
            *ppResultingItem = pResultItem;
          else
            UTIL_Remove(pResultItem);
        }
        goto LABEL_75;
      }
      v42 = EmptySpaceInInventory;
    }
    v43 = pResultItem;
    if ( ppResultingItem != 0 )
      *ppResultingItem = pResultItem;
    CDOTA_UnitInventory::SetItemInSlot(this, v42, v43);
    v44 = CDOTA_UnitInventory::GetParent(this);
    if ( v44 != 0 && (v44->m_iUnitType & 1) != 0 )
      v45 = v44;
    else
      v45 = 0;
    v46 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_item_combined", 0, 0);
    v47 = v46;
    if ( v46 != 0 && v45 != 0 )
    {
      (*(*v46 + 112LL))(v46, "PlayerID", LODWORD(v45[1].m_pfnBlocked.__delta));
      v48 = "<NoAbilityName>";
      m_pAbilityData = pResultItem->m_pAbilityData;
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v48 = m_pszAbilityName;
      }
      (*(*v47 + 136LL))(v47, "itemname", v48);
      v51 = *(*v47 + 112LL);
      v52 = (*(pResultItem->_vptr_IHandleEntity + 359))(pResultItem);
      v51(v47, "itemcost", v52);
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v47, 1);
    }
LABEL_75:
    bAnyCombinesHappeneda = 1;
    goto LABEL_49;
  }
  result = 0;
LABEL_62:
  combineItems.m_Size = 0;
  if ( (combineItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    bAnyCombinesHappenedb = result;
    CUtlMemory<CDOTA_Item *,int>::Purge(&combineItems.m_Memory);
    result = bAnyCombinesHappenedb;
    if ( (combineItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Item *,int>::Purge(&combineItems.m_Memory);
      return bAnyCombinesHappenedb;
    }
  }
  return result;
}


// CDOTA_UnitInventory::IsBluePrintComplete  (line 1815, @0x00000000027c8240, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, FStrEq, GetAbilityName, Purge, PurgeAndDeleteElements, RemoveAll, _V_strcmp, operator[], ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlVectorBase<bool, CUtlMemory<bool, int> >::SetCount, strcmp, CUtlVectorBase<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> >::AddToTail, CUtlMemory<char*, int>::Purge, CUtlMemory<bool, int>::Purge, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_AutoCombinableItems::GetAutoBluePrintForUnit, CDOTA_UnitInventory::TryItemCombine
// strings: "<NoAbilityName>"
bool __fastcall CDOTA_UnitInventory::IsBluePrintComplete(
        CDOTA_UnitInventory *const this,
        const char *pItemList,
        CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > *pUsableItems,
        CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > *pConsumedItems)
{
  int m_Size; // r13d
  int v6; // eax
  __int64 v7; // rax
  int v8; // r15d
  int v9; // ebx
  const char *v10; // rdi
  const char *v11; // rsi
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  bool v14; // r13
  __int64 v15; // r12
  int v16; // ebx
  char *v17; // rsi
  CDOTA_Item *pPotentialItem; // [rsp+28h] [rbp-78h] BYREF
  CUtlStringList szComponents; // [rsp+30h] [rbp-70h] BYREF
  CUtlVector<bool,CUtlMemory<bool,int> > bUsedInThisBlueprint; // [rsp+50h] [rbp-50h] BYREF

  szComponents.m_Size = 0;
  szComponents.m_Memory.m_pMemory = 0;
  szComponents.m_Memory.m_nAllocationCount = 0;
  szComponents.m_Memory.m_nGrowSize = 0;
  V_SplitString(pItemList, ";", &szComponents);
  m_Size = pUsableItems->m_Size;
  v6 = szComponents.m_Size;
  if ( pUsableItems->m_Size < szComponents.m_Size )
  {
    v14 = 0;
    goto LABEL_21;
  }
  bUsedInThisBlueprint.m_Size = 0;
  bUsedInThisBlueprint.m_Memory.m_pMemory = 0;
  bUsedInThisBlueprint.m_Memory.m_nAllocationCount = 0;
  bUsedInThisBlueprint.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<bool,CUtlMemory<bool,int>>::SetCount(&bUsedInThisBlueprint, m_Size);
  if ( m_Size <= 0 )
  {
    if ( szComponents.m_Size > 0 )
    {
LABEL_29:
      v14 = 0;
      if ( pConsumedItems != 0 )
      {
        v14 = 0;
        pConsumedItems->m_Size = 0;
      }
      bUsedInThisBlueprint.m_Size = 0;
      if ( (bUsedInThisBlueprint.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_32;
      goto LABEL_34;
    }
  }
  else
  {
    v7 = 0;
    do
      bUsedInThisBlueprint.m_Memory.m_pMemory[v7++] = 0;
    while ( m_Size > v7 );
    v8 = 0;
    v9 = 0;
    if ( szComponents.m_Size > 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !bUsedInThisBlueprint.m_Memory.m_pMemory[v9] )
          {
            pPotentialItem = pUsableItems->m_Memory.m_pMemory[v9];
            if ( pPotentialItem != 0 && (*(pPotentialItem->_vptr_IHandleEntity + 344))(pPotentialItem) != 0 )
            {
              v10 = "<NoAbilityName>";
              v11 = szComponents.m_Memory.m_pMemory[v8];
              m_pAbilityData = pPotentialItem->m_pAbilityData;
              if ( m_pAbilityData != 0 )
              {
                m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
                v10 = "<NoAbilityName>";
                if ( m_pszAbilityName != 0 )
                  v10 = m_pszAbilityName;
              }
              if ( v11 == v10 || strcmp(v10, v11) == 0 )
                break;
            }
          }
          if ( m_Size <= ++v9 )
            goto LABEL_29;
        }
        if ( pConsumedItems != 0 )
          CUtlVectorBase<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>>::AddToTail(pConsumedItems, &pPotentialItem);
        ++v8;
        bUsedInThisBlueprint.m_Memory.m_pMemory[v9] = 1;
        if ( szComponents.m_Size <= v8 )
          break;
        v9 = 0;
      }
    }
  }
  v14 = 1;
  bUsedInThisBlueprint.m_Size = 0;
  if ( (bUsedInThisBlueprint.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
LABEL_34:
    CUtlMemory<bool,int>::Purge(&bUsedInThisBlueprint.m_Memory);
    if ( (bUsedInThisBlueprint.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<bool,int>::Purge(&bUsedInThisBlueprint.m_Memory);
  }
LABEL_32:
  v6 = szComponents.m_Size;
LABEL_21:
  if ( v6 > 0 )
  {
    v15 = 0;
    v16 = 0;
    do
    {
      ++v16;
      v17 = szComponents.m_Memory.m_pMemory[v15++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v17);
    }
    while ( v16 < szComponents.m_Size );
  }
  szComponents.m_Size = 0;
  if ( (szComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&szComponents.m_Memory);
    if ( (szComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&szComponents.m_Memory);
  }
  return v14;
}


// CDOTA_UnitInventory::RemoveComponentsInBluePrint  (line 1871, @0x00000000027badc0, libserver.so)  // inlines: AddDeletionPendingCombinedItem, AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Item::GetContainer, UTIL_Remove, CDOTA_UnitInventory::FindItemSlotInInventory, CDOTA_UnitInventory::SetItemInSlot, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_BaseNPC::GetInventory, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// callers: CDOTA_UnitInventory::TryItemCombine
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_UnitInventory::RemoveComponentsInBluePrint(
        CDOTA_UnitInventory *const this,
        CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > *pComponents)
{
  __int64 i; // r12
  CDOTA_Item **m_pMemory; // rax
  CDOTA_Item *v6; // rbx
  CDOTA_Item_Physical *Container; // rax
  int ItemSlotInInventory; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  CDOTA_UnitInventory *Inventory; // rax
  __int64 m_Size; // rbx
  int v17; // edx
  CHandle<CBaseEntity> *v18; // rax
  CDOTA_UnitInventory *v19; // [rsp+8h] [rbp-48h]
  int v20[16]; // [rsp+10h] [rbp-40h] BYREF

  for ( i = 0; pComponents->m_Size > i; ++i )
  {
    while ( 1 )
    {
      m_pMemory = pComponents->m_Memory.m_pMemory;
      v6 = m_pMemory[i];
      if ( v6 != 0 )
      {
        Container = CDOTA_Item::GetContainer(m_pMemory[i]);
        if ( Container != 0 )
          UTIL_Remove(Container);
        ItemSlotInInventory = CDOTA_UnitInventory::FindItemSlotInInventory(this, v6, 3);
        if ( ItemSlotInInventory != -1 )
          CDOTA_UnitInventory::SetItemInSlot(this, ItemSlotInInventory, 0);
        CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v20, g_pDOTAPlayerResource, v6->m_iPlayerOwnerID.m_Value);
        if ( (v20[0] + 2) > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20[0]) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[v20[0] & 0x1FF];
            if ( v10 != 0 && v20[0] == v10->m_EHandle.m_Index )
            {
              m_pInstance = v10->m_pInstance;
              if ( v10->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                v20[0] = -1;
                m_pEntity = v6->m_pEntity;
                if ( m_pEntity != 0 )
                {
                  v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                  v14 = 0x7FFF;
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(v20[0]) = v14 | v20[0] & 0x8000;
                  v20[0] = (v13 << 15) | v20[0] & 0x7FFF;
                }
                Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
                m_Size = Inventory->m_hPendingCombineItemRemoves.m_Size;
                v17 = Inventory->m_hPendingCombineItemRemoves.m_Size;
                if ( m_Size == Inventory->m_hPendingCombineItemRemoves.m_Memory.m_nAllocationCount )
                {
                  v19 = Inventory;
                  CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&Inventory->m_hPendingCombineItemRemoves.m_Memory, 1);
                  Inventory = v19;
                  v17 = v19->m_hPendingCombineItemRemoves.m_Size;
                }
                Inventory->m_hPendingCombineItemRemoves.m_Size = v17 + 1;
                v18 = &Inventory->m_hPendingCombineItemRemoves.m_Memory.m_pMemory[m_Size];
                if ( v18 != 0 )
                  break;
              }
            }
          }
        }
      }
      if ( pComponents->m_Size <= ++i )
        return;
    }
    v18->m_Index = v20[0];
  }
}


// CDOTA_UnitInventory::TryItemCombine  (line 1900, @0x00000000027c85c0, libserver.so)  // inlines: AddToTail, CSingleUserRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_Item*>, DOTAGameRules, Element, GetAbilityName, GetGameTime, GetPlayerOwnerID, GetPurchaseTime, GrowMemory, NetworkStateChanged, Purge, RemoveAll, Set, SetPurchaseTime, SetPurchasedWhileDead, entindex, operator=<bool>, operator=<float>, operator[], ~CSingleUserRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Item::GetNumberOfComponentLists, CDOTA_Item::GetComponentList, CDOTA_UnitInventory::IsBluePrintComplete, CDOTA_UnitInventory::GetParent, CDOTA_Item::GetResult, DOTA_CreateItem, CDOTA_UnitInventory::FindItemSlotInInventory, Warning, CDOTA_UnitInventory::RemoveComponentsInBluePrint, CDOTA_PlayerResource::GetPlayer, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient (20 total)
// callers: CDOTA_UnitInventory::CheckPendingCombines
// strings: "<NoAbilityName>", "Failed to combine into %s!\n", "General.Combine"
CDOTA_Item *__fastcall CDOTA_UnitInventory::TryItemCombine(
        CDOTA_UnitInventory *const this,
        CDOTA_Item *pRecipeItem,
        CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > *pUsableItems,
        int *piResultSlot)
{
  int m_Value; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  const char *v10; // rdi
  int NumberOfComponentLists; // r12d
  unsigned int v12; // ebx
  DOTAAbilityData_t *v13; // rax
  const char *v14; // rdi
  const char *v15; // rax
  const char *ComponentList; // rax
  CDOTA_BaseNPC *Parent; // r12
  const char *v18; // rax
  CDOTA_Item *Item; // r15
  double v20; // xmm0_8
  CDOTA_Item **m_pMemory; // rcx
  __int64 v22; // r12
  char v23; // al
  CDOTA_Item *v24; // rsi
  int ItemSlotInInventory; // eax
  const char *v26; // rax
  double v28; // xmm1_8
  __int64 m_Size; // r12
  int v30; // eax
  CDOTA_Item **v31; // rax
  CDOTAPlayer *Player; // r14
  CDOTA_BaseNPC *v33; // rax
  CEntityIndex v34; // eax
  const char *v35; // [rsp+0h] [rbp-1C0h]
  int nOwnerPlayerID; // [rsp+Ch] [rbp-1B4h]
  CDOTA_Item **v37; // [rsp+10h] [rbp-1B0h]
  char bPurchasedWhileDead; // [rsp+23h] [rbp-19Dh]
  float fOldestPurchaseTime; // [rsp+24h] [rbp-19Ch]
  CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > components; // [rsp+30h] [rbp-190h] BYREF
  CSingleUserRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v43; // [rsp+188h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  m_Value = pRecipeItem->m_iPlayerOwnerID.m_Value;
  components.m_Size = 0;
  components.m_Memory.m_pMemory = 0;
  components.m_Memory.m_nAllocationCount = 0;
  components.m_Memory.m_nGrowSize = 0;
  nOwnerPlayerID = m_Value;
  m_pAbilityData = pRecipeItem->m_pAbilityData;
  if ( m_pAbilityData != 0 && (m_pszAbilityName = m_pAbilityData->m_pszAbilityName) != 0 )
  {
    v35 = m_pszAbilityName;
    v10 = m_pszAbilityName;
  }
  else
  {
    v35 = "<NoAbilityName>";
    v10 = "<NoAbilityName>";
  }
  NumberOfComponentLists = CDOTA_Item::GetNumberOfComponentLists(v10);
  v12 = 0;
  if ( NumberOfComponentLists <= 0 )
    goto LABEL_25;
  while ( 1 )
  {
    v13 = pRecipeItem->m_pAbilityData;
    v14 = "<NoAbilityName>";
    components.m_Size = 0;
    if ( v13 != 0 )
    {
      v15 = v13->m_pszAbilityName;
      if ( v15 != 0 )
        v14 = v15;
    }
    ComponentList = CDOTA_Item::GetComponentList(v14, v12);
    if ( CDOTA_UnitInventory::IsBluePrintComplete(this, ComponentList, pUsableItems, &components) )
      break;
    if ( ++v12 == NumberOfComponentLists )
      goto LABEL_25;
  }
  Parent = CDOTA_UnitInventory::GetParent(this);
  v18 = CDOTA_Item::GetResult(pRecipeItem);
  Item = DOTA_CreateItem(v18, Parent, nOwnerPlayerID);
  if ( Item == 0 )
  {
    v26 = CDOTA_Item::GetResult(pRecipeItem);
    Warning("Failed to combine into %s!\n", v26);
LABEL_25:
    Item = 0;
    goto LABEL_26;
  }
  if ( g_pGameRules != 0 )
    fOldestPurchaseTime = *&g_pGameRules[18].m_szQuestName[20];
  else
    fOldestPurchaseTime = 0.0;
  if ( components.m_Size <= 0 )
  {
    bPurchasedWhileDead = 1;
  }
  else
  {
    m_pMemory = components.m_Memory.m_pMemory;
    v22 = 0;
    bPurchasedWhileDead = 1;
    do
    {
      (*(Item->_vptr_IHandleEntity + 361))(Item, m_pMemory[v22]);
      m_pMemory = components.m_Memory.m_pMemory;
      v23 = bPurchasedWhileDead;
      v24 = components.m_Memory.m_pMemory[v22];
      *&v20 = LODWORD(v24->m_flPurchaseTime.m_Value);
      *&v20 = fminf(*&v20, fOldestPurchaseTime);
      if ( !v24->m_bPurchasedWhileDead.m_Value )
        v23 = 0;
      fOldestPurchaseTime = *&v20;
      bPurchasedWhileDead = v23;
      if ( piResultSlot != 0 )
      {
        v37 = components.m_Memory.m_pMemory;
        ItemSlotInInventory = CDOTA_UnitInventory::FindItemSlotInInventory(this, v24, 3);
        m_pMemory = v37;
        if ( ItemSlotInInventory != -1 && (ItemSlotInInventory < *piResultSlot || *piResultSlot == -1) )
          *piResultSlot = ItemSlotInInventory;
      }
      ++v22;
    }
    while ( components.m_Size > v22 );
  }
  *&v28 = LODWORD(fOldestPurchaseTime);
  if ( fOldestPurchaseTime != Item->m_flPurchaseTime.m_Value )
  {
    (*(Item->_vptr_IHandleEntity + 22))(Item, 964, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v20, fOldestPurchaseTime);
    Item->m_flPurchaseTime.m_Value = fOldestPurchaseTime;
  }
  if ( bPurchasedWhileDead != Item->m_bPurchasedWhileDead.m_Value )
  {
    (*(Item->_vptr_IHandleEntity + 22))(Item, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v20, v28);
    Item->m_bPurchasedWhileDead.m_Value = bPurchasedWhileDead;
  }
  m_Size = components.m_Size;
  v30 = components.m_Size;
  if ( components.m_Size == components.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CDOTA_Item *,int>::Grow(&components.m_Memory, 1);
    v30 = components.m_Size;
  }
  components.m_Size = v30 + 1;
  v31 = &components.m_Memory.m_pMemory[m_Size];
  if ( v31 != 0 )
    *v31 = pRecipeItem;
  CDOTA_UnitInventory::RemoveComponentsInBluePrint(this, &components);
  if ( g_pDOTAPlayerResource != 0 )
  {
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, nOwnerPlayerID);
    if ( Player != 0 )
    {
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::AddRecipient(&filter, Player);
      v33 = CDOTA_UnitInventory::GetParent(this);
      if ( v33 != 0 )
        v34.m_Data = CEntityInstance::GetEntityIndex(v33).m_Data;
      else
        v34.m_Data = CEntityInstance::GetEntityIndex(Player).m_Data;
      CBaseEntity::EmitSound(&filter, v34, "General.Combine", 0, 0.0, 0);
      filter._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
  (*(Item->_vptr_IHandleEntity + 335))(Item, v12, v35);
LABEL_26:
  components.m_Size = 0;
  if ( (components.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Item *,int>::Purge(&components.m_Memory);
    if ( (components.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Item *,int>::Purge(&components.m_Memory);
  }
  return Item;
}


// CDOTA_UnitInventory::StartCooldown  (line 1986, @0x00000000027ce260, libserver.so)  // inlines: CDOTAUserMsg_SharedCooldown_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_SharedCooldown_t>, FindOrCreateGameEvent<CDOTAUserMsg_SharedCooldown_t>, GetAbilityData, GetSharedCooldownName, GetTeamNumber, PostEvent<CDOTAUserMsg_SharedCooldown_t>, SendUserMessage<CDOTAUserMsg_SharedCooldown_t>, assign, entindex, length, set_cooldown, set_entindex, set_has_cooldown, set_has_entindex, set_has_name, set_has_name_index, set_name, set_name_index, ~CDOTAUserMsg_SharedCooldown_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTA_UnitInventory::FindOrAddSharedCooldown, CRecipientFilter::CRecipientFilter, CDOTA_UnitInventory::GetParent, DOTA_AddAllTeamRecipients, CDOTAUserMsg_SharedCooldown::CDOTAUserMsg_SharedCooldown, CEntityInstance::GetEntityIndex, CRecipientFilter::MakeReliable, CDOTAUserMsg_SharedCooldown::~CDOTAUserMsg_SharedCooldown, CRecipientFilter::~CRecipientFilter, strlen, std::string::assign(char const*,ulong), CDOTABaseAbility::LoadAbilityData (14 total)
// callers: CDOTABaseAbility::StartCooldown, CDOTABaseAbility::EndCooldown
// strings: "<NoSharedCooldownName>"
// globals: g_pStringTableCooldownNames, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SharedCooldown_t>(bool)::s_hEvent
void __fastcall CDOTA_UnitInventory::StartCooldown(
        CDOTA_UnitInventory *const this,
        CDOTABaseAbility *pAbility,
        __m128i a3,
        float fCooldown)
{
  unsigned int v4; // r15d
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszSharedCooldownName; // rsi
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v10; // rax
  __int64 (*v11)(void); // r13
  DOTAAbilityData_t *v12; // rax
  int v13; // eax
  __int64 v14; // r14
  IGameEventSystem *v15; // r13
  void (__fastcall *v16)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  DOTAAbilityData_t *v17; // rax
  const char *v18; // r13
  size_t v19; // rax
  const char *m_pszAbilityName; // rax
  const char *v21; // rax
  _QWORD v22[2]; // [rsp+10h] [rbp-1A0h] BYREF
  int v23; // [rsp+20h] [rbp-190h]
  std::string *v24; // [rsp+28h] [rbp-188h]
  CEntityIndex v25; // [rsp+30h] [rbp-180h]
  unsigned int v26; // [rsp+34h] [rbp-17Ch]
  int v27; // [rsp+38h] [rbp-178h]
  CRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v29; // [rsp+178h] [rbp-38h]

  v4 = _mm_cvtsi128_si32(a3);
  v29 = __readfsqword(0x28u);
  m_pAbilityData = pAbility->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(pAbility, 0);
    m_pAbilityData = pAbility->m_pAbilityData;
  }
  m_pszSharedCooldownName = m_pAbilityData->m_pszSharedCooldownName;
  if ( m_pszSharedCooldownName == 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    m_pszSharedCooldownName = "<NoSharedCooldownName>";
    if ( m_pszAbilityName != 0 )
      m_pszSharedCooldownName = m_pszAbilityName;
  }
  CDOTA_UnitInventory::FindOrAddSharedCooldown(
    this,
    m_pszSharedCooldownName,
    *_mm_cvtsi32_si128(v4).m128i_i64,
    fCooldown);
  CRecipientFilter::CRecipientFilter(&filter);
  Parent = CDOTA_UnitInventory::GetParent(this);
  DOTA_AddAllTeamRecipients(Parent->m_iTeamNum.m_Value, &filter);
  CDOTAUserMsg_SharedCooldown::CDOTAUserMsg_SharedCooldown(v22);
  v22[0] = off_42B19F0;
  v10 = CDOTA_UnitInventory::GetParent(this);
  v25.m_Data = CEntityInstance::GetEntityIndex(v10).m_Data;
  v26 = v4;
  v23 |= 5u;
  if ( g_pStringTableCooldownNames == 0 )
    goto LABEL_10;
  v11 = *(g_pStringTableCooldownNames->_vptr_INetworkStringTable + 12);
  v12 = pAbility->m_pAbilityData;
  if ( v12 == 0 )
    CDOTABaseAbility::LoadAbilityData(pAbility, 0);
  v13 = v11();
  if ( v13 == 0xFFFF )
  {
LABEL_10:
    v17 = pAbility->m_pAbilityData;
    if ( v17 == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(pAbility, 0);
      v17 = pAbility->m_pAbilityData;
    }
    v18 = v17->m_pszSharedCooldownName;
    if ( v18 == 0 )
    {
      v21 = v17->m_pszAbilityName;
      v18 = "<NoSharedCooldownName>";
      if ( v21 != 0 )
        v18 = v21;
    }
    v23 |= 2u;
    v19 = strlen(v18);
    std::string::assign(v24, v18, v19);
  }
  else
  {
    v23 |= 8u;
    v27 = v13;
  }
  CRecipientFilter::MakeReliable(&filter);
  v14 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SharedCooldown_t>(bool)::s_hEvent;
  v15 = g_pGameEventSystem;
  v16 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SharedCooldown_t>(bool)::s_hEvent);
  v16(v15, 0, 0, &filter, v14, v22, 48);
  v22[0] = &off_42B1870;
  CDOTAUserMsg_SharedCooldown::~CDOTAUserMsg_SharedCooldown(v22);
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_UnitInventory::SetNextAutobuyItem  (line 2013, @0x00000000027abe30, libserver.so)  // inlines: CDOTAUserMsg_SetNextAutobuyItem_t, CEntityHandle, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_SetNextAutobuyItem_t>, FindOrCreateGameEvent<CDOTAUserMsg_SetNextAutobuyItem_t>, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, PostEvent<CDOTAUserMsg_SetNextAutobuyItem_t>, SendUserMessage<CDOTAUserMsg_SetNextAutobuyItem_t>, ToDOTAPlayer, assign, length, set_has_name, set_name, ~CDOTAUserMsg_SetNextAutobuyItem_t, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB
// calls: CDOTA_UnitInventory::GetParent, __stack_chk_fail, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CDOTAUserMsg_SetNextAutobuyItem::CDOTAUserMsg_SetNextAutobuyItem, strlen, std::string::assign(char const*,ulong), CDOTAUserMsg_SetNextAutobuyItem::~CDOTAUserMsg_SetNextAutobuyItem, CRecipientFilter::~CRecipientFilter, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::UpdateNextItemToPurchase
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SetNextAutobuyItem_t>(bool)::s_hEvent
void __fastcall CDOTA_UnitInventory::SetNextAutobuyItem(CDOTA_UnitInventory *const this, const char *pItemName)
{
  CDOTA_BaseNPC *Parent; // rax
  unsigned __int16 v4; // dx
  int v5; // esi
  int v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const CEntityInstance *m_pInstance; // r12
  size_t v10; // rax
  __int64 v11; // r14
  IGameEventSystem *v12; // rbx
  void (__fastcall *v13)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v14[2]; // [rsp+10h] [rbp-190h] BYREF
  int v15; // [rsp+20h] [rbp-180h]
  std::string *v16; // [rsp+28h] [rbp-178h]
  CSingleUserRecipientFilter Filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v18; // [rsp+168h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  Parent = CDOTA_UnitInventory::GetParent(this);
  if ( Parent->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = Parent->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (Parent->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  LODWORD(v14[0]) = v6;
  if ( (v6 + 2) > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v5 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v8->m_pInstance) != 0 )
        {
          CRecipientFilter::CRecipientFilter(&Filter);
          Filter._vptr_IRecipientFilter = &off_3FCB0D0;
          CRecipientFilter::AddRecipient(&Filter, m_pInstance);
          CDOTAUserMsg_SetNextAutobuyItem::CDOTAUserMsg_SetNextAutobuyItem(v14);
          v15 |= 1u;
          v14[0] = off_42B17B0;
          v10 = strlen(pItemName);
          std::string::assign(v16, pItemName, v10);
          v11 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SetNextAutobuyItem_t>(bool)::s_hEvent;
          v12 = g_pGameEventSystem;
          v13 = *(*g_pGameEventSystem + 128LL);
          (*(*g_pNetworkMessages + 96LL))(
            g_pNetworkMessages,
            IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SetNextAutobuyItem_t>(bool)::s_hEvent);
          v13(v12, 0, 0, &Filter, v11, v14, 32);
          v14[0] = &off_42B1630;
          CDOTAUserMsg_SetNextAutobuyItem::~CDOTAUserMsg_SetNextAutobuyItem(v14);
          Filter._vptr_IRecipientFilter = &off_3FCB0D0;
          CRecipientFilter::~CRecipientFilter(&Filter);
        }
      }
    }
  }
}


// CDOTA_UnitInventory::IllusionInventoryCopySlot  (line 2028, @0x00000000027ac070, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, Set, operator=
// calls: memcmp
void __fastcall CDOTA_UnitInventory::IllusionInventoryCopySlot(
        CDOTA_UnitInventory *const this,
        int iSlot,
        CDOTA_Item *pItem)
{
  CEntityIdentity *m_pEntity; // rcx
  __int16 v6; // r8
  CHandle<CBaseEntity> *v7; // r13
  int s2[12]; // [rsp+0h] [rbp-30h] BYREF

  s2[0] = -1;
  if ( pItem != 0 )
  {
    m_pEntity = pItem->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      s2[0] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    }
  }
  v7 = &this->m_hItems.m_Value[iSlot];
  if ( memcmp(v7, s2, 4u) != 0 )
  {
    (*(this->_vptr_CDOTA_UnitInventory + 2))(this, 32, iSlot, 0xFFFFFFFFLL);
    v7->m_Index = s2[0];
  }
}


// DOTA_DumpServerInventory  (line 2075, @0x00000000027ab650, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*
// calls: UTIL_GetCommandClient, Msg, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::DumpInventorySlots
// strings: " SERVER\n"
void __fastcall DOTA_DumpServerInventory(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v3; // rbx
  unsigned int m_Value; // r9d
  unsigned int v5; // ecx
  unsigned __int16 v6; // ax
  int v7; // r8d
  int v8; // edx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CEntityInstance *m_pInstance; // rax
  unsigned __int16 v12; // dx
  int v13; // edi
  int v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // rbx
  CDOTA_UnitInventory *Inventory; // rax

  CommandClient = UTIL_GetCommandClient();
  v3 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
  {
    m_Value = v3[1].m_iMaxHealth.m_Value;
    v5 = m_Value >> 15;
    if ( m_Value == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = v3[1].m_iMaxHealth.m_Value & 0x7FFF;
      v7 = v6;
    }
    v8 = (v5 << 15) | v6 & 0x7FFF;
    if ( (v8 + 2) > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v7 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            if ( m_Value == -1 )
            {
              v12 = 0x7FFF;
              v13 = 0x7FFF;
            }
            else
            {
              v12 = v3[1].m_iMaxHealth.m_Value & 0x7FFF;
              v13 = v12;
            }
            v14 = (v5 << 15) | v12 & 0x7FFF;
            if ( (v14 + 2) > 1 )
            {
              v15 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v13 >> 9];
              if ( v15 != 0 )
              {
                v16 = &v15[v13 & 0x1FF];
                if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
                {
                  v17 = v16->m_pInstance;
                  if ( v16->m_pInstance != 0
                    && BYTE3(v17[7]._vptr_IHandleEntity) != 0
                    && (v17[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    Msg(" SERVER\n", g_pEntitySystem);
                    Inventory = CDOTA_BaseNPC::GetInventory(v17);
                    CDOTA_UnitInventory::DumpInventorySlots(Inventory);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


