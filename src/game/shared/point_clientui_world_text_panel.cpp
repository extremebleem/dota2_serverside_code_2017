// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/point_clientui_world_text_panel.cpp:32
class C_CPointClientUIWorldTextPanel_MapInstall {
	C_CPointClientUIWorldTextPanel_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_point_clientui_world_text_panel.cpp  (line 0, @0x000000000199ca20, libserver.so)  // inlines: CFieldPathHuffmanEncoder, CHeadLookParams, CUtlHash, CUtlMemory, CUtlStack, CUtlStringToken, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CVariantBase, C_CPointClientUIWorldTextPanel_MapInstall, Color, IntVector2D, InterpolatedVarLatchList_t, Purge, RemoveAll, ResetDbgInfo, ServerToClientMap_t, SetColor, SetGrowSize, State_t, Vector2D, _Alloc_hider, __static_initialization_and_destruction_0, __static_initialization_and_destruction_1, basic_string, item_definition_index_t, operator[], style_index_t, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed, ~InterpolatedVarLatchList_t
// calls: CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, int> >::SetCount, CUtlVectorBase<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >::SetCount, __cxa_atexit, DataMapInit<CPointClientUIWorldTextPanel>, AddServerToClientClassMapping, __cxa_guard_acquire, __cxa_guard_release, CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, int> >::~CUtlVectorBase, CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs>::Purge, _Unwind_Resume, CUtlMemory<int, int>::Purge (13 total)
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'g_HuffmanEncoder, `guard variable for'CEntityKeyValues::sm_EmptyVariant, `guard variable for'g_AnimOpSourceColors, g_AnimOpSourceColors, `guard variable for'g_EntAttrDamageOptionsID, g_EntAttrDamageOptionsID, `guard variable for'IWrappedInterpolatedVar::s_WrappedInterpolatedVarState (36 total)
void __cdecl GLOBAL__sub_I_point_clientui_world_text_panel_cpp()
{
  CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,int> > *v0; // r15
  CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,int> >::CAllocator *p_m_Memory; // r13
  CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,int> > *v2; // r12
  __int64 v3; // r14
  __int64 j; // rbx
  __int64 v5; // rax
  __int64 i; // [rsp+8h] [rbp-38h]

  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
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
  if ( `guard variable for'CEntityKeyValues::sm_EmptyVariant == 0 )
  {
    `guard variable for'CEntityKeyValues::sm_EmptyVariant = 1;
    CEntityKeyValues::sm_EmptyVariant.m_type = 0;
    CEntityKeyValues::sm_EmptyVariant.m_flags = 0;
    CEntityKeyValues::sm_EmptyVariant.m_uint64 = 0;
    __cxa_atexit(CVariantBase<CEntityVariantAllocator>::~CVariantBase, &CEntityKeyValues::sm_EmptyVariant, &_dso_handle);
  }
  if ( `guard variable for'g_AnimOpSourceColors == 0 )
  {
    `guard variable for'g_AnimOpSourceColors = 1;
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
  }
  if ( `guard variable for'g_EntAttrDamageOptionsID == 0 )
  {
    `guard variable for'g_EntAttrDamageOptionsID = 1;
    g_EntAttrDamageOptionsID.m_nHashCode = -1517776886;
  }
  if ( `guard variable for'IWrappedInterpolatedVar::s_WrappedInterpolatedVarState == 0 )
  {
    `guard variable for'IWrappedInterpolatedVar::s_WrappedInterpolatedVarState = 1;
    IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_pMemory = 0;
    IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_nAllocationCount = 0;
    IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_nGrowSize = 0;
    IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Size = 0;
    IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_pElements = 0;
    __cxa_atexit(
      IWrappedInterpolatedVar::State_t::~State_t,
      &IWrappedInterpolatedVar::s_WrappedInterpolatedVarState,
      &_dso_handle);
  }
  if ( `guard variable for'IWrappedInterpolatedVar::s_LatchList == 0 )
  {
    `guard variable for'IWrappedInterpolatedVar::s_LatchList = 1;
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
    __cxa_atexit(_tcf_0_28, 0, &_dso_handle);
  }
  INVALID_STYLE_INDEX.m_Data = -1;
  ITEM_DEF_INDEX_TEST_DEFINITIONS_COUNT.m_Data = 1500;
  ITEM_DEF_INDEX_TEST_DEFINITIONS_FIRST_VALID.m_Data = -1536;
  DEFAULT_STYLE_INDEX.m_Data = 0;
  INVALID_ITEM_DEF_INDEX.m_Data = 0;
  ITEM_DEF_INDEX_TEST_DEFINITIONS_LAST_VALID.m_Data = -37;
  DOTA_DESIRED_WARD_PLACEMENT_INVALID.x = -1.0;
  DOTA_DESIRED_WARD_PLACEMENT_INVALID.y = -1.0;
  INT_VECTOR2_ORIGIN.x = 0;
  INT_VECTOR2_ORIGIN.y = 0;
  if ( `guard variable for'CHeadLookParams::ms_Defaults == 0 )
  {
    `guard variable for'CHeadLookParams::ms_Defaults = 1;
    CHeadLookParams::ms_Defaults.m_LookPriority = CHeadLookParams::HeadLookPriority_t::BORING;
    CHeadLookParams::ms_Defaults.m_flLookDuration = 0.0;
    CHeadLookParams::ms_Defaults.m_pReplyWhenAimed = 0;
    CHeadLookParams::ms_Defaults.m_pReasonStr = 0;
    CHeadLookParams::ms_Defaults.m_bWaitForSteady = 1;
    CHeadLookParams::ms_Defaults.m_flEaseInTime = 0.25;
  }
  INVALID_CUSTOM_PLAYER_COLOR._color[0] = 0;
  INVALID_CUSTOM_PLAYER_COLOR._color[1] = 0;
  INVALID_CUSTOM_PLAYER_COLOR._color[2] = 0;
  INVALID_CUSTOM_PLAYER_COLOR._color[3] = 0;
  CPointClientUIWorldTextPanel_DataDescInit::g_DataMapHolder = DataMapInit<CPointClientUIWorldTextPanel>(0);
  if ( `guard variable for'C_CPointClientUIWorldTextPanel_MapInstall::C_CPointClientUIWorldTextPanel_MapInstall(void)::CPointClientUIWorldTextPanel_mapping == 0
    && __cxa_guard_acquire(&`guard variable for'C_CPointClientUIWorldTextPanel_MapInstall::C_CPointClientUIWorldTextPanel_MapInstall(void)::CPointClientUIWorldTextPanel_mapping) != 0 )
  {
    C_CPointClientUIWorldTextPanel_MapInstall::C_CPointClientUIWorldTextPanel_MapInstall(void)::CPointClientUIWorldTextPanel_mapping.m_pNext = 0;
    C_CPointClientUIWorldTextPanel_MapInstall::C_CPointClientUIWorldTextPanel_MapInstall(void)::CPointClientUIWorldTextPanel_mapping.m_pClient = &flLerp.y;
    C_CPointClientUIWorldTextPanel_MapInstall::C_CPointClientUIWorldTextPanel_MapInstall(void)::CPointClientUIWorldTextPanel_mapping.m_pServer = &flLerp.y;
    __cxa_guard_release(&`guard variable for'C_CPointClientUIWorldTextPanel_MapInstall::C_CPointClientUIWorldTextPanel_MapInstall(void)::CPointClientUIWorldTextPanel_mapping);
  }
  AddServerToClientClassMapping(&C_CPointClientUIWorldTextPanel_MapInstall::C_CPointClientUIWorldTextPanel_MapInstall(void)::CPointClientUIWorldTextPanel_mapping);
  if ( `guard variable for'CNetMessagePB<353,CDOTAClientMsg_EventPointsTip,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName == 0 )
  {
    `guard variable for'CNetMessagePB<353,CDOTAClientMsg_EventPointsTip,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName = 1;
    CNetMessagePB<353,CDOTAClientMsg_EventPointsTip,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
    __cxa_atexit(
      &std::string::~string,
      &CNetMessagePB<353,CDOTAClientMsg_EventPointsTip,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName,
      &_dso_handle);
  }
  if ( `guard variable for'CNetMessagePB<349,CDOTAClientMsg_CoinWager,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName == 0 )
  {
    `guard variable for'CNetMessagePB<349,CDOTAClientMsg_CoinWager,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName = 1;
    CNetMessagePB<349,CDOTAClientMsg_CoinWager,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
    __cxa_atexit(
      &std::string::~string,
      &CNetMessagePB<349,CDOTAClientMsg_CoinWager,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName,
      &_dso_handle);
  }
}


// CPointClientUIWorldTextPanel::GetDataDescMap  (line 24, @0x0000000001b54a60, libserver.so)
// globals: CPointClientUIWorldTextPanel::m_DataMap
datamap_t *__fastcall CPointClientUIWorldTextPanel::GetDataDescMap(CPointClientUIWorldTextPanel *const this)
{
  return &CPointClientUIWorldTextPanel::m_DataMap;
}


// CPointClientUIWorldTextPanel::AddDatadescMetadataKeys  (line 24, @0x0000000001b54e40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointClientUIWorldTextPanel::GetEntityClass(void)
void __fastcall CPointClientUIWorldTextPanel::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointClientUIWorldTextPanel::GetEntityClass);
}


// CPointClientUIWorldTextPanel::GetBaseMap  (line 24, @0x0000000001b54e60, libserver.so)
datamap_t *__cdecl CPointClientUIWorldTextPanel::GetBaseMap()
{
  return &CPointClientUIWorldPanel::m_DataMap;
}


// DataMapInit<CPointClientUIWorldTextPanel>  (line 24, @0x0000000001b54e70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I_point_clientui_world_text_panel.cpp
// globals: `guard variable for'DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *)::nameHolder, CPointClientUIWorldTextPanel::GetEntityClass(void), CPointClientUIWorldTextPanel::m_DataMap, DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *)::nameHolder) != 0 )
  {
    DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *)::nameHolder.m_pszBase = &flLerp.y;
    DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *)::nameHolder.m_nLenBase = 28;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *)::nameHolder,
      &_dso_handle);
  }
  CPointClientUIWorldTextPanel::m_DataMap.dataNumFields = 3;
  CPointClientUIWorldTextPanel::m_DataMap.baseMap = &CPointClientUIWorldPanel::m_DataMap;
  CPointClientUIWorldTextPanel::m_DataMap.dataDesc = &DataMapInit<CPointClientUIWorldTextPanel>(CPointClientUIWorldTextPanel *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointClientUIWorldTextPanel::m_DataMap, CPointClientUIWorldTextPanel::GetEntityClass);
  return &CPointClientUIWorldTextPanel::m_DataMap;
}


// CPointClientUIWorldTextPanel::YouForgotToImplementOrDeclareServerClass  (line 32, @0x0000000001b54a70, libserver.so)
int __fastcall CPointClientUIWorldTextPanel::YouForgotToImplementOrDeclareServerClass(
        CPointClientUIWorldTextPanel *const this)
{
  return 0;
}


// CPointClientUIWorldTextPanel::GetServerClass  (line 32, @0x0000000001b54e00, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPointClientUIWorldTextPanel::GetServerClass(CPointClientUIWorldTextPanel *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CPointClientUIWorldTextPanel::CPointClientUIWorldTextPanel  (line 38, @0x0000000001b54f40, libserver.so)
// calls: CPointClientUIWorldPanel::CPointClientUIWorldPanel
// callers: CPointClientUIWorldTextPanel::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPointClientUIWorldTextPanel::CPointClientUIWorldTextPanel(CPointClientUIWorldTextPanel *const this)
{
  CPointClientUIWorldPanel::CPointClientUIWorldPanel(this);
  this->_vptr_IHandleEntity = &off_3F7D4F0;
}


// CPointClientUIWorldTextPanel::InputSetMessage  (line 74, @0x0000000001b55130, libserver.so)  // inlines: AssignTo, TempString, ToString, VariantFieldTypeName
// calls: CPointClientUIWorldTextPanel::SetMessage, V_snprintf, Warning
// strings: "%g %g %g %g", "js_array", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false" (23 total)
// globals: jpt_1B55161, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_1B553E8
void __fastcall CPointClientUIWorldTextPanel::InputSetMessage(
        CPointClientUIWorldTextPanel *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rsi
  const char *v6; // rcx
  double m_float; // xmm0_8

  m_type = inputdata->value.m_type;
  if ( m_type != 30 )
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_9;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_20;
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
        goto LABEL_4;
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
        goto LABEL_4;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_12;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_12;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_12;
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
        goto LABEL_4;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_12;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
        goto LABEL_12;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_20:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_12:
        CPointClientUIWorldTextPanel::SetMessage(
          this,
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf);
        return;
      default:
        switch ( m_type )
        {
          case 0:
            v5 = "void";
            break;
          case 1:
            v5 = "float";
            break;
          case 3:
            v5 = "vector";
            break;
          case 4:
            v5 = "quaternion";
            break;
          case 5:
            v5 = "integer";
            break;
          case 6:
            v5 = "boolean";
            break;
          case 8:
            v5 = "character";
            break;
          case 9:
            v5 = "color";
            break;
          case 13:
            v5 = "ehandle";
            break;
          case 25:
            v5 = "vector2d";
            break;
          case 26:
            v5 = "int64";
            break;
          case 27:
            v5 = "vector4d";
            break;
          case 28:
            v5 = "resourcehandle";
            break;
          case 31:
            v5 = "hscript";
            break;
          case 32:
            v5 = "variant";
            break;
          case 33:
            v5 = "uint64";
            break;
          case 34:
            v5 = "float64";
            break;
          case 37:
            v5 = "unsigned";
            break;
          case 38:
            v5 = "utlstringtoken";
            break;
          case 39:
            v5 = "qangle";
            break;
          case 48:
            v5 = "hscript_lightbinding";
            break;
          case 49:
            v5 = "js_value";
            break;
          case 50:
            v5 = "js_object";
            break;
          case 51:
            v5 = "js_array";
            break;
          case 52:
            v5 = "js_raw_args";
            break;
          default:
            v5 = "unknown_variant_type";
            break;
        }
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_9:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
    }
  }
  m_pszString = inputdata->value.m_pszString;
LABEL_4:
  CPointClientUIWorldTextPanel::SetMessage(this, m_pszString);
}


// CPointClientUIWorldTextPanel::InputSetIntMessage  (line 82, @0x0000000001b55080, libserver.so)  // inlines: CUtlString, Int, operator int, ~CUtlString
// calls: CUtlString::Format, CUtlString::Get, CPointClientUIWorldTextPanel::SetMessage, CUtlString::FreeMemoryBlock, _Unwind_Resume
void __fastcall CPointClientUIWorldTextPanel::InputSetIntMessage(
        CPointClientUIWorldTextPanel *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // ax
  int m_float; // edx
  const char *v5; // rax
  CUtlString strInt; // [rsp+0h] [rbp-20h] BYREF

  strInt.m_pString = 0;
  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    m_float = inputdata->value.m_float;
  }
  else if ( m_type == 34 )
  {
    m_float = inputdata->value.m_float64;
  }
  else
  {
    m_float = inputdata->value.m_int;
  }
  CUtlString::Format(&strInt, "%d", m_float);
  v5 = CUtlString::Get(&strInt);
  CPointClientUIWorldTextPanel::SetMessage(this, v5);
  if ( strInt.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&strInt);
}


// CPointClientUIWorldTextPanel::SetMessage  (line 92, @0x0000000001b54f70, libserver.so)  // inlines: NetworkStateChanged, Set, V_strcpy_safe<512ul>
// calls: _V_strncpy, __stack_chk_fail
// callers: CPointClientUIWorldTextPanel::InputSetIntMessage, CPointClientUIWorldTextPanel::InputSetMessage
void __fastcall CPointClientUIWorldTextPanel::SetMessage(CPointClientUIWorldTextPanel *const this, const char *pMsg)
{
  char *i; // rdx
  char v5; // al
  char v6; // al
  char pMessage[512]; // [rsp+0h] [rbp-220h] BYREF
  _QWORD v8[4]; // [rsp+200h] [rbp-20h] BYREF

  v8[1] = __readfsqword(0x28u);
  for ( i = pMessage; i != v8; ++i )
  {
    v5 = *pMsg;
    if ( *pMsg != 92 )
    {
      ++pMsg;
      *i = v5;
      if ( v5 == 0 )
        break;
      continue;
    }
    v6 = pMsg[1];
    if ( v6 == 110 )
    {
      *i = 10;
      v6 = 10;
      goto LABEL_10;
    }
    if ( v6 <= 110 )
    {
      if ( v6 == 92 )
      {
        *i = 92;
        goto LABEL_10;
      }
      goto LABEL_15;
    }
    if ( v6 != 114 )
    {
      if ( v6 == 116 )
      {
        *i = 9;
        v6 = 9;
        goto LABEL_10;
      }
LABEL_15:
      *i = v6;
      goto LABEL_10;
    }
    *i = 13;
    v6 = 13;
LABEL_10:
    pMsg += 2;
    if ( v6 == 0 )
      break;
  }
  pMessage[511] = 0;
  _V_strncpy(&this->m_messageText, pMessage, 512, pMsg, v8);
  (*(this->_vptr_IHandleEntity + 22))(this, 1491, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


