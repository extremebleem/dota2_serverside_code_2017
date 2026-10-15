
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSoundOpGameSystem::CSoundOpGameSystem  (line 33, @0x0000000001f42dd0, libserver.so)  // inlines: CCommandMemberInitializer_snd_sos_sv_soundevent_pause_last, CCommandMemberInitializer_snd_sos_sv_soundevent_start, CCommandMemberInitializer_snd_sos_sv_soundevent_stop_last, CCommandMemberInitializer_snd_sos_sv_soundevent_unpause_last, CCommandMemberInitializer_snd_sos_sv_test_gender, CConCommandMemberAccessor, CCopyableLock, CSosMessageQueue, CThreadFastMutex, CUtlMemory, CUtlSlot, CUtlVector, CUtlVectorBase, CUtlVectorMT, InValidate, Purge, SetOwner, SndOpEventGuid_t, SoundEventGuid_t, ~CAutoGameSystem, ~CCommandMemberInitializer_snd_sos_sv_soundevent_pause_last, ~CCommandMemberInitializer_snd_sos_sv_soundevent_start, ~CCommandMemberInitializer_snd_sos_sv_soundevent_stop_last, ~CCommandMemberInitializer_snd_sos_sv_test_gender, ~CSosMessageQueue, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: ConCommand::ConCommand, CUtlVectorBase<CSosMessageQueue<unsigned int>::Entry_t, CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t, int> >::~CUtlVectorBase, CUtlVectorBase<CSosMessageQueue<SoundEventGuid_t>::Entry_t, CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t, int> >::RemoveAll, CUtlSlot::~CUtlSlot, IGameSystem::~IGameSystem, _Unwind_Resume, CConCommandMemberAccessor<CSoundOpGameSystem>::~CConCommandMemberAccessor, CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t, int>::Purge
// callers: CGameSystemReallocatingFactory<CSoundOpGameSystem, CSoundOpGameSystem>::CreateGameSystem
// strings: "snd_sos_sv_soundevent_stop_last", "snd_sos_sv_soundevent_pause_last", "snd_sos_sv_soundevent_unpause_last"
// globals: CSoundOpGameSystem::snd_sos_sv_soundevent_start(CCommandContext const&,CCommand const&), CSoundOpGameSystem::snd_sos_sv_soundevent_stop_last(CCommandContext const&,CCommand const&), CSoundOpGameSystem::snd_sos_sv_test_gender(CCommandContext const&,CCommand const&), CSoundOpGameSystem::snd_sos_sv_soundevent_pause_last(CCommandContext const&,CCommand const&), CSoundOpGameSystem::snd_sos_sv_soundevent_unpause_last(CCommandContext const&,CCommand const&)
void __fastcall CSoundOpGameSystem::CSoundOpGameSystem(CSoundOpGameSystem *const this)
{
  this->m_ConnectedSignallers.m_Size = 0;
  this->m_ConnectedSignallers.m_Memory.m_pMemory = 0;
  this->m_ConnectedSignallers.m_Memory.m_nAllocationCount = 0;
  this->m_ConnectedSignallers.m_Memory.m_nGrowSize = 0;
  this->m_ConnectedSignallers.m_ownerID = 0;
  this->m_ConnectedSignallers.m_depth = 0;
  this->m_ConnectedSignallers.Mutex_t.m_ownerID = 0;
  this->m_ConnectedSignallers.Mutex_t.m_depth = 0;
  this->_vptr_IGameSystem = off_3FCE4D0;
  this->m_serverGuidMessageQueue.m_messages.m_Size = 0;
  this->m_serverGuidMessageQueue.m_messages.m_Memory.m_pMemory = 0;
  this->m_serverGuidMessageQueue.m_messages.m_Memory.m_nAllocationCount = 0;
  this->m_serverGuidMessageQueue.m_messages.m_Memory.m_nGrowSize = 0;
  this->m_serverLibraryStackMessageQueue.m_messages.m_Size = 0;
  this->m_serverLibraryStackMessageQueue.m_messages.m_Memory.m_pMemory = 0;
  this->m_serverLibraryStackMessageQueue.m_messages.m_Memory.m_nAllocationCount = 0;
  this->m_serverLibraryStackMessageQueue.m_messages.m_Memory.m_nGrowSize = 0;
  this->m_serverSoundEventHashQueue.m_messages.m_Size = 0;
  this->m_serverSoundEventHashQueue.m_messages.m_Memory.m_pMemory = 0;
  this->m_serverSoundEventHashQueue.m_messages.m_Memory.m_nAllocationCount = 0;
  this->m_serverSoundEventHashQueue.m_messages.m_Memory.m_nGrowSize = 0;
  this->m_nLastGuidStarted.m_nGuid.m_Data = 0;
  this->m_nLastGuidStarted.m_hStackHash = -1;
  ConCommand::ConCommand(
    &this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor,
    &stru_32D9EEC.m_PhysicsSpawnGroups.m_Tree.m_Elements.m_pMemory + 4,
    &this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor.ICommandCallback,
    "Test",
    0,
    0);
  this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCD990;
  this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCDA38;
  this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCDA50;
  this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor.m_Func.__pfn = CSoundOpGameSystem::snd_sos_sv_soundevent_start;
  this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor,
    "snd_sos_sv_soundevent_stop_last",
    &this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor.ICommandCallback,
    "Test",
    0,
    0);
  this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCD990;
  this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCDA38;
  this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCDA50;
  this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor.m_Func.__pfn = CSoundOpGameSystem::snd_sos_sv_soundevent_stop_last;
  this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor,
    &stru_32D9EEC.m_mapLevelWorlds,
    &this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor.ICommandCallback,
    "Test",
    0,
    0);
  this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCD990;
  this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCDA38;
  this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCDA50;
  this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor.m_Func.__pfn = CSoundOpGameSystem::snd_sos_sv_test_gender;
  this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor,
    "snd_sos_sv_soundevent_pause_last",
    &this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor.ICommandCallback,
    "Test",
    0,
    0);
  this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCD990;
  this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCDA38;
  this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCDA50;
  this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor.m_Func.__pfn = CSoundOpGameSystem::snd_sos_sv_soundevent_pause_last;
  this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor,
    "snd_sos_sv_soundevent_unpause_last",
    &this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor.ICommandCallback,
    "Test",
    0,
    0);
  this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCD990;
  this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCDA38;
  this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCDA50;
  this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor.m_Func.__pfn = CSoundOpGameSystem::snd_sos_sv_soundevent_unpause_last;
  this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor.m_pOwner = this;
}


// CSoundOpGameSystem::~CSoundOpGameSystem  (line 39, @0x0000000001f42b70, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CCommandMemberInitializer_snd_sos_sv_soundevent_pause_last, ~CCommandMemberInitializer_snd_sos_sv_soundevent_start, ~CCommandMemberInitializer_snd_sos_sv_soundevent_stop_last, ~CCommandMemberInitializer_snd_sos_sv_soundevent_unpause_last, ~CCommandMemberInitializer_snd_sos_sv_test_gender, ~CConCommandMemberAccessor, ~CSosMessageQueue, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: ConCommandBase::Shutdown, ConCommand::~ConCommand, CUtlVectorBase<CSosMessageQueue<unsigned int>::Entry_t, CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t, int> >::RemoveAll, CUtlVectorBase<CSosMessageQueue<SoundEventGuid_t>::Entry_t, CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t, int> >::RemoveAll, CUtlSlot::~CUtlSlot, IGameSystem::~IGameSystem, CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t, int>::Purge, CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t, int>::Purge
// callers: CSoundOpGameSystem::~CSoundOpGameSystem
void __fastcall CSoundOpGameSystem::~CSoundOpGameSystem(CSoundOpGameSystem *const this)
{
  CSoundOpGameSystem::CCommandMemberInitializer_snd_sos_sv_soundevent_unpause_last *v1; // r12

  v1 = &this->m_snd_sos_sv_soundevent_unpause_last_register;
  this->_vptr_IGameSystem = off_3FCE4D0;
  this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCD990;
  this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCDA38;
  this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCDA50;
  ConCommandBase::Shutdown(&this->m_snd_sos_sv_soundevent_unpause_last_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&v1->m_ConCommandAccessor);
  this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCD990;
  this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCDA38;
  this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCDA50;
  ConCommandBase::Shutdown(&this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_snd_sos_sv_soundevent_pause_last_register.m_ConCommandAccessor);
  this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCD990;
  this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCDA38;
  this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCDA50;
  ConCommandBase::Shutdown(&this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_snd_sos_sv_test_gender_register.m_ConCommandAccessor);
  this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCD990;
  this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCDA38;
  this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCDA50;
  ConCommandBase::Shutdown(&this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_snd_sos_sv_soundevent_stop_last_register.m_ConCommandAccessor);
  this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCD990;
  this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCDA38;
  this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCDA50;
  ConCommandBase::Shutdown(&this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_snd_sos_sv_soundevent_start_register.m_ConCommandAccessor);
  CUtlVectorBase<CSosMessageQueue<unsigned int>::Entry_t,CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t,int>>::RemoveAll(&this->m_serverSoundEventHashQueue.m_messages);
  if ( (this->m_serverSoundEventHashQueue.m_messages.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t,int>::Purge(&this->m_serverSoundEventHashQueue.m_messages.m_Memory);
    if ( (this->m_serverSoundEventHashQueue.m_messages.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t,int>::Purge(&this->m_serverSoundEventHashQueue.m_messages.m_Memory);
  }
  CUtlVectorBase<CSosMessageQueue<unsigned int>::Entry_t,CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t,int>>::RemoveAll(&this->m_serverLibraryStackMessageQueue.m_messages);
  if ( (this->m_serverLibraryStackMessageQueue.m_messages.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t,int>::Purge(&this->m_serverLibraryStackMessageQueue.m_messages.m_Memory);
    if ( (this->m_serverLibraryStackMessageQueue.m_messages.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t,int>::Purge(&this->m_serverLibraryStackMessageQueue.m_messages.m_Memory);
  }
  CUtlVectorBase<CSosMessageQueue<SoundEventGuid_t>::Entry_t,CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t,int>>::RemoveAll(&this->m_serverGuidMessageQueue.m_messages);
  if ( (this->m_serverGuidMessageQueue.m_messages.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t,int>::Purge(&this->m_serverGuidMessageQueue.m_messages.m_Memory);
    if ( (this->m_serverGuidMessageQueue.m_messages.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t,int>::Purge(&this->m_serverGuidMessageQueue.m_messages.m_Memory);
  }
  CUtlSlot::~CUtlSlot(&this->CUtlSlot);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CSoundOpGameSystem::~CSoundOpGameSystem  (line 39, @0x0000000001f42db0, libserver.so)
// calls: CSoundOpGameSystem::~CSoundOpGameSystem, operator delete
void __fastcall CSoundOpGameSystem::~CSoundOpGameSystem(CSoundOpGameSystem *const this)
{
  CSoundOpGameSystem::~CSoundOpGameSystem(this);
  operator delete(this);
}


// CSoundOpGameSystem::GameInit  (line 46, @0x0000000001f2a360, libserver.so)
void __fastcall CSoundOpGameSystem::GameInit(CSoundOpGameSystem *const this, const EventGameInit_t *const msg)
{
  ;
}


// CSoundOpGameSystem::GameActivate  (line 52, @0x0000000001f58750, libserver.so)  // inlines: CUtlDelegate<CSoundOpGameSystem, CSoundOpGameSystem>, Convert<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosSetLibraryStackFields_t&), void (detail::GenericClass::*)()>, Convert<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosSetSoundEventParams_t&), void (detail::GenericClass::*)()>, Convert<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosStartSoundEvent_t&), void (detail::GenericClass::*)()>, Convert<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosStopSoundEventHash_t&), void (detail::GenericClass::*)()>, Convert<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosStopSoundEvent_t&), void (detail::GenericClass::*)()>, FastDelegate1<CSoundOpGameSystem, CSoundOpGameSystem>, RegisterGameEventHandler<CMsgSosSetLibraryStackFields_t>, RegisterGameEventHandler<CMsgSosSetSoundEventParams_t>, RegisterGameEventHandler<CMsgSosStartSoundEvent_t>, RegisterGameEventHandler<CMsgSosStopSoundEventHash_t>, RegisterGameEventHandler<CMsgSosStopSoundEvent_t>, UtlMakeDelegate<CSoundOpGameSystem, CSoundOpGameSystem, const CMsgSosSetLibraryStackFields_t&, bool>, UtlMakeDelegate<CSoundOpGameSystem, CSoundOpGameSystem, const CMsgSosSetSoundEventParams_t&, bool>, UtlMakeDelegate<CSoundOpGameSystem, CSoundOpGameSystem, const CMsgSosStartSoundEvent_t&, bool>, UtlMakeDelegate<CSoundOpGameSystem, CSoundOpGameSystem, const CMsgSosStopSoundEventHash_t&, bool>, UtlMakeDelegate<CSoundOpGameSystem, CSoundOpGameSystem, const CMsgSosStopSoundEvent_t&, bool>, bindmemfunc<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosSetLibraryStackFields_t&)>, bindmemfunc<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosSetSoundEventParams_t&)>, bindmemfunc<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosStartSoundEvent_t&)>, bindmemfunc<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosStopSoundEventHash_t&)>, bindmemfunc<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosStopSoundEvent_t&)>
// globals: CSoundOpGameSystem::OnStartSoundEvent(CMsgSosStartSoundEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<CMsgSosStartSoundEvent_t>(bool)::s_hEvent, CSoundOpGameSystem::OnStopSoundEvent(CMsgSosStopSoundEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEvent_t>(bool)::s_hEvent, CSoundOpGameSystem::OnStopSoundEventHash(CMsgSosStopSoundEventHash_t const&), IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEventHash_t>(bool)::s_hEvent, CSoundOpGameSystem::OnSetSoundEventParams(CMsgSosSetSoundEventParams_t const&), IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetSoundEventParams_t>(bool)::s_hEvent (10 total)
void __fastcall CSoundOpGameSystem::GameActivate(CSoundOpGameSystem *const this, const EventGameActivate_t *const msg)
{
  CUtlSlot *v2; // r12
  CSoundOpGameSystem *v4; // [rsp+0h] [rbp-40h] BYREF
  bool (__fastcall *v5)(CSoundOpGameSystem *const, const CMsgSosStartSoundEvent_t *const); // [rsp+8h] [rbp-38h]
  __int64 v6; // [rsp+10h] [rbp-30h]

  v2 = &this->CUtlSlot;
  v4 = this;
  v5 = CSoundOpGameSystem::OnStartSoundEvent;
  v6 = 0;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    &this->CUtlSlot,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosStartSoundEvent_t>(bool)::s_hEvent,
    0);
  v4 = this;
  v5 = CSoundOpGameSystem::OnStopSoundEvent;
  v6 = 0;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    v2,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEvent_t>(bool)::s_hEvent,
    0);
  v4 = this;
  v5 = CSoundOpGameSystem::OnStopSoundEventHash;
  v6 = 0;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    v2,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEventHash_t>(bool)::s_hEvent,
    0);
  v4 = this;
  v5 = CSoundOpGameSystem::OnSetSoundEventParams;
  v6 = 0;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    v2,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetSoundEventParams_t>(bool)::s_hEvent,
    0);
  v4 = this;
  v5 = CSoundOpGameSystem::OnSetLibraryStackFields;
  v6 = 0;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    v2,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetLibraryStackFields_t>(bool)::s_hEvent,
    0);
}


// CSoundOpGameSystem::GameDeactivate  (line 73, @0x0000000001f58e00, libserver.so)  // inlines: CUtlDelegate<CSoundOpGameSystem, CSoundOpGameSystem>, Convert<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosSetLibraryStackFields_t&), void (detail::GenericClass::*)()>, Convert<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosSetSoundEventParams_t&), void (detail::GenericClass::*)()>, Convert<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosStartSoundEvent_t&), void (detail::GenericClass::*)()>, Convert<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosStopSoundEventHash_t&), void (detail::GenericClass::*)()>, Convert<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosStopSoundEvent_t&), void (detail::GenericClass::*)()>, FastDelegate1<CSoundOpGameSystem, CSoundOpGameSystem>, UnregisterGameEventHandler<CMsgSosSetLibraryStackFields_t>, UnregisterGameEventHandler<CMsgSosSetSoundEventParams_t>, UnregisterGameEventHandler<CMsgSosStartSoundEvent_t>, UnregisterGameEventHandler<CMsgSosStopSoundEventHash_t>, UnregisterGameEventHandler<CMsgSosStopSoundEvent_t>, UtlMakeDelegate<CSoundOpGameSystem, CSoundOpGameSystem, const CMsgSosSetLibraryStackFields_t&, bool>, UtlMakeDelegate<CSoundOpGameSystem, CSoundOpGameSystem, const CMsgSosSetSoundEventParams_t&, bool>, UtlMakeDelegate<CSoundOpGameSystem, CSoundOpGameSystem, const CMsgSosStartSoundEvent_t&, bool>, UtlMakeDelegate<CSoundOpGameSystem, CSoundOpGameSystem, const CMsgSosStopSoundEventHash_t&, bool>, UtlMakeDelegate<CSoundOpGameSystem, CSoundOpGameSystem, const CMsgSosStopSoundEvent_t&, bool>, bindmemfunc<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosSetLibraryStackFields_t&)>, bindmemfunc<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosSetSoundEventParams_t&)>, bindmemfunc<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosStartSoundEvent_t&)>, bindmemfunc<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosStopSoundEventHash_t&)>, bindmemfunc<CSoundOpGameSystem, bool (CSoundOpGameSystem::*)(const CMsgSosStopSoundEvent_t&)>
// globals: CSoundOpGameSystem::OnStartSoundEvent(CMsgSosStartSoundEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<CMsgSosStartSoundEvent_t>(bool)::s_hEvent, CSoundOpGameSystem::OnStopSoundEvent(CMsgSosStopSoundEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEvent_t>(bool)::s_hEvent, CSoundOpGameSystem::OnStopSoundEventHash(CMsgSosStopSoundEventHash_t const&), IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEventHash_t>(bool)::s_hEvent, CSoundOpGameSystem::OnSetSoundEventParams(CMsgSosSetSoundEventParams_t const&), IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetSoundEventParams_t>(bool)::s_hEvent (10 total)
void __fastcall CSoundOpGameSystem::GameDeactivate(
        CSoundOpGameSystem *const this,
        const EventGameDeactivate_t *const msg)
{
  CUtlSlot *v2; // r12
  CSoundOpGameSystem *v4; // [rsp+0h] [rbp-40h] BYREF
  bool (__fastcall *v5)(CSoundOpGameSystem *const, const CMsgSosStartSoundEvent_t *const); // [rsp+8h] [rbp-38h]
  __int64 v6; // [rsp+10h] [rbp-30h]

  v2 = &this->CUtlSlot;
  v4 = this;
  v5 = CSoundOpGameSystem::OnStartSoundEvent;
  v6 = 0;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    &this->CUtlSlot,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosStartSoundEvent_t>(bool)::s_hEvent);
  v4 = this;
  v5 = CSoundOpGameSystem::OnStopSoundEvent;
  v6 = 0;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    v2,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEvent_t>(bool)::s_hEvent);
  v4 = this;
  v5 = CSoundOpGameSystem::OnStopSoundEventHash;
  v6 = 0;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    v2,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEventHash_t>(bool)::s_hEvent);
  v4 = this;
  v5 = CSoundOpGameSystem::OnSetSoundEventParams;
  v6 = 0;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    v2,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetSoundEventParams_t>(bool)::s_hEvent);
  v4 = this;
  v5 = CSoundOpGameSystem::OnSetLibraryStackFields;
  v6 = 0;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    v2,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetLibraryStackFields_t>(bool)::s_hEvent);
}


// CSoundOpGameSystem::OnStartSoundEvent  (line 98, @0x0000000001f6a010, libserver.so)  // inlines: CEntityIndex, SoundEventGuid_t, _M_data, _M_rep, size
// calls: CSoundOpGameSystem::DoStartSoundEvent
bool __fastcall CSoundOpGameSystem::OnStartSoundEvent(
        CSoundOpGameSystem *const this,
        const CMsgSosStartSoundEvent_t *const msg)
{
  double v2; // xmm0_8

  v2 = 0.0;
  if ( (*(msg + 16) & 0x20) != 0 )
    v2 = (*(*g_pSoundSystem + 192LL))(g_pSoundSystem, 1, *(msg + 12), gpGlobals->interval_per_tick);
  CSoundOpGameSystem::DoStartSoundEvent(
    this,
    0,
    *(msg + 24),
    *(msg + 7),
    *(msg + 32),
    *(msg + 18),
    v2,
    **(msg + 5),
    *(**(msg + 5) - 24LL));
  return 1;
}


// CSoundOpGameSystem::OnStopSoundEvent  (line 113, @0x0000000001f6d430, libserver.so)  // inlines: SoundEventGuid_t
// calls: CSoundOpGameSystem::DoStopSoundEvent
bool __fastcall CSoundOpGameSystem::OnStopSoundEvent(
        CSoundOpGameSystem *const this,
        const CMsgSosStopSoundEvent_t *const msg)
{
  CSoundOpGameSystem::DoStopSoundEvent(this, 0, *(msg + 24));
  return 1;
}


// CSoundOpGameSystem::OnStopSoundEventHash  (line 118, @0x0000000001f6dcc0, libserver.so)  // inlines: CEntityIndex
// calls: CSoundOpGameSystem::DoStopSoundEventHash
bool __fastcall CSoundOpGameSystem::OnStopSoundEventHash(
        CSoundOpGameSystem *const this,
        const CMsgSosStopSoundEventHash_t *const msg)
{
  CSoundOpGameSystem::DoStopSoundEventHash(this, 0, *(msg + 6), *(msg + 28));
  return 1;
}


// CSoundOpGameSystem::OnSetSoundEventParams  (line 127, @0x0000000001f698c0, libserver.so)  // inlines: SoundEventGuid_t, _M_data, _M_rep, size
// calls: CSoundOpGameSystem::DoSetSoundEventParams
bool __fastcall CSoundOpGameSystem::OnSetSoundEventParams(
        CSoundOpGameSystem *const this,
        const CMsgSosSetSoundEventParams_t *const msg)
{
  CSoundOpGameSystem::DoSetSoundEventParams(this, 0, *(msg + 32), 0xFFFFFFFF, 0, 0, **(msg + 3), *(**(msg + 3) - 24LL));
  return 1;
}


// CSoundOpGameSystem::OnSetLibraryStackFields  (line 136, @0x0000000001f6e320, libserver.so)  // inlines: _M_data, _M_rep, size
// calls: CSoundOpGameSystem::DoSetLibraryStackFields
bool __fastcall CSoundOpGameSystem::OnSetLibraryStackFields(
        CSoundOpGameSystem *const this,
        const CMsgSosSetLibraryStackFields_t *const msg)
{
  CSoundOpGameSystem::DoSetLibraryStackFields(this, 0, *(msg + 8), 0xFFFFFFFF, 0, 0, **(msg + 3), *(**(msg + 3) - 24LL));
  return 1;
}


// CSoundOpGameSystem::SetStartMessage  (line 147, @0x0000000001f38050, libserver.so)  // inlines: GetRaw, set_has_packed_params, set_has_seed, set_has_soundevent_guid, set_has_soundevent_hash, set_has_source_entity_index, set_has_start_time, set_packed_params, set_seed, set_soundevent_guid, set_soundevent_hash, set_source_entity_index, set_start_time
// calls: std::string::assign(char const*,ulong)
// callers: CSoundOpGameSystem::FrameUpdatePostEntityThink
void __fastcall CSoundOpGameSystem::SetStartMessage(
        const CSoundOpGameSystem *const this,
        CMsgSosStartSoundEvent_t *const msg,
        const CSosFilterStartSoundEventInfo_t *msgInfo)
{
  int v3; // eax
  HSOUNDEVENTHASH m_SoundEventHash; // ecx
  int32 m_Data; // ecx
  int m_nSeed; // ecx
  __m128d v7; // xmm0
  int m_Put; // eax
  unsigned __int8 *m_pMemory; // rcx

  v3 = *(msg + 4);
  *(msg + 6) = msgInfo->m_nGuid.m_Data;
  *(msg + 4) = v3 | 1;
  m_SoundEventHash = msgInfo->m_SoundEventHash;
  *(msg + 4) = v3 | 3;
  *(msg + 7) = m_SoundEventHash;
  m_Data = msgInfo->m_SourceEntity.m_Data;
  *(msg + 4) = v3 | 7;
  *(msg + 8) = m_Data;
  m_nSeed = msgInfo->m_nSeed;
  *(msg + 4) = v3 | 0xF;
  *(msg + 9) = m_nSeed;
  v7 = *&msgInfo->m_flDelay;
  if ( v7.m128d_f64[0] == 0.0 )
  {
    m_Put = msgInfo->m_fieldData.m_data.m_Put;
    if ( m_Put == 0 )
      return;
LABEL_5:
    m_pMemory = msgInfo->m_fieldData.m_data.m_Memory.m_pMemory;
    *(msg + 4) |= 0x10u;
    std::string::assign(*(msg + 5), m_pMemory, m_Put);
    return;
  }
  *(msg + 4) = v3 | 0x2F;
  *(msg + 12) = _mm_movedup_pd(v7).m128d_f64[0];
  m_Put = msgInfo->m_fieldData.m_data.m_Put;
  if ( m_Put != 0 )
    goto LABEL_5;
}


// CSoundOpGameSystem::SetStopMessage  (line 163, @0x0000000001f38100, libserver.so)  // inlines: GetRaw, set_has_soundevent_guid, set_soundevent_guid
void __fastcall CSoundOpGameSystem::SetStopMessage(
        const CSoundOpGameSystem *const this,
        CMsgSosStopSoundEvent_t *const msg,
        const CSosFilterStopSoundEventInfo_t *msgInfo)
{
  int32 m_Data; // eax

  m_Data = msgInfo->m_nGuid.m_Data;
  *(msg + 4) |= 1u;
  *(msg + 6) = m_Data;
}


// CSoundOpGameSystem::SetStopHashMessage  (line 167, @0x0000000001f38110, libserver.so)  // inlines: GetRaw, set_has_soundevent_hash, set_has_source_entity_index, set_soundevent_hash, set_source_entity_index
void __fastcall CSoundOpGameSystem::SetStopHashMessage(
        const CSoundOpGameSystem *const this,
        CMsgSosStopSoundEventHash_t *const msg,
        const CSosFilterStopSoundEventHashInfo_t *msgInfo)
{
  int v3; // edi
  int32 m_Data; // edx

  v3 = *(msg + 4);
  *(msg + 6) = msgInfo->m_SoundEventHash;
  *(msg + 4) = v3 | 1;
  m_Data = msgInfo->m_SourceEntity.m_Data;
  *(msg + 4) = v3 | 3;
  *(msg + 7) = m_Data;
}


// CSoundOpGameSystem::SetParamsMessage  (line 174, @0x0000000001f38140, libserver.so)  // inlines: GetRaw, set_has_packed_params, set_has_soundevent_guid, set_packed_params, set_soundevent_guid
// calls: std::string::assign(char const*,ulong)
// callers: CSoundOpGameSystem::FrameUpdatePostEntityThink
void __fastcall CSoundOpGameSystem::SetParamsMessage(
        const CSoundOpGameSystem *const this,
        CMsgSosSetSoundEventParams_t *const msg,
        const CSosFilterSetSoundEventFieldsInfo_t *msgInfo)
{
  int v5; // esi
  int v6; // edi
  unsigned __int64 m_Put; // rdx
  unsigned __int8 *m_pMemory; // rsi

  v5 = *(msg + 4);
  v6 = v5 | 3;
  *(msg + 8) = msgInfo->m_nGuid.m_Data;
  *(msg + 4) = v5 | 1;
  m_Put = msgInfo->m_fieldData.m_data.m_Put;
  m_pMemory = msgInfo->m_fieldData.m_data.m_Memory.m_pMemory;
  *(msg + 4) = v6;
  std::string::assign(*(msg + 3), m_pMemory, m_Put);
}


// CSoundOpGameSystem::SetFieldsMessage  (line 180, @0x0000000001f38180, libserver.so)  // inlines: set_has_packed_fields, set_has_stack_hash, set_packed_fields, set_stack_hash
// calls: std::string::assign(char const*,ulong)
// callers: CSoundOpGameSystem::FrameUpdatePostEntityThink
void __fastcall CSoundOpGameSystem::SetFieldsMessage(
        const CSoundOpGameSystem *const this,
        CMsgSosSetLibraryStackFields_t *const msg,
        const CSosFilterSetLibraryStackFieldsInfo_t *msgInfo)
{
  int v5; // esi
  int v6; // edi
  unsigned __int64 m_Put; // rdx
  unsigned __int8 *m_pMemory; // rsi

  v5 = *(msg + 4);
  v6 = v5 | 3;
  *(msg + 8) = msgInfo->m_libStackHash;
  *(msg + 4) = v5 | 1;
  m_Put = msgInfo->m_fieldData.m_data.m_Put;
  m_pMemory = msgInfo->m_fieldData.m_data.m_Memory.m_pMemory;
  *(msg + 4) = v6;
  std::string::assign(*(msg + 3), m_pMemory, m_Put);
}


// CSoundOpGameSystem::FrameUpdatePostEntityThink  (line 189, @0x0000000001f58870, libserver.so)  // inlines: CMsgSosSetLibraryStackFields_t, CMsgSosSetSoundEventParams_t, CMsgSosStartSoundEvent_t, CMsgSosStopSoundEventHash_t, CMsgSosStopSoundEvent_t, CNetMessagePB, FindGameEvent<CMsgSosSetLibraryStackFields_t>, FindGameEvent<CMsgSosSetSoundEventParams_t>, FindGameEvent<CMsgSosStartSoundEvent_t>, FindGameEvent<CMsgSosStopSoundEventHash_t>, FindGameEvent<CMsgSosStopSoundEvent_t>, FindOrCreateGameEvent<CMsgSosSetLibraryStackFields_t>, FindOrCreateGameEvent<CMsgSosSetSoundEventParams_t>, FindOrCreateGameEvent<CMsgSosStartSoundEvent_t>, FindOrCreateGameEvent<CMsgSosStopSoundEventHash_t>, FindOrCreateGameEvent<CMsgSosStopSoundEvent_t>, GetRaw, PostEvent<CMsgSosSetLibraryStackFields_t>, PostEvent<CMsgSosSetSoundEventParams_t>, PostEvent<CMsgSosStartSoundEvent_t>, PostEvent<CMsgSosStopSoundEventHash_t>, PostEvent<CMsgSosStopSoundEvent_t>, RemoveAndDeleteAll, SetStopHashMessage, SetStopMessage, operator[], set_has_soundevent_guid, set_has_soundevent_hash, set_has_source_entity_index, set_soundevent_guid, set_soundevent_hash, set_source_entity_index, ~CMsgSosSetLibraryStackFields_t, ~CMsgSosSetSoundEventParams_t, ~CMsgSosStartSoundEvent_t, ~CMsgSosStopSoundEventHash_t, ~CMsgSosStopSoundEvent_t, ~CNetMessagePB
// calls: CMsgSosSetLibraryStackFields::CMsgSosSetLibraryStackFields, CSoundOpGameSystem::SetFieldsMessage, CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields, CUtlVectorBase<CSosMessageQueue<unsigned int>::Entry_t, CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t, int> >::RemoveAll, CMsgSosStopSoundEvent::CMsgSosStopSoundEvent, CMsgSosStopSoundEvent::~CMsgSosStopSoundEvent, CUtlVectorBase<CSosMessageQueue<SoundEventGuid_t>::Entry_t, CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t, int> >::RemoveAll, CMsgSosStopSoundEventHash::CMsgSosStopSoundEventHash, CMsgSosStopSoundEventHash::~CMsgSosStopSoundEventHash, CMsgSosStartSoundEvent::CMsgSosStartSoundEvent, CSoundOpGameSystem::SetStartMessage, CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent (16 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetLibraryStackFields_t>(bool)::s_hEvent, IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEvent_t>(bool)::s_hEvent, IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEventHash_t>(bool)::s_hEvent, IGameEventSystem::FindOrCreateGameEvent<CMsgSosStartSoundEvent_t>(bool)::s_hEvent, IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetSoundEventParams_t>(bool)::s_hEvent
void __fastcall CSoundOpGameSystem::FrameUpdatePostEntityThink(
        CSoundOpGameSystem *const this,
        const EventServerPostEntityThink_t *const msg)
{
  int m_Size; // edx
  int v4; // r12d
  CSosEventInfo_t *pMessage; // r14
  __int64 v6; // r15
  IGameEventSystem *v7; // r14
  __int16 v8; // r12
  CSosEventInfo_t *v9; // rdi
  int v10; // edx
  int v11; // r12d
  CSosEventInfo_t *v12; // r14
  SosMessageQueueInfoType_t m_msgType; // eax
  __int64 v14; // r15
  int v15; // eax
  IGameEventSystem *v16; // r14
  __int16 v17; // r12
  CSosEventInfo_t *v18; // rdi
  int v19; // r12d
  int v20; // edx
  CSosEventInfo_t *v21; // r14
  __int64 v22; // r15
  int v23; // eax
  int vptr_CSosEventInfo_t; // edx
  IGameEventSystem *v25; // r14
  __int16 v26; // r12
  CSosEventInfo_t *v27; // rdi
  __int64 v28; // r15
  IGameEventSystem *v29; // r14
  __int64 v30; // r15
  IGameEventSystem *v31; // r14
  void (__fastcall *v32)(IGameEventSystem *, __int64, _QWORD, SosMessageQueueInfoType_t *, __int64, _QWORD *, __int64); // [rsp+10h] [rbp-80h]
  void (__fastcall *v33)(IGameEventSystem *, __int64, _QWORD, CSosEventInfo_t *, __int64, _QWORD *, __int64); // [rsp+10h] [rbp-80h]
  void (__fastcall *v34)(IGameEventSystem *, __int64, _QWORD, SosMessageQueueInfoType_t *, __int64, _QWORD *, __int64); // [rsp+10h] [rbp-80h]
  void (__fastcall *v35)(IGameEventSystem *, __int64, _QWORD, SosMessageQueueInfoType_t *, __int64, _QWORD *, __int64); // [rsp+10h] [rbp-80h]
  void (__fastcall *v36)(IGameEventSystem *, __int64, _QWORD, SosMessageQueueInfoType_t *, __int64, _QWORD *, __int64); // [rsp+10h] [rbp-80h]
  SosMessageQueueInfoType_t *p_m_msgType; // [rsp+18h] [rbp-78h]
  CSosEventInfo_t *v38; // [rsp+18h] [rbp-78h]
  SosMessageQueueInfoType_t *v39; // [rsp+18h] [rbp-78h]
  SosMessageQueueInfoType_t *v40; // [rsp+18h] [rbp-78h]
  SosMessageQueueInfoType_t *v41; // [rsp+18h] [rbp-78h]
  _QWORD v42[2]; // [rsp+20h] [rbp-70h] BYREF
  int v43; // [rsp+30h] [rbp-60h]
  int v44; // [rsp+38h] [rbp-58h]
  int v45; // [rsp+3Ch] [rbp-54h]

  m_Size = this->m_serverLibraryStackMessageQueue.m_messages.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        pMessage = this->m_serverLibraryStackMessageQueue.m_messages.m_Memory.m_pMemory[v4].pMessage;
        if ( pMessage->m_msgType == SosMessageQueueInfoType_t::SOSMSGQ_LIBRARY_FIELDS )
          break;
        if ( ++v4 >= m_Size )
          goto LABEL_6;
      }
      CMsgSosSetLibraryStackFields::CMsgSosSetLibraryStackFields(v42);
      v42[0] = off_3FCD830;
      CSoundOpGameSystem::SetFieldsMessage(this, v42, pMessage);
      v6 = IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetLibraryStackFields_t>(bool)::s_hEvent;
      p_m_msgType = &pMessage[10].m_msgType;
      v7 = g_pGameEventSystem;
      v32 = *(*g_pGameEventSystem + 128LL);
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetLibraryStackFields_t>(bool)::s_hEvent);
      v32(v7, 0xFFFFFFFFLL, 0, p_m_msgType, v6, v42, 40);
      ++v4;
      v42[0] = &off_3FCD770;
      CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields(v42);
      m_Size = this->m_serverLibraryStackMessageQueue.m_messages.m_Size;
    }
    while ( v4 < m_Size );
  }
LABEL_6:
  v8 = 0;
  if ( m_Size > 0 )
  {
    do
    {
      v9 = this->m_serverLibraryStackMessageQueue.m_messages.m_Memory.m_pMemory[v8].pMessage;
      if ( v9 != 0 )
        (*(v9->_vptr_CSosEventInfo_t + 1))(v9, msg);
      ++v8;
    }
    while ( v8 < this->m_serverLibraryStackMessageQueue.m_messages.m_Size );
  }
  CUtlVectorBase<CSosMessageQueue<unsigned int>::Entry_t,CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t,int>>::RemoveAll(&this->m_serverLibraryStackMessageQueue.m_messages);
  v10 = this->m_serverGuidMessageQueue.m_messages.m_Size;
  if ( v10 > 0 )
  {
    v11 = 0;
    do
    {
      while ( 1 )
      {
        v12 = this->m_serverGuidMessageQueue.m_messages.m_Memory.m_pMemory[v11].pMessage;
        m_msgType = v12->m_msgType;
        if ( m_msgType != SosMessageQueueInfoType_t::SOSMSGQ_STOP )
          break;
        CMsgSosStopSoundEvent::CMsgSosStopSoundEvent(v42);
        v14 = IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEvent_t>(bool)::s_hEvent;
        v42[0] = off_3FCD230;
        v15 = *(&v12->m_msgType + 1);
        v43 |= 1u;
        v44 = v15;
        v38 = v12 + 1;
        v16 = g_pGameEventSystem;
        v33 = *(*g_pGameEventSystem + 128LL);
        (*(*g_pNetworkMessages + 96LL))(
          g_pNetworkMessages,
          IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEvent_t>(bool)::s_hEvent);
        v33(v16, 0xFFFFFFFFLL, 0, v38, v14, v42, 32);
        ++v11;
        v42[0] = &off_3FCD170;
        CMsgSosStopSoundEvent::~CMsgSosStopSoundEvent(v42);
        v10 = this->m_serverGuidMessageQueue.m_messages.m_Size;
        if ( v11 >= v10 )
          goto LABEL_18;
      }
      if ( m_msgType == SosMessageQueueInfoType_t::SOSMSGQ_SOUND_FIELDS )
      {
        CMsgSosSetSoundEventParams::CMsgSosSetSoundEventParams(v42);
        v42[0] = off_3FCD630;
        CSoundOpGameSystem::SetParamsMessage(this, v42, v12);
        v30 = IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetSoundEventParams_t>(bool)::s_hEvent;
        v41 = &v12[10].m_msgType;
        v31 = g_pGameEventSystem;
        v36 = *(*g_pGameEventSystem + 128LL);
        (*(*g_pNetworkMessages + 96LL))(
          g_pNetworkMessages,
          IGameEventSystem::FindOrCreateGameEvent<CMsgSosSetSoundEventParams_t>(bool)::s_hEvent);
        v36(v31, 0xFFFFFFFFLL, 0, v41, v30, v42, 40);
        v42[0] = &off_3FCD570;
        CMsgSosSetSoundEventParams::~CMsgSosSetSoundEventParams(v42);
        v10 = this->m_serverGuidMessageQueue.m_messages.m_Size;
      }
      else if ( m_msgType == SosMessageQueueInfoType_t::SOSMSGQ_START )
      {
        CMsgSosStartSoundEvent::CMsgSosStartSoundEvent(v42);
        v42[0] = off_3FCD030;
        CSoundOpGameSystem::SetStartMessage(this, v42, v12);
        v28 = IGameEventSystem::FindOrCreateGameEvent<CMsgSosStartSoundEvent_t>(bool)::s_hEvent;
        v40 = &v12[12].m_msgType;
        v29 = g_pGameEventSystem;
        v35 = *(*g_pGameEventSystem + 128LL);
        (*(*g_pNetworkMessages + 96LL))(
          g_pNetworkMessages,
          IGameEventSystem::FindOrCreateGameEvent<CMsgSosStartSoundEvent_t>(bool)::s_hEvent);
        v35(v29, 0xFFFFFFFFLL, 0, v40, v28, v42, 56);
        v42[0] = &off_3FCCF70;
        CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent(v42);
        v10 = this->m_serverGuidMessageQueue.m_messages.m_Size;
      }
      ++v11;
    }
    while ( v11 < v10 );
  }
LABEL_18:
  v17 = 0;
  if ( v10 > 0 )
  {
    do
    {
      v18 = this->m_serverGuidMessageQueue.m_messages.m_Memory.m_pMemory[v17].pMessage;
      if ( v18 != 0 )
        (*(v18->_vptr_CSosEventInfo_t + 1))(v18);
      ++v17;
    }
    while ( v17 < this->m_serverGuidMessageQueue.m_messages.m_Size );
  }
  v19 = 0;
  CUtlVectorBase<CSosMessageQueue<SoundEventGuid_t>::Entry_t,CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t,int>>::RemoveAll(&this->m_serverGuidMessageQueue.m_messages);
  v20 = this->m_serverSoundEventHashQueue.m_messages.m_Size;
  if ( v20 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v21 = this->m_serverSoundEventHashQueue.m_messages.m_Memory.m_pMemory[v19].pMessage;
        if ( v21->m_msgType == SosMessageQueueInfoType_t::SOSMSGQ_STOP_HASH )
          break;
        if ( ++v19 >= v20 )
          goto LABEL_27;
      }
      CMsgSosStopSoundEventHash::CMsgSosStopSoundEventHash(v42);
      v22 = IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEventHash_t>(bool)::s_hEvent;
      v42[0] = off_3FCD430;
      v23 = v43 | 3;
      v44 = *(&v21->m_msgType + 1);
      v43 |= 1u;
      vptr_CSosEventInfo_t = v21[1]._vptr_CSosEventInfo_t;
      v43 = v23;
      v39 = &v21[1].m_msgType;
      v45 = vptr_CSosEventInfo_t;
      v25 = g_pGameEventSystem;
      v34 = *(*g_pGameEventSystem + 128LL);
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<CMsgSosStopSoundEventHash_t>(bool)::s_hEvent);
      v34(v25, 0xFFFFFFFFLL, 0, v39, v22, v42, 32);
      ++v19;
      v42[0] = &off_3FCD370;
      CMsgSosStopSoundEventHash::~CMsgSosStopSoundEventHash(v42);
      v20 = this->m_serverSoundEventHashQueue.m_messages.m_Size;
    }
    while ( v19 < v20 );
  }
LABEL_27:
  v26 = 0;
  if ( v20 > 0 )
  {
    do
    {
      v27 = this->m_serverSoundEventHashQueue.m_messages.m_Memory.m_pMemory[v26].pMessage;
      if ( v27 != 0 )
        (*(v27->_vptr_CSosEventInfo_t + 1))(v27);
      ++v26;
    }
    while ( v26 < this->m_serverSoundEventHashQueue.m_messages.m_Size );
  }
  CUtlVectorBase<CSosMessageQueue<unsigned int>::Entry_t,CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t,int>>::RemoveAll(&this->m_serverSoundEventHashQueue.m_messages);
}


// CSoundOpGameSystem::DoStartSoundEvent  (line 292, @0x0000000001f69ab0, libserver.so)  // inlines: AddMessage, AddStartStop, AddToTail, CEntityIndex, CSosCopyRecipientFilter, CSosEventInfoWithFieldData_t, CSosFilterInfo_t, CSosFilterStartSoundEventInfo_t, CSosPackedFieldData, CSosStartSoundEventInfo_t, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, CUtlMemory, CUtlVector, CUtlVectorBase, Clear, CopyBuffer, CopyConstruct<CEntityIndex>, CopyConstruct<CSosMessageQueue<SoundEventGuid_t>::Entry_t>, CopyReadOnlyData, Element, FindFirstKeyIndex, GetBool, GetFlagsForFilter, GetInt, GrowMemory, Init, RemoveAll, SoundEventGuid_t, operator==, operator[], ~CSosEventInfo_t, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory
// calls: operator new, CUtlBuffer::CUtlBuffer, CUtlBuffer::SetExternalBuffer, CUtlBuffer::AddNullTermination, CUtlBuffer::Put, LoggingSystem_IsChannelEnabled, CGlobalVarsBase::curtime, Plat_FloatTime, LoggingSystem_Log, CSosMessageQueue<SoundEventGuid_t>::RemoveAndDeleteAll, CUtlMemory<CEntityIndex, int>::Grow, V_stristr_fast(char const*,char const*) (17 total)
// callers: CSoundOpGameSystem::OnStartSoundEvent, CSoundOpGameSystem::StartSoundEvent
// strings: "SV", "%s:  %f tick(%d) curtime(%f) DoStartSoundEvent(%s)\n", "coins"
SndOpEventGuid_t __fastcall CSoundOpGameSystem::DoStartSoundEvent(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *pFilter,
        SoundEventGuid_t nGuid,
        HSOUNDEVENTHASH nSoundEventHash,
        CEntityIndex entIndex,
        SOSRANDSEED nSeed,
        double flDelay,
        const void *pPackedFieldData,
        int nPackedFieldDataBytes)
{
  char *v12; // rbx
  int v13; // r13d
  int i; // r13d
  int v15; // eax
  __int64 v16; // rdx
  int v17; // ecx
  int *v18; // rdx
  bool v19; // zf
  __int64 m_Size; // r12
  CSosMessageQueue<SoundEventGuid_t>::Entry_t *m_pMemory; // rcx
  __int16 v22; // ax
  int v23; // eax
  __int64 v24; // r12
  CSosMessageQueue<SoundEventGuid_t>::Entry_t *v25; // r12
  const char *v26; // rbx
  double v27; // xmm0_8
  unsigned int tickcount; // r13d
  double v29; // xmm0_8
  CSosMessageQueue<SoundEventGuid_t> *p_m_serverGuidMessageQueue; // rdi
  SosMessageQueueInfoType_t m_msgType; // eax
  const char *v32; // rax
  int v33; // [rsp+Ch] [rbp-74h]
  int v35; // [rsp+28h] [rbp-58h]
  SndOpEventGuid_t sndOpGuid; // [rsp+30h] [rbp-50h]
  CUtlBuffer *v40; // [rsp+48h] [rbp-38h]
  float v41; // [rsp+48h] [rbp-38h]

  sndOpGuid.m_nGuid.m_Data = (*(*(g_pSoundOpSystem + 1) + 112LL))(g_pSoundOpSystem + 8, nSoundEventHash);
  v12 = operator new(0xF0u);
  *v12 = off_3FCACF0;
  *(v12 + 8) = 0;
  *(v12 + 9) = 3;
  v40 = (v12 + 80);
  CUtlBuffer::CUtlBuffer(v12 + 1, 0, 0, 0);
  CUtlBuffer::SetExternalBuffer(v12 + 1, v12 + 48, 32, 0, 2);
  *(v12 + 2) = 0;
  *(v12 + 86) = -1;
  *(v12 + 25) = &off_3FCCE90;
  *(v12 + 40) = 0;
  *(v12 + 42) = -1;
  *(v12 + 44) = 0;
  *(v12 + 41) = -1;
  *(v12 + 45) = -1;
  v12[184] = 0;
  *(v12 + 24) = 0;
  *(v12 + 52) = 0;
  *(v12 + 54) = 0;
  *(v12 + 28) = 0;
  *(v12 + 58) = 0;
  *(v12 + 59) = 0;
  *v12 = off_3FCD8F0;
  if ( pFilter != 0 )
  {
    v13 = 2 * ((*(pFilter->_vptr_IRecipientFilter + 3))(pFilter) == 1) + 1;
    if ( (*(pFilter->_vptr_IRecipientFilter + 4))(pFilter) != 0 )
      v13 |= 4u;
    *(v12 + 52) = v13;
    for ( i = 0; i < (*(pFilter->_vptr_IRecipientFilter + 5))(pFilter); ++i )
    {
      v15 = (*(pFilter->_vptr_IRecipientFilter + 6))(pFilter, i);
      if ( v15 >= 0 )
      {
        v16 = *(v12 + 54);
        v17 = *(v12 + 54);
        if ( v16 == *(v12 + 58) )
        {
          v33 = v15;
          v35 = *(v12 + 54);
          CUtlMemory<CEntityIndex,int>::Grow(v12 + 14, 1);
          v17 = *(v12 + 54);
          v15 = v33;
          v16 = v35;
        }
        *(v12 + 54) = v17 + 1;
        v18 = (*(v12 + 28) + 4 * v16);
        if ( v18 != 0 )
          *v18 = v15;
      }
    }
  }
  *(v12 + 40) = nGuid;
  *(v12 + 24) = flDelay;
  *(v12 + 41) = nSoundEventHash;
  *(v12 + 42) = entIndex;
  *(v12 + 86) = nSeed;
  if ( nPackedFieldDataBytes > 0 )
  {
    v19 = (v12[105] & 8) == 0;
    *(v12 + 8) = 0;
    if ( v19 )
    {
      *(v12 + 24) = 0;
      *(v12 + 25) = 0;
      v12[104] = 0;
      *(v12 + 29) = 0;
      *(v12 + 28) = -1;
      CUtlBuffer::AddNullTermination(v40);
    }
    else
    {
      CUtlBuffer::SetExternalBuffer(v40, v12 + 48, 32, 0, 2);
    }
    *(v12 + 24) = 0;
    *(v12 + 25) = 0;
    v12[104] = 0;
    *(v12 + 29) = 0;
    *(v12 + 28) = -1;
    CUtlBuffer::AddNullTermination(v40);
    CUtlBuffer::Put(v40, pPackedFieldData, nPackedFieldDataBytes);
  }
  m_Size = this->m_serverGuidMessageQueue.m_messages.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_serverGuidMessageQueue.m_messages.m_Memory.m_pMemory;
    v22 = 0;
    if ( m_pMemory->key.m_Data == nGuid.m_Data )
    {
LABEL_31:
      if ( *(v12 + 2) == 1 )
      {
        p_m_serverGuidMessageQueue = &this->m_serverGuidMessageQueue;
        m_msgType = m_pMemory[v22].pMessage->m_msgType;
        if ( m_msgType == SosMessageQueueInfoType_t::SOSMSGQ_START )
        {
          CSosMessageQueue<SoundEventGuid_t>::RemoveAndDeleteAll(p_m_serverGuidMessageQueue, nGuid);
          (*(*v12 + 8LL))(v12);
          goto LABEL_25;
        }
        if ( m_msgType == SosMessageQueueInfoType_t::SOSMSGQ_SOUND_FIELDS )
        {
          CSosMessageQueue<SoundEventGuid_t>::RemoveAndDeleteAll(p_m_serverGuidMessageQueue, nGuid);
          m_Size = this->m_serverGuidMessageQueue.m_messages.m_Size;
        }
      }
    }
    else
    {
      while ( ++v22 < m_Size )
      {
        if ( m_pMemory[v22].key.m_Data == nGuid.m_Data )
        {
          if ( v22 == -1 )
            break;
          goto LABEL_31;
        }
      }
    }
  }
  v23 = m_Size;
  if ( m_Size == this->m_serverGuidMessageQueue.m_messages.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t,int>::Grow(
      &this->m_serverGuidMessageQueue.m_messages.m_Memory,
      1);
    v23 = this->m_serverGuidMessageQueue.m_messages.m_Size;
  }
  v24 = m_Size;
  v19 = &this->m_serverGuidMessageQueue.m_messages.m_Memory.m_pMemory[v24] == 0;
  v25 = &this->m_serverGuidMessageQueue.m_messages.m_Memory.m_pMemory[v24];
  this->m_serverGuidMessageQueue.m_messages.m_Size = v23 + 1;
  if ( !v19 )
  {
    v25->key = nGuid;
    v25->pMessage = v12;
  }
LABEL_25:
  if ( sos_debug_emit.m_pParent->m_Value.m_nValue != 0 )
  {
    v26 = (*(*(g_pSoundOpSystem + 1) + 16LL))(g_pSoundOpSystem + 8, nSoundEventHash);
    if ( v26 == 0 )
      return ((*&sndOpGuid << 32) | nGuid.m_Data);
  }
  else
  {
    if ( dota_debug_lasthit_timing.m_pParent->m_Value.m_nValue == 0 )
      return ((*&sndOpGuid << 32) | nGuid.m_Data);
    v32 = (*(*(g_pSoundOpSystem + 1) + 16LL))(g_pSoundOpSystem + 8, nSoundEventHash);
    v26 = v32;
    if ( v32 == 0
      || V_stristr_fast(v32, "attack") == 0 && V_stristr_fast(v26, "impact") == 0 && V_stristr_fast(v26, "coins") == 0 )
    {
      return ((*&sndOpGuid << 32) | nGuid.m_Data);
    }
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    *&v27 = CGlobalVarsBase::curtime(gpGlobals, 0);
    v41 = *&v27;
    tickcount = gpGlobals->tickcount;
    v29 = Plat_FloatTime(v27);
    LoggingSystem_Log(
      LOG_SERVER,
      1,
      "%s:  %f tick(%d) curtime(%f) DoStartSoundEvent(%s)\n",
      "SV",
      tickcount,
      v26,
      v29,
      v41);
  }
  return ((*&sndOpGuid << 32) | nGuid.m_Data);
}


// CSoundOpGameSystem::DoStopSoundEvent  (line 434, @0x0000000001f6d210, libserver.so)  // inlines: AddMessage, AddStartStop, AddToTail, CSosCopyRecipientFilter, CSosFilterInfo_t, CSosFilterStopSoundEventInfo_t, CSosStopSoundEventInfo_t, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, CopyConstruct<CSosMessageQueue<SoundEventGuid_t>::Entry_t>, Element, FindFirstKeyIndex, GetFlagsForFilter, GrowMemory, Init, SoundEventGuid_t, operator==, operator[]
// calls: operator new, CSosMessageQueue<SoundEventGuid_t>::RemoveAndDeleteAll, CUtlMemory<CEntityIndex, int>::Grow, CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t, int>::Grow
// callers: CSoundOpGameSystem::OnStopSoundEvent, CSoundOpGameSystem::StopSoundEvent, CSoundOpGameSystem::snd_sos_sv_soundevent_stop_last
void __fastcall CSoundOpGameSystem::DoStopSoundEvent(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *pFilter,
        SoundEventGuid_t nGuid)
{
  int *v6; // rbx
  int v7; // r14d
  int i; // r14d
  int v9; // eax
  __int64 v10; // rdx
  int v11; // esi
  int *v12; // rdx
  __int64 m_Size; // r14
  CSosMessageQueue<SoundEventGuid_t>::Entry_t *m_pMemory; // rdx
  __int16 v15; // cx
  int v16; // eax
  __int64 v17; // r14
  bool v18; // zf
  CSosMessageQueue<SoundEventGuid_t>::Entry_t *v19; // r14
  CSosMessageQueue<SoundEventGuid_t> *p_m_serverGuidMessageQueue; // rdi
  SosMessageQueueInfoType_t m_msgType; // eax
  int v22; // [rsp+0h] [rbp-40h]
  int v23; // [rsp+4h] [rbp-3Ch]

  v6 = operator new(0x38u);
  v6[3] = 0;
  v6[2] = 1;
  *(v6 + 2) = &off_3FCCE90;
  v6[6] = 0;
  v6[8] = 0;
  *(v6 + 5) = 0;
  v6[12] = 0;
  v6[13] = 0;
  *v6 = off_3FCD910;
  if ( pFilter != 0 )
  {
    v7 = 2 * ((*(pFilter->_vptr_IRecipientFilter + 3))(pFilter) == 1) + 1;
    if ( (*(pFilter->_vptr_IRecipientFilter + 4))(pFilter) != 0 )
      v7 |= 4u;
    v6[6] = v7;
    for ( i = 0; i < (*(pFilter->_vptr_IRecipientFilter + 5))(pFilter); ++i )
    {
      v9 = (*(pFilter->_vptr_IRecipientFilter + 6))(pFilter, i);
      if ( v9 >= 0 )
      {
        v10 = v6[8];
        v11 = v6[8];
        if ( v10 == v6[12] )
        {
          v22 = v9;
          v23 = v6[8];
          CUtlMemory<CEntityIndex,int>::Grow((v6 + 10), 1);
          v11 = v6[8];
          v9 = v22;
          v10 = v23;
        }
        v6[8] = v11 + 1;
        v12 = (*(v6 + 5) + 4 * v10);
        if ( v12 != 0 )
          *v12 = v9;
      }
    }
  }
  v6[3] = nGuid.m_Data;
  m_Size = this->m_serverGuidMessageQueue.m_messages.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_serverGuidMessageQueue.m_messages.m_Memory.m_pMemory;
    v15 = 0;
    if ( m_pMemory->key.m_Data == nGuid.m_Data )
    {
LABEL_23:
      if ( v6[2] == 1 )
      {
        p_m_serverGuidMessageQueue = &this->m_serverGuidMessageQueue;
        m_msgType = m_pMemory[v15].pMessage->m_msgType;
        if ( m_msgType == SosMessageQueueInfoType_t::SOSMSGQ_START )
        {
          CSosMessageQueue<SoundEventGuid_t>::RemoveAndDeleteAll(p_m_serverGuidMessageQueue, nGuid);
          (*(*v6 + 8LL))(v6);
          return;
        }
        if ( m_msgType == SosMessageQueueInfoType_t::SOSMSGQ_SOUND_FIELDS )
        {
          CSosMessageQueue<SoundEventGuid_t>::RemoveAndDeleteAll(p_m_serverGuidMessageQueue, nGuid);
          m_Size = this->m_serverGuidMessageQueue.m_messages.m_Size;
        }
      }
    }
    else
    {
      while ( ++v15 < m_Size )
      {
        if ( m_pMemory[v15].key.m_Data == nGuid.m_Data )
        {
          if ( v15 == -1 )
            break;
          goto LABEL_23;
        }
      }
    }
  }
  v16 = m_Size;
  if ( m_Size == this->m_serverGuidMessageQueue.m_messages.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t,int>::Grow(
      &this->m_serverGuidMessageQueue.m_messages.m_Memory,
      1);
    v16 = this->m_serverGuidMessageQueue.m_messages.m_Size;
  }
  v17 = m_Size;
  v18 = &this->m_serverGuidMessageQueue.m_messages.m_Memory.m_pMemory[v17] == 0;
  v19 = &this->m_serverGuidMessageQueue.m_messages.m_Memory.m_pMemory[v17];
  this->m_serverGuidMessageQueue.m_messages.m_Size = v16 + 1;
  if ( !v18 )
  {
    v19->key = nGuid;
    v19->pMessage = v6;
  }
}


// CSoundOpGameSystem::DoStopSoundEventHash  (line 450, @0x0000000001f6da80, libserver.so)  // inlines: AddMessage, AddStartStop, AddToTail, CEntityIndex, CSosCopyRecipientFilter, CSosFilterInfo_t, CSosFilterStopSoundEventHashInfo_t, CSosStopSoundEventHashInfo_t, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, CopyConstruct<CSosMessageQueue<unsigned int>::Entry_t>, Element, FindFirstKeyIndex, GetFlagsForFilter, GrowMemory, Init, operator[]
// calls: operator new, CSosMessageQueue<unsigned int>::RemoveAndDeleteAll, CUtlMemory<CEntityIndex, int>::Grow, CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t, int>::Grow
// callers: CSoundOpGameSystem::OnStopSoundEventHash, CSoundOpGameSystem::StopSoundEvent
void __fastcall CSoundOpGameSystem::DoStopSoundEventHash(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *pFilter,
        HSOUNDEVENTHASH hSoundEventHash,
        CEntityIndex entIndex)
{
  CUtlMemory<CEntityIndex,int> *v7; // r15
  int v8; // ebx
  int i; // ebx
  int v10; // eax
  __int64 m_nAllocationCount; // rcx
  int v12; // esi
  int *p_m_Data; // rcx
  __int64 m_Size; // rbx
  CSosMessageQueue<unsigned int>::Entry_t *m_pMemory; // rsi
  __int16 v16; // cx
  int v17; // eax
  __int64 v18; // rbx
  bool v19; // zf
  CSosMessageQueue<unsigned int>::Entry_t *v20; // rbx
  CSosMessageQueue<unsigned int> *p_m_serverSoundEventHashQueue; // rdi
  SosMessageQueueInfoType_t m_msgType; // eax
  int v23; // [rsp+Ch] [rbp-44h]
  int v24; // [rsp+18h] [rbp-38h]

  v7 = operator new(0x40u);
  LODWORD(v7[1].m_pMemory) = -1;
  v7->m_nAllocationCount = 2;
  v7->m_nGrowSize = -1;
  *&v7[1].m_nAllocationCount = &off_3FCCE90;
  LODWORD(v7[2].m_pMemory) = 0;
  v7[2].m_nAllocationCount = 0;
  v7[3].m_pMemory = 0;
  v7[3].m_nAllocationCount = 0;
  v7[3].m_nGrowSize = 0;
  v7->m_pMemory = off_3FCD930;
  if ( pFilter != 0 )
  {
    v8 = 2 * ((*(pFilter->_vptr_IRecipientFilter + 3))(pFilter) == 1) + 1;
    if ( (*(pFilter->_vptr_IRecipientFilter + 4))(pFilter) != 0 )
      v8 |= 4u;
    LODWORD(v7[2].m_pMemory) = v8;
    for ( i = 0; i < (*(pFilter->_vptr_IRecipientFilter + 5))(pFilter); ++i )
    {
      v10 = (*(pFilter->_vptr_IRecipientFilter + 6))(pFilter, i);
      if ( v10 >= 0 )
      {
        m_nAllocationCount = v7[2].m_nAllocationCount;
        v12 = v7[2].m_nAllocationCount;
        if ( m_nAllocationCount == v7[3].m_nAllocationCount )
        {
          v23 = v10;
          v24 = v7[2].m_nAllocationCount;
          CUtlMemory<CEntityIndex,int>::Grow(v7 + 3, 1);
          v12 = v7[2].m_nAllocationCount;
          v10 = v23;
          m_nAllocationCount = v24;
        }
        v7[2].m_nAllocationCount = v12 + 1;
        p_m_Data = &v7[3].m_pMemory[m_nAllocationCount].m_Data;
        if ( p_m_Data != 0 )
          *p_m_Data = v10;
      }
    }
  }
  v7->m_nGrowSize = hSoundEventHash;
  LODWORD(v7[1].m_pMemory) = entIndex;
  m_Size = this->m_serverSoundEventHashQueue.m_messages.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_serverSoundEventHashQueue.m_messages.m_Memory.m_pMemory;
    v16 = 0;
    if ( hSoundEventHash == m_pMemory->key )
    {
LABEL_23:
      if ( v7->m_nAllocationCount == 1 )
      {
        p_m_serverSoundEventHashQueue = &this->m_serverSoundEventHashQueue;
        m_msgType = m_pMemory[v16].pMessage->m_msgType;
        if ( m_msgType == SosMessageQueueInfoType_t::SOSMSGQ_START )
        {
          CSosMessageQueue<unsigned int>::RemoveAndDeleteAll(p_m_serverSoundEventHashQueue, hSoundEventHash);
          (*&v7->m_pMemory[2].m_Data)(v7);
          return;
        }
        if ( m_msgType == SosMessageQueueInfoType_t::SOSMSGQ_SOUND_FIELDS )
        {
          CSosMessageQueue<unsigned int>::RemoveAndDeleteAll(p_m_serverSoundEventHashQueue, hSoundEventHash);
          m_Size = this->m_serverSoundEventHashQueue.m_messages.m_Size;
        }
      }
    }
    else
    {
      while ( ++v16 < m_Size )
      {
        if ( hSoundEventHash == m_pMemory[v16].key )
        {
          if ( v16 == -1 )
            break;
          goto LABEL_23;
        }
      }
    }
  }
  v17 = m_Size;
  if ( this->m_serverSoundEventHashQueue.m_messages.m_Memory.m_nAllocationCount == m_Size )
  {
    CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t,int>::Grow(
      &this->m_serverSoundEventHashQueue.m_messages.m_Memory,
      1);
    v17 = this->m_serverSoundEventHashQueue.m_messages.m_Size;
  }
  v18 = m_Size;
  v19 = &this->m_serverSoundEventHashQueue.m_messages.m_Memory.m_pMemory[v18] == 0;
  v20 = &this->m_serverSoundEventHashQueue.m_messages.m_Memory.m_pMemory[v18];
  this->m_serverSoundEventHashQueue.m_messages.m_Size = v17 + 1;
  if ( !v19 )
  {
    v20->key = hSoundEventHash;
    v20->pMessage = v7;
  }
}


// CSoundOpGameSystem::DoSetSoundEventParams  (line 470, @0x0000000001f694a0, libserver.so)  // inlines: AddMessage, AddToTail, CSosEventInfoWithFieldData_t, CSosFilterInfo_t, CSosFilterSetSoundEventFieldsInfo_t, CSosPackedFieldData, CSosSetSoundEventFieldsInfo_t, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, Clear, CopyBuffer, CopyConstruct<CEntityIndex>, CopyConstruct<CSosMessageQueue<SoundEventGuid_t>::Entry_t>, CopyReadOnlyData, Element, GetFlagsForFilter, GrowMemory, Init, IsReadOnly, RemoveAll, SoundEventGuid_t, StartAddFieldInfo, operator[], ~CSosEventInfo_t, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory
// calls: CUtlBuffer::AddNullTermination, CUtlBuffer::Put, CUtlBuffer::SetExternalBuffer, Warning, CSosPackedFieldData::AddOrReplace, CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t, int>::Grow, operator new, CUtlBuffer::CUtlBuffer, CSosCopyRecipientFilter::CSosCopyRecipientFilter, CUtlMemory<CEntityIndex, int>::Grow, CUtlMemory<unsigned char, int>::Purge, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>::Purge (14 total)
// callers: CSoundOpGameSystem::OnSetSoundEventParams, CSoundOpGameSystem::SetSoundEventParam
// strings: "WARNING: Attempting to set fields on a stopped sound\n"
void __fastcall CSoundOpGameSystem::DoSetSoundEventParams(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *pFilter,
        SoundEventGuid_t nGuid,
        HSOSOPFIELDHASH hOpFieldHash,
        const CSosFieldData *pFieldData,
        __int16 nIndex,
        const void *pPackedFieldData,
        int nPackedFieldDataBytes)
{
  int32 m_Data; // ebx
  int v9; // r13d
  __int64 m_Size; // r8
  CSoundOpGameSystem *v11; // r10
  int v14; // edx
  CSosMessageQueue<SoundEventGuid_t>::Entry_t *v15; // rcx
  CSosMessageQueue<SoundEventGuid_t>::Entry_t *v16; // rax
  int v17; // eax
  __int64 v18; // r8
  CSosMessageQueue<SoundEventGuid_t>::Entry_t *v19; // rax
  char *pMessage; // rax
  CUtlBuffer *v21; // rbx
  bool v22; // zf
  int v23; // edx
  char *v24; // rax
  char v25; // al
  int v26; // edx
  int v27; // ebx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // esi
  CEntityIndex *v31; // rcx
  int v32; // [rsp+4h] [rbp-6Ch]
  int v33; // [rsp+10h] [rbp-60h]
  CUtlBuffer *v34; // [rsp+18h] [rbp-58h]
  int v35; // [rsp+18h] [rbp-58h]
  int32 v36; // [rsp+18h] [rbp-58h]
  int pNewEventa; // [rsp+20h] [rbp-50h]
  CSosFilterSetSoundEventFieldsInfo_t *pNewEvent; // [rsp+20h] [rbp-50h]
  CSoundOpGameSystem *thisa; // [rsp+28h] [rbp-48h]
  CSoundOpGameSystem *thisb; // [rsp+28h] [rbp-48h]
  char *hOpFieldHashb; // [rsp+38h] [rbp-38h]

  m_Data = nGuid.m_Data;
  v9 = nPackedFieldDataBytes;
  if ( nGuid.m_Data == 0 )
    return;
  m_Size = this->m_serverGuidMessageQueue.m_messages.m_Size;
  v11 = this;
  v14 = this->m_serverGuidMessageQueue.m_messages.m_Size - 1;
  if ( v14 < 0 )
    goto LABEL_7;
  v15 = &this->m_serverGuidMessageQueue.m_messages.m_Memory.m_pMemory[v14];
  v16 = v15 - 1;
  if ( m_Data != v15->key.m_Data )
  {
    while ( --v14 != -1 )
    {
      v15 = v16--;
      if ( m_Data == v16[1].key.m_Data )
        goto LABEL_17;
    }
    goto LABEL_7;
  }
LABEL_17:
  pMessage = v15->pMessage;
  v23 = *(pMessage + 2);
  if ( v23 != 3 && v23 != 0 )
  {
    if ( (v23 - 1) <= 1 )
    {
      Warning("WARNING: Attempting to set fields on a stopped sound\n");
      v11 = this;
      m_Size = this->m_serverGuidMessageQueue.m_messages.m_Size;
    }
    goto LABEL_7;
  }
  if ( nPackedFieldDataBytes > 0 && *(pMessage + 25) != 0 || *(pMessage + 8) == 0 && *(pMessage + 25) > 0 )
  {
LABEL_7:
    v17 = m_Size;
    if ( v11->m_serverGuidMessageQueue.m_messages.m_Memory.m_nAllocationCount == m_Size )
    {
      pNewEventa = m_Size;
      thisb = v11;
      CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t,int>::Grow(
        &v11->m_serverGuidMessageQueue.m_messages.m_Memory,
        1);
      v11 = thisb;
      m_Size = pNewEventa;
      v17 = thisb->m_serverGuidMessageQueue.m_messages.m_Size;
    }
    v18 = m_Size;
    v11->m_serverGuidMessageQueue.m_messages.m_Size = v17 + 1;
    v19 = &v11->m_serverGuidMessageQueue.m_messages.m_Memory.m_pMemory[v18];
    if ( v19 != 0 )
    {
      v19->key.m_Data = m_Data;
      v19->pMessage = 0;
      thisa = &v11->m_serverGuidMessageQueue.m_messages.m_Memory.m_pMemory[v18];
    }
    else
    {
      thisa = 0;
    }
    pMessage = thisa->m_pName;
    if ( pMessage == 0 )
    {
      v24 = operator new(0xD0u);
      *v24 = off_3FCACF0;
      *(v24 + 8) = 0;
      *(v24 + 9) = 3;
      pNewEvent = v24;
      v34 = (v24 + 80);
      CUtlBuffer::CUtlBuffer(v24 + 1, 0, 0, 0);
      CUtlBuffer::SetExternalBuffer(v34, pNewEvent->m_fieldData.m_fixedData, 32, 0, 2);
      pNewEvent->_vptr_CSosEventInfo_t = off_3FCAD70;
      pNewEvent->m_nGuid.m_Data = 0;
      pNewEvent->m_msgType = SosMessageQueueInfoType_t::SOSMSGQ_SOUND_FIELDS;
      CSosCopyRecipientFilter::CSosCopyRecipientFilter(&pNewEvent->m_recipientFilter);
      pNewEvent->_vptr_CSosEventInfo_t = off_3FCD950;
      if ( pFilter != 0 )
      {
        v35 = 2 * ((*(pFilter->_vptr_IRecipientFilter + 3))(pFilter) == 1) + 1;
        v25 = (*(pFilter->_vptr_IRecipientFilter + 4))(pFilter);
        v26 = v35;
        v36 = m_Data;
        if ( v25 != 0 )
          v26 |= 4u;
        v27 = 0;
        pNewEvent->m_recipientFilter.m_Flags = v26;
        while ( v27 < (*(pFilter->_vptr_IRecipientFilter + 5))(pFilter) )
        {
          v28 = (*(pFilter->_vptr_IRecipientFilter + 6))(pFilter, v27);
          if ( v28 >= 0 )
          {
            v29 = pNewEvent->m_recipientFilter.m_Recipients.m_Size;
            v30 = pNewEvent->m_recipientFilter.m_Recipients.m_Size;
            if ( v29 == pNewEvent->m_recipientFilter.m_Recipients.m_Memory.m_nAllocationCount )
            {
              v32 = v28;
              v33 = pNewEvent->m_recipientFilter.m_Recipients.m_Size;
              CUtlMemory<CEntityIndex,int>::Grow(&pNewEvent->m_recipientFilter.m_Recipients.m_Memory, 1);
              v30 = pNewEvent->m_recipientFilter.m_Recipients.m_Size;
              v28 = v32;
              v29 = v33;
            }
            pNewEvent->m_recipientFilter.m_Recipients.m_Size = v30 + 1;
            v31 = &pNewEvent->m_recipientFilter.m_Recipients.m_Memory.m_pMemory[v29];
            if ( v31 != 0 )
              v31->m_Data = v28;
          }
          ++v27;
        }
        m_Data = v36;
        v9 = nPackedFieldDataBytes;
      }
      pMessage = pNewEvent;
      pNewEvent->m_nGuid.m_Data = m_Data;
      thisa->m_pName = pNewEvent;
    }
  }
  if ( v9 <= 0 )
  {
    CSosPackedFieldData::AddOrReplace((pMessage + 16), hOpFieldHash, pFieldData, nIndex);
  }
  else
  {
    v21 = (pMessage + 80);
    v22 = (pMessage[105] & 8) == 0;
    *(pMessage + 8) = 0;
    if ( v22 )
    {
      *(pMessage + 24) = 0;
      *(pMessage + 25) = 0;
      pMessage[104] = 0;
      *(pMessage + 29) = 0;
      *(pMessage + 28) = -1;
      hOpFieldHashb = pMessage;
      CUtlBuffer::AddNullTermination(pMessage + 1);
    }
    else
    {
      hOpFieldHashb = pMessage;
      CUtlBuffer::SetExternalBuffer(pMessage + 1, pMessage + 48, 32, 0, 2);
    }
    *(hOpFieldHashb + 24) = 0;
    *(hOpFieldHashb + 25) = 0;
    hOpFieldHashb[104] = 0;
    *(hOpFieldHashb + 29) = 0;
    *(hOpFieldHashb + 28) = -1;
    CUtlBuffer::AddNullTermination(v21);
    CUtlBuffer::Put(v21, pPackedFieldData, v9);
  }
}


// CSoundOpGameSystem::DoSetLibraryStackFields  (line 534, @0x0000000001f6e000, libserver.so)  // inlines: AddMessage, AddToTail, CSosCopyRecipientFilter, CSosEventInfoWithFieldData_t, CSosFilterInfo_t, CSosFilterSetLibraryStackFieldsInfo_t, CSosPackedFieldData, CSosSetLibraryStackFieldsInfo_t, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, CUtlMemory, CUtlVector, CUtlVectorBase, Clear, CopyBuffer, CopyConstruct<CSosMessageQueue<unsigned int>::Entry_t>, CopyReadOnlyData, Element, GrowMemory, IsReadOnly, RemoveAll, StartAddFieldInfo, operator[], ~CSosEventInfo_t, ~CUtlBuffer, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory
// calls: CUtlBuffer::AddNullTermination, CUtlBuffer::Put, CUtlBuffer::SetExternalBuffer, CSosPackedFieldData::AddOrReplace, CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t, int>::Grow, operator new, CUtlBuffer::CUtlBuffer, CSosCopyRecipientFilter::Init, CUtlMemory<unsigned char, int>::Purge, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>::Purge, operator delete, _Unwind_Resume
// callers: CSoundOpGameSystem::OnSetLibraryStackFields, CSoundOpGameSystem::SetLibraryStackField
void __fastcall CSoundOpGameSystem::DoSetLibraryStackFields(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *pFilter,
        HSOSLIBSTACKHASH hLibraryStackHash,
        HSOSOPFIELDHASH hOpFieldHash,
        const CSosFieldData *pFieldData,
        __int16 nIndex,
        const void *pPackedFieldData,
        int nPackedFieldDataBytes)
{
  __int64 m_Size; // r8
  int v12; // edx
  CSosMessageQueue<unsigned int>::Entry_t *v13; // rcx
  CSosMessageQueue<unsigned int>::Entry_t *v14; // rax
  int v15; // eax
  __int64 v16; // r8
  CSosMessageQueue<unsigned int>::Entry_t *v17; // rax
  CSosMessageQueue<unsigned int>::Entry_t *v18; // r13
  CSosFilterSetLibraryStackFieldsInfo_t *pMessage; // rax
  CUtlBuffer *p_m_data; // rbx
  bool v21; // zf
  char *v22; // rax
  CUtlBuffer *v23; // [rsp+8h] [rbp-58h]
  int pNewEventa; // [rsp+10h] [rbp-50h]
  CSosFilterSetLibraryStackFieldsInfo_t *pNewEvent; // [rsp+10h] [rbp-50h]
  CSosFilterSetLibraryStackFieldsInfo_t *hOpFieldHashb; // [rsp+28h] [rbp-38h]

  m_Size = this->m_serverLibraryStackMessageQueue.m_messages.m_Size;
  v12 = m_Size - 1;
  if ( m_Size - 1 >= 0 )
  {
    v13 = &this->m_serverLibraryStackMessageQueue.m_messages.m_Memory.m_pMemory[v12];
    v14 = v13 - 1;
    if ( hLibraryStackHash == v13->key )
    {
LABEL_16:
      pMessage = v13->pMessage;
      if ( pMessage->m_msgType == SosMessageQueueInfoType_t::SOSMSGQ_LIBRARY_FIELDS
        && (nPackedFieldDataBytes <= 0 || pMessage->m_fieldData.m_data.m_Put == 0)
        && (pMessage->m_fieldData.m_entries.m_nCount != 0 || pMessage->m_fieldData.m_data.m_Put <= 0) )
      {
        goto LABEL_11;
      }
    }
    else
    {
      while ( --v12 != -1 )
      {
        v13 = v14--;
        if ( hLibraryStackHash == v14[1].key )
          goto LABEL_16;
      }
    }
  }
  v15 = this->m_serverLibraryStackMessageQueue.m_messages.m_Size;
  if ( m_Size == this->m_serverLibraryStackMessageQueue.m_messages.m_Memory.m_nAllocationCount )
  {
    pNewEventa = this->m_serverLibraryStackMessageQueue.m_messages.m_Size;
    CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t,int>::Grow(
      &this->m_serverLibraryStackMessageQueue.m_messages.m_Memory,
      1);
    v15 = this->m_serverLibraryStackMessageQueue.m_messages.m_Size;
    m_Size = pNewEventa;
  }
  v16 = m_Size;
  this->m_serverLibraryStackMessageQueue.m_messages.m_Size = v15 + 1;
  v17 = &this->m_serverLibraryStackMessageQueue.m_messages.m_Memory.m_pMemory[v16];
  if ( v17 != 0 )
  {
    v17->key = hLibraryStackHash;
    v17->pMessage = 0;
    v18 = &this->m_serverLibraryStackMessageQueue.m_messages.m_Memory.m_pMemory[v16];
  }
  else
  {
    v18 = 0;
  }
  pMessage = v18->pMessage;
  if ( pMessage == 0 )
  {
    v22 = operator new(0xD0u);
    *v22 = off_3FCACF0;
    *(v22 + 8) = 0;
    *(v22 + 9) = 3;
    pNewEvent = v22;
    v23 = (v22 + 80);
    CUtlBuffer::CUtlBuffer(v22 + 1, 0, 0, 0);
    CUtlBuffer::SetExternalBuffer(v23, pNewEvent->m_fieldData.m_fixedData, 32, 0, 2);
    pNewEvent->m_recipientFilter._vptr_IRecipientFilter = &off_3FCCE90;
    pNewEvent->_vptr_CSosEventInfo_t = off_3FCD970;
    pNewEvent->m_msgType = SosMessageQueueInfoType_t::SOSMSGQ_LIBRARY_FIELDS;
    pNewEvent->m_libStackHash = -1;
    pNewEvent->m_recipientFilter.m_Flags = 0;
    pNewEvent->m_recipientFilter.m_Recipients.m_Size = 0;
    pNewEvent->m_recipientFilter.m_Recipients.m_Memory.m_pMemory = 0;
    pNewEvent->m_recipientFilter.m_Recipients.m_Memory.m_nAllocationCount = 0;
    pNewEvent->m_recipientFilter.m_Recipients.m_Memory.m_nGrowSize = 0;
    if ( pFilter != 0 )
      CSosCopyRecipientFilter::Init(&pNewEvent->m_recipientFilter, pFilter);
    pMessage = pNewEvent;
    pNewEvent->m_libStackHash = hLibraryStackHash;
    v18->pMessage = pNewEvent;
  }
LABEL_11:
  if ( nPackedFieldDataBytes <= 0 )
  {
    CSosPackedFieldData::AddOrReplace(&pMessage->m_fieldData, hOpFieldHash, pFieldData, nIndex);
  }
  else
  {
    p_m_data = &pMessage->m_fieldData.m_data;
    v21 = (pMessage->m_fieldData.m_data.m_Flags & 8) == 0;
    pMessage->m_fieldData.m_entries.m_nCount = 0;
    if ( v21 )
    {
      pMessage->m_fieldData.m_data.m_Get = 0;
      pMessage->m_fieldData.m_data.m_Put = 0;
      pMessage->m_fieldData.m_data.m_Error = 0;
      pMessage->m_fieldData.m_data.m_nOffset = 0;
      pMessage->m_fieldData.m_data.m_nMaxPut = -1;
      hOpFieldHashb = pMessage;
      CUtlBuffer::AddNullTermination(&pMessage->m_fieldData.m_data);
    }
    else
    {
      hOpFieldHashb = pMessage;
      CUtlBuffer::SetExternalBuffer(&pMessage->m_fieldData.m_data, pMessage->m_fieldData.m_fixedData, 32, 0, 2);
    }
    hOpFieldHashb->m_fieldData.m_data.m_Get = 0;
    hOpFieldHashb->m_fieldData.m_data.m_Put = 0;
    hOpFieldHashb->m_fieldData.m_data.m_Error = 0;
    hOpFieldHashb->m_fieldData.m_data.m_nOffset = 0;
    hOpFieldHashb->m_fieldData.m_data.m_nMaxPut = -1;
    CUtlBuffer::AddNullTermination(p_m_data);
    CUtlBuffer::Put(p_m_data, pPackedFieldData, nPackedFieldDataBytes);
  }
}


// CSoundOpGameSystem::StartSoundEvent  (line 587, @0x0000000001f6a0a0, libserver.so)
// calls: CSoundOpGameSystem::DoStartSoundEvent
// callers: CSoundOpGameSystem::StartSoundEvent, CBreakable::DamageSound
SndOpEventGuid_t __fastcall CSoundOpGameSystem::StartSoundEvent(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *const filter,
        HSOUNDEVENTHASH nSoundEventHash,
        CEntityIndex entIndex,
        SOSRANDSEED nSeed,
        double flSoundTime)
{
  SOSRANDSEED v9; // r12
  unsigned int v11; // eax
  __int64 v12; // rsi
  double v13; // xmm0_8
  SoundEventGuid_t v14; // edx
  int32 m_Data; // ecx
  SOSRANDSEED v16; // ax
  double v17; // [rsp+18h] [rbp-48h]
  int32 flSoundTimeb; // [rsp+28h] [rbp-38h]

  v9 = nSeed;
  v11 = (*(*g_pSoundSystem + 480LL))(g_pSoundSystem);
  v13 = flSoundTime;
  v14.m_Data = v11;
  m_Data = entIndex.m_Data;
  if ( nSeed == -1 )
  {
    flSoundTimeb = v11;
    v17 = v13;
    v16 = (*(*g_pSoundOpSystem + 408LL))(g_pSoundOpSystem, v12, v11, entIndex.m_Data);
    v13 = v17;
    v9 = v16;
    m_Data = entIndex.m_Data;
    v14.m_Data = flSoundTimeb;
  }
  return CSoundOpGameSystem::DoStartSoundEvent(this, filter, v14, nSoundEventHash, m_Data, v9, v13, 0, 0);
}


// CSoundOpGameSystem::StartSoundEvent  (line 613, @0x0000000001f6a150, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, CSoundOpGameSystem::StartSoundEvent, LoggingSystem_Log
// callers: CSoundOpGameSystem::snd_sos_sv_soundevent_start, Script_StartSoundEventReliable, Script_StartSoundEventUnreliable, PlayImpactSoundEventAtPosition, CPhysicsGameSystem::PhysFrictionSound, CSoundOpGameSystem::PauseSoundEvent, CSoundOpGameSystem::UnPauseSoundEvent, CSoundOpGameSystem::snd_sos_sv_test_gender, Script_StartSoundEventFromPositionReliable, Script_StartSoundEventFromPositionUnreliable, PlaySoundEventAtPosition, CAmbientGeneric::SendSound (33 total)
// strings: "Attempting to start non-existent soundevent: %s\n"
// globals: LOG_SOUNDOPGAMESYSTEM
SndOpEventGuid_t __fastcall CSoundOpGameSystem::StartSoundEvent(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *const filter,
        const char *pSoundEventName,
        CEntityIndex entIndex,
        SOSRANDSEED nSeed,
        double flSoundTime)
{
  __int64 v9; // r13

  v9 = (**(g_pSoundOpSystem + 1))(g_pSoundOpSystem + 8, pSoundEventName);
  if ( (*(*(g_pSoundOpSystem + 1) + 8LL))(g_pSoundOpSystem + 8, v9) != 0 )
    return CSoundOpGameSystem::StartSoundEvent(this, filter, v9, entIndex, nSeed, flSoundTime);
  if ( LoggingSystem_IsChannelEnabled(LOG_SOUNDOPGAMESYSTEM, 0) != 0 )
    LoggingSystem_Log(LOG_SOUNDOPGAMESYSTEM, 0, "Attempting to start non-existent soundevent: %s\n", pSoundEventName);
  return 0xFFFFFFFF00000000LL;
}


// CSoundOpGameSystem::StopSoundEvent  (line 628, @0x0000000001f6d450, libserver.so)
// calls: CSoundOpGameSystem::DoStopSoundEvent
// callers: CAmbientGeneric::SendSound, CFuncTrackTrain::SoundStop, CDOTA_Ability_Kunkka_GhostShip::OnSpellStart, CDOTA_Ability_Lich_ChainFrost::OnSpellStart, CDOTA_Ability_Puck_IllusoryOrb::OnSpellStart, CDOTA_Ability_Kunkka_GhostShip::OnProjectileHit_ExtraData, CDOTA_Ability_Lich_ChainFrost::OnProjectileHit_ExtraData, CDOTA_Modifier_StormSpirit_BallLightning::OnDestroy, CDOTA_Ability_Tidehunter_Gush::OnSpellStart, CDOTA_Ability_Sniper_Assassinate::OnProjectileHit, CDOTA_Ability_Sniper_Assassinate::OnSpellStart, CDOTA_Ability_Batrider_Flamebreak::OnSpellStart (24 total)
void __fastcall CSoundOpGameSystem::StopSoundEvent(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *const filter,
        SndOpEventGuid_t nGuid)
{
  CSoundOpGameSystem::DoStopSoundEvent(this, filter, nGuid.m_nGuid);
}


// CSoundOpGameSystem::StopSoundEvent  (line 634, @0x0000000001f6dce0, libserver.so)
// calls: CSoundOpGameSystem::DoStopSoundEventHash
void __fastcall CSoundOpGameSystem::StopSoundEvent(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *const filter,
        HSOUNDEVENTHASH nSoundEventHash,
        CEntityIndex entIndex)
{
  CSoundOpGameSystem::DoStopSoundEventHash(this, filter, nSoundEventHash, entIndex);
}


// CSoundOpGameSystem::StopSoundEvent  (line 639, @0x0000000001f6dcf0, libserver.so)  // inlines: StopSoundEvent
// calls: LoggingSystem_IsChannelEnabled, CSoundOpGameSystem::DoStopSoundEventHash, LoggingSystem_Log
// callers: Script_StopSoundEventUnreliable, Script_StopSoundEventReliable, CSoundOpGameSystem::StopSoundEvent
// strings: "CSoundOpGameSystem::StopSoundEvent: Attempting to stop non-existent soundevent: %s\n"
// globals: LOG_SOUNDOPGAMESYSTEM
void __fastcall CSoundOpGameSystem::StopSoundEvent(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *const filter,
        const char *pSoundEventName,
        CEntityIndex entIndex)
{
  __int64 v7; // r13

  v7 = (**(g_pSoundOpSystem + 1))(g_pSoundOpSystem + 8, pSoundEventName);
  if ( (*(*(g_pSoundOpSystem + 1) + 8LL))(g_pSoundOpSystem + 8, v7) != 0 )
  {
    CSoundOpGameSystem::DoStopSoundEventHash(this, filter, v7, entIndex);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_SOUNDOPGAMESYSTEM, 1) != 0 )
  {
    LoggingSystem_Log(
      LOG_SOUNDOPGAMESYSTEM,
      1,
      "CSoundOpGameSystem::StopSoundEvent: Attempting to stop non-existent soundevent: %s\n",
      pSoundEventName);
  }
}


// CSoundOpGameSystem::PauseSoundEvent  (line 653, @0x0000000001f6c400, libserver.so)  // inlines: AllocateData, CSosFieldData, CSosFieldDataInt, ClearData, CopyData, GetDataPtr, Init, V_memcpy, memcpy, ~CSosFieldData, ~CSosFieldDataInt
// calls: CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CSosFieldData::ClearData, _Unwind_Resume
// callers: CSoundOpGameSystem::snd_sos_sv_soundevent_pause_last, CSoundOpGameSystem::snd_sos_sv_soundevent_unpause_last, CSoundOpGameSystem::PauseSoundEvent
// strings: "core.pause_soundevent", "event_guid"
void __fastcall CSoundOpGameSystem::PauseSoundEvent(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *const filter,
        SndOpEventGuid_t nGuid)
{
  int32 m_Data; // r14d
  SndOpEventGuid_t started; // r13
  CSosFieldData fieldData; // [rsp+10h] [rbp-50h] BYREF

  m_Data = nGuid.m_nGuid.m_Data;
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  started = CSoundOpGameSystem::StartSoundEvent(this, filter, "core.pause_soundevent", 0, -1, 0.0);
  fieldData.m_nAllocSize = 0;
  fieldData.m_pData = 0;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 2);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INT;
  fieldData.m_nAllocSize = 4;
  LODWORD(fieldData.m_pData) = m_Data;
  CSoundOpGameSystem::SetSoundEventParam(this, filter, started, "event_guid", &fieldData, 0, 0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
}


// CSoundOpGameSystem::UnPauseSoundEvent  (line 663, @0x0000000001f6c6d0, libserver.so)  // inlines: AllocateData, CSosFieldData, CSosFieldDataInt, ClearData, CopyData, GetDataPtr, Init, V_memcpy, memcpy, ~CSosFieldData, ~CSosFieldDataInt
// calls: CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CSosFieldData::ClearData, _Unwind_Resume
// callers: CSoundOpGameSystem::UnPauseSoundEvent
// strings: "core.unpause_soundevent", "event_guid"
void __fastcall CSoundOpGameSystem::UnPauseSoundEvent(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *const filter,
        SndOpEventGuid_t nGuid)
{
  int32 m_Data; // r14d
  SndOpEventGuid_t started; // r13
  CSosFieldData fieldData; // [rsp+10h] [rbp-50h] BYREF

  m_Data = nGuid.m_nGuid.m_Data;
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  started = CSoundOpGameSystem::StartSoundEvent(this, filter, "core.unpause_soundevent", 0, -1, 0.0);
  fieldData.m_nAllocSize = 0;
  fieldData.m_pData = 0;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 2);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INT;
  fieldData.m_nAllocSize = 4;
  LODWORD(fieldData.m_pData) = m_Data;
  CSoundOpGameSystem::SetSoundEventParam(this, filter, started, "event_guid", &fieldData, 0, 0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
}


// CSoundOpGameSystem::SetSoundEventParam  (line 676, @0x0000000001f69900, libserver.so)  // inlines: GetBool, GetFieldInfo, GetInt, GetParamInfo
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,Color,char const*,...), CSoundOpGameSystem::DoSetSoundEventParams
// callers: CSoundOpGameSystem::SetSoundEventParam
// strings: "CSoundOpGameSystem::SetSoundEventParam: Failed cached soundevent param message\n"
// globals: LOG_SOUNDOPGAMESYSTEM, WarningColor
bool __fastcall CSoundOpGameSystem::SetSoundEventParam(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *const filter,
        SndOpEventGuid_t nGuid,
        cached_soundevent_parameter_t param,
        const CSosFieldData *const fieldData,
        int nIndex,
        bool bIsOptional)
{
  int32 m_Data; // r12d
  char v10; // bl
  __int16 v14; // [rsp+2Ch] [rbp-34h]

  m_Data = nGuid.m_nGuid.m_Data;
  v14 = nIndex;
  v10 = (*(*g_pSoundOpSystem + 344LL))(g_pSoundOpSystem, nGuid.m_hStackHash, param, fieldData, nIndex);
  if ( v10 != 0 )
  {
    CSoundOpGameSystem::DoSetSoundEventParams(this, filter, m_Data, param, fieldData, v14, 0, 0);
  }
  else if ( !bIsOptional
         && snd_sos_opvar_debug.m_pParent->m_Value.m_nValue != 0
         && LoggingSystem_IsChannelEnabled(LOG_SOUNDOPGAMESYSTEM, 0) != 0 )
  {
    LoggingSystem_Log(
      LOG_SOUNDOPGAMESYSTEM,
      LoggingSeverity_t::LS_DETAILED,
      WarningColor,
      "CSoundOpGameSystem::SetSoundEventParam: Failed cached soundevent param message\n");
  }
  return v10;
}


// CSoundOpGameSystem::SetSoundEventParam  (line 691, @0x0000000001f699e0, libserver.so)  // inlines: GetBool, GetCachedSoundeventParameter, GetInt
// calls: CSoundOpGameSystem::SetSoundEventParam, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,Color,char const*,...)
// callers: CSoundOpGameSystem::SetSoundEventParam, PlayImpactSoundEventAtPosition, CPhysicsGameSystem::PhysFrictionSound, CSoundOpGameSystem::PauseSoundEvent, CSoundOpGameSystem::UnPauseSoundEvent, CSoundOpGameSystem::snd_sos_sv_test_gender, Script_StartSoundEventFromPositionReliable, Script_StartSoundEventFromPositionUnreliable, PlaySoundEventAtPosition, CAmbientGeneric::SendSound, CBasePlayer::PlayStepSound, PlayLockSounds (56 total)
// strings: "public", "CSoundOpGameSystem::SetSoundEventParam: Failed soundevent param message to: %s\n"
// globals: LOG_SOUNDOPGAMESYSTEM, WarningColor
void __fastcall CSoundOpGameSystem::SetSoundEventParam(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *const filter,
        SndOpEventGuid_t nGuid,
        const char *pParamName,
        const CSosFieldData *const fieldData,
        int nIndex,
        bool bIsOptional)
{
  cached_soundevent_parameter_t v11; // eax

  v11 = (*(*g_pSoundOpSystem + 288LL))(g_pSoundOpSystem, "public", pParamName);
  if ( !CSoundOpGameSystem::SetSoundEventParam(this, filter, nGuid, v11, fieldData, nIndex, bIsOptional)
    && !bIsOptional
    && snd_sos_opvar_debug.m_pParent->m_Value.m_nValue != 0
    && LoggingSystem_IsChannelEnabled(LOG_SOUNDOPGAMESYSTEM, 0) != 0 )
  {
    LoggingSystem_Log(
      LOG_SOUNDOPGAMESYSTEM,
      LoggingSeverity_t::LS_DETAILED,
      WarningColor,
      "CSoundOpGameSystem::SetSoundEventParam: Failed soundevent param message to: %s\n",
      pParamName);
  }
}


// CSoundOpGameSystem::SetSoundStartTime  (line 704, @0x0000000001f381c0, libserver.so)
void __fastcall CSoundOpGameSystem::SetSoundStartTime(
        CSoundOpGameSystem *const this,
        SndOpEventGuid_t nGuid,
        double a3,
        float flSoundTime)
{
  ;
}


// CSoundOpGameSystem::SetLibraryStackField  (line 724, @0x0000000001f6e360, libserver.so)  // inlines: GetBool, GetInt
// calls: CSoundOpGameSystem::GetFieldInfo, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,Color,char const*,...), CSoundOpGameSystem::DoSetLibraryStackFields
// callers: Script_SetOpvarFloatPlayer, Script_SetOpvarFloatAll, CSoundOpGameSystem::SetLibraryStackField, CTriggerSndSosOpvar::EndTouch, CTriggerSndSosOpvar::HandleTouchingEntities
// strings: "CSoundOpGameSystem::SetLibraryStackField: Faied library stack message to: %s, %s, %s\n"
// globals: LOG_SOUNDOPGAMESYSTEM, WarningColor
void __fastcall CSoundOpGameSystem::SetLibraryStackField(
        CSoundOpGameSystem *const this,
        const IRecipientFilter *const filter,
        const char *pStackName,
        const char *pOperatorName,
        const char *pFieldName,
        const CSosFieldData *const fieldData,
        int nIndex)
{
  HSOSLIBSTACKHASH v12; // r10d
  HSOSLIBSTACKHASH hLibraryStackHash; // [rsp+14h] [rbp-4Ch]
  HSOSOPFIELDHASH hOpFieldHash[13]; // [rsp+2Ch] [rbp-34h] BYREF

  v12 = (*(*g_pSoundOpSystem + 304LL))(g_pSoundOpSystem, pStackName);
  if ( v12 != -1
    && (hLibraryStackHash = v12,
        CSoundOpGameSystem::GetFieldInfo(this, v12, pOperatorName, pFieldName, fieldData, nIndex, hOpFieldHash)) )
  {
    CSoundOpGameSystem::DoSetLibraryStackFields(
      this,
      filter,
      hLibraryStackHash,
      hOpFieldHash[0],
      fieldData,
      nIndex,
      0,
      0);
  }
  else if ( snd_sos_opvar_debug.m_pParent->m_Value.m_nValue != 0
         && LoggingSystem_IsChannelEnabled(LOG_SOUNDOPGAMESYSTEM, 0) != 0 )
  {
    LoggingSystem_Log(
      LOG_SOUNDOPGAMESYSTEM,
      LoggingSeverity_t::LS_DETAILED,
      WarningColor,
      "CSoundOpGameSystem::SetLibraryStackField: Faied library stack message to: %s, %s, %s\n",
      pStackName,
      pOperatorName,
      pFieldName);
  }
}


// CSoundOpGameSystem::GetFieldInfo  (line 766, @0x0000000001f381d0, libserver.so)
bool __fastcall CSoundOpGameSystem::GetFieldInfo(
        const CSoundOpGameSystem *const this,
        HSOSLIBSTACKHASH hLibraryStackHash,
        HSOSOPFIELDHASH hOpFieldHash,
        const CSosFieldData *const fieldData,
        int nIndex,
        HSOSOPFIELDHASH *pFieldHash)
{
  bool result; // al

  result = (*(*g_pSoundOpSystem + 344LL))(g_pSoundOpSystem, hLibraryStackHash, hOpFieldHash, fieldData, nIndex);
  if ( result )
    *pFieldHash = hOpFieldHash;
  return result;
}


// CSoundOpGameSystem::GetFieldInfo  (line 776, @0x0000000001f38200, libserver.so)  // inlines: GetFieldInfo
// callers: CSoundOpGameSystem::SetLibraryStackField
bool __fastcall CSoundOpGameSystem::GetFieldInfo(
        const CSoundOpGameSystem *const this,
        HSOSLIBSTACKHASH hLibraryStackHash,
        const char *pOperatorName,
        const char *pFieldName,
        const CSosFieldData *const fieldData,
        int nIndex,
        HSOSOPFIELDHASH *pFieldHash)
{
  __int16 v7; // r14
  __int64 v10; // r15
  bool result; // al

  v7 = nIndex;
  v10 = (*(*g_pSoundOpSystem + 288LL))(g_pSoundOpSystem, pOperatorName, pFieldName);
  result = (*(*g_pSoundOpSystem + 344LL))(g_pSoundOpSystem, hLibraryStackHash, v10, fieldData, v7);
  if ( result )
    *pFieldHash = v10;
  return result;
}


// CSoundOpGameSystem::GetParamInfo  (line 781, @0x0000000001f38270, libserver.so)  // inlines: GetFieldInfo
bool __fastcall CSoundOpGameSystem::GetParamInfo(
        const CSoundOpGameSystem *const this,
        SndOpEventGuid_t nGuid,
        cached_soundevent_parameter_t param,
        const CSosFieldData *const fieldData,
        int nIndex,
        HSOSOPFIELDHASH *pFieldHash)
{
  bool result; // al

  result = (*(*g_pSoundOpSystem + 344LL))(g_pSoundOpSystem, nGuid.m_hStackHash, param, fieldData, nIndex);
  if ( result )
    *pFieldHash = param;
  return result;
}


// CSoundOpGameSystem::snd_sos_sv_soundevent_start  (line 791, @0x0000000001f6a230, libserver.so)  // inlines: Arg, CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, operator[], ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StartSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall CSoundOpGameSystem::snd_sos_sv_soundevent_start(
        CSoundOpGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  const char *v3; // r13
  CRecipientFilter v5; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v6; // [rsp+138h] [rbp-28h]

  v3 = "";
  v6 = __readfsqword(0x28u);
  if ( args->m_nArgc > 1 )
    v3 = args->m_ppArgv[1];
  CRecipientFilter::CRecipientFilter(&v5);
  v5._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v5);
  v5._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v5);
  this->m_nLastGuidStarted = CSoundOpGameSystem::StartSoundEvent(this, &v5, v3, 0, -1, 0.0);
  v5._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v5);
}


// CSoundOpGameSystem::snd_sos_sv_soundevent_stop_last  (line 795, @0x0000000001f6d9a0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, StopSoundEvent, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::DoStopSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall CSoundOpGameSystem::snd_sos_sv_soundevent_stop_last(
        CSoundOpGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  CRecipientFilter v4; // [rsp+0h] [rbp-150h] BYREF
  unsigned __int64 v5; // [rsp+138h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&v4);
  v4._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v4);
  v4._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v4);
  CSoundOpGameSystem::DoStopSoundEvent(this, &v4, this->m_nLastGuidStarted.m_nGuid);
  v4._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v4);
}


// CSoundOpGameSystem::snd_sos_sv_soundevent_pause_last  (line 799, @0x0000000001f6c510, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::PauseSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall CSoundOpGameSystem::snd_sos_sv_soundevent_pause_last(
        CSoundOpGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  CRecipientFilter v4; // [rsp+0h] [rbp-150h] BYREF
  unsigned __int64 v5; // [rsp+138h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&v4);
  v4._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v4);
  v4._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v4);
  CSoundOpGameSystem::PauseSoundEvent(this, &v4, this->m_nLastGuidStarted);
  v4._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v4);
}


// CSoundOpGameSystem::snd_sos_sv_soundevent_unpause_last  (line 803, @0x0000000001f6c5f0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::PauseSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall CSoundOpGameSystem::snd_sos_sv_soundevent_unpause_last(
        CSoundOpGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  CRecipientFilter v4; // [rsp+0h] [rbp-150h] BYREF
  unsigned __int64 v5; // [rsp+138h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&v4);
  v4._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v4);
  v4._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v4);
  CSoundOpGameSystem::PauseSoundEvent(this, &v4, this->m_nLastGuidStarted);
  v4._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v4);
}


// CSoundOpGameSystem::snd_sos_sv_test_gender  (line 808, @0x0000000001f6c7e0, libserver.so)  // inlines: AllocateData, Arg, CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, CSosFieldData, CSosFieldDataString, ClearData, CopyData, GetDataPtr, Init, V_memcpy, memcpy, operator[], ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataString
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StartSoundEvent, CRecipientFilter::~CRecipientFilter, CSoundOpGameSystem::SetSoundEventParam, operator delete [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CSoundOpGameSystem::snd_sos_sv_test_gender(
        CSoundOpGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  const char *v3; // r14
  const char *v6; // r14
  SndOpEventGuid_t v7; // r15
  __int16 v8; // ax
  CSosFieldData fieldData; // [rsp+10h] [rbp-190h] BYREF
  CRecipientFilter v10; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-38h]
  SndOpEventGuid_t started; // 0:rax.8

  v3 = "";
  v11 = __readfsqword(0x28u);
  if ( args->m_nArgc > 1 )
    v3 = args->m_ppArgv[1];
  CRecipientFilter::CRecipientFilter(&v10);
  v10._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v10);
  v10._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v10);
  started = CSoundOpGameSystem::StartSoundEvent(this, &v10, v3, 0, -1, 0.0);
  v6 = "";
  v7 = started;
  v10._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v10);
  if ( args->m_nArgc > 2 )
    v6 = args->m_ppArgv[2];
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  fieldData.m_pData = 0;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 15);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_STRING_HANDLE;
  v8 = (*(*g_pSoundOpSystem + 376LL))(g_pSoundOpSystem, v6);
  fieldData.m_nAllocSize = 2;
  LOWORD(fieldData.m_pData) = v8;
  CRecipientFilter::CRecipientFilter(&v10);
  v10._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v10);
  v10._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v10);
  CSoundOpGameSystem::SetSoundEventParam(this, &v10, v7, "gender", &fieldData, 0, 0);
  v10._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v10);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
}


// CSoundOpGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 985, @0x0000000001f382b0, libserver.so)
void __cdecl CSoundOpGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


