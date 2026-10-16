// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/base_clientui_ent.cpp:107
class C_CBaseClientUIEntity_MapInstall {
	C_CBaseClientUIEntity_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_base_clientui_ent.cpp  (line 0, @0x000000000199bbc0, libserver.so)  // inlines: Bind, CClientUIDialogManager, CFieldPathHuffmanEncoder, CGameSystemStaticFactory, CHeadLookParams, CUtlAbstractDelegate, CUtlDelegate, CUtlHash, CUtlMemory, CUtlStack, CUtlStringToken, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CVariantBase, C_CBaseClientUIEntity_MapInstall, ClosurePtr, Color, Convert<FastDelegate0<bool>, bool (FastDelegate0<bool>::*)()const, void (detail::GenericClass::*)()>, Convert<FastDelegate0<void>, void (FastDelegate0<void>::*)()const, void (detail::GenericClass::*)()>, FastDelegate0, IntVector2D, InterpolatedVarLatchList_t, Purge, RemoveAll, ResetDbgInfo, ServerToClientMap_t, SetColor, SetGrowSize, State_t, UtlMakeDelegate<bool>, UtlMakeDelegate<void>, Vector2D, _Alloc_hider, __static_initialization_and_destruction_0, __static_initialization_and_destruction_1, basic_string, bindmemfunc<FastDelegate0<bool>, bool (FastDelegate0<bool>::*)()const>, bindmemfunc<FastDelegate0<void>, void (FastDelegate0<void>::*)()const>, bindstaticfunc<FastDelegate0<bool>, bool (FastDelegate0<bool>::*)()const>, bindstaticfunc<FastDelegate0<void>, void (FastDelegate0<void>::*)()const>, item_definition_index_t, operator[], style_index_t, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed, ~InterpolatedVarLatchList_t
// calls: CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, int> >::SetCount, CUtlVectorBase<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >::SetCount, __cxa_atexit, GameEventRegister_t::GameEventRegister_t, CBaseGameSystemFactory::CBaseGameSystemFactory, AddServerToClientClassMapping, DataMapInit<CBaseClientUIEntity>, __cxa_guard_acquire, __cxa_guard_release, CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, _Unwind_Resume, CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, int> >::~CUtlVectorBase (15 total)
// strings: "CClientMsg_ClientUIEvent_t", "CClientMsg_DevPaletteVisibilityChangedEvent_t", "CClientUIDialogManager", "CBaseClientUIEntity"
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'g_HuffmanEncoder, `guard variable for'CEntityKeyValues::sm_EmptyVariant, `guard variable for'g_AnimOpSourceColors, g_AnimOpSourceColors, `guard variable for'g_EntAttrDamageOptionsID, g_EntAttrDamageOptionsID, `guard variable for'IWrappedInterpolatedVar::s_WrappedInterpolatedVarState (40 total)
void __cdecl GLOBAL__sub_I_base_clientui_ent_cpp()
{
  CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,int> > *v0; // r15
  CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,int> >::CAllocator *p_m_Memory; // r13
  CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,int> > *v2; // r12
  __int64 v3; // r14
  __int64 j; // rbx
  __int64 v5; // rax
  __int64 i; // [rsp+8h] [rbp-78h]
  CUtlDelegate<void()> shutdown; // [rsp+10h] [rbp-70h] BYREF
  CUtlDelegate<bool()> init; // [rsp+30h] [rbp-50h] BYREF

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
  __cxa_atexit(_tcf_0, 0, &_dso_handle);
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
  shutdown.m_Closure.m_pFunction.__pfn = 0;
  shutdown.m_Closure.m_pFunction.__delta = 0;
  if ( UnregisterClientEventMessage<CClientMsg_ClientUIEvent_t> != 0 )
    shutdown.m_Closure.m_pFunction.__pfn = FastDelegate0<void>::InvokeStaticFunction;
  init.m_Closure.m_pFunction.__pfn = 0;
  shutdown.m_Closure.m_pthis = UnregisterClientEventMessage<CClientMsg_ClientUIEvent_t>;
  init.m_Closure.m_pFunction.__delta = 0;
  if ( RegisterClientEventMessage<CClientMsg_ClientUIEvent_t> != 0 )
    init.m_Closure.m_pFunction.__pfn = FastDelegate0<bool>::InvokeStaticFunction;
  init.m_Closure.m_pthis = RegisterClientEventMessage<CClientMsg_ClientUIEvent_t>;
  GameEventRegister_t::GameEventRegister_t(
    &g_CClientMsg_ClientUIEvent_t_Register,
    "CClientMsg_ClientUIEvent_t",
    &init,
    &shutdown);
  shutdown.m_Closure.m_pFunction.__pfn = 0;
  shutdown.m_Closure.m_pFunction.__delta = 0;
  if ( UnregisterClientEventMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t> != 0 )
    shutdown.m_Closure.m_pFunction.__pfn = FastDelegate0<void>::InvokeStaticFunction;
  init.m_Closure.m_pFunction.__pfn = 0;
  shutdown.m_Closure.m_pthis = UnregisterClientEventMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>;
  init.m_Closure.m_pFunction.__delta = 0;
  if ( RegisterClientEventMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t> != 0 )
    init.m_Closure.m_pFunction.__pfn = FastDelegate0<bool>::InvokeStaticFunction;
  init.m_Closure.m_pthis = RegisterClientEventMessage<CClientMsg_DevPaletteVisibilityChangedEvent_t>;
  GameEventRegister_t::GameEventRegister_t(
    &g_CClientMsg_DevPaletteVisibilityChangedEvent_t_Register,
    "CClientMsg_DevPaletteVisibilityChangedEvent_t",
    &init,
    &shutdown);
  s_GameUIDialogManager._vptr_IGameSystem = off_3F7C470;
  __cxa_atexit(CClientUIDialogManager::~CClientUIDialogManager, &s_GameUIDialogManager, &_dso_handle);
  CBaseGameSystemFactory::CBaseGameSystemFactory(&s_GSFactoryCClientUIDialogManager, "CClientUIDialogManager");
  s_GSFactoryCClientUIDialogManager._vptr_IGameSystemFactory = off_3F7C410;
  s_GSFactoryCClientUIDialogManager.m_pActualGlobal = &s_GameUIDialogManager;
  s_GSFactoryCClientUIDialogManager.m_ppGlobalPointer = &g_pGameUIDialogManager;
  (*(s_GameUIDialogManager._vptr_IGameSystem + 35))(&s_GameUIDialogManager, "CClientUIDialogManager");
  if ( `guard variable for'C_CBaseClientUIEntity_MapInstall::C_CBaseClientUIEntity_MapInstall(void)::CBaseClientUIEntity_mapping == 0
    && __cxa_guard_acquire(&`guard variable for'C_CBaseClientUIEntity_MapInstall::C_CBaseClientUIEntity_MapInstall(void)::CBaseClientUIEntity_mapping) != 0 )
  {
    C_CBaseClientUIEntity_MapInstall::C_CBaseClientUIEntity_MapInstall(void)::CBaseClientUIEntity_mapping.m_pNext = 0;
    C_CBaseClientUIEntity_MapInstall::C_CBaseClientUIEntity_MapInstall(void)::CBaseClientUIEntity_mapping.m_pClient = "CBaseClientUIEntity";
    C_CBaseClientUIEntity_MapInstall::C_CBaseClientUIEntity_MapInstall(void)::CBaseClientUIEntity_mapping.m_pServer = "CBaseClientUIEntity";
    __cxa_guard_release(&`guard variable for'C_CBaseClientUIEntity_MapInstall::C_CBaseClientUIEntity_MapInstall(void)::CBaseClientUIEntity_mapping);
  }
  AddServerToClientClassMapping(&C_CBaseClientUIEntity_MapInstall::C_CBaseClientUIEntity_MapInstall(void)::CBaseClientUIEntity_mapping);
  CBaseClientUIEntity_DataDescInit::g_DataMapHolder = DataMapInit<CBaseClientUIEntity>(0);
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
  // init once: CNetMessagePB<283,CClientMsg_DevPaletteVisibilityChangedEvent,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName
  CNetMessagePB<283,CClientMsg_DevPaletteVisibilityChangedEvent,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
  __cxa_atexit(
    &std::string::~string,
    &CNetMessagePB<283,CClientMsg_DevPaletteVisibilityChangedEvent,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName,
    &_dso_handle);
  // init once: CNetMessagePB<282,CClientMsg_ClientUIEvent,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName
  CNetMessagePB<282,CClientMsg_ClientUIEvent,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
  __cxa_atexit(
    &std::string::~string,
    &CNetMessagePB<282,CClientMsg_ClientUIEvent,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName,
    &_dso_handle);
}


// CClientUIDialogManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 28, @0x0000000001b4f450, libserver.so)
void __cdecl CClientUIDialogManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CClientUIDialogManager::CClientUIDialogManager  (line 33, @0x0000000001b4f460, libserver.so)
void __fastcall CClientUIDialogManager::CClientUIDialogManager(CClientUIDialogManager *const this)
{
  this->_vptr_IGameSystem = off_3F7C470;  // vptr: CClientUIDialogManager
}


// CClientUIDialogManager::~CClientUIDialogManager  (line 40, @0x0000000001b4ef80, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CClientUIDialogManager::~CClientUIDialogManager(CClientUIDialogManager *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CClientUIDialogManager::~CClientUIDialogManager  (line 40, @0x0000000001b4efa0, libserver.so)  // inlines: ~CAutoGameSystem, ~CClientUIDialogManager
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CClientUIDialogManager::~CClientUIDialogManager(CClientUIDialogManager *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CClientUIDialogManager::GameInit  (line 47, @0x0000000001b4fc50, libserver.so)  // inlines: CUtlDelegate<CClientUIDialogManager, CClientUIDialogManager>, Convert<CClientUIDialogManager, bool (CClientUIDialogManager::*)(const CClientMsg_ClientUIEvent_t&), void (detail::GenericClass::*)()>, FastDelegate1<CClientUIDialogManager, CClientUIDialogManager>, RegisterGameEventHandler<CClientMsg_ClientUIEvent_t>, UtlMakeDelegate<CClientUIDialogManager, CClientUIDialogManager, const CClientMsg_ClientUIEvent_t&, bool>, bindmemfunc<CClientUIDialogManager, bool (CClientUIDialogManager::*)(const CClientMsg_ClientUIEvent_t&)>
// globals: CClientUIDialogManager::ReceiveClientMsg_ClientUIEvent(CClientMsg_ClientUIEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<CClientMsg_ClientUIEvent_t>(bool)::s_hEvent
void __fastcall CClientUIDialogManager::GameInit(CClientUIDialogManager *const this, const EventGameInit_t *const msg)
{
  _QWORD v2[4]; // [rsp+0h] [rbp-20h] BYREF

  v2[1] = CClientUIDialogManager::ReceiveClientMsg_ClientUIEvent;
  v2[0] = this;
  v2[2] = 0;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    0,
    v2,
    IGameEventSystem::FindOrCreateGameEvent<CClientMsg_ClientUIEvent_t>(bool)::s_hEvent,
    0);
}


// CClientUIDialogManager::GameShutdown  (line 57, @0x0000000001b4fca0, libserver.so)  // inlines: CUtlDelegate<CClientUIDialogManager, CClientUIDialogManager>, Convert<CClientUIDialogManager, bool (CClientUIDialogManager::*)(const CClientMsg_ClientUIEvent_t&), void (detail::GenericClass::*)()>, FastDelegate1<CClientUIDialogManager, CClientUIDialogManager>, UnregisterGameEventHandler<CClientMsg_ClientUIEvent_t>, UtlMakeDelegate<CClientUIDialogManager, CClientUIDialogManager, const CClientMsg_ClientUIEvent_t&, bool>, bindmemfunc<CClientUIDialogManager, bool (CClientUIDialogManager::*)(const CClientMsg_ClientUIEvent_t&)>
// globals: CClientUIDialogManager::ReceiveClientMsg_ClientUIEvent(CClientMsg_ClientUIEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<CClientMsg_ClientUIEvent_t>(bool)::s_hEvent
void __fastcall CClientUIDialogManager::GameShutdown(
        CClientUIDialogManager *const this,
        const EventGameShutdown_t *const msg)
{
  _QWORD v2[4]; // [rsp+0h] [rbp-20h] BYREF

  v2[1] = CClientUIDialogManager::ReceiveClientMsg_ClientUIEvent;
  v2[0] = this;
  v2[2] = 0;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    0,
    v2,
    IGameEventSystem::FindOrCreateGameEvent<CClientMsg_ClientUIEvent_t>(bool)::s_hEvent);
}


// CClientUIDialogManager::ReceiveClientMsg_ClientUIEvent  (line 68, @0x0000000001b4f920, libserver.so)  // inlines: CEntityHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsUsed, LookupEntity, LookupEntityByIndex, _M_data, c_str, operator CBaseEntity*, operator CEntityInstance*
// calls: __dynamic_cast, CBaseClientUIEntity::OnClientFireOutput
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CBaseClientUIEntity
bool __fastcall CClientUIDialogManager::ReceiveClientMsg_ClientUIEvent(
        CClientUIDialogManager *const this,
        const CClientMsg_ClientUIEvent_t *const msg)
{
  int v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rsi
  __int16 v6; // r8
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  unsigned int v10; // esi
  int v11; // r12d
  CConcreteEntityList *v12; // r13
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rdi
  __int16 v18; // r8
  int v19; // edx
  CBaseClientUIEntity *v20; // rax
  int v21; // edx
  CBaseEntity *m_pInstance; // rsi
  unsigned __int64 v23; // rsi
  CEntityIdentity *v24; // rdi
  __int64 v25; // rsi
  bool v26; // zf
  CEntityIdentity *v27; // rdi
  CEntityInstance *v28; // rsi
  CEntityIdentity *v29; // rdx
  __int64 v30; // rsi
  CEntityIdentity *v31; // rdx
  unsigned __int16 hEnt; // [rsp+0h] [rbp-50h]
  unsigned __int16 hClient; // [rsp+10h] [rbp-40h]

  v3 = *(msg + 7);
  if ( v3 <= 0x7FFE
    && (v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9]) != 0
    && (v5 = &v4[v3 & 0x1FF]) != 0
    && v3 == (v5->m_EHandle.m_Index & 0x7FFF) )
  {
    v6 = 0x7FFF;
    v7 = (v5->m_EHandle.m_Index >> 15) - (v5->m_flags & 1);
    if ( v5->m_EHandle.m_Index != -1 )
      v6 = v5->m_EHandle.m_Index & 0x7FFF;
    v8 = *(msg + 12);
    v9 = (v7 << 15) | v6 & 0x7FFF;
    v10 = v9 + 2;
    hEnt = (v7 << 15) | v6 & 0x7FFF;
    if ( v8 > 0x7FFE )
      goto LABEL_8;
  }
  else
  {
    v8 = *(msg + 12);
    hEnt = -1;
    v10 = 1;
    v9 = -1;
    if ( v8 > 0x7FFE )
    {
LABEL_8:
      hClient = -1;
      v11 = -1;
      goto LABEL_9;
    }
  }
  v16 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
  if ( v16 == 0 )
    goto LABEL_8;
  v17 = &v16[v8 & 0x1FF];
  if ( v17 == 0 || v8 != (v17->m_EHandle.m_Index & 0x7FFF) )
    goto LABEL_8;
  v18 = 0x7FFF;
  if ( v17->m_EHandle.m_Index != -1 )
    v18 = v17->m_EHandle.m_Index & 0x7FFF;
  v19 = ((v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1)) << 15;
  v11 = v19 | v18 & 0x7FFF;
  hClient = v19 | v18 & 0x7FFF;
LABEL_9:
  v12 = CEntityHandle::gm_pEntityList;
  if ( v10 <= 1 )
    return 1;
  v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hEnt >> 9) & 0x3F];
  if ( v13 == 0 )
    return 1;
  v14 = &v13[hEnt & 0x1FF];
  if ( v14 == 0 )
    return 1;
  if ( v9 != v14->m_EHandle.m_Index )
    return 1;
  if ( v14->m_pInstance == 0 )
    return 1;
  v20 = __dynamic_cast(v14->m_pInstance, &`typeinfo for'CEntityInstance, &`typeinfo for'CBaseClientUIEntity, 0);
  if ( v20 == 0 )
    return 1;
  v21 = *(msg + 6);
  if ( v21 != 1 )
  {
    if ( v21 == 2 )
    {
      m_pInstance = 0;
      if ( (v11 + 2) > 1 )
      {
        v23 = hClient & 0x7FFF;
        v24 = v12->m_pIdentityChunks[(v23 >> 9)];
        if ( v24 != 0 )
        {
          v25 = v23 & 0x1FF;
          v26 = &v24[v25] == 0;
          v27 = &v24[v25];
          m_pInstance = 0;
          if ( !v26 && v11 == v27->m_EHandle.m_Index )
            m_pInstance = v27->m_pInstance;
        }
        else
        {
          m_pInstance = 0;
        }
      }
      CBaseClientUIEntity::OnClientFireOutput(v20, m_pInstance, **(msg + 4), **(msg + 5));
      return 1;
    }
    return 1;
  }
  v28 = 0;
  if ( (v11 + 2) > 1 )
  {
    v29 = v12->m_pIdentityChunks[(hClient >> 9) & 0x3F];
    if ( v29 != 0 )
    {
      v30 = hClient & 0x1FF;
      v26 = &v29[v30] == 0;
      v31 = &v29[v30];
      v28 = 0;
      if ( !v26 && v11 == v31->m_EHandle.m_Index )
        v28 = v31->m_pInstance;
    }
  }
  (*(v20->_vptr_IHandleEntity + 214))(v20, v28);
  return 1;
}


// CBaseClientUIEntity::YouForgotToImplementOrDeclareServerClass  (line 107, @0x0000000001b4ef60, libserver.so)
int __fastcall CBaseClientUIEntity::YouForgotToImplementOrDeclareServerClass(CBaseClientUIEntity *const this)
{
  return 0;
}


// CBaseClientUIEntity::GetServerClass  (line 107, @0x0000000001b4f400, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseClientUIEntity::GetServerClass(CBaseClientUIEntity *const this)
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


// CBaseClientUIEntity::GetDataDescMap  (line 110, @0x0000000001b4ef70, libserver.so)
// globals: CBaseClientUIEntity::m_DataMap
datamap_t *__fastcall CBaseClientUIEntity::GetDataDescMap(CBaseClientUIEntity *const this)
{
  return &CBaseClientUIEntity::m_DataMap;
}


// CBaseClientUIEntity::AddDatadescMetadataKeys  (line 110, @0x0000000001b4f470, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseClientUIEntity::GetEntityClass(void)
void __fastcall CBaseClientUIEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseClientUIEntity::GetEntityClass);
}


// CBaseClientUIEntity::GetBaseMap  (line 110, @0x0000000001b4f490, libserver.so)
datamap_t *__cdecl CBaseClientUIEntity::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CBaseClientUIEntity>  (line 110, @0x0000000001b4f4a0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I_base_clientui_ent.cpp
// strings: "CBaseClientUIEntity"
// globals: `guard variable for'DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::nameHolder, `guard variable for'DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc, CBaseClientUIEntity::GetEntityClass(void), CBaseClientUIEntity::m_DataMap, DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::nameHolder.m_pszBase = "CBaseClientUIEntity";
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::nameHolder,
      &_dso_handle);
  }
  CBaseClientUIEntity::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc) != 0 )
  {
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc[6].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc[7].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc[8].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc[10].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc[11].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc[12].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc[13].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc[14].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc[15].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc);
  }
  CBaseClientUIEntity::m_DataMap.dataNumFields = 15;
  CBaseClientUIEntity::m_DataMap.dataDesc = &DataMapInit<CBaseClientUIEntity>(CBaseClientUIEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseClientUIEntity::m_DataMap, CBaseClientUIEntity::GetEntityClass);
  return &CBaseClientUIEntity::m_DataMap;
}


// CBaseClientUIEntity::CBaseClientUIEntity  (line 134, @0x0000000001b4f600, libserver.so)  // inlines: CEntityIOOutput, CNetworkVarBase, CUtlSymbolLarge, EnsureValidValue<bool>, NetworkStateChanged, Set, operator=<bool>
// calls: CBaseModelEntity::CBaseModelEntity, CBaseEntity::NetworkStateChanged, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CPointClientUIWorldPanel::CPointClientUIWorldPanel, CPointClientUIDialog::CPointClientUIDialog
void __fastcall CBaseClientUIEntity::CBaseClientUIEntity(CBaseClientUIEntity *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_3F7C5D0;
  this->m_bEnabled.m_Value = 0;
  this->m_DialogXMLName.m_Value.u.m_Id = 0;
  this->m_PanelClassName.m_Value.u.m_Id = 0;
  this->m_CustomOutput0._vptr_CEntityIOOutput = off_3F7C190;
  this->m_CustomOutput1._vptr_CEntityIOOutput = off_3F7C190;
  this->m_CustomOutput2._vptr_CEntityIOOutput = off_3F7C190;
  this->m_CustomOutput3._vptr_CEntityIOOutput = off_3F7C190;
  this->m_CustomOutput4._vptr_CEntityIOOutput = off_3F7C190;
  this->m_CustomOutput5._vptr_CEntityIOOutput = off_3F7C190;
  this->m_CustomOutput6._vptr_CEntityIOOutput = off_3F7C190;
  this->m_CustomOutput7._vptr_CEntityIOOutput = off_3F7C190;
  this->m_CustomOutput8._vptr_CEntityIOOutput = off_3F7C190;
  this->m_CustomOutput9._vptr_CEntityIOOutput = off_3F7C190;
  CBaseEntity::NetworkStateChanged(this, 0x480u, -1, -1);
  this->m_bEnabled.m_Value = 1;
}


// CBaseClientUIEntity::~CBaseClientUIEntity  (line 145, @0x0000000001b4efd0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
// callers: CPointClientUIWorldPanel::~CPointClientUIWorldPanel, CPointClientUIWorldPanel::CPointClientUIWorldPanel, CPointClientUIWorldTextPanel::~CPointClientUIWorldTextPanel, CPointClientUIDialog::~CPointClientUIDialog
void __fastcall CBaseClientUIEntity::~CBaseClientUIEntity(CBaseClientUIEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3F7C5D0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBaseClientUIEntity::~CBaseClientUIEntity  (line 145, @0x0000000001b4eff0, libserver.so)  // inlines: ~CBaseClientUIEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CBaseClientUIEntity::~CBaseClientUIEntity(CBaseClientUIEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3F7C5D0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CBaseClientUIEntity::InputEnable  (line 184, @0x0000000001b4f3b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CBaseClientUIEntity::InputEnable(CBaseClientUIEntity *const this, inputdata_t *const inputdata)
{
  if ( !this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = 1;
  }
  (*(this->_vptr_IHandleEntity + 215))(this, inputdata);
}


// CBaseClientUIEntity::InputDisable  (line 195, @0x0000000001b4f360, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CBaseClientUIEntity::InputDisable(CBaseClientUIEntity *const this, inputdata_t *const inputdata)
{
  if ( this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = 0;
  }
  (*(this->_vptr_IHandleEntity + 216))(this, inputdata);
}


// CBaseClientUIEntity::OnClientFireOutput  (line 205, @0x0000000001b4f730, libserver.so)  // inlines: CVariantBase, CopyData, FireOutput<char const*>, Free, V_isdigit, V_isdigit_str, ~CVariantBase
// calls: V_atoi, CEntityIOOutput::FireOutputInternal, CEntityIOOutput::FireOutput<char const*>, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CClientUIDialogManager::ReceiveClientMsg_ClientUIEvent
// globals: jpt_1B4F784
void __fastcall CBaseClientUIEntity::OnClientFireOutput(
        CBaseClientUIEntity *const this,
        CBaseEntity *pActivator,
        const char *pOutputName,
        const char *pData)
{
  const char *i; // rax
  char v8; // r8
  float v9; // xmm0_4
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  if ( pOutputName != 0 )
  {
    for ( i = pOutputName; ; ++i )
    {
      v8 = *i;
      if ( *i == 0 )
        break;
      if ( (v8 - 48) > 9u )
        return;
    }
  }
  switch ( V_atoi(pOutputName) )
  {
    case 0u:
      CEntityIOOutput::FireOutput<char const*>(&this->m_CustomOutput0, pActivator, this, pData, v9);
      break;
    case 1u:
      CEntityIOOutput::FireOutput<char const*>(&this->m_CustomOutput1, pActivator, this, pData, v9);
      break;
    case 2u:
      CEntityIOOutput::FireOutput<char const*>(&this->m_CustomOutput2, pActivator, this, pData, v9);
      break;
    case 3u:
      CEntityIOOutput::FireOutput<char const*>(&this->m_CustomOutput3, pActivator, this, pData, v9);
      break;
    case 4u:
      CEntityIOOutput::FireOutput<char const*>(&this->m_CustomOutput4, pActivator, this, pData, v9);
      break;
    case 5u:
      value.m_uint64 = pData;
      value.m_flags = 0;
      value.m_type = 30;
      CEntityIOOutput::FireOutputInternal(&this->m_CustomOutput5, pActivator, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      break;
    case 6u:
      CEntityIOOutput::FireOutput<char const*>(&this->m_CustomOutput6, pActivator, this, pData, v9);
      break;
    case 7u:
      CEntityIOOutput::FireOutput<char const*>(&this->m_CustomOutput7, pActivator, this, pData, v9);
      break;
    case 8u:
      CEntityIOOutput::FireOutput<char const*>(&this->m_CustomOutput8, pActivator, this, pData, v9);
      break;
    case 9u:
      value.m_uint64 = pData;
      value.m_flags = 0;
      value.m_type = 30;
      CEntityIOOutput::FireOutputInternal(&this->m_CustomOutput9, pActivator, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      break;
    default:
      return;
  }
}


