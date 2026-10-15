
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_entity2_helpers.cpp  (line 0, @0x0000000001a68410, libserver.so)  // inlines: CFieldPathHuffmanEncoder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CVariantBase, Color, Purge, RemoveAll, SetColor, __static_initialization_and_destruction_0, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, __cxa_atexit, _Unwind_Resume, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Purge, CUtlMemory<int, int>::Purge
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'CEntityKeyValues::sm_EmptyVariant, `guard variable for'g_HuffmanEncoder, g_HuffmanEncoder, __dso_handle, CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder(), CEntityKeyValues::sm_EmptyVariant, CVariantBase<CEntityVariantAllocator>::~CVariantBase()
void __cdecl GLOBAL__sub_I_entity2_helpers_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  if ( `guard variable for'CEntityKeyValues::sm_EmptyVariant == 0 )
  {
    `guard variable for'CEntityKeyValues::sm_EmptyVariant = 1;
    CEntityKeyValues::sm_EmptyVariant.m_type = 0;
    CEntityKeyValues::sm_EmptyVariant.m_flags = 0;
    CEntityKeyValues::sm_EmptyVariant.m_uint64 = 0;
    __cxa_atexit(CVariantBase<CEntityVariantAllocator>::~CVariantBase, &CEntityKeyValues::sm_EmptyVariant, &_dso_handle);
  }
  if ( `guard variable for'g_HuffmanEncoder == 0 )
  {
    `guard variable for'g_HuffmanEncoder = 1;
    g_HuffmanEncoder.m_pRoot = 0;
    g_HuffmanEncoder.m_Frequencies.m_Size = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_pMemory = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_nAllocationCount = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_nGrowSize = 0;
    g_HuffmanEncoder.m_OpCodeToHuffmanLookup.m_Size = 0;
    g_HuffmanEncoder.m_FixedTree.m_Size = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_pMemory = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_nAllocationCount = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_nGrowSize = 0;
    CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup(&g_HuffmanEncoder);
    __cxa_atexit(CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder, &g_HuffmanEncoder, &_dso_handle);
  }
}


// GetEntityInstanceForEntityIdentity  (line 9, @0x00000000030cbf00, libserver.so)  // inlines: GetInstance
CEntityInstance *__fastcall GetEntityInstanceForEntityIdentity(CEntityIdentity *pEntity)
{
  if ( pEntity != 0 )
    return pEntity->m_pInstance;
  else
    return 0;
}


// GetEntityInstanceForEntityIdentity  (line 14, @0x00000000030cbf20, libserver.so)  // inlines: GetInstance
CEntityInstance *__fastcall GetEntityInstanceForEntityIdentity(const CEntityIdentity *pEntity)
{
  if ( pEntity != 0 )
    return pEntity->m_pInstance;
  else
    return 0;
}


// GetEntityIdentityForEntityInstance  (line 19, @0x00000000030cbf40, libserver.so)
CEntityIdentity *__fastcall GetEntityIdentityForEntityInstance(CEntityInstance *pEntity)
{
  return pEntity->m_pEntity;
}


// GetEntityIdentityForEntityInstance  (line 24, @0x00000000030cbf50, libserver.so)
CEntityIdentity *__fastcall GetEntityIdentityForEntityInstance(const CEntityInstance *pEntity)
{
  return pEntity->m_pEntity;
}


// GetNetworkSerializerForEntityInstance  (line 29, @0x00000000030cbf60, libserver.so)  // inlines: GetNetworkSerializer
// callers: CBaseAnimatingOverlayController::RemoveOverlays, CBaseAnimatingOverlayController::UpdateOnRemove, CBaseAnimatingOverlayController::AddOverlays, CBaseAnimatingOverlayController::SetNumAnimOverlays, CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1>::Resolve, CDOTA_DataNonSpectator::ChangeTeam, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState, CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked, CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::AssignPathIdToElement (49 total)
FlattenedSerializerHandle_t __fastcall GetNetworkSerializerForEntityInstance(CEntityInstance *pEntity)
{
  return pEntity->m_pEntity->m_pClass->m_hNetworkSerializer;
}


// EntityInstanceAddChangeAccessorPath  (line 34, @0x00000000030cbf80, libserver.so)
// callers: CBaseAnimatingOverlayController::RemoveOverlays, CBaseAnimatingOverlayController::AddOverlays, CBaseAnimatingOverlayController::SetNumAnimOverlays, CDOTA_DataNonSpectator::ChangeTeam, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState, CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked, CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::OnChainPropagationChange, CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>::AssignPathIdToElement, CDOTAGamerules::LoadStockInformation, CDOTAGamerules::ClientMsg_HeroStatueLike (35 total)
ChangeAccessorFieldPathIndex_t __fastcall EntityInstanceAddChangeAccessorPath(
        CEntityInstance *pEntity,
        const CFieldPath *const path)
{
  return (*(pEntity->_vptr_IHandleEntity + 24))(pEntity, path);
}


// EntityInstanceSetNetworkStateChanged  (line 39, @0x00000000030cbf90, libserver.so)
// callers: CBaseAnimatingOverlayController::RemoveOverlays, CBaseAnimatingOverlayController::UpdateOnRemove, CBaseAnimatingOverlayController::AddOverlays, CBaseAnimatingOverlayController::SetNumAnimOverlays, CDOTA_DataNonSpectator::Reset, CDOTA_DataNonSpectator::ChangeTeam, CDOTAFogOfWarTempViewers::CDOTAFogOfWarTempViewers, CDOTAGamerules::CreateItemStockInfo, CDOTAGamerules::LoadStockInformation, CDOTAGamerules::ClientMsg_HeroStatueLike, CDOTAFogOfWarTempViewers::AddTempViewer, CDOTAGamerules::HeroPickState_Enter_AP_SELECT (30 total)
void __fastcall EntityInstanceSetNetworkStateChanged(CEntityInstance *pEntity)
{
  (*(pEntity->_vptr_IHandleEntity + 21))(pEntity);
}


