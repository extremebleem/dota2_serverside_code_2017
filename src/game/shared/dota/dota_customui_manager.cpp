
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_CustomUIManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 30, @0x00000000024724a0, libserver.so)
void __cdecl CDOTA_CustomUIManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GetScriptDesc<CDOTA_CustomUIManager>  (line 38, @0x000000000247d450, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Element, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CDOTA_CustomUIManager*, CDOTA_CustomUIManager, void, int, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<CDOTA_CustomUIManager*, CDOTA_CustomUIManager, void, int, char const*, bool>, ScriptDeduceFunctionSignature<CDOTA_CustomUIManager*, CDOTA_CustomUIManager, void, int, char const*, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<CDOTA_CustomUIManager*, CDOTA_CustomUIManager, void, int, char const*>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow, CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >::AddToTail
// callers: CDOTA_CustomUIManager::GameInit
// strings: "!Custom HUD manager", "CDOTA_CustomUIManager", "Create a new custom UI HUD element for the specified player(s). ( int PlayerID /*-1 means, "DynamicHud_Create", "Script_Hud_Create", "Toggle the visibility of an existing custom hud element ( int PlayerID /*-1 means everyon (14 total)
// globals: g_pCDOTA_CustomUIManager_ScriptDesc, CMemberScriptBinding4<CDOTA_CustomUIManager *,void (CDOTA_CustomUIManager::*)(int,char const*,char const*,HSCRIPT__ *),void,int,char const*,char const*,HSCRIPT_, CDOTA_CustomUIManager::Script_Hud_Create(int,char const*,char const*,HSCRIPT__ *), CMemberScriptBinding3<CDOTA_CustomUIManager *,void (CDOTA_CustomUIManager::*)(int,char const*,bool),void,int,char const*,bool>::Call(void *,void *,CVariantBase<, CDOTA_CustomUIManager::Script_Hud_SetVisible(int,char const*,bool), CMemberScriptBinding3<CDOTA_CustomUIManager *,void (CDOTA_CustomUIManager::*)(int,char const*,HSCRIPT__ *),void,int,char const*,HSCRIPT__ *>::Call(void *,void *, CDOTA_CustomUIManager::Script_Hud_SetDialogVariables(int,char const*,HSCRIPT__ *), CMemberScriptBinding2<CDOTA_CustomUIManager *,void (CDOTA_CustomUIManager::*)(int,char const*),void,int,char const*>::Call(void *,void *,CVariantBase<CVariantDe (9 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CDOTA_CustomUIManager>(CDOTA_CustomUIManager *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // r12
  CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int> > *p_m_FunctionBindings; // rbx
  ScriptFunctionBinding_t *m_pMemory; // rcx
  int8 m_nNumParameters; // dl
  char v6; // al
  int v7; // edx
  char v8; // al
  char v9; // di
  __int64 m_Size; // r14
  __int64 v11; // rdx
  __int64 v12; // rax
  char v13; // dl
  char v14; // cl
  int v15; // edx
  char v16; // cl
  char v17; // di
  __int64 v18; // rax
  char v19; // dl
  char v20; // cl
  int v21; // edx
  char v22; // cl
  char v23; // di
  __int64 v24; // rax
  char v25; // dl
  char v26; // cl
  int v27; // edx
  char v28; // cl
  char v29; // di

  result = g_pCDOTA_CustomUIManager_ScriptDesc;
  if ( g_pCDOTA_CustomUIManager_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    p_m_FunctionBindings = &v2->m_FunctionBindings;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCDOTA_CustomUIManager_ScriptDesc = v2;
    v2->m_pszDescription = "!Custom HUD manager";
    v2->m_pszScriptName = "CDOTA_CustomUIManager";
    v2->m_pszClassname = "CDOTA_CustomUIManager";
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
    m_pMemory->m_desc.m_pszDescription = "Create a new custom UI HUD element for the specified player(s). ( int PlayerID "
                                         "/*-1 means everyone*/, string ElementID /* should be unique */, string LayoutFi"
                                         "leName, table DialogVariables /* can be nil */ )";
    m_pMemory->m_desc.m_pszScriptName = "DynamicHud_Create";
    m_pMemory->m_desc.m_pszFunction = "Script_Hud_Create";
    m_pMemory->m_desc.m_ParameterTypes[m_nNumParameters] = 5;
    m_pMemory->m_desc.m_ParameterTypes[(m_nNumParameters + 1)] = 30;
    m_pMemory->m_desc.m_ParameterTypes[(m_nNumParameters + 2)] = 30;
    v6 = m_nNumParameters + 3;
    m_nNumParameters += 4;
    m_pMemory->m_desc.m_ParameterTypes[v6] = 31;
    m_pMemory->m_desc.m_nNumParameters = m_nNumParameters;
    v7 = m_nNumParameters - 1;
    m_pMemory->m_desc.m_nOptionalParameters = 0;
    if ( v7 >= 0 && m_pMemory->m_desc.m_ParameterTypes[v7] == 32 )
    {
      v8 = 1;
      do
      {
        --v7;
        v9 = v8;
        if ( v7 == -1 )
        {
          m_pMemory->m_desc.m_nOptionalParameters = v8;
          goto LABEL_10;
        }
        ++v8;
      }
      while ( m_pMemory->m_desc.m_ParameterTypes[v7] == 32 );
      m_pMemory->m_desc.m_nOptionalParameters = v9;
    }
LABEL_10:
    m_pMemory->m_flags = 1;
    m_pMemory->m_pfnBinding = CMemberScriptBinding4<CDOTA_CustomUIManager *,void (CDOTA_CustomUIManager::*)(int,char const*,char const*,HSCRIPT__ *),void,int,char const*,char const*,HSCRIPT__ *>::Call;
    m_pMemory->m_pFunction = CDOTA_CustomUIManager::Script_Hud_Create;
    m_Size = v2->m_FunctionBindings.m_Size;
    if ( m_Size == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v11 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
    {
      *v11 = 0;
      *(v11 + 8) = 0;
      *(v11 + 16) = 0;
      *(v11 + 24) = 29;
      *(v11 + 25) = -1;
      *(v11 + 26) = 0;
      *(v11 + 40) = 0;
      v12 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v12 = 0;
    }
    v13 = *(v12 + 26);
    *(v12 + 24) = 0;
    *(v12 + 16) = "Toggle the visibility of an existing custom hud element ( int PlayerID /*-1 means everyone*/, string E"
                  "lementID, bool Visible )";
    *v12 = "DynamicHud_SetVisible";
    *(v12 + 8) = "Script_Hud_SetVisible";
    *(v12 + v13 + 27) = 5;
    *(v12 + (v13 + 1) + 27) = 30;
    v14 = v13 + 2;
    v13 += 3;
    *(v12 + v14 + 27) = 6;
    *(v12 + 26) = v13;
    v15 = v13 - 1;
    *(v12 + 25) = 0;
    if ( v15 >= 0 && *(v12 + v15 + 27) == 32 )
    {
      v16 = 1;
      do
      {
        --v15;
        v17 = v16;
        if ( v15 == -1 )
        {
          *(v12 + 25) = v16;
          goto LABEL_20;
        }
        ++v16;
      }
      while ( *(v12 + v15 + 27) == 32 );
      *(v12 + 25) = v17;
    }
LABEL_20:
    *(v12 + 64) = 1;
    *(v12 + 48) = CMemberScriptBinding3<CDOTA_CustomUIManager *,void (CDOTA_CustomUIManager::*)(int,char const*,bool),void,int,char const*,bool>::Call;
    *(v12 + 56) = CDOTA_CustomUIManager::Script_Hud_SetVisible;
    v18 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v19 = *(v18 + 26);
    *(v18 + 16) = "Add or modify dialog variables for an existing custom hud element ( int PlayerID /*-1 means everyone*/"
                  ", string ElementID, table DialogVariables )";
    *v18 = "DynamicHud_SetDialogVariables";
    *(v18 + 8) = "Script_Hud_SetDialogVariables";
    *(v18 + 24) = 0;
    *(v18 + v19 + 27) = 5;
    *(v18 + (v19 + 1) + 27) = 30;
    v20 = v19 + 2;
    v19 += 3;
    *(v18 + v20 + 27) = 31;
    *(v18 + 26) = v19;
    v21 = v19 - 1;
    *(v18 + 25) = 0;
    if ( v21 >= 0 && *(v18 + v21 + 27) == 32 )
    {
      v22 = 1;
      do
      {
        --v21;
        v23 = v22;
        if ( v21 == -1 )
        {
          *(v18 + 25) = v22;
          goto LABEL_26;
        }
        ++v22;
      }
      while ( *(v18 + v21 + 27) == 32 );
      *(v18 + 25) = v23;
    }
LABEL_26:
    *(v18 + 64) = 1;
    *(v18 + 48) = CMemberScriptBinding3<CDOTA_CustomUIManager *,void (CDOTA_CustomUIManager::*)(int,char const*,HSCRIPT__ *),void,int,char const*,HSCRIPT__ *>::Call;
    *(v18 + 56) = CDOTA_CustomUIManager::Script_Hud_SetDialogVariables;
    v24 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v25 = *(v24 + 26);
    *(v24 + 16) = "Destroy a custom hud element ( int PlayerID /*-1 means everyone*/, string ElementID )";
    *v24 = "DynamicHud_Destroy";
    *(v24 + 8) = "Script_Hud_Destroy";
    *(v24 + 24) = 0;
    *(v24 + v25 + 27) = 5;
    v26 = v25 + 1;
    v25 += 2;
    *(v24 + v26 + 27) = 30;
    *(v24 + 26) = v25;
    v27 = v25 - 1;
    *(v24 + 25) = 0;
    if ( v27 >= 0 && *(v24 + v27 + 27) == 32 )
    {
      v28 = 1;
      do
      {
        --v27;
        v29 = v28;
        if ( v27 == -1 )
        {
          *(v24 + 25) = v28;
          goto LABEL_32;
        }
        ++v28;
      }
      while ( *(v24 + v27 + 27) == 32 );
      *(v24 + 25) = v29;
    }
LABEL_32:
    *(v24 + 64) = 1;
    *(v24 + 48) = CMemberScriptBinding2<CDOTA_CustomUIManager *,void (CDOTA_CustomUIManager::*)(int,char const*),void,int,char const*>::Call;
    *(v24 + 56) = CDOTA_CustomUIManager::Script_Hud_Destroy;
    return v2;
  }
  return result;
}


// CDOTA_CustomUIManager::CDOTA_CustomUIManager  (line 49, @0x00000000024724b0, libserver.so)
void __fastcall CDOTA_CustomUIManager::CDOTA_CustomUIManager(CDOTA_CustomUIManager *const this)
{
  this->_vptr_IGameSystem = off_40EC150;
  this->m_bCustomUISetup = 0;
}


// CDOTA_CustomUIManager::~CDOTA_CustomUIManager  (line 57, @0x0000000002462bf0, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CDOTA_CustomUIManager::~CDOTA_CustomUIManager(CDOTA_CustomUIManager *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDOTA_CustomUIManager::~CDOTA_CustomUIManager  (line 57, @0x0000000002462c10, libserver.so)  // inlines: ~CAutoGameSystem, ~CDOTA_CustomUIManager
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CDOTA_CustomUIManager::~CDOTA_CustomUIManager(CDOTA_CustomUIManager *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_CustomUIManager::GameInit  (line 64, @0x000000000247d8e0, libserver.so)  // inlines: CVariantBase, Free, RegisterInstance<CDOTA_CustomUIManager>, ~CVariantBase
// calls: GetScriptDesc<CDOTA_CustomUIManager>, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "CustomUI"
void __fastcall CDOTA_CustomUIManager::GameInit(CDOTA_CustomUIManager *const this, const EventGameInit_t *const msg)
{
  IScriptVM *v3; // rbx
  __int64 (__fastcall *v4)(IScriptVM *, ScriptClassDesc_t *, CDOTA_CustomUIManager *const); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-30h] BYREF
  __int16 v9; // [rsp+8h] [rbp-28h]
  __int16 v10; // [rsp+Ah] [rbp-26h]

  v3 = g_pScriptVM;
  v4 = *(*g_pScriptVM + 184LL);
  Script = GetScriptDesc<CDOTA_CustomUIManager>(this);
  v6 = v4(v3, Script, this);
  v7 = *v3;
  v9 = 31;
  v10 = 0;
  v8 = v6;
  (*(v7 + 240))(v3, 0, "CustomUI", &v8);
  if ( (v10 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
}


// CDOTA_CustomUIManager::GameShutdown  (line 95, @0x0000000002462a40, libserver.so)
void __fastcall CDOTA_CustomUIManager::GameShutdown(
        CDOTA_CustomUIManager *const this,
        const EventGameShutdown_t *const msg)
{
  ;
}


// InitFilterFromPlayerID  (line 115, @0x00000000024636f0, libserver.so)
// calls: CRecipientFilter::MakeReliable, CDOTA_PlayerResource::GetPlayer, CRecipientFilter::AddRecipient, CRecipientFilter::AddAllPlayers, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CDOTA_CustomUIManager::Script_Hud_Create, CDOTA_CustomUIManager::Script_Hud_SetVisible, CDOTA_CustomUIManager::Script_Hud_SetDialogVariables, CDOTA_CustomUIManager::Script_Hud_Destroy
// strings: "%s - Bad player ID %d\n"
// globals: LOG_CUSTOM_UI
bool __fastcall InitFilterFromPlayerID(const char *pContext, int nPlayerID, CRecipientFilter *pFilter)
{
  CDOTAPlayer *Player; // rax
  bool result; // al

  CRecipientFilter::MakeReliable(pFilter);
  if ( nPlayerID == -1 )
  {
    CRecipientFilter::AddAllPlayers(pFilter);
    return 1;
  }
  else
  {
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, nPlayerID);
    if ( Player != 0 )
    {
      CRecipientFilter::AddRecipient(pFilter, Player);
      return 1;
    }
    else
    {
      result = LoggingSystem_IsChannelEnabled(LOG_CUSTOM_UI, 0);
      if ( result )
      {
        LoggingSystem_Log(LOG_CUSTOM_UI, 0, "%s - Bad player ID %d\n", pContext, nPlayerID);
        return 0;
      }
    }
  }
  return result;
}


// CDOTA_CustomUIManager::Script_Hud_Create  (line 138, @0x00000000024952b0, libserver.so)  // inlines: CBaseCmdKeyValues, CDOTAUserMsg_CustomHudElement_Create_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_CustomHudElement_Create_t>, FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Create_t>, PostEvent<CDOTAUserMsg_CustomHudElement_Create_t>, Purge, SendUserMessage<CDOTAUserMsg_CustomHudElement_Create_t>, SetKeyValues, assign, clear, length, mutable_data, set_element_id, set_has_data, set_has_element_id, set_has_layout_filename, set_layout_filename, size, ~CBaseCmdKeyValues, ~CDOTAUserMsg_CustomHudElement_Create_t, ~CNetMessagePB, ~CUserMessagePB, ~CUtlBuffer, ~CUtlMemory
// calls: CRecipientFilter::CRecipientFilter, InitFilterFromPlayerID, CDOTAUserMsg_CustomHudElement_Create::CDOTAUserMsg_CustomHudElement_Create, std::string::_M_mutate(ulong,ulong,ulong), strlen, std::string::assign(char const*,ulong), ScriptTableToKeyValues, KeyValues::deleteThis, CUtlBuffer::CUtlBuffer, KeyValues::WriteAsBinary, CDOTAUserMsg_CustomHudElement_Create::~CDOTAUserMsg_CustomHudElement_Create, CRecipientFilter::~CRecipientFilter (16 total)
// strings: "CustomUIs:Create"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Create_t>(bool)::s_hEvent
void __fastcall CDOTA_CustomUIManager::Script_Hud_Create(
        CDOTA_CustomUIManager *const this,
        int nPlayerID,
        const char *pElementID,
        const char *pLayoutFileName,
        HSCRIPT hDialogVariablesTable)
{
  const char *v9; // rsi
  size_t v10; // rax
  const char *v11; // r12
  size_t v12; // rax
  KeyValues *v13; // r12
  __int64 v14; // r14
  IGameEventSystem *v15; // r12
  void (__fastcall *v16)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  char *v17; // [rsp+8h] [rbp-208h]
  _QWORD v18[2]; // [rsp+10h] [rbp-200h] BYREF
  int v19; // [rsp+20h] [rbp-1F0h]
  std::string *v20; // [rsp+28h] [rbp-1E8h]
  std::string *v21; // [rsp+30h] [rbp-1E0h]
  std::string *v22; // [rsp+38h] [rbp-1D8h]
  KeyValues *pDialogVariablesKV; // [rsp+40h] [rbp-1D0h]
  CUtlBuffer buffer; // [rsp+50h] [rbp-1C0h] BYREF
  CRecipientFilter filter; // [rsp+A0h] [rbp-170h] BYREF
  unsigned __int64 v26; // [rsp+1D8h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  if ( InitFilterFromPlayerID("CustomUIs:Create", nPlayerID, &filter) )
  {
    CDOTAUserMsg_CustomHudElement_Create::CDOTAUserMsg_CustomHudElement_Create(v18);
    v19 |= 4u;
    v18[0] = &off_3F9ABF0;
    pDialogVariablesKV = 0;
    std::string::_M_mutate(v22, 0, *(v22->_M_dataplus._M_p - 3), 0);
    v9 = "";
    if ( pElementID != 0 )
      v9 = pElementID;
    v19 |= 1u;
    v17 = v9;
    v18[0] = off_40DC210;
    v10 = strlen(v9);
    std::string::assign(v20, v17, v10);
    v11 = "";
    if ( pLayoutFileName != 0 )
      v11 = pLayoutFileName;
    v19 |= 2u;
    v12 = strlen(v11);
    std::string::assign(v21, v11, v12);
    if ( hDialogVariablesTable != 0 )
    {
      v13 = ScriptTableToKeyValues(g_pScriptVM, "", hDialogVariablesTable);
      if ( pDialogVariablesKV != 0 )
      {
        KeyValues::deleteThis(pDialogVariablesKV);
        pDialogVariablesKV = 0;
      }
      if ( v13 != 0 )
      {
        pDialogVariablesKV = v13;
        CUtlBuffer::CUtlBuffer(&buffer, 0, 0, 0);
        KeyValues::WriteAsBinary(pDialogVariablesKV, &buffer);
        v19 |= 4u;
        std::string::assign(v22, buffer.m_Memory.m_pMemory, buffer.m_Put);
        if ( (buffer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<unsigned char,int>::Purge(&buffer.m_Memory);
      }
      else
      {
        v19 |= 4u;
        std::string::_M_mutate(v22, 0, *(v22->_M_dataplus._M_p - 3), 0);
      }
    }
    v14 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Create_t>(bool)::s_hEvent;
    v15 = g_pGameEventSystem;
    v16 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Create_t>(bool)::s_hEvent);
    v16(v15, 0, 0, &filter, v14, v18, 56);
    v18[0] = &off_3F9ABF0;
    if ( pDialogVariablesKV != 0 )
    {
      KeyValues::deleteThis(pDialogVariablesKV);
      pDialogVariablesKV = 0;
    }
    CDOTAUserMsg_CustomHudElement_Create::~CDOTAUserMsg_CustomHudElement_Create(v18);
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  else
  {
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CDOTA_CustomUIManager::Script_Hud_SetVisible  (line 160, @0x00000000024955b0, libserver.so)  // inlines: CBaseCmdKeyValues, CDOTAUserMsg_CustomHudElement_Modify_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>, FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>, PostEvent<CDOTAUserMsg_CustomHudElement_Modify_t>, SendUserMessage<CDOTAUserMsg_CustomHudElement_Modify_t>, SetKeyValues, assign, clear, length, mutable_data, set_element_id, set_has_data, set_has_element_id, set_has_modify_visible, set_modify_visible, size, ~CBaseCmdKeyValues, ~CDOTAUserMsg_CustomHudElement_Modify_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, InitFilterFromPlayerID, CDOTAUserMsg_CustomHudElement_Modify::CDOTAUserMsg_CustomHudElement_Modify, std::string::_M_mutate(ulong,ulong,ulong), strlen, std::string::assign(char const*,ulong), KeyValues::deleteThis, CDOTAUserMsg_CustomHudElement_Modify::~CDOTAUserMsg_CustomHudElement_Modify, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>::~CBaseCmdKeyValues, _Unwind_Resume
// strings: "CustomUIs:SetVisible"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>(bool)::s_hEvent
void __fastcall CDOTA_CustomUIManager::Script_Hud_SetVisible(
        CDOTA_CustomUIManager *const this,
        int nPlayerID,
        const char *pElementID,
        bool bVisible)
{
  const char *v7; // r12
  size_t v8; // rax
  __int64 v9; // r14
  IGameEventSystem *v10; // r12
  void (__fastcall *v11)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v12[2]; // [rsp+10h] [rbp-1B0h] BYREF
  int v13; // [rsp+20h] [rbp-1A0h]
  std::string *v14; // [rsp+28h] [rbp-198h]
  std::string *v15; // [rsp+30h] [rbp-190h]
  bool v16; // [rsp+38h] [rbp-188h]
  KeyValues *v17; // [rsp+40h] [rbp-180h]
  CRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+188h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  if ( InitFilterFromPlayerID("CustomUIs:SetVisible", nPlayerID, &filter) )
  {
    CDOTAUserMsg_CustomHudElement_Modify::CDOTAUserMsg_CustomHudElement_Modify(v12);
    v13 |= 4u;
    v12[0] = &off_3F9AD30;
    v7 = "";
    v17 = 0;
    std::string::_M_mutate(v15, 0, *(v15->_M_dataplus._M_p - 3), 0);
    if ( pElementID != 0 )
      v7 = pElementID;
    v12[0] = off_40DC450;
    v13 |= 1u;
    v8 = strlen(v7);
    std::string::assign(v14, v7, v8);
    v16 = bVisible;
    v13 |= 2u;
    v9 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>(bool)::s_hEvent;
    v10 = g_pGameEventSystem;
    v11 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>(bool)::s_hEvent);
    v11(v10, 0, 0, &filter, v9, v12, 56);
    v12[0] = &off_3F9AD30;
    if ( v17 != 0 )
    {
      KeyValues::deleteThis(v17);
      v17 = 0;
    }
    CDOTAUserMsg_CustomHudElement_Modify::~CDOTAUserMsg_CustomHudElement_Modify(v12);
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  else
  {
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CDOTA_CustomUIManager::Script_Hud_SetDialogVariables  (line 176, @0x0000000002495780, libserver.so)  // inlines: CBaseCmdKeyValues, CDOTAUserMsg_CustomHudElement_Modify_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>, FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>, PostEvent<CDOTAUserMsg_CustomHudElement_Modify_t>, Purge, SendUserMessage<CDOTAUserMsg_CustomHudElement_Modify_t>, SetKeyValues, assign, clear, length, mutable_data, set_element_id, set_has_data, set_has_element_id, size, ~CBaseCmdKeyValues, ~CDOTAUserMsg_CustomHudElement_Modify_t, ~CNetMessagePB, ~CUserMessagePB, ~CUtlBuffer, ~CUtlMemory
// calls: CRecipientFilter::CRecipientFilter, InitFilterFromPlayerID, CDOTAUserMsg_CustomHudElement_Modify::CDOTAUserMsg_CustomHudElement_Modify, std::string::_M_mutate(ulong,ulong,ulong), strlen, std::string::assign(char const*,ulong), ScriptTableToKeyValues, KeyValues::deleteThis, CUtlBuffer::CUtlBuffer, KeyValues::WriteAsBinary, CDOTAUserMsg_CustomHudElement_Modify::~CDOTAUserMsg_CustomHudElement_Modify, CRecipientFilter::~CRecipientFilter (16 total)
// strings: "CustomUIs:SetDialogVariables"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>(bool)::s_hEvent
void __fastcall CDOTA_CustomUIManager::Script_Hud_SetDialogVariables(
        CDOTA_CustomUIManager *const this,
        int nPlayerID,
        const char *pElementID,
        HSCRIPT hDialogVariablesTable)
{
  const char *v7; // r12
  size_t v8; // rax
  KeyValues *v9; // r12
  __int64 v10; // r14
  IGameEventSystem *v11; // r12
  void (__fastcall *v12)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v13[2]; // [rsp+10h] [rbp-200h] BYREF
  int v14; // [rsp+20h] [rbp-1F0h]
  std::string *v15; // [rsp+28h] [rbp-1E8h]
  std::string *v16; // [rsp+30h] [rbp-1E0h]
  KeyValues *pDialogVariablesKV; // [rsp+40h] [rbp-1D0h]
  CUtlBuffer buffer; // [rsp+50h] [rbp-1C0h] BYREF
  CRecipientFilter filter; // [rsp+A0h] [rbp-170h] BYREF
  unsigned __int64 v20; // [rsp+1D8h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  if ( InitFilterFromPlayerID("CustomUIs:SetDialogVariables", nPlayerID, &filter) )
  {
    CDOTAUserMsg_CustomHudElement_Modify::CDOTAUserMsg_CustomHudElement_Modify(v13);
    v14 |= 4u;
    v13[0] = &off_3F9AD30;
    v7 = "";
    pDialogVariablesKV = 0;
    std::string::_M_mutate(v16, 0, *(v16->_M_dataplus._M_p - 3), 0);
    if ( pElementID != 0 )
      v7 = pElementID;
    v13[0] = off_40DC450;
    v14 |= 1u;
    v8 = strlen(v7);
    std::string::assign(v15, v7, v8);
    v9 = ScriptTableToKeyValues(g_pScriptVM, "", hDialogVariablesTable);
    if ( pDialogVariablesKV != 0 )
    {
      KeyValues::deleteThis(pDialogVariablesKV);
      pDialogVariablesKV = 0;
    }
    if ( v9 != 0 )
    {
      pDialogVariablesKV = v9;
      CUtlBuffer::CUtlBuffer(&buffer, 0, 0, 0);
      KeyValues::WriteAsBinary(pDialogVariablesKV, &buffer);
      v14 |= 4u;
      std::string::assign(v16, buffer.m_Memory.m_pMemory, buffer.m_Put);
      if ( (buffer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<unsigned char,int>::Purge(&buffer.m_Memory);
    }
    else
    {
      v14 |= 4u;
      std::string::_M_mutate(v16, 0, *(v16->_M_dataplus._M_p - 3), 0);
    }
    v10 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>(bool)::s_hEvent;
    v11 = g_pGameEventSystem;
    v12 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Modify_t>(bool)::s_hEvent);
    v12(v11, 0, 0, &filter, v10, v13, 56);
    v13[0] = &off_3F9AD30;
    if ( pDialogVariablesKV != 0 )
    {
      KeyValues::deleteThis(pDialogVariablesKV);
      pDialogVariablesKV = 0;
    }
    CDOTAUserMsg_CustomHudElement_Modify::~CDOTAUserMsg_CustomHudElement_Modify(v13);
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  else
  {
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CDOTA_CustomUIManager::Script_Hud_Destroy  (line 194, @0x0000000002495a40, libserver.so)  // inlines: CDOTAUserMsg_CustomHudElement_Destroy_t, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_CustomHudElement_Destroy_t>, FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Destroy_t>, PostEvent<CDOTAUserMsg_CustomHudElement_Destroy_t>, SendUserMessage<CDOTAUserMsg_CustomHudElement_Destroy_t>, assign, length, set_element_id, set_has_element_id, ~CDOTAUserMsg_CustomHudElement_Destroy_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, InitFilterFromPlayerID, CDOTAUserMsg_CustomHudElement_Destroy::CDOTAUserMsg_CustomHudElement_Destroy, strlen, std::string::assign(char const*,ulong), CDOTAUserMsg_CustomHudElement_Destroy::~CDOTAUserMsg_CustomHudElement_Destroy, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// strings: "CustomUIs:Destroy"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Destroy_t>(bool)::s_hEvent
void __fastcall CDOTA_CustomUIManager::Script_Hud_Destroy(
        CDOTA_CustomUIManager *const this,
        int nPlayerID,
        const char *pElementID)
{
  const char *v5; // r12
  size_t v6; // rax
  __int64 v7; // r14
  IGameEventSystem *v8; // r12
  void (__fastcall *v9)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v10[2]; // [rsp+10h] [rbp-190h] BYREF
  int v11; // [rsp+20h] [rbp-180h]
  std::string *v12; // [rsp+28h] [rbp-178h]
  CRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+168h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  if ( InitFilterFromPlayerID("CustomUIs:Destroy", nPlayerID, &filter) )
  {
    CDOTAUserMsg_CustomHudElement_Destroy::CDOTAUserMsg_CustomHudElement_Destroy(v10);
    v5 = "";
    if ( pElementID != 0 )
      v5 = pElementID;
    v11 |= 1u;
    v10[0] = off_40DC690;
    v6 = strlen(v5);
    std::string::assign(v12, v5, v6);
    v7 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Destroy_t>(bool)::s_hEvent;
    v8 = g_pGameEventSystem;
    v9 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHudElement_Destroy_t>(bool)::s_hEvent);
    v9(v8, 0, 0, &filter, v7, v10, 32);
    v10[0] = &off_40DC510;
    CDOTAUserMsg_CustomHudElement_Destroy::~CDOTAUserMsg_CustomHudElement_Destroy(v10);
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  else
  {
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


