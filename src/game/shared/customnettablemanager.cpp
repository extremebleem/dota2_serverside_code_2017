
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CCustomNetTableManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 26, @0x0000000002425070, libserver.so)
void __cdecl CCustomNetTableManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CCustomNetTableManager::CCustomNetTableManager  (line 31, @0x0000000002425080, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: _GLOBAL__sub_I__unity_dota_01.cpp
void __fastcall CCustomNetTableManager::CCustomNetTableManager(CCustomNetTableManager *const this)
{
  this->_vptr_IGameSystem = off_40D52D0;
  this->m_Listeners.m_Size = 0;
  this->m_Listeners.m_Memory.m_pMemory = 0;
  this->m_Listeners.m_Memory.m_nAllocationCount = 0;
  this->m_Listeners.m_Memory.m_nGrowSize = 0;
}


// CCustomNetTableManager::~CCustomNetTableManager  (line 38, @0x00000000024205d0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<ICustomNetTableListener*, int>::Purge
void __fastcall CCustomNetTableManager::~CCustomNetTableManager(CCustomNetTableManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<ICustomNetTableListener*,CUtlMemory<ICustomNetTableListener*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40D52D0;
  this->m_Listeners.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Listeners.m_Memory;
    CUtlMemory<ICustomNetTableListener *,int>::Purge(&this->m_Listeners.m_Memory);
    if ( (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ICustomNetTableListener *,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CCustomNetTableManager::~CCustomNetTableManager  (line 38, @0x0000000002420630, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CCustomNetTableManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<ICustomNetTableListener*, int>::Purge
void __fastcall CCustomNetTableManager::~CCustomNetTableManager(CCustomNetTableManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<ICustomNetTableListener*,CUtlMemory<ICustomNetTableListener*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40D52D0;
  this->m_Listeners.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Listeners.m_Memory;
    CUtlMemory<ICustomNetTableListener *,int>::Purge(&this->m_Listeners.m_Memory);
    if ( (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ICustomNetTableListener *,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CCustomNetTableManager::GetCustomStringTableDefs  (line 45, @0x0000000002444be0, libserver.so)  // inlines: AddToTail, CUtlString, GrowMemory, V_strcat_safe<128ul>, operator[], ~CUtlString
// calls: KeyValues3::KeyValues3, LoadKV3FromFile, KeyValues3::FindMember, KeyValues3::GetType, Warning, CUtlString::FreeMemoryBlock, KeyValues3::~KeyValues3, CUtlString::Get, _V_strncat, KeyValues3::GetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::GetStringRaw (15 total)
// callers: CDOTAGameConfiguration::GetStringTableDefs
// strings: "scripts/custom_net_tables.txt", "custom_net_tables", "Bad format for 'custom_net_tables.txt': expected 'custom_net_tables' array of strings\n", "Failed to load 'custom_net_tables.txt': %s\n", "CustomNetTable_"
void __fastcall CCustomNetTableManager::GetCustomStringTableDefs(
        CUtlVector<StringTableDef_t,CUtlMemory<StringTableDef_t,int> > *const list)
{
  KeyValues3 *Member; // rax
  KeyValues3 *v3; // r15
  const char *v4; // rax
  int i; // r12d
  StringTableDef_t *v6; // rbx
  KeyValues3 *ArrayElement; // rax
  const char *StringRaw; // r14
  __int64 m_Size; // rbx
  int v10; // eax
  CUtlString err; // [rsp+20h] [rbp-60h] BYREF
  KeyValues3 data; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  if ( (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 10))(
         &g_pFullFileSystem->IBaseFileSystem,
         "scripts/custom_net_tables.txt",
         "GAME") != 0 )
  {
    KeyValues3::KeyValues3(&data);
    err.m_pString = 0;
    if ( LoadKV3FromFile(&data, &err, "scripts/custom_net_tables.txt", "GAME") )
    {
      Member = KeyValues3::FindMember(&data, "custom_net_tables", 0);
      v3 = Member;
      if ( Member != 0 && KeyValues3::GetType(Member) == KeyValues3Type_t::KEYVALUES3_TYPE_ARRAY )
      {
        for ( i = 0; i < KeyValues3::GetArrayElementCount(v3); ++i )
        {
          ArrayElement = KeyValues3::GetArrayElement(v3, i);
          StringRaw = KeyValues3::GetStringRaw(ArrayElement, 0);
          if ( StringRaw != 0 )
          {
            m_Size = list->m_Size;
            v10 = list->m_Size;
            if ( m_Size == list->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<StringTableDef_t,int>::Grow(&list->m_Memory, 1);
              v10 = list->m_Size;
            }
            list->m_Size = v10 + 1;
            v6 = &list->m_Memory.m_pMemory[m_Size];
            v6->m_pTableName[0] = 0;
            _V_strncat(v6, "CustomNetTable_", 128, 0xFFFFFFFFLL);
            _V_strncat(v6, StringRaw, 128, 0xFFFFFFFFLL);
            v6->m_ppStringTablePointer = 0;
            v6->m_pfnPostCreateOrHook = 0;
            v6->m_nUserDataFixedSize = 0;
            v6->m_nUserDataNetworkBits = 0;
            v6->m_nFlags = ENetworkStringtableFlags::NSF_COMPRESS_USERDATA_ON_WIRE;
            v6->m_pfnStringChanged = 0;
            v6->m_bAllowClientSideAddString = 0;
          }
        }
        if ( err.m_pString == 0 )
          goto LABEL_8;
        goto LABEL_7;
      }
      Warning("Bad format for 'custom_net_tables.txt': expected 'custom_net_tables' array of strings\n");
    }
    else
    {
      v4 = CUtlString::Get(&err);
      Warning("Failed to load 'custom_net_tables.txt': %s\n", v4);
    }
    if ( err.m_pString == 0 )
    {
LABEL_8:
      KeyValues3::~KeyValues3(&data);
      return;
    }
LABEL_7:
    CUtlString::FreeMemoryBlock(&err);
    goto LABEL_8;
  }
}


// CCustomNetTableManager::GameInit  (line 154, @0x0000000002445060, libserver.so)  // inlines: CVariantBase, Free, RegisterInstance<CCustomNetTableManager>, ~CVariantBase
// calls: GetScriptDesc<CCustomNetTableManager>, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "CustomNetTables"
void __fastcall CCustomNetTableManager::GameInit(CCustomNetTableManager *const this, const EventGameInit_t *const msg)
{
  IScriptVM *v3; // rbx
  __int64 (__fastcall *v4)(IScriptVM *, ScriptClassDesc_t *, CCustomNetTableManager *const); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-30h] BYREF
  __int16 v9; // [rsp+8h] [rbp-28h]
  __int16 v10; // [rsp+Ah] [rbp-26h]

  v3 = g_pScriptVM;
  v4 = *(*g_pScriptVM + 184LL);
  Script = GetScriptDesc<CCustomNetTableManager>(this);
  v6 = v4(v3, Script, this);
  v7 = *v3;
  v9 = 31;
  v10 = 0;
  v8 = v6;
  (*(v7 + 240))(v3, 0, "CustomNetTables", &v8);
  if ( (v10 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
}


// CCustomNetTableManager::GameShutdown  (line 162, @0x000000000241f300, libserver.so)
void __fastcall CCustomNetTableManager::GameShutdown(
        CCustomNetTableManager *const this,
        const EventGameShutdown_t *const msg)
{
  ;
}


// CCustomNetTableManager::GetTableValue  (line 169, @0x000000000242da60, libserver.so)  // inlines: V_strcat_safe<512ul>, ~CUtlBuffer, ~CUtlMemory
// calls: _V_strncat, CUtlBuffer::CUtlBuffer, KeyValues::ReadAsBinary, CUtlMemory<unsigned char, int>::Purge, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail, _Unwind_Resume
// strings: "CustomNetTable_", "scripts/custom_net_tables.txt", "Unknown custom nettable '%s' (must be defined in %s)\n"
// globals: LOG_CUSTOMNETTABLE
bool __fastcall CCustomNetTableManager::GetTableValue(
        CCustomNetTableManager *const this,
        const char *pCustomTableName,
        const char *pString,
        KeyValues *pOutValue)
{
  bool v6; // bl
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int v10; // eax
  const void *v11; // rax
  int nUserDataLen; // [rsp+Ch] [rbp-294h] BYREF
  CUtlBuffer buf; // [rsp+10h] [rbp-290h] BYREF
  char pActualTableName[520]; // [rsp+60h] [rbp-240h] BYREF
  unsigned __int64 v16; // [rsp+268h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  v6 = pCustomTableName == 0 || pOutValue == 0;
  if ( v6 || pString == 0 )
    return 0;
  memset(pActualTableName, 0, 0x200u);
  _V_strncat(pActualTableName, "CustomNetTable_", 512, 0xFFFFFFFFLL);
  _V_strncat(pActualTableName, pCustomTableName, 512, 0xFFFFFFFFLL);
  v8 = (*(g_pNetworkStringTable->_vptr_IAppSystem + 15))(g_pNetworkStringTable, pActualTableName);
  v9 = v8;
  if ( v8 == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOMNETTABLE, 2) != 0 )
    {
      LoggingSystem_Log(
        LOG_CUSTOMNETTABLE,
        2,
        "Unknown custom nettable '%s' (must be defined in %s)\n",
        pCustomTableName,
        "scripts/custom_net_tables.txt");
      return v6;
    }
    return 0;
  }
  v10 = (*(*v8 + 96LL))(v8, pString);
  if ( v10 == 0xFFFF )
    return 0;
  nUserDataLen = 0;
  v11 = (*(*v9 + 88LL))(v9, v10, &nUserDataLen);
  if ( nUserDataLen == 0 || v11 == 0 )
    return 0;
  CUtlBuffer::CUtlBuffer(&buf, v11, nUserDataLen, 8);
  v6 = KeyValues::ReadAsBinary(pOutValue, &buf);
  CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return v6;
}


// CCustomNetTableManager::GetTableValueCount  (line 201, @0x00000000024250b0, libserver.so)  // inlines: V_strcat_safe<512ul>
// calls: _V_strncat, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "CustomNetTable_", "scripts/custom_net_tables.txt", "Unknown custom nettable '%s' (must be defined in %s)\n"
// globals: LOG_CUSTOMNETTABLE
int __fastcall CCustomNetTableManager::GetTableValueCount(
        CCustomNetTableManager *const this,
        const char *pCustomTableName)
{
  __int64 v3; // rax
  char pActualTableName[520]; // [rsp+0h] [rbp-220h] BYREF
  unsigned __int64 v6; // [rsp+208h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  if ( pCustomTableName != 0 )
  {
    memset(pActualTableName, 0, 0x200u);
    _V_strncat(pActualTableName, "CustomNetTable_", 512, 0xFFFFFFFFLL);
    _V_strncat(pActualTableName, pCustomTableName, 512, 0xFFFFFFFFLL);
    v3 = (*(g_pNetworkStringTable->_vptr_IAppSystem + 15))(g_pNetworkStringTable, pActualTableName);
    if ( v3 != 0 )
      return (*(*v3 + 32LL))(v3);
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOMNETTABLE, 2) != 0 )
      LoggingSystem_Log(
        LOG_CUSTOMNETTABLE,
        2,
        "Unknown custom nettable '%s' (must be defined in %s)\n",
        pCustomTableName,
        "scripts/custom_net_tables.txt");
  }
  return 0;
}


// CCustomNetTableManager::GetTableValueByIndex  (line 223, @0x000000000242dc00, libserver.so)  // inlines: V_strcat_safe<512ul>, ~CUtlBuffer, ~CUtlMemory
// calls: _V_strncat, CUtlBuffer::CUtlBuffer, KeyValues::ReadAsBinary, CUtlString::operator=, CUtlMemory<unsigned char, int>::Purge, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail, _Unwind_Resume
// strings: "CustomNetTable_", "scripts/custom_net_tables.txt", "Unknown custom nettable '%s' (must be defined in %s)\n"
// globals: LOG_CUSTOMNETTABLE
bool __fastcall CCustomNetTableManager::GetTableValueByIndex(
        CCustomNetTableManager *const this,
        const char *pCustomTableName,
        int nIndex,
        CUtlString *pOutKey,
        KeyValues *pOutValue)
{
  bool v7; // bl
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r14
  const void *v14; // rax
  const char *v15; // rax
  int nUserDataLen; // [rsp+1Ch] [rbp-294h] BYREF
  CUtlBuffer buf; // [rsp+20h] [rbp-290h] BYREF
  char pActualTableName[520]; // [rsp+70h] [rbp-240h] BYREF
  unsigned __int64 v21; // [rsp+278h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  v7 = pOutKey == 0 || pCustomTableName == 0;
  if ( v7 || pOutValue == 0 )
    return 0;
  memset(pActualTableName, 0, 0x200u);
  _V_strncat(pActualTableName, "CustomNetTable_", 512, 0xFFFFFFFFLL);
  _V_strncat(pActualTableName, pCustomTableName, 512, 0xFFFFFFFFLL);
  v9 = (*(g_pNetworkStringTable->_vptr_IAppSystem + 15))(g_pNetworkStringTable, pActualTableName);
  v13 = v9;
  if ( v9 == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOMNETTABLE, 2) != 0 )
    {
      LoggingSystem_Log(
        LOG_CUSTOMNETTABLE,
        2,
        "Unknown custom nettable '%s' (must be defined in %s)\n",
        pCustomTableName,
        "scripts/custom_net_tables.txt");
      return v7;
    }
    return 0;
  }
  if ( nIndex < 0 || nIndex >= (*(*v9 + 32LL))(v9, v12, v10, v11, pOutValue) )
    return v7;
  nUserDataLen = 0;
  v14 = (*(*v13 + 88LL))(v13, nIndex, &nUserDataLen);
  if ( nUserDataLen == 0 || v14 == 0 )
    return 0;
  CUtlBuffer::CUtlBuffer(&buf, v14, nUserDataLen, 8);
  v7 = KeyValues::ReadAsBinary(pOutValue, &buf);
  if ( v7 )
  {
    v15 = (*(*v13 + 72LL))(v13, nIndex, 0);
    CUtlString::operator=(pOutKey, v15);
  }
  CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return v7;
}


// GetScriptDesc<CCustomNetTableManager>  (line 261, @0x0000000002444e50, libserver.so)  // inlines: AddParameterType, CUtlMemory, CUtlVector, CUtlVectorBase, Finalize, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CCustomNetTableManager*, CCustomNetTableManager, HSCRIPT__*, char const*, char const*>, ScriptDeduceFunctionSignature<CCustomNetTableManager*, CCustomNetTableManager, bool, char const*, char const*, HSCRIPT__*>, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >::AddToTail
// callers: CCustomNetTableManager::GameInit
// strings: "!Custom network table manager", "CCustomNetTableManager", "( string TableName, string KeyName, script_table Value )", "Script_SetTableValue", "( string TableName, string KeyName )", "Script_GetTableValue"
// globals: g_pCCustomNetTableManager_ScriptDesc, CMemberScriptBinding3<CCustomNetTableManager *,bool (CCustomNetTableManager::*)(char const*,char const*,HSCRIPT__ *),bool,char const*,char const*,HSCRIPT__ *>::, CCustomNetTableManager::Script_SetTableValue(char const*,char const*,HSCRIPT__ *), CMemberScriptBinding2<CCustomNetTableManager *,HSCRIPT__ * (CCustomNetTableManager::*)(char const*,char const*),HSCRIPT__ *,char const*,char const*>::Call(void , CCustomNetTableManager::Script_GetTableValue(char const*,char const*)
ScriptClassDesc_t *__fastcall GetScriptDesc<CCustomNetTableManager>(CCustomNetTableManager *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  __int64 v3; // rcx
  char v4; // dl
  char v5; // al
  int v6; // edx
  char v7; // si
  __int64 v8; // rsi
  char v9; // dl
  char v10; // al
  int v11; // edx
  char v12; // cl
  char v13; // al

  result = g_pCCustomNetTableManager_ScriptDesc;
  if ( g_pCCustomNetTableManager_ScriptDesc == 0 )
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
    g_pCCustomNetTableManager_ScriptDesc = v2;
    v2->m_pszDescription = "!Custom network table manager";
    v2->m_pszScriptName = "CCustomNetTableManager";
    v2->m_pszClassname = "CCustomNetTableManager";
    v3 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(&v2->m_FunctionBindings)];
    v4 = *(v3 + 26);
    *(v3 + 24) = 6;
    *(v3 + 16) = "( string TableName, string KeyName, script_table Value )";
    *v3 = "SetTableValue";
    *(v3 + 8) = "Script_SetTableValue";
    *(v3 + v4 + 27) = 30;
    *(v3 + (v4 + 1) + 27) = 30;
    v5 = v4 + 2;
    v4 += 3;
    *(v3 + v5 + 27) = 31;
    *(v3 + 26) = v4;
    v6 = v4 - 1;
    *(v3 + 25) = 0;
    if ( v6 >= 0 && *(v3 + v6 + 27) == 32 )
    {
      v7 = 0;
      do
      {
        --v6;
        ++v7;
      }
      while ( v6 != -1 && *(v3 + v6 + 27) == 32 );
      *(v3 + 25) = v7;
    }
    *(v3 + 64) = 1;
    *(v3 + 48) = CMemberScriptBinding3<CCustomNetTableManager *,bool (CCustomNetTableManager::*)(char const*,char const*,HSCRIPT__ *),bool,char const*,char const*,HSCRIPT__ *>::Call;
    *(v3 + 56) = CCustomNetTableManager::Script_SetTableValue;
    v8 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(&v2->m_FunctionBindings)];
    v9 = *(v8 + 26);
    *(v8 + 24) = 31;
    *(v8 + 16) = "( string TableName, string KeyName )";
    *v8 = "GetTableValue";
    *(v8 + 8) = "Script_GetTableValue";
    *(v8 + v9 + 27) = 30;
    v10 = v9 + 1;
    v9 += 2;
    *(v8 + v10 + 27) = 30;
    *(v8 + 26) = v9;
    v11 = v9 - 1;
    *(v8 + 25) = 0;
    if ( v11 >= 0 && *(v8 + v11 + 27) == 32 )
    {
      v12 = 1;
      do
      {
        --v11;
        v13 = v12;
        if ( v11 == -1 )
        {
          *(v8 + 25) = v12;
          goto LABEL_14;
        }
        ++v12;
      }
      while ( *(v8 + v11 + 27) == 32 );
      *(v8 + 25) = v13;
    }
LABEL_14:
    *(v8 + 64) = 1;
    *(v8 + 48) = CMemberScriptBinding2<CCustomNetTableManager *,HSCRIPT__ * (CCustomNetTableManager::*)(char const*,char const*),HSCRIPT__ *,char const*,char const*>::Call;
    *(v8 + 56) = CCustomNetTableManager::Script_GetTableValue;
    return v2;
  }
  return result;
}


// CCustomNetTableManager::Script_SetTableValue  (line 271, @0x0000000002433e00, libserver.so)  // inlines: V_strcat_safe<512ul>, ~CUtlBuffer, ~CUtlMemory
// calls: _V_strncat, ScriptTableToKeyValues, CUtlBuffer::CUtlBuffer, KeyValues::WriteAsBinary, KeyValues::~KeyValues, KeyValues::operator delete, CUtlMemory<unsigned char, int>::Purge, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail, _Unwind_Resume
// strings: "CustomNetTable_", "scripts/custom_net_tables.txt", "Unknown custom nettable '%s' (must be defined in %s)\n"
// globals: LOG_CUSTOMNETTABLE
bool __fastcall CCustomNetTableManager::Script_SetTableValue(
        CCustomNetTableManager *const this,
        const char *pCustomTableName,
        const char *pString,
        HSCRIPT hValue)
{
  char v6; // bl
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // r13d
  KeyValues *v12; // r12
  CUtlBuffer buf; // [rsp+0h] [rbp-290h] BYREF
  char pActualTableName[520]; // [rsp+50h] [rbp-240h] BYREF
  unsigned __int64 v15; // [rsp+258h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  v6 = pString == 0 || pCustomTableName == 0;
  if ( v6 != 0 )
    return 0;
  memset(pActualTableName, 0, 0x200u);
  _V_strncat(pActualTableName, "CustomNetTable_", 512, 0xFFFFFFFFLL);
  _V_strncat(pActualTableName, pCustomTableName, 512, 0xFFFFFFFFLL);
  v9 = (*(g_pNetworkStringTable->_vptr_IAppSystem + 15))(g_pNetworkStringTable, pActualTableName);
  v10 = v9;
  if ( v9 == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOMNETTABLE, 2) != 0 )
    {
      LoggingSystem_Log(
        LOG_CUSTOMNETTABLE,
        2,
        "Unknown custom nettable '%s' (must be defined in %s)\n",
        pCustomTableName,
        "scripts/custom_net_tables.txt");
      return v6;
    }
    return 0;
  }
  v11 = (*(*v9 + 64LL))(v9, 1, pString, 0xFFFFFFFFLL, 0);
  if ( v11 == 0xFFFF )
    return 0;
  if ( hValue != 0 )
  {
    v12 = ScriptTableToKeyValues(g_pScriptVM, "", hValue);
    if ( v12 != 0 )
    {
      CUtlBuffer::CUtlBuffer(&buf, 0, 0, 0);
      v6 = KeyValues::WriteAsBinary(v12, &buf);
      if ( v6 != 0 )
        (*(*v10 + 80LL))(v10, v11, buf.m_nMaxPut, buf.m_Memory.m_pMemory, 0);
      KeyValues::~KeyValues(v12);
      KeyValues::operator delete(v12);
      CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
    }
  }
  else
  {
    v6 = 1;
    (*(*v10 + 80LL))(v10, v11, 0, 0, 0);
  }
  return v6;
}


// CCustomNetTableManager::Script_GetTableValue  (line 322, @0x00000000024380e0, libserver.so)  // inlines: V_strcat_safe<512ul>, ~CUtlBuffer, ~CUtlMemory
// calls: _V_strncat, CUtlBuffer::CUtlBuffer, KeyValues::KeyValues, KeyValues::ReadAsBinary, ScriptTableFromKeyValues, KeyValues::~KeyValues, CUtlMemory<unsigned char, int>::Purge, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail, _Unwind_Resume
// strings: "CustomNetTable_", "scripts/custom_net_tables.txt", "Unknown custom nettable '%s' (must be defined in %s)\n"
// globals: LOG_CUSTOMNETTABLE
HSCRIPT __fastcall CCustomNetTableManager::Script_GetTableValue(
        CCustomNetTableManager *const this,
        const char *pCustomTableName,
        const char *pString)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // eax
  const void *v8; // rax
  HSCRIPT v9; // r13
  int nUserDataLen; // [rsp+Ch] [rbp-2A4h] BYREF
  CUtlBuffer buf; // [rsp+10h] [rbp-2A0h] BYREF
  KeyValues tempKV; // [rsp+60h] [rbp-250h] BYREF
  char pActualTableName[520]; // [rsp+80h] [rbp-230h] BYREF
  unsigned __int64 v15; // [rsp+288h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  if ( pCustomTableName == 0 || pString == 0 )
    return 0;
  memset(pActualTableName, 0, 0x200u);
  _V_strncat(pActualTableName, "CustomNetTable_", 512, 0xFFFFFFFFLL);
  _V_strncat(pActualTableName, pCustomTableName, 512, 0xFFFFFFFFLL);
  v5 = (*(g_pNetworkStringTable->_vptr_IAppSystem + 15))(g_pNetworkStringTable, pActualTableName);
  v6 = v5;
  if ( v5 == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_CUSTOMNETTABLE, 2) != 0 )
      LoggingSystem_Log(
        LOG_CUSTOMNETTABLE,
        2,
        "Unknown custom nettable '%s' (must be defined in %s)\n",
        pCustomTableName,
        "scripts/custom_net_tables.txt");
    return 0;
  }
  v7 = (*(*v5 + 96LL))(v5, pString);
  if ( v7 == 0xFFFF )
    return 0;
  nUserDataLen = 0;
  v8 = (*(*v6 + 88LL))(v6, v7, &nUserDataLen);
  if ( nUserDataLen == 0 || v8 == 0 )
    return 0;
  CUtlBuffer::CUtlBuffer(&buf, v8, nUserDataLen, 8);
  KeyValues::KeyValues(&tempKV, "");
  if ( KeyValues::ReadAsBinary(&tempKV, &buf) )
    v9 = ScriptTableFromKeyValues(g_pScriptVM, &tempKV, 0);
  else
    v9 = 0;
  KeyValues::~KeyValues(&tempKV);
  CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return v9;
}


