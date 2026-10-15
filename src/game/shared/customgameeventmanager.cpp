
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CCustomGameEventManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 26, @0x0000000001f32110, libserver.so)
void __cdecl CCustomGameEventManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CCustomGameEventManager::CCustomGameEventManager  (line 34, @0x0000000001f32120, libserver.so)  // inlines: CUtlMemory, CUtlStringMap, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CMemAllocSystemInitialize, CUtlSymbolTable::CUtlSymbolTable, IGameSystem::~IGameSystem, _Unwind_Resume, CUtlMemory<CCustomGameEventManager::CCustomGameEventInfo*, int>::Purge
// callers: __static_initialization_and_destruction_0
void __fastcall CCustomGameEventManager::CCustomGameEventManager(CCustomGameEventManager *const this)
{
  this->_vptr_IGameSystem = off_3FCBA30;
  this->m_CustomGameEvents.m_Vector.m_Size = 0;
  this->m_CustomGameEvents.m_Vector.m_Memory.m_pMemory = 0;
  this->m_CustomGameEvents.m_Vector.m_Memory.m_nAllocationCount = 32;
  this->m_CustomGameEvents.m_Vector.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize();
  this->m_CustomGameEvents.m_Vector.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                                           g_pMemAlloc,
                                                           8LL
                                                         * this->m_CustomGameEvents.m_Vector.m_Memory.m_nAllocationCount);
  CUtlSymbolTable::CUtlSymbolTable(&this->m_CustomGameEvents.m_SymbolTable, 0, 32, 1);
  this->m_nNextListenerID = 0;
}


// CCustomGameEventManager::~CCustomGameEventManager  (line 44, @0x0000000001f2ecf0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, IGameSystem::~IGameSystem, CUtlMemory<CCustomGameEventManager::CCustomGameEventInfo*, int>::Purge
// callers: CCustomGameEventManager::~CCustomGameEventManager
void __fastcall CCustomGameEventManager::~CCustomGameEventManager(CCustomGameEventManager *const this)
{
  bool v2; // zf

  this->_vptr_IGameSystem = off_3FCBA30;
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_CustomGameEvents.m_SymbolTable);
  v2 = (this->m_CustomGameEvents.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_CustomGameEvents.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CCustomGameEventManager::CCustomGameEventInfo *,int>::Purge(&this->m_CustomGameEvents.m_Vector.m_Memory);
    if ( (this->m_CustomGameEvents.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CCustomGameEventManager::CCustomGameEventInfo *,int>::Purge(&this->m_CustomGameEvents.m_Vector.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CCustomGameEventManager::~CCustomGameEventManager  (line 44, @0x0000000001f2ed60, libserver.so)
// calls: CCustomGameEventManager::~CCustomGameEventManager, operator delete
void __fastcall CCustomGameEventManager::~CCustomGameEventManager(CCustomGameEventManager *const this)
{
  CCustomGameEventManager::~CCustomGameEventManager(this);
  operator delete(this);
}


// CCustomGameEventManager::GameInit  (line 51, @0x0000000001f49420, libserver.so)  // inlines: CUtlDelegate<CCustomGameEventManager, CCustomGameEventManager>, CVariantBase, Convert<CCustomGameEventManager, bool (CCustomGameEventManager::*)(const CClientMsg_CustomGameEvent_t&), void (detail::GenericClass::*)()>, FastDelegate1<CCustomGameEventManager, CCustomGameEventManager>, Free, RegisterGameEventHandler<CClientMsg_CustomGameEvent_t>, RegisterInstance<CCustomGameEventManager>, UtlMakeDelegate<CCustomGameEventManager, CCustomGameEventManager, const CClientMsg_CustomGameEvent_t&, bool>, bindmemfunc<CCustomGameEventManager, bool (CCustomGameEventManager::*)(const CClientMsg_CustomGameEvent_t&)>, ~CVariantBase
// calls: GetScriptDesc<CCustomGameEventManager>, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: g_pScriptVM, CCustomGameEventManager::ReceiveClientMsgCustomGameEvent(CClientMsg_CustomGameEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<CClientMsg_CustomGameEvent_t>(bool)::s_hEvent
void __fastcall CCustomGameEventManager::GameInit(
        CCustomGameEventManager *const this,
        const EventGameInit_t *const msg)
{
  IScriptVM *v3; // rbx
  __int64 (__fastcall *v4)(IScriptVM *, ScriptClassDesc_t *, CCustomGameEventManager *const); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  void (__fastcall *v7)(IScriptVM *, _QWORD, char *, CCustomGameEventManager **); // r8
  CCustomGameEventManager *v8; // [rsp+0h] [rbp-40h] BYREF
  bool (__fastcall *v9)(CCustomGameEventManager *const, const CClientMsg_CustomGameEvent_t *const); // [rsp+8h] [rbp-38h]
  __int64 v10; // [rsp+10h] [rbp-30h]

  v3 = g_pScriptVM;
  v4 = *(*g_pScriptVM + 184LL);
  Script = GetScriptDesc<CCustomGameEventManager>(this);
  v6 = v4(v3, Script, this);
  v7 = *(*v3 + 240LL);
  LODWORD(v9) = 31;
  v8 = v6;
  v7(v3, 0, &stru_32D9EEC + 361, &v8);
  if ( (BYTE2(v9) & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
  v8 = this;
  v9 = CCustomGameEventManager::ReceiveClientMsgCustomGameEvent;
  v10 = 0;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    0,
    &v8,
    IGameEventSystem::FindOrCreateGameEvent<CClientMsg_CustomGameEvent_t>(bool)::s_hEvent,
    0);
}


// CCustomGameEventManager::GameShutdown  (line 63, @0x0000000001f48e40, libserver.so)  // inlines: CUtlDelegate<CCustomGameEventManager, CCustomGameEventManager>, Convert<CCustomGameEventManager, bool (CCustomGameEventManager::*)(const CClientMsg_CustomGameEvent_t&), void (detail::GenericClass::*)()>, FastDelegate1<CCustomGameEventManager, CCustomGameEventManager>, Purge, PurgeAndDeleteElements, RemoveAll, UnregisterGameEventHandler<CClientMsg_CustomGameEvent_t>, UtlMakeDelegate<CCustomGameEventManager, CCustomGameEventManager, const CClientMsg_CustomGameEvent_t&, bool>, bindmemfunc<CCustomGameEventManager, bool (CCustomGameEventManager::*)(const CClientMsg_CustomGameEvent_t&)>, ~CCustomGameEventInfo, ~CCustomGameEventListener, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<CCustomGameEventManager::CCustomGameEventInfo*, int>::Purge, CUtlSymbolTable::RemoveAll, CUtlMemory<CCustomGameEventManager::CCustomGameEventListener*, int>::Purge
// globals: CCustomGameEventManager::ReceiveClientMsgCustomGameEvent(CClientMsg_CustomGameEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<CClientMsg_CustomGameEvent_t>(bool)::s_hEvent, g_pScriptVM
void __fastcall CCustomGameEventManager::GameShutdown(
        CCustomGameEventManager *const this,
        const EventGameShutdown_t *const msg)
{
  CCustomGameEventManager::CCustomGameEventInfo *v3; // r13
  __int64 v4; // r12
  int j; // ebx
  CCustomGameEventManager::CCustomGameEventListener *v6; // r14
  bool v7; // zf
  __int64 v8; // [rsp+0h] [rbp-60h]
  int i; // [rsp+Ch] [rbp-54h]
  _QWORD v10[10]; // [rsp+10h] [rbp-50h] BYREF

  v10[1] = CCustomGameEventManager::ReceiveClientMsgCustomGameEvent;
  v10[0] = this;
  v10[2] = 0;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    0,
    v10,
    IGameEventSystem::FindOrCreateGameEvent<CClientMsg_CustomGameEvent_t>(bool)::s_hEvent);
  v8 = 0;
  for ( i = 0; i < this->m_CustomGameEvents.m_Vector.m_Size; ++v8 )
  {
    v3 = this->m_CustomGameEvents.m_Vector.m_Memory.m_pMemory[v8];
    if ( v3 != 0 )
    {
      v4 = 0;
      for ( j = 0; j < v3->m_Listeners.m_Size; ++v4 )
      {
        v6 = v3->m_Listeners.m_Memory.m_pMemory[v4];
        if ( v6 != 0 )
        {
          if ( v6->m_hScriptCallback != 0 )
          {
            (*(*g_pScriptVM + 152LL))(g_pScriptVM);
            v6->m_hScriptCallback = 0;
          }
          operator delete(v6);
        }
        ++j;
      }
      v7 = (v3->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v3->m_Listeners.m_Size = 0;
      if ( v7 )
      {
        CUtlMemory<CCustomGameEventManager::CCustomGameEventListener *,int>::Purge(&v3->m_Listeners.m_Memory);
        v7 = (v3->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v3->m_Listeners.m_Size = 0;
        if ( v7 )
        {
          CUtlMemory<CCustomGameEventManager::CCustomGameEventListener *,int>::Purge(&v3->m_Listeners.m_Memory);
          if ( (v3->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CCustomGameEventManager::CCustomGameEventListener *,int>::Purge(&v3->m_Listeners.m_Memory);
        }
      }
      else
      {
        v3->m_Listeners.m_Size = 0;
      }
      operator delete(v3);
    }
    ++i;
  }
  v7 = (this->m_CustomGameEvents.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_CustomGameEvents.m_Vector.m_Size = 0;
  if ( v7 )
    CUtlMemory<CCustomGameEventManager::CCustomGameEventInfo *,int>::Purge(&this->m_CustomGameEvents.m_Vector.m_Memory);
  CUtlSymbolTable::RemoveAll(&this->m_CustomGameEvents.m_SymbolTable);
  this->m_nNextListenerID = 0;
}


// GetScriptDesc<CCustomGameEventManager>  (line 77, @0x0000000001f48fd0, libserver.so)  // inlines: AddParameterType, CUtlMemory, CUtlVector, CUtlVectorBase, Finalize, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CCustomGameEventManager*, CCustomGameEventManager, int, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<CCustomGameEventManager*, CCustomGameEventManager, void, HSCRIPT__*, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<CCustomGameEventManager*, CCustomGameEventManager, void, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<CCustomGameEventManager*, CCustomGameEventManager, void, int, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<CCustomGameEventManager*, CCustomGameEventManager, void, int>, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >::AddToTail
// callers: CCustomGameEventManager::GameInit
// strings: "( string EventName, func CallbackFunction ) - Register a callback to be called when a par, "Script_RegisterListener", "( int ListnerID ) - Unregister a specific listener", "Script_UnregisterListener", "( string EventName, table EventData )", "Send_ServerToAllClients" (11 total)
// globals: g_pCCustomGameEventManager_ScriptDesc, CMemberScriptBinding2<CCustomGameEventManager *,int (CCustomGameEventManager::*)(char const*,HSCRIPT__ *),int,char const*,HSCRIPT__ *>::Call(void *,void *,CVari, CCustomGameEventManager::Script_RegisterListener(char const*,HSCRIPT__ *), CMemberScriptBinding1<CCustomGameEventManager *,void (CCustomGameEventManager::*)(int),void,int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,in, CCustomGameEventManager::Script_UnregisterListener(int), CMemberScriptBinding2<CCustomGameEventManager *,void (CCustomGameEventManager::*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call(void *,void *,CVa, CCustomGameEventManager::Script_Send_ServerToAllClients(char const*,HSCRIPT__ *), CMemberScriptBinding3<CCustomGameEventManager *,void (CCustomGameEventManager::*)(int,char const*,HSCRIPT__ *),void,int,char const*,HSCRIPT__ *>::Call(void *,vo (11 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CCustomGameEventManager>(
        CCustomGameEventManager *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // r12
  CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int> > *p_m_FunctionBindings; // rbx
  __int64 v4; // rax
  char v5; // dl
  char v6; // cl
  int v7; // edx
  char v8; // cl
  char v9; // di
  __int64 v10; // rax
  char v11; // dl
  __int64 v12; // rcx
  int v13; // edx
  char v14; // cl
  __int64 v15; // rax
  char v16; // dl
  char v17; // cl
  int v18; // edx
  char v19; // cl
  char v20; // di
  __int64 v21; // rsi
  char v22; // dl
  char v23; // al
  int v24; // edx
  char v25; // cl
  char v26; // di
  __int64 v27; // rcx
  char v28; // dl
  char v29; // al
  int v30; // edx
  char v31; // al

  result = g_pCCustomGameEventManager_ScriptDesc;
  if ( g_pCCustomGameEventManager_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    p_m_FunctionBindings = &v2->m_FunctionBindings;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCCustomGameEventManager_ScriptDesc = v2;
    v2->m_pszDescription = &stru_32D9EEC.m_scrapeSounds.m_Size + 5;
    v2->m_pszScriptName = &stru_32D9EEC + 360;
    v2->m_pszClassname = &stru_32D9EEC + 360;
    v4 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(&v2->m_FunctionBindings)];
    v5 = *(v4 + 26);
    *(v4 + 16) = "( string EventName, func CallbackFunction ) - Register a callback to be called when a particular custom"
                 " event arrives. Returns a listener ID that can be used to unregister later.";
    *v4 = "RegisterListener";
    *(v4 + 8) = "Script_RegisterListener";
    *(v4 + 24) = 5;
    *(v4 + v5 + 27) = 30;
    v6 = v5 + 1;
    v5 += 2;
    *(v4 + v6 + 27) = 31;
    *(v4 + 26) = v5;
    v7 = v5 - 1;
    *(v4 + 25) = 0;
    if ( v7 >= 0 && *(v4 + v7 + 27) == 32 )
    {
      v8 = 1;
      do
      {
        --v7;
        v9 = v8;
        if ( v7 == -1 )
        {
          *(v4 + 25) = v8;
          goto LABEL_8;
        }
        ++v8;
      }
      while ( *(v4 + v7 + 27) == 32 );
      *(v4 + 25) = v9;
    }
LABEL_8:
    *(v4 + 64) = 1;
    *(v4 + 48) = CMemberScriptBinding2<CCustomGameEventManager *,int (CCustomGameEventManager::*)(char const*,HSCRIPT__ *),int,char const*,HSCRIPT__ *>::Call;
    *(v4 + 56) = CCustomGameEventManager::Script_RegisterListener;
    v10 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v11 = *(v10 + 26);
    *(v10 + 16) = "( int ListnerID ) - Unregister a specific listener";
    *v10 = "UnregisterListener";
    *(v10 + 8) = "Script_UnregisterListener";
    *(v10 + 24) = 0;
    v12 = v11++;
    *(v10 + v12 + 27) = 5;
    *(v10 + 26) = v11;
    v13 = v11 - 1;
    *(v10 + 25) = 0;
    if ( v13 >= 0 && *(v10 + v13 + 27) == 32 )
    {
      v14 = 0;
      do
      {
        --v13;
        ++v14;
      }
      while ( v13 != -1 && *(v10 + v13 + 27) == 32 );
      *(v10 + 25) = v14;
    }
    *(v10 + 64) = 1;
    *(v10 + 48) = CMemberScriptBinding1<CCustomGameEventManager *,void (CCustomGameEventManager::*)(int),void,int>::Call;
    *(v10 + 56) = CCustomGameEventManager::Script_UnregisterListener;
    v15 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v16 = *(v15 + 26);
    *(v15 + 16) = "( string EventName, table EventData )";
    *v15 = "Send_ServerToAllClients";
    *(v15 + 8) = "Script_Send_ServerToAllClients";
    *(v15 + 24) = 0;
    *(v15 + v16 + 27) = 30;
    v17 = v16 + 1;
    v16 += 2;
    *(v15 + v17 + 27) = 31;
    *(v15 + 26) = v16;
    v18 = v16 - 1;
    *(v15 + 25) = 0;
    if ( v18 >= 0 && *(v15 + v18 + 27) == 32 )
    {
      v19 = 1;
      do
      {
        --v18;
        v20 = v19;
        if ( v18 == -1 )
        {
          *(v15 + 25) = v19;
          goto LABEL_20;
        }
        ++v19;
      }
      while ( *(v15 + v18 + 27) == 32 );
      *(v15 + 25) = v20;
    }
LABEL_20:
    *(v15 + 64) = 1;
    *(v15 + 48) = CMemberScriptBinding2<CCustomGameEventManager *,void (CCustomGameEventManager::*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
    *(v15 + 56) = CCustomGameEventManager::Script_Send_ServerToAllClients;
    v21 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v22 = *(v21 + 26);
    *(v21 + 24) = 0;
    *(v21 + 16) = "( int TeamNumber, string EventName, table EventData )";
    *v21 = "Send_ServerToTeam";
    *(v21 + 8) = "Script_Send_ServerToTeam";
    *(v21 + v22 + 27) = 5;
    *(v21 + (v22 + 1) + 27) = 30;
    v23 = v22 + 2;
    v22 += 3;
    *(v21 + v23 + 27) = 31;
    *(v21 + 26) = v22;
    v24 = v22 - 1;
    *(v21 + 25) = 0;
    if ( v24 >= 0 && *(v21 + v24 + 27) == 32 )
    {
      v25 = 1;
      do
      {
        --v24;
        v26 = v25;
        if ( v24 == -1 )
        {
          *(v21 + 25) = v25;
          goto LABEL_26;
        }
        ++v25;
      }
      while ( *(v21 + v24 + 27) == 32 );
      *(v21 + 25) = v26;
    }
LABEL_26:
    *(v21 + 64) = 1;
    *(v21 + 48) = CMemberScriptBinding3<CCustomGameEventManager *,void (CCustomGameEventManager::*)(int,char const*,HSCRIPT__ *),void,int,char const*,HSCRIPT__ *>::Call;
    *(v21 + 56) = CCustomGameEventManager::Script_Send_ServerToTeam;
    v27 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v28 = *(v27 + 26);
    *(v27 + 24) = 0;
    *(v27 + 16) = "( Entity Player, string EventName, table EventData )";
    *v27 = "Send_ServerToPlayer";
    *(v27 + 8) = "Script_Send_ServerToPlayer";
    *(v27 + v28 + 27) = 31;
    *(v27 + (v28 + 1) + 27) = 30;
    v29 = v28 + 2;
    v28 += 3;
    *(v27 + v29 + 27) = 31;
    *(v27 + 26) = v28;
    v30 = v28 - 1;
    *(v27 + 25) = 0;
    if ( v30 >= 0 && *(v27 + v30 + 27) == 32 )
    {
      v31 = 0;
      do
      {
        --v30;
        ++v31;
      }
      while ( v30 != -1 && *(v27 + v30 + 27) == 32 );
      *(v27 + 25) = v31;
    }
    *(v27 + 64) = 1;
    *(v27 + 48) = CMemberScriptBinding3<CCustomGameEventManager *,void (CCustomGameEventManager::*)(HSCRIPT__ *,char const*,HSCRIPT__ *),void,HSCRIPT__ *,char const*,HSCRIPT__ *>::Call;
    *(v27 + 56) = CCustomGameEventManager::Script_Send_ServerToPlayer;
    return v2;
  }
  return result;
}


// CCustomGameEventManager::CCustomGameEventInfo::CCustomGameEventInfo  (line 88, @0x0000000001f32200, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
void __fastcall CCustomGameEventManager::CCustomGameEventInfo::CCustomGameEventInfo(
        CCustomGameEventManager::CCustomGameEventInfo *const this)
{
  this->m_Listeners.m_Size = 0;
  this->m_Listeners.m_Memory.m_pMemory = 0;
  this->m_Listeners.m_Memory.m_nAllocationCount = 0;
  this->m_Listeners.m_Memory.m_nGrowSize = 0;
}


// CCustomGameEventManager::CCustomGameEventInfo::~CCustomGameEventInfo  (line 95, @0x0000000001f32230, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CCustomGameEventListener, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<CCustomGameEventManager::CCustomGameEventListener*, int>::Purge
// globals: g_pScriptVM
void __fastcall CCustomGameEventManager::CCustomGameEventInfo::~CCustomGameEventInfo(
        CCustomGameEventManager::CCustomGameEventInfo *const this)
{
  __int64 v2; // r13
  int i; // r12d
  CCustomGameEventManager::CCustomGameEventListener *v4; // rbx
  bool v5; // zf

  v2 = 0;
  for ( i = 0; i < this->m_Listeners.m_Size; ++v2 )
  {
    v4 = this->m_Listeners.m_Memory.m_pMemory[v2];
    if ( v4 != 0 )
    {
      if ( v4->m_hScriptCallback != 0 )
      {
        (*(*g_pScriptVM + 152LL))(g_pScriptVM);
        v4->m_hScriptCallback = 0;
      }
      operator delete(v4);
    }
    ++i;
  }
  v5 = (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Listeners.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CCustomGameEventManager::CCustomGameEventListener *,int>::Purge(&this->m_Listeners.m_Memory);
    v5 = (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Listeners.m_Size = 0;
    if ( v5 )
    {
      CUtlMemory<CCustomGameEventManager::CCustomGameEventListener *,int>::Purge(&this->m_Listeners.m_Memory);
      if ( (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CCustomGameEventManager::CCustomGameEventListener *,int>::Purge(&this->m_Listeners.m_Memory);
    }
  }
  else
  {
    this->m_Listeners.m_Size = 0;
  }
}


// CCustomGameEventManager::CCustomGameEventListener::CCustomGameEventListener  (line 103, @0x0000000001f32300, libserver.so)
void __fastcall CCustomGameEventManager::CCustomGameEventListener::CCustomGameEventListener(
        CCustomGameEventManager::CCustomGameEventListener *const this)
{
  this->m_hScriptCallback = 0;
}


// CCustomGameEventManager::CCustomGameEventListener::~CCustomGameEventListener  (line 111, @0x0000000001f32310, libserver.so)
// globals: g_pScriptVM
void __fastcall CCustomGameEventManager::CCustomGameEventListener::~CCustomGameEventListener(
        CCustomGameEventManager::CCustomGameEventListener *const this)
{
  if ( this->m_hScriptCallback != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_hScriptCallback = 0;
  }
}


// CCustomGameEventManager::FindOrCreateCustomEventInfo  (line 123, @0x0000000001f5eea0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CCustomGameEventInfo, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CCustomGameEventManager::CCustomGameEventInfo*>, Element, EnsureCount, Find, GrowMemory, GrowVector, Insert, InsertMultipleBefore, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::Find, operator new, CUtlSymbolTable::AddString, CUtlMemory<CCustomGameEventManager::CCustomGameEventInfo*, int>::Grow
// callers: CCustomGameEventManager::Script_RegisterListener
CCustomGameEventManager::CCustomGameEventInfo *__fastcall CCustomGameEventManager::FindOrCreateCustomEventInfo(
        CCustomGameEventManager *const this,
        const char *pEventName)
{
  CUtlSymbolTable *p_m_SymbolTable; // r13
  CCustomGameEventManager::CCustomGameEventInfo *v6; // rax
  CCustomGameEventManager::CCustomGameEventInfo *v7; // r15
  __int64 m_Size; // r12
  int m_nAllocationCount; // eax
  int v10; // eax
  CCustomGameEventManager::CCustomGameEventInfo **v11; // rax
  UtlSymId_t nEventId; // [rsp+0h] [rbp-40h]

  p_m_SymbolTable = &this->m_CustomGameEvents.m_SymbolTable;
  CUtlSymbolTable::Find(&this->m_CustomGameEvents.m_SymbolTable, pEventName);
  if ( nEventId != 0xFFFF )
    return this->m_CustomGameEvents.m_Vector.m_Memory.m_pMemory[nEventId];
  v6 = operator new(0x18u);
  v6->m_Listeners.m_Size = 0;
  v7 = v6;
  v6->m_Listeners.m_Memory.m_pMemory = 0;
  v6->m_Listeners.m_Memory.m_nAllocationCount = 0;
  v6->m_Listeners.m_Memory.m_nGrowSize = 0;
  CUtlSymbolTable::AddString(p_m_SymbolTable, pEventName);
  m_Size = this->m_CustomGameEvents.m_Vector.m_Size;
  if ( m_Size <= 0xFFFF )
  {
    if ( m_Size == 0xFFFF )
    {
      v10 = 0xFFFF;
      if ( this->m_CustomGameEvents.m_Vector.m_Memory.m_nAllocationCount == 0xFFFF )
      {
        CUtlMemory<CCustomGameEventManager::CCustomGameEventInfo *,int>::Grow(
          &this->m_CustomGameEvents.m_Vector.m_Memory,
          1);
        v10 = this->m_CustomGameEvents.m_Vector.m_Size;
      }
      this->m_CustomGameEvents.m_Vector.m_Size = v10 + 1;
      v11 = &this->m_CustomGameEvents.m_Vector.m_Memory.m_pMemory[m_Size];
      if ( v11 != 0 )
        *v11 = v7;
    }
    else
    {
      m_nAllocationCount = this->m_CustomGameEvents.m_Vector.m_Memory.m_nAllocationCount;
      if ( m_nAllocationCount < 0x10000 )
        CUtlMemory<CCustomGameEventManager::CCustomGameEventInfo *,int>::Grow(
          &this->m_CustomGameEvents.m_Vector.m_Memory,
          0x10000 - m_nAllocationCount);
      this->m_CustomGameEvents.m_Vector.m_Size = 0x10000;
      *(this->m_CustomGameEvents.m_Vector.m_Memory.m_pMemory + 0xFFFF) = v7;
    }
  }
  return v7;
}


// CCustomGameEventManager::FindCustomEventInfo  (line 142, @0x0000000001f32350, libserver.so)  // inlines: Find, operator const UtlSymId_t
// calls: CUtlSymbolTable::Find
// callers: CCustomGameEventManager::ReceiveClientMsgCustomGameEvent
CCustomGameEventManager::CCustomGameEventInfo *__fastcall CCustomGameEventManager::FindCustomEventInfo(
        CCustomGameEventManager *const this,
        const char *pEventName)
{
  unsigned __int16 v4; // [rsp-8h] [rbp-28h]

  if ( pEventName == 0 || *pEventName == 0 )
    return 0;
  CUtlSymbolTable::Find(&this->m_CustomGameEvents.m_SymbolTable, pEventName);
  if ( v4 == 0xFFFF )
    return 0;
  else
    return this->m_CustomGameEvents.m_Vector.m_Memory.m_pMemory[v4];
}


// CCustomGameEventManager::ReceiveClientMsgCustomGameEvent  (line 161, @0x0000000001f3eb20, libserver.so)  // inlines: CVariantBase, Free, GetKeyValues, HasKeyValues, ToBasePlayer, _M_data, _M_rep, c_str, operator=, size, ~CUtlBuffer, ~CUtlMemory, ~CVariantBase
// calls: CCustomGameEventManager::FindCustomEventInfo, ScriptTableFromKeyValues, CVariantBase<CVariantDefaultAllocator>::Free, CUtlBuffer::CUtlBuffer, CUtlBuffer::Put, KeyValues::operator new, KeyValues::KeyValues, KeyValues::ReadAsBinary, CUtlMemory<unsigned char, int>::Purge, CBaseEntity::Instance, KeyValues::SetInt, KeyValues::operator delete (13 total)
// strings: "Base_CmdKeyValues"
// globals: g_pScriptVM
bool __fastcall CCustomGameEventManager::ReceiveClientMsgCustomGameEvent(
        CCustomGameEventManager *const this,
        const CClientMsg_CustomGameEvent_t *const msg)
{
  CCustomGameEventManager::CCustomGameEventInfo *CustomEventInfo; // r15
  __int64 v5; // r13
  CCustomGameEventManager::CCustomGameEventListener *v6; // rbx
  KeyValues *v7; // rsi
  HSCRIPT v8; // r14
  CVariantBase<CVariantDefaultAllocator> *v9; // rbx
  const CClientMsg_CustomGameEvent_t **v10; // rbx
  KeyValues *v12; // r14
  CBaseEntity *v13; // rbx
  int v14; // r13d
  KeyValues *v15; // rbx
  const CClientMsg_CustomGameEvent_t *v16; // r14
  KeyValues *v17; // rbx
  int iEnt; // [rsp+Ch] [rbp-94h]
  const CClientMsg_CustomGameEvent_t *msga; // [rsp+10h] [rbp-90h] BYREF
  KeyValues *v20; // [rsp+18h] [rbp-88h]
  CVariantBase<CVariantDefaultAllocator> args[2]; // [rsp+20h] [rbp-80h] BYREF
  __int64 v22; // [rsp+40h] [rbp-60h] BYREF

  msga = msg;
  iEnt = (*(*g_pGameEventSystem + 152LL))(g_pGameEventSystem);
  CustomEventInfo = CCustomGameEventManager::FindCustomEventInfo(this, **(msg + 3));
  if ( CustomEventInfo != 0 )
  {
    if ( (*(msg + 16) & 2) != 0 && *(**(msga + 4) - 24LL) != 0 )
    {
      v13 = CBaseEntity::Instance(iEnt);
      if ( v13 != 0 && (*(v13->_vptr_IHandleEntity + 140))(v13) != 0 )
      {
        v14 = (*(v13->_vptr_IHandleEntity + 393))(v13);
        v15 = *(msga + 5);
        if ( v15 == 0 )
        {
          CUtlBuffer::CUtlBuffer(args, 0, 0, 0);
          v16 = msga;
          CUtlBuffer::Put(args, **(msga + 4), *(**(msga + 4) - 24LL));
          v17 = KeyValues::operator new(0x14u);
          KeyValues::KeyValues(v17, "Base_CmdKeyValues");
          *(msga + 5) = v17;
          KeyValues::ReadAsBinary(v17, args);
          v15 = *(v16 + 5);
          CUtlMemory<unsigned char,int>::Purge(args);
        }
        KeyValues::SetInt(v15, "PlayerID", v14);
      }
    }
    if ( CustomEventInfo->m_Listeners.m_Size > 0 )
    {
      v5 = 0;
      do
      {
        v6 = CustomEventInfo->m_Listeners.m_Memory.m_pMemory[v5];
        if ( v6->m_hScriptCallback != 0 )
        {
          if ( (*(msga + 16) & 2) != 0 && *(**(msga + 4) - 24LL) != 0 )
          {
            v7 = *(msga + 5);
            if ( v7 == 0 )
            {
              CUtlBuffer::CUtlBuffer(args, 0, 0, 0);
              CUtlBuffer::Put(args, **(msga + 4), *(**(msga + 4) - 24LL));
              v12 = KeyValues::operator new(0x14u);
              KeyValues::KeyValues(v12, "Base_CmdKeyValues");
              *(msga + 5) = v12;
              KeyValues::ReadAsBinary(v12, args);
              v20 = *(msga + 5);
              CUtlMemory<unsigned char,int>::Purge(args);
              v7 = v20;
            }
            v8 = ScriptTableFromKeyValues(g_pScriptVM, v7, 0);
          }
          else
          {
            v8 = 0;
          }
          args[0].m_flags = 0;
          args[1].m_type = 0;
          args[0].m_type = 0;
          args[0].m_uint64 = 0;
          args[1].m_flags = 0;
          args[1].m_uint64 = 0;
          CVariantBase<CVariantDefaultAllocator>::Free(args);
          args[0].m_type = 5;
          args[0].m_int = iEnt;
          CVariantBase<CVariantDefaultAllocator>::Free(&args[1]);
          args[1].m_type = 31;
          args[1].m_uint64 = v8;
          (*(*g_pScriptVM + 160LL))(g_pScriptVM, v6->m_hScriptCallback, args, 2, 0, 0, 1);
          v9 = args;
          v20 = &v22;
          do
          {
            if ( (v9->m_flags & 1) != 0 )
            {
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9->m_uint64);
              v9->m_flags &= ~1u;
            }
            v9->m_uint64 = 0;
            ++v9;
            v9[-1].m_type = 0;
          }
          while ( v9 != v20 );
          if ( v8 != 0 )
            (*(*g_pScriptVM + 136LL))(g_pScriptVM, v8);
          v10 = &args[1];
          do
          {
            if ( (*(v10 + 10) & 1) != 0 )
            {
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v10);
              *(v10 + 5) &= ~1u;
            }
            v10 -= 2;
            v10[2] = 0;
            *(v10 + 12) = 0;
          }
          while ( v10 != &msga );
        }
        ++v5;
      }
      while ( CustomEventInfo->m_Listeners.m_Size > v5 );
    }
  }
  return 1;
}


// CCustomGameEventManager::Script_RegisterListener  (line 223, @0x0000000001f5efc0, libserver.so)  // inlines: AddToTail, CopyConstruct<CCustomGameEventManager::CCustomGameEventListener*>, Element, GrowMemory, operator[]
// calls: operator new, CCustomGameEventManager::FindOrCreateCustomEventInfo, CUtlMemory<CCustomGameEventManager::CCustomGameEventListener*, int>::Grow, Msg
// strings: "CCustomGameEventManager::Script_RegisterListener - Invalid event name\n", "CCustomGameEventManager::Script_RegisterListener - Invalid callback\n", "CCustomGameEventManager::Script_RegisterListener - Failed to duplicate callback\n"
// globals: g_pScriptVM
int __fastcall CCustomGameEventManager::Script_RegisterListener(
        CCustomGameEventManager *const this,
        const char *pEventName,
        HSCRIPT hCallbackFn)
{
  __int64 v5; // r15
  int m_nNextListenerID; // r12d
  CCustomGameEventManager::CCustomGameEventListener *v7; // rax
  CCustomGameEventManager::CCustomGameEventListener *v8; // r14
  CCustomGameEventManager::CCustomGameEventInfo *CustomEventInfo; // rax
  __int64 m_Size; // r13
  CCustomGameEventManager::CCustomGameEventInfo *v11; // rbx
  bool v12; // zf
  int v13; // eax
  CCustomGameEventManager::CCustomGameEventListener **v14; // rax

  if ( pEventName != 0 && *pEventName != 0 )
  {
    if ( hCallbackFn != 0 )
    {
      v5 = (*(*g_pScriptVM + 456LL))(g_pScriptVM, hCallbackFn);
      if ( v5 != 0 )
      {
        m_nNextListenerID = this->m_nNextListenerID;
        this->m_nNextListenerID = m_nNextListenerID + 1;
        v7 = operator new(0x10u);
        v7->m_nListenerID = m_nNextListenerID;
        v8 = v7;
        v7->m_hScriptCallback = v5;
        CustomEventInfo = CCustomGameEventManager::FindOrCreateCustomEventInfo(this, pEventName);
        m_Size = CustomEventInfo->m_Listeners.m_Size;
        v11 = CustomEventInfo;
        v12 = m_Size == CustomEventInfo->m_Listeners.m_Memory.m_nAllocationCount;
        v13 = CustomEventInfo->m_Listeners.m_Size;
        if ( v12 )
        {
          CUtlMemory<CCustomGameEventManager::CCustomGameEventListener *,int>::Grow(&v11->m_Listeners.m_Memory, 1);
          v13 = v11->m_Listeners.m_Size;
        }
        v11->m_Listeners.m_Size = v13 + 1;
        v14 = &v11->m_Listeners.m_Memory.m_pMemory[m_Size];
        if ( v14 != 0 )
          *v14 = v8;
      }
      else
      {
        m_nNextListenerID = -1;
        Msg("CCustomGameEventManager::Script_RegisterListener - Failed to duplicate callback\n");
      }
    }
    else
    {
      m_nNextListenerID = -1;
      Msg("CCustomGameEventManager::Script_RegisterListener - Invalid callback\n");
    }
  }
  else
  {
    m_nNextListenerID = -1;
    Msg("CCustomGameEventManager::Script_RegisterListener - Invalid event name\n", pEventName, hCallbackFn);
  }
  return m_nNextListenerID;
}


// CCustomGameEventManager::Script_UnregisterListener  (line 258, @0x0000000001f2eb00, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[], ~CCustomGameEventListener
// calls: Msg, operator delete, memmove
// strings: "CCustomGameEventManager::Script_UnregisterListener - ID %d not found.\n", "CCustomGameEventManager::Script_UnregisterListener - Invalid ID\n"
// globals: g_pScriptVM
void __fastcall CCustomGameEventManager::Script_UnregisterListener(CCustomGameEventManager *const this, int nId)
{
  __int64 v2; // rdx
  int m_Size; // r9d
  CCustomGameEventManager::CCustomGameEventInfo **m_pMemory; // r10
  int v5; // r8d
  CCustomGameEventManager::CCustomGameEventInfo *v6; // r13
  CCustomGameEventManager::CCustomGameEventListener **v7; // rdi
  CCustomGameEventManager::CCustomGameEventListener *v8; // r12
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // r14

  if ( nId == -1 )
  {
    Msg("CCustomGameEventManager::Script_UnregisterListener - Invalid ID\n");
    return;
  }
  m_Size = this->m_CustomGameEvents.m_Vector.m_Size;
  if ( m_Size == 0 )
  {
LABEL_11:
    Msg("CCustomGameEventManager::Script_UnregisterListener - ID %d not found.\n", nId);
    return;
  }
  m_pMemory = this->m_CustomGameEvents.m_Vector.m_Memory.m_pMemory;
  v5 = 0;
  while ( 1 )
  {
    v6 = m_pMemory[v5];
    if ( v6->m_Listeners.m_Size > 0 )
      break;
LABEL_10:
    if ( ++v5 == m_Size )
      goto LABEL_11;
  }
  v7 = v6->m_Listeners.m_Memory.m_pMemory;
  v8 = *v7;
  if ( (*v7)->m_nListenerID != nId )
  {
    v9 = 1;
    v10 = 0;
    while ( ++v10 != v6->m_Listeners.m_Size )
    {
      v8 = v7[v9];
      v2 = v9 * 8 + 8;
      if ( v8->m_nListenerID == nId )
      {
        v11 = v9 * 8;
        goto LABEL_13;
      }
      ++v9;
    }
    goto LABEL_10;
  }
  v11 = 0;
  v10 = 0;
LABEL_13:
  if ( v8->m_hScriptCallback != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v8->m_hScriptCallback, v2);
    v8->m_hScriptCallback = 0;
  }
  operator delete(v8);
  if ( v6->m_Listeners.m_Size - v10 - 1 > 0 )
    memmove(
      v6->m_Listeners.m_Memory.m_pMemory + v11,
      &v6->m_Listeners.m_Memory.m_pMemory[v10 + 1],
      8LL * (v6->m_Listeners.m_Size - v10 - 1));
  --v6->m_Listeners.m_Size;
}


// CCustomGameEventManager::Script_Send_ServerToAllClients  (line 287, @0x0000000001f70590, libserver.so)  // inlines: CBaseCmdKeyValues, CNetMessagePB, CUserMessagePB, CUserMsg_CustomGameEvent_t, FindGameEvent<CUserMsg_CustomGameEvent_t>, FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>, PostEvent<CUserMsg_CustomGameEvent_t>, SetKeyValues, assign, clear, length, mutable_data, set_event_name, set_has_data, set_has_event_name, size, ~CBaseCmdKeyValues, ~CNetMessagePB, ~CUserMessagePB, ~CUserMsg_CustomGameEvent_t, ~CUtlBuffer, ~CUtlMemory
// calls: ScriptTableToKeyValues, CRecipientFilter::CRecipientFilter, CRecipientFilter::MakeReliable, CRecipientFilter::AddAllPlayers, CUserMsg_CustomGameEvent::CUserMsg_CustomGameEvent, std::string::_M_mutate(ulong,ulong,ulong), strlen, std::string::assign(char const*,ulong), KeyValues::deleteThis, CUtlBuffer::CUtlBuffer, KeyValues::WriteAsBinary, CUtlMemory<unsigned char, int>::Purge (17 total)
// globals: g_pScriptVM, IGameEventSystem::FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>(bool)::s_hEvent
void __fastcall CCustomGameEventManager::Script_Send_ServerToAllClients(
        CCustomGameEventManager *const this,
        const char *pEventName,
        HSCRIPT hEventData)
{
  KeyValues *v4; // r14
  size_t v5; // rax
  __int64 v6; // r14
  IGameEventSystem *v7; // r13
  void (__fastcall *v8)(IGameEventSystem *, _QWORD, __int64, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v9[2]; // [rsp+10h] [rbp-1F0h] BYREF
  int v10; // [rsp+20h] [rbp-1E0h]
  std::string *v11; // [rsp+28h] [rbp-1D8h]
  std::string *v12; // [rsp+30h] [rbp-1D0h]
  KeyValues *v13; // [rsp+38h] [rbp-1C8h]
  CUtlBuffer buffer; // [rsp+40h] [rbp-1C0h] BYREF
  CRecipientFilter filter; // [rsp+90h] [rbp-170h] BYREF
  unsigned __int64 v16; // [rsp+1C8h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  v4 = ScriptTableToKeyValues(g_pScriptVM, "", hEventData);
  CRecipientFilter::CRecipientFilter(&filter);
  CRecipientFilter::MakeReliable(&filter);
  CRecipientFilter::AddAllPlayers(&filter);
  CUserMsg_CustomGameEvent::CUserMsg_CustomGameEvent(v9);
  v10 |= 2u;
  v9[0] = &off_3FCB1F0;
  v13 = 0;
  std::string::_M_mutate(v12, 0, *(v12->_M_dataplus._M_p - 3), 0);
  v10 |= 1u;
  v9[0] = off_3FCB4B0;
  v5 = strlen(pEventName);
  std::string::assign(v11, pEventName, v5);
  if ( v13 != 0 )
  {
    KeyValues::deleteThis(v13);
    v13 = 0;
  }
  if ( v4 != 0 )
  {
    v13 = v4;
    CUtlBuffer::CUtlBuffer(&buffer, 0, 0, 0);
    KeyValues::WriteAsBinary(v13, &buffer);
    v10 |= 2u;
    std::string::assign(v12, buffer.m_Memory.m_pMemory, buffer.m_Put);
    CUtlMemory<unsigned char,int>::Purge(&buffer.m_Memory);
  }
  else
  {
    v10 |= 2u;
    std::string::_M_mutate(v12, 0, *(v12->_M_dataplus._M_p - 3), 0);
  }
  v6 = IGameEventSystem::FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>(bool)::s_hEvent);
  v8(v7, 0, 1, &filter, v6, v9, 48);
  v9[0] = &off_3FCB1F0;
  if ( v13 != 0 )
  {
    KeyValues::deleteThis(v13);
    v13 = 0;
  }
  CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent(v9);
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CCustomGameEventManager::Script_Send_ServerToTeam  (line 305, @0x0000000001f70800, libserver.so)  // inlines: CBaseCmdKeyValues, CNetMessagePB, CUserMessagePB, CUserMsg_CustomGameEvent_t, FindGameEvent<CUserMsg_CustomGameEvent_t>, FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>, PostEvent<CUserMsg_CustomGameEvent_t>, SetKeyValues, assign, clear, length, mutable_data, set_event_name, set_has_data, set_has_event_name, size, ~CBaseCmdKeyValues, ~CNetMessagePB, ~CUserMessagePB, ~CUserMsg_CustomGameEvent_t, ~CUtlBuffer, ~CUtlMemory
// calls: ScriptTableToKeyValues, CRecipientFilter::CRecipientFilter, CRecipientFilter::MakeReliable, CRecipientFilter::RemoveAllRecipients, CRecipientFilter::AddRecipientsByTeamNumber, CUserMsg_CustomGameEvent::CUserMsg_CustomGameEvent, std::string::_M_mutate(ulong,ulong,ulong), strlen, std::string::assign(char const*,ulong), KeyValues::deleteThis, CUtlBuffer::CUtlBuffer, KeyValues::WriteAsBinary (18 total)
// globals: g_pScriptVM, IGameEventSystem::FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>(bool)::s_hEvent
void __fastcall CCustomGameEventManager::Script_Send_ServerToTeam(
        CCustomGameEventManager *const this,
        int nTeamNumber,
        const char *pEventName,
        HSCRIPT hEventData)
{
  KeyValues *v6; // r14
  size_t v7; // rax
  __int64 v8; // r14
  IGameEventSystem *v9; // r13
  void (__fastcall *v10)(IGameEventSystem *, _QWORD, __int64, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v11[2]; // [rsp+10h] [rbp-1F0h] BYREF
  int v12; // [rsp+20h] [rbp-1E0h]
  std::string *v13; // [rsp+28h] [rbp-1D8h]
  std::string *v14; // [rsp+30h] [rbp-1D0h]
  KeyValues *v15; // [rsp+38h] [rbp-1C8h]
  CUtlBuffer buffer; // [rsp+40h] [rbp-1C0h] BYREF
  CRecipientFilter filter; // [rsp+90h] [rbp-170h] BYREF
  unsigned __int64 v18; // [rsp+1C8h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  v6 = ScriptTableToKeyValues(g_pScriptVM, "", hEventData);
  CRecipientFilter::CRecipientFilter(&filter);
  CRecipientFilter::MakeReliable(&filter);
  CRecipientFilter::RemoveAllRecipients(&filter);
  CRecipientFilter::AddRecipientsByTeamNumber(&filter, nTeamNumber);
  CUserMsg_CustomGameEvent::CUserMsg_CustomGameEvent(v11);
  v12 |= 2u;
  v11[0] = &off_3FCB1F0;
  v15 = 0;
  std::string::_M_mutate(v14, 0, *(v14->_M_dataplus._M_p - 3), 0);
  v12 |= 1u;
  v11[0] = off_3FCB4B0;
  v7 = strlen(pEventName);
  std::string::assign(v13, pEventName, v7);
  if ( v15 != 0 )
  {
    KeyValues::deleteThis(v15);
    v15 = 0;
  }
  if ( v6 != 0 )
  {
    v15 = v6;
    CUtlBuffer::CUtlBuffer(&buffer, 0, 0, 0);
    KeyValues::WriteAsBinary(v15, &buffer);
    v12 |= 2u;
    std::string::assign(v14, buffer.m_Memory.m_pMemory, buffer.m_Put);
    CUtlMemory<unsigned char,int>::Purge(&buffer.m_Memory);
  }
  else
  {
    v12 |= 2u;
    std::string::_M_mutate(v14, 0, *(v14->_M_dataplus._M_p - 3), 0);
  }
  v8 = IGameEventSystem::FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>(bool)::s_hEvent;
  v9 = g_pGameEventSystem;
  v10 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>(bool)::s_hEvent);
  v10(v9, 0, 1, &filter, v8, v11, 48);
  v11[0] = &off_3FCB1F0;
  if ( v15 != 0 )
  {
    KeyValues::deleteThis(v15);
    v15 = 0;
  }
  CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent(v11);
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CCustomGameEventManager::Script_Send_ServerToPlayer  (line 324, @0x0000000001f70a80, libserver.so)  // inlines: CBaseCmdKeyValues, CNetMessagePB, CUserMessagePB, CUserMsg_CustomGameEvent_t, FindGameEvent<CUserMsg_CustomGameEvent_t>, FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>, HScriptToEntity<CBasePlayer>, PostEvent<CUserMsg_CustomGameEvent_t>, SetKeyValues, assign, clear, length, mutable_data, set_event_name, set_has_data, set_has_event_name, size, ~CBaseCmdKeyValues, ~CNetMessagePB, ~CUserMessagePB, ~CUserMsg_CustomGameEvent_t, ~CUtlBuffer, ~CUtlMemory
// calls: GetScriptDesc<CEntityInstance>, ScriptTableToKeyValues, CRecipientFilter::CRecipientFilter, CRecipientFilter::MakeReliable, CRecipientFilter::RemoveAllRecipients, CRecipientFilter::AddRecipient, CUserMsg_CustomGameEvent::CUserMsg_CustomGameEvent, std::string::_M_mutate(ulong,ulong,ulong), strlen, std::string::assign(char const*,ulong), KeyValues::deleteThis, CUtlBuffer::CUtlBuffer (20 total)
// strings: "CCustomGameEventManager::ScriptSend_ServerToPlayer - Invalid player\n"
// globals: g_pScriptVM, IGameEventSystem::FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>(bool)::s_hEvent
void __fastcall CCustomGameEventManager::Script_Send_ServerToPlayer(
        CCustomGameEventManager *const this,
        HSCRIPT hPlayerEntity,
        const char *pEventName,
        HSCRIPT hEventData)
{
  __int64 (__fastcall *v7)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  const CEntityInstance *v9; // r12
  KeyValues *v10; // r14
  size_t v11; // rax
  __int64 v12; // r14
  IGameEventSystem *v13; // r13
  void (__fastcall *v14)(IGameEventSystem *, _QWORD, __int64, CRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v15[2]; // [rsp+10h] [rbp-1F0h] BYREF
  int v16; // [rsp+20h] [rbp-1E0h]
  std::string *v17; // [rsp+28h] [rbp-1D8h]
  std::string *v18; // [rsp+30h] [rbp-1D0h]
  KeyValues *v19; // [rsp+38h] [rbp-1C8h]
  CUtlBuffer buffer; // [rsp+40h] [rbp-1C0h] BYREF
  CRecipientFilter filter; // [rsp+90h] [rbp-170h] BYREF
  unsigned __int64 v22; // [rsp+1C8h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  if ( hPlayerEntity != 0
    && (v7 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v9 = v7(g_pScriptVM, hPlayerEntity, Script)) != 0) )
  {
    v10 = ScriptTableToKeyValues(g_pScriptVM, "", hEventData);
    CRecipientFilter::CRecipientFilter(&filter);
    CRecipientFilter::MakeReliable(&filter);
    CRecipientFilter::RemoveAllRecipients(&filter);
    CRecipientFilter::AddRecipient(&filter, v9);
    CUserMsg_CustomGameEvent::CUserMsg_CustomGameEvent(v15);
    v16 |= 2u;
    v15[0] = &off_3FCB1F0;
    v19 = 0;
    std::string::_M_mutate(v18, 0, *(v18->_M_dataplus._M_p - 3), 0);
    v16 |= 1u;
    v15[0] = off_3FCB4B0;
    v11 = strlen(pEventName);
    std::string::assign(v17, pEventName, v11);
    if ( v19 != 0 )
    {
      KeyValues::deleteThis(v19);
      v19 = 0;
    }
    if ( v10 != 0 )
    {
      v19 = v10;
      CUtlBuffer::CUtlBuffer(&buffer, 0, 0, 0);
      KeyValues::WriteAsBinary(v19, &buffer);
      v16 |= 2u;
      std::string::assign(v18, buffer.m_Memory.m_pMemory, buffer.m_Put);
      CUtlMemory<unsigned char,int>::Purge(&buffer.m_Memory);
    }
    else
    {
      v16 |= 2u;
      std::string::_M_mutate(v18, 0, *(v18->_M_dataplus._M_p - 3), 0);
    }
    v12 = IGameEventSystem::FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>(bool)::s_hEvent;
    v13 = g_pGameEventSystem;
    v14 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CUserMsg_CustomGameEvent_t>(bool)::s_hEvent);
    v14(v13, 0, 1, &filter, v12, v15, 48);
    v15[0] = &off_3FCB1F0;
    if ( v19 != 0 )
    {
      KeyValues::deleteThis(v19);
      v19 = 0;
    }
    CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent(v15);
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  else
  {
    Msg("CCustomGameEventManager::ScriptSend_ServerToPlayer - Invalid player\n", hPlayerEntity, pEventName, hEventData);
  }
}


