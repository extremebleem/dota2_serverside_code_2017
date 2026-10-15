
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAVoteSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 19, @0x00000000027b1f60, libserver.so)
void __cdecl CDOTAVoteSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// DOTAVoteSystem  (line 21, @0x00000000027b1f70, libserver.so)
// globals: g_DOTA_VoteSystem
CDOTAVoteSystem *__cdecl DOTAVoteSystem()
{
  return &g_DOTA_VoteSystem;
}


// GetScriptDesc<CDOTAVoteSystem>  (line 26, @0x00000000027c0ed0, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CDOTAVoteSystem*, CDOTAVoteSystem, void, HSCRIPT__*>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow
// callers: CDOTAVoteSystem::GameInit
// strings: "!DOTA Vote System", "CDOTAVoteSystem", "Starts a vote, based upon a table of parameters", "Script_StartVote"
// globals: g_pCDOTAVoteSystem_ScriptDesc, CMemberScriptBinding1<CDOTAVoteSystem *,void (CDOTAVoteSystem::*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,in, CDOTAVoteSystem::Script_StartVote(HSCRIPT__ *)
ScriptClassDesc_t *__fastcall GetScriptDesc<CDOTAVoteSystem>(CDOTAVoteSystem *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  ScriptFunctionBinding_t *m_pMemory; // rcx
  int8 m_nNumParameters; // dl
  __int64 v5; // rax
  int v6; // edx
  char v7; // si
  char v8; // al

  result = g_pCDOTAVoteSystem_ScriptDesc;
  if ( g_pCDOTAVoteSystem_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCDOTAVoteSystem_ScriptDesc = v2;
    v2->m_pszDescription = "!DOTA Vote System";
    v2->m_pszScriptName = "CDOTAVoteSystem";
    v2->m_pszClassname = "CDOTAVoteSystem";
    CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    ++v2->m_FunctionBindings.m_Size;
    if ( m_pMemory != 0 )
    {
      m_pMemory->m_desc.m_pszScriptName = 0;
      m_pMemory->m_desc.m_pszFunction = 0;
      m_pMemory->m_desc.m_pszDescription = 0;
      m_pMemory->m_desc.m_ReturnType = 29;
      m_pMemory->m_desc.m_nOptionalParameters = -1;
      m_pMemory->m_desc.m_nNumParameters = 0;
      m_pMemory->m_desc.m_pPackedParameterNames = 0;
      m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    }
    m_nNumParameters = m_pMemory->m_desc.m_nNumParameters;
    m_pMemory->m_desc.m_ReturnType = 0;
    m_pMemory->m_desc.m_pszDescription = "Starts a vote, based upon a table of parameters";
    m_pMemory->m_desc.m_pszScriptName = "StartVote";
    m_pMemory->m_desc.m_pszFunction = "Script_StartVote";
    v5 = m_nNumParameters++;
    m_pMemory->m_desc.m_ParameterTypes[v5] = 31;
    m_pMemory->m_desc.m_nNumParameters = m_nNumParameters;
    v6 = m_nNumParameters - 1;
    m_pMemory->m_desc.m_nOptionalParameters = 0;
    if ( v6 >= 0 && m_pMemory->m_desc.m_ParameterTypes[v6] == 32 )
    {
      v7 = 1;
      do
      {
        --v6;
        v8 = v7;
        if ( v6 == -1 )
        {
          m_pMemory->m_desc.m_nOptionalParameters = v7;
          goto LABEL_10;
        }
        ++v7;
      }
      while ( m_pMemory->m_desc.m_ParameterTypes[v6] == 32 );
      m_pMemory->m_desc.m_nOptionalParameters = v8;
    }
LABEL_10:
    m_pMemory->m_flags = 1;
    m_pMemory->m_pfnBinding = CMemberScriptBinding1<CDOTAVoteSystem *,void (CDOTAVoteSystem::*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call;
    m_pMemory->m_pFunction = CDOTAVoteSystem::Script_StartVote;
    return v2;
  }
  return result;
}


// CDOTAVoteSystem::CDOTAVoteSystem  (line 32, @0x00000000027b1f80, libserver.so)  // inlines: CClientMessageContainer, CClientMessageDelegateHook, CCopyableLock, CGameEventListener, CThreadFastMutex, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlSlot, CUtlVector, CUtlVectorBase, CUtlVectorMT, ClosurePtr, FastDelegate2
// callers: _GLOBAL__sub_I__unity_dota_08.cpp
void __fastcall CDOTAVoteSystem::CDOTAVoteSystem(CDOTAVoteSystem *const this)
{
  this->_vptr_IGameSystem = off_42B47B0;
  this->_vptr_IGameEventListener2 = off_42B4908;
  this->m_bRegisteredForEvents = 0;
  this->m_CDOTAClientMsg_RecordVote_tHook.m_ConnectedSignallers.m_Size = 0;
  this->m_CDOTAClientMsg_RecordVote_tHook.m_ConnectedSignallers.m_Memory.m_pMemory = 0;
  this->m_CDOTAClientMsg_RecordVote_tHook.m_ConnectedSignallers.m_Memory.m_nAllocationCount = 0;
  this->m_CDOTAClientMsg_RecordVote_tHook.m_ConnectedSignallers.m_Memory.m_nGrowSize = 0;
  this->m_CDOTAClientMsg_RecordVote_tHook.m_ConnectedSignallers.m_ownerID = 0;
  this->m_CDOTAClientMsg_RecordVote_tHook.m_ConnectedSignallers.m_depth = 0;
  this->m_CDOTAClientMsg_RecordVote_tHook.m_ConnectedSignallers.Mutex_t.m_ownerID = 0;
  this->m_CDOTAClientMsg_RecordVote_tHook.m_ConnectedSignallers.Mutex_t.m_depth = 0;
  this->m_CDOTAClientMsg_RecordVote_tHook._vptr_IClientMessageDelegateHook = off_42B4730;
  this->m_CDOTAClientMsg_RecordVote_tHook.m_delegate.m_Closure.m_pthis = 0;
  this->m_CDOTAClientMsg_RecordVote_tHook.m_delegate.m_Closure.m_pFunction.__pfn = 0;
  this->m_CDOTAClientMsg_RecordVote_tHook.m_delegate.m_Closure.m_pFunction.__delta = 0;
  this->m_CDOTAClientMsg_RecordVote_tHook.m_bInitialized = 0;
  this->m_CDOTAClientMsg_RecordVote_tHook.m_bDestructionAllowed = 1;
  this->m_ClientMessageContainer.m_Size = 0;
  this->m_ClientMessageContainer.m_Memory.m_pMemory = 0;
  this->m_ClientMessageContainer.m_Memory.m_nAllocationCount = 0;
  this->m_ClientMessageContainer.m_Memory.m_nGrowSize = 0;
  this->m_ClientMessageContainer.m_bReleased = 1;
}


// CDOTAVoteSystem::~CDOTAVoteSystem  (line 36, @0x00000000027aa040, libserver.so)  // inlines: Purge, RemoveAll, SetReleased, StopListeningForAllEvents, ~CAutoGameSystem, ~CClientMessageContainer, ~CClientMessageDelegateHook, ~CGameEventListener, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CClientMessageDelegateHook<CDOTAClientMsg_RecordVote_t>::Release, CUtlSlot::~CUtlSlot, IGameSystem::~IGameSystem, CUtlMemory<IClientMessageDelegateHook*, int>::Purge
// callers: CDOTAVoteSystem::~CDOTAVoteSystem
void __fastcall CDOTAVoteSystem::~CDOTAVoteSystem(CDOTAVoteSystem *const this)
{
  int v1; // r13d
  __int64 v2; // r12
  IClientMessageDelegateHook *v4; // rdi
  bool v5; // zf

  v1 = 0;
  v2 = 0;
  this->_vptr_IGameSystem = off_42B47B0;
  this->_vptr_IGameEventListener2 = off_42B4908;
  while ( this->m_ClientMessageContainer.m_Size > v1 )
  {
    ++v1;
    (*(this->m_ClientMessageContainer.m_Memory.m_pMemory[v2]->_vptr_IClientMessageDelegateHook + 1))(this->m_ClientMessageContainer.m_Memory.m_pMemory[v2]);
    v4 = this->m_ClientMessageContainer.m_Memory.m_pMemory[v2++];
    (*v4->_vptr_IClientMessageDelegateHook)(v4);
  }
  v5 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    this->m_ClientMessageContainer.m_bReleased = 1;
    v5 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_ClientMessageContainer.m_Size = 0;
    if ( v5 )
    {
      CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
      if ( (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    }
  }
  else
  {
    this->m_ClientMessageContainer.m_bReleased = 1;
    this->m_ClientMessageContainer.m_Size = 0;
  }
  this->m_CDOTAClientMsg_RecordVote_tHook._vptr_IClientMessageDelegateHook = off_42B4730;
  CClientMessageDelegateHook<CDOTAClientMsg_RecordVote_t>::Release(&this->m_CDOTAClientMsg_RecordVote_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_RecordVote_tHook.CUtlSlot);
  v5 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v5 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDOTAVoteSystem::~CDOTAVoteSystem  (line 36, @0x00000000027aa1c0, libserver.so)
// calls: CDOTAVoteSystem::~CDOTAVoteSystem, operator delete
void __fastcall CDOTAVoteSystem::~CDOTAVoteSystem(CDOTAVoteSystem *const this)
{
  CDOTAVoteSystem::~CDOTAVoteSystem(this);
  operator delete(this);
}


// CDOTAVoteSystem::GameInit  (line 43, @0x00000000027c1050, libserver.so)  // inlines: CVariantBase, Free, RegisterInstance<CDOTAVoteSystem>, ~CVariantBase
// calls: GetScriptDesc<CDOTAVoteSystem>, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTAVoteSystem::GameInit(CDOTAVoteSystem *const this, const EventGameInit_t *const msg)
{
  IScriptVM *v3; // rbx
  __int64 (__fastcall *v4)(IScriptVM *, ScriptClassDesc_t *, CDOTAVoteSystem *const); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-30h] BYREF
  __int16 v9; // [rsp+8h] [rbp-28h]
  __int16 v10; // [rsp+Ah] [rbp-26h]

  this->m_bCurrentlyVoting = 0;
  v3 = g_pScriptVM;
  v4 = *(*g_pScriptVM + 184LL);
  Script = GetScriptDesc<CDOTAVoteSystem>(this);
  v6 = v4(v3, Script, this);
  v7 = *v3;
  v10 = 0;
  v9 = 31;
  v8 = v6;
  (*(v7 + 240))(v3, 0, "VoteSystem", &v8);
  if ( (v10 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
}


// CDOTAVoteSystem::FrameUpdatePostEntityThink  (line 52, @0x00000000027b28b0, libserver.so)
// calls: CDOTAVoteSystem::GetCurrentTime, CDOTA_PlayerResource::GetTeamPlayerCount, CDOTAVoteSystem::CountVotes, CDOTAVoteSystem::VoteEnded
void __fastcall CDOTAVoteSystem::FrameUpdatePostEntityThink(
        CDOTAVoteSystem *const this,
        const EventServerPostEntityThink_t *const msg)
{
  int TeamPlayerCount; // r13d
  int m_nNumChoices; // eax
  int *v5; // rdx
  int v6; // esi
  int *v7; // rax
  int v8; // ebx
  int pChoiceVotes[24]; // [rsp+0h] [rbp-60h] BYREF

  if ( this->m_bCurrentlyVoting )
  {
    if ( this->m_fDuration <= (CDOTAVoteSystem::GetCurrentTime(this) - this->m_fStartTime) )
      goto LABEL_16;
    if ( this->m_bEndEarlyIfOutcomeIsDetermined || this->m_bEndEarlyIfAllHaveVoted )
    {
      TeamPlayerCount = CDOTA_PlayerResource::GetTeamPlayerCount(g_pDOTAPlayerResource);
      CDOTAVoteSystem::CountVotes(this, this->m_votes.m_Memory, pChoiceVotes);
      m_nNumChoices = this->m_nNumChoices;
      if ( m_nNumChoices <= 0 )
      {
        v8 = 0;
        v6 = 0;
      }
      else
      {
        v5 = pChoiceVotes;
        v6 = 0;
        v7 = &pChoiceVotes[m_nNumChoices - 1 + 1];
        v8 = 0;
        do
        {
          v6 += *v5;
          if ( v8 < *v5 )
            v8 = *v5;
          ++v5;
        }
        while ( v5 != v7 );
      }
      if ( this->m_bEndEarlyIfAllHaveVoted && TeamPlayerCount <= v6 )
        CDOTAVoteSystem::VoteEnded(this);
      if ( this->m_bEndEarlyIfOutcomeIsDetermined && v8 >= (TeamPlayerCount * this->m_fRequiredVoteThreshold) )
LABEL_16:
        CDOTAVoteSystem::VoteEnded(this);
    }
  }
}


// CDOTAVoteSystem::FireGameEvent  (line 98, @0x00000000027a6eb0, libserver.so)
void __fastcall CDOTAVoteSystem::FireGameEvent(CDOTAVoteSystem *const this, IGameEvent *event)
{
  ;
}


// CDOTAVoteSystem::StartVote  (line 105, @0x00000000027b2450, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, CBroadcastRecipientFilter, CDOTAUserMsg_VoteStart_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_VoteStart_t>, FindOrCreateGameEvent<CDOTAUserMsg_VoteStart_t>, GetBool, PostEvent<CDOTAUserMsg_VoteStart_t>, SendUserMessage<CDOTAUserMsg_VoteStart_t>, V_strcpy_safe<32ul>, V_strcpy_safe<64ul>, add_choices, assign, length, set_choice_count, set_duration, set_has_choice_count, set_has_duration, set_has_title, set_title, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_VoteStart_t, ~CNetMessagePB, ~CUserMessagePB
// calls: KeyValues::GetString, KeyValues::GetInt, KeyValues::GetFloat, UTIL_VarArgs, KeyValues::FindKey, _V_strncpy, CDOTAVoteSystem::GetCurrentTime, CDOTAUserMsg_VoteStart::CDOTAUserMsg_VoteStart, strlen, std::string::assign(char const*,ulong), google::protobuf::internal::StringTypeHandlerBase::New(void), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int) (19 total)
// callers: CDOTAVoteSystem::Script_StartVote
// strings: "NumChoices", "DefaultChoice", "RequiredVoteThreshold", "Choice%d", "Choice %d", "AllowVoteChanging" (8 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteStart_t>(bool)::s_hEvent
void __fastcall CDOTAVoteSystem::StartVote(CDOTAVoteSystem *const this, KeyValues *kvVoteParameters)
{
  int v4; // ebx
  CUtlArray<DotaVoteChoice_t,16ul> *p_m_choices; // r12
  float v6; // xmm1_4
  float Float; // xmm0_4
  int m_nNumChoices; // esi
  char *v9; // rax
  KeyValues *Key; // r13
  char *v11; // rax
  const char *String; // rax
  const char *v13; // rax
  char *callback; // rdi
  float v15; // xmm1_4
  float CurrentTime; // xmm0_4
  __int64 v17; // rax
  const char *m_pszText; // rbx
  size_t v19; // rax
  google::protobuf::internal::StringTypeHandlerBase *v20; // rdi
  CUtlArray<DotaVoteChoice_t,16ul> *v21; // rbx
  int v22; // r12d
  int v23; // edx
  std::string *v24; // rax
  __int64 v25; // rdx
  std::string *v26; // r13
  size_t v27; // rax
  __int64 current_size; // rax
  __int64 v29; // r13
  IGameEventSystem *v30; // r12
  void (__fastcall *v31)(IGameEventSystem *, _QWORD, _QWORD, CBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r14
  _QWORD v32[2]; // [rsp+10h] [rbp-1B0h] BYREF
  int v33; // [rsp+20h] [rbp-1A0h]
  std::string *v34; // [rsp+28h] [rbp-198h]
  float m_fDuration; // [rsp+30h] [rbp-190h]
  int v36; // [rsp+34h] [rbp-18Ch]
  google::protobuf::internal::RepeatedPtrFieldBase v37; // [rsp+38h] [rbp-188h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v39; // [rsp+188h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  if ( this->m_bCurrentlyVoting )
    CDOTAVoteSystem::VoteEnded(this);
  this->m_bCurrentlyVoting = 1;
  v4 = 0;
  this->m_pszText = KeyValues::GetString(kvVoteParameters, "Text", "", 0, 0);
  this->m_nNumChoices = KeyValues::GetInt(kvVoteParameters, "NumChoices", 2);
  this->m_nDefaultChoice = KeyValues::GetInt(kvVoteParameters, "DefaultChoice", 1) - 1;
  p_m_choices = &this->m_choices;
  Float = KeyValues::GetFloat(kvVoteParameters, "RequiredVoteThreshold", v6);
  m_nNumChoices = this->m_nNumChoices;
  this->m_fRequiredVoteThreshold = Float;
  if ( m_nNumChoices > 0 )
  {
    do
    {
      v9 = UTIL_VarArgs("Choice%d", ++v4);
      Key = KeyValues::FindKey(kvVoteParameters, v9, 1);
      v11 = UTIL_VarArgs("Choice %d", v4);
      String = KeyValues::GetString(Key, "Text", v11, 0, 0);
      _V_strncpy(p_m_choices, String, 64);
      v13 = KeyValues::GetString(Key, "Callback", "", 0, 0);
      callback = p_m_choices->m_Memory[0].callback;
      p_m_choices = (p_m_choices + 96);
      _V_strncpy(callback, v13, 32);
    }
    while ( this->m_nNumChoices > v4 );
  }
  this->m_bAllowVoteChanging = KeyValues::GetInt(kvVoteParameters, "AllowVoteChanging", 0) != 0;
  this->m_bPauseGame = KeyValues::GetInt(kvVoteParameters, "PauseGame", 0) != 0;
  this->m_bEndEarlyIfOutcomeIsDetermined = KeyValues::GetInt(kvVoteParameters, "EndEarlyIfOutcomeIsDetermined", 0) != 0;
  this->m_bEndEarlyIfAllHaveVoted = KeyValues::GetInt(kvVoteParameters, "EndEarlyIfAllHaveVoted", 1) != 0;
  this->m_fDuration = KeyValues::GetFloat(kvVoteParameters, "Duration", v15);
  CurrentTime = CDOTAVoteSystem::GetCurrentTime(this);
  v17 = 0;
  this->m_fStartTime = CurrentTime;
  do
    this->m_votes.m_Memory[v17++] = -1;
  while ( v17 != 64 );
  CDOTAUserMsg_VoteStart::CDOTAUserMsg_VoteStart(v32);
  m_pszText = this->m_pszText;
  v33 |= 1u;
  v32[0] = off_42B2530;
  v19 = strlen(m_pszText);
  std::string::assign(v34, m_pszText, v19);
  v21 = &this->m_choices;
  v22 = 0;
  v23 = this->m_nNumChoices;
  m_fDuration = this->m_fDuration;
  v33 |= 6u;
  v36 = v23;
  if ( v23 > 0 )
  {
    do
    {
      current_size = v37.current_size_;
      if ( v37.current_size_ >= v37.allocated_size_ )
      {
        if ( v37.allocated_size_ == v37.total_size_ )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v37, v37.allocated_size_ + 1);
        v24 = google::protobuf::internal::StringTypeHandlerBase::New(v20);
        v25 = v37.current_size_;
        v26 = v24;
        ++v37.allocated_size_;
        ++v37.current_size_;
        v37.elements_[v25] = v24;
      }
      else
      {
        ++v37.current_size_;
        v26 = v37.elements_[current_size];
      }
      v27 = strlen(v21);
      std::string::assign(v26, v21, v27);
      ++v22;
      v21 = (v21 + 96);
    }
    while ( this->m_nNumChoices > v22 );
  }
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  v29 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteStart_t>(bool)::s_hEvent;
  v30 = g_pGameEventSystem;
  v31 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteStart_t>(bool)::s_hEvent);
  v31(v30, 0, 0, &filter, v29, v32, 64);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  v32[0] = &off_42B23B0;
  CDOTAUserMsg_VoteStart::~CDOTAUserMsg_VoteStart(v32);
}


// CDOTAVoteSystem::Script_StartVote  (line 160, @0x00000000027b6e40, libserver.so)  // inlines: operator(), ~unique_ptr
// calls: ScriptTableToKeyValues, CDOTAVoteSystem::StartVote, KeyValues::~KeyValues, KeyValues::operator delete, _Unwind_Resume
// strings: "vote_keys"
void __fastcall CDOTAVoteSystem::Script_StartVote(CDOTAVoteSystem *const this, HSCRIPT hVoteTable)
{
  KeyValues *v3; // rbx

  v3 = ScriptTableToKeyValues(g_pScriptVM, "vote_keys", hVoteTable);
  CDOTAVoteSystem::StartVote(this, v3);
  if ( v3 != 0 )
  {
    KeyValues::~KeyValues(v3);
    KeyValues::operator delete(v3);
  }
}


// CDOTAVoteSystem::VoteEnded  (line 168, @0x00000000027b2150, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_VoteEnd_t, CNetMessagePB, CUserMessagePB, Call, FindGameEvent<CDOTAUserMsg_VoteEnd_t>, FindOrCreateGameEvent<CDOTAUserMsg_VoteEnd_t>, PostEvent<CDOTAUserMsg_VoteEnd_t>, SendUserMessage<CDOTAUserMsg_VoteEnd_t>, set_has_selected_choice, set_selected_choice, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_VoteEnd_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTA_PlayerResource::GetTeamPlayerCount, CDOTAVoteSystem::CountVotes, CDOTAUserMsg_VoteEnd::CDOTAUserMsg_VoteEnd, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_VoteEnd::~CDOTAUserMsg_VoteEnd, RandomFloat, _Unwind_Resume, __stack_chk_fail
// callers: CDOTAVoteSystem::StartVote, CDOTAVoteSystem::FrameUpdatePostEntityThink
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteEnd_t>(bool)::s_hEvent
void __fastcall CDOTAVoteSystem::VoteEnded(CDOTAVoteSystem *const this)
{
  __int64 v2; // r14
  __int64 v3; // r12
  int v4; // r13d
  int v5; // r15d
  int *v6; // r8
  int v7; // ecx
  int v8; // eax
  __int64 m_nDefaultChoice; // r13
  IGameEventSystem *v10; // r14
  __int64 v11; // rax
  float v12; // xmm0_4
  int nPlayerCount; // [rsp+Ch] [rbp-1E4h]
  __int64 v14; // [rsp+10h] [rbp-1E0h]
  int *v15; // [rsp+10h] [rbp-1E0h]
  void (__fastcall *v16)(IGameEventSystem *, _QWORD, _QWORD, CBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+18h] [rbp-1D8h]
  _QWORD v17[2]; // [rsp+20h] [rbp-1D0h] BYREF
  int v18; // [rsp+30h] [rbp-1C0h]
  int v19; // [rsp+38h] [rbp-1B8h]
  int pChoiceVotes[16]; // [rsp+40h] [rbp-1B0h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v22; // [rsp+1B8h] [rbp-38h]

  this->m_bCurrentlyVoting = 0;
  v22 = __readfsqword(0x28u);
  nPlayerCount = CDOTA_PlayerResource::GetTeamPlayerCount(g_pDOTAPlayerResource);
  CDOTAVoteSystem::CountVotes(this, this->m_votes.m_Memory, pChoiceVotes);
  if ( this->m_nNumChoices <= 0 )
  {
    m_nDefaultChoice = this->m_nDefaultChoice;
    goto LABEL_11;
  }
  v2 = -1;
  v3 = 0;
  v4 = 0;
  v5 = -1;
  v6 = pChoiceVotes;
  do
  {
    while ( 1 )
    {
      v7 = v6[v3];
      v8 = v3;
      if ( v7 > v5 )
      {
        v5 = v6[v3];
        v4 = 1;
        goto LABEL_7;
      }
      if ( v5 == v7 )
      {
        ++v4;
        v15 = v6;
        v12 = RandomFloat(0.0, 1.0);
        v8 = v3;
        v6 = v15;
        if ( (1.0 / v4) > v12 )
          break;
      }
      if ( this->m_nNumChoices <= ++v3 )
        goto LABEL_8;
    }
    v5 = v15[v3];
LABEL_7:
    v2 = v8;
    ++v3;
  }
  while ( this->m_nNumChoices > v3 );
LABEL_8:
  m_nDefaultChoice = this->m_nDefaultChoice;
  if ( v2 != -1 && v5 >= (nPlayerCount * this->m_fRequiredVoteThreshold) )
    m_nDefaultChoice = v2;
LABEL_11:
  CDOTAUserMsg_VoteEnd::CDOTAUserMsg_VoteEnd(v17);
  v18 |= 1u;
  v17[0] = off_42B29B0;
  v19 = m_nDefaultChoice;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  v10 = g_pGameEventSystem;
  v16 = *(*g_pGameEventSystem + 128LL);
  v14 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteEnd_t>(bool)::s_hEvent;
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteEnd_t>(bool)::s_hEvent);
  v16(v10, 0, 0, &filter, v14, v17, 32);
  if ( this->m_choices.m_Memory[m_nDefaultChoice].callback[0] != 0 )
  {
    v11 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, this->m_choices.m_Memory[m_nDefaultChoice].callback, 0, 0);
    if ( v11 != 0 )
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v11, 0, 0, 0, 0, 1);
  }
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  v17[0] = &off_42B2830;
  CDOTAUserMsg_VoteEnd::~CDOTAUserMsg_VoteEnd(v17);
}


// CDOTAVoteSystem::ClientMsg_RecordVote  (line 228, @0x00000000027b5300, libserver.so)  // inlines: Add, CBroadcastRecipientFilter, CDOTAUserMsg_VoteUpdate_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_VoteUpdate_t>, FindOrCreateGameEvent<CDOTAUserMsg_VoteUpdate_t>, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, PostEvent<CDOTAUserMsg_VoteUpdate_t>, SendUserMessage<CDOTAUserMsg_VoteUpdate_t>, add_choice_counts, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_VoteUpdate_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAVoteSystem::CountVotes, CDOTAUserMsg_VoteUpdate::CDOTAUserMsg_VoteUpdate, google::protobuf::RepeatedField<int>::Reserve, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_VoteUpdate::~CDOTAUserMsg_VoteUpdate, __stack_chk_fail, _Unwind_Resume
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteUpdate_t>(bool)::s_hEvent
bool __fastcall CDOTAVoteSystem::ClientMsg_RecordVote(
        CDOTAVoteSystem *const this,
        CEntityIndex nEntityIndex,
        const CDOTAClientMsg_RecordVote_t *const msg)
{
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v5; // rax
  int v6; // eax
  int *v7; // r12
  int m_nNumChoices; // ecx
  int v9; // ebx
  __int64 current_size; // rsi
  int v11; // r14d
  __int64 v12; // r13
  IGameEventSystem *v13; // r12
  void (__fastcall *v14)(IGameEventSystem *, _QWORD, _QWORD, CBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r14
  _QWORD v17[3]; // [rsp+10h] [rbp-1E0h] BYREF
  google::protobuf::RepeatedField<int> v18; // [rsp+28h] [rbp-1C8h] BYREF
  int pChoiceVotes[16]; // [rsp+40h] [rbp-1B0h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v21; // [rsp+1B8h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( nEntityIndex.m_Data <= 0x7FFE )
  {
    v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntityIndex.m_Data >> 9];
    if ( v3 != 0 )
    {
      v5 = &v3[nEntityIndex.m_Data & 0x1FF];
      if ( v5 != 0
        && nEntityIndex.m_Data == (v5->m_EHandle.m_Index & 0x7FFF)
        && v5->m_pInstance != 0
        && this->m_bCurrentlyVoting )
      {
        v6 = (*(v5->m_pInstance->_vptr_IHandleEntity + 393))(v5->m_pInstance);
        if ( this->m_bAllowVoteChanging || this->m_votes.m_Memory[v6] == -1 )
        {
          v7 = pChoiceVotes;
          this->m_votes.m_Memory[v6] = *(msg + 6);
          CDOTAVoteSystem::CountVotes(this, this->m_votes.m_Memory, pChoiceVotes);
          CDOTAUserMsg_VoteUpdate::CDOTAUserMsg_VoteUpdate(v17);
          m_nNumChoices = this->m_nNumChoices;
          v17[0] = off_42B2770;
          if ( m_nNumChoices > 0 )
          {
            v9 = 0;
            do
            {
              current_size = v18.current_size_;
              v11 = *v7;
              if ( v18.current_size_ == v18.total_size_ )
              {
                google::protobuf::RepeatedField<int>::Reserve(&v18, v18.current_size_ + 1);
                current_size = v18.current_size_;
              }
              ++v9;
              ++v7;
              v18.current_size_ = current_size + 1;
              v18.elements_[current_size] = v11;
            }
            while ( this->m_nNumChoices > v9 );
          }
          CRecipientFilter::CRecipientFilter(&filter);
          filter._vptr_IRecipientFilter = &off_3FB63F0;
          CRecipientFilter::AddAllPlayers(&filter);
          v12 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteUpdate_t>(bool)::s_hEvent;
          v13 = g_pGameEventSystem;
          v14 = *(*g_pGameEventSystem + 128LL);
          (*(*g_pNetworkMessages + 96LL))(
            g_pNetworkMessages,
            IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_VoteUpdate_t>(bool)::s_hEvent);
          v14(v13, 0, 0, &filter, v12, v17, 40);
          filter._vptr_IRecipientFilter = &off_3FB63F0;
          CRecipientFilter::~CRecipientFilter(&filter);
          v17[0] = &off_42B25F0;
          CDOTAUserMsg_VoteUpdate::~CDOTAUserMsg_VoteUpdate(v17);
        }
      }
    }
  }
  return 1;
}


// CDOTAVoteSystem::GetCurrentTime  (line 258, @0x00000000027b2060, libserver.so)  // inlines: DOTAGameRules, GetGameTime, curtime
// callers: CDOTAVoteSystem::StartVote, CDOTAVoteSystem::FrameUpdatePostEntityThink
float __fastcall CDOTAVoteSystem::GetCurrentTime(CDOTAVoteSystem *const this)
{
  float result; // xmm0_4
  CGlobalVars *v2; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( this->m_bPauseGame )
  {
    result = 0.0;
    v2 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      return v2->m_flCurrentTime;
    }
  }
  else if ( g_pGameRules != 0 )
  {
    return *&g_pGameRules[18].m_szQuestName[20];
  }
  else
  {
    return 0.0;
  }
  return result;
}


// CDOTAVoteSystem::CountVotes  (line 272, @0x00000000027b20e0, libserver.so)
// calls: CDOTA_PlayerResource::GetTeamPlayerCount
// callers: CDOTAVoteSystem::VoteEnded, CDOTAVoteSystem::FrameUpdatePostEntityThink, CDOTAVoteSystem::ClientMsg_RecordVote
void __fastcall CDOTAVoteSystem::CountVotes(CDOTAVoteSystem *const this, const int *pPlayerVotes, int *pChoiceVotes)
{
  int *v3; // rcx
  int i; // eax
  int TeamPlayerCount; // eax
  __int64 j; // rcx
  __int64 v9; // rdi

  v3 = pChoiceVotes;
  for ( i = 0; this->m_nNumChoices > i; ++v3 )
  {
    *v3 = 0;
    ++i;
  }
  TeamPlayerCount = CDOTA_PlayerResource::GetTeamPlayerCount(g_pDOTAPlayerResource);
  for ( j = 0; TeamPlayerCount > j; ++j )
  {
    v9 = pPlayerVotes[j];
    if ( v9 != -1 )
      ++pChoiceVotes[v9];
  }
}


