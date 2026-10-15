
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_UnitInventory::~CDOTA_UnitInventory  (line 146, @0x000000000258fd70, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlVectorBase<sSharedCooldownInfo, CUtlMemory<sSharedCooldownInfo, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<sSharedCooldownInfo, int>::Purge
// callers: CSchemaUtlVectorManipulator<CUtlVector<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> >, DataTeamPlayer_t>::SwapItems, DataTeamPlayer_t::DataTeamPlayer_t, CDOTA_BaseNPC::CDOTA_BaseNPC
void __fastcall CDOTA_UnitInventory::~CDOTA_UnitInventory(CDOTA_UnitInventory *const this)
{
  this->_vptr_CDOTA_UnitInventory = off_40DC990;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecRecentlyDroppedItems);
  if ( (this->m_vecRecentlyDroppedItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecRecentlyDroppedItems.m_Memory);
    if ( (this->m_vecRecentlyDroppedItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecRecentlyDroppedItems.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hPendingCombineItemRemoves);
  if ( (this->m_hPendingCombineItemRemoves.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hPendingCombineItemRemoves.m_Memory);
    if ( (this->m_hPendingCombineItemRemoves.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hPendingCombineItemRemoves.m_Memory);
  }
  CUtlVectorBase<sSharedCooldownInfo,CUtlMemory<sSharedCooldownInfo,int>>::RemoveAll(&this->m_SharedCooldownList);
  if ( (this->m_SharedCooldownList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<sSharedCooldownInfo,int>::Purge(&this->m_SharedCooldownList.m_Memory);
    if ( (this->m_SharedCooldownList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sSharedCooldownInfo,int>::Purge(&this->m_SharedCooldownList.m_Memory);
  }
}


// CDOTA_UnitInventory::Schema_DynamicBinding  (line 148, @0x0000000002499860, libserver.so)
// calls: CDOTA_UnitInventory::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_UnitInventory::Schema_DynamicBinding(
        const CDOTA_UnitInventory *const this)
{
  CDOTA_UnitInventory::Schema_VerifyBindingIsRegistered();
  return CDOTA_UnitInventory::s_pSchemaBinding;
}


// CDOTA_UnitInventory::NetworkStateChanged  (line 155, @0x0000000002496e70, libserver.so)
void __fastcall CDOTA_UnitInventory::NetworkStateChanged(CDOTA_UnitInventory *const this)
{
  ;
}


// CDOTA_UnitInventory::NetworkStateChanged  (line 155, @0x0000000002496e80, libserver.so)
void __fastcall CDOTA_UnitInventory::NetworkStateChanged(
        CDOTA_UnitInventory *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CDOTA_UnitInventory::NetworkStateChangedLog  (line 155, @0x0000000002496e90, libserver.so)
void __fastcall CDOTA_UnitInventory::NetworkStateChangedLog(
        const CDOTA_UnitInventory *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


