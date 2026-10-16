// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/point_clientui_world_panel.cpp:22
class C_CPointClientUIWorldPanel_MapInstall {
	C_CPointClientUIWorldPanel_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_point_clientui_world_panel.cpp  (line 0, @0x000000000199c3e0, libserver.so)  // inlines: CFieldPathHuffmanEncoder, CHeadLookParams, CUtlHash, CUtlMemory, CUtlStack, CUtlStringToken, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CVariantBase, C_CPointClientUIWorldPanel_MapInstall, Color, IntVector2D, InterpolatedVarLatchList_t, Purge, RemoveAll, ResetDbgInfo, ServerToClientMap_t, SetColor, SetGrowSize, State_t, Vector2D, _Alloc_hider, __static_initialization_and_destruction_0, __static_initialization_and_destruction_1, basic_string, item_definition_index_t, operator[], style_index_t, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed, ~InterpolatedVarLatchList_t
// calls: CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, int> >::SetCount, CUtlVectorBase<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >::SetCount, __cxa_atexit, AddServerToClientClassMapping, DataMapInit<CPointClientUIWorldPanel>, __cxa_guard_acquire, __cxa_guard_release, CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, int> >::~CUtlVectorBase, CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs>::Purge, _Unwind_Resume, CUtlMemory<int, int>::Purge (13 total)
// strings: "CPointClientUIWorldPanel"
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'g_HuffmanEncoder, `guard variable for'CEntityKeyValues::sm_EmptyVariant, `guard variable for'g_AnimOpSourceColors, g_AnimOpSourceColors, `guard variable for'g_EntAttrDamageOptionsID, g_EntAttrDamageOptionsID, `guard variable for'IWrappedInterpolatedVar::s_WrappedInterpolatedVarState (38 total)
void __cdecl GLOBAL__sub_I_point_clientui_world_panel_cpp()
{
  CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,int> > *v0; // r15
  CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,int> >::CAllocator *p_m_Memory; // r13
  CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,int> > *v2; // r12
  __int64 v3; // r14
  __int64 j; // rbx
  __int64 v5; // rax
  datamap_t *v6; // rax
  __int64 i; // [rsp+8h] [rbp-38h]

  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  // init once: g_HuffmanEncoder
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
  // init once: CEntityKeyValues::sm_EmptyVariant
  CEntityKeyValues::sm_EmptyVariant.m_type = 0;
  CEntityKeyValues::sm_EmptyVariant.m_flags = 0;
  CEntityKeyValues::sm_EmptyVariant.m_uint64 = 0;
  __cxa_atexit(CVariantBase<CEntityVariantAllocator>::~CVariantBase, &CEntityKeyValues::sm_EmptyVariant, &_dso_handle);
  // init once: g_AnimOpSourceColors
  g_AnimOpSourceColors[0]._color[0] = -1;
  g_AnimOpSourceColors[0]._color[1] = -1;
  g_AnimOpSourceColors[0]._color[2] = 0;
  g_AnimOpSourceColors[0]._color[3] = -1;
  g_AnimOpSourceColors[1]._color[0] = -36;
  g_AnimOpSourceColors[1]._color[1] = -36;
  g_AnimOpSourceColors[1]._color[2] = -36;
  g_AnimOpSourceColors[1]._color[3] = -1;
  g_AnimOpSourceColors[2]._color[0] = 0;
  g_AnimOpSourceColors[2]._color[1] = -1;
  g_AnimOpSourceColors[2]._color[2] = 50;
  g_AnimOpSourceColors[2]._color[3] = -1;
  g_AnimOpSourceColors[3]._color[0] = -1;
  g_AnimOpSourceColors[3]._color[1] = 50;
  g_AnimOpSourceColors[3]._color[2] = 50;
  g_AnimOpSourceColors[3]._color[3] = -1;
  // init once: g_EntAttrDamageOptionsID
  g_EntAttrDamageOptionsID.m_nHashCode = -1517776886;
  // init once: IWrappedInterpolatedVar::s_WrappedInterpolatedVarState
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_pMemory = 0;
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_nAllocationCount = 0;
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_nGrowSize = 0;
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Size = 0;
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_pElements = 0;
  __cxa_atexit(
    IWrappedInterpolatedVar::State_t::~State_t,
    &IWrappedInterpolatedVar::s_WrappedInterpolatedVarState,
    &_dso_handle);
  // init once: IWrappedInterpolatedVar::s_LatchList
  v0 = &IWrappedInterpolatedVar::s_LatchList;
  for ( i = 1; i != -1; --i )
  {
    p_m_Memory = &v0->m_Memory;
    v2 = v0;
    v3 = 1;
    do
    {
      v2->m_Size = 0;
      p_m_Memory->m_pMemory = 0;
      p_m_Memory->m_nAllocationCount = 0;
      p_m_Memory->m_nGrowSize = 0;
      CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int>>,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int>>,int>>::SetCount(
        v2,
        1024);
      for ( j = 0; j != 1024; ++j )
      {
        CUtlVectorBase<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int>>::SetCount(
          &v2->m_Memory.m_pMemory[j],
          0);
        v5 = j * 24;
        *(&v2->m_Memory.m_pMemory->m_Memory.m_nGrowSize + v5) &= 0xC0000000;
      }
      --v3;
      BYTE2(v2[1].m_Size) = 1;
      p_m_Memory += 2;
      *(&v2[1].m_Size + 1) = 1023;
      v2 = (v2 + 32);
    }
    while ( v3 != -1 );
    v0 = (v0 + 64);
  }
  __cxa_atexit(_tcf_0_27, 0, &_dso_handle);
  INVALID_STYLE_INDEX.m_Data = -1;
  DEFAULT_STYLE_INDEX.m_Data = 0;
  ITEM_DEF_INDEX_TEST_DEFINITIONS_COUNT.m_Data = 1500;
  ITEM_DEF_INDEX_TEST_DEFINITIONS_FIRST_VALID.m_Data = -1536;
  INVALID_ITEM_DEF_INDEX.m_Data = 0;
  ITEM_DEF_INDEX_TEST_DEFINITIONS_LAST_VALID.m_Data = -37;
  DOTA_DESIRED_WARD_PLACEMENT_INVALID.x = -1.0;
  DOTA_DESIRED_WARD_PLACEMENT_INVALID.y = -1.0;
  INT_VECTOR2_ORIGIN.x = 0;
  INT_VECTOR2_ORIGIN.y = 0;
  // init once: CHeadLookParams::ms_Defaults
  CHeadLookParams::ms_Defaults.m_LookPriority = CHeadLookParams::HeadLookPriority_t::BORING;
  CHeadLookParams::ms_Defaults.m_flLookDuration = 0.0;
  CHeadLookParams::ms_Defaults.m_pReplyWhenAimed = 0;
  CHeadLookParams::ms_Defaults.m_pReasonStr = 0;
  CHeadLookParams::ms_Defaults.m_bWaitForSteady = 1;
  CHeadLookParams::ms_Defaults.m_flEaseInTime = 0.25;
  INVALID_CUSTOM_PLAYER_COLOR._color[0] = 0;
  INVALID_CUSTOM_PLAYER_COLOR._color[1] = 0;
  INVALID_CUSTOM_PLAYER_COLOR._color[2] = 0;
  INVALID_CUSTOM_PLAYER_COLOR._color[3] = 0;
  if ( `guard variable for'C_CPointClientUIWorldPanel_MapInstall::C_CPointClientUIWorldPanel_MapInstall(void)::CPointClientUIWorldPanel_mapping == 0
    && __cxa_guard_acquire(&`guard variable for'C_CPointClientUIWorldPanel_MapInstall::C_CPointClientUIWorldPanel_MapInstall(void)::CPointClientUIWorldPanel_mapping) != 0 )
  {
    C_CPointClientUIWorldPanel_MapInstall::C_CPointClientUIWorldPanel_MapInstall(void)::CPointClientUIWorldPanel_mapping.m_pNext = 0;
    C_CPointClientUIWorldPanel_MapInstall::C_CPointClientUIWorldPanel_MapInstall(void)::CPointClientUIWorldPanel_mapping.m_pClient = "CPointClientUIWorldPanel";
    C_CPointClientUIWorldPanel_MapInstall::C_CPointClientUIWorldPanel_MapInstall(void)::CPointClientUIWorldPanel_mapping.m_pServer = "CPointClientUIWorldPanel";
    __cxa_guard_release(&`guard variable for'C_CPointClientUIWorldPanel_MapInstall::C_CPointClientUIWorldPanel_MapInstall(void)::CPointClientUIWorldPanel_mapping);
  }
  AddServerToClientClassMapping(&C_CPointClientUIWorldPanel_MapInstall::C_CPointClientUIWorldPanel_MapInstall(void)::CPointClientUIWorldPanel_mapping);
  v6 = DataMapInit<CPointClientUIWorldPanel>(0);
  g_vecUIWorldPanels.m_Size = 0;
  CPointClientUIWorldPanel_DataDescInit::g_DataMapHolder = v6;
  g_vecUIWorldPanels.m_Memory.m_pMemory = 0;
  g_vecUIWorldPanels.m_Memory.m_nAllocationCount = 0;
  g_vecUIWorldPanels.m_Memory.m_nGrowSize = 0;
  __cxa_atexit(
    CUtlVector<CHandle<CPointClientUIWorldPanel>,CUtlMemory<CHandle<CPointClientUIWorldPanel>,int>>::~CUtlVector,
    &g_vecUIWorldPanels,
    &_dso_handle);
  // init once: CNetMessagePB<353,CDOTAClientMsg_EventPointsTip,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName
  CNetMessagePB<353,CDOTAClientMsg_EventPointsTip,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
  __cxa_atexit(
    &std::string::~string,
    &CNetMessagePB<353,CDOTAClientMsg_EventPointsTip,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName,
    &_dso_handle);
  // init once: CNetMessagePB<349,CDOTAClientMsg_CoinWager,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName
  CNetMessagePB<349,CDOTAClientMsg_CoinWager,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
  __cxa_atexit(
    &std::string::~string,
    &CNetMessagePB<349,CDOTAClientMsg_CoinWager,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName,
    &_dso_handle);
}


// CPointClientUIWorldPanel::YouForgotToImplementOrDeclareServerClass  (line 22, @0x0000000001b52720, libserver.so)
int __fastcall CPointClientUIWorldPanel::YouForgotToImplementOrDeclareServerClass(CPointClientUIWorldPanel *const this)
{
  return 0;
}


// CPointClientUIWorldPanel::GetServerClass  (line 22, @0x0000000001b52b10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPointClientUIWorldPanel::GetServerClass(CPointClientUIWorldPanel *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CPointClientUIWorldPanel::GetDataDescMap  (line 25, @0x0000000001b52730, libserver.so)
// globals: CPointClientUIWorldPanel::m_DataMap
datamap_t *__fastcall CPointClientUIWorldPanel::GetDataDescMap(CPointClientUIWorldPanel *const this)
{
  return &CPointClientUIWorldPanel::m_DataMap;
}


// CPointClientUIWorldPanel::AddDatadescMetadataKeys  (line 25, @0x0000000001b52b60, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointClientUIWorldPanel::GetEntityClass(void)
void __fastcall CPointClientUIWorldPanel::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointClientUIWorldPanel::GetEntityClass);
}


// CPointClientUIWorldPanel::GetBaseMap  (line 25, @0x0000000001b52b80, libserver.so)
datamap_t *__cdecl CPointClientUIWorldPanel::GetBaseMap()
{
  return &CBaseClientUIEntity::m_DataMap;
}


// DataMapInit<CPointClientUIWorldPanel>  (line 25, @0x0000000001b52b90, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses> >
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I_point_clientui_world_panel.cpp
// strings: "CPointClientUIWorldPanel"
// globals: `guard variable for'DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::nameHolder, `guard variable for'DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::dataDesc, CPointClientUIWorldPanel::GetEntityClass(void), CPointClientUIWorldPanel::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<2>::GetDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>>, CUtlVectorDataopsInstantiator<2>::GetDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>>(CNetworkUtlVectorBa, DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::nameHolder, __dso_handle (9 total)
datamap_t *__fastcall DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::nameHolder) != 0 )
  {
    DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::nameHolder.m_pszBase = "CPointClientUIWorldPanel";
    DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::nameHolder.m_nLenBase = 24;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::nameHolder,
      &_dso_handle);
  }
  CPointClientUIWorldPanel::m_DataMap.baseMap = &CBaseClientUIEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<2>::GetDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>>(CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<2>::GetDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>>(CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<2>::GetDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>>(CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1> *)::ops = off_3F7D490;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<2>::GetDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>>(CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1> *)::ops);
    }
    DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::dataDesc[13].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<2>::GetDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>>(CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::dataDesc);
  }
  CPointClientUIWorldPanel::m_DataMap.dataNumFields = 20;
  CPointClientUIWorldPanel::m_DataMap.dataDesc = &DataMapInit<CPointClientUIWorldPanel>(CPointClientUIWorldPanel *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointClientUIWorldPanel::m_DataMap, CPointClientUIWorldPanel::GetEntityClass);
  return &CPointClientUIWorldPanel::m_DataMap;
}


// CPointClientUIWorldPanel::CPointClientUIWorldPanel  (line 55, @0x0000000001b52cf0, libserver.so)  // inlines: CNetworkUtlVectorBase, CNetworkUtlVector_MemoryType, CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<unsigned int>, NetworkStateChanged, Purge, RemoveAll, Set, operator=<bool>, operator=<float>, operator=<unsigned int>, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseClientUIEntity::CBaseClientUIEntity, CBaseEntity::NetworkStateChanged, CBaseClientUIEntity::~CBaseClientUIEntity, _Unwind_Resume, CUtlMemory<CUtlSymbolLarge, int>::Purge
// callers: CPointClientUIWorldTextPanel::CPointClientUIWorldTextPanel, CPointClientUIWorldPanel::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPointClientUIWorldPanel::CPointClientUIWorldPanel(CPointClientUIWorldPanel *const this)
{
  float m_Value; // xmm0_4

  CBaseClientUIEntity::CBaseClientUIEntity(this);
  this->_vptr_IHandleEntity = &off_3F7CDB0;
  this->m_bIgnoreInput.m_Value = 0;
  this->m_bFollowPlayerAcrossTeleport.m_Value = 0;
  this->m_flWidth.m_Value = 0.0;
  this->m_flHeight.m_Value = 0.0;
  this->m_flDPI.m_Value = 0.0;
  this->m_flInteractDistance.m_Value = 0.0;
  this->m_flDepthOffset.m_Value = 0.0;
  this->m_unOwnerContext.m_Value = 0;
  this->m_unHorizontalAlign.m_Value = 0;
  this->m_unVerticalAlign.m_Value = 0;
  this->m_unOrientation.m_Value = 0;
  this->m_bAllowInteractionFromAllSceneWorlds.m_Value = 0;
  this->m_vecCSSClasses.m_Vector.m_Size = 0;
  this->m_vecCSSClasses.m_Vector.m_Memory.m_pMemory = 0;
  this->m_vecCSSClasses.m_Vector.m_Memory.m_nAllocationCount = 0;
  this->m_vecCSSClasses.m_Vector.m_Memory.m_nGrowSize = 0;
  this->m_bOpaque.m_Value = 0;
  this->m_bNoDepth.m_Value = 0;
  this->m_bRenderBackface.m_Value = 0;
  CBaseEntity::NetworkStateChanged(this, 0x59Cu, -1, -1);
  m_Value = this->m_flDPI.m_Value;
  this->m_flDepthOffset.m_Value = 0.125;
  if ( m_Value != 32.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1428, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flDPI.m_Value = 32.0;
  }
  if ( this->m_flInteractDistance.m_Value != 8.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1432, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flInteractDistance.m_Value = 8.0;
  }
  if ( this->m_unOwnerContext.m_Value != -1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1440, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_unOwnerContext.m_Value = -1;
  }
  if ( this->m_bFollowPlayerAcrossTeleport.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1417, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bFollowPlayerAcrossTeleport.m_Value = 0;
  }
  if ( this->m_bOpaque.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1488, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bOpaque.m_Value = 0;
  }
  if ( this->m_bNoDepth.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1489, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bNoDepth.m_Value = 0;
  }
  if ( !this->m_bRenderBackface.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1490, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bRenderBackface.m_Value = 1;
  }
}


// CPointClientUIWorldPanel::Spawn  (line 72, @0x0000000001b53aa0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CPointClientUIWorldPanel> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[]
// calls: CBaseEntity::Spawn, CUtlMemory<CHandle<CPointClientUIWorldPanel>, int>::Grow
// globals: g_vecUIWorldPanels
void __fastcall CPointClientUIWorldPanel::Spawn(
        CPointClientUIWorldPanel *const this,
        const CEntityKeyValues *pKeyValues)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  __int64 m_Size; // rbx
  int v6; // eax
  CHandle<CPointClientUIWorldPanel> *v7; // rax
  int v8; // [rsp+0h] [rbp-20h]

  CBaseEntity::Spawn(this, pKeyValues);
  v8 = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v8 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  m_Size = g_vecUIWorldPanels.m_Size;
  v6 = g_vecUIWorldPanels.m_Size;
  if ( g_vecUIWorldPanels.m_Size == g_vecUIWorldPanels.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CPointClientUIWorldPanel>,int>::Grow(&g_vecUIWorldPanels.m_Memory, 1);
    v6 = g_vecUIWorldPanels.m_Size;
  }
  g_vecUIWorldPanels.m_Size = v6 + 1;
  v7 = &g_vecUIWorldPanels.m_Memory.m_pMemory[m_Size];
  if ( v7 != 0 )
    v7->m_Index = v8;
}


// CPointClientUIWorldPanel::HasWorldUIPanelInSphere  (line 93, @0x0000000001b531c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LengthSqr, LookupEntity, VectorSubtract, operator CEntityInstance*, operator CPointClientUIWorldPanel*, operator-, operator[]
// calls: CUtlVectorBase<CHandle<CPointClientUIWorldPanel>, CUtlMemory<CHandle<CPointClientUIWorldPanel>, int> >::Remove, CPointClientUIWorldPanel::GetPanelCenter
// globals: g_vecUIWorldPanels, CEntityHandle::gm_pEntityList
CPointClientUIWorldPanel *__fastcall CPointClientUIWorldPanel::HasWorldUIPanelInSphere(
        double a1,
        float a2,
        float a3,
        float flRadius)
{
  int v4; // ebx
  __int64 v5; // r12
  CHandle<CPointClientUIWorldPanel> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CPointClientUIWorldPanel *m_pInstance; // r13
  float flRadiusa; // [rsp+0h] [rbp-4Ch]
  Vector PanelCenter; // 0:kr00_12.12

  flRadiusa = a3 * a3;
  v4 = g_vecUIWorldPanels.m_Size - 1;
  v5 = g_vecUIWorldPanels.m_Size - 1;
  if ( g_vecUIWorldPanels.m_Size - 1 >= 0 )
  {
    do
    {
      v6 = &g_vecUIWorldPanels.m_Memory.m_pMemory[v5];
      m_Index = g_vecUIWorldPanels.m_Memory.m_pMemory[v5].m_Index;
      if ( m_Index + 2 > 1
        && (v8 = v6->m_Index,
            (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F]) != 0)
        && (v10 = &v9[v8 & 0x1FF]) != 0
        && m_Index == v10->m_EHandle.m_Index
        && (m_pInstance = v10->m_pInstance, v10->m_pInstance != 0) )
      {
        PanelCenter = CPointClientUIWorldPanel::GetPanelCenter(v10->m_pInstance);
        if ( flRadiusa > ((((*&a1 - PanelCenter.x) * (*&a1 - PanelCenter.x))
                         + ((*(&a1 + 1) - PanelCenter.y) * (*(&a1 + 1) - PanelCenter.y)))
                        + ((a2 - PanelCenter.z) * (a2 - PanelCenter.z))) )
          return m_pInstance;
      }
      else
      {
        CUtlVectorBase<CHandle<CPointClientUIWorldPanel>,CUtlMemory<CHandle<CPointClientUIWorldPanel>,int>>::Remove(
          &g_vecUIWorldPanels,
          v4);
      }
      --v4;
      --v5;
    }
    while ( v4 != -1 );
  }
  return 0;
}


// CPointClientUIWorldPanel::UpdateTransmitState  (line 115, @0x0000000001b52740, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPointClientUIWorldPanel::UpdateTransmitState(CPointClientUIWorldPanel *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CPointClientUIWorldPanel::UpdateOnRemove  (line 122, @0x0000000001b532f0, libserver.so)  // inlines: CEntityHandle, CHandle, Find, FindAndRemove, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator==<CPointClientUIWorldPanel>
// calls: CBaseModelEntity::UpdateOnRemove, CUtlVectorBase<CHandle<CPointClientUIWorldPanel>, CUtlMemory<CHandle<CPointClientUIWorldPanel>, int> >::Remove
// globals: g_vecUIWorldPanels, CEntityHandle::gm_pEntityList
void __fastcall CPointClientUIWorldPanel::UpdateOnRemove(CPointClientUIWorldPanel *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  int v4; // esi
  CHandle<CPointClientUIWorldPanel> *i; // rax
  CEntityInstance *v6; // rcx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  int v12; // [rsp+0h] [rbp-30h]

  CBaseModelEntity::UpdateOnRemove(this);
  v12 = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v12 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  if ( g_vecUIWorldPanels.m_Size > 0 )
  {
    v4 = 0;
    for ( i = g_vecUIWorldPanels.m_Memory.m_pMemory; ; ++i )
    {
      m_pInstance = 0;
      if ( i->m_Index + 2 > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(i->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[i->m_Index & 0x1FF];
          if ( v11 != 0 && i->m_Index == v11->m_EHandle.m_Index )
            m_pInstance = v11->m_pInstance;
        }
      }
      v6 = 0;
      if ( (v12 + 2) > 1 )
      {
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v12 & 0x7FFF) >> 9];
        if ( v7 != 0 )
        {
          v8 = &v7[v12 & 0x1FF];
          if ( v8 != 0 && v8->m_EHandle.m_Index == v12 )
            v6 = v8->m_pInstance;
        }
      }
      if ( m_pInstance == v6 )
        break;
      if ( ++v4 == g_vecUIWorldPanels.m_Size )
        return;
    }
    CUtlVectorBase<CHandle<CPointClientUIWorldPanel>,CUtlMemory<CHandle<CPointClientUIWorldPanel>,int>>::Remove(
      &g_vecUIWorldPanels,
      v4);
  }
}


// CPointClientUIWorldPanel::GetPanelCenter  (line 137, @0x0000000001b52fe0, libserver.so)  // inlines: VectorMultiply, operator*, operator+=
// calls: CBaseEntity::GetAbsOrigin
// callers: CPointClientUIWorldPanel::HasWorldUIPanelInSphere
Vector __fastcall CPointClientUIWorldPanel::GetPanelCenter(CPointClientUIWorldPanel *const this)
{
  unsigned int m_Value; // eax
  float y; // xmm0_4
  float x; // xmm2_4
  float v6; // xmm3_4
  float v7; // xmm4_4
  unsigned int v8; // eax
  float v9; // xmm3_4
  float v10; // xmm4_4
  const Vector v12; // [rsp+4h] [rbp-6Ch]
  Vector vecForward; // [rsp+20h] [rbp-50h] BYREF
  Vector vecRight; // [rsp+30h] [rbp-40h] BYREF
  Vector vecUp; // [rsp+40h] [rbp-30h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v12 = *CBaseEntity::GetAbsOrigin(this);
  (*(this->_vptr_IHandleEntity + 61))(this, &vecForward, &vecRight, &vecUp);
  m_Value = this->m_unHorizontalAlign.m_Value;
  result.z = v12.z;
  y = v12.y;
  x = v12.x;
  if ( m_Value != 1 )
  {
    v6 = 0.5 * this->m_flWidth.m_Value;
    v7 = vecForward.x * v6;
    if ( m_Value == 2 )
    {
      x = v12.x - v7;
      y = v12.y - (vecForward.y * v6);
      result.z = v12.z - (v6 * vecForward.z);
    }
    else
    {
      x = v12.x + v7;
      y = v12.y + (vecForward.y * v6);
      result.z = v12.z + (v6 * vecForward.z);
    }
  }
  v8 = this->m_unVerticalAlign.m_Value;
  if ( v8 != 1 )
  {
    v9 = 0.5 * this->m_flHeight.m_Value;
    v10 = vecRight.x * v9;
    if ( v8 == 2 )
    {
      x = x + v10;
      y = y + (vecRight.y * v9);
      result.z = result.z + (v9 * vecRight.z);
    }
    else
    {
      x = x - v10;
      y = y - (vecRight.y * v9);
      result.z = result.z - (v9 * vecRight.z);
    }
  }
  *&result.x = __PAIR64__(LODWORD(y), LODWORD(x));
  return result;
}


// CPointClientUIWorldPanel::InputIgnoreUserInput  (line 416, @0x0000000001b53160, libserver.so)
// calls: CPointClientUIWorldPanel::IgnoreUserInput
void __fastcall CPointClientUIWorldPanel::InputIgnoreUserInput(
        CPointClientUIWorldPanel *const this,
        inputdata_t *const inputdata)
{
  CPointClientUIWorldPanel::IgnoreUserInput(this);
}


// CPointClientUIWorldPanel::InputAcceptUserInput  (line 423, @0x0000000001b531b0, libserver.so)
// calls: CPointClientUIWorldPanel::AcceptUserInput
void __fastcall CPointClientUIWorldPanel::InputAcceptUserInput(
        CPointClientUIWorldPanel *const this,
        inputdata_t *const inputdata)
{
  CPointClientUIWorldPanel::AcceptUserInput(this);
}


// CPointClientUIWorldPanel::InputAddCSSClass  (line 430, @0x0000000001b53ee0, libserver.so)  // inlines: AssignTo, String, StringID, TempString, ToString, VariantFieldTypeName
// calls: MakeEntitySystemString, CPointClientUIWorldPanel::AddCSSClasses, V_snprintf, Warning
// strings: "%g %g %g %g", "js_array", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false" (23 total)
// globals: jpt_1B53F11, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_1B541A8
void __fastcall CPointClientUIWorldPanel::InputAddCSSClass(
        CPointClientUIWorldPanel *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rsi
  const char *v6; // rsi
  const char *v7; // rcx
  double m_float; // xmm0_8
  char *pszClasses; // [rsp+10h] [rbp-20h]

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_11;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_22;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_14;
      case 6:
        v7 = "true";
        if ( inputdata->value.m_char == 0 )
          v7 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v7);
        goto LABEL_18;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_14;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_18;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_18:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_22:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_14:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        switch ( m_type )
        {
          case 0:
            v6 = "void";
            break;
          case 1:
            v6 = "float";
            break;
          case 3:
            v6 = "vector";
            break;
          case 4:
            v6 = "quaternion";
            break;
          case 5:
            v6 = "integer";
            break;
          case 6:
            v6 = "boolean";
            break;
          case 8:
            v6 = "character";
            break;
          case 9:
            v6 = "color";
            break;
          case 13:
            v6 = "ehandle";
            break;
          case 25:
            v6 = "vector2d";
            break;
          case 26:
            v6 = "int64";
            break;
          case 27:
            v6 = "vector4d";
            break;
          case 28:
            v6 = "resourcehandle";
            break;
          case 31:
            v6 = "hscript";
            break;
          case 32:
            v6 = "variant";
            break;
          case 33:
            v6 = "uint64";
            break;
          case 34:
            v6 = "float64";
            break;
          case 37:
            v6 = "unsigned";
            break;
          case 38:
            v6 = "utlstringtoken";
            break;
          case 39:
            v6 = "qangle";
            break;
          case 48:
            v6 = "hscript_lightbinding";
            break;
          case 49:
            v6 = "js_value";
            break;
          case 50:
            v6 = "js_object";
            break;
          case 51:
            v6 = "js_array";
            break;
          case 52:
            v6 = "js_raw_args";
            break;
          default:
            v6 = "unknown_variant_type";
            break;
        }
        Warning("No conversion from %s to string at the moment!\n", v6);
LABEL_11:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  v5 = "";
  if ( pszClasses != 0 )
    v5 = pszClasses;
  CPointClientUIWorldPanel::AddCSSClasses(this, v5);
}


// CPointClientUIWorldPanel::InputRemoveCSSClass  (line 437, @0x0000000001b536a0, libserver.so)  // inlines: AssignTo, String, StringID, TempString, ToString, VariantFieldTypeName
// calls: MakeEntitySystemString, CPointClientUIWorldPanel::RemoveCSSClasses, V_snprintf, Warning
// strings: "%g %g %g %g", "js_array", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false" (23 total)
// globals: jpt_1B536D1, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_1B53968
void __fastcall CPointClientUIWorldPanel::InputRemoveCSSClass(
        CPointClientUIWorldPanel *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rsi
  const char *v6; // rsi
  const char *v7; // rcx
  double m_float; // xmm0_8
  char *pszClasses; // [rsp+10h] [rbp-20h]

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_11;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_22;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_14;
      case 6:
        v7 = "true";
        if ( inputdata->value.m_char == 0 )
          v7 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v7);
        goto LABEL_18;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_14;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_18;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_18:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_22:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_14:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        switch ( m_type )
        {
          case 0:
            v6 = "void";
            break;
          case 1:
            v6 = "float";
            break;
          case 3:
            v6 = "vector";
            break;
          case 4:
            v6 = "quaternion";
            break;
          case 5:
            v6 = "integer";
            break;
          case 6:
            v6 = "boolean";
            break;
          case 8:
            v6 = "character";
            break;
          case 9:
            v6 = "color";
            break;
          case 13:
            v6 = "ehandle";
            break;
          case 25:
            v6 = "vector2d";
            break;
          case 26:
            v6 = "int64";
            break;
          case 27:
            v6 = "vector4d";
            break;
          case 28:
            v6 = "resourcehandle";
            break;
          case 31:
            v6 = "hscript";
            break;
          case 32:
            v6 = "variant";
            break;
          case 33:
            v6 = "uint64";
            break;
          case 34:
            v6 = "float64";
            break;
          case 37:
            v6 = "unsigned";
            break;
          case 38:
            v6 = "utlstringtoken";
            break;
          case 39:
            v6 = "qangle";
            break;
          case 48:
            v6 = "hscript_lightbinding";
            break;
          case 49:
            v6 = "js_value";
            break;
          case 50:
            v6 = "js_object";
            break;
          case 51:
            v6 = "js_array";
            break;
          case 52:
            v6 = "js_raw_args";
            break;
          default:
            v6 = "unknown_variant_type";
            break;
        }
        Warning("No conversion from %s to string at the moment!\n", v6);
LABEL_11:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  v5 = "";
  if ( pszClasses != 0 )
    v5 = pszClasses;
  CPointClientUIWorldPanel::RemoveCSSClasses(this, v5);
}


// CPointClientUIWorldPanel::IgnoreUserInput  (line 444, @0x0000000001b53120, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// callers: CPointClientUIWorldPanel::InputIgnoreUserInput
void __fastcall CPointClientUIWorldPanel::IgnoreUserInput(CPointClientUIWorldPanel *const this)
{
  if ( !this->m_bIgnoreInput.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1416, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIgnoreInput.m_Value = 1;
  }
}


// CPointClientUIWorldPanel::AcceptUserInput  (line 451, @0x0000000001b53170, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// callers: CPointClientUIWorldPanel::InputAcceptUserInput
void __fastcall CPointClientUIWorldPanel::AcceptUserInput(CPointClientUIWorldPanel *const this)
{
  if ( this->m_bIgnoreInput.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1416, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIgnoreInput.m_Value = 0;
  }
}


// CPointClientUIWorldPanel::AddCSSClasses  (line 458, @0x0000000001b53c20, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlSymbolLarge>, Element, Find, FindAndRemove, GrowMemory, IsValidIndex, NetworkStateChanged, Purge, PurgeAndDeleteElements, Remove, RemoveAll, ShiftElementsLeft, V_memmove, memmove, operator==, operator[], ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), AllocPooledString, CUtlMemory<CUtlSymbolLarge, int>::Grow, memmove, CUtlMemory<char*, int>::Purge, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CPointClientUIWorldPanel::InputAddCSSClass
void __fastcall CPointClientUIWorldPanel::AddCSSClasses(CPointClientUIWorldPanel *const this, const char *pszClasses)
{
  __int64 v3; // r15
  int v4; // r14d
  int m_Size; // r12d
  CUtlSymbolLarge *m_pMemory; // rcx
  CUtlSymbolLarge *v7; // rax
  int v8; // ebx
  int v9; // eax
  CUtlSymbolLarge *v10; // rax
  __int64 v11; // r12
  int v12; // ebx
  char *v13; // rsi
  int (**vptr_IHandleEntity)(...); // rax
  string_t s; // [rsp+20h] [rbp-60h]
  CUtlStringList vecClassNames; // [rsp+30h] [rbp-50h] BYREF

  vecClassNames.m_Size = 0;
  vecClassNames.m_Memory.m_pMemory = 0;
  vecClassNames.m_Memory.m_nAllocationCount = 0;
  vecClassNames.m_Memory.m_nGrowSize = 0;
  V_SplitString(pszClasses, " ", &vecClassNames);
  if ( vecClassNames.m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      AllocPooledString(vecClassNames.m_Memory.m_pMemory[v3]);
      m_Size = this->m_vecCSSClasses.m_Vector.m_Size;
      if ( m_Size > 0 )
      {
        m_pMemory = this->m_vecCSSClasses.m_Vector.m_Memory.m_pMemory;
        if ( m_pMemory->u.m_Id == s.u.m_Id )
        {
          v8 = 0;
LABEL_19:
          if ( m_Size - v8 - 1 > 0 )
          {
            memmove(&m_pMemory[v8], &m_pMemory[v8 + 1], 8LL * (m_Size - v8 - 1));
            m_Size = this->m_vecCSSClasses.m_Vector.m_Size;
          }
          vptr_IHandleEntity = this->_vptr_IHandleEntity;
          this->m_vecCSSClasses.m_Vector.m_Size = m_Size - 1;
          vptr_IHandleEntity[22](this, 1464, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          while ( 1 )
          {
            m_Size = this->m_vecCSSClasses.m_Vector.m_Size;
            if ( v8 >= m_Size )
              break;
            (*(this->_vptr_IHandleEntity + 22))(this, 1464, v8++, 0xFFFFFFFFLL);
          }
        }
        else
        {
          v7 = this->m_vecCSSClasses.m_Vector.m_Memory.m_pMemory;
          v8 = 0;
          while ( ++v8 != m_Size )
          {
            ++v7;
            if ( s.u.m_Id == v7->u.m_Id )
            {
              if ( v8 >= 0 )
                goto LABEL_19;
              break;
            }
          }
        }
      }
      v9 = m_Size;
      if ( m_Size == this->m_vecCSSClasses.m_Vector.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlSymbolLarge,int>::Grow(&this->m_vecCSSClasses.m_Vector.m_Memory, 1);
        v9 = this->m_vecCSSClasses.m_Vector.m_Size;
      }
      this->m_vecCSSClasses.m_Vector.m_Size = v9 + 1;
      v10 = &this->m_vecCSSClasses.m_Vector.m_Memory.m_pMemory[m_Size];
      if ( v10 != 0 )
        v10->u.m_Id = s.u.m_Id;
      (*(this->_vptr_IHandleEntity + 22))(this, 1464, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      (*(this->_vptr_IHandleEntity + 22))(this, 1464, m_Size, 0xFFFFFFFFLL);
      ++v4;
      ++v3;
    }
    while ( vecClassNames.m_Size > v4 );
    if ( vecClassNames.m_Size > 0 )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        ++v12;
        v13 = vecClassNames.m_Memory.m_pMemory[v11++];
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v13);
      }
      while ( v12 < vecClassNames.m_Size );
    }
  }
  vecClassNames.m_Size = 0;
  if ( (vecClassNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&vecClassNames.m_Memory);
    if ( (vecClassNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&vecClassNames.m_Memory);
  }
}


// CPointClientUIWorldPanel::RemoveCSSClasses  (line 474, @0x0000000001b53470, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, Element, Find, FindAndRemove, IsValidIndex, NetworkStateChanged, Purge, PurgeAndDeleteElements, Remove, RemoveAll, ShiftElementsLeft, V_memmove, memmove, operator==, operator[], ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), AllocPooledString, memmove, CUtlMemory<char*, int>::Purge, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CPointClientUIWorldPanel::InputRemoveCSSClass
void __fastcall CPointClientUIWorldPanel::RemoveCSSClasses(
        CPointClientUIWorldPanel *const this,
        const char *pszClasses)
{
  __int64 v3; // r13
  int v4; // r14d
  int m_Size; // edx
  CUtlSymbolLarge *m_pMemory; // rdi
  CUtlSymbolLarge *v7; // rax
  int v8; // ebx
  int v9; // eax
  __int64 v10; // r12
  int v11; // ebx
  char *v12; // rsi
  int (**vptr_IHandleEntity)(...); // rax
  string_t s; // [rsp+10h] [rbp-60h]
  CUtlStringList vecClassNames; // [rsp+20h] [rbp-50h] BYREF

  vecClassNames.m_Size = 0;
  vecClassNames.m_Memory.m_pMemory = 0;
  vecClassNames.m_Memory.m_nAllocationCount = 0;
  vecClassNames.m_Memory.m_nGrowSize = 0;
  V_SplitString(pszClasses, " ", &vecClassNames);
  if ( vecClassNames.m_Size <= 0 )
    goto LABEL_12;
  v3 = 0;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      AllocPooledString(vecClassNames.m_Memory.m_pMemory[v3]);
      m_Size = this->m_vecCSSClasses.m_Vector.m_Size;
      if ( m_Size > 0 )
      {
        m_pMemory = this->m_vecCSSClasses.m_Vector.m_Memory.m_pMemory;
        if ( m_pMemory->u.m_Id != s.u.m_Id )
        {
          v7 = this->m_vecCSSClasses.m_Vector.m_Memory.m_pMemory;
          v8 = 0;
          while ( ++v8 != m_Size )
          {
            ++v7;
            if ( v7->u.m_Id == s.u.m_Id )
            {
              if ( v8 >= 0 )
                goto LABEL_15;
              goto LABEL_8;
            }
          }
          goto LABEL_8;
        }
        v8 = 0;
LABEL_15:
        if ( m_Size - v8 - 1 > 0 )
        {
          memmove(&m_pMemory[v8], &m_pMemory[v8 + 1], 8LL * (m_Size - v8 - 1));
          m_Size = this->m_vecCSSClasses.m_Vector.m_Size;
        }
        vptr_IHandleEntity = this->_vptr_IHandleEntity;
        this->m_vecCSSClasses.m_Vector.m_Size = m_Size - 1;
        vptr_IHandleEntity[22](this, 1464, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        if ( v8 < this->m_vecCSSClasses.m_Vector.m_Size )
          break;
      }
LABEL_8:
      v9 = vecClassNames.m_Size;
      ++v4;
      ++v3;
      if ( vecClassNames.m_Size <= v4 )
        goto LABEL_9;
    }
    do
      (*(this->_vptr_IHandleEntity + 22))(this, 1464, v8++, 0xFFFFFFFFLL);
    while ( v8 < this->m_vecCSSClasses.m_Vector.m_Size );
    v9 = vecClassNames.m_Size;
    ++v4;
    ++v3;
  }
  while ( vecClassNames.m_Size > v4 );
LABEL_9:
  if ( v9 > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      ++v11;
      v12 = vecClassNames.m_Memory.m_pMemory[v10++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12);
    }
    while ( v11 < vecClassNames.m_Size );
  }
LABEL_12:
  vecClassNames.m_Size = 0;
  if ( (vecClassNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&vecClassNames.m_Memory);
    if ( (vecClassNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&vecClassNames.m_Memory);
  }
}


