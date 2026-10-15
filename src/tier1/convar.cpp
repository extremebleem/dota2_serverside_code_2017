// Reconstructed from DWARF by pahole; not original source.

// src/tier1/convar.cpp:43
class CDefaultAccessor : public IConCommandBaseAccessor {
public:

	CDefaultAccessor(CDefaultAccessor &);
	CDefaultAccessor(const CDefaultAccessor &);
	CDefaultAccessor();
	virtual bool RegisterConCommandBase(ConCommandBase *);

	// vtable[0] RegisterConCommandBase
	// sizeof = 8
};

// src/tier1/convar.cpp:61
class CEmptyConVar : public ConVar {
public:

	CEmptyConVar(CEmptyConVar &);
	CEmptyConVar(const CEmptyConVar &);
	CEmptyConVar();
	virtual void SetValue(const char *);
	virtual void SetValue(float);
	virtual void SetValue(int);
	virtual const char * GetName();
	virtual bool IsFlagSet(int64);
	virtual ~CEmptyConVar();

	// vtable[16] SetValue
	// vtable[17] SetValue
	// vtable[18] SetValue
	// vtable[8] GetName
	// vtable[4] IsFlagSet
	// sizeof = 136
};

// src/tier1/convar.cpp:1485
struct PrintConVarFlags_t {
	int64 flag;  // +0x0
	const char * desc;  // +0x8

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_convar.cpp  (line 0, @0x0000000001a67030, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_convar_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CDefaultAccessor::RegisterConCommandBase  (line 46, @0x0000000002f71210, libserver.so)
bool __fastcall CDefaultAccessor::RegisterConCommandBase(CDefaultAccessor *const this, ConCommandBase *pVar)
{
  (*(*g_pCVar + 96LL))(g_pCVar, pVar);
  return 1;
}


// CEmptyConVar::~CEmptyConVar  (line 61, @0x0000000002f715e0, libserver.so)
// calls: ConVar::~ConVar
void __fastcall CEmptyConVar::~CEmptyConVar(CEmptyConVar *const this)
{
  this->_vptr_ConCommandBase = off_47BEB70;
  this->_vptr_IConVar = &off_47BEC70;
  ConVar::~ConVar(this);
}


// CEmptyConVar::~CEmptyConVar  (line 61, @0x0000000002f71600, libserver.so)  // inlines: ~CEmptyConVar
// calls: ConVar::~ConVar, operator delete
void __fastcall CEmptyConVar::~CEmptyConVar(CEmptyConVar *const this)
{
  this->_vptr_ConCommandBase = off_47BEB70;
  this->_vptr_IConVar = &off_47BEC70;
  ConVar::~ConVar(this);
  operator delete(this);
}


// CEmptyConVar::SetValue  (line 66, @0x0000000002f71230, libserver.so)
void __fastcall CEmptyConVar::SetValue(CEmptyConVar *const this, const char *pValue)
{
  ;
}


// CEmptyConVar::SetValue  (line 67, @0x0000000002f71250, libserver.so)
void __fastcall CEmptyConVar::SetValue(CEmptyConVar *const this, double a2, float flValue)
{
  ;
}


// CEmptyConVar::SetValue  (line 68, @0x0000000002f71270, libserver.so)
void __fastcall CEmptyConVar::SetValue(CEmptyConVar *const this, int nValue)
{
  ;
}


// CEmptyConVar::GetName  (line 69, @0x0000000002f71290, libserver.so)
const char *__fastcall CEmptyConVar::GetName(const CEmptyConVar *const this)
{
  return "";
}


// CEmptyConVar::IsFlagSet  (line 70, @0x0000000002f712b0, libserver.so)
bool __fastcall CEmptyConVar::IsFlagSet(const CEmptyConVar *const this, int64 nFlags)
{
  return 0;
}


// GetEmptyConVar  (line 73, @0x0000000002f707b0, libserver.so)  // inlines: CEmptyConVar
// calls: __cxa_guard_acquire, ConVar::ConVar, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: ConVar::~ConVar, ConVarRef::ConVarRef, ConVarRef::IsValid, ConVarRef::Init, SplitScreenConVarRef::SplitScreenConVarRef, SplitScreenConVarRef::IsValid, SplitScreenConVarRef::Init
// globals: `guard variable for'GetEmptyConVar(void)::s_EmptyConVar, GetEmptyConVar(void)::s_EmptyConVar, __dso_handle, CEmptyConVar::~CEmptyConVar()
ConVar *__cdecl GetEmptyConVar()
{
  if ( `guard variable for'GetEmptyConVar(void)::s_EmptyConVar != 0 )
    return &GetEmptyConVar(void)::s_EmptyConVar;
  if ( __cxa_guard_acquire(&`guard variable for'GetEmptyConVar(void)::s_EmptyConVar) != 0 )
  {
    ConVar::ConVar(&GetEmptyConVar(void)::s_EmptyConVar, "", "0", 0);
    GetEmptyConVar(void)::s_EmptyConVar._vptr_ConCommandBase = off_47BEB70;
    GetEmptyConVar(void)::s_EmptyConVar._vptr_IConVar = &off_47BEC70;
    __cxa_guard_release(&`guard variable for'GetEmptyConVar(void)::s_EmptyConVar);
    __cxa_atexit(CEmptyConVar::~CEmptyConVar, &GetEmptyConVar(void)::s_EmptyConVar, &_dso_handle);
  }
  return &GetEmptyConVar(void)::s_EmptyConVar;
}


// ConVar_Register  (line 83, @0x0000000002f6f170, libserver.so)
// callers: CTier1AppSystem<IGameConfiguration, 0>::Init, CTier2AppSystem<IGameConfiguration, 0>::Init, CGameConfiguration::Init, CTier1AppSystem<ISource2ServerSerializers, 0>::Init, CTier2AppSystem<ISource2ServerSerializers, 0>::Init, CSource2ServerSerializers::Init, CTier1AppSystem<ISource2Server, 0>::Init, CTier1AppSystem<ISource2GameEntities, 0>::Init, CTier1AppSystem<ISource2GameClients, 0>::Init, CTier2AppSystem<ISource2GameClients, 0>::Init, CTier2AppSystem<ISource2GameEntities, 0>::Init, CTier2AppSystem<ISource2Server, 0>::Init (15 total)
// globals: s_bRegistered, s_nCVarFlag, ConCommandBase::s_pConCommandBases, s_nDLLIdentifier, s_DefaultAccessor, ConCommandBase::s_pAccessor
void __fastcall ConVar_Register(int64 nCVarFlag, IConCommandBaseAccessor *pAccessor)
{
  __int64 v2; // rdx
  int v3; // eax
  ConCommandBase *v4; // rbx
  CDefaultAccessor *v5; // rax
  ConCommandBase *m_pNext; // r12

  if ( g_pCVar != 0 && !s_bRegistered )
  {
    v2 = *g_pCVar;
    s_nCVarFlag = nCVarFlag;
    s_bRegistered = 1;
    v3 = (*(v2 + 88))(g_pCVar);
    v4 = ConCommandBase::s_pConCommandBases;
    s_nDLLIdentifier = v3;
    v5 = &s_DefaultAccessor;
    if ( pAccessor != 0 )
      v5 = pAccessor;
    ConCommandBase::s_pAccessor = v5;
    if ( ConCommandBase::s_pConCommandBases != 0 )
    {
      while ( 1 )
      {
        m_pNext = v4->m_pNext;
        (*(v4->_vptr_ConCommandBase + 5))(v4, s_nCVarFlag);
        (*(v4->_vptr_ConCommandBase + 13))(v4);
        if ( m_pNext == 0 )
          break;
        v4 = m_pNext;
      }
    }
    (*(*g_pCVar + 272LL))(g_pCVar);
    (*(*g_pCVar + 344LL))(g_pCVar);
    ConCommandBase::s_pConCommandBases = 0;
  }
}


// ConVar_Unregister  (line 111, @0x0000000002f6f250, libserver.so)
// callers: CTier1AppSystem<IGameConfiguration, 0>::Shutdown, CTier2AppSystem<IGameConfiguration, 0>::Shutdown, CTier1AppSystem<ISource2ServerSerializers, 0>::Shutdown, CTier2AppSystem<ISource2ServerSerializers, 0>::Shutdown, CTier1AppSystem<ISource2GameEntities, 0>::Shutdown, CTier2AppSystem<ISource2GameEntities, 0>::Shutdown, CTier1AppSystem<ISource2Server, 0>::Shutdown, CTier2AppSystem<ISource2Server, 0>::Shutdown, CTier1AppSystem<ISource2GameClients, 0>::Shutdown, CTier2AppSystem<ISource2GameClients, 0>::Shutdown, CSource2Server::Disconnect, CTier1AppSystem<IApplication, 0>::Shutdown (13 total)
// globals: s_bRegistered, s_nDLLIdentifier
void __cdecl ConVar_Unregister()
{
  if ( g_pCVar != 0 && s_bRegistered )
  {
    (*(*g_pCVar + 280LL))(g_pCVar, s_nDLLIdentifier);
    (*(*g_pCVar + 112LL))(g_pCVar, s_nDLLIdentifier);
    s_bRegistered = 0;
    s_nDLLIdentifier = -1;
  }
}


// ConCommandBase::ConCommandBase  (line 129, @0x0000000002f6f2b0, libserver.so)
void __fastcall ConCommandBase::ConCommandBase(ConCommandBase *const this)
{
  this->_vptr_ConCommandBase = off_47BECD0;
  this->m_bRegistered = 0;
  this->m_pszName = 0;
  this->m_pszHelpString = 0;
  this->m_nFlags = 0;
  this->m_pNext = 0;
}


// ConCommandBase::ConCommandBase  (line 145, @0x0000000002f6f2f0, libserver.so)
// calls: ConCommandBase::Create
void __fastcall ConCommandBase::ConCommandBase(
        ConCommandBase *const this,
        const char *pName,
        const char *pHelpString,
        int64 flags)
{
  this->_vptr_ConCommandBase = off_47BECD0;
  ConCommandBase::Create(this, pName, pHelpString, flags);
}


// ConCommandBase::~ConCommandBase  (line 153, @0x0000000002f6e650, libserver.so)
void __fastcall ConCommandBase::~ConCommandBase(ConCommandBase *const this)
{
  this->_vptr_ConCommandBase = off_47BECD0;
}


// ConCommandBase::~ConCommandBase  (line 153, @0x0000000002f6ea70, libserver.so)  // inlines: ~ConCommandBase
// calls: operator delete
void __fastcall ConCommandBase::~ConCommandBase(ConCommandBase *const this)
{
  this->_vptr_ConCommandBase = off_47BECD0;
  operator delete(this);
}


// ConCommandBase::IsCommand  (line 161, @0x0000000002f6e660, libserver.so)
bool __fastcall ConCommandBase::IsCommand(const ConCommandBase *const this)
{
  return 1;
}


// ConCommandBase::IsBoundedVar  (line 167, @0x0000000002f6e670, libserver.so)
bool __fastcall ConCommandBase::IsBoundedVar(const ConCommandBase *const this)
{
  return 0;
}


// ConCommandBase::GetDLLIdentifier  (line 175, @0x0000000002f6e680, libserver.so)
// globals: s_nDLLIdentifier
CVarDLLIdentifier_t __fastcall ConCommandBase::GetDLLIdentifier(const ConCommandBase *const this)
{
  return s_nDLLIdentifier;
}


// ConCommandBase::Create  (line 188, @0x0000000002f6e690, libserver.so)
// callers: ConCommand::Create, ConCommandBase::ConCommandBase, ConCommand::ConCommand, ConVar::Create
// globals: ConCommandBase::s_pConCommandBases, ConCommandBase::s_pAccessor
void __fastcall ConCommandBase::Create(
        ConCommandBase *const this,
        const char *pName,
        const char *pHelpString,
        int64 flags)
{
  const char *v4; // rax
  int64 v5; // rcx
  ConCommandBase *v6; // rax
  bool v7; // zf

  v4 = "";
  if ( pHelpString != 0 )
    v4 = pHelpString;
  this->m_nFlags = flags;
  v5 = flags & 1;
  this->m_bRegistered = 0;
  this->m_pszName = pName;
  this->m_pszHelpString = v4;
  if ( v5 == 0 )
  {
    v6 = ConCommandBase::s_pConCommandBases;
    ConCommandBase::s_pConCommandBases = this;
    v7 = ConCommandBase::s_pAccessor == 0;
    this->m_pNext = v6;
    if ( v7 )
      return;
    goto LABEL_5;
  }
  v7 = ConCommandBase::s_pAccessor == 0;
  this->m_pNext = 0;
  if ( !v7 )
LABEL_5:
    (*(this->_vptr_ConCommandBase + 13))(this, pName, pHelpString, v5);
}


// ConCommandBase::Init  (line 228, @0x0000000002f6e700, libserver.so)
// globals: ConCommandBase::s_pAccessor
void __fastcall ConCommandBase::Init(ConCommandBase *const this)
{
  if ( ConCommandBase::s_pAccessor != 0 )
    (*ConCommandBase::s_pAccessor->_vptr_IConCommandBaseAccessor)(ConCommandBase::s_pAccessor, this);
}


// ConCommandBase::Shutdown  (line 236, @0x0000000002f6f310, libserver.so)
// callers: CConCommandMemberAccessor<CEntityDebugGameSystem>::~CConCommandMemberAccessor, CConCommandMemberAccessor<CDecalGameSystem>::~CConCommandMemberAccessor, CConCommandMemberAccessor<CSpawnGroupMgrGameSystem>::~CConCommandMemberAccessor, CConCommandMemberAccessor<CSoundOpGameSystem>::~CConCommandMemberAccessor, CDecalGameSystem::~CDecalGameSystem, CSoundOpGameSystem::~CSoundOpGameSystem, CEntityDebugGameSystem::~CEntityDebugGameSystem, CSpawnGroupMgrGameSystem::~CSpawnGroupMgrGameSystem, CConCommandMemberAccessor<CLoopModeGame>::~CConCommandMemberAccessor, CLoopModeGame::~CLoopModeGame
void __fastcall ConCommandBase::Shutdown(ConCommandBase *const this)
{
  if ( g_pCVar != 0 )
    (*(*g_pCVar + 104LL))(g_pCVar, this);
}


// ConCommandBase::GetName  (line 249, @0x0000000002f6e730, libserver.so)
const char *__fastcall ConCommandBase::GetName(const ConCommandBase *const this)
{
  return this->m_pszName;
}


// ConCommandBase::IsFlagSet  (line 260, @0x0000000002f6e740, libserver.so)
bool __fastcall ConCommandBase::IsFlagSet(const ConCommandBase *const this, int64 flag)
{
  return (flag & this->m_nFlags) != 0;
}


// ConCommandBase::AddFlags  (line 269, @0x0000000002f6e750, libserver.so)
void __fastcall ConCommandBase::AddFlags(ConCommandBase *const this, int64 flags)
{
  this->m_nFlags |= flags;
}


// ConCommandBase::RemoveFlags  (line 281, @0x0000000002f6e760, libserver.so)
void __fastcall ConCommandBase::RemoveFlags(ConCommandBase *const this, int64 flags)
{
  this->m_nFlags &= ~flags;
}


// ConCommandBase::GetFlags  (line 287, @0x0000000002f6e770, libserver.so)
int64 __fastcall ConCommandBase::GetFlags(const ConCommandBase *const this)
{
  return this->m_nFlags;
}


// ConCommandBase::GetNext  (line 296, @0x0000000002f6f340, libserver.so)
const ConCommandBase *__fastcall ConCommandBase::GetNext(const ConCommandBase *const this)
{
  return this->m_pNext;
}


// ConCommandBase::GetNext  (line 301, @0x0000000002f6f350, libserver.so)
ConCommandBase *__fastcall ConCommandBase::GetNext(ConCommandBase *const this)
{
  return this->m_pNext;
}


// ConCommandBase::CopyString  (line 312, @0x0000000002f6f360, libserver.so)  // inlines: V_strlen, V_strncpy<int>
// calls: strlen, operator new [], _V_strncpy
char *__fastcall ConCommandBase::CopyString(ConCommandBase *const this, const char *from)
{
  int v3; // eax
  unsigned int v4; // r13d
  char *v5; // r12
  char *result; // rax

  if ( from != 0 && (v3 = strlen(from)) > 0 )
  {
    v4 = v3 + 1;
    v5 = operator new[](v3 + 1);
    _V_strncpy(v5, from, v4);
    return v5;
  }
  else
  {
    result = operator new[](1u);
    *result = 0;
  }
  return result;
}


// ConCommandBase::GetHelpText  (line 335, @0x0000000002f6e780, libserver.so)
const char *__fastcall ConCommandBase::GetHelpText(const ConCommandBase *const this)
{
  return this->m_pszHelpString;
}


// ConCommandBase::IsRegistered  (line 344, @0x0000000002f6e790, libserver.so)
bool __fastcall ConCommandBase::IsRegistered(const ConCommandBase *const this)
{
  return this->m_bRegistered;
}


// CCommand::CCommand  (line 367, @0x0000000002f6f3d0, libserver.so)  // inlines: Reset
// calls: CharacterSetBuild
// callers: Script_Say, CEmoteMap::ParseAndRunChat, CGCClientJobDOTABroadcastNotificationServer::BYieldingRunJobFromMsg, CCommand::StripArg0
// strings: "{}()':"
// globals: s_bBuiltBreakSet, s_BreakSet
void __fastcall CCommand::CCommand(CCommand *const this)
{
  if ( !s_bBuiltBreakSet )
  {
    s_bBuiltBreakSet = 1;
    CharacterSetBuild(&s_BreakSet, "{}()':");
  }
  this->m_nArgc = 0;
  this->m_nArgv0Size = 0;
  this->m_pArgSBuffer[0] = 0;
}


// CCommand::CCommand  (line 378, @0x0000000002f6f420, libserver.so)  // inlines: Reset, V_strlen, memcpy, strchr
// calls: memcpy, strlen, strchr, CharacterSetBuild
// strings: "{}()':"
// globals: s_bBuiltBreakSet, s_BreakSet
void __fastcall CCommand::CCommand(CCommand *const this, int nArgC, const char **ppArgV)
{
  char *m_pArgvBuffer; // rbx
  __int64 v6; // r13
  _BYTE *v7; // r12
  char *v8; // rax
  const char *v9; // r15
  int v10; // eax
  size_t v11; // r12
  size_t v12; // rdx
  const char *v13; // r15
  int v14; // [rsp+4h] [rbp-5Ch]
  __int64 v15; // [rsp+8h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-48h]
  int v18; // [rsp+20h] [rbp-40h]
  char *pSBuf; // [rsp+28h] [rbp-38h]

  if ( !s_bBuiltBreakSet )
  {
    s_bBuiltBreakSet = 1;
    CharacterSetBuild(&s_BreakSet, "{}()':");
  }
  this->m_nArgv0Size = 0;
  this->m_pArgSBuffer[0] = 0;
  m_pArgvBuffer = this->m_pArgvBuffer;
  pSBuf = this->m_pArgSBuffer;
  this->m_nArgc = nArgC;
  if ( nArgC > 0 )
  {
    v6 = 0;
    v18 = nArgC - 1;
    v15 = (nArgC - 1) + 1LL;
    do
    {
      this->m_ppArgv[v6] = m_pArgvBuffer;
      v9 = ppArgV[v6];
      if ( v9 != 0 )
      {
        v10 = strlen(ppArgV[v6]);
        v11 = v10;
        v14 = v10;
        v12 = v10 + 1;
        v17 = v10 + 1LL;
      }
      else
      {
        v17 = 1;
        v11 = 0;
        v12 = 1;
        v14 = 0;
      }
      memcpy(m_pArgvBuffer, v9, v12);
      if ( v6 == 0 )
        this->m_nArgv0Size = v14;
      v13 = ppArgV[v6];
      m_pArgvBuffer += v17;
      if ( strchr(v13, 32) != 0 )
      {
        *pSBuf = 34;
        v7 = memcpy(pSBuf + 1, ppArgV[v6], v11) + v11;
        v8 = v7 + 1;
        *v7 = 34;
      }
      else
      {
        memcpy(pSBuf, v13, v11);
        v8 = &pSBuf[v11];
      }
      if ( v18 == v6 )
      {
        pSBuf = v8;
      }
      else
      {
        *v8 = 32;
        pSBuf = v8 + 1;
      }
      ++v6;
    }
    while ( v6 != v15 );
  }
}


// CCommand::CCommand  (line 423, @0x0000000002f70070, libserver.so)  // inlines: GetCommandString
// calls: CCommand::Tokenize
void __fastcall CCommand::CCommand(CCommand *const this, const CCommand *const src)
{
  char *m_pArgSBuffer; // rax

  m_pArgSBuffer = "";
  if ( src->m_nArgc != 0 )
    m_pArgSBuffer = src->m_pArgSBuffer;
  CCommand::Tokenize(this, m_pArgSBuffer, 0);
}


// CCommand::operator=  (line 428, @0x0000000002f700a0, libserver.so)  // inlines: GetCommandString
// calls: CCommand::Tokenize
CCommand *__fastcall CCommand::operator=(CCommand *const this, const CCommand *const src)
{
  char *m_pArgSBuffer; // rdx
  const char *v5; // rsi

  if ( src != this )
  {
    m_pArgSBuffer = src->m_pArgSBuffer;
    v5 = "";
    if ( src->m_nArgc != 0 )
      v5 = m_pArgSBuffer;
    CCommand::Tokenize(this, v5, 0);
  }
  return this;
}


// CCommand::StripArg0  (line 437, @0x0000000002f700e0, libserver.so)  // inlines: ArgS
// calls: CCommand::CCommand, CCommand::Tokenize
CCommand *__fastcall CCommand::StripArg0(CCommand *__return_ptr retstr, const CCommand *const this)
{
  __int64 m_nArgv0Size; // rdx
  const char *v5; // rsi

  CCommand::CCommand(retstr);
  m_nArgv0Size = this->m_nArgv0Size;
  v5 = "";
  if ( m_nArgv0Size != 0 )
    v5 = &this->m_pArgSBuffer[m_nArgv0Size];
  CCommand::Tokenize(retstr, v5, 0);
  return retstr;
}


// CCommand::Reset  (line 444, @0x0000000002f6f5d0, libserver.so)
void __fastcall CCommand::Reset(CCommand *const this)
{
  this->m_nArgc = 0;
  this->m_nArgv0Size = 0;
  this->m_pArgSBuffer[0] = 0;
}


// CCommand::DefaultBreakSet  (line 451, @0x0000000002f6f5f0, libserver.so)
// globals: s_BreakSet
characterset_t *__cdecl CCommand::DefaultBreakSet()
{
  return &s_BreakSet;
}


// CCommand::Tokenize  (line 456, @0x0000000002f6fe40, libserver.so)  // inlines: Reset, V_strlen, memcpy, ~CUtlBuffer, ~CUtlMemory
// calls: strlen, memcpy, CUtlBuffer::CUtlBuffer, CUtlBuffer::ParseToken, CUtlMemory<unsigned char, int>::Purge, Warning, _Unwind_Resume
// callers: Script_Say, CEmoteMap::ParseAndRunChat, CGCClientJobDOTABroadcastNotificationServer::BYieldingRunJobFromMsg, CCommand::CCommand, CCommand::operator=, CCommand::StripArg0
// strings: "CCommand::Tokenize: Encountered command which overflows the tokenizer buffer.. Skipping!\, "CCommand::Tokenize: Encountered command which overflows the argument buffer.. Clamped!\n"
// globals: s_BreakSet
bool __fastcall CCommand::Tokenize(CCommand *const this, const char *pCommand, characterset_t *pBreakSet)
{
  characterset_t *v5; // rax
  int v6; // eax
  int v7; // r13d
  void *v8; // rax
  int v9; // r13d
  char *v10; // r15
  int v11; // r12d
  __int64 m_nArgc; // rax
  char v13; // al
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  characterset_t *pBreakSeta; // [rsp+8h] [rbp-98h]
  int m_Get; // [rsp+1Ch] [rbp-84h]
  bool v21; // [rsp+1Ch] [rbp-84h]
  CUtlBuffer bufParse; // [rsp+20h] [rbp-80h] BYREF

  this->m_nArgc = 0;
  this->m_nArgv0Size = 0;
  this->m_pArgSBuffer[0] = 0;
  if ( pCommand == 0 || *pCommand == 0 )
    return 0;
  v5 = &s_BreakSet;
  if ( pBreakSet != 0 )
    v5 = pBreakSet;
  pBreakSeta = v5;
  v6 = strlen(pCommand);
  v7 = v6;
  if ( v6 > 510 )
  {
    Warning("CCommand::Tokenize: Encountered command which overflows the tokenizer buffer.. Skipping!\n");
    return 0;
  }
  else
  {
    v8 = memcpy(this->m_pArgSBuffer, pCommand, v6 + 1);
    CUtlBuffer::CUtlBuffer(&bufParse, v8, v7, 9);
    if ( bufParse.m_Error == 0 && this->m_nArgc <= 63 )
    {
      v9 = 0;
      do
      {
        v10 = &this->m_pArgvBuffer[v9];
        m_Get = bufParse.m_Get;
        v11 = CUtlBuffer::ParseToken(&bufParse, pBreakSeta, v10, 512 - v9, 1);
        if ( v11 < 0 )
          break;
        if ( 512 - v9 == v11 )
        {
          this->m_nArgc = 0;
          v13 = 0;
          this->m_nArgv0Size = 0;
          this->m_pArgSBuffer[0] = 0;
          goto LABEL_17;
        }
        m_nArgc = this->m_nArgc;
        if ( m_nArgc == 1 )
        {
          v15 = bufParse.m_Get;
          v16 = bufParse.m_Get - 1;
          this->m_nArgv0Size = bufParse.m_Get;
          if ( this->m_pArgSBuffer[v16] == 34 )
            v15 = v16;
          v17 = v15 - v11;
          this->m_nArgv0Size = v17;
          if ( m_Get < v17 )
          {
            v18 = v17 - 1;
            if ( this->m_pArgSBuffer[v18] == 34 )
              this->m_nArgv0Size = v18;
          }
          this->m_nArgc = 2;
          this->m_ppArgv[1] = v10;
        }
        else
        {
          this->m_nArgc = m_nArgc + 1;
          this->m_ppArgv[m_nArgc] = v10;
          if ( m_nArgc + 1 > 63 )
            Warning("CCommand::Tokenize: Encountered command which overflows the argument buffer.. Clamped!\n");
        }
        v9 += v11 + 1;
      }
      while ( bufParse.m_Error == 0 && this->m_nArgc <= 63 );
    }
    v13 = 1;
LABEL_17:
    v21 = v13;
    CUtlMemory<unsigned char,int>::Purge(&bufParse.m_Memory);
    return v21;
  }
}


// CCommand::FindArg  (line 540, @0x0000000002f6f600, libserver.so)  // inlines: Arg
// calls: V_stricmp_fast
// callers: CCommand::FindArgInt
const char *__fastcall CCommand::FindArg(const CCommand *const this, const char *pName)
{
  const CCommand *v4; // r12
  int v5; // ebx
  int m_nArgc; // r14d
  const char *v7; // rdi
  const char *result; // rax

  v4 = this;
  v5 = 1;
  m_nArgc = this->m_nArgc;
  if ( this->m_nArgc <= 1 )
    return 0;
  while ( 1 )
  {
    v7 = "";
    if ( this->m_nArgc > v5 )
      v7 = v4->m_ppArgv[1];
    ++v5;
    if ( V_stricmp_fast(v7, pName) == 0 )
      break;
    v4 = (v4 + 8);
    if ( v5 == m_nArgc )
      return 0;
  }
  result = "";
  if ( m_nArgc > v5 && v5 < this->m_nArgc )
    return this->m_ppArgv[v5];
  return result;
}


// CCommand::FindArgInt  (line 551, @0x0000000002f6f6b0, libserver.so)
// calls: CCommand::FindArg, V_atoi
int __fastcall CCommand::FindArgInt(const CCommand *const this, const char *pName, int nDefaultVal)
{
  const char *Arg; // rax

  Arg = CCommand::FindArg(this, pName);
  if ( Arg != 0 )
    return V_atoi(Arg);
  else
    return nDefaultVal;
}


// DefaultCompletionFunc  (line 564, @0x0000000002f6e7a0, libserver.so)
void __fastcall DefaultCompletionFunc(
        const char *partial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  ;
}


// ConCommand::ConCommand  (line 577, @0x0000000002f70390, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, ConCommandBase, CopyConstruct<ConCommand::CallbackInfo_t>, Create, GrowMemory, ~CUtlVector, ~ConCommandBase
// calls: CUtlMemory<ConCommand::CallbackInfo_t, int>::Grow, ConCommandBase::Create, CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp, __static_initialization_and_destruction_0, _GLOBAL__sub_I__unity_source_files_02.cpp, _GLOBAL__sub_I__unity_base_01.cpp, _GLOBAL__sub_I__unity_base_02.cpp, _GLOBAL__sub_I__unity_base_03.cpp, _GLOBAL__sub_I__unity_base_04.cpp, _GLOBAL__sub_I__unity_base_05.cpp, _GLOBAL__sub_I__unity_base_06.cpp, _GLOBAL__sub_I__unity_base_07.cpp, _GLOBAL__sub_I__unity_base_08.cpp, _GLOBAL__sub_I__unity_base_10.cpp (31 total)
// globals: DefaultCompletionFunc(char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> &)
void __fastcall ConCommand::ConCommand(
        ConCommand *const this,
        const char *pName,
        FnCommandCallback_t callback,
        const char *pHelpString,
        int64 flags,
        FnCommandCompletionCallback completionFunc)
{
  void (*v11)(const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *); // rax
  char v12; // al
  ConCommand::CallbackInfo_t *m_pMemory; // rax

  this->_vptr_ConCommandBase = off_47BED50;
  v11 = DefaultCompletionFunc;
  this->m_bRegistered = 0;
  if ( completionFunc != 0 )
    v11 = completionFunc;
  this->m_pszName = 0;
  this->m_pszHelpString = 0;
  this->m_fnCompletionCallback = v11;
  v12 = *(this + 56);
  this->m_nFlags = 0;
  this->m_pNext = 0;
  this->m_Callbacks.m_Size = 0;
  this->m_Callbacks.m_Memory.m_pMemory = 0;
  this->m_Callbacks.m_Memory.m_nAllocationCount = 0;
  this->m_Callbacks.m_Memory.m_nGrowSize = 0;
  *(this + 56) = (completionFunc != 0) | v12 & 0xFC;
  if ( callback != 0 )
  {
    CUtlMemory<ConCommand::CallbackInfo_t,int>::Grow(&this->m_Callbacks.m_Memory, 1);
    m_pMemory = this->m_Callbacks.m_Memory.m_pMemory;
    ++this->m_Callbacks.m_Size;
    if ( m_pMemory != 0 )
    {
      *(m_pMemory + 8) &= 0xF8u;
      m_pMemory->m_fnCommandCallback = callback;
    }
  }
  this->m_pParent = this;
  ConCommandBase::Create(this, pName, pHelpString, flags);
}


// ConCommand::ConCommand  (line 598, @0x0000000002f70190, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, ConCommandBase, CopyConstruct<ConCommand::CallbackInfo_t>, Create, GrowMemory, ~CUtlVector, ~ConCommandBase
// calls: CUtlMemory<ConCommand::CallbackInfo_t, int>::Grow, ConCommandBase::Create, CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp, _GLOBAL__sub_I__unity_dota_03.cpp, _GLOBAL__sub_I__unity_dota_05.cpp, _GLOBAL__sub_I__unity_dota_06.cpp
// globals: DefaultCompletionFunc(char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> &)
void __fastcall ConCommand::ConCommand(
        ConCommand *const this,
        const char *pName,
        FnCommandCallbackVoid_t callback,
        const char *pHelpString,
        int64 flags,
        FnCommandCompletionCallback completionFunc)
{
  void (*v11)(const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *); // rax
  char v12; // al
  ConCommand::CallbackInfo_t *m_pMemory; // rdx
  char v14; // al

  this->_vptr_ConCommandBase = off_47BED50;
  v11 = DefaultCompletionFunc;
  this->m_bRegistered = 0;
  if ( completionFunc != 0 )
    v11 = completionFunc;
  this->m_pszName = 0;
  this->m_pszHelpString = 0;
  this->m_fnCompletionCallback = v11;
  v12 = *(this + 56);
  this->m_nFlags = 0;
  this->m_pNext = 0;
  this->m_Callbacks.m_Size = 0;
  this->m_Callbacks.m_Memory.m_pMemory = 0;
  this->m_Callbacks.m_Memory.m_nAllocationCount = 0;
  this->m_Callbacks.m_Memory.m_nGrowSize = 0;
  *(this + 56) = (completionFunc != 0) | v12 & 0xFC;
  if ( callback != 0 )
  {
    CUtlMemory<ConCommand::CallbackInfo_t,int>::Grow(&this->m_Callbacks.m_Memory, 1);
    m_pMemory = this->m_Callbacks.m_Memory.m_pMemory;
    ++this->m_Callbacks.m_Size;
    if ( m_pMemory != 0 )
    {
      v14 = *(m_pMemory + 8);
      m_pMemory->m_fnCommandCallback = callback;
      *(m_pMemory + 8) = v14 & 0xF8 | 2;
    }
  }
  this->m_pParent = this;
  ConCommandBase::Create(this, pName, pHelpString, flags);
}


// ConCommand::ConCommand  (line 620, @0x0000000002f70490, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, ConCommandBase, CopyConstruct<ConCommand::CallbackInfo_t>, Create, GrowMemory, ~CUtlVector, ~ConCommandBase
// calls: CUtlMemory<ConCommand::CallbackInfo_t, int>::Grow, ConCommandBase::Create, CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: DefaultCompletionFunc(char const*,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> &)
void __fastcall ConCommand::ConCommand(
        ConCommand *const this,
        const char *pName,
        FnCommandCallbackNoContext_t callback,
        const char *pHelpString,
        int64 flags,
        FnCommandCompletionCallback completionFunc)
{
  void (*v11)(const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *); // rax
  char v12; // al
  ConCommand::CallbackInfo_t *m_pMemory; // rdx
  char v14; // al

  this->_vptr_ConCommandBase = off_47BED50;
  v11 = DefaultCompletionFunc;
  this->m_bRegistered = 0;
  if ( completionFunc != 0 )
    v11 = completionFunc;
  this->m_pszName = 0;
  this->m_pszHelpString = 0;
  this->m_fnCompletionCallback = v11;
  v12 = *(this + 56);
  this->m_nFlags = 0;
  this->m_pNext = 0;
  this->m_Callbacks.m_Size = 0;
  this->m_Callbacks.m_Memory.m_pMemory = 0;
  this->m_Callbacks.m_Memory.m_nAllocationCount = 0;
  this->m_Callbacks.m_Memory.m_nGrowSize = 0;
  *(this + 56) = (completionFunc != 0) | v12 & 0xFC;
  if ( callback != 0 )
  {
    CUtlMemory<ConCommand::CallbackInfo_t,int>::Grow(&this->m_Callbacks.m_Memory, 1);
    m_pMemory = this->m_Callbacks.m_Memory.m_pMemory;
    ++this->m_Callbacks.m_Size;
    if ( m_pMemory != 0 )
    {
      v14 = *(m_pMemory + 8);
      m_pMemory->m_fnCommandCallback = callback;
      *(m_pMemory + 8) = v14 & 0xF8 | 4;
    }
  }
  this->m_pParent = this;
  ConCommandBase::Create(this, pName, pHelpString, flags);
}


// ConCommand::ConCommand  (line 642, @0x0000000002f70290, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, ConCommandBase, CopyConstruct<ConCommand::CallbackInfo_t>, Create, GrowMemory, ~CUtlVector, ~ConCommandBase
// calls: CUtlMemory<ConCommand::CallbackInfo_t, int>::Grow, ConCommandBase::Create, CUtlVectorBase<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CSoundOpGameSystem::CSoundOpGameSystem, CEntityDebugGameSystem::CEntityDebugGameSystem, CSpawnGroupMgrGameSystem::CSpawnGroupMgrGameSystem, CScriptConvarAccessor::RegisterCommand, CDecalGameSystem::CDecalGameSystem, CLoopModeGame::CLoopModeGame, _GLOBAL__sub_I__unity_base_01.cpp
void __fastcall ConCommand::ConCommand(
        ConCommand *const this,
        const char *pName,
        ICommandCallback *pCallback,
        const char *pHelpString,
        int64 flags,
        ICommandCompletionCallback *pCompletionCallback)
{
  char v11; // al
  ConCommand::CallbackInfo_t *m_pMemory; // rdx
  char v13; // al

  this->_vptr_ConCommandBase = off_47BED50;
  v11 = *(this + 56);
  this->m_bRegistered = 0;
  this->m_pszName = 0;
  this->m_pszHelpString = 0;
  this->m_nFlags = 0;
  this->m_pNext = 0;
  this->m_Callbacks.m_Size = 0;
  this->m_fnCompletionCallback = pCompletionCallback;
  this->m_Callbacks.m_Memory.m_pMemory = 0;
  this->m_Callbacks.m_Memory.m_nAllocationCount = 0;
  this->m_Callbacks.m_Memory.m_nGrowSize = 0;
  *(this + 56) = (pCompletionCallback != 0) | v11 & 0xFE | 2;
  if ( pCallback != 0 )
  {
    CUtlMemory<ConCommand::CallbackInfo_t,int>::Grow(&this->m_Callbacks.m_Memory, 1);
    m_pMemory = this->m_Callbacks.m_Memory.m_pMemory;
    ++this->m_Callbacks.m_Size;
    if ( m_pMemory != 0 )
    {
      v13 = *(m_pMemory + 8);
      m_pMemory->m_fnCommandCallback = pCallback;
      *(m_pMemory + 8) = v13 & 0xF8 | 1;
    }
  }
  this->m_pParent = this;
  ConCommandBase::Create(this, pName, pHelpString, flags);
}


// ConCommand::Create  (line 662, @0x0000000002f6e7b0, libserver.so)
// calls: ConCommandBase::Create
void __fastcall ConCommand::Create(ConCommand *const this, const char *pName, const char *pHelpString, int64 flags)
{
  this->m_pParent = this;
  ConCommandBase::Create(this, pName, pHelpString, flags);
}


// ConCommand::~ConCommand  (line 670, @0x0000000002f6f0a0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~ConCommandBase
// calls: CUtlMemory<ConCommand::CallbackInfo_t, int>::Purge
// callers: CConCommandMemberAccessor<CEntityDebugGameSystem>::~CConCommandMemberAccessor, CConCommandMemberAccessor<CDecalGameSystem>::~CConCommandMemberAccessor, CConCommandMemberAccessor<CSpawnGroupMgrGameSystem>::~CConCommandMemberAccessor, CConCommandMemberAccessor<CSoundOpGameSystem>::~CConCommandMemberAccessor, CDecalGameSystem::~CDecalGameSystem, CSoundOpGameSystem::~CSoundOpGameSystem, CEntityDebugGameSystem::~CEntityDebugGameSystem, CSpawnGroupMgrGameSystem::~CSpawnGroupMgrGameSystem, CConCommandMemberAccessor<CLoopModeGame>::~CConCommandMemberAccessor, CLoopModeGame::~CLoopModeGame
void __fastcall ConCommand::~ConCommand(ConCommand *const this)
{
  bool v2; // zf
  CUtlVectorBase<ConCommand::CallbackInfo_t,CUtlMemory<ConCommand::CallbackInfo_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Callbacks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_ConCommandBase = off_47BED50;
  this->m_Callbacks.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_Callbacks.m_Memory,
        CUtlMemory<ConCommand::CallbackInfo_t,int>::Purge(&this->m_Callbacks.m_Memory),
        (this->m_Callbacks.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_ConCommandBase = off_47BECD0;
  }
  else
  {
    CUtlMemory<ConCommand::CallbackInfo_t,int>::Purge(p_m_Memory);
    this->_vptr_ConCommandBase = off_47BECD0;
  }
}


// ConCommand::~ConCommand  (line 670, @0x0000000002f6f110, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~ConCommand, ~ConCommandBase
// calls: operator delete, CUtlMemory<ConCommand::CallbackInfo_t, int>::Purge
void __fastcall ConCommand::~ConCommand(ConCommand *const this)
{
  bool v2; // zf
  CUtlVectorBase<ConCommand::CallbackInfo_t,CUtlMemory<ConCommand::CallbackInfo_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Callbacks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_ConCommandBase = off_47BED50;
  this->m_Callbacks.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Callbacks.m_Memory;
    CUtlMemory<ConCommand::CallbackInfo_t,int>::Purge(&this->m_Callbacks.m_Memory);
    if ( (this->m_Callbacks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ConCommand::CallbackInfo_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_ConCommandBase = off_47BECD0;
  operator delete(this);
}


// ConCommand::IsCommand  (line 685, @0x0000000002f6e7c0, libserver.so)
bool __fastcall ConCommand::IsCommand(const ConCommand *const this)
{
  return 1;
}


// ConCommand::Dispatch  (line 694, @0x0000000002f6efe0, libserver.so)  // inlines: operator[]
void __fastcall ConCommand::Dispatch(
        ConCommand *const this,
        const CCommandContext *const ctx,
        const CCommand *const command)
{
  __int64 v5; // r12
  int v6; // ebx
  ConCommand *m_pParent; // r15
  ConCommand::CallbackInfo_t *v8; // rax
  char v9; // dl
  void (*m_fnCommandCallback)(void); // rax

  v5 = 0;
  v6 = 0;
  m_pParent = this->m_pParent;
  if ( m_pParent->m_Callbacks.m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        v8 = &m_pParent->m_Callbacks.m_Memory.m_pMemory[v5];
        v9 = *(v8 + 8);
        if ( (v9 & 1) != 0 )
        {
          if ( v8->m_fnCommandCallback != 0 )
            (**v8->m_fnCommandCallback)(v8->m_fnCommandCallback, ctx, command);
          goto LABEL_5;
        }
        m_fnCommandCallback = v8->m_fnCommandCallback;
        if ( m_fnCommandCallback != 0 )
          break;
LABEL_5:
        ++v6;
        ++v5;
        if ( m_pParent->m_Callbacks.m_Size <= v6 )
          return;
      }
      if ( (v9 & 2) != 0 )
      {
        m_fnCommandCallback();
        goto LABEL_5;
      }
      if ( (v9 & 4) == 0 )
      {
        (m_fnCommandCallback)(ctx, command);
        goto LABEL_5;
      }
      ++v6;
      ++v5;
      (m_fnCommandCallback)(command);
    }
    while ( m_pParent->m_Callbacks.m_Size > v6 );
  }
}


// ConCommand::AutoCompleteSuggest  (line 746, @0x0000000002f6e7d0, libserver.so)
int __fastcall ConCommand::AutoCompleteSuggest(
        ConCommand *const this,
        const char *partial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  ConCommand *m_pParent; // rax
  int (__fastcall ***m_fnCompletionCallback)(_QWORD, const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const, const char *); // rdi
  int result; // eax
  void (__fastcall *v6)(const char *, CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const); // r8

  m_pParent = this->m_pParent;
  if ( (*(m_pParent + 56) & 2) != 0 )
  {
    m_fnCompletionCallback = m_pParent->m_fnCompletionCallback;
    if ( m_fnCompletionCallback != 0 )
      return (**m_fnCompletionCallback)(m_fnCompletionCallback, partial, commands, partial);
    else
      return 0;
  }
  else
  {
    v6 = m_pParent->m_fnCompletionCallback;
    result = 0;
    if ( v6 != 0 )
    {
      v6(partial, commands);
      return commands->m_Size;
    }
  }
  return result;
}


// ConCommand::CanAutoComplete  (line 766, @0x0000000002f6e830, libserver.so)
bool __fastcall ConCommand::CanAutoComplete(ConCommand *const this)
{
  return *(this->m_pParent + 56) & 1;
}


// ConVar::ConVar  (line 782, @0x0000000002f706f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ConCommandBase, ~CUtlVector, ~ConCommandBase
// calls: ConVar::Create, CUtlVectorBase<void (*)(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >::~CUtlVectorBase, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp, __static_initialization_and_destruction_0, _GLOBAL__sub_I__unity_source_files_02.cpp, _GLOBAL__sub_I__unity_base_01.cpp, _GLOBAL__sub_I__unity_base_02.cpp, _GLOBAL__sub_I__unity_base_03.cpp, _GLOBAL__sub_I__unity_base_04.cpp, _GLOBAL__sub_I__unity_base_05.cpp, _GLOBAL__sub_I__unity_base_06.cpp, _GLOBAL__sub_I__unity_base_07.cpp, _GLOBAL__sub_I__unity_base_08.cpp, _GLOBAL__sub_I__unity_base_09.cpp (42 total)
void __fastcall ConVar::ConVar(ConVar *const this, const char *pName, const char *pDefaultValue, int64 flags)
{
  this->_vptr_ConCommandBase = off_47BEDF0;
  this->m_bRegistered = 0;
  this->m_pszName = 0;
  this->m_pszHelpString = 0;
  this->m_nFlags = 0;
  this->m_pNext = 0;
  this->_vptr_IConVar = &off_47BEEF0;
  this->m_fnChangeCallbacks.m_Size = 0;
  this->m_fnChangeCallbacks.m_Memory.m_pMemory = 0;
  this->m_fnChangeCallbacks.m_Memory.m_nAllocationCount = 0;
  this->m_fnChangeCallbacks.m_Memory.m_nGrowSize = 0;
  ConVar::Create(this, pName, pDefaultValue, flags, 0, 0, 0.0, 0.0, 0, 0);
}


// ConVar::ConVar  (line 787, @0x0000000002f70e60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ConCommandBase, ~CUtlVector, ~ConCommandBase
// calls: ConVar::Create, CUtlVectorBase<void (*)(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >::~CUtlVectorBase, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_achievements_01.cpp, _GLOBAL__sub_I__unity_components_01.cpp, _GLOBAL__sub_I__unity_entities_01.cpp, __static_initialization_and_destruction_0, CScriptConvarAccessor::RegisterConvar, _GLOBAL__sub_I__unity_porting_crap_01.cpp, _GLOBAL__sub_I__unity_source_1_entities_01.cpp, _GLOBAL__sub_I__unity_source_files_02.cpp, _GLOBAL__sub_I__unity_base_01.cpp, _GLOBAL__sub_I__unity_base_02.cpp, _GLOBAL__sub_I__unity_base_04.cpp, _GLOBAL__sub_I__unity_base_05.cpp (40 total)
void __fastcall ConVar::ConVar(
        ConVar *const this,
        const char *pName,
        const char *pDefaultValue,
        int64 flags,
        const char *pHelpString)
{
  this->_vptr_ConCommandBase = off_47BEDF0;
  this->m_bRegistered = 0;
  this->m_pszName = 0;
  this->m_pszHelpString = 0;
  this->m_nFlags = 0;
  this->m_pNext = 0;
  this->_vptr_IConVar = &off_47BEEF0;
  this->m_fnChangeCallbacks.m_Size = 0;
  this->m_fnChangeCallbacks.m_Memory.m_pMemory = 0;
  this->m_fnChangeCallbacks.m_Memory.m_nAllocationCount = 0;
  this->m_fnChangeCallbacks.m_Memory.m_nGrowSize = 0;
  ConVar::Create(this, pName, pDefaultValue, flags, pHelpString, 0, 0.0, 0.0, 0, 0);
}


// ConVar::ConVar  (line 792, @0x0000000002f70f10, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ConCommandBase, ~CUtlVector, ~ConCommandBase
// calls: ConVar::Create, CUtlVectorBase<void (*)(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >::~CUtlVectorBase, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp, _GLOBAL__sub_I__unity_base_06.cpp, _GLOBAL__sub_I__unity_base_07.cpp, _GLOBAL__sub_I__unity_base_08.cpp, _GLOBAL__sub_I__unity_base_09.cpp, _GLOBAL__sub_I__unity_dota_03.cpp
void __fastcall ConVar::ConVar(
        ConVar *const this,
        const char *pName,
        const char *pDefaultValue,
        int64 flags,
        const char *pHelpString,
        bool bMin,
        float fMin,
        float fMax,
        bool bMax)
{
  this->_vptr_ConCommandBase = off_47BEDF0;
  this->m_bRegistered = 0;
  this->_vptr_IConVar = &off_47BEEF0;
  this->m_pszName = 0;
  this->m_pszHelpString = 0;
  this->m_nFlags = 0;
  this->m_pNext = 0;
  this->m_fnChangeCallbacks.m_Size = 0;
  this->m_fnChangeCallbacks.m_Memory.m_pMemory = 0;
  this->m_fnChangeCallbacks.m_Memory.m_nAllocationCount = 0;
  this->m_fnChangeCallbacks.m_Memory.m_nGrowSize = 0;
  ConVar::Create(this, pName, pDefaultValue, flags, pHelpString, bMin, fMin, fMax, bMax, 0);
}


// ConVar::ConVar  (line 797, @0x0000000002f70fc0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ConCommandBase, ~CUtlVector, ~ConCommandBase
// calls: ConVar::Create, CUtlVectorBase<void (*)(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >::~CUtlVectorBase, _Unwind_Resume
// callers: __static_initialization_and_destruction_0, _GLOBAL__sub_I__unity_base_01.cpp, _GLOBAL__sub_I__unity_base_02.cpp, _GLOBAL__sub_I__unity_base_05.cpp, _GLOBAL__sub_I__unity_base_06.cpp, _GLOBAL__sub_I__unity_base_07.cpp, _GLOBAL__sub_I__unity_base_11.cpp, _GLOBAL__sub_I__unity_dota_03.cpp, _GLOBAL__sub_I__unity_dota_05.cpp, _GLOBAL__sub_I__unity_gc_01.cpp
void __fastcall ConVar::ConVar(
        ConVar *const this,
        const char *pName,
        const char *pDefaultValue,
        int64 flags,
        const char *pHelpString,
        FnChangeCallback_t callback)
{
  this->_vptr_ConCommandBase = off_47BEDF0;
  this->m_bRegistered = 0;
  this->m_pszName = 0;
  this->m_pszHelpString = 0;
  this->m_nFlags = 0;
  this->m_pNext = 0;
  this->_vptr_IConVar = &off_47BEEF0;
  this->m_fnChangeCallbacks.m_Size = 0;
  this->m_fnChangeCallbacks.m_Memory.m_pMemory = 0;
  this->m_fnChangeCallbacks.m_Memory.m_nAllocationCount = 0;
  this->m_fnChangeCallbacks.m_Memory.m_nGrowSize = 0;
  ConVar::Create(this, pName, pDefaultValue, flags, pHelpString, 0, 0.0, 0.0, 0, callback);
}


// ConVar::ConVar  (line 802, @0x0000000002f71070, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ConCommandBase, ~CUtlVector, ~ConCommandBase
// calls: ConVar::Create, CUtlVectorBase<void (*)(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall ConVar::ConVar(
        ConVar *const this,
        const char *pName,
        const char *pDefaultValue,
        int64 flags,
        const char *pHelpString,
        bool bMin,
        float fMin,
        float fMax,
        bool bMax,
        FnChangeCallback_t callback)
{
  this->_vptr_ConCommandBase = off_47BEDF0;
  this->m_bRegistered = 0;
  this->_vptr_IConVar = &off_47BEEF0;
  this->m_pszName = 0;
  this->m_pszHelpString = 0;
  this->m_nFlags = 0;
  this->m_pNext = 0;
  this->m_fnChangeCallbacks.m_Size = 0;
  this->m_fnChangeCallbacks.m_Memory.m_pMemory = 0;
  this->m_fnChangeCallbacks.m_Memory.m_nAllocationCount = 0;
  this->m_fnChangeCallbacks.m_Memory.m_nGrowSize = 0;
  ConVar::Create(this, pName, pDefaultValue, flags, pHelpString, bMin, fMin, fMax, bMax, callback);
}


// ConVar::~ConVar  (line 811, @0x0000000002f70880, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~ConCommandBase
// calls: operator delete [], CUtlMemory<void (*)(IConVar*, char const*, float), int>::Purge, GetEmptyConVar
// callers: CSplitScreenAddedConVar::~CSplitScreenAddedConVar, ConVar::~ConVar, CEmptyConVar::~CEmptyConVar
void __fastcall ConVar::~ConVar(ConVar *const this)
{
  bool v2; // zf
  char *m_pszString; // rdi

  v2 = !this->m_bRegistered;
  this->_vptr_ConCommandBase = off_47BEDF0;
  this->_vptr_IConVar = &off_47BEEF0;
  if ( !v2 && this->m_pParent == this )
    GetEmptyConVar();
  m_pszString = this->m_Value.m_pszString;
  if ( m_pszString != 0 )
  {
    operator delete[](m_pszString);
    this->m_Value.m_pszString = 0;
  }
  v2 = (this->m_fnChangeCallbacks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_fnChangeCallbacks.m_Size = 0;
  if ( !v2
    || (CUtlMemory<void (*)(IConVar *,char const*,float),int>::Purge(&this->m_fnChangeCallbacks.m_Memory),
        (this->m_fnChangeCallbacks.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_ConCommandBase = off_47BECD0;
  }
  else
  {
    CUtlMemory<void (*)(IConVar *,char const*,float),int>::Purge(&this->m_fnChangeCallbacks.m_Memory);
    this->_vptr_ConCommandBase = off_47BECD0;
  }
}


// ConVar::~ConVar  (line 811, @0x0000000002f70930, libserver.so)
// calls: ConVar::~ConVar, operator delete
void __fastcall ConVar::~ConVar(ConVar *const this)
{
  ConVar::~ConVar(this);
  operator delete(this);
}


// ConVar::InstallChangeCallback  (line 833, @0x0000000002f71120, libserver.so)  // inlines: AddToTail, CopyConstruct<void (*)(IConVar*, char const*, float)>, Element, GrowMemory, operator[]
// calls: CUtlVectorBase<void (*)(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >::Find, Warning, CUtlMemory<void (*)(IConVar*, char const*, float), int>::Grow
// callers: CPhysicsGameSystem::GameInit
// strings: "InstallChangeCallback ignoring duplicate change callback!!!\n", "InstallChangeCallback called with NULL callback, ignoring!!!\n"
void __fastcall ConVar::InstallChangeCallback(ConVar *const this, FnChangeCallback_t callback, bool bInvoke)
{
  ConVar *m_pParent; // rbx
  __int64 m_Size; // r15
  int v8; // eax
  FnChangeCallback_t *v9; // rax
  FnChangeCallback_t callbacka; // [rsp+8h] [rbp-38h] BYREF

  callbacka = callback;
  if ( callback != 0 )
  {
    m_pParent = this->m_pParent;
    if ( CUtlVectorBase<void (*)(IConVar *,char const*,float),CUtlMemory<void (*)(IConVar *,char const*,float),int>>::Find(
           &m_pParent->m_fnChangeCallbacks,
           &callbacka) == -1 )
    {
      m_Size = m_pParent->m_fnChangeCallbacks.m_Size;
      v8 = m_pParent->m_fnChangeCallbacks.m_Size;
      if ( m_Size == m_pParent->m_fnChangeCallbacks.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<void (*)(IConVar *,char const*,float),int>::Grow(&m_pParent->m_fnChangeCallbacks.m_Memory, 1);
        v8 = m_pParent->m_fnChangeCallbacks.m_Size;
      }
      m_pParent->m_fnChangeCallbacks.m_Size = v8 + 1;
      v9 = &m_pParent->m_fnChangeCallbacks.m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
        *v9 = callback;
      if ( bInvoke )
        callback(&this->IConVar, this->m_Value.m_pszString, this->m_Value.m_fValue);
    }
    else
    {
      Warning("InstallChangeCallback ignoring duplicate change callback!!!\n");
    }
  }
  else
  {
    Warning("InstallChangeCallback called with NULL callback, ignoring!!!\n", 0, bInvoke);
  }
}


// ConVar::RemoveChangeCallback  (line 857, @0x0000000002f70120, libserver.so)  // inlines: Element, FindAndRemove, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CUtlVectorBase<void (*)(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> >::Find, memmove
// callers: CPhysicsGameSystem::GameInit
void __fastcall ConVar::RemoveChangeCallback(ConVar *const this, FnChangeCallback_t callback)
{
  ConVar *m_pParent; // rbx
  int v3; // eax
  int m_Size; // ecx
  void (**v5)(IConVar *, const char *, float); // rsi
  FnChangeCallback_t callbacka; // [rsp+8h] [rbp-18h] BYREF

  callbacka = callback;
  m_pParent = this->m_pParent;
  v3 = CUtlVectorBase<void (*)(IConVar *,char const*,float),CUtlMemory<void (*)(IConVar *,char const*,float),int>>::Find(
         &m_pParent->m_fnChangeCallbacks,
         &callbacka);
  if ( v3 != -1 )
  {
    m_Size = m_pParent->m_fnChangeCallbacks.m_Size;
    if ( m_Size - v3 - 1 > 0 )
    {
      v5 = &m_pParent->m_fnChangeCallbacks.m_Memory.m_pMemory[v3 + 1];
      memmove(v5 - 1, v5, 8LL * (m_pParent->m_fnChangeCallbacks.m_Size - v3 - 1));
      m_Size = m_pParent->m_fnChangeCallbacks.m_Size;
    }
    m_pParent->m_fnChangeCallbacks.m_Size = m_Size - 1;
  }
}


// ConVar::IsFlagSet  (line 862, @0x0000000002f6e850, libserver.so)
bool __fastcall ConVar::IsFlagSet(const ConVar *const this, int64 flag)
{
  return (flag & this->m_pParent->m_nFlags) != 0;
}


// ConVar::GetFlags  (line 867, @0x0000000002f6e880, libserver.so)
int64 __fastcall ConVar::GetFlags(const ConVar *const this)
{
  return this->m_pParent->m_nFlags;
}


// ConVar::GetHelpText  (line 872, @0x0000000002f6e890, libserver.so)
const char *__fastcall ConVar::GetHelpText(const ConVar *const this)
{
  return this->m_pParent->m_pszHelpString;
}


// ConVar::AddFlags  (line 877, @0x0000000002f6e8a0, libserver.so)
void __fastcall ConVar::AddFlags(ConVar *const this, int64 flags)
{
  this->m_pParent->m_nFlags |= flags;
}


// ConVar::IsRegistered  (line 886, @0x0000000002f6e8c0, libserver.so)
bool __fastcall ConVar::IsRegistered(const ConVar *const this)
{
  return this->m_pParent->m_bRegistered;
}


// ConVar::GetName  (line 891, @0x0000000002f6e8d0, libserver.so)
const char *__fastcall ConVar::GetName(const ConVar *const this)
{
  return this->m_pParent->m_pszName;
}


// ConVar::GetBaseName  (line 896, @0x0000000002f6e8f0, libserver.so)
const char *__fastcall ConVar::GetBaseName(const ConVar *const this)
{
  return this->m_pParent->m_pszName;
}


// ConVar::GetSplitScreenPlayerSlot  (line 901, @0x0000000002f6e910, libserver.so)
CSplitScreenSlot __fastcall ConVar::GetSplitScreenPlayerSlot(const ConVar *const this)
{
  return 0;
}


// ConVar::IsCommand  (line 912, @0x0000000002f6e930, libserver.so)
bool __fastcall ConVar::IsCommand(const ConVar *const this)
{
  return 0;
}


// ConVar::Init  (line 921, @0x0000000002f6e940, libserver.so)  // inlines: Init
// globals: ConCommandBase::s_pAccessor
void __fastcall ConVar::Init(ConVar *const this)
{
  if ( ConCommandBase::s_pAccessor != 0 )
    (*ConCommandBase::s_pAccessor->_vptr_IConCommandBaseAccessor)(ConCommandBase::s_pAccessor, this);
}


// ConVar::InternalSetColorFromString  (line 926, @0x0000000002f6f6f0, libserver.so)
// calls: V_sscanf
// callers: ConVar::InternalSetValue, ConVar::Create
// strings: "%i %i %i %i"
bool __fastcall ConVar::InternalSetColorFromString(ConVar *const this, const char *value)
{
  int v3; // eax
  char v4; // al
  char v5; // dl
  char v6; // cl
  char v7; // si
  int nRGBA[8]; // [rsp+0h] [rbp-20h] BYREF

  v3 = V_sscanf(value, "%i %i %i %i", nRGBA, &nRGBA[1], &nRGBA[2], &nRGBA[3]);
  if ( v3 <= 2 )
    return 0;
  if ( v3 == 3 )
  {
    v4 = nRGBA[0];
    nRGBA[3] = 255;
    if ( nRGBA[0] > 0xFFu )
      return 0;
  }
  else
  {
    v4 = nRGBA[0];
    if ( nRGBA[0] > 0xFFu )
      return 0;
  }
  v5 = nRGBA[1];
  if ( nRGBA[1] <= 0xFFu )
  {
    v6 = nRGBA[2];
    if ( nRGBA[2] <= 0xFFu )
    {
      v7 = nRGBA[3];
      if ( nRGBA[3] <= 0xFFu )
      {
        LOBYTE(this->m_Value.m_nValue) = v4;
        BYTE1(this->m_Value.m_nValue) = v5;
        BYTE2(this->m_Value.m_nValue) = v6;
        HIBYTE(this->m_Value.m_nValue) = v7;
        this->m_Value.m_fValue = this->m_Value.m_nValue;
        return 1;
      }
    }
  }
  return 0;
}


// ConVar::InternalSetValue  (line 970, @0x0000000002f6f7a0, libserver.so)  // inlines: IsFinite
// calls: ConVar::InternalSetColorFromString, V_atof, V_snprintf, Warning, __stack_chk_fail
// strings: "Warning:  %s = '%s' is infinite, clamping value.\n"
void __fastcall ConVar::InternalSetValue(ConVar *const this, const char *value)
{
  const char *v4; // r13
  unsigned int v5; // r14d
  __int64 v6; // rsi
  __m128 v7; // xmm0
  __m128i v8; // xmm0
  double v9; // xmm1_8
  int (**vptr_ConCommandBase)(...); // rax
  char v11; // al
  float v12; // xmm0_4
  double v13; // xmm1_8
  const char *v14; // rax
  double fNewValue; // [rsp+0h] [rbp-70h]
  float fNewValuea; // [rsp+0h] [rbp-70h]
  __int32 v17; // [rsp+8h] [rbp-68h]
  double v18; // [rsp+8h] [rbp-68h]
  float fClampedValue; // [rsp+1Ch] [rbp-54h] BYREF
  char tempVal[32]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-28h]

  v21 = __readfsqword(0x28u);
  if ( (*(this->_vptr_ConCommandBase + 4))(this, 11534336) != 0 && g_pCVar != 0 && (*(*g_pCVar + 304LL))(g_pCVar) == 0 )
  {
    (*(*g_pCVar + 312LL))(g_pCVar, this, value);
  }
  else
  {
    v4 = "";
    if ( value != 0 )
      v4 = value;
    v5 = _mm_cvtsi128_si32(LODWORD(this->m_Value.m_fValue));
    if ( !ConVar::InternalSetColorFromString(this, value) )
    {
      v7.m128_f32[0] = V_atof(value, v6);
      v8 = _mm_unpacklo_ps(v7, v7);
      v9 = *v8.m128i_i32;
      if ( (_mm_cvtsi128_si32(v8) & 0x7F800000) == 0x7F800000 )
      {
        v14 = (*(this->_vptr_ConCommandBase + 8))(this, *v8.m128i_i64, v9);
        Warning("Warning:  %s = '%s' is infinite, clamping value.\n", v14, value);
        v8.m128i_i32[0] = 2139095039;
        v9 = 3.402823466385289e38;
      }
      vptr_ConCommandBase = this->_vptr_ConCommandBase;
      fNewValue = v9;
      fClampedValue = *v8.m128i_i32;
      v17 = v8.m128i_i32[0];
      v11 = vptr_ConCommandBase[27](this, &fClampedValue);
      v12 = *&v17;
      v13 = fNewValue;
      if ( v11 != 0 )
      {
        v4 = tempVal;
        fNewValuea = fClampedValue;
        v18 = fClampedValue;
        V_snprintf(tempVal, 32, "%f", fClampedValue);
        v13 = v18;
        v12 = fNewValuea;
      }
      this->m_Value.m_fValue = v12;
      this->m_Value.m_nValue = v13;
    }
    if ( (this->m_nFlags & 0x1000) == 0 )
      (*(this->_vptr_ConCommandBase + 28))(this, v4, *_mm_cvtsi32_si128(v5).m128i_i64);
  }
}


// ConVar::ChangeStringValue  (line 1025, @0x0000000002f6eea0, libserver.so)  // inlines: V_strlen, memcpy
// calls: memcpy, strlen, operator delete [], operator new [], __stack_chk_fail
void __fastcall ConVar::ChangeStringValue(ConVar *const this, const char *tempVal, float a3, float flOldValue)
{
  size_t m_StringLength; // rdx
  void *v7; // rsp
  int v8; // r12d
  size_t v9; // r14
  char *m_pszString; // rdi
  char *v11; // rax
  __int64 v12; // r12
  int i; // ebx
  _QWORD v15[8]; // [rsp+10h] [rbp-40h] BYREF

  v15[1] = __readfsqword(0x28u);
  m_StringLength = this->m_Value.m_StringLength;
  v7 = alloca(((m_StringLength + 31) & 0xFFFFFFF0) + 16LL);
  memcpy((v15 & 0xFFFFFFFFFFFFFFEFLL), this->m_Value.m_pszString, m_StringLength);
  if ( tempVal != 0 )
  {
    v8 = strlen(tempVal) + 1;
    v9 = v8;
  }
  else
  {
    v9 = 1;
    v8 = 1;
  }
  m_pszString = this->m_Value.m_pszString;
  if ( this->m_Value.m_StringLength < v8 )
  {
    if ( m_pszString != 0 )
      operator delete[](m_pszString);
    v11 = operator new[](v9);
    this->m_Value.m_StringLength = v8;
    this->m_Value.m_pszString = v11;
    m_pszString = v11;
  }
  v12 = 0;
  memcpy(m_pszString, tempVal, v9);
  for ( i = 0; this->m_fnChangeCallbacks.m_Size > i; ++v12 )
  {
    ++i;
    this->m_fnChangeCallbacks.m_Memory.m_pMemory[v12](&this->IConVar, (v15 & 0xFFFFFFFFFFFFFFEFLL), a3);
  }
  if ( g_pCVar != 0 )
    (*(*g_pCVar + 192LL))(g_pCVar, this, v15 & 0xFFFFFFFFFFFFFFEFLL, a3);
}


// ConVar::ClampValue  (line 1066, @0x0000000002f6ecf0, libserver.so)
bool __fastcall ConVar::ClampValue(ConVar *const this, float *const value)
{
  bool result; // al
  float m_fMaxVal; // xmm0_4

  result = this->m_bHasMin;
  if ( !result || (m_fMaxVal = this->m_fMinVal) <= *value )
  {
    result = this->m_bHasMax;
    if ( !result )
      return result;
    m_fMaxVal = this->m_fMaxVal;
    if ( *value <= m_fMaxVal )
      return 0;
  }
  *value = m_fMaxVal;
  return result;
}


// ConVar::InternalSetFloatValue  (line 1087, @0x0000000002f6ea90, libserver.so)
// calls: V_snprintf, __stack_chk_fail
void __fastcall ConVar::InternalSetFloatValue(ConVar *const this, float a2, float fNewValue)
{
  float v4; // xmm1_4
  bool v5; // zf
  int v6; // eax
  float m_fValue; // xmm2_4
  float flOldValue; // [rsp+8h] [rbp-48h]
  float fNewValuea; // [rsp+Ch] [rbp-44h] BYREF
  char tempVal[40]; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-18h]

  fNewValuea = a2;
  v11 = __readfsqword(0x28u);
  if ( this->m_Value.m_fValue != a2 )
  {
    if ( (*(this->_vptr_ConCommandBase + 4))(this, 11534336) != 0 && g_pCVar != 0 && (*(*g_pCVar + 304LL))(g_pCVar) == 0 )
    {
      (*(*g_pCVar + 328LL))(g_pCVar, this, fNewValuea);
    }
    else
    {
      (*(this->_vptr_ConCommandBase + 27))(this, &fNewValuea);
      v4 = fNewValuea;
      v5 = (this->m_nFlags & 0x1000) == 0;
      v6 = fNewValuea;
      m_fValue = this->m_Value.m_fValue;
      this->m_Value.m_fValue = fNewValuea;
      this->m_Value.m_nValue = v6;
      if ( v5 )
      {
        flOldValue = m_fValue;
        V_snprintf(tempVal, 32, "%f", v4);
        (*(this->_vptr_ConCommandBase + 28))(this, tempVal, flOldValue);
      }
    }
  }
}


// ConVar::InternalSetIntValue  (line 1127, @0x0000000002f6ebb0, libserver.so)
// calls: V_snprintf, __stack_chk_fail
void __fastcall ConVar::InternalSetIntValue(ConVar *const this, int nValue)
{
  int v2; // r12d
  int (**vptr_ConCommandBase)(...); // rax
  char v5; // al
  float v6; // xmm1_4
  bool v7; // zf
  float m_fValue; // xmm0_4
  float flOldValue; // [rsp+Ch] [rbp-64h]
  float fValue; // [rsp+1Ch] [rbp-54h] BYREF
  char tempVal[40]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-28h]

  v2 = nValue;
  v12 = __readfsqword(0x28u);
  if ( this->m_Value.m_nValue != nValue || nValue != this->m_Value.m_fValue )
  {
    if ( (*(this->_vptr_ConCommandBase + 4))(this, 11534336) != 0 && g_pCVar != 0 && (*(*g_pCVar + 304LL))(g_pCVar) == 0 )
    {
      (*(*g_pCVar + 320LL))(g_pCVar, this, v2);
    }
    else
    {
      vptr_ConCommandBase = this->_vptr_ConCommandBase;
      fValue = v2;
      v5 = vptr_ConCommandBase[27](this, &fValue);
      v6 = fValue;
      if ( v5 != 0 )
        v2 = fValue;
      v7 = (this->m_nFlags & 0x1000) == 0;
      this->m_Value.m_nValue = v2;
      m_fValue = this->m_Value.m_fValue;
      this->m_Value.m_fValue = v6;
      if ( v7 )
      {
        flOldValue = m_fValue;
        V_snprintf(tempVal, 32, "%d", v2);
        (*(this->_vptr_ConCommandBase + 28))(this, tempVal, flOldValue);
      }
    }
  }
}


// ConVar::InternalSetColorValue  (line 1171, @0x0000000002f6e970, libserver.so)
void __fastcall ConVar::InternalSetColorValue(ConVar *const this, Color value)
{
  (*(this->_vptr_ConCommandBase + 25))(this, *&value);
}


// ConVar::Create  (line 1193, @0x0000000002f70590, libserver.so)  // inlines: AddToTail, CopyConstruct<void (*)(IConVar*, char const*, float)>, Element, GrowMemory, IsFinite, V_strlen, memcpy, operator[]
// calls: strlen, operator new [], memcpy, ConVar::InternalSetColorFromString, ConCommandBase::Create, V_atof, V_atoi, CUtlMemory<void (*)(IConVar*, char const*, float), int>::Grow, Warning
// callers: ConVar::ConVar
// strings: "ConVar(%s) defined with infinite float value (%s)\n"
void __fastcall ConVar::Create(
        ConVar *const this,
        const char *pName,
        const char *pDefaultValue,
        int64 flags,
        const char *pHelpString,
        bool bMin,
        float fMin,
        float fMax,
        bool bMax,
        FnChangeCallback_t callback)
{
  FnChangeCallback_t v14; // rax
  const char *m_pszDefaultValue; // rdi
  __int64 m_Size; // r15
  int v17; // edx
  void (**v18)(IConVar *, const char *, float); // rdx
  int v19; // eax
  size_t v20; // rdi
  char *v21; // rax
  size_t m_StringLength; // rdx
  const char *v23; // rsi
  __int64 v24; // rsi
  __m128i v25; // xmm0

  this->m_pParent = this;
  v14 = callback;
  m_pszDefaultValue = "";
  this->m_bHasMin = bMin;
  if ( pDefaultValue != 0 )
    m_pszDefaultValue = pDefaultValue;
  this->m_fMinVal = fMin;
  this->m_fMaxVal = fMax;
  this->m_pszDefaultValue = m_pszDefaultValue;
  this->m_bHasMax = bMax;
  if ( callback == 0 )
    goto LABEL_9;
  m_Size = this->m_fnChangeCallbacks.m_Size;
  v17 = this->m_fnChangeCallbacks.m_Size;
  if ( m_Size == this->m_fnChangeCallbacks.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<void (*)(IConVar *,char const*,float),int>::Grow(&this->m_fnChangeCallbacks.m_Memory, 1);
    v17 = this->m_fnChangeCallbacks.m_Size;
    v14 = callback;
  }
  this->m_fnChangeCallbacks.m_Size = v17 + 1;
  v18 = &this->m_fnChangeCallbacks.m_Memory.m_pMemory[m_Size];
  if ( v18 != 0 )
    *v18 = v14;
  m_pszDefaultValue = this->m_pszDefaultValue;
  if ( m_pszDefaultValue == 0 )
  {
    v20 = 1;
    v19 = 1;
  }
  else
  {
LABEL_9:
    v19 = strlen(m_pszDefaultValue) + 1;
    v20 = v19;
  }
  this->m_Value.m_StringLength = v19;
  v21 = operator new[](v20);
  m_StringLength = this->m_Value.m_StringLength;
  v23 = this->m_pszDefaultValue;
  this->m_Value.m_pszString = v21;
  memcpy(v21, v23, m_StringLength);
  if ( !ConVar::InternalSetColorFromString(this, this->m_Value.m_pszString) )
  {
    *v25.m128i_i32 = V_atof(this->m_Value.m_pszString, v24);
    LODWORD(this->m_Value.m_fValue) = v25.m128i_i32[0];
    if ( (_mm_cvtsi128_si32(v25) & 0x7F800000) == 0x7F800000 )
    {
      Warning("ConVar(%s) defined with infinite float value (%s)\n", pName, this->m_Value.m_pszString);
      this->m_Value.m_fValue = 3.4028235e38;
    }
    this->m_Value.m_nValue = V_atoi(this->m_Value.m_pszString);
  }
  ConCommandBase::Create(this, pName, pHelpString, flags);
}


// ConVar::SetValue  (line 1262, @0x0000000002f6e9b0, libserver.so)
// callers: VScriptServerScriptErrorFunc, CCredits::InputRollOutroCredits, CCredits::OnRestore, CCredits::RollOutroCredits, CFlexCycler::FlexThink, CMultiplayRules::CMultiplayRules, CDOTAChallengeSystem::DebugTestChallenge, CDOTAChallengeSystem::DebugTestQuest, CDOTAGamerules::PreSpawnGroupUnload, CDOTAGameConfiguration::InitGameSession, CDOTAInGamePredictionGameSystem::DebugInGamePrediction, CDOTACustomGameCache::StartInstallingUGC
void __fastcall ConVar::SetValue(ConVar *const this, const char *value)
{
  (*(this->m_pParent->_vptr_ConCommandBase + 23))(this->m_pParent, value);
}


// ConVar::SetValue  (line 1272, @0x0000000002f6e9e0, libserver.so)
// callers: CVProfOGSModeHeartbeat::GetSamplingInterval
void __fastcall ConVar::SetValue(ConVar *const this, double a2, float value)
{
  (*(this->m_pParent->_vptr_ConCommandBase + 24))(this->m_pParent, a2, value);
}


// ConVar::SetValue  (line 1282, @0x0000000002f6ea10, libserver.so)
// callers: CNetworkTransmitComponent::IsInPVS, ent_text_filter, CLoopModeGame::OnLoopActivate, CSource1GameConfiguration::InitGameSession, CCommentary_SaveRestoreBlockHandler::Restore, CCommentarySystem::CalculateCommentaryState, MPForceCameraCallback, MPTimeLimitCallback, CBasePlayer::PlayerRunCommand, CBasePlayer::SetOrResetInitialState, CDOTA_AutoSaveGameSystem::GameInit, CmdDotaFowDisable (40 total)
void __fastcall ConVar::SetValue(ConVar *const this, int value)
{
  (*(this->m_pParent->_vptr_ConCommandBase + 25))(this->m_pParent, value);
}


// ConVar::SetValue  (line 1292, @0x0000000002f6ea40, libserver.so)
void __fastcall ConVar::SetValue(ConVar *const this, Color value)
{
  (*(this->m_pParent->_vptr_ConCommandBase + 26))(this->m_pParent, value);
}


// ConVar::Revert  (line 1301, @0x0000000002f6f960, libserver.so)
// callers: ResetConVarsFromFile
void __fastcall ConVar::Revert(ConVar *const this)
{
  (*(this->m_pParent->_vptr_ConCommandBase + 16))(this->m_pParent, this->m_pParent->m_pszDefaultValue);
}


// ConVar::GetMin  (line 1313, @0x0000000002f6f980, libserver.so)
bool __fastcall ConVar::GetMin(const ConVar *const this, float *const minVal)
{
  *minVal = this->m_pParent->m_fMinVal;
  return this->m_pParent->m_bHasMin;
}


// ConVar::GetMax  (line 1323, @0x0000000002f6f9a0, libserver.so)
bool __fastcall ConVar::GetMax(const ConVar *const this, float *const maxVal)
{
  *maxVal = this->m_pParent->m_fMaxVal;
  return this->m_pParent->m_bHasMax;
}


// ConVar::GetMinValue  (line 1329, @0x0000000002f6f9c0, libserver.so)
float __fastcall ConVar::GetMinValue(const ConVar *const this)
{
  return this->m_pParent->m_fMinVal;
}


// ConVar::GetMaxValue  (line 1334, @0x0000000002f6f9d0, libserver.so)
float __fastcall ConVar::GetMaxValue(const ConVar *const this)
{
  return this->m_pParent->m_fMaxVal;
}


// ConVar::HasMin  (line 1339, @0x0000000002f6f9e0, libserver.so)
bool __fastcall ConVar::HasMin(const ConVar *const this)
{
  return this->m_pParent->m_bHasMin;
}


// ConVar::HasMax  (line 1344, @0x0000000002f6f9f0, libserver.so)
bool __fastcall ConVar::HasMax(const ConVar *const this)
{
  return this->m_pParent->m_bHasMax;
}


// ConVar::GetDefault  (line 1353, @0x0000000002f6fa00, libserver.so)
// callers: CGameDLL_ConVarAccessor::RegisterConCommandBase
const char *__fastcall ConVar::GetDefault(const ConVar *const this)
{
  return this->m_pParent->m_pszDefaultValue;
}


// ConVarRef::ConVarRef  (line 1358, @0x0000000002f70af0, libserver.so)
// calls: ConVarRef::Init
// callers: CNetworkTransmitComponent::LatchSettings, Script_CvarGetf, CScriptConvarAccessor::SetStr, CScriptConvarAccessor::SetFloat, Script_CvarSetf, CScriptConvarAccessor::SetInt, CScriptConvarAccessor::SetBool, CScriptConvarAccessor::GetInt, CScriptConvarAccessor::GetFloat, CScriptConvarAccessor::GetBool, CScriptConvarAccessor::GetStr, CSteamWorksGameStatsUploader::Init (67 total)
void __fastcall ConVarRef::ConVarRef(ConVarRef *const this, const char *pName)
{
  ConVarRef::Init(this, pName, 0);
}


// ConVarRef::ConVarRef  (line 1363, @0x0000000002f70b00, libserver.so)
// calls: ConVarRef::Init
// callers: CDOTAGameManager::InitAddOnGame, GCSDK::CGCToClientPollConvarJob::BYieldingRunJobFromProtoMsg
void __fastcall ConVarRef::ConVarRef(ConVarRef *const this, const char *pName, bool bIgnoreMissing)
{
  ConVarRef::Init(this, pName, bIgnoreMissing);
}


// ConVarRef::Init  (line 1368, @0x0000000002f709e0, libserver.so)  // inlines: IsValid, V_isempty
// calls: GetEmptyConVar, Warning
// callers: ConVarRef::ConVarRef
// strings: "<null>", "ConVarRef %s doesn't point to an existing ConVar\n"
// globals: ConVarRef::Init(char const*,bool)::bFirst
void __fastcall ConVarRef::Init(ConVarRef *const this, const char *pName, bool bIgnoreMissing)
{
  IConVar *EmptyConVar; // r15
  ConVar *v7; // rax
  ConVar *v8; // rax
  IConVar *v9; // rcx
  ConVar *v10; // rax
  const char *v11; // rsi

  if ( g_pCVar != 0 && pName != 0 && *pName != 0 )
  {
    EmptyConVar = (*(*g_pCVar + 144LL))();
    if ( EmptyConVar != 0 )
      goto LABEL_5;
  }
  else
  {
    EmptyConVar = GetEmptyConVar();
    if ( EmptyConVar != 0 )
    {
LABEL_5:
      EmptyConVar += 6;
      this->m_pConVar = EmptyConVar;
LABEL_6:
      v7 = &EmptyConVar[-6];
      goto LABEL_7;
    }
  }
  this->m_pConVar = 0;
  v10 = GetEmptyConVar();
  if ( v10 != 0 )
    EmptyConVar = &v10->IConVar;
  this->m_pConVar = EmptyConVar;
  if ( EmptyConVar != 0 )
    goto LABEL_6;
  EmptyConVar = 0;
  v7 = 0;
LABEL_7:
  this->m_pConVarState = v7;
  v8 = GetEmptyConVar();
  v9 = 0;
  if ( v8 != 0 )
    v9 = &v8->IConVar;
  if ( v9 == EmptyConVar && (g_pCVar != 0 || ConVarRef::Init(char const*,bool)::bFirst) )
  {
    if ( !bIgnoreMissing )
    {
      v11 = "<null>";
      if ( pName != 0 )
        v11 = pName;
      Warning("ConVarRef %s doesn't point to an existing ConVar\n", v11);
    }
    ConVarRef::Init(char const*,bool)::bFirst = 0;
  }
}


// ConVarRef::ConVarRef  (line 1390, @0x0000000002f70950, libserver.so)
// calls: GetEmptyConVar
// callers: CCommentarySystem::ConvarChanged, CC_CommentaryChanged, ValidateMOTDFilename, RegenerationForceOnChangeCallback, CGlobalConvarTrackerAndReverter::ConvarChanged
void __fastcall ConVarRef::ConVarRef(ConVarRef *const this, IConVar *pConVar)
{
  ConVar *EmptyConVar; // rax
  ConVar *v3; // rsi

  if ( pConVar != 0 )
  {
    this->m_pConVar = pConVar;
    this->m_pConVarState = &pConVar[-6];
  }
  else
  {
    EmptyConVar = GetEmptyConVar();
    if ( EmptyConVar != 0 )
    {
      this->m_pConVar = &EmptyConVar->IConVar;
      v3 = EmptyConVar;
    }
    else
    {
      this->m_pConVar = 0;
      v3 = 0;
    }
    this->m_pConVarState = v3;
  }
}


// ConVarRef::IsValid  (line 1396, @0x0000000002f709b0, libserver.so)
// calls: GetEmptyConVar
// callers: CNetworkTransmitComponent::LatchSettings, Script_CvarGetf, CScriptConvarAccessor::SetStr, CScriptConvarAccessor::SetFloat, Script_CvarSetf, CScriptConvarAccessor::SetInt, CScriptConvarAccessor::SetBool, CScriptConvarAccessor::GetInt, CScriptConvarAccessor::GetFloat, CScriptConvarAccessor::GetBool, CScriptConvarAccessor::GetStr, CSteamWorksGameStatsUploader::Init (22 total)
bool __fastcall ConVarRef::IsValid(const ConVarRef *const this)
{
  IConVar *m_pConVar; // rbx
  ConVar *EmptyConVar; // rax
  IConVar *v3; // rdx

  m_pConVar = this->m_pConVar;
  EmptyConVar = GetEmptyConVar();
  v3 = 0;
  if ( EmptyConVar != 0 )
    v3 = &EmptyConVar->IConVar;
  return m_pConVar != v3;
}


// SplitScreenConVarRef::SplitScreenConVarRef  (line 1402, @0x0000000002f70e40, libserver.so)
// calls: SplitScreenConVarRef::Init
void __fastcall SplitScreenConVarRef::SplitScreenConVarRef(SplitScreenConVarRef *const this, const char *pName)
{
  SplitScreenConVarRef::Init(this, pName, 0);
}


// SplitScreenConVarRef::SplitScreenConVarRef  (line 1407, @0x0000000002f70e50, libserver.so)
// calls: SplitScreenConVarRef::Init
void __fastcall SplitScreenConVarRef::SplitScreenConVarRef(
        SplitScreenConVarRef *const this,
        const char *pName,
        bool bIgnoreMissing)
{
  SplitScreenConVarRef::Init(this, pName, bIgnoreMissing);
}


// SplitScreenConVarRef::Init  (line 1412, @0x0000000002f70c90, libserver.so)  // inlines: IsValid, V_strncpy<long unsigned int>
// calls: V_snprintf, GetEmptyConVar, Warning, _V_strncpy, __stack_chk_fail
// callers: SplitScreenConVarRef::SplitScreenConVarRef
// strings: "%s%d", "ConVarRef %s doesn't point to an existing ConVar\n"
// globals: SplitScreenConVarRef::Init(char const*,bool)::bFirst
void __fastcall SplitScreenConVarRef::Init(SplitScreenConVarRef *const this, const char *pName, bool bIgnoreMissing)
{
  __int64 v4; // r13
  SplitScreenConVarRef *v5; // rbx
  ConVar *EmptyConVar; // rax
  IConVar *m_pConVar; // rax
  ConVar *v8; // rax
  IConVar *v9; // rbx
  ConVar *v10; // rax
  IConVar *v11; // rdx
  ConVar *v12; // rax
  IConVar *v13; // rdx
  bool v14; // zf
  char pchName[264]; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v18; // [rsp+118h] [rbp-38h]

  v4 = 0;
  v5 = this;
  v18 = __readfsqword(0x28u);
  do
  {
    if ( v4 != 0 )
      V_snprintf(pchName, 256, "%s%d", pName, v4 + 1);
    else
      _V_strncpy(pchName, pName, 256);
    if ( g_pCVar != 0 )
      EmptyConVar = (*(*g_pCVar + 144LL))(g_pCVar, pchName);
    else
      EmptyConVar = GetEmptyConVar();
    if ( EmptyConVar != 0 )
    {
      m_pConVar = &EmptyConVar->IConVar;
      v5->m_Info[0].m_pConVar = m_pConVar;
LABEL_8:
      v8 = &m_pConVar[-6];
      goto LABEL_9;
    }
    v5->m_Info[0].m_pConVar = 0;
    v12 = GetEmptyConVar();
    v13 = &v12->IConVar;
    v14 = v12 == 0;
    m_pConVar = 0;
    if ( !v14 )
      m_pConVar = v13;
    v5->m_Info[0].m_pConVar = m_pConVar;
    if ( v4 != 0 )
    {
      m_pConVar = this->m_Info[0].m_pConVar;
      v5->m_Info[0].m_pConVar = this->m_Info[0].m_pConVar;
    }
    if ( m_pConVar != 0 )
      goto LABEL_8;
    v8 = 0;
LABEL_9:
    ++v4;
    v5->m_Info[0].m_pConVarState = v8;
    v5 = (v5 + 16);
  }
  while ( v4 != 4 );
  v9 = this->m_Info[0].m_pConVar;
  v10 = GetEmptyConVar();
  v11 = 0;
  if ( v10 != 0 )
    v11 = &v10->IConVar;
  if ( v9 == v11 && (g_pCVar != 0 || SplitScreenConVarRef::Init(char const*,bool)::bFirst) )
  {
    if ( !bIgnoreMissing )
      Warning("ConVarRef %s doesn't point to an existing ConVar\n", pName);
    SplitScreenConVarRef::Init(char const*,bool)::bFirst = 0;
  }
}


// SplitScreenConVarRef::SplitScreenConVarRef  (line 1454, @0x0000000002f70b10, libserver.so)
// calls: V_snprintf, GetEmptyConVar, __stack_chk_fail
// strings: "%s%d"
void __fastcall SplitScreenConVarRef::SplitScreenConVarRef(SplitScreenConVarRef *const this, IConVar *pConVar)
{
  IConVar *v4; // rax
  ConVar *v5; // rax
  SplitScreenConVarRef *v6; // r12
  int v7; // ebx
  ConVar *m_pConVarState; // rdx
  const char *v9; // rax
  ConVar *v10; // rax
  IConVar *v11; // rax
  ConVar *v12; // rax
  ConVar *v13; // rax
  IConVar *v14; // rdx
  bool v15; // zf
  ConVar *EmptyConVar; // rax
  char pchName[264]; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v18; // [rsp+108h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  v4 = pConVar;
  if ( pConVar == 0 )
  {
    EmptyConVar = GetEmptyConVar();
    if ( EmptyConVar == 0 )
    {
      this->m_Info[0].m_pConVar = 0;
      v5 = 0;
      goto LABEL_3;
    }
    v4 = &EmptyConVar->IConVar;
  }
  this->m_Info[0].m_pConVar = v4;
  v5 = &v4[-6];
LABEL_3:
  this->m_Info[0].m_pConVarState = v5;
  v6 = this;
  v7 = 1;
  do
  {
    ++v7;
    m_pConVarState = v6->m_Info[1].m_pConVarState;
    this->m_Info[0].m_pConVar = v6->m_Info[1].m_pConVar;
    this->m_Info[0].m_pConVarState = m_pConVarState;
    v9 = (*(pConVar->_vptr_IConVar + 4))(pConVar);
    V_snprintf(pchName, 256, "%s%d", v9, v7);
    if ( g_pCVar != 0 )
      v10 = (*(*g_pCVar + 144LL))(g_pCVar, pchName);
    else
      v10 = GetEmptyConVar();
    if ( v10 != 0 )
    {
      v11 = &v10->IConVar;
      this->m_Info[0].m_pConVar = v11;
LABEL_8:
      v12 = &v11[-6];
      goto LABEL_9;
    }
    this->m_Info[0].m_pConVar = 0;
    v13 = GetEmptyConVar();
    v14 = &v13->IConVar;
    v15 = v13 == 0;
    v11 = 0;
    if ( !v15 )
      v11 = v14;
    this->m_Info[0].m_pConVar = v11;
    if ( v11 != 0 )
      goto LABEL_8;
    v12 = 0;
LABEL_9:
    v6 = (v6 + 16);
    this->m_Info[0].m_pConVarState = v12;
  }
  while ( v7 != 4 );
}


// SplitScreenConVarRef::IsValid  (line 1480, @0x0000000002f70c60, libserver.so)
// calls: GetEmptyConVar
bool __fastcall SplitScreenConVarRef::IsValid(const SplitScreenConVarRef *const this)
{
  IConVar *m_pConVar; // rbx
  ConVar *EmptyConVar; // rax
  IConVar *v3; // rdx

  m_pConVar = this->m_Info[0].m_pConVar;
  EmptyConVar = GetEmptyConVar();
  v3 = 0;
  if ( EmptyConVar != 0 )
    v3 = &EmptyConVar->IConVar;
  return m_pConVar != v3;
}


// ConVar_AppendFlags  (line 1511, @0x0000000002f6fa10, libserver.so)  // inlines: V_strncat<int>
// calls: V_snprintf, _V_strncat, __stack_chk_fail
// callers: ConVar_PrintDescription
// globals: s_DefaultAccessor, g_PrintConVarFlags
void __fastcall ConVar_AppendFlags(const ConCommandBase *var, char *buf, int bufsize)
{
  CDefaultAccessor *v5; // rbx
  const char *vptr_IConCommandBaseAccessor; // rcx
  char append[128]; // [rsp+10h] [rbp-C0h] BYREF
  unsigned __int64 v9; // [rsp+98h] [rbp-38h]

  v5 = g_PrintConVarFlags;
  v9 = __readfsqword(0x28u);
  do
  {
    while ( (*(var->_vptr_ConCommandBase + 4))(var, v5->_vptr_IConCommandBaseAccessor) == 0 )
    {
      v5 += 2;
      if ( v5 == &s_DefaultAccessor )
        return;
    }
    vptr_IConCommandBaseAccessor = v5[1]._vptr_IConCommandBaseAccessor;
    v5 += 2;
    V_snprintf(append, 128, " %s", vptr_IConCommandBaseAccessor);
    _V_strncat(buf, append, bufsize, 0xFFFFFFFFLL);
  }
  while ( v5 != &s_DefaultAccessor );
}


// AppendPrintf  (line 1525, @0x0000000002f6edb0, libserver.so)  // inlines: V_strncat<int>
// calls: V_vsnprintf, _V_strncat, __stack_chk_fail
// callers: ConVar_PrintDescription
void AppendPrintf(char *buf, int bufsize, const char *fmt, ...)
{
  va_list argptr; // [rsp+8h] [rbp-4E8h] BYREF
  char scratch[1032]; // [rsp+20h] [rbp-4D0h] BYREF
  unsigned __int64 v6; // [rsp+428h] [rbp-C8h]

  va_start(argptr, fmt);
  v6 = __readfsqword(0x28u);
  V_vsnprintf(scratch, 1023, fmt, argptr);
  scratch[1023] = 0;
  _V_strncat(buf, scratch, 4096, 0xFFFFFFFFLL);
}


// ConVar_PrintDescription  (line 1540, @0x0000000002f6fae0, libserver.so)  // inlines: GetDefault, GetFloat, GetMax, GetMin, GetString
// calls: V_snprintf, AppendPrintf, V_stricmp_fast, ConVar_AppendFlags, ConMsg(char const*,...), __stack_chk_fail
// strings: "\"%s\" = \"%s\"", " [%.3f server clamped to %.3f]", "\"%s\" ", "%-120s\n", "FCVAR_NEVER_AS_STRING", "%-120s - %s\n" (9 total)
void __fastcall ConVar_PrintDescription(const ConCommandBase *pVar)
{
  ConCommandBase *m_pNext; // rax
  char vptr_ConCommandBase; // r14
  char v4; // r15
  int v5; // r12d
  float v6; // xmm0_4
  const char *m_pszName; // r13
  const char *v8; // rax
  double v9; // xmm0_8
  double v10; // xmm0_8
  const char *v11; // rax
  const char *v12; // rax
  float fMax; // [rsp+8h] [rbp-1068h]
  float fMin; // [rsp+Ch] [rbp-1064h]
  char tempVal[32]; // [rsp+10h] [rbp-1060h] BYREF
  char outstr[4104]; // [rsp+30h] [rbp-1040h] BYREF
  unsigned __int64 v17; // [rsp+1038h] [rbp-38h]

  outstr[0] = 0;
  v17 = __readfsqword(0x28u);
  if ( (*(pVar->_vptr_ConCommandBase + 2))(pVar) != 0 )
  {
    v11 = (*(pVar->_vptr_ConCommandBase + 8))(pVar);
    AppendPrintf(outstr, 4096, "\"%s\" ", v11);
  }
  else
  {
    m_pNext = pVar[1].m_pNext;
    vptr_ConCommandBase = m_pNext[2]._vptr_ConCommandBase;
    fMin = *(&m_pNext[2]._vptr_ConCommandBase + 1);
    v4 = m_pNext[2].m_pNext;
    fMax = *(&m_pNext[2].m_pNext + 1);
    if ( (*(pVar->_vptr_ConCommandBase + 3))(pVar) != 0 || (*(pVar->_vptr_ConCommandBase + 4))(pVar, 4096) != 0 )
    {
      v5 = (*(pVar->_vptr_ConCommandBase + 21))(pVar);
      v6 = (*(pVar->_vptr_ConCommandBase + 20))(pVar);
      m_pszName = tempVal;
      if ( fabs(v5 - v6) >= 0.000001 )
        V_snprintf(tempVal, 32, "%f", v6);
      else
        V_snprintf(tempVal, 32, "%d", v5);
    }
    else
    {
      m_pszName = "FCVAR_NEVER_AS_STRING";
      if ( (pVar->m_nFlags & 0x1000) == 0 )
      {
        m_pszName = pVar[1].m_pNext[1].m_pszName;
        if ( m_pszName == 0 )
          m_pszName = "";
      }
    }
    v8 = (*(pVar->_vptr_ConCommandBase + 8))(pVar);
    AppendPrintf(outstr, 4096, "\"%s\" = \"%s\"", v8, m_pszName);
    if ( V_stricmp_fast(m_pszName, *&pVar[1].m_pNext[1].m_bRegistered) != 0 )
      AppendPrintf(outstr, 4096, " ( def. \"%s\" )", *&pVar[1].m_pNext[1].m_bRegistered);
    if ( vptr_ConCommandBase != 0 )
      AppendPrintf(outstr, 4096, " min. %f", fMin);
    if ( v4 != 0 )
      AppendPrintf(outstr, 4096, " max. %f", fMax);
    if ( (*(pVar->_vptr_ConCommandBase + 3))(pVar) != 0 )
    {
      v9 = (*(pVar->_vptr_ConCommandBase + 20))(pVar);
      if ( fabs(*&v9 - *(&pVar[1].m_pNext[1].m_pszHelpString + 1)) > 0.000099999997 )
      {
        v10 = (*(pVar->_vptr_ConCommandBase + 20))(pVar);
        AppendPrintf(outstr, 4096, " [%.3f server clamped to %.3f]", *(&pVar[1].m_pNext[1].m_pszHelpString + 1), *&v10);
      }
    }
  }
  ConVar_AppendFlags(pVar, outstr, 4096);
  v12 = (*(pVar->_vptr_ConCommandBase + 9))(pVar);
  if ( v12 != 0 && *v12 != 0 )
    ConMsg("%-120s - %s\n", outstr, v12);
  else
    ConMsg("%-120s\n", outstr);
}


