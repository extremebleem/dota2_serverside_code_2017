// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/vscriptgamesystem.cpp:92
class CScriptConvarAccessor {
private:

	CScriptConvarAccessor();
	ScriptVariant_t GetInt(const char *);
	ScriptVariant_t GetFloat(const char *);
	ScriptVariant_t GetBool(const char *);
	ScriptVariant_t GetStr(const char *);
	void SetInt(const char *, int);
	void SetFloat(const char *, float);
	void SetBool(const char *, bool);
	void SetStr(const char *, const char *);
	void RegisterConvar(const char *, const char *, const char *, int);
	void RegisterCommand(const char *, HSCRIPT, const char *, int);
	void CleanupCommands();
	HSCRIPT GetCommandClient();
	HSCRIPT GetDOTACommandClient();
	~CScriptConvarAccessor();

	// sizeof = 120
};

// src/game/shared/vscriptgamesystem.cpp:241
class CScriptConsoleCommand : public ICommandCallback {
public:

private:

	HSCRIPT m_hCallbackFn;  // +0x8
	const char * m_pszName;  // +0x18
	const char * m_pszHelpString;  // +0x20
	CScriptConsoleCommand(const CScriptConsoleCommand &);
	CScriptConsoleCommand(HSCRIPT, const char *, const char *, int);
	virtual ~CScriptConsoleCommand();
	virtual void CommandCallback(const CCommandContext &, const CCommand &);

	// vtable[0] CommandCallback
	// sizeof = 40
};

// src/game/shared/vscriptgamesystem.cpp:375
class CScriptGlobalSysAccessor {
	ScriptVariant_t CommandLineInt(const char *, int);
	ScriptVariant_t CommandLineFloat(const char *, float);
	ScriptVariant_t CommandLineStr(const char *, const char *);
	ScriptVariant_t CommandLineCheck(const char *);

	// sizeof = 1
};

// src/game/shared/vscriptgamesystem.cpp:424
class CScrollingScreenOverlay {
	struct TextLine_t {
		float m_time;  // +0x8
		int m_r;  // +0xc
		int m_g;  // +0x10
		int m_b;  // +0x14
		TextLine_t();
		~TextLine_t();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	float m_x;  // +0x28
	float m_y;  // +0x2c
	float m_duration;  // +0x30
	int m_iFirstLine;  // +0x34
	int m_nLines;  // +0x38
	int m_r;  // +0x3c
	int m_g;  // +0x40
	int m_b;  // +0x44
	CScrollingScreenOverlay(float, float, float, int, int, int, int, int);
	void SetXY(float, float);
	void SetTextDuration(float);
	void SetFirstLine(int);
	void SetNumLines(int);
	void AddText(const char *, int, int, int);
	void AddText(const char *);
	void Clear();
	void Draw();
	~CScrollingScreenOverlay();

	// sizeof = 72
};

// src/game/shared/vscriptgamesystem.cpp:620
class CScriptEntityIterator {
	HSCRIPT First();
	HSCRIPT Next(HSCRIPT);
	HSCRIPT CreateByClassname(const char *);
	HSCRIPT FindByClassname(HSCRIPT, const char *);
	ScriptVariant_t FindAllByClassname(const char *);
	HSCRIPT FindByName(HSCRIPT, const char *);
	ScriptVariant_t FindAllByName(const char *);
	HSCRIPT FindInSphere(HSCRIPT, const Vector &, float);
	ScriptVariant_t FindAllInSphere(const Vector &, float);
	HSCRIPT FindByTarget(HSCRIPT, const char *);
	ScriptVariant_t FindAllByTarget(const char *);
	HSCRIPT FindByModel(HSCRIPT, const char *);
	ScriptVariant_t FindAllByModel(const char *);
	HSCRIPT FindByModelWithin(HSCRIPT, const char *, const Vector &, float);
	HSCRIPT FindByNameNearest(const char *, const Vector &, float);
	HSCRIPT FindByNameWithin(HSCRIPT, const char *, const Vector &, float);
	ScriptVariant_t FindAllByNameWithin(const char *, const Vector &, float);
	HSCRIPT FindByClassnameNearest(const char *, const Vector &, float);
	HSCRIPT FindByClassnameWithin(HSCRIPT, const char *, const Vector &, float);
	ScriptVariant_t FindAllByClassnameWithin(const char *, const Vector &, float);

	// sizeof = 1
};

// src/game/shared/vscriptgamesystem.cpp:903
class CVScriptGameEventListener : public CGameEventListener {
	struct GameEventFunc_t {
		HSCRIPT m_hFunction;  // +0x0
		HSCRIPT m_hContext;  // +0x8
		int32 m_nReferenceNumber;  // +0x10

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t, CUtlMemory<CVScriptGameEventListener::GameEventFunc_t, int> >*, short unsigned int, bool (*)(int const&, int const&)> m_GameEventFunctions;  // +0x10
	int32 m_nNextReferenceNumber;  // +0x38

	HSCRIPT m_CollectGameEventCallbacksFunc;  // +0x40
	bool m_bHasLookedForCollectFunc;  // +0x48
	typedef CUtlVector<CVScriptGameEventListener::GameEventFunc_t, CUtlMemory<CVScriptGameEventListener::GameEventFunc_t, int> > GameEventListenerList_t;
	CVScriptGameEventListener(CVScriptGameEventListener &);
	CVScriptGameEventListener(const CVScriptGameEventListener &);
	CVScriptGameEventListener();
	void Init();
	void Term();
	int ListenToGameEvent(const char *, HSCRIPT, HSCRIPT);
	bool StopListeningToGameEvent(int);
	void StopListeningToAllGameEvents(HSCRIPT);
	virtual void FireGameEvent(IGameEvent *);
	void RegisterGameEventListenersInScope(HSCRIPT);
	virtual ~CVScriptGameEventListener();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[2] FireGameEvent
	// sizeof = 80
};

// src/game/shared/vscriptgamesystem.cpp:1911
class CEntityGroupCallback {
	HSCRIPT m_hCallback;  // +0x0
	CEntityGroupCallback(HSCRIPT);
	~CEntityGroupCallback();
	void CallBackAndDeleteMe(CBaseEntity *, const CEntityKeyValues *);

	// sizeof = 8
};

// src/game/shared/vscriptgamesystem.cpp:1947
class CEntityListSpawnCallback {
private:

	HSCRIPT m_hCallback;  // +0x0
	CEntityListSpawnCallback(HSCRIPT);
	~CEntityListSpawnCallback();
	void CallBackAndDeleteMe(SpawnGroupHandle_t, const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);

	// sizeof = 8
};

// src/game/shared/vscriptgamesystem.cpp:2215
class CScriptSpawnGroupEntityFilterProxy : public ISpawnGroupEntityFilter {
public:

	CScriptSpawnGroupEntityFilterProxy(CScriptSpawnGroupEntityFilterProxy &);
	CScriptSpawnGroupEntityFilterProxy(const CScriptSpawnGroupEntityFilterProxy &);
	CScriptSpawnGroupEntityFilterProxy();
	virtual void FilterSpawnGroupEntities(SpawnGroupHandle_t, bool, const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *, CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > &);
	virtual ~CScriptSpawnGroupEntityFilterProxy();

	// vtable[2] FilterSpawnGroupEntities
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CScriptConvarAccessor::CScriptConvarAccessor  (line 92, @0x0000000001f9b7c0, libserver.so)  // inlines: CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, ResetDbgInfo, SetCompareType, SetLessFunc
// callers: __static_initialization_and_destruction_0
// globals: FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CScriptConvarAccessor::CScriptConvarAccessor(CScriptConvarAccessor *const this)
{
  this->m_conCommands.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_conCommands.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_conCommands.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_conCommands.m_Elements.m_Tree.m_Root = -1;
  this->m_conCommands.m_Elements.m_Tree.m_NumElements = 0;
  this->m_conCommands.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_conCommands.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_conCommands.m_Elements.m_Tree.m_pElements = 0;
  this->m_conCommands.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_conVars.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_conVars.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_conVars.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_conVars.m_Elements.m_Tree.m_Root = -1;
  this->m_conVars.m_Elements.m_Tree.m_NumElements = 0;
  this->m_conVars.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_conVars.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_conVars.m_Elements.m_Tree.m_pElements = 0;
  this->m_conVars.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_stringBuffers.m_Size = 0;
  this->m_stringBuffers.m_Memory.m_pMemory = 0;
  this->m_stringBuffers.m_Memory.m_nAllocationCount = 0;
  this->m_stringBuffers.m_Memory.m_nGrowSize = 0;
}


// CScriptConvarAccessor::~CScriptConvarAccessor  (line 92, @0x0000000001f9b870, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlDict<ConVar*, int>::Purge, CUtlRBTree<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CUtlDict<CScriptConsoleCommand*, int>::Purge, CUtlRBTree<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CUtlMemory<char const*, int>::Purge
void __fastcall CScriptConvarAccessor::~CScriptConvarAccessor(CScriptConvarAccessor *const this)
{
  bool v2; // zf
  CUtlVectorBase<char const*,CUtlMemory<char const*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_stringBuffers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_stringBuffers.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_stringBuffers.m_Memory;
    CUtlMemory<char const*,int>::Purge(&this->m_stringBuffers.m_Memory);
    if ( (this->m_stringBuffers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char const*,int>::Purge(p_m_Memory);
  }
  CUtlDict<ConVar *,int>::Purge(&this->m_conVars);
  CUtlRBTree<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_conVars.m_Elements.m_Tree);
  if ( (this->m_conVars.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_conVars.m_Elements.m_Tree.m_Elements);
  CUtlDict<CScriptConsoleCommand *,int>::Purge(&this->m_conCommands);
  CUtlRBTree<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_conCommands.m_Elements.m_Tree);
  if ( (this->m_conCommands.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_conCommands.m_Elements.m_Tree.m_Elements);
}


// CScriptConvarAccessor::GetInt  (line 125, @0x0000000001f2b060, libserver.so)  // inlines: CVariantBase, GetInt
// calls: ConVarRef::ConVarRef, ConVarRef::IsValid
__int64 __fastcall CScriptConvarAccessor::GetInt(__int64 a1, CScriptConvarAccessor *const this, const char *cvar)
{
  int m_nValue; // eax
  ConVarRef cref; // [rsp+0h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&cref, cvar);
  if ( ConVarRef::IsValid(&cref) )
  {
    m_nValue = cref.m_pConVarState->m_Value.m_nValue;
    *(a1 + 8) = 5;
    *(a1 + 10) = 0;
    *a1 = m_nValue;
  }
  else
  {
    *a1 = 0;
    *(a1 + 8) = 0;
    *(a1 + 10) = 0;
  }
  return a1;
}


// CScriptConvarAccessor::GetFloat  (line 139, @0x0000000001f2b0e0, libserver.so)  // inlines: CVariantBase, GetFloat
// calls: ConVarRef::ConVarRef, ConVarRef::IsValid
__int64 __fastcall CScriptConvarAccessor::GetFloat(__int64 a1, CScriptConvarAccessor *const this, const char *cvar)
{
  float m_fValue; // xmm0_4
  ConVarRef cref; // [rsp+0h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&cref, cvar);
  if ( ConVarRef::IsValid(&cref) )
  {
    m_fValue = cref.m_pConVarState->m_Value.m_fValue;
    *(a1 + 8) = 1;
    *(a1 + 10) = 0;
    *a1 = m_fValue;
    return a1;
  }
  else
  {
    *a1 = 0;
    *(a1 + 8) = 0;
    *(a1 + 10) = 0;
    return a1;
  }
}


// CScriptConvarAccessor::GetBool  (line 153, @0x0000000001f2b160, libserver.so)  // inlines: CVariantBase, GetBool, GetInt
// calls: ConVarRef::ConVarRef, ConVarRef::IsValid
__int64 __fastcall CScriptConvarAccessor::GetBool(__int64 a1, CScriptConvarAccessor *const this, const char *cvar)
{
  int m_nValue; // r12d
  ConVarRef cref; // [rsp+0h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&cref, cvar);
  if ( ConVarRef::IsValid(&cref) )
  {
    m_nValue = cref.m_pConVarState->m_Value.m_nValue;
    *(a1 + 8) = 6;
    *(a1 + 10) = 0;
    *a1 = m_nValue != 0;
    return a1;
  }
  else
  {
    *a1 = 0;
    *(a1 + 8) = 0;
    *(a1 + 10) = 0;
    return a1;
  }
}


// CScriptConvarAccessor::GetStr  (line 167, @0x0000000001f3e6f0, libserver.so)  // inlines: CVariantBase, CopyData, GetString
// calls: ConVarRef::ConVarRef, ConVarRef::IsValid, CVariantBase<CVariantDefaultAllocator>::Free
CVariantBase<CVariantDefaultAllocator> *__fastcall CScriptConvarAccessor::GetStr(
        CVariantBase<CVariantDefaultAllocator> *a1,
        CScriptConvarAccessor *const this,
        const char *cvar)
{
  char *m_pszString; // r12
  ConVarRef cref; // [rsp+0h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&cref, cvar);
  if ( ConVarRef::IsValid(&cref) )
  {
    m_pszString = cref.m_pConVarState->m_Value.m_pszString;
    a1->m_type = 0;
    a1->m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::Free(a1);
    a1->m_type = 30;
    a1->m_uint64 = m_pszString;
    return a1;
  }
  else
  {
    a1->m_uint64 = 0;
    a1->m_type = 0;
    a1->m_flags = 0;
    return a1;
  }
}


// CScriptConvarAccessor::SetInt  (line 181, @0x0000000001f2afe0, libserver.so)  // inlines: SetValue
// calls: ConVarRef::ConVarRef, ConVarRef::IsValid
void __fastcall CScriptConvarAccessor::SetInt(CScriptConvarAccessor *const this, const char *pszVarName, int nValue)
{
  ConVarRef cref; // [rsp+0h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&cref, pszVarName);
  if ( ConVarRef::IsValid(&cref) )
    (*(cref.m_pConVar->_vptr_IConVar + 2))(cref.m_pConVar, nValue);
}


// CScriptConvarAccessor::SetFloat  (line 191, @0x0000000001f2af30, libserver.so)  // inlines: SetValue
// calls: ConVarRef::ConVarRef, ConVarRef::IsValid
void __fastcall CScriptConvarAccessor::SetFloat(
        CScriptConvarAccessor *const this,
        const char *pszVarName,
        float a3,
        float flValue)
{
  ConVarRef cref; // [rsp+10h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&cref, pszVarName);
  if ( ConVarRef::IsValid(&cref) )
    (*(cref.m_pConVar->_vptr_IConVar + 1))(cref.m_pConVar, a3);
}


// CScriptConvarAccessor::SetBool  (line 201, @0x0000000001f2b020, libserver.so)  // inlines: SetValue
// calls: ConVarRef::ConVarRef, ConVarRef::IsValid
void __fastcall CScriptConvarAccessor::SetBool(CScriptConvarAccessor *const this, const char *pszVarName, bool bValue)
{
  ConVarRef cref; // [rsp+0h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&cref, pszVarName);
  if ( ConVarRef::IsValid(&cref) )
    (*(cref.m_pConVar->_vptr_IConVar + 2))(cref.m_pConVar, bValue);
}


// CScriptConvarAccessor::SetStr  (line 211, @0x0000000001f2aef0, libserver.so)  // inlines: SetValue
// calls: ConVarRef::ConVarRef, ConVarRef::IsValid
void __fastcall CScriptConvarAccessor::SetStr(
        CScriptConvarAccessor *const this,
        const char *pszVarName,
        const char *pszValue)
{
  ConVarRef cref; // [rsp+0h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&cref, pszVarName);
  if ( ConVarRef::IsValid(&cref) )
    cref.m_pConVar->SetValue(pszValue);
}


// CScriptConvarAccessor::RegisterConvar  (line 221, @0x0000000001f70310, libserver.so)  // inlines: AddToTail, CopyConstruct<char const*>, Element, Find, GrowMemory, LeftChild, RightChild, operator(), operator[]
// calls: strdup, operator new, ConVar::ConVar, LoggingSystem_IsChannelEnabled, CUtlDict<ConVar*, int>::Insert, LoggingSystem_Log, CUtlMemory<char const*, int>::Grow, operator delete, _Unwind_Resume
// strings: "RegisterConVar 0x%p = %s\n", "CScriptConvarAccessor::RegisterConvar convar %s already registered\n"
void __fastcall CScriptConvarAccessor::RegisterConvar(
        CScriptConvarAccessor *const this,
        const char *pszVarName,
        const char *pszDefaultValue,
        const char *pszHelpString,
        int nFlags)
{
  int m_Left; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,ConVar*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v8; // rax
  unsigned __int64 v9; // r15
  char *v10; // rax
  __int64 m_Size; // r13
  const char *v12; // rbx
  int v13; // edx
  const char **m_pMemory; // rax
  int v15; // edx
  const char **v16; // rax
  char *v17; // rax
  __int64 v18; // rdx
  const char *v19; // r13
  int v20; // r14d
  const char **v21; // rax
  int v22; // r14d
  const char **v23; // rax
  char *v24; // r15
  int v25; // eax
  const char **v26; // rax
  ConVar *v27; // r14
  int v28; // [rsp+8h] [rbp-58h]
  ConVar *pNewConvar; // [rsp+20h] [rbp-40h] BYREF

  if ( pszVarName == 0 || (m_Left = this->m_conVars.m_Elements.m_Tree.m_Root, pNewConvar = pszVarName, m_Left == -1) )
  {
LABEL_8:
    v10 = strdup(pszVarName);
    m_Size = this->m_stringBuffers.m_Size;
    v12 = v10;
    v13 = this->m_stringBuffers.m_Size;
    if ( m_Size == this->m_stringBuffers.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char const*,int>::Grow(&this->m_stringBuffers.m_Memory, 1);
      v13 = this->m_stringBuffers.m_Size;
    }
    m_pMemory = this->m_stringBuffers.m_Memory.m_pMemory;
    v15 = v13 + 1;
    this->m_stringBuffers.m_Size = v15;
    v16 = &m_pMemory[m_Size];
    if ( v16 != 0 )
    {
      *v16 = v12;
      v15 = this->m_stringBuffers.m_Size;
    }
    v28 = v15;
    v17 = strdup(pszDefaultValue);
    v18 = v28;
    v19 = v17;
    v20 = v28;
    if ( this->m_stringBuffers.m_Memory.m_nAllocationCount == v28 )
    {
      CUtlMemory<char const*,int>::Grow(&this->m_stringBuffers.m_Memory, 1);
      v20 = this->m_stringBuffers.m_Size;
      v18 = v28;
    }
    v21 = this->m_stringBuffers.m_Memory.m_pMemory;
    v22 = v20 + 1;
    this->m_stringBuffers.m_Size = v22;
    v23 = &v21[v18];
    if ( v23 != 0 )
    {
      *v23 = v19;
      v22 = this->m_stringBuffers.m_Size;
    }
    v24 = strdup(pszHelpString);
    v25 = v22;
    if ( this->m_stringBuffers.m_Memory.m_nAllocationCount == v22 )
    {
      CUtlMemory<char const*,int>::Grow(&this->m_stringBuffers.m_Memory, 1);
      v25 = this->m_stringBuffers.m_Size;
    }
    this->m_stringBuffers.m_Size = v25 + 1;
    v26 = &this->m_stringBuffers.m_Memory.m_pMemory[v22];
    if ( v26 != 0 )
      *v26 = v24;
    v27 = operator new(0x88u);
    ConVar::ConVar(v27, v12, v19, nFlags, v24);
    pNewConvar = v27;
    if ( LoggingSystem_IsChannelEnabled(LOG_CONSOLE, 1) != 0 )
      LoggingSystem_Log(LOG_CONSOLE, 1, "RegisterConVar 0x%p = %s\n", pNewConvar, v12);
    CUtlDict<ConVar *,int>::Insert(&this->m_conVars, v12, &pNewConvar);
  }
  else
  {
    v8 = this->m_conVars.m_Elements.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = m_Left;
        if ( !this->m_conVars.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&pNewConvar, &v8[v9].m_Data) )
          break;
        v8 = this->m_conVars.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Left = v8[m_Left].m_Left;
        if ( m_Left == -1 )
          goto LABEL_8;
      }
      if ( !this->m_conVars.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              &this->m_conVars.m_Elements.m_Tree.m_Elements.m_pMemory[v9].m_Data,
              &pNewConvar) )
        break;
      v8 = this->m_conVars.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Left = v8[v9].m_Right;
      if ( m_Left == -1 )
        goto LABEL_8;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_CONSOLE, 2) != 0 )
      LoggingSystem_Log(
        LOG_CONSOLE,
        2,
        "CScriptConvarAccessor::RegisterConvar convar %s already registered\n",
        pszVarName);
  }
}


// CScriptConsoleCommand::~CScriptConsoleCommand  (line 254, @0x0000000001f73c90, libserver.so)
// calls: operator delete
// globals: g_pScriptVM
void __fastcall CScriptConsoleCommand::~CScriptConsoleCommand(CScriptConsoleCommand *const this)
{
  ConCommand *m_pConCommand; // rdi

  this->_vptr_ICommandCallback = &off_3FCEB70;
  (*(*g_pCVar + 104LL))(g_pCVar, this->m_pConCommand);
  m_pConCommand = this->m_pConCommand;
  if ( m_pConCommand != 0 )
    (*(m_pConCommand->_vptr_ConCommandBase + 1))(m_pConCommand);
  (*(*g_pScriptVM + 152LL))(g_pScriptVM, this->m_hCallbackFn);
  operator delete(this->m_pszName);
  operator delete(this->m_pszHelpString);
}


// CScriptConsoleCommand::~CScriptConsoleCommand  (line 254, @0x0000000001f78bd0, libserver.so)  // inlines: ~CScriptConsoleCommand
// calls: operator delete
// globals: g_pScriptVM
void __fastcall CScriptConsoleCommand::~CScriptConsoleCommand(CScriptConsoleCommand *const this)
{
  ConCommand *m_pConCommand; // rdi

  this->_vptr_ICommandCallback = &off_3FCEB70;
  (*(*g_pCVar + 104LL))(g_pCVar, this->m_pConCommand);
  m_pConCommand = this->m_pConCommand;
  if ( m_pConCommand != 0 )
    (*(m_pConCommand->_vptr_ConCommandBase + 1))(m_pConCommand);
  (*(*g_pScriptVM + 152LL))(g_pScriptVM, this->m_hCallbackFn);
  operator delete(this->m_pszName);
  operator delete(this->m_pszHelpString);
  operator delete(this);
}


// CScriptConsoleCommand::CommandCallback  (line 264, @0x0000000001f874a0, libserver.so)  // inlines: Arg, CVariantBase, Construct<CVariantBase<CVariantDefaultAllocator>, char const*>, CopyData, Free, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume, __stack_chk_fail
// globals: g_pScriptVM
void __fastcall CScriptConsoleCommand::CommandCallback(
        CScriptConsoleCommand *const this,
        const CCommandContext *const ctx,
        const CCommand *const command)
{
  unsigned __int64 v3; // rbx
  int m_nArgc; // r12d
  int v5; // r8d
  __int64 v6; // rsi
  void *v7; // rsp
  unsigned __int64 v8; // rax
  const char *v9; // rcx
  HSCRIPT m_hCallbackFn; // rsi
  __int64 v11; // r12
  ScriptVariant_t result; // [rsp+10h] [rbp-40h] BYREF
  _QWORD v13[6]; // [rsp+20h] [rbp-30h] BYREF

  v3 = 0;
  v13[1] = __readfsqword(0x28u);
  m_nArgc = command->m_nArgc;
  if ( command->m_nArgc > 0 )
  {
    v5 = command->m_nArgc;
    v6 = 0;
    v7 = alloca(16LL * m_nArgc + 32);
    v3 = v13 & 0xFFFFFFFFFFFFFFEFLL;
    v8 = v13 & 0xFFFFFFFFFFFFFFEFLL;
    while ( 1 )
    {
      v9 = "";
      if ( v5 > v6 )
        v9 = command->m_ppArgv[v6];
      if ( v8 != 0 )
      {
        *v8 = v9;
        *(v8 + 8) = 30;
      }
      ++v6;
      v8 += 16LL;
      if ( m_nArgc <= v6 )
        break;
      v5 = command->m_nArgc;
    }
  }
  result.m_type = 0;
  result.m_flags = 0;
  m_hCallbackFn = this->m_hCallbackFn;
  result.m_uint64 = 0;
  (*(*g_pScriptVM + 160LL))(g_pScriptVM, m_hCallbackFn, v3, m_nArgc, &result, 0, 1);
  if ( m_nArgc > 0 )
  {
    v11 = v3 + 16LL * (m_nArgc - 1) + 16;
    do
    {
      if ( (*(v3 + 10) & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v3);
        *(v3 + 10) &= ~1u;
      }
      *v3 = 0;
      v3 += 16LL;
      *(v3 - 8) = 0;
    }
    while ( v3 != v11 );
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&result);
}


// CScriptConvarAccessor::RegisterCommand  (line 295, @0x0000000001f6f0d0, libserver.so)  // inlines: CScriptConsoleCommand, Element, Find, FreeNode, LeftChild, RemoveAt, RightChild, SetLeftChild, SetRightChild, operator(), operator[]
// calls: operator new, strdup, ConCommand::ConCommand, CUtlDict<CScriptConsoleCommand*, int>::Insert, LoggingSystem_IsChannelEnabled, CUtlRBTree<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Unlink, LoggingSystem_Log, operator delete, _Unwind_Resume
// strings: "CScriptConvarAccessor::RegisterCommand replacing command already registered: %s\n"
// globals: g_pScriptVM
void __fastcall CScriptConvarAccessor::RegisterCommand(
        CScriptConvarAccessor *const this,
        const char *pszCommandName,
        HSCRIPT hCallbackFn,
        const char *pszHelpString,
        int nFlags)
{
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v9; // r15
  CScriptConsoleCommand *v10; // r12
  char *v11; // rax
  IScriptVM *v12; // rdi
  ConCommand *v13; // r13
  UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v14; // rax
  CUtlMap<char const*,CScriptConsoleCommand*,int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // rdi
  CScriptConsoleCommand *pNewCommand; // [rsp+20h] [rbp-40h] BYREF

  if ( pszCommandName != 0 )
  {
    m_Root = this->m_conCommands.m_Elements.m_Tree.m_Root;
    pNewCommand = pszCommandName;
    if ( m_Root != -1 )
    {
      m_pMemory = this->m_conCommands.m_Elements.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = m_Root;
          if ( this->m_conCommands.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&pNewCommand, &m_pMemory[v9].m_Data) == 0 )
            break;
          m_pMemory = this->m_conCommands.m_Elements.m_Tree.m_Elements.m_pMemory;
          m_Root = m_pMemory[m_Root].m_Left;
          if ( m_Root == -1 )
            goto LABEL_8;
        }
        if ( this->m_conCommands.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
               &this->m_conCommands.m_Elements.m_Tree.m_Elements.m_pMemory[v9].m_Data,
               &pNewCommand) == 0 )
          break;
        m_pMemory = this->m_conCommands.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[v9].m_Right;
        if ( m_Root == -1 )
          goto LABEL_8;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_CONSOLE, 2) != 0 )
        LoggingSystem_Log(
          LOG_CONSOLE,
          2,
          "CScriptConvarAccessor::RegisterCommand replacing command already registered: %s\n",
          pszCommandName);
      v14 = &this->m_conCommands.m_Elements.m_Tree.m_Elements.m_pMemory[v9];
      elem = v14->m_Data.elem;
      if ( elem != 0 )
      {
        (*(elem->_vptr_ICommandCallback + 2))(elem);
        v14 = &this->m_conCommands.m_Elements.m_Tree.m_Elements.m_pMemory[v9];
      }
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v14->m_Data.key);
      CUtlRBTree<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CScriptConsoleCommand *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Unlink(
        &this->m_conCommands.m_Elements.m_Tree,
        m_Root);
      this->m_conCommands.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Left = m_Root;
      this->m_conCommands.m_Elements.m_Tree.m_Elements.m_pMemory[v9].m_Right = this->m_conCommands.m_Elements.m_Tree.m_FirstFree;
      --this->m_conCommands.m_Elements.m_Tree.m_NumElements;
      this->m_conCommands.m_Elements.m_Tree.m_FirstFree = m_Root;
    }
  }
LABEL_8:
  v10 = operator new(0x28u);
  v10->_vptr_ICommandCallback = &off_3FCEB70;
  v10->m_pszName = strdup(pszCommandName);
  v11 = 0;
  if ( pszHelpString != 0 )
    v11 = strdup(pszHelpString);
  v12 = g_pScriptVM;
  v10->m_pszHelpString = v11;
  v10->m_hCallbackFn = (*(*v12 + 456LL))(v12, hCallbackFn);
  v13 = operator new(0x60u);
  ConCommand::ConCommand(v13, v10->m_pszName, v10, v10->m_pszHelpString, nFlags | 0x10000004, 0);
  v10->m_pConCommand = v13;
  pNewCommand = v10;
  CUtlDict<CScriptConsoleCommand *,int>::Insert(&this->m_conCommands, pszCommandName, &pNewCommand);
}


// CScriptConvarAccessor::CleanupCommands  (line 309, @0x0000000001f631f0, libserver.so)  // inlines: First, FirstInorder, LeftChild, Next, NextInorder, RemoveAll, end, operator[]
// calls: CUtlDict<CScriptConsoleCommand*, int>::PurgeAndDeleteElements, CUtlRBTree<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlDict<ConVar*, int>::PurgeAndDeleteElements, free
// callers: CVScriptGameSystem::VScriptTerm
// strings: "Removing 0x%p %s\n"
void __fastcall CScriptConvarAccessor::CleanupCommands(CScriptConvarAccessor *const this)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,ConVar*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v4; // rdx
  int m_Left; // ecx
  CUtlMap<char const*,ConVar*,int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // r12
  const char *v7; // rax
  const char **v8; // rbx
  const char **v9; // r12
  void *v10; // rdi
  CUtlDict<ConVar*,int> *p_m_conVars; // [rsp+8h] [rbp-38h]

  CUtlDict<CScriptConsoleCommand *,int>::PurgeAndDeleteElements(&this->m_conCommands);
  m_Root = this->m_conVars.m_Elements.m_Tree.m_Root;
  if ( m_Root == -1 )
  {
    p_m_conVars = &this->m_conVars;
  }
  else
  {
    m_pMemory = this->m_conVars.m_Elements.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( m_pMemory[m_Left].m_Left != -1 )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
      v4 = m_Left;
    }
    p_m_conVars = &this->m_conVars;
    while ( 1 )
    {
      elem = m_pMemory[v4].m_Data.elem;
      if ( LoggingSystem_IsChannelEnabled(LOG_CONSOLE, 1) != 0 )
      {
        v7 = (*(elem->_vptr_ConCommandBase + 8))(elem);
        LoggingSystem_Log(LOG_CONSOLE, 1, "Removing 0x%p %s\n", elem, v7);
      }
      (*(*g_pCVar + 104LL))(g_pCVar, elem);
      m_Root = CUtlRBTree<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ConVar *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &p_m_conVars->m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_conVars.m_Elements.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlDict<ConVar *,int>::PurgeAndDeleteElements(p_m_conVars);
  v8 = this->m_stringBuffers.m_Memory.m_pMemory;
  v9 = &v8[this->m_stringBuffers.m_Size];
  while ( v9 != v8 )
  {
    v10 = *v8++;
    free(v10);
  }
  this->m_stringBuffers.m_Size = 0;
}


// CScriptConvarAccessor::GetCommandClient  (line 326, @0x0000000001f2f340, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: UTIL_GetCommandClient, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CScriptConvarAccessor::GetCommandClient(CScriptConvarAccessor *const this)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *pPlayer; // [rsp+8h] [rbp-8h]

  CommandClient = UTIL_GetCommandClient();
  if ( CommandClient == 0 )
    return 0;
  if ( CommandClient->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return CommandClient->m_pEntity->m_hPublicScope.m_hScope;
  pPlayer = CommandClient;
  CEntityInstance::CreatePublicScriptScope(CommandClient, 0);
  return pPlayer->m_pEntity->m_hPublicScope.m_hScope;
}


// CScriptConvarAccessor::GetDOTACommandClient  (line 339, @0x0000000001f2f780, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToDOTAPlayer, ToHScript
// calls: UTIL_GetCommandClient, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CScriptConvarAccessor::GetDOTACommandClient(CScriptConvarAccessor *const this)
{
  CBasePlayer *CommandClient; // rax
  CEntityInstance *v2; // rbx
  HSCRIPT result; // rax

  CommandClient = UTIL_GetCommandClient();
  v2 = CommandClient;
  if ( CommandClient == 0 || (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) == 0 )
    return 0;
  result = v2->m_pEntity->m_hPublicScope.m_hScope;
  if ( result == 0 )
  {
    CEntityInstance::CreatePublicScriptScope(v2, 0);
    return v2->m_pEntity->m_hPublicScope.m_hScope;
  }
  return result;
}


// GetScriptDesc<CScriptConvarAccessor>  (line 352, @0x0000000001f49500, libserver.so)  // inlines: AddParameterType, CUtlMemory, CUtlVector, CUtlVectorBase, Finalize, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CScriptConvarAccessor*, CScriptConvarAccessor, CVariantBase<CVariantDefaultAllocator>, char const*>, ScriptDeduceFunctionSignature<CScriptConvarAccessor*, CScriptConvarAccessor, HSCRIPT__*>, ScriptDeduceFunctionSignature<CScriptConvarAccessor*, CScriptConvarAccessor, void, char const*, HSCRIPT__*, char const*, int>, ScriptDeduceFunctionSignature<CScriptConvarAccessor*, CScriptConvarAccessor, void, char const*, bool>, ScriptDeduceFunctionSignature<CScriptConvarAccessor*, CScriptConvarAccessor, void, char const*, char const*, char const*, int>, ScriptDeduceFunctionSignature<CScriptConvarAccessor*, CScriptConvarAccessor, void, char const*, char const*>, ScriptDeduceFunctionSignature<CScriptConvarAccessor*, CScriptConvarAccessor, void, char const*, float>, ScriptDeduceFunctionSignature<CScriptConvarAccessor*, CScriptConvarAccessor, void, char const*, int>, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >::AddToTail
// callers: CVScriptGameSystem::InstallScriptBindings
// strings: "!Access to convar functions", "CScriptConvarAccessor", "GetInt(name) : returns the convar as an int. May return null if no such convar.", "GetInt", "GetFloat(name) : returns the convar as a float. May return null if no such convar.", "GetFloat" (26 total)
// globals: g_pCScriptConvarAccessor_ScriptDesc, CMemberScriptBinding1<CScriptConvarAccessor *,CVariantBase<CVariantDefaultAllocator> (CScriptConvarAccessor::*)(char const*),CVariantBase<CVariantDefaultAllocat, CScriptConvarAccessor::GetInt(char const*), CScriptConvarAccessor::GetFloat(char const*), CScriptConvarAccessor::GetBool(char const*), CScriptConvarAccessor::GetStr(char const*), CMemberScriptBinding2<CScriptConvarAccessor *,void (CScriptConvarAccessor::*)(char const*,int),void,char const*,int>::Call(void *,void *,CVariantBase<CVariantDe, CScriptConvarAccessor::SetInt(char const*,int) (21 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CScriptConvarAccessor>(CScriptConvarAccessor *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // r12
  CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int> > *p_m_FunctionBindings; // rbx
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rdx
  int v7; // eax
  char v8; // dl
  char v9; // di
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rdx
  int v13; // eax
  char v14; // dl
  char v15; // di
  __int64 v16; // rcx
  char v17; // dl
  __int64 v18; // rax
  int v19; // edx
  char v20; // al
  char v21; // di
  __int64 v22; // rcx
  char v23; // dl
  __int64 v24; // rax
  int v25; // edx
  char v26; // al
  char v27; // di
  __int64 v28; // rcx
  char v29; // dl
  char v30; // al
  int v31; // edx
  char v32; // al
  char v33; // di
  __int64 v34; // rcx
  char v35; // dl
  char v36; // al
  int v37; // edx
  char v38; // al
  char v39; // di
  __int64 v40; // rcx
  char v41; // dl
  char v42; // al
  int v43; // edx
  char v44; // al
  char v45; // di
  __int64 v46; // rcx
  char v47; // dl
  char v48; // al
  int v49; // edx
  char v50; // al
  char v51; // di
  __int64 v52; // rcx
  char v53; // dl
  char v54; // al
  int v55; // edx
  char v56; // al
  char v57; // di
  __int64 v58; // rcx
  char v59; // dl
  char v60; // al
  int v61; // edx
  char v62; // al
  char v63; // di
  __int64 v64; // rcx
  int v65; // edx
  int v66; // edx
  char v67; // al
  char v68; // di
  __int64 v69; // rcx
  int v70; // edx
  int v71; // edx
  char v72; // al
  char v73; // di

  result = g_pCScriptConvarAccessor_ScriptDesc;
  if ( g_pCScriptConvarAccessor_ScriptDesc == 0 )
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
    g_pCScriptConvarAccessor_ScriptDesc = v2;
    v2->m_pszDescription = "!Access to convar functions";
    v2->m_pszScriptName = "Convars";
    v2->m_pszClassname = "CScriptConvarAccessor";
    v4 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(&v2->m_FunctionBindings)];
    *(v4 + 24) = 32;
    *(v4 + 16) = "GetInt(name) : returns the convar as an int. May return null if no such convar.";
    *v4 = "GetInt";
    *(v4 + 8) = "GetInt";
    v5 = *(v4 + 26);
    v6 = v5++;
    *(v4 + v6 + 27) = 30;
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
    *(v4 + 48) = CMemberScriptBinding1<CScriptConvarAccessor *,CVariantBase<CVariantDefaultAllocator> (CScriptConvarAccessor::*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
    *(v4 + 56) = CScriptConvarAccessor::GetInt;
    v10 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v10 + 24) = 32;
    *(v10 + 16) = "GetFloat(name) : returns the convar as a float. May return null if no such convar.";
    *v10 = "GetFloat";
    *(v10 + 8) = "GetFloat";
    v11 = *(v10 + 26);
    v12 = v11++;
    *(v10 + v12 + 27) = 30;
    *(v10 + 26) = v11;
    v13 = v11 - 1;
    *(v10 + 25) = 0;
    if ( v13 >= 0 && *(v10 + v13 + 27) == 32 )
    {
      v14 = 1;
      do
      {
        --v13;
        v15 = v14;
        if ( v13 == -1 )
        {
          *(v10 + 25) = v14;
          goto LABEL_14;
        }
        ++v14;
      }
      while ( *(v10 + v13 + 27) == 32 );
      *(v10 + 25) = v15;
    }
LABEL_14:
    *(v10 + 64) = 1;
    *(v10 + 48) = CMemberScriptBinding1<CScriptConvarAccessor *,CVariantBase<CVariantDefaultAllocator> (CScriptConvarAccessor::*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
    *(v10 + 56) = CScriptConvarAccessor::GetFloat;
    v16 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v17 = *(v16 + 26);
    *(v16 + 24) = 32;
    *(v16 + 16) = "GetBool(name) : returns the convar as a boolean flag.";
    *v16 = "GetBool";
    *(v16 + 8) = "GetBool";
    v18 = v17++;
    *(v16 + v18 + 27) = 30;
    *(v16 + 26) = v17;
    v19 = v17 - 1;
    *(v16 + 25) = 0;
    if ( v19 >= 0 && *(v16 + v19 + 27) == 32 )
    {
      v20 = 1;
      do
      {
        --v19;
        v21 = v20;
        if ( v19 == -1 )
        {
          *(v16 + 25) = v20;
          goto LABEL_20;
        }
        ++v20;
      }
      while ( *(v16 + v19 + 27) == 32 );
      *(v16 + 25) = v21;
    }
LABEL_20:
    *(v16 + 64) = 1;
    *(v16 + 48) = CMemberScriptBinding1<CScriptConvarAccessor *,CVariantBase<CVariantDefaultAllocator> (CScriptConvarAccessor::*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
    *(v16 + 56) = CScriptConvarAccessor::GetBool;
    v22 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v23 = *(v22 + 26);
    *(v22 + 24) = 32;
    *(v22 + 16) = "GetStr(name) : returns the convar as a string. May return null if no such convar.";
    *v22 = "GetStr";
    *(v22 + 8) = "GetStr";
    v24 = v23++;
    *(v22 + v24 + 27) = 30;
    *(v22 + 26) = v23;
    v25 = v23 - 1;
    *(v22 + 25) = 0;
    if ( v25 >= 0 && *(v22 + v25 + 27) == 32 )
    {
      v26 = 1;
      do
      {
        --v25;
        v27 = v26;
        if ( v25 == -1 )
        {
          *(v22 + 25) = v26;
          goto LABEL_26;
        }
        ++v26;
      }
      while ( *(v22 + v25 + 27) == 32 );
      *(v22 + 25) = v27;
    }
LABEL_26:
    *(v22 + 64) = 1;
    *(v22 + 48) = CMemberScriptBinding1<CScriptConvarAccessor *,CVariantBase<CVariantDefaultAllocator> (CScriptConvarAccessor::*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
    *(v22 + 56) = CScriptConvarAccessor::GetStr;
    v28 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v29 = *(v28 + 26);
    *(v28 + 24) = 0;
    *(v28 + 16) = "SetInt(name, val) : sets the value of the convar to the int.";
    *v28 = "SetInt";
    *(v28 + 8) = "SetInt";
    *(v28 + v29 + 27) = 30;
    v30 = v29 + 1;
    v29 += 2;
    *(v28 + v30 + 27) = 5;
    *(v28 + 26) = v29;
    v31 = v29 - 1;
    *(v28 + 25) = 0;
    if ( v31 >= 0 && *(v28 + v31 + 27) == 32 )
    {
      v32 = 1;
      do
      {
        --v31;
        v33 = v32;
        if ( v31 == -1 )
        {
          *(v28 + 25) = v32;
          goto LABEL_32;
        }
        ++v32;
      }
      while ( *(v28 + v31 + 27) == 32 );
      *(v28 + 25) = v33;
    }
LABEL_32:
    *(v28 + 64) = 1;
    *(v28 + 48) = CMemberScriptBinding2<CScriptConvarAccessor *,void (CScriptConvarAccessor::*)(char const*,int),void,char const*,int>::Call;
    *(v28 + 56) = CScriptConvarAccessor::SetInt;
    v34 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v35 = *(v34 + 26);
    *(v34 + 24) = 0;
    *(v34 + 16) = "SetFloat(name, val) : sets the value of the convar to the float.";
    *v34 = "SetFloat";
    *(v34 + 8) = "SetFloat";
    *(v34 + v35 + 27) = 30;
    v36 = v35 + 1;
    v35 += 2;
    *(v34 + v36 + 27) = 1;
    *(v34 + 26) = v35;
    v37 = v35 - 1;
    *(v34 + 25) = 0;
    if ( v37 >= 0 && *(v34 + v37 + 27) == 32 )
    {
      v38 = 1;
      do
      {
        --v37;
        v39 = v38;
        if ( v37 == -1 )
        {
          *(v34 + 25) = v38;
          goto LABEL_38;
        }
        ++v38;
      }
      while ( *(v34 + v37 + 27) == 32 );
      *(v34 + 25) = v39;
    }
LABEL_38:
    *(v34 + 64) = 1;
    *(v34 + 48) = CMemberScriptBinding2<CScriptConvarAccessor *,void (CScriptConvarAccessor::*)(char const*,float),void,char const*,float>::Call;
    *(v34 + 56) = CScriptConvarAccessor::SetFloat;
    v40 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v41 = *(v40 + 26);
    *(v40 + 24) = 0;
    *(v40 + 16) = "SetBool(name, val) : sets the value of the convar to the bool.";
    *v40 = "SetBool";
    *(v40 + 8) = "SetBool";
    *(v40 + v41 + 27) = 30;
    v42 = v41 + 1;
    v41 += 2;
    *(v40 + v42 + 27) = 6;
    *(v40 + 26) = v41;
    v43 = v41 - 1;
    *(v40 + 25) = 0;
    if ( v43 >= 0 && *(v40 + v43 + 27) == 32 )
    {
      v44 = 1;
      do
      {
        --v43;
        v45 = v44;
        if ( v43 == -1 )
        {
          *(v40 + 25) = v44;
          goto LABEL_44;
        }
        ++v44;
      }
      while ( *(v40 + v43 + 27) == 32 );
      *(v40 + 25) = v45;
    }
LABEL_44:
    *(v40 + 64) = 1;
    *(v40 + 48) = CMemberScriptBinding2<CScriptConvarAccessor *,void (CScriptConvarAccessor::*)(char const*,bool),void,char const*,bool>::Call;
    *(v40 + 56) = CScriptConvarAccessor::SetBool;
    v46 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v47 = *(v46 + 26);
    *(v46 + 24) = 0;
    *(v46 + 16) = "SetStr(name, val) : sets the value of the convar to the string.";
    *v46 = "SetStr";
    *(v46 + 8) = "SetStr";
    *(v46 + v47 + 27) = 30;
    v48 = v47 + 1;
    v47 += 2;
    *(v46 + v48 + 27) = 30;
    *(v46 + 26) = v47;
    v49 = v47 - 1;
    *(v46 + 25) = 0;
    if ( v49 >= 0 && *(v46 + v49 + 27) == 32 )
    {
      v50 = 1;
      do
      {
        --v49;
        v51 = v50;
        if ( v49 == -1 )
        {
          *(v46 + 25) = v50;
          goto LABEL_50;
        }
        ++v50;
      }
      while ( *(v46 + v49 + 27) == 32 );
      *(v46 + 25) = v51;
    }
LABEL_50:
    *(v46 + 64) = 1;
    *(v46 + 48) = CMemberScriptBinding2<CScriptConvarAccessor *,void (CScriptConvarAccessor::*)(char const*,char const*),void,char const*,char const*>::Call;
    *(v46 + 56) = CScriptConvarAccessor::SetStr;
    v52 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v53 = *(v52 + 26);
    *(v52 + 24) = 0;
    *(v52 + 16) = "RegisterCommand(name, fn, helpString, flags) : register a console command.";
    *v52 = "RegisterCommand";
    *(v52 + 8) = "RegisterCommand";
    *(v52 + v53 + 27) = 30;
    *(v52 + (v53 + 1) + 27) = 31;
    *(v52 + (v53 + 2) + 27) = 30;
    v54 = v53 + 3;
    v53 += 4;
    *(v52 + v54 + 27) = 5;
    *(v52 + 26) = v53;
    v55 = v53 - 1;
    *(v52 + 25) = 0;
    if ( v55 >= 0 && *(v52 + v55 + 27) == 32 )
    {
      v56 = 1;
      do
      {
        --v55;
        v57 = v56;
        if ( v55 == -1 )
        {
          *(v52 + 25) = v56;
          goto LABEL_56;
        }
        ++v56;
      }
      while ( *(v52 + v55 + 27) == 32 );
      *(v52 + 25) = v57;
    }
LABEL_56:
    *(v52 + 64) = 1;
    *(v52 + 48) = CMemberScriptBinding4<CScriptConvarAccessor *,void (CScriptConvarAccessor::*)(char const*,HSCRIPT__ *,char const*,int),void,char const*,HSCRIPT__ *,char const*,int>::Call;
    *(v52 + 56) = CScriptConvarAccessor::RegisterCommand;
    v58 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v59 = *(v58 + 26);
    *(v58 + 24) = 0;
    *(v58 + 16) = "RegisterConvar(name, defaultValue, helpString, flags): register a new console variable.";
    *v58 = "RegisterConvar";
    *(v58 + 8) = "RegisterConvar";
    *(v58 + v59 + 27) = 30;
    *(v58 + (v59 + 1) + 27) = 30;
    *(v58 + (v59 + 2) + 27) = 30;
    v60 = v59 + 3;
    v59 += 4;
    *(v58 + v60 + 27) = 5;
    *(v58 + 26) = v59;
    v61 = v59 - 1;
    *(v58 + 25) = 0;
    if ( v61 >= 0 && *(v58 + v61 + 27) == 32 )
    {
      v62 = 1;
      do
      {
        --v61;
        v63 = v62;
        if ( v61 == -1 )
        {
          *(v58 + 25) = v62;
          goto LABEL_62;
        }
        ++v62;
      }
      while ( *(v58 + v61 + 27) == 32 );
      *(v58 + 25) = v63;
    }
LABEL_62:
    *(v58 + 64) = 1;
    *(v58 + 48) = CMemberScriptBinding4<CScriptConvarAccessor *,void (CScriptConvarAccessor::*)(char const*,char const*,char const*,int),void,char const*,char const*,char const*,int>::Call;
    *(v58 + 56) = CScriptConvarAccessor::RegisterConvar;
    v64 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v65 = *(v64 + 26);
    *(v64 + 24) = 31;
    *(v64 + 16) = "GetCommandClient() : returns the player who issued this console command.";
    *v64 = "GetCommandClient";
    *(v64 + 8) = "GetCommandClient";
    v66 = v65 - 1;
    *(v64 + 25) = 0;
    if ( v66 >= 0 && *(v64 + v66 + 27) == 32 )
    {
      v67 = 1;
      do
      {
        --v66;
        v68 = v67;
        if ( v66 == -1 )
        {
          *(v64 + 25) = v67;
          goto LABEL_68;
        }
        ++v67;
      }
      while ( *(v64 + v66 + 27) == 32 );
      *(v64 + 25) = v68;
    }
LABEL_68:
    *(v64 + 64) = 1;
    *(v64 + 48) = CMemberScriptBinding0<CScriptConvarAccessor *,HSCRIPT__ * (CScriptConvarAccessor::*)(void),HSCRIPT__ *>::Call;
    *(v64 + 56) = CScriptConvarAccessor::GetCommandClient;
    v69 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v70 = *(v69 + 26);
    *(v69 + 24) = 31;
    *(v69 + 16) = "GetDOTACommandClient() : returns the DOTA player who issued this console command.";
    *v69 = "GetDOTACommandClient";
    *(v69 + 8) = "GetDOTACommandClient";
    v71 = v70 - 1;
    *(v69 + 25) = 0;
    if ( v71 >= 0 && *(v69 + v71 + 27) == 32 )
    {
      v72 = 1;
      do
      {
        --v71;
        v73 = v72;
        if ( v71 == -1 )
        {
          *(v69 + 25) = v72;
          goto LABEL_74;
        }
        ++v72;
      }
      while ( *(v69 + v71 + 27) == 32 );
      *(v69 + 25) = v73;
    }
LABEL_74:
    *(v69 + 64) = 1;
    *(v69 + 48) = CMemberScriptBinding0<CScriptConvarAccessor *,HSCRIPT__ * (CScriptConvarAccessor::*)(void),HSCRIPT__ *>::Call;
    *(v69 + 56) = CScriptConvarAccessor::GetDOTACommandClient;
    return v2;
  }
  return result;
}


// CScriptGlobalSysAccessor::CommandLineInt  (line 390, @0x0000000001f2a7d0, libserver.so)  // inlines: CVariantBase
// calls: CommandLine
__int64 __fastcall CScriptGlobalSysAccessor::CommandLineInt(
        __int64 a1,
        CScriptGlobalSysAccessor *const this,
        const char *pchName,
        unsigned int nDefault)
{
  __int64 v7; // rax

  v7 = CommandLine(a1, this);
  *a1 = (*(*v7 + 88LL))(v7, pchName, nDefault);
  *(a1 + 8) = 5;
  *(a1 + 10) = 0;
  return a1;
}


// CScriptGlobalSysAccessor::CommandLineFloat  (line 396, @0x0000000001f2a820, libserver.so)  // inlines: CVariantBase
// calls: CommandLine
CScriptGlobalSysAccessor *__fastcall CScriptGlobalSysAccessor::CommandLineFloat(
        CScriptGlobalSysAccessor *const this,
        const char *pchName,
        float flDefault,
        __int64 a4)
{
  __int64 v6; // rax
  float v7; // xmm0_4

  v6 = CommandLine(this, pchName);
  v7 = (*(*v6 + 96LL))(v6, a4, flDefault);
  *(this + 4) = 1;
  *(this + 5) = 0;
  *&this->gap0 = v7;
  return this;
}


// CScriptGlobalSysAccessor::CommandLineStr  (line 402, @0x0000000001f314e0, libserver.so)  // inlines: CVariantBase, CopyData
// calls: CommandLine
__int64 __fastcall CScriptGlobalSysAccessor::CommandLineStr(
        __int64 a1,
        CScriptGlobalSysAccessor *const this,
        const char *pchName,
        const char *pchDefault)
{
  __int64 v7; // rax
  __int64 v8; // rax

  v7 = CommandLine(a1, this);
  v8 = (*(*v7 + 80LL))(v7, pchName, pchDefault);
  *(a1 + 8) = 30;
  *a1 = v8;
  return a1;
}


// CScriptGlobalSysAccessor::CommandLineCheck  (line 408, @0x0000000001f2a870, libserver.so)  // inlines: CVariantBase
// calls: CommandLine
__int64 __fastcall CScriptGlobalSysAccessor::CommandLineCheck(
        __int64 a1,
        CScriptGlobalSysAccessor *const this,
        const char *pchName)
{
  __int64 v5; // rax

  v5 = CommandLine(a1, this);
  *a1 = (*(*v5 + 32LL))(v5, pchName);
  *(a1 + 8) = 6;
  *(a1 + 10) = 0;
  return a1;
}


// GetScriptDesc<CScriptGlobalSysAccessor>  (line 413, @0x0000000001f49e50, libserver.so)  // inlines: AddParameterType, CUtlMemory, CUtlVector, CUtlVectorBase, Finalize, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CScriptGlobalSysAccessor*, CScriptGlobalSysAccessor, CVariantBase<CVariantDefaultAllocator>, char const*, char const*>, ScriptDeduceFunctionSignature<CScriptGlobalSysAccessor*, CScriptGlobalSysAccessor, CVariantBase<CVariantDefaultAllocator>, char const*, float>, ScriptDeduceFunctionSignature<CScriptGlobalSysAccessor*, CScriptGlobalSysAccessor, CVariantBase<CVariantDefaultAllocator>, char const*, int>, ScriptDeduceFunctionSignature<CScriptGlobalSysAccessor*, CScriptGlobalSysAccessor, CVariantBase<CVariantDefaultAllocator>, char const*>, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >::AddToTail
// callers: CVScriptGameSystem::InstallScriptBindings
// strings: "!Access to global system functions", "GlobalSys", "CScriptGlobalSysAccessor", "CommandLineInt(name) : returns the command line param as an int.", "CommandLineInt", "CommandLineFloat(name) : returns the command line param as a float." (11 total)
// globals: g_pCScriptGlobalSysAccessor_ScriptDesc, CMemberScriptBinding2<CScriptGlobalSysAccessor *,CVariantBase<CVariantDefaultAllocator> (CScriptGlobalSysAccessor::*)(char const*,int),CVariantBase<CVariantDefa, CScriptGlobalSysAccessor::CommandLineInt(char const*,int), CMemberScriptBinding2<CScriptGlobalSysAccessor *,CVariantBase<CVariantDefaultAllocator> (CScriptGlobalSysAccessor::*)(char const*,float),CVariantBase<CVariantDe, CScriptGlobalSysAccessor::CommandLineFloat(char const*,float), CMemberScriptBinding2<CScriptGlobalSysAccessor *,CVariantBase<CVariantDefaultAllocator> (CScriptGlobalSysAccessor::*)(char const*,char const*),CVariantBase<CVar, CScriptGlobalSysAccessor::CommandLineStr(char const*,char const*), CMemberScriptBinding1<CScriptGlobalSysAccessor *,CVariantBase<CVariantDefaultAllocator> (CScriptGlobalSysAccessor::*)(char const*),CVariantBase<CVariantDefaultA (9 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CScriptGlobalSysAccessor>(
        CScriptGlobalSysAccessor *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // r12
  CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int> > *p_m_FunctionBindings; // rbx
  __int64 v4; // rcx
  char v5; // dl
  char v6; // al
  int v7; // edx
  char v8; // al
  __int64 v9; // rsi
  char v10; // dl
  char v11; // al
  int v12; // edx
  char v13; // cl
  char v14; // di
  __int64 v15; // rcx
  char v16; // dl
  char v17; // al
  int v18; // edx
  char v19; // al
  __int64 v20; // rcx
  char v21; // dl
  __int64 v22; // rax
  int v23; // edx
  char v24; // si

  result = g_pCScriptGlobalSysAccessor_ScriptDesc;
  if ( g_pCScriptGlobalSysAccessor_ScriptDesc == 0 )
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
    g_pCScriptGlobalSysAccessor_ScriptDesc = v2;
    v2->m_pszDescription = "!Access to global system functions";
    v2->m_pszScriptName = "GlobalSys";
    v2->m_pszClassname = "CScriptGlobalSysAccessor";
    v4 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(&v2->m_FunctionBindings)];
    v5 = *(v4 + 26);
    *(v4 + 24) = 32;
    *(v4 + 16) = "CommandLineInt(name) : returns the command line param as an int.";
    *v4 = "CommandLineInt";
    *(v4 + 8) = "CommandLineInt";
    *(v4 + v5 + 27) = 30;
    v6 = v5 + 1;
    v5 += 2;
    *(v4 + v6 + 27) = 5;
    *(v4 + 26) = v5;
    v7 = v5 - 1;
    *(v4 + 25) = 0;
    if ( v7 >= 0 && *(v4 + v7 + 27) == 32 )
    {
      v8 = 0;
      do
      {
        --v7;
        ++v8;
      }
      while ( v7 != -1 && *(v4 + v7 + 27) == 32 );
      *(v4 + 25) = v8;
    }
    *(v4 + 64) = 1;
    *(v4 + 48) = CMemberScriptBinding2<CScriptGlobalSysAccessor *,CVariantBase<CVariantDefaultAllocator> (CScriptGlobalSysAccessor::*)(char const*,int),CVariantBase<CVariantDefaultAllocator>,char const*,int>::Call;
    *(v4 + 56) = CScriptGlobalSysAccessor::CommandLineInt;
    v9 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v10 = *(v9 + 26);
    *(v9 + 24) = 32;
    *(v9 + 16) = "CommandLineFloat(name) : returns the command line param as a float.";
    *v9 = "CommandLineFloat";
    *(v9 + 8) = "CommandLineFloat";
    *(v9 + v10 + 27) = 30;
    v11 = v10 + 1;
    v10 += 2;
    *(v9 + v11 + 27) = 1;
    *(v9 + 26) = v10;
    v12 = v10 - 1;
    *(v9 + 25) = 0;
    if ( v12 >= 0 && *(v9 + v12 + 27) == 32 )
    {
      v13 = 1;
      do
      {
        --v12;
        v14 = v13;
        if ( v12 == -1 )
        {
          *(v9 + 25) = v13;
          goto LABEL_14;
        }
        ++v13;
      }
      while ( *(v9 + v12 + 27) == 32 );
      *(v9 + 25) = v14;
    }
LABEL_14:
    *(v9 + 64) = 1;
    *(v9 + 48) = CMemberScriptBinding2<CScriptGlobalSysAccessor *,CVariantBase<CVariantDefaultAllocator> (CScriptGlobalSysAccessor::*)(char const*,float),CVariantBase<CVariantDefaultAllocator>,char const*,float>::Call;
    *(v9 + 56) = CScriptGlobalSysAccessor::CommandLineFloat;
    v15 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v16 = *(v15 + 26);
    *(v15 + 24) = 32;
    *(v15 + 16) = "CommandLineStr(name) : returns the command line param as a string.";
    *v15 = "CommandLineStr";
    *(v15 + 8) = "CommandLineStr";
    *(v15 + v16 + 27) = 30;
    v17 = v16 + 1;
    v16 += 2;
    *(v15 + v17 + 27) = 30;
    *(v15 + 26) = v16;
    v18 = v16 - 1;
    *(v15 + 25) = 0;
    if ( v18 >= 0 && *(v15 + v18 + 27) == 32 )
    {
      v19 = 0;
      do
      {
        --v18;
        ++v19;
      }
      while ( v18 != -1 && *(v15 + v18 + 27) == 32 );
      *(v15 + 25) = v19;
    }
    *(v15 + 64) = 1;
    *(v15 + 48) = CMemberScriptBinding2<CScriptGlobalSysAccessor *,CVariantBase<CVariantDefaultAllocator> (CScriptGlobalSysAccessor::*)(char const*,char const*),CVariantBase<CVariantDefaultAllocator>,char const*,char const*>::Call;
    *(v15 + 56) = CScriptGlobalSysAccessor::CommandLineStr;
    v20 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v21 = *(v20 + 26);
    *(v20 + 24) = 32;
    *(v20 + 16) = "CommandLineCheck(name) : returns true if the command line param was used, otherwise false.";
    *v20 = "CommandLineCheck";
    *(v20 + 8) = "CommandLineCheck";
    v22 = v21++;
    *(v20 + v22 + 27) = 30;
    *(v20 + 26) = v21;
    v23 = v21 - 1;
    *(v20 + 25) = 0;
    if ( v23 >= 0 && *(v20 + v23 + 27) == 32 )
    {
      v24 = 0;
      do
      {
        --v23;
        ++v24;
      }
      while ( v23 != -1 && *(v20 + v23 + 27) == 32 );
      *(v20 + 25) = v24;
    }
    *(v20 + 64) = 1;
    *(v20 + 48) = CMemberScriptBinding1<CScriptGlobalSysAccessor *,CVariantBase<CVariantDefaultAllocator> (CScriptGlobalSysAccessor::*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
    *(v20 + 56) = CScriptGlobalSysAccessor::CommandLineCheck;
    return v2;
  }
  return result;
}


// CScrollingScreenOverlay::~CScrollingScreenOverlay  (line 424, @0x0000000001f89e00, libserver.so)  // inlines: Purge, ~CUtlLinkedList, ~CUtlMemory
// calls: CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::RemoveAll
void __fastcall CScrollingScreenOverlay::~CScrollingScreenOverlay(CScrollingScreenOverlay *const this)
{
  CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_Text);
  if ( (this->m_Text.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_Text.m_Memory.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_Text.m_Memory.m_pMemory = 0;
    }
    this->m_Text.m_Memory.m_nAllocationCount = 0;
  }
}


// CScrollingScreenOverlay::CScrollingScreenOverlay  (line 457, @0x0000000001f38a90, libserver.so)  // inlines: CUtlLinkedList, CUtlMemory, ConstructList, ResetDbgInfo
void __fastcall CScrollingScreenOverlay::CScrollingScreenOverlay(
        CScrollingScreenOverlay *const this,
        float x,
        float y,
        float duration,
        int iFirstLine,
        int nLines,
        int r,
        int g,
        int b)
{
  this->m_Text.m_Head = -1;
  this->m_Text.m_Tail = -1;
  this->m_Text.m_FirstFree = -1;
  this->m_Text.m_ElementCount = 0;
  this->m_Text.m_Memory.m_pMemory = 0;
  this->m_Text.m_Memory.m_nAllocationCount = 0;
  this->m_Text.m_Memory.m_nGrowSize = 0;
  this->m_Text.m_LastAlloc.index = -1;
  this->m_Text.m_NumAlloced = 0;
  this->m_Text.m_pElements = 0;
  this->m_x = x;
  this->m_y = y;
  this->m_duration = duration;
  this->m_iFirstLine = iFirstLine;
  this->m_nLines = nLines;
  this->m_r = r;
  this->m_g = g;
  this->m_b = b;
}


// CScrollingScreenOverlay::SetXY  (line 469, @0x0000000001f38b10, libserver.so)
void __fastcall CScrollingScreenOverlay::SetXY(CScrollingScreenOverlay *const this, float a2, float x, float y)
{
  this->m_x = a2;
  this->m_y = x;
}


// CScrollingScreenOverlay::SetTextDuration  (line 475, @0x0000000001f38b20, libserver.so)
void __fastcall CScrollingScreenOverlay::SetTextDuration(CScrollingScreenOverlay *const this, float a2, float duration)
{
  this->m_duration = a2;
}


// CScrollingScreenOverlay::SetFirstLine  (line 480, @0x0000000001f38b30, libserver.so)
void __fastcall CScrollingScreenOverlay::SetFirstLine(CScrollingScreenOverlay *const this, int iFirstLine)
{
  this->m_iFirstLine = iFirstLine;
}


// CScrollingScreenOverlay::SetNumLines  (line 485, @0x0000000001f38b40, libserver.so)
void __fastcall CScrollingScreenOverlay::SetNumLines(CScrollingScreenOverlay *const this, int nLines)
{
  this->m_nLines = nLines;
}


// CScrollingScreenOverlay::AddText  (line 490, @0x0000000001f63480, libserver.so)  // inlines: AddToTail, Remove, curtime, operator[]
// calls: CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::Free, CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::InsertBefore, CUtlString::operator=
// callers: CScrollingScreenOverlay::AddText, VScriptServerScriptErrorFunc
void __fastcall CScrollingScreenOverlay::AddText(
        CScrollingScreenOverlay *const this,
        const char *pszText,
        int r,
        int g,
        int b)
{
  int m_ElementCount; // eax
  int v10; // eax
  __int64 v11; // r13
  UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int> *m_pMemory; // rcx
  CGlobalVars *v13; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int> *v16; // [rsp+0h] [rbp-40h]

  m_ElementCount = this->m_Text.m_ElementCount;
  if ( m_ElementCount != 0 && this->m_nLines <= m_ElementCount )
  {
    do
    {
      CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::Free(
        &this->m_Text,
        this->m_Text.m_Head);
      v10 = this->m_Text.m_ElementCount;
    }
    while ( v10 != 0 && v10 >= this->m_nLines );
  }
  v11 = CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::InsertBefore(
          &this->m_Text,
          0xFFFFu);
  CUtlString::operator=(&this->m_Text.m_Memory.m_pMemory[v11].m_Element.m_text, pszText);
  m_pMemory = this->m_Text.m_Memory.m_pMemory;
  v13 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v16 = this->m_Text.m_Memory.m_pMemory;
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        m_pMemory = v16;
      }
    }
    m_flCurrentTime = v13->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  m_pMemory[v11].m_Element.m_time = m_flCurrentTime;
  this->m_Text.m_Memory.m_pMemory[v11].m_Element.m_r = r;
  this->m_Text.m_Memory.m_pMemory[v11].m_Element.m_g = g;
  this->m_Text.m_Memory.m_pMemory[v11].m_Element.m_b = b;
}


// CScrollingScreenOverlay::AddText  (line 504, @0x0000000001f63580, libserver.so)
// calls: CScrollingScreenOverlay::AddText
void __fastcall CScrollingScreenOverlay::AddText(CScrollingScreenOverlay *const this, const char *pszText)
{
  CScrollingScreenOverlay::AddText(this, pszText, this->m_r, this->m_g, this->m_b);
}


// CScrollingScreenOverlay::Clear  (line 509, @0x0000000001f401b0, libserver.so)
// calls: CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::RemoveAll
void __fastcall CScrollingScreenOverlay::Clear(CScrollingScreenOverlay *const this)
{
  CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_Text);
}


// CScrollingScreenOverlay::Draw  (line 514, @0x0000000001f5a7a0, libserver.so)  // inlines: CFmtStrN, GetBool, GetInt, InitQuietTruncation, Remove, curtime, operator[]
// calls: CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::Free, CUtlString::Get, CFmtStrN<1024, false>::sprintf, NDebugOverlay::ScreenTextOffset, __stack_chk_fail
// callers: CVScriptGameSystem::OnServerGamePostSimulate
void __fastcall CScrollingScreenOverlay::Draw(CScrollingScreenOverlay *const this)
{
  unsigned __int16 m_Head; // r14
  int m_iFirstLine; // ebx
  CGlobalVars *v4; // r13
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int> *m_pMemory; // rdi
  int m_Next; // r11d
  CGlobalVars *v9; // r13
  float v10; // xmm1_4
  __int64 v11; // r14
  UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,short unsigned int> *v12; // rdi
  float m_time; // xmm0_4
  FnGlobalVarsWarningFunc v14; // rax
  float v15; // xmm1_4
  int v16; // r9d
  const char *v17; // rax
  float v18; // [rsp+18h] [rbp-458h]
  float msgTime; // [rsp+1Ch] [rbp-454h]
  int msgTimea; // [rsp+1Ch] [rbp-454h]
  CFmtStrN<1024,false> msg; // [rsp+20h] [rbp-450h] BYREF
  unsigned __int64 v22; // [rsp+438h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  if ( developer.m_pParent->m_Value.m_nValue != 0 )
  {
    m_Head = this->m_Text.m_Head;
    m_iFirstLine = this->m_iFirstLine;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v4 = gpGlobals;
        m_flCurrentTime = 0.0;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              (m_pfnWarningFunc)(1, 0.0);
          }
          m_flCurrentTime = v4->m_flCurrentTime;
        }
        m_pMemory = this->m_Text.m_Memory.m_pMemory;
        if ( (m_flCurrentTime - this->m_Text.m_Memory.m_pMemory[m_Head].m_Element.m_time) < this->m_duration )
          break;
        CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::Free(
          &this->m_Text,
          this->m_Text.m_Head);
        m_Head = this->m_Text.m_Head;
        if ( m_Head == 0xFFFF )
          return;
      }
      m_Next = this->m_Text.m_Head;
      msg.m_bQuietTruncation = 0;
      msg._vptr_CFmtStrN = &off_3FCABA0;
      msg.m_szBuf[0] = 0;
      msg.m_nLength = 0;
      if ( m_Next != 0xFFFF )
      {
        while ( 1 )
        {
          v9 = gpGlobals;
          v10 = 0.0;
          v11 = m_Next;
          v12 = &m_pMemory[v11];
          m_time = v12->m_Element.m_time;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              v14 = gpGlobals->m_pfnWarningFunc;
              if ( v14 != 0 )
              {
                msgTime = v12->m_Element.m_time;
                (v14)(1, m_time, 0.0);
                m_time = msgTime;
                v12 = &this->m_Text.m_Memory.m_pMemory[v11];
              }
            }
            v10 = v9->m_flCurrentTime;
          }
          v15 = v10 - m_time;
          v16 = 255;
          if ( (this->m_duration - 1.0) < v15 )
            v16 = ((this->m_duration - v15) * 255.0);
          msgTimea = v16;
          v18 = m_time;
          v17 = CUtlString::Get(&v12->m_Element.m_text);
          CFmtStrN<1024,false>::sprintf(&msg, &stru_32DB07A.m_IONotificationKey + 2, v17, v18);
          NDebugOverlay::ScreenTextOffset(
            this->m_x,
            this->m_y,
            m_iFirstLine,
            msg.m_szBuf,
            this->m_Text.m_Memory.m_pMemory[v11].m_Element.m_r,
            this->m_Text.m_Memory.m_pMemory[v11].m_Element.m_g,
            this->m_Text.m_Memory.m_pMemory[v11].m_Element.m_b,
            msgTimea,
            0.01023);
          m_pMemory = this->m_Text.m_Memory.m_pMemory;
          m_Next = this->m_Text.m_Memory.m_pMemory[v11].m_Next;
          if ( m_Next == 0xFFFF )
            break;
          ++m_iFirstLine;
        }
      }
    }
  }
}


// VScriptServerScriptErrorFunc  (line 565, @0x0000000001f635a0, libserver.so)  // inlines: AddText, V_strncpy<long unsigned int>
// calls: _V_strncpy, CScrollingScreenOverlay::AddText, __stack_chk_fail
// callers: VScriptServerScriptErrorFunc
// globals: g_ScriptErrorScreenOverlay
__int64 __fastcall VScriptServerScriptErrorFunc(__int64 a1, const char *pszText)
{
  char *v2; // rbx
  __int64 result; // rax
  const char *v4; // rsi
  char szTemp[1032]; // [rsp+0h] [rbp-420h] BYREF
  unsigned __int64 v6; // [rsp+408h] [rbp-18h]

  v2 = szTemp;
  v6 = __readfsqword(0x28u);
  _V_strncpy(szTemp, a1, 1024);
  result = szTemp[0];
  if ( szTemp[0] != 0 )
  {
    do
    {
      v4 = v2;
      if ( result != 0 )
      {
        while ( result != 10 )
        {
          LOBYTE(result) = *++v2;
          if ( *v2 == 0 )
            goto LABEL_7;
        }
        *v2++ = 0;
      }
LABEL_7:
      CScrollingScreenOverlay::AddText(
        &g_ScriptErrorScreenOverlay,
        v4,
        g_ScriptErrorScreenOverlay.m_r,
        g_ScriptErrorScreenOverlay.m_g,
        g_ScriptErrorScreenOverlay.m_b);
      result = *v2;
    }
    while ( result != 0 );
  }
  return result;
}


// VScriptServerScriptErrorFunc  (line 565, @0x0000000001f63650, libserver.so)  // inlines: GetBool, GetInt
// calls: DevMsg(char const*,...), VScriptServerScriptErrorFunc, Plat_IsInDebugSessionRaw, ConVar::SetValue
// globals: script_break_in_native_debugger_on_error
bool __fastcall VScriptServerScriptErrorFunc(ScriptErrorLevel_t a1, const char *pszText)
{
  const char *v4; // rsi

  if ( script_break_in_native_debugger_on_error.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( Plat_IsInDebugSessionRaw(a1) != 0 )
      __debugbreak();
    ConVar::SetValue(&script_break_in_native_debugger_on_error, "0");
  }
  if ( developer.m_pParent->m_Value.m_nValue == 0 )
    return 1;
  DevMsg("%s\n", pszText);
  if ( g_pVr != 0 && (*(*g_pVr + 104LL))(g_pVr) != 0 )
    return 1;
  VScriptServerScriptErrorFunc(pszText, v4);
  return 1;
}


// CScriptEntityIterator::First  (line 623, @0x0000000001f784a0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, Next, ToHScript
// calls: CGameEntitySystem::NextEnt, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CScriptEntityIterator::First(CScriptEntityIterator *const this)
{
  CBaseEntity *Ent; // rax
  CBaseEntity *v3; // [rsp+8h] [rbp-8h]

  Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
  if ( Ent == 0 )
    return 0;
  if ( Ent->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return Ent->m_pEntity->m_hPublicScope.m_hScope;
  v3 = Ent;
  CEntityInstance::CreatePublicScriptScope(Ent, 0);
  return v3->m_pEntity->m_hPublicScope.m_hScope;
}


// CScriptEntityIterator::Next  (line 625, @0x0000000001f79a40, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, CGameEntitySystem::NextEnt, CEntityInstance::CreatePublicScriptScope
// globals: g_pScriptVM
HSCRIPT __fastcall CScriptEntityIterator::Next(CScriptEntityIterator *const this, HSCRIPT hStartEntity)
{
  __int64 (__fastcall *v3)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v5; // rsi
  CBaseEntity *Ent; // rax
  CBaseEntity *v8; // [rsp+8h] [rbp-18h]

  if ( hStartEntity != 0 )
  {
    v3 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v5 = v3(g_pScriptVM, hStartEntity, Script);
  }
  else
  {
    v5 = 0;
  }
  Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, v5);
  if ( Ent == 0 )
    return 0;
  if ( Ent->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return Ent->m_pEntity->m_hPublicScope.m_hScope;
  v8 = Ent;
  CEntityInstance::CreatePublicScriptScope(Ent, 0);
  return v8->m_pEntity->m_hPublicScope.m_hScope;
}


// CScriptEntityIterator::CreateByClassname  (line 634, @0x0000000001f94400, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<char const*>, AddToTail, Allocate, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, CopyData, Element, EntityToHScript, FindKeyHash, Free, GameRules, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, GetSerialNumber, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetValue, Spawn, ToHScript, V_strlen, memcpy, operator CEntityInstance*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntitySystem::FindClassByDesignName, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CVProfile::ExitScope, CUtlString::FreeMemoryBlock, CEntityKeyValues::SetValue (26 total)
// strings: "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n", "Attempting to create an entity too early, GameRules has not been created yet!."
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CScriptEntityIterator::CreateByClassname(CScriptEntityIterator *const this, const char *className)
{
  CEntitySystem *v3; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v5; // rdx
  char v6; // al
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  CEntityClass *ClassByDesignName; // rax
  CEntityKeyValues *v9; // rdi
  int m_enabled; // ebx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v12; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v14; // r14
  CEntityIdentity *m_pEntity; // rax
  __int16 v16; // si
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  CEntityKeyValues *i; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v21; // rdi
  CEntityIdentity *v22; // rax
  HSCRIPT m_hScope; // rbx
  CEntityIdentity *v24; // rax
  CUtlScratchMemoryPool *v25; // rdi
  CEntityKeyValues *v26; // r13
  const char *m_pszClassname; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v31; // cx
  __int64 v32; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v33; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int64 v35; // r15
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v38; // rax
  __int64 v39; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v40; // r15
  uint16 m_flags; // ax
  void *v42; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v43; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int16 v47; // ax
  signed int v48; // r15d
  void *v49; // rax
  CEntityInstance *m_pInstance; // r14
  signed int v51; // [rsp+24h] [rbp-FCh]
  bool v52; // [rsp+28h] [rbp-F8h]
  __int64 v53; // [rsp+28h] [rbp-F8h]
  int v54; // [rsp+30h] [rbp-F0h]
  _QWORD v55[2]; // [rsp+40h] [rbp-E0h] BYREF
  CEntitySpawner<CBaseEntity> spawner; // [rsp+50h] [rbp-D0h] BYREF

  if ( g_pGameRules == 0 )
  {
    Warning("Attempting to create an entity too early, GameRules has not been created yet!.", className);
    return 0;
  }
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v3 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v3->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v3);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v5 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v5;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCBaseEntityClass;
  if ( g_pApplication != 0 )
    v6 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v6 = 0;
  spawner.m_bValidateKeys = v6;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_51:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      LOWORD(v35) = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v35 = v35;
      m_pElements[v35] = -971301790;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v38 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v38 = 0;
      v39 = 24 * v35;
      v40 = &v38[v35];
      v53 = v39;
      m_flags = v40->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v40->m_value.m_flags = m_flags & 0xFFFE;
      v40->m_value.m_uint64 = 0;
      v40->m_value.m_type = 30;
      if ( className != 0 )
      {
        v51 = strlen(className) + 1;
        v42 = CEntityVariantAllocator::Allocate(v51);
        v40->m_value.m_uint64 = v42;
        memcpy(v42, className, v51);
        v40->m_value.m_flags |= 1u;
      }
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v43 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v43 = 0;
      *(&v43->m_pAttributeName + v53) = 0;
      goto LABEL_5;
    }
    v31 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v32 = 0;
    while ( 1 )
    {
      if ( v31 != 0 )
      {
        v33 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v31 > 9 )
          v33 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v33 = 0;
      }
      if ( v33[v32] == -971301790 )
        break;
      if ( m_nCount <= ++v32 )
        goto LABEL_51;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v44 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v45 = v32;
      if ( v44[v45].m_pAttributeName != 0 )
      {
LABEL_65:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v44[v45].m_pAttributeName);
        goto LABEL_5;
      }
      v46 = &v44[v45];
    }
    else
    {
      v45 = v32;
      v44 = 0;
      v46 = v45 * 24;
      if ( *(v45 * 24 + 16) != 0 )
        goto LABEL_65;
    }
    v47 = *(v46 + 10);
    if ( (v47 & 1) != 0 )
      *(v46 + 10) = v47 & 0xFFFE;
    *v46 = 0;
    *(v46 + 8) = 30;
    if ( className != 0 )
    {
      v48 = strlen(className) + 1;
      v49 = CEntityVariantAllocator::Allocate(v48);
      *v46 = v49;
      memcpy(v49, className, v48);
      *(v46 + 10) |= 1u;
    }
  }
LABEL_5:
  ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, className, &spawner.m_scriptClassName);
  v9 = spawner.m_pEntityKeyValues;
  spawner.m_pEntityClass = ClassByDesignName;
  v54 = -1;
  if ( spawner.m_pEntityKeyValues == 0 )
    goto LABEL_39;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v52 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
    v9 = spawner.m_pEntityKeyValues;
  }
  if ( !CEntityKeyValues::HasValue(v9, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v12 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v12,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v14 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v54 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
    }
    v55[0] = m_pEntity;
    v55[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v55,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v14, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v21 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v21 - 1);
        (pfn)(v21, v14, i);
      }
    }
  }
  if ( v52 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  if ( (v54 + 2) > 1 && (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v54 >> 9) & 0x3F]) != 0 )
  {
    m_hScope = 0;
    v24 = &v22[v54 & 0x1FF];
    if ( v24 != 0 && v54 == v24->m_EHandle.m_Index )
    {
      m_pInstance = v24->m_pInstance;
      if ( v24->m_pInstance != 0 )
      {
        m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
        if ( m_hScope == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(m_pInstance, 0);
          m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
        }
      }
    }
  }
  else
  {
LABEL_39:
    m_hScope = 0;
  }
  v25 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v25 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v25);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v26 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v26);
      operator delete(v26);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return m_hScope;
}


// CScriptEntityIterator::FindByClassname  (line 649, @0x0000000001f79bb0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, CGameEntitySystem::FindEntityByClassname, CEntityInstance::CreatePublicScriptScope
// globals: g_pScriptVM
HSCRIPT __fastcall CScriptEntityIterator::FindByClassname(
        CScriptEntityIterator *const this,
        HSCRIPT hStartEntity,
        const char *szName)
{
  __int64 (__fastcall *v5)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v7; // rsi
  CBaseEntity *EntityByClassname; // rax
  CBaseEntity *v10; // [rsp+8h] [rbp-28h]

  if ( hStartEntity != 0 )
  {
    v5 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v7 = v5(g_pScriptVM, hStartEntity, Script);
  }
  else
  {
    v7 = 0;
  }
  EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v7, szName);
  if ( EntityByClassname == 0 )
    return 0;
  if ( EntityByClassname->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return EntityByClassname->m_pEntity->m_hPublicScope.m_hScope;
  v10 = EntityByClassname;
  CEntityInstance::CreatePublicScriptScope(EntityByClassname, 0);
  return v10->m_pEntity->m_hPublicScope.m_hScope;
}


// CScriptEntityIterator::FindAllByClassname  (line 654, @0x0000000001f87370, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, TakeOwnership, ToHScript, ~CVariantBase
// calls: CGameEntitySystem::FindEntityByClassname, CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: g_pScriptVM
__int64 *__fastcall CScriptEntityIterator::FindAllByClassname(
        __int64 *a1,
        CScriptEntityIterator *const this,
        const char *szName)
{
  CBaseEntity *v5; // rbx
  CBaseEntity *EntityByClassname; // rax
  IScriptVM *v7; // rdi
  void (__fastcall *v8)(IScriptVM *, __int64, HSCRIPT *); // r12
  HSCRIPT m_hScope; // rax
  __int64 v10; // rsi
  HSCRIPT v12; // [rsp+10h] [rbp-40h] BYREF
  __int16 v13; // [rsp+18h] [rbp-38h]
  __int16 v14; // [rsp+1Ah] [rbp-36h]

  *(a1 + 4) = 0;
  *a1 = 0;
  *(a1 + 5) = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, a1);
  v5 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v5, szName);
    v5 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    v7 = g_pScriptVM;
    v8 = *(*g_pScriptVM + 384LL);
    m_hScope = EntityByClassname->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v5, 0);
      v7 = g_pScriptVM;
      m_hScope = v5->m_pEntity->m_hPublicScope.m_hScope;
    }
    v10 = *a1;
    v13 = 31;
    v14 = 0;
    v12 = m_hScope;
    v8(v7, v10, &v12);
    if ( (v14 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12);
  }
  if ( *(a1 + 4) == 31 )
    *(a1 + 4) = 36;
  return a1;
}


// CScriptEntityIterator::FindByName  (line 667, @0x0000000001f79f90, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, CGameEntitySystem::FindEntityByName, CEntityInstance::CreatePublicScriptScope
// globals: g_pScriptVM
HSCRIPT __fastcall CScriptEntityIterator::FindByName(
        CScriptEntityIterator *const this,
        HSCRIPT hStartEntity,
        const char *szName)
{
  __int64 (__fastcall *v5)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v7; // rsi
  CBaseEntity *EntityByName; // rax
  CBaseEntity *v10; // [rsp+8h] [rbp-28h]

  if ( hStartEntity != 0 )
  {
    v5 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v7 = v5(g_pScriptVM, hStartEntity, Script);
  }
  else
  {
    v7 = 0;
  }
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v7, szName, 0, 0, 0, 0);
  if ( EntityByName == 0 )
    return 0;
  if ( EntityByName->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return EntityByName->m_pEntity->m_hPublicScope.m_hScope;
  v10 = EntityByName;
  CEntityInstance::CreatePublicScriptScope(EntityByName, 0);
  return v10->m_pEntity->m_hPublicScope.m_hScope;
}


// CScriptEntityIterator::FindAllByName  (line 671, @0x0000000001f87220, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, TakeOwnership, ToHScript, ~CVariantBase
// calls: CGameEntitySystem::FindEntityByName, CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: g_pScriptVM
__int64 *__fastcall CScriptEntityIterator::FindAllByName(
        __int64 *a1,
        CScriptEntityIterator *const this,
        const char *szName)
{
  CBaseEntity *v5; // rbx
  CBaseEntity *EntityByName; // rax
  IScriptVM *v7; // rdi
  void (__fastcall *v8)(IScriptVM *, __int64, HSCRIPT *); // r12
  HSCRIPT m_hScope; // rax
  __int64 v10; // rsi
  HSCRIPT v12; // [rsp+10h] [rbp-40h] BYREF
  __int16 v13; // [rsp+18h] [rbp-38h]
  __int16 v14; // [rsp+1Ah] [rbp-36h]

  *a1 = 0;
  *(a1 + 4) = 0;
  *(a1 + 5) = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, a1);
  v5 = 0;
  while ( 1 )
  {
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v5, szName, 0, 0, 0, 0);
    v5 = EntityByName;
    if ( EntityByName == 0 )
      break;
    v7 = g_pScriptVM;
    v8 = *(*g_pScriptVM + 384LL);
    m_hScope = EntityByName->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v5, 0);
      v7 = g_pScriptVM;
      m_hScope = v5->m_pEntity->m_hPublicScope.m_hScope;
    }
    v10 = *a1;
    v13 = 31;
    v14 = 0;
    v12 = m_hScope;
    v8(v7, v10, &v12);
    if ( (v14 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12);
  }
  if ( *(a1 + 4) == 31 )
    *(a1 + 4) = 36;
  return a1;
}


// CScriptEntityIterator::FindInSphere  (line 684, @0x0000000001f79d30, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, CGameEntitySystem::FindEntityInSphere, CEntityInstance::CreatePublicScriptScope
// globals: g_pScriptVM
HSCRIPT __fastcall CScriptEntityIterator::FindInSphere(
        CScriptEntityIterator *const this,
        HSCRIPT hStartEntity,
        const Vector *const vecCenter,
        float flRadius)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v8; // rax
  CBaseEntity *v9; // rsi
  CBaseEntity *EntityInSphere; // rax
  float flRadiusa; // [rsp+8h] [rbp-28h]
  CBaseEntity *flRadiusb; // [rsp+8h] [rbp-28h]

  if ( hStartEntity != 0 )
  {
    flRadiusa = flRadius;
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, hStartEntity, Script);
    flRadius = flRadiusa;
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  EntityInSphere = CGameEntitySystem::FindEntityInSphere(g_pGameEntitySystem, v9, vecCenter, flRadius);
  if ( EntityInSphere == 0 )
    return 0;
  if ( EntityInSphere->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return EntityInSphere->m_pEntity->m_hPublicScope.m_hScope;
  flRadiusb = EntityInSphere;
  CEntityInstance::CreatePublicScriptScope(EntityInSphere, 0);
  return flRadiusb->m_pEntity->m_hPublicScope.m_hScope;
}


// CScriptEntityIterator::FindAllInSphere  (line 688, @0x0000000001f870e0, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, TakeOwnership, ToHScript, ~CVariantBase
// calls: CGameEntitySystem::FindEntityInSphere, CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: g_pScriptVM
CScriptEntityIterator *__fastcall CScriptEntityIterator::FindAllInSphere(
        CScriptEntityIterator *const this,
        const Vector *const vecCenter,
        float flRadius,
        const Vector *a4)
{
  CBaseEntity *v6; // rbx
  CBaseEntity *EntityInSphere; // rax
  IScriptVM *v8; // rdi
  void (__fastcall *v9)(IScriptVM *, __int64, HSCRIPT *); // r12
  HSCRIPT m_hScope; // rax
  __int64 v11; // rsi
  HSCRIPT v14; // [rsp+10h] [rbp-40h] BYREF
  __int16 v15; // [rsp+18h] [rbp-38h]
  __int16 v16; // [rsp+1Ah] [rbp-36h]

  *(this + 4) = 0;
  *&this->gap0 = 0;
  *(this + 5) = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, this);
  v6 = 0;
  while ( 1 )
  {
    EntityInSphere = CGameEntitySystem::FindEntityInSphere(g_pGameEntitySystem, v6, a4, flRadius);
    v6 = EntityInSphere;
    if ( EntityInSphere == 0 )
      break;
    v8 = g_pScriptVM;
    v9 = *(*g_pScriptVM + 384LL);
    m_hScope = EntityInSphere->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v6, 0);
      v8 = g_pScriptVM;
      m_hScope = v6->m_pEntity->m_hPublicScope.m_hScope;
    }
    v11 = *&this->gap0;
    v15 = 31;
    v16 = 0;
    v14 = m_hScope;
    v9(v8, v11, &v14);
    if ( (v16 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v14);
  }
  if ( *(this + 4) == 31 )
    *(this + 4) = 36;
  return this;
}


// CScriptEntityIterator::FindByTarget  (line 702, @0x0000000001f79c70, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, CGameEntitySystem::FindEntityByTarget, CEntityInstance::CreatePublicScriptScope
// globals: g_pScriptVM
HSCRIPT __fastcall CScriptEntityIterator::FindByTarget(
        CScriptEntityIterator *const this,
        HSCRIPT hStartEntity,
        const char *szName)
{
  __int64 (__fastcall *v5)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v7; // rsi
  CBaseEntity *EntityByTarget; // rax
  CBaseEntity *v10; // [rsp+8h] [rbp-28h]

  if ( hStartEntity != 0 )
  {
    v5 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v7 = v5(g_pScriptVM, hStartEntity, Script);
  }
  else
  {
    v7 = 0;
  }
  EntityByTarget = CGameEntitySystem::FindEntityByTarget(g_pGameEntitySystem, v7, szName);
  if ( EntityByTarget == 0 )
    return 0;
  if ( EntityByTarget->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return EntityByTarget->m_pEntity->m_hPublicScope.m_hScope;
  v10 = EntityByTarget;
  CEntityInstance::CreatePublicScriptScope(EntityByTarget, 0);
  return v10->m_pEntity->m_hPublicScope.m_hScope;
}


// CScriptEntityIterator::FindAllByTarget  (line 706, @0x0000000001f86fb0, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, TakeOwnership, ToHScript, ~CVariantBase
// calls: CGameEntitySystem::FindEntityByTarget, CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: g_pScriptVM
__int64 *__fastcall CScriptEntityIterator::FindAllByTarget(
        __int64 *a1,
        CScriptEntityIterator *const this,
        const char *szName)
{
  CBaseEntity *v5; // rbx
  CBaseEntity *EntityByTarget; // rax
  IScriptVM *v7; // rdi
  void (__fastcall *v8)(IScriptVM *, __int64, HSCRIPT *); // r12
  HSCRIPT m_hScope; // rax
  __int64 v10; // rsi
  HSCRIPT v12; // [rsp+10h] [rbp-40h] BYREF
  __int16 v13; // [rsp+18h] [rbp-38h]
  __int16 v14; // [rsp+1Ah] [rbp-36h]

  *a1 = 0;
  *(a1 + 4) = 0;
  *(a1 + 5) = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, a1);
  v5 = 0;
  while ( 1 )
  {
    EntityByTarget = CGameEntitySystem::FindEntityByTarget(g_pGameEntitySystem, v5, szName);
    v5 = EntityByTarget;
    if ( EntityByTarget == 0 )
      break;
    v7 = g_pScriptVM;
    v8 = *(*g_pScriptVM + 384LL);
    m_hScope = EntityByTarget->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v5, 0);
      v7 = g_pScriptVM;
      m_hScope = v5->m_pEntity->m_hPublicScope.m_hScope;
    }
    v10 = *a1;
    v13 = 31;
    v14 = 0;
    v12 = m_hScope;
    v8(v7, v10, &v12);
    if ( (v14 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12);
  }
  if ( *(a1 + 4) == 31 )
    *(a1 + 4) = 36;
  return a1;
}


// CScriptEntityIterator::FindByModel  (line 719, @0x0000000001f79af0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, CGameEntitySystem::FindEntityByModel, CEntityInstance::CreatePublicScriptScope
// globals: g_pScriptVM
HSCRIPT __fastcall CScriptEntityIterator::FindByModel(
        CScriptEntityIterator *const this,
        HSCRIPT hStartEntity,
        const char *szModelName)
{
  __int64 (__fastcall *v5)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v7; // rsi
  CBaseEntity *EntityByModel; // rax
  CBaseEntity *v10; // [rsp+8h] [rbp-28h]

  if ( hStartEntity != 0 )
  {
    v5 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v7 = v5(g_pScriptVM, hStartEntity, Script);
  }
  else
  {
    v7 = 0;
  }
  EntityByModel = CGameEntitySystem::FindEntityByModel(g_pGameEntitySystem, v7, szModelName);
  if ( EntityByModel == 0 )
    return 0;
  if ( EntityByModel->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return EntityByModel->m_pEntity->m_hPublicScope.m_hScope;
  v10 = EntityByModel;
  CEntityInstance::CreatePublicScriptScope(EntityByModel, 0);
  return v10->m_pEntity->m_hPublicScope.m_hScope;
}


// CScriptEntityIterator::FindAllByModel  (line 724, @0x0000000001f86e80, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, TakeOwnership, ToHScript, ~CVariantBase
// calls: CGameEntitySystem::FindEntityByModel, CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: g_pScriptVM
__int64 *__fastcall CScriptEntityIterator::FindAllByModel(
        __int64 *a1,
        CScriptEntityIterator *const this,
        const char *szModelName)
{
  CBaseEntity *v5; // rbx
  CBaseEntity *EntityByModel; // rax
  IScriptVM *v7; // rdi
  void (__fastcall *v8)(IScriptVM *, __int64, HSCRIPT *); // r12
  HSCRIPT m_hScope; // rax
  __int64 v10; // rsi
  HSCRIPT v12; // [rsp+10h] [rbp-40h] BYREF
  __int16 v13; // [rsp+18h] [rbp-38h]
  __int16 v14; // [rsp+1Ah] [rbp-36h]

  *(a1 + 4) = 0;
  *a1 = 0;
  *(a1 + 5) = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, a1);
  v5 = 0;
  while ( 1 )
  {
    EntityByModel = CGameEntitySystem::FindEntityByModel(g_pGameEntitySystem, v5, szModelName);
    v5 = EntityByModel;
    if ( EntityByModel == 0 )
      break;
    v7 = g_pScriptVM;
    v8 = *(*g_pScriptVM + 384LL);
    m_hScope = EntityByModel->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v5, 0);
      v7 = g_pScriptVM;
      m_hScope = v5->m_pEntity->m_hPublicScope.m_hScope;
    }
    v10 = *a1;
    v13 = 31;
    v14 = 0;
    v12 = m_hScope;
    v8(v7, v10, &v12);
    if ( (v14 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12);
  }
  if ( *(a1 + 4) == 31 )
    *(a1 + 4) = 36;
  return a1;
}


// CScriptEntityIterator::FindByModelWithin  (line 738, @0x0000000001f79df0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, CGameEntitySystem::FindEntityByModelWithin, CEntityInstance::CreatePublicScriptScope
// globals: g_pScriptVM
HSCRIPT __fastcall CScriptEntityIterator::FindByModelWithin(
        CScriptEntityIterator *const this,
        HSCRIPT hStartEntity,
        const char *szModelName,
        const Vector *const vecSrc,
        float flRadius)
{
  __int64 (__fastcall *v8)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v10; // rax
  CBaseEntity *v11; // rsi
  CBaseEntity *EntityByModelWithin; // rax
  float flRadiusa; // [rsp+8h] [rbp-28h]
  CBaseEntity *flRadiusb; // [rsp+8h] [rbp-28h]

  if ( hStartEntity != 0 )
  {
    flRadiusa = flRadius;
    v8 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v10 = v8(g_pScriptVM, hStartEntity, Script);
    flRadius = flRadiusa;
    v11 = v10;
  }
  else
  {
    v11 = 0;
  }
  EntityByModelWithin = CGameEntitySystem::FindEntityByModelWithin(
                          g_pGameEntitySystem,
                          v11,
                          szModelName,
                          vecSrc,
                          flRadius);
  if ( EntityByModelWithin == 0 )
    return 0;
  if ( EntityByModelWithin->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return EntityByModelWithin->m_pEntity->m_hPublicScope.m_hScope;
  flRadiusb = EntityByModelWithin;
  CEntityInstance::CreatePublicScriptScope(EntityByModelWithin, 0);
  return flRadiusb->m_pEntity->m_hPublicScope.m_hScope;
}


// CScriptEntityIterator::FindByNameNearest  (line 744, @0x0000000001f786a0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CGameEntitySystem::FindEntityByNameNearest, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CScriptEntityIterator::FindByNameNearest(
        CScriptEntityIterator *const this,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius)
{
  CBaseEntity *EntityByNameNearest; // rax
  CBaseEntity *v6; // [rsp+8h] [rbp-8h]

  EntityByNameNearest = CGameEntitySystem::FindEntityByNameNearest(
                          g_pGameEntitySystem,
                          szName,
                          vecSrc,
                          flRadius,
                          0,
                          0,
                          0);
  if ( EntityByNameNearest == 0 )
    return 0;
  if ( EntityByNameNearest->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return EntityByNameNearest->m_pEntity->m_hPublicScope.m_hScope;
  v6 = EntityByNameNearest;
  CEntityInstance::CreatePublicScriptScope(EntityByNameNearest, 0);
  return v6->m_pEntity->m_hPublicScope.m_hScope;
}


// CScriptEntityIterator::FindByNameWithin  (line 749, @0x0000000001f7a060, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, CGameEntitySystem::FindEntityByNameWithin, CEntityInstance::CreatePublicScriptScope
// globals: g_pScriptVM
HSCRIPT __fastcall CScriptEntityIterator::FindByNameWithin(
        CScriptEntityIterator *const this,
        HSCRIPT hStartEntity,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius)
{
  __int64 (__fastcall *v8)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v10; // rax
  CBaseEntity *v11; // rsi
  CBaseEntity *EntityByNameWithin; // rax
  float flRadiusa; // [rsp+8h] [rbp-28h]
  CBaseEntity *flRadiusb; // [rsp+8h] [rbp-28h]

  if ( hStartEntity != 0 )
  {
    flRadiusa = flRadius;
    v8 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v10 = v8(g_pScriptVM, hStartEntity, Script);
    flRadius = flRadiusa;
    v11 = v10;
  }
  else
  {
    v11 = 0;
  }
  EntityByNameWithin = CGameEntitySystem::FindEntityByNameWithin(
                         g_pGameEntitySystem,
                         v11,
                         szName,
                         vecSrc,
                         flRadius,
                         0,
                         0,
                         0);
  if ( EntityByNameWithin == 0 )
    return 0;
  if ( EntityByNameWithin->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return EntityByNameWithin->m_pEntity->m_hPublicScope.m_hScope;
  flRadiusb = EntityByNameWithin;
  CEntityInstance::CreatePublicScriptScope(EntityByNameWithin, 0);
  return flRadiusb->m_pEntity->m_hPublicScope.m_hScope;
}


// CScriptEntityIterator::FindAllByNameWithin  (line 754, @0x0000000001f86d20, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, TakeOwnership, ToHScript, ~CVariantBase
// calls: CGameEntitySystem::FindEntityByNameWithin, CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: g_pScriptVM
CScriptEntityIterator *__fastcall CScriptEntityIterator::FindAllByNameWithin(
        CScriptEntityIterator *const this,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius,
        const Vector *a5)
{
  CBaseEntity *v7; // rbx
  CBaseEntity *EntityByNameWithin; // rax
  IScriptVM *v9; // rdi
  void (__fastcall *v10)(IScriptVM *, __int64, HSCRIPT *); // r12
  HSCRIPT m_hScope; // rax
  __int64 v12; // rsi
  HSCRIPT v16; // [rsp+20h] [rbp-40h] BYREF
  __int16 v17; // [rsp+28h] [rbp-38h]
  __int16 v18; // [rsp+2Ah] [rbp-36h]

  *&this->gap0 = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, this);
  v7 = 0;
  while ( 1 )
  {
    EntityByNameWithin = CGameEntitySystem::FindEntityByNameWithin(
                           g_pGameEntitySystem,
                           v7,
                           vecSrc,
                           a5,
                           flRadius,
                           0,
                           0,
                           0);
    v7 = EntityByNameWithin;
    if ( EntityByNameWithin == 0 )
      break;
    v9 = g_pScriptVM;
    v10 = *(*g_pScriptVM + 384LL);
    m_hScope = EntityByNameWithin->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v7, 0);
      v9 = g_pScriptVM;
      m_hScope = v7->m_pEntity->m_hPublicScope.m_hScope;
    }
    v12 = *&this->gap0;
    v17 = 31;
    v18 = 0;
    v16 = m_hScope;
    v10(v9, v12, &v16);
    if ( (v18 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v16);
  }
  if ( *(this + 4) == 31 )
    *(this + 4) = 36;
  return this;
}


// CScriptEntityIterator::FindByClassnameNearest  (line 766, @0x0000000001f785f0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CGameEntitySystem::FindEntityByClassnameNearest, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CScriptEntityIterator::FindByClassnameNearest(
        CScriptEntityIterator *const this,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius)
{
  CBaseEntity *EntityByClassnameNearest; // rax
  CBaseEntity *v6; // [rsp+8h] [rbp-8h]

  EntityByClassnameNearest = CGameEntitySystem::FindEntityByClassnameNearest(
                               g_pGameEntitySystem,
                               szName,
                               vecSrc,
                               flRadius);
  if ( EntityByClassnameNearest == 0 )
    return 0;
  if ( EntityByClassnameNearest->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return EntityByClassnameNearest->m_pEntity->m_hPublicScope.m_hScope;
  v6 = EntityByClassnameNearest;
  CEntityInstance::CreatePublicScriptScope(EntityByClassnameNearest, 0);
  return v6->m_pEntity->m_hPublicScope.m_hScope;
}


// CScriptEntityIterator::FindByClassnameWithin  (line 771, @0x0000000001f79ec0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, CGameEntitySystem::FindEntityByClassnameWithin, CEntityInstance::CreatePublicScriptScope
// globals: g_pScriptVM
HSCRIPT __fastcall CScriptEntityIterator::FindByClassnameWithin(
        CScriptEntityIterator *const this,
        HSCRIPT hStartEntity,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius)
{
  __int64 (__fastcall *v8)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v10; // rax
  CBaseEntity *v11; // rsi
  CBaseEntity *EntityByClassnameWithin; // rax
  float flRadiusa; // [rsp+8h] [rbp-28h]
  CBaseEntity *flRadiusb; // [rsp+8h] [rbp-28h]

  if ( hStartEntity != 0 )
  {
    flRadiusa = flRadius;
    v8 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v10 = v8(g_pScriptVM, hStartEntity, Script);
    flRadius = flRadiusa;
    v11 = v10;
  }
  else
  {
    v11 = 0;
  }
  EntityByClassnameWithin = CGameEntitySystem::FindEntityByClassnameWithin(
                              g_pGameEntitySystem,
                              v11,
                              szName,
                              vecSrc,
                              flRadius);
  if ( EntityByClassnameWithin == 0 )
    return 0;
  if ( EntityByClassnameWithin->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return EntityByClassnameWithin->m_pEntity->m_hPublicScope.m_hScope;
  flRadiusb = EntityByClassnameWithin;
  CEntityInstance::CreatePublicScriptScope(EntityByClassnameWithin, 0);
  return flRadiusb->m_pEntity->m_hPublicScope.m_hScope;
}


// CScriptEntityIterator::FindAllByClassnameWithin  (line 775, @0x0000000001f86bd0, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, TakeOwnership, ToHScript, ~CVariantBase
// calls: CGameEntitySystem::FindEntityByClassnameWithin, CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: g_pScriptVM
CScriptEntityIterator *__fastcall CScriptEntityIterator::FindAllByClassnameWithin(
        CScriptEntityIterator *const this,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius,
        const Vector *a5)
{
  CBaseEntity *v7; // rbx
  CBaseEntity *EntityByClassnameWithin; // rax
  IScriptVM *v9; // rdi
  void (__fastcall *v10)(IScriptVM *, __int64, HSCRIPT *); // r12
  HSCRIPT m_hScope; // rax
  __int64 v12; // rsi
  HSCRIPT v16; // [rsp+20h] [rbp-40h] BYREF
  __int16 v17; // [rsp+28h] [rbp-38h]
  __int16 v18; // [rsp+2Ah] [rbp-36h]

  *(this + 4) = 0;
  *&this->gap0 = 0;
  *(this + 5) = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, this);
  v7 = 0;
  while ( 1 )
  {
    EntityByClassnameWithin = CGameEntitySystem::FindEntityByClassnameWithin(
                                g_pGameEntitySystem,
                                v7,
                                vecSrc,
                                a5,
                                flRadius);
    v7 = EntityByClassnameWithin;
    if ( EntityByClassnameWithin == 0 )
      break;
    v9 = g_pScriptVM;
    v10 = *(*g_pScriptVM + 384LL);
    m_hScope = EntityByClassnameWithin->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v7, 0);
      v9 = g_pScriptVM;
      m_hScope = v7->m_pEntity->m_hPublicScope.m_hScope;
    }
    v12 = *&this->gap0;
    v17 = 31;
    v18 = 0;
    v16 = m_hScope;
    v10(v9, v12, &v16);
    if ( (v18 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v16);
  }
  if ( *(this + 4) == 31 )
    *(this + 4) = 36;
  return this;
}


// GetScriptDesc<CScriptEntityIterator>  (line 865, @0x0000000001f4a1a0, libserver.so)  // inlines: AddParameterType, CUtlMemory, CUtlVector, CUtlVectorBase, Finalize, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CScriptEntityIterator*, CScriptEntityIterator, CVariantBase<CVariantDefaultAllocator>, char const*, const Vector&, float>, ScriptDeduceFunctionSignature<CScriptEntityIterator*, CScriptEntityIterator, CVariantBase<CVariantDefaultAllocator>, char const*>, ScriptDeduceFunctionSignature<CScriptEntityIterator*, CScriptEntityIterator, CVariantBase<CVariantDefaultAllocator>, const Vector&, float>, ScriptDeduceFunctionSignature<CScriptEntityIterator*, CScriptEntityIterator, HSCRIPT__*, HSCRIPT__*, char const*, const Vector&, float>, ScriptDeduceFunctionSignature<CScriptEntityIterator*, CScriptEntityIterator, HSCRIPT__*, HSCRIPT__*, char const*>, ScriptDeduceFunctionSignature<CScriptEntityIterator*, CScriptEntityIterator, HSCRIPT__*, HSCRIPT__*, const Vector&, float>, ScriptDeduceFunctionSignature<CScriptEntityIterator*, CScriptEntityIterator, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<CScriptEntityIterator*, CScriptEntityIterator, HSCRIPT__*, char const*, const Vector&, float>, ScriptDeduceFunctionSignature<CScriptEntityIterator*, CScriptEntityIterator, HSCRIPT__*, char const*>, ScriptDeduceFunctionSignature<CScriptEntityIterator*, CScriptEntityIterator, HSCRIPT__*>, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >::AddToTail
// callers: CVScriptGameSystem::InstallScriptBindings
// strings: "!The global list of entities", "CEntities", "CScriptEntityIterator", "Begin an iteration over the list of entities", "Continue an iteration over the list of entities, providing reference to a previously foun, "Creates an entity by classname" (40 total)
// globals: g_pCScriptEntityIterator_ScriptDesc, CMemberScriptBinding0<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(void),HSCRIPT__ *>::Call(void *,void *,CVariantBase<CVariantDefaultAllocato, CScriptEntityIterator::First(void), CMemberScriptBinding1<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(HSCRIPT__ *),HSCRIPT__ *,HSCRIPT__ *>::Call(void *,void *,CVariantBase<CVar, CScriptEntityIterator::Next(HSCRIPT__ *), CMemberScriptBinding1<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(char const*),HSCRIPT__ *,char const*>::Call(void *,void *,CVariantBase<CVar, CScriptEntityIterator::CreateByClassname(char const*), CMemberScriptBinding2<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(HSCRIPT__ *,char const*),HSCRIPT__ *,HSCRIPT__ *,char const*>::Call(void *, (31 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CScriptEntityIterator>(CScriptEntityIterator *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // r12
  CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int> > *p_m_FunctionBindings; // rbx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  char v7; // dl
  char v8; // di
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rdx
  int v12; // eax
  char v13; // dl
  char v14; // di
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rdx
  int v18; // eax
  char v19; // dl
  char v20; // di
  __int64 v21; // rcx
  char v22; // al
  char v23; // dl
  int v24; // eax
  char v25; // dl
  char v26; // di
  __int64 v27; // rcx
  char v28; // al
  __int64 v29; // rdx
  int v30; // eax
  char v31; // dl
  char v32; // di
  __int64 v33; // rcx
  char v34; // al
  char v35; // dl
  int v36; // eax
  char v37; // dl
  char v38; // di
  __int64 v39; // rcx
  char v40; // al
  __int64 v41; // rdx
  int v42; // eax
  char v43; // dl
  char v44; // di
  __int64 v45; // rcx
  char v46; // al
  char v47; // dl
  int v48; // eax
  char v49; // dl
  char v50; // di
  __int64 v51; // rcx
  char v52; // al
  char v53; // dl
  int v54; // eax
  char v55; // dl
  char v56; // di
  __int64 v57; // rcx
  char v58; // al
  char v59; // dl
  int v60; // eax
  char v61; // dl
  char v62; // di
  __int64 v63; // rax
  char v64; // dl
  __int64 v65; // rcx
  int v66; // edx
  char v67; // cl
  __int64 v68; // rcx
  char v69; // dl
  char v70; // al
  int v71; // edx
  char v72; // al
  char v73; // di
  __int64 v74; // rcx
  char v75; // dl
  __int64 v76; // rax
  int v77; // edx
  char v78; // al
  char v79; // di
  __int64 v80; // rcx
  char v81; // dl
  char v82; // al
  int v83; // edx
  char v84; // al
  char v85; // di
  __int64 v86; // rcx
  char v87; // dl
  char v88; // al
  int v89; // edx
  char v90; // al
  char v91; // di
  __int64 v92; // rcx
  char v93; // dl
  char v94; // al
  int v95; // edx
  char v96; // al
  char v97; // di
  __int64 v98; // rcx
  char v99; // dl
  char v100; // al
  int v101; // edx
  char v102; // al
  char v103; // di
  __int64 v104; // rcx
  char v105; // dl
  char v106; // al
  int v107; // edx
  char v108; // al
  char v109; // di
  __int64 v110; // rax
  char v111; // dl
  char v112; // cl
  int v113; // edx
  char v114; // cl
  __int64 v115; // rax
  char v116; // dl
  char v117; // cl
  int v118; // edx
  char v119; // cl

  result = g_pCScriptEntityIterator_ScriptDesc;
  if ( g_pCScriptEntityIterator_ScriptDesc == 0 )
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
    g_pCScriptEntityIterator_ScriptDesc = v2;
    v2->m_pszDescription = "!The global list of entities";
    v2->m_pszScriptName = "CEntities";
    v2->m_pszClassname = "CScriptEntityIterator";
    v4 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(&v2->m_FunctionBindings)];
    *(v4 + 24) = 31;
    *(v4 + 16) = "Begin an iteration over the list of entities";
    *v4 = "First";
    *(v4 + 8) = "First";
    v5 = *(v4 + 26);
    *(v4 + 25) = 0;
    v6 = v5 - 1;
    if ( v6 >= 0 && *(v4 + v6 + 27) == 32 )
    {
      v7 = 1;
      do
      {
        --v6;
        v8 = v7;
        if ( v6 == -1 )
        {
          *(v4 + 25) = v7;
          goto LABEL_8;
        }
        ++v7;
      }
      while ( *(v4 + v6 + 27) == 32 );
      *(v4 + 25) = v8;
    }
LABEL_8:
    *(v4 + 64) = 1;
    *(v4 + 48) = CMemberScriptBinding0<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(void),HSCRIPT__ *>::Call;
    *(v4 + 56) = CScriptEntityIterator::First;
    v9 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v9 + 24) = 31;
    *(v9 + 16) = "Continue an iteration over the list of entities, providing reference to a previously found entity";
    *v9 = "Next";
    *(v9 + 8) = "Next";
    v10 = *(v9 + 26);
    v11 = v10++;
    *(v9 + v11 + 27) = 31;
    *(v9 + 26) = v10;
    v12 = v10 - 1;
    *(v9 + 25) = 0;
    if ( v12 >= 0 && *(v9 + v12 + 27) == 32 )
    {
      v13 = 1;
      do
      {
        --v12;
        v14 = v13;
        if ( v12 == -1 )
        {
          *(v9 + 25) = v13;
          goto LABEL_14;
        }
        ++v13;
      }
      while ( *(v9 + v12 + 27) == 32 );
      *(v9 + 25) = v14;
    }
LABEL_14:
    *(v9 + 64) = 1;
    *(v9 + 48) = CMemberScriptBinding1<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(HSCRIPT__ *),HSCRIPT__ *,HSCRIPT__ *>::Call;
    *(v9 + 56) = CScriptEntityIterator::Next;
    v15 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v15 + 24) = 31;
    *(v15 + 16) = "Creates an entity by classname";
    *v15 = "CreateByClassname";
    *(v15 + 8) = "CreateByClassname";
    v16 = *(v15 + 26);
    v17 = v16++;
    *(v15 + v17 + 27) = 30;
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
    *(v15 + 48) = CMemberScriptBinding1<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(char const*),HSCRIPT__ *,char const*>::Call;
    *(v15 + 56) = CScriptEntityIterator::CreateByClassname;
    v21 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v21 + 24) = 31;
    *(v21 + 16) = "Find entities by class name. Pass 'null' to start an iteration, or reference to a previously found ent"
                  "ity to continue a search";
    *v21 = "FindByClassname";
    *(v21 + 8) = "FindByClassname";
    v22 = *(v21 + 26);
    *(v21 + v22 + 27) = 31;
    v23 = v22 + 1;
    v22 += 2;
    *(v21 + v23 + 27) = 30;
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
    *(v21 + 48) = CMemberScriptBinding2<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(HSCRIPT__ *,char const*),HSCRIPT__ *,HSCRIPT__ *,char const*>::Call;
    *(v21 + 56) = CScriptEntityIterator::FindByClassname;
    v27 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v27 + 24) = 32;
    *(v27 + 16) = "Finds all entities by class name. Returns an array containing all the found entities.";
    *v27 = "FindAllByClassname";
    *(v27 + 8) = "FindAllByClassname";
    v28 = *(v27 + 26);
    v29 = v28++;
    *(v27 + v29 + 27) = 30;
    *(v27 + 26) = v28;
    v30 = v28 - 1;
    *(v27 + 25) = 0;
    if ( v30 >= 0 && *(v27 + v30 + 27) == 32 )
    {
      v31 = 1;
      do
      {
        --v30;
        v32 = v31;
        if ( v30 == -1 )
        {
          *(v27 + 25) = v31;
          goto LABEL_32;
        }
        ++v31;
      }
      while ( *(v27 + v30 + 27) == 32 );
      *(v27 + 25) = v32;
    }
LABEL_32:
    *(v27 + 64) = 1;
    *(v27 + 48) = CMemberScriptBinding1<CScriptEntityIterator *,CVariantBase<CVariantDefaultAllocator> (CScriptEntityIterator::*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
    *(v27 + 56) = CScriptEntityIterator::FindAllByClassname;
    v33 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v33 + 24) = 31;
    *(v33 + 16) = "Find entities by name. Pass 'null' to start an iteration, or reference to a previously found entity to"
                  " continue a search";
    *v33 = "FindByName";
    *(v33 + 8) = "FindByName";
    v34 = *(v33 + 26);
    *(v33 + v34 + 27) = 31;
    v35 = v34 + 1;
    v34 += 2;
    *(v33 + v35 + 27) = 30;
    *(v33 + 26) = v34;
    v36 = v34 - 1;
    *(v33 + 25) = 0;
    if ( v36 >= 0 && *(v33 + v36 + 27) == 32 )
    {
      v37 = 1;
      do
      {
        --v36;
        v38 = v37;
        if ( v36 == -1 )
        {
          *(v33 + 25) = v37;
          goto LABEL_38;
        }
        ++v37;
      }
      while ( *(v33 + v36 + 27) == 32 );
      *(v33 + 25) = v38;
    }
LABEL_38:
    *(v33 + 64) = 1;
    *(v33 + 48) = CMemberScriptBinding2<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(HSCRIPT__ *,char const*),HSCRIPT__ *,HSCRIPT__ *,char const*>::Call;
    *(v33 + 56) = CScriptEntityIterator::FindByName;
    v39 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v39 + 24) = 32;
    *(v39 + 16) = "Find all entities by name. Returns an array containing all the found entities in it.";
    *v39 = "FindAllByName";
    *(v39 + 8) = "FindAllByName";
    v40 = *(v39 + 26);
    v41 = v40++;
    *(v39 + v41 + 27) = 30;
    *(v39 + 26) = v40;
    v42 = v40 - 1;
    *(v39 + 25) = 0;
    if ( v42 >= 0 && *(v39 + v42 + 27) == 32 )
    {
      v43 = 1;
      do
      {
        --v42;
        v44 = v43;
        if ( v42 == -1 )
        {
          *(v39 + 25) = v43;
          goto LABEL_44;
        }
        ++v43;
      }
      while ( *(v39 + v42 + 27) == 32 );
      *(v39 + 25) = v44;
    }
LABEL_44:
    *(v39 + 64) = 1;
    *(v39 + 48) = CMemberScriptBinding1<CScriptEntityIterator *,CVariantBase<CVariantDefaultAllocator> (CScriptEntityIterator::*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
    *(v39 + 56) = CScriptEntityIterator::FindAllByName;
    v45 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v45 + 24) = 31;
    *(v45 + 16) = "Find entities within a radius. Pass 'null' to start an iteration, or reference to a previously found e"
                  "ntity to continue a search";
    *v45 = "FindInSphere";
    *(v45 + 8) = "FindInSphere";
    v46 = *(v45 + 26);
    *(v45 + v46 + 27) = 31;
    *(v45 + (v46 + 1) + 27) = 3;
    v47 = v46 + 2;
    v46 += 3;
    *(v45 + v47 + 27) = 1;
    *(v45 + 26) = v46;
    v48 = v46 - 1;
    *(v45 + 25) = 0;
    if ( v48 >= 0 && *(v45 + v48 + 27) == 32 )
    {
      v49 = 1;
      do
      {
        --v48;
        v50 = v49;
        if ( v48 == -1 )
        {
          *(v45 + 25) = v49;
          goto LABEL_50;
        }
        ++v49;
      }
      while ( *(v45 + v48 + 27) == 32 );
      *(v45 + 25) = v50;
    }
LABEL_50:
    *(v45 + 64) = 1;
    *(v45 + 48) = CMemberScriptBinding3<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(HSCRIPT__ *,Vector const&,float),HSCRIPT__ *,HSCRIPT__ *,Vector const&,float>::Call;
    *(v45 + 56) = CScriptEntityIterator::FindInSphere;
    v51 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v51 + 24) = 32;
    *(v51 + 16) = "Find entities within a radius.";
    *v51 = "FindAllInSphere";
    *(v51 + 8) = "FindAllInSphere";
    v52 = *(v51 + 26);
    *(v51 + v52 + 27) = 3;
    v53 = v52 + 1;
    v52 += 2;
    *(v51 + v53 + 27) = 1;
    *(v51 + 26) = v52;
    v54 = v52 - 1;
    *(v51 + 25) = 0;
    if ( v54 >= 0 && *(v51 + v54 + 27) == 32 )
    {
      v55 = 1;
      do
      {
        --v54;
        v56 = v55;
        if ( v54 == -1 )
        {
          *(v51 + 25) = v55;
          goto LABEL_56;
        }
        ++v55;
      }
      while ( *(v51 + v54 + 27) == 32 );
      *(v51 + 25) = v56;
    }
LABEL_56:
    *(v51 + 64) = 1;
    *(v51 + 48) = CMemberScriptBinding2<CScriptEntityIterator *,CVariantBase<CVariantDefaultAllocator> (CScriptEntityIterator::*)(Vector const&,float),CVariantBase<CVariantDefaultAllocator>,Vector const&,float>::Call;
    *(v51 + 56) = CScriptEntityIterator::FindAllInSphere;
    v57 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v57 + 24) = 31;
    *(v57 + 16) = "Find entities by targetname. Pass 'null' to start an iteration, or reference to a previously found ent"
                  "ity to continue a search";
    *v57 = "FindByTarget";
    *(v57 + 8) = "FindByTarget";
    v58 = *(v57 + 26);
    *(v57 + v58 + 27) = 31;
    v59 = v58 + 1;
    v58 += 2;
    *(v57 + v59 + 27) = 30;
    *(v57 + 26) = v58;
    v60 = v58 - 1;
    *(v57 + 25) = 0;
    if ( v60 >= 0 && *(v57 + v60 + 27) == 32 )
    {
      v61 = 1;
      do
      {
        --v60;
        v62 = v61;
        if ( v60 == -1 )
        {
          *(v57 + 25) = v61;
          goto LABEL_62;
        }
        ++v61;
      }
      while ( *(v57 + v60 + 27) == 32 );
      *(v57 + 25) = v62;
    }
LABEL_62:
    *(v57 + 64) = 1;
    *(v57 + 48) = CMemberScriptBinding2<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(HSCRIPT__ *,char const*),HSCRIPT__ *,HSCRIPT__ *,char const*>::Call;
    *(v57 + 56) = CScriptEntityIterator::FindByTarget;
    v63 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v64 = *(v63 + 26);
    *(v63 + 16) = "Find entities by targetname.";
    *v63 = "FindAllByTarget";
    *(v63 + 8) = "FindAllByTarget";
    *(v63 + 24) = 32;
    v65 = v64++;
    *(v63 + v65 + 27) = 30;
    *(v63 + 26) = v64;
    v66 = v64 - 1;
    *(v63 + 25) = 0;
    if ( v66 >= 0 && *(v63 + v66 + 27) == 32 )
    {
      v67 = 0;
      do
      {
        --v66;
        ++v67;
      }
      while ( v66 != -1 && *(v63 + v66 + 27) == 32 );
      *(v63 + 25) = v67;
    }
    *(v63 + 64) = 1;
    *(v63 + 48) = CMemberScriptBinding1<CScriptEntityIterator *,CVariantBase<CVariantDefaultAllocator> (CScriptEntityIterator::*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
    *(v63 + 56) = CScriptEntityIterator::FindAllByTarget;
    v68 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v69 = *(v68 + 26);
    *(v68 + 24) = 31;
    *(v68 + 16) = "Find entities by model name. Pass 'null' to start an iteration, or reference to a previously found ent"
                  "ity to continue a search";
    *v68 = "FindByModel";
    *(v68 + 8) = "FindByModel";
    *(v68 + v69 + 27) = 31;
    v70 = v69 + 1;
    v69 += 2;
    *(v68 + v70 + 27) = 30;
    *(v68 + 26) = v69;
    v71 = v69 - 1;
    *(v68 + 25) = 0;
    if ( v71 >= 0 && *(v68 + v71 + 27) == 32 )
    {
      v72 = 1;
      do
      {
        --v71;
        v73 = v72;
        if ( v71 == -1 )
        {
          *(v68 + 25) = v72;
          goto LABEL_74;
        }
        ++v72;
      }
      while ( *(v68 + v71 + 27) == 32 );
      *(v68 + 25) = v73;
    }
LABEL_74:
    *(v68 + 64) = 1;
    *(v68 + 48) = CMemberScriptBinding2<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(HSCRIPT__ *,char const*),HSCRIPT__ *,HSCRIPT__ *,char const*>::Call;
    *(v68 + 56) = CScriptEntityIterator::FindByModel;
    v74 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v75 = *(v74 + 26);
    *(v74 + 24) = 32;
    *(v74 + 16) = "Find entities by model name.";
    *v74 = "FindAllByModel";
    *(v74 + 8) = "FindAllByModel";
    v76 = v75++;
    *(v74 + v76 + 27) = 30;
    *(v74 + 26) = v75;
    v77 = v75 - 1;
    *(v74 + 25) = 0;
    if ( v77 >= 0 && *(v74 + v77 + 27) == 32 )
    {
      v78 = 1;
      do
      {
        --v77;
        v79 = v78;
        if ( v77 == -1 )
        {
          *(v74 + 25) = v78;
          goto LABEL_80;
        }
        ++v78;
      }
      while ( *(v74 + v77 + 27) == 32 );
      *(v74 + 25) = v79;
    }
LABEL_80:
    *(v74 + 64) = 1;
    *(v74 + 48) = CMemberScriptBinding1<CScriptEntityIterator *,CVariantBase<CVariantDefaultAllocator> (CScriptEntityIterator::*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
    *(v74 + 56) = CScriptEntityIterator::FindAllByModel;
    v80 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v81 = *(v80 + 26);
    *(v80 + 24) = 31;
    *(v80 + 16) = "Find entities by model name within a radius. Pass 'null' to start an iteration, or reference to a prev"
                  "iously found entity to continue a search";
    *v80 = "FindByModelWithin";
    *(v80 + 8) = "FindByModelWithin";
    *(v80 + v81 + 27) = 31;
    *(v80 + (v81 + 1) + 27) = 30;
    *(v80 + (v81 + 2) + 27) = 3;
    v82 = v81 + 3;
    v81 += 4;
    *(v80 + v82 + 27) = 1;
    *(v80 + 26) = v81;
    v83 = v81 - 1;
    *(v80 + 25) = 0;
    if ( v83 >= 0 && *(v80 + v83 + 27) == 32 )
    {
      v84 = 1;
      do
      {
        --v83;
        v85 = v84;
        if ( v83 == -1 )
        {
          *(v80 + 25) = v84;
          goto LABEL_86;
        }
        ++v84;
      }
      while ( *(v80 + v83 + 27) == 32 );
      *(v80 + 25) = v85;
    }
LABEL_86:
    *(v80 + 64) = 1;
    *(v80 + 48) = CMemberScriptBinding4<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(HSCRIPT__ *,char const*,Vector const&,float),HSCRIPT__ *,HSCRIPT__ *,char const*,Vector const&,float>::Call;
    *(v80 + 56) = CScriptEntityIterator::FindByModelWithin;
    v86 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v87 = *(v86 + 26);
    *(v86 + 24) = 31;
    *(v86 + 16) = "Find entities by name nearest to a point.";
    *v86 = "FindByNameNearest";
    *(v86 + 8) = "FindByNameNearest";
    *(v86 + v87 + 27) = 30;
    *(v86 + (v87 + 1) + 27) = 3;
    v88 = v87 + 2;
    v87 += 3;
    *(v86 + v88 + 27) = 1;
    *(v86 + 26) = v87;
    v89 = v87 - 1;
    *(v86 + 25) = 0;
    if ( v89 >= 0 && *(v86 + v89 + 27) == 32 )
    {
      v90 = 1;
      do
      {
        --v89;
        v91 = v90;
        if ( v89 == -1 )
        {
          *(v86 + 25) = v90;
          goto LABEL_92;
        }
        ++v90;
      }
      while ( *(v86 + v89 + 27) == 32 );
      *(v86 + 25) = v91;
    }
LABEL_92:
    *(v86 + 64) = 1;
    *(v86 + 48) = CMemberScriptBinding3<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(char const*,Vector const&,float),HSCRIPT__ *,char const*,Vector const&,float>::Call;
    *(v86 + 56) = CScriptEntityIterator::FindByNameNearest;
    v92 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v93 = *(v92 + 26);
    *(v92 + 24) = 31;
    *(v92 + 16) = "Find entities by name within a radius. Pass 'null' to start an iteration, or reference to a previously"
                  " found entity to continue a search";
    *v92 = "FindByNameWithin";
    *(v92 + 8) = "FindByNameWithin";
    *(v92 + v93 + 27) = 31;
    *(v92 + (v93 + 1) + 27) = 30;
    *(v92 + (v93 + 2) + 27) = 3;
    v94 = v93 + 3;
    v93 += 4;
    *(v92 + v94 + 27) = 1;
    *(v92 + 26) = v93;
    v95 = v93 - 1;
    *(v92 + 25) = 0;
    if ( v95 >= 0 && *(v92 + v95 + 27) == 32 )
    {
      v96 = 1;
      do
      {
        --v95;
        v97 = v96;
        if ( v95 == -1 )
        {
          *(v92 + 25) = v96;
          goto LABEL_98;
        }
        ++v96;
      }
      while ( *(v92 + v95 + 27) == 32 );
      *(v92 + 25) = v97;
    }
LABEL_98:
    *(v92 + 64) = 1;
    *(v92 + 48) = CMemberScriptBinding4<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(HSCRIPT__ *,char const*,Vector const&,float),HSCRIPT__ *,HSCRIPT__ *,char const*,Vector const&,float>::Call;
    *(v92 + 56) = CScriptEntityIterator::FindByNameWithin;
    v98 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v99 = *(v98 + 26);
    *(v98 + 24) = 32;
    *(v98 + 16) = "Find entities by name within a radius.";
    *v98 = "FindAllByNameWithin";
    *(v98 + 8) = "FindAllByNameWithin";
    *(v98 + v99 + 27) = 30;
    *(v98 + (v99 + 1) + 27) = 3;
    v100 = v99 + 2;
    v99 += 3;
    *(v98 + v100 + 27) = 1;
    *(v98 + 26) = v99;
    v101 = v99 - 1;
    *(v98 + 25) = 0;
    if ( v101 >= 0 && *(v98 + v101 + 27) == 32 )
    {
      v102 = 1;
      do
      {
        --v101;
        v103 = v102;
        if ( v101 == -1 )
        {
          *(v98 + 25) = v102;
          goto LABEL_104;
        }
        ++v102;
      }
      while ( *(v98 + v101 + 27) == 32 );
      *(v98 + 25) = v103;
    }
LABEL_104:
    *(v98 + 64) = 1;
    *(v98 + 48) = CMemberScriptBinding3<CScriptEntityIterator *,CVariantBase<CVariantDefaultAllocator> (CScriptEntityIterator::*)(char const*,Vector const&,float),CVariantBase<CVariantDefaultAllocator>,char const*,Vector const&,float>::Call;
    *(v98 + 56) = CScriptEntityIterator::FindAllByNameWithin;
    v104 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v105 = *(v104 + 26);
    *(v104 + 24) = 31;
    *(v104 + 16) = "Find entities by class name nearest to a point.";
    *v104 = "FindByClassnameNearest";
    *(v104 + 8) = "FindByClassnameNearest";
    *(v104 + v105 + 27) = 30;
    *(v104 + (v105 + 1) + 27) = 3;
    v106 = v105 + 2;
    v105 += 3;
    *(v104 + v106 + 27) = 1;
    *(v104 + 26) = v105;
    v107 = v105 - 1;
    *(v104 + 25) = 0;
    if ( v107 >= 0 && *(v104 + v107 + 27) == 32 )
    {
      v108 = 1;
      do
      {
        --v107;
        v109 = v108;
        if ( v107 == -1 )
        {
          *(v104 + 25) = v108;
          goto LABEL_110;
        }
        ++v108;
      }
      while ( *(v104 + v107 + 27) == 32 );
      *(v104 + 25) = v109;
    }
LABEL_110:
    *(v104 + 64) = 1;
    *(v104 + 48) = CMemberScriptBinding3<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(char const*,Vector const&,float),HSCRIPT__ *,char const*,Vector const&,float>::Call;
    *(v104 + 56) = CScriptEntityIterator::FindByClassnameNearest;
    v110 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v111 = *(v110 + 26);
    *(v110 + 16) = "Find entities by class name within a radius. Pass 'null' to start an iteration, or reference to a pre"
                   "viously found entity to continue a search";
    *v110 = "FindByClassnameWithin";
    *(v110 + 8) = "FindByClassnameWithin";
    *(v110 + 24) = 31;
    *(v110 + v111 + 27) = 31;
    *(v110 + (v111 + 1) + 27) = 30;
    *(v110 + (v111 + 2) + 27) = 3;
    v112 = v111 + 3;
    v111 += 4;
    *(v110 + v112 + 27) = 1;
    *(v110 + 26) = v111;
    v113 = v111 - 1;
    *(v110 + 25) = 0;
    if ( v113 >= 0 && *(v110 + v113 + 27) == 32 )
    {
      v114 = 0;
      do
      {
        --v113;
        ++v114;
      }
      while ( v113 != -1 && *(v110 + v113 + 27) == 32 );
      *(v110 + 25) = v114;
    }
    *(v110 + 64) = 1;
    *(v110 + 48) = CMemberScriptBinding4<CScriptEntityIterator *,HSCRIPT__ * (CScriptEntityIterator::*)(HSCRIPT__ *,char const*,Vector const&,float),HSCRIPT__ *,HSCRIPT__ *,char const*,Vector const&,float>::Call;
    *(v110 + 56) = CScriptEntityIterator::FindByClassnameWithin;
    v115 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v116 = *(v115 + 26);
    *(v115 + 16) = "Find entities by class name within a radius.";
    *v115 = "FindAllByClassnameWithin";
    *(v115 + 8) = "FindAllByClassnameWithin";
    *(v115 + 24) = 32;
    *(v115 + v116 + 27) = 30;
    *(v115 + (v116 + 1) + 27) = 3;
    v117 = v116 + 2;
    v116 += 3;
    *(v115 + v117 + 27) = 1;
    *(v115 + 26) = v116;
    v118 = v116 - 1;
    *(v115 + 25) = 0;
    if ( v118 >= 0 && *(v115 + v118 + 27) == 32 )
    {
      v119 = 0;
      do
      {
        --v118;
        ++v119;
      }
      while ( v118 != -1 && *(v115 + v118 + 27) == 32 );
      *(v115 + 25) = v119;
    }
    *(v115 + 64) = 1;
    *(v115 + 48) = CMemberScriptBinding3<CScriptEntityIterator *,CVariantBase<CVariantDefaultAllocator> (CScriptEntityIterator::*)(char const*,Vector const&,float),CVariantBase<CVariantDefaultAllocator>,char const*,Vector const&,float>::Call;
    *(v115 + 56) = CScriptEntityIterator::FindAllByClassnameWithin;
    return v2;
  }
  return result;
}


// CVScriptGameEventListener::~CVScriptGameEventListener  (line 903, @0x0000000001f934b0, libserver.so)  // inlines: Purge, StopListeningForAllEvents, ~CGameEventListener, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~IGameEventListener2
// calls: CUtlRBTree<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CVScriptGameEventListener::~CVScriptGameEventListener(CVScriptGameEventListener *const this)
{
  CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int> >*,short unsigned int,bool (*)(int const&,int const&)> *p_m_GameEventFunctions; // rdi
  bool v3; // zf

  p_m_GameEventFunctions = &this->m_GameEventFunctions;
  *&p_m_GameEventFunctions[-1].m_Tree.m_Root = off_3FCEBF0;
  CUtlRBTree<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&p_m_GameEventFunctions->m_Tree);
  if ( (this->m_GameEventFunctions.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_GameEventFunctions.m_Tree.m_Elements);
  v3 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v3 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
}


// CVScriptGameEventListener::~CVScriptGameEventListener  (line 903, @0x0000000001f93530, libserver.so)  // inlines: Purge, StopListeningForAllEvents, ~CGameEventListener, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CVScriptGameEventListener, ~IGameEventListener2
// calls: CUtlRBTree<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int>, short unsigned int>::Purge, operator delete
void __fastcall CVScriptGameEventListener::~CVScriptGameEventListener(CVScriptGameEventListener *const this)
{
  CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int> >*,short unsigned int,bool (*)(int const&,int const&)> *p_m_GameEventFunctions; // rdi
  bool v3; // zf

  p_m_GameEventFunctions = &this->m_GameEventFunctions;
  *&p_m_GameEventFunctions[-1].m_Tree.m_Root = off_3FCEBF0;
  CUtlRBTree<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&p_m_GameEventFunctions->m_Tree);
  if ( (this->m_GameEventFunctions.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_GameEventFunctions.m_Tree.m_Elements);
  v3 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v3 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  operator delete(this);
}


// CVScriptGameEventListener::StopListeningToAllGameEvents  (line 988, @0x0000000001f93660, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlVectorBase<CVScriptGameEventListener::GameEventFunc_t, CUtlMemory<CVScriptGameEventListener::GameEventFunc_t, int> >::Remove
// callers: ScriptStopListeningToAllGameEvents, CVScriptGameSystem::UnregisterGameEventListenersInScope
// globals: g_pScriptVM
void __fastcall CVScriptGameEventListener::StopListeningToAllGameEvents(
        CVScriptGameEventListener *const this,
        HSCRIPT hContext)
{
  __int64 v3; // r12
  unsigned __int16 m_Root; // cx
  UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v6; // rax
  CUtlVectorBase<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int> > *elem; // rbx
  int v8; // r14d
  __int64 v9; // r15
  CVScriptGameEventListener::GameEventFunc_t *v10; // r13
  unsigned __int16 i; // [rsp+1Eh] [rbp-32h]

  v3 = (*(*g_pScriptVM + 208LL))(g_pScriptVM, hContext, 0);
  if ( v3 != 0 )
  {
    m_Root = this->m_GameEventFunctions.m_Tree.m_Root;
    if ( m_Root != 0xFFFF )
    {
      m_pMemory = this->m_GameEventFunctions.m_Tree.m_Elements.m_pMemory;
      v6 = m_Root;
      i = m_pMemory[m_Root].m_Left;
      if ( i == 0xFFFF )
      {
        i = this->m_GameEventFunctions.m_Tree.m_Root;
      }
      else
      {
        while ( 1 )
        {
          v6 = i;
          if ( m_pMemory[i].m_Left == 0xFFFF )
            break;
          i = m_pMemory[i].m_Left;
        }
      }
      while ( 1 )
      {
        elem = m_pMemory[v6].m_Data.elem;
        v8 = elem->m_Size - 1;
        if ( v8 >= 0 )
        {
          v9 = v8;
          do
          {
            v10 = &elem->m_Memory.m_pMemory[v9];
            if ( v3 == (*(*g_pScriptVM + 208LL))(g_pScriptVM, v10->m_hContext, 0) )
            {
              (*(*g_pScriptVM + 152LL))(g_pScriptVM, v10->m_hFunction);
              (*(*g_pScriptVM + 96LL))(g_pScriptVM, v10->m_hContext);
              CUtlVectorBase<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>>::Remove(
                elem,
                v8);
            }
            --v8;
            --v9;
          }
          while ( v8 != -1 );
        }
        i = CUtlRBTree<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
              &this->m_GameEventFunctions.m_Tree,
              i);
        if ( i == 0xFFFF )
          break;
        m_pMemory = this->m_GameEventFunctions.m_Tree.m_Elements.m_pMemory;
        v6 = i;
      }
    }
  }
}


// CVScriptGameEventListener::FireGameEvent  (line 1010, @0x0000000001f93930, libserver.so)  // inlines: CVariantBase, CreateTableFromKeyValues, Element, Find, Free, operator[], ~CVariantBase
// calls: CUtlRBTree<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int>, short unsigned int> >::Find, CVariantBase<CVariantDefaultAllocator>::Free, Recursive_ConvertKeyValuesToTable, _Unwind_Resume
// globals: g_pScriptVM
void __fastcall CVScriptGameEventListener::FireGameEvent(CVScriptGameEventListener *const this, IGameEvent *event)
{
  unsigned __int16 v4; // ax
  CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int> >*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // r13
  int (**vptr_IGameEvent)(...); // rax
  __int64 v7; // rax
  IScriptVM *v8; // rbx
  KeyValues *v9; // r12
  uint64 m_uint64; // rdx
  __int64 v11; // r12
  int i; // ebx
  CVScriptGameEventListener::GameEventFunc_t *v13; // rax
  CVariantBase<CVariantDefaultAllocator> args[1]; // [rsp+10h] [rbp-50h] BYREF
  ScriptVariant_t result; // [rsp+20h] [rbp-40h] BYREF

  result.m_int = (*(event->_vptr_IGameEvent + 3))(event);
  v4 = CUtlRBTree<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_GameEventFunctions.m_Tree,
         &result);
  if ( v4 != 0xFFFF )
  {
    elem = this->m_GameEventFunctions.m_Tree.m_Elements.m_pMemory[v4].m_Data.elem;
    if ( elem->m_Size != 0 )
    {
      vptr_IGameEvent = event->_vptr_IGameEvent;
      args[0].m_type = 0;
      args[0].m_flags = 0;
      args[0].m_uint64 = 0;
      v7 = (vptr_IGameEvent[19])(event);
      v8 = g_pScriptVM;
      v9 = v7;
      (*(*g_pScriptVM + 264LL))(g_pScriptVM, args);
      m_uint64 = args[0].m_uint64;
      if ( v9 != 0 && args[0].m_uint64 != 0 )
        Recursive_ConvertKeyValuesToTable(v9, v8, args[0].m_hScript);
      v11 = 0;
      for ( i = 0; elem->m_Size > i; ++v11 )
      {
        v13 = &elem->m_Memory.m_pMemory[v11];
        result.m_type = 0;
        result.m_flags = 0;
        result.m_uint64 = 0;
        (*(*g_pScriptVM + 160LL))(g_pScriptVM, v13->m_hFunction, args, 1, &result, v13->m_hContext, 1);
        if ( (result.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
        ++i;
      }
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, args, m_uint64);
      CVariantBase<CVariantDefaultAllocator>::Free(args);
    }
  }
}


// ScriptListenToGameEvent  (line 1067, @0x0000000001f6f2d0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CVScriptGameEventListener::GameEventFunc_t>, Element, Find, FindInsertionPosition, GrowMemory, Insert, InsertAt, LeftChild, ListenForGameEvent, ListenToGameEvent, RightChild, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, operator new, CMemAllocSystemInitialize, CUtlMemory<CVScriptGameEventListener::GameEventFunc_t, int>::Grow, DevMsg(char const*,...), operator delete, _Unwind_Resume
// strings: "ScriptListenToGameEvent error: event %s given a nil function.\n"
// globals: g_VScriptGameEventListener, g_pScriptVM
int __fastcall ScriptListenToGameEvent(const char *szEvent, HSCRIPT hFunction, HSCRIPT hContext)
{
  int v5; // eax
  CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int> >*,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t v6; // r14d
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r12
  CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int> >*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // r12
  __int64 m_Size; // r15
  int v12; // eax
  __int64 v13; // rax
  unsigned __int16 m_Root; // r12
  unsigned __int16 m_Left; // ax
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // r14
  CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int> > *v19; // r15
  __int16 v20; // dx
  char v21; // cl
  bool isLeft; // [rsp+8h] [rbp-58h]
  unsigned __int16 parent; // [rsp+Ch] [rbp-54h]
  __int64 v24; // [rsp+10h] [rbp-50h]
  __int64 v25; // [rsp+18h] [rbp-48h]
  CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int> >*,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+20h] [rbp-40h] BYREF

  if ( hFunction == 0 )
  {
    DevMsg("ScriptListenToGameEvent error: event %s given a nil function.\n", szEvent);
    return -1;
  }
  g_VScriptGameEventListener.m_bRegisteredForEvents = 1;
  v5 = (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, &g_VScriptGameEventListener, szEvent, 1);
  v6 = v5;
  if ( v5 < 0 )
    return 0;
  v7 = g_VScriptGameEventListener.m_nNextReferenceNumber | (v5 << 23);
  v25 = (*(*g_pScriptVM + 456LL))(g_pScriptVM, hFunction);
  v8 = (*(*g_pScriptVM + 456LL))(g_pScriptVM, hContext);
  search.key = v6;
  v24 = v8;
  ++g_VScriptGameEventListener.m_nNextReferenceNumber;
  v9 = CUtlRBTree<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &g_VScriptGameEventListener.m_GameEventFunctions.m_Tree,
         &search);
  if ( v9 != 0xFFFF )
    goto LABEL_4;
  m_Root = g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Root;
  search.key = v6;
  if ( g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Root == 0xFFFF )
  {
    v20 = -1;
    v21 = 0;
    goto LABEL_17;
  }
  while ( g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_LessFunc.m_LessFunc(
            &search.key,
            &g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Elements.m_pMemory[m_Root].m_Data.key) )
  {
    m_Left = g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Elements.m_pMemory[m_Root].m_Left;
    v21 = 1;
    if ( m_Left == 0xFFFF )
      goto LABEL_16;
LABEL_13:
    m_Root = m_Left;
  }
  m_Left = g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Elements.m_pMemory[m_Root].m_Right;
  v21 = 0;
  if ( m_Left != 0xFFFF )
    goto LABEL_13;
LABEL_16:
  v20 = m_Root;
LABEL_17:
  isLeft = v21;
  parent = v20;
  v17 = CUtlRBTree<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &g_VScriptGameEventListener.m_GameEventFunctions.m_Tree,
          &search);
  v9 = v17;
  v18 = v17;
  CUtlRBTree<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &g_VScriptGameEventListener.m_GameEventFunctions.m_Tree,
    v17,
    parent,
    isLeft);
  ++g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_NumElements;
  v19 = operator new(0x18u);
  v19->m_Size = 0;
  v19->m_Memory.m_pMemory = 0;
  v19->m_Memory.m_nAllocationCount = 16;
  v19->m_Memory.m_nGrowSize = 16;
  CMemAllocSystemInitialize();
  v19->m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v19->m_Memory.m_nAllocationCount);
  g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Elements.m_pMemory[v18].m_Data.elem = v19;
LABEL_4:
  elem = g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Elements.m_pMemory[v9].m_Data.elem;
  m_Size = elem->m_Size;
  v12 = elem->m_Size;
  if ( m_Size == elem->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>::Grow(&elem->m_Memory, 1);
    v12 = elem->m_Size;
  }
  elem->m_Size = v12 + 1;
  v13 = &elem->m_Memory.m_pMemory[m_Size];
  if ( v13 != 0 )
  {
    *(v13 + 16) = v7;
    *v13 = v25;
    *(v13 + 8) = v24;
  }
  return v7;
}


// ScriptStopListeningToGameEvent  (line 1077, @0x0000000001f44530, libserver.so)  // inlines: Element, Find, StopListeningToGameEvent, operator[]
// calls: CUtlRBTree<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlVectorBase<CVScriptGameEventListener::GameEventFunc_t, CUtlMemory<CVScriptGameEventListener::GameEventFunc_t, int> >::Remove
// globals: g_pScriptVM
bool __fastcall ScriptStopListeningToGameEvent(int nReferenceNumber)
{
  unsigned __int16 v3; // ax
  CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int> >*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // r14
  CVScriptGameEventListener::GameEventFunc_t *m_pMemory; // rax
  CVScriptGameEventListener::GameEventFunc_t *v6; // rax
  int v7; // ebx
  CVScriptGameEventListener::GameEventFunc_t *v8; // r13
  CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int> >*,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( nReferenceNumber == 0 )
    return 0;
  search.key = nReferenceNumber >> 23;
  v3 = CUtlRBTree<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &g_VScriptGameEventListener.m_GameEventFunctions.m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  elem = g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem;
  if ( elem->m_Size <= 0 )
    return 0;
  m_pMemory = elem->m_Memory.m_pMemory;
  if ( nReferenceNumber != m_pMemory->m_nReferenceNumber )
  {
    v6 = m_pMemory + 1;
    v7 = 0;
    while ( ++v7 != elem->m_Size )
    {
      v8 = v6++;
      if ( nReferenceNumber == v6[-1].m_nReferenceNumber )
        goto LABEL_11;
    }
    return 0;
  }
  v8 = elem->m_Memory.m_pMemory;
  v7 = 0;
LABEL_11:
  (*(*g_pScriptVM + 152LL))(g_pScriptVM, v8->m_hFunction);
  (*(*g_pScriptVM + 96LL))(g_pScriptVM, v8->m_hContext);
  CUtlVectorBase<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>>::Remove(
    elem,
    v7);
  return 1;
}


// ScriptStopListeningToAllGameEvents  (line 1082, @0x0000000001f444d0, libserver.so)
// calls: CVScriptGameEventListener::StopListeningToAllGameEvents
// globals: g_VScriptGameEventListener
void __fastcall ScriptStopListeningToAllGameEvents(HSCRIPT hContext)
{
  CVScriptGameEventListener::StopListeningToAllGameEvents(&g_VScriptGameEventListener, hContext);
}


// KeyValuesDump_ToString::KvWriteText  (line 1092, @0x0000000001f2f6f0, libserver.so)  // inlines: append, length
// calls: strlen, std::string::append(char const*,ulong)
bool __fastcall `anonymous namespace'::KeyValuesDump_ToString::KvWriteText(
        `anonymous namespace'::KeyValuesDump_ToString *const this,
        const char *szText)
{
  size_t v4; // rax

  v4 = strlen(szText);
  std::string::append(&this->m_buffer, szText, v4);
  return 1;
}


// ScriptHelper_CreateEvent  (line 1100, @0x0000000001f3b170, libserver.so)  // inlines: AssignTo, AssignTo<long long unsigned int>, CVariantBase, KeyValuesDump_ToString, Min<long long unsigned int>, Min<unsigned int>, TempString, ToString, _Alloc_hider, _V_strcmp, atof, atoi, basic_string, ~CVariantBase, ~KeyValuesDump_ToString, ~basic_string
// calls: CGameEventManager::GetEventDescriptor, KeyValues::GetInt, VariantFieldTypeName, Warning, V_snprintf, CVariantBase<CVariantDefaultAllocator>::TempString, CVariantBase<CVariantDefaultAllocator>::Free, ScriptTableToKeyValues, KeyValues::Dump, KeyValues::~KeyValues, KeyValues::operator delete, std::string::_Rep::_M_dispose(std::allocator<char> const&) (15 total)
// callers: ScriptFireGameEvent, ScriptFireGameEventLocal
// strings: "uint64", "No free conversion of %s variant to %s right now\n", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "false" (11 total)
// globals: g_pScriptVM, jpt_1F3B299, jpt_1F3B2D7, jpt_1F3B2FF, jpt_1F3B327, jpt_1F3B3F2, jpt_1F3B4B0, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
IGameEvent *__fastcall ScriptHelper_CreateEvent(const char *szName, HSCRIPT hParams)
{
  IGameEvent *v2; // rax
  IGameEvent *v3; // r15
  int v4; // ebx
  uint64 m_uint64; // r14
  uint64 v7; // rdx
  __int64 m_char; // rdx
  const char *v9; // rax
  KeyValues *v10; // rax
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  int m_int; // edx
  __m128d v15; // xmm0
  const char *v16; // rax
  const char *v17; // rax
  const char *v18; // rax
  float v19; // xmm3_4
  KeyValues *pKeyValues; // [rsp+8h] [rbp-A8h]
  KeyValues *pKeyValuesa; // [rsp+8h] [rbp-A8h]
  KeyValues *pKeyValuesb; // [rsp+8h] [rbp-A8h]
  unsigned int nValue; // [rsp+10h] [rbp-A0h]
  unsigned __int8 bValue; // [rsp+23h] [rbp-8Dh]
  float flValue; // [rsp+24h] [rbp-8Ch]
  uint64 uValue; // [rsp+28h] [rbp-88h]
  CGameEventDescriptor *pDesc; // [rsp+30h] [rbp-80h]
  char v29; // [rsp+4Fh] [rbp-61h] BYREF
  ScriptVariant_t key; // [rsp+50h] [rbp-60h] BYREF
  ScriptVariant_t val; // [rsp+60h] [rbp-50h] BYREF
  `anonymous namespace'::KeyValuesDump_ToString dumper; // [rsp+70h] [rbp-40h] BYREF

  if ( szName == 0 )
    return 0;
  if ( *szName == 0 )
    return 0;
  v2 = (*(s_GameEventManager._vptr_IBaseInterface + 7))(&s_GameEventManager, szName, 0, 0);
  v3 = v2;
  if ( v2 == 0 )
    return 0;
  pDesc = CGameEventManager::GetEventDescriptor(&s_GameEventManager, v2);
  if ( (*(*g_pScriptVM + 272LL))(g_pScriptVM, hParams) == 0 || pDesc->keys == 0 )
    return v3;
  key.m_uint64 = 0;
  v4 = 0;
  key.m_type = 0;
  key.m_flags = 0;
  val.m_type = 0;
  val.m_flags = 0;
  val.m_uint64 = 0;
  while ( 1 )
  {
    v4 = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hParams, v4, &key, &val);
    if ( v4 < 0 )
      break;
    if ( key.m_type == 30 )
    {
      m_uint64 = key.m_uint64;
      switch ( KeyValues::GetInt(pDesc->keys, key.m_pszString, 0) )
      {
        case 0:
        case 1:
          if ( val.m_type == 31 )
          {
            pKeyValuesa = val.m_uint64;
            if ( (*(*g_pScriptVM + 272LL))(g_pScriptVM, val.m_uint64) != 0 )
            {
              v10 = ScriptTableToKeyValues(g_pScriptVM, "", pKeyValuesa);
              if ( v10 != 0 )
              {
                dumper._vptr_IKeyValuesDumpContext = off_3FC9790;
                pKeyValuesb = v10;
                dumper.m_buffer._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
                KeyValues::Dump(v10, &dumper, 0);
                (*(v3->_vptr_IGameEvent + 17))(v3, m_uint64, dumper.m_buffer._M_dataplus._M_p);
                KeyValues::~KeyValues(pKeyValuesb);
                KeyValues::operator delete(pKeyValuesb);
                dumper._vptr_IKeyValuesDumpContext = off_3FC9790;
                std::string::_Rep::_M_dispose(dumper.m_buffer._M_dataplus._M_p - 24, &v29);
              }
            }
          }
          else
          {
            pKeyValues = *(v3->_vptr_IGameEvent + 17);
            if ( val.m_type == 30 )
              v7 = val.m_uint64;
            else
              v7 = CVariantBase<CVariantDefaultAllocator>::TempString(&val);
            (pKeyValues)(v3, m_uint64, v7);
          }
          break;
        case 2:
          switch ( val.m_type )
          {
            case 0:
              flValue = 0.0;
              goto LABEL_40;
            case 1:
              flValue = val.m_float;
              (*(v3->_vptr_IGameEvent + 16))(v3, m_uint64, val.m_float);
              goto LABEL_18;
            case 5:
            case 0x1A:
            case 0x25:
              goto LABEL_71;
            case 6:
              flValue = val.m_char;
              (*(v3->_vptr_IGameEvent + 16))(v3, m_uint64, flValue);
              goto LABEL_18;
            case 0x1E:
              v15.m128d_f64[0] = strtod(val.m_pszString, 0);
              flValue = _mm_movedup_pd(v15).m128d_f64[0];
              (*(v3->_vptr_IGameEvent + 16))(v3, m_uint64, flValue);
              goto LABEL_18;
            case 0x21:
              if ( val.m_int64 < 0 )
              {
                v19 = (val.m_char & 1 | (val.m_uint64 >> 1));
                flValue = v19 + v19;
                (*(v3->_vptr_IGameEvent + 16))(v3, m_uint64, v19 + v19);
              }
              else
              {
LABEL_71:
                flValue = val.m_int;
                (*(v3->_vptr_IGameEvent + 16))(v3, m_uint64, val.m_int);
              }
              break;
            case 0x22:
              flValue = val.m_float64;
              (*(v3->_vptr_IGameEvent + 16))(v3, m_uint64, flValue);
              break;
            default:
              v16 = VariantFieldTypeName(val.m_type);
              Warning("No conversion from %s to float now\n", v16);
LABEL_40:
              (*(v3->_vptr_IGameEvent + 16))(v3, m_uint64, flValue);
              break;
          }
          break;
        case 3:
        case 4:
        case 5:
          switch ( val.m_type )
          {
            case 0:
              nValue = 0;
              break;
            case 1:
              nValue = val.m_float;
              break;
            case 5:
              nValue = val.m_int;
              break;
            case 6:
              nValue = val.m_char;
              break;
            case 0x1A:
              nValue = 0x7FFFFFFF;
              if ( val.m_int64 <= 0x7FFFFFFF )
              {
                m_int = 0x80000000;
                if ( val.m_int64 >= 0xFFFFFFFF80000000LL )
                  m_int = val.m_int;
                nValue = m_int;
              }
              break;
            case 0x1E:
              nValue = strtol(val.m_pszString, 0, 10);
              break;
            case 0x21:
              v13 = val.m_int;
              if ( val.m_uint64 > 0x7FFFFFFE )
                v13 = 0x7FFFFFFF;
              nValue = v13;
              break;
            case 0x22:
              nValue = val.m_float64;
              break;
            case 0x25:
              v12 = val.m_int;
              if ( val.m_int > 0x7FFFFFFEu )
                v12 = 0x7FFFFFFF;
              nValue = v12;
              break;
            default:
              v17 = VariantFieldTypeName(val.m_type);
              Warning("No conversion from %s to int now\n", v17);
              break;
          }
          (*(v3->_vptr_IGameEvent + 14))(v3, m_uint64, nValue);
          break;
        case 6:
          switch ( val.m_type )
          {
            case 0:
              m_char = 0;
              bValue = 0;
              goto LABEL_26;
            case 1:
              v11 = val.m_float == 0.0;
              goto LABEL_47;
            case 5:
            case 0x25:
              bValue = val.m_int != 0;
              m_char = val.m_int != 0;
              goto LABEL_26;
            case 6:
              bValue = val.m_char;
              m_char = val.m_char;
              goto LABEL_26;
            case 0x1A:
            case 0x21:
              bValue = val.m_uint64 != 0;
              m_char = val.m_uint64 != 0;
              goto LABEL_26;
            case 0x1E:
              v11 = strcmp(val.m_pszString, "0") == 0;
              m_char = !v11;
              if ( v11
                || (v11 = strcmp(val.m_pszString, "false") == 0, m_char = !v11, v11)
                || (v11 = strcmp(val.m_pszString, "no") == 0, m_char = !v11, v11) )
              {
                bValue = 0;
              }
              else if ( strcmp(val.m_pszString, "1") == 0
                     || strcmp(val.m_pszString, "true") == 0
                     || strcmp(val.m_pszString, "yes") == 0 )
              {
                m_char = 1;
                bValue = 1;
              }
              else
              {
                Warning("Invalid conversion : CString '%s' to bool\n", val.m_pszString);
LABEL_78:
                m_char = bValue;
              }
LABEL_26:
              (*(v3->_vptr_IGameEvent + 13))(v3, m_uint64, m_char);
              break;
            case 0x22:
              v11 = val.m_float64 == 0.0;
LABEL_47:
              bValue = !v11;
              m_char = !v11;
              goto LABEL_26;
            default:
              v18 = VariantFieldTypeName(val.m_type);
              Warning("No conversion from %s to bool now\n", v18);
              goto LABEL_78;
          }
          break;
        case 7:
          if ( val.m_type == 33 )
          {
LABEL_28:
            uValue = val.m_uint64;
LABEL_29:
            (*(v3->_vptr_IGameEvent + 15))(v3, m_uint64, uValue);
          }
          else if ( (val.m_type & 0xFFFD) == 0x19 || (val.m_type - 3) <= 1u || val.m_type == 39 || val.m_type == 30 )
          {
            v9 = VariantFieldTypeName(val.m_type);
            Warning("No free conversion of %s variant to %s right now\n", v9, "uint64");
LABEL_32:
            uValue = 0;
            (*(v3->_vptr_IGameEvent + 15))(v3, m_uint64, 0);
          }
          else
          {
            switch ( val.m_type )
            {
              case 0:
                goto LABEL_32;
              case 1:
                if ( val.m_float >= 9.223372e18 )
                  uValue = (val.m_float - 9.223372e18) ^ 0x8000000000000000LL;
                else
                  uValue = val.m_float;
                goto LABEL_82;
              case 5:
                uValue = val.m_int;
                (*(v3->_vptr_IGameEvent + 15))(v3, m_uint64, val.m_int);
                goto LABEL_18;
              case 6:
                uValue = val.m_char;
                (*(v3->_vptr_IGameEvent + 15))(v3, m_uint64, val.m_char);
                goto LABEL_18;
              case 8:
                uValue = val.m_char;
                (*(v3->_vptr_IGameEvent + 15))(v3, m_uint64, val.m_char);
                goto LABEL_18;
              case 0x1A:
                goto LABEL_28;
              case 0x22:
                if ( val.m_float64 >= 9.223372036854776e18 )
                  uValue = (val.m_float64 - 9.223372036854776e18) ^ 0x8000000000000000LL;
                else
                  uValue = val.m_float64;
LABEL_82:
                (*(v3->_vptr_IGameEvent + 15))(v3, m_uint64, uValue);
                break;
              case 0x25:
                uValue = val.m_uint;
                (*(v3->_vptr_IGameEvent + 15))(v3, m_uint64, val.m_uint);
                break;
              default:
                goto LABEL_29;
            }
          }
          break;
        default:
          break;
      }
    }
LABEL_18:
    (*(*g_pScriptVM + 344LL))(g_pScriptVM, &key);
    (*(*g_pScriptVM + 344LL))(g_pScriptVM, &val);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&val);
  CVariantBase<CVariantDefaultAllocator>::Free(&key);
  return v3;
}


// ScriptFireGameEvent  (line 1186, @0x0000000001f3bce0, libserver.so)
// calls: ScriptHelper_CreateEvent
void __fastcall ScriptFireGameEvent(const char *szName, HSCRIPT hParams)
{
  IGameEvent *Event; // rax

  Event = ScriptHelper_CreateEvent(szName, hParams);
  if ( Event != 0 )
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, Event, 0);
}


// ScriptFireGameEventLocal  (line 1195, @0x0000000001f3bd20, libserver.so)
// calls: ScriptHelper_CreateEvent
void __fastcall ScriptFireGameEventLocal(const char *szName, HSCRIPT hParams)
{
  IGameEvent *Event; // rax

  Event = ScriptHelper_CreateEvent(szName, hParams);
  if ( Event != 0 )
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, Event, 1);
}


// CVScriptGameSystem::RegisterGameEventListenersInScope  (line 1206, @0x0000000001f3e600, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*>, Free, RegisterGameEventListenersInScope, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "__RegisterGameEventListeners"
// globals: g_pScriptVM
void __fastcall CVScriptGameSystem::RegisterGameEventListenersInScope(CVScriptGameSystem *const this, HSCRIPT scope)
{
  HSCRIPT m_CollectGameEventCallbacksFunc; // rsi
  HSCRIPT v4; // rax
  HSCRIPT v5; // [rsp+10h] [rbp-20h] BYREF
  __int16 v6; // [rsp+18h] [rbp-18h]
  __int16 v7; // [rsp+1Ah] [rbp-16h]

  if ( scope != 0 )
  {
    if ( g_VScriptGameEventListener.m_bHasLookedForCollectFunc )
    {
      m_CollectGameEventCallbacksFunc = g_VScriptGameEventListener.m_CollectGameEventCallbacksFunc;
    }
    else
    {
      v4 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "__RegisterGameEventListeners", 0, 0);
      g_VScriptGameEventListener.m_bHasLookedForCollectFunc = 1;
      g_VScriptGameEventListener.m_CollectGameEventCallbacksFunc = v4;
      m_CollectGameEventCallbacksFunc = v4;
    }
    if ( m_CollectGameEventCallbacksFunc != 0 )
    {
      v5 = scope;
      v7 = 0;
      v6 = 31;
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, m_CollectGameEventCallbacksFunc, &v5, 1, 0, 0, 1);
      if ( (v7 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
    }
  }
}


// CVScriptGameSystem::UnregisterGameEventListenersInScope  (line 1214, @0x0000000001f444f0, libserver.so)
// calls: CVScriptGameEventListener::StopListeningToAllGameEvents
// globals: g_VScriptGameEventListener
void __fastcall CVScriptGameSystem::UnregisterGameEventListenersInScope(CVScriptGameSystem *const this, HSCRIPT scope)
{
  if ( scope != 0 )
    CVScriptGameEventListener::StopListeningToAllGameEvents(&g_VScriptGameEventListener, scope);
}


// CVScriptGameSystem::ClearScriptGameEventListeners  (line 1223, @0x0000000001f2f2e0, libserver.so)  // inlines: StopListeningForAllEvents
// globals: g_VScriptGameEventListener
void __fastcall CVScriptGameSystem::ClearScriptGameEventListeners(CVScriptGameSystem *const this)
{
  if ( g_VScriptGameEventListener.m_bRegisteredForEvents )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &g_VScriptGameEventListener);
    g_VScriptGameEventListener.m_bRegisteredForEvents = 0;
  }
}


// GetMapName  (line 1233, @0x0000000001f2a4b0, libserver.so)
const char *__cdecl GetMapName()
{
  return gpGlobals->mapname;
}


// SetQuestName  (line 1242, @0x0000000001f2a9c0, libserver.so)  // inlines: GameRules, SetQuestName, V_strcpy_safe<128ul>
// calls: _V_strncpy
void __fastcall SetQuestName(const char *pszName)
{
  _V_strncpy(g_pGameRules->m_szQuestName, pszName, 128);
}


// SetQuestPhase  (line 1249, @0x0000000001f2a4d0, libserver.so)  // inlines: SetQuestPhase
void __fastcall SetQuestPhase(int nPhase)
{
  g_pGameRules->m_nQuestPhase = nPhase;
}


// Time  (line 1256, @0x0000000001f2faf0, libserver.so)  // inlines: curtime
float __cdecl Time()
{
  float result; // xmm0_4
  CGlobalVars *v1; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  result = 0.0;
  v1 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    return v1->m_flCurrentTime;
  }
  return result;
}


// FrameTime  (line 1261, @0x0000000001f2a4f0, libserver.so)
float __cdecl FrameTime()
{
  return gpGlobals->frametime;
}


// Script_ExponentialDecay  (line 1267, @0x0000000001f2b1e0, libserver.so)  // inlines: ExponentialDecay
// calls: V_logf, V_expf
float __fastcall Script_ExponentialDecay(double a1, float decayTo, float decayTime, float dt)
{
  float v4; // xmm0_4

  v4 = V_logf(a1, decayTo, decayTime, dt);
  return V_expf((v4 / decayTo) * decayTime);
}


// Script_SplineVectors  (line 1272, @0x0000000001f2a510, libserver.so)  // inlines: VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
__m128i __fastcall Script_SplineVectors(const Vector *const vecZero, const Vector *const vecOne, float a3, float t)
{
  float v4; // xmm3_4
  float v5; // xmm2_4
  __m128i v7; // [rsp+0h] [rbp-10h] BYREF

  v4 = 1.0;
  if ( a3 <= 1.0 )
  {
    v4 = 0.0;
    if ( a3 >= 0.0 )
      v4 = (3.0 * (a3 * a3)) - (((a3 * a3) + (a3 * a3)) * a3);
  }
  v5 = ((vecOne->x - vecZero->x) * v4) + vecZero->x;
  *&v7.m128i_i32[1] = ((vecOne->y - vecZero->y) * v4) + vecZero->y;
  *v7.m128i_i32 = v5;
  return _mm_loadl_epi64(&v7);
}


// Script_SplineQuaternions  (line 1279, @0x0000000001f2b210, libserver.so)
// calls: QuaternionSlerp
__m128i __fastcall Script_SplineQuaternions(
        const Quaternion *const vecZero,
        const Quaternion *const vecOne,
        float a3,
        float t)
{
  float v5; // xmm0_4
  Quaternion v7; // [rsp+0h] [rbp-10h] BYREF

  v5 = 1.0;
  if ( a3 <= 1.0 )
  {
    v5 = 0.0;
    if ( a3 >= 0.0 )
      v5 = (3.0 * (a3 * a3)) - (((a3 * a3) + (a3 * a3)) * a3);
  }
  QuaternionSlerp(vecZero, vecOne, v5, &v7);
  return _mm_loadl_epi64(&v7);
}


// Script_AxisAngleToQuaternion  (line 1287, @0x0000000001f2b280, libserver.so)
// calls: AxisAngleQuaternion
__m128i __fastcall Script_AxisAngleToQuaternion(const Vector *const axis, double a2, float flAngle)
{
  Quaternion v4; // [rsp+0h] [rbp-10h] BYREF

  AxisAngleQuaternion(axis, flAngle, &v4);
  return _mm_loadl_epi64(&v4);
}


// Script_RotateQuaternionByAxisAngle  (line 1294, @0x0000000001f2b2b0, libserver.so)
// calls: AxisAngleQuaternion, QuaternionMult
__m128i __fastcall Script_RotateQuaternionByAxisAngle(
        const Quaternion *const q,
        const Vector *const axis,
        double a3,
        float flAngle)
{
  Quaternion v6; // [rsp+0h] [rbp-30h] BYREF
  Quaternion rotate; // [rsp+10h] [rbp-20h] BYREF

  AxisAngleQuaternion(axis, flAngle, &rotate);
  QuaternionMult(q, &rotate, &v6);
  return _mm_loadl_epi64(&v6);
}


// Script_RotationDeltaAsAngularVelocity  (line 1302, @0x0000000001f2b300, libserver.so)  // inlines: VectorMultiply, operator*
// calls: RotationDeltaAxisAngle
Vector __fastcall Script_RotationDeltaAsAngularVelocity(const QAngle *const srcAngles, const QAngle *const dstAngles)
{
  float flAngle; // [rsp+1Ch] [rbp-24h] BYREF
  Vector vAxis; // [rsp+20h] [rbp-20h] BYREF
  float v6[4]; // [rsp+30h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  RotationDeltaAxisAngle(srcAngles, dstAngles, &vAxis, &flAngle);
  result.z = vAxis.z * flAngle;
  v6[1] = vAxis.y * flAngle;
  v6[0] = flAngle * vAxis.x;
  *&result.x = *v6;
  return result;
}


// Script_CvarGetf  (line 1311, @0x0000000001f2aeb0, libserver.so)  // inlines: GetFloat
// calls: ConVarRef::ConVarRef, ConVarRef::IsValid
float __fastcall Script_CvarGetf(const char *pszName)
{
  bool IsValid; // al
  float result; // xmm0_4
  ConVarRef cv; // [rsp+0h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&cv, pszName);
  IsValid = ConVarRef::IsValid(&cv);
  result = 0.0;
  if ( IsValid )
    return cv.m_pConVarState->m_Value.m_fValue;
  return result;
}


// Script_CvarSetf  (line 1320, @0x0000000001f2af70, libserver.so)  // inlines: SetValue
// calls: ConVarRef::ConVarRef, ConVarRef::IsValid, Warning
// strings: "Script failed to edit imaginary cvar %s\n"
__int64 __fastcall Script_CvarSetf(const char *pszName, float a2, float val)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  ConVarRef cv; // [rsp+10h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&cv, pszName);
  LOBYTE(v4) = ConVarRef::IsValid(&cv);
  v5 = v4;
  if ( v4 != 0 )
    (*(cv.m_pConVar->_vptr_IConVar + 1))(cv.m_pConVar, a2);
  else
    Warning("Script failed to edit imaginary cvar %s\n", pszName);
  return v5;
}


// CancelEntityIOEvents  (line 1337, @0x0000000001f2fd50, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CEntitySystem::CancelEntityIOEvents
// globals: CEntityHandle::gm_pEntityList
void __fastcall CancelEntityIOEvents(_WORD *hCaller)
{
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx

  m_pInstance = 0;
  if ( (*hCaller + 2) > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hCaller >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[*hCaller & 0x1FF];
      if ( v3 != 0 && *hCaller == v3->m_EHandle.m_Index )
        m_pInstance = v3->m_pInstance;
    }
  }
  CEntitySystem::CancelEntityIOEvents(g_pEntitySystem, m_pInstance);
}


// GetMaxOutputDelay  (line 1342, @0x0000000001f31530, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FindEntityIOOutputsByName, GetEntityIdentity, GetEntryIndex, GetInstance, GetMaxDelay, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityIdentity::FindEntityIOOutputsByName, CUtlMemory<CEntityIOOutput*, int>::Purge, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
float __fastcall GetMaxOutputDelay(unsigned __int16 *hEnt, const char *pOutputName)
{
  CEntityInstance *m_pInstance; // rcx
  int v3; // eax
  unsigned __int64 v4; // rdi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *m_pEntity; // rdi
  __m128 v8; // xmm0
  __int64 v9; // rsi
  CEntityIOOutput *v10; // rax
  EntityIOConnection_t *m_pConnections; // rcx
  EntityIOConnection_t *v12; // rax
  float v13; // xmm1_4
  float m_flDelay; // xmm2_4
  float v15; // xmm2_4
  __m128 m_flDelay_low; // xmm1
  __int32 v18; // [rsp+Ch] [rbp-34h]
  CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > outputs; // [rsp+10h] [rbp-30h] BYREF

  m_pInstance = 0;
  v3 = *hEnt;
  if ( (*hEnt + 2) > 1 )
  {
    v4 = *hEnt;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v4 & 0x1FF];
      if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  outputs.m_Memory.m_pMemory = 0;
  outputs.m_Memory.m_nAllocationCount = 0;
  outputs.m_Memory.m_nGrowSize = 0;
  m_pEntity = m_pInstance->m_pEntity;
  outputs.m_Size = 0;
  CEntityIdentity::FindEntityIOOutputsByName(m_pEntity, pOutputName, &outputs);
  v8.m128_i32[0] = 0;
  if ( outputs.m_Size > 0 )
  {
    v9 = 0;
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v10 = outputs.m_Memory.m_pMemory[v9];
        m_pConnections = v10->m_pConnections;
        if ( m_pConnections != 0 )
          break;
        v8 = _mm_and_ps(v8, _mm_cmplt_ss(0LL, v8));
LABEL_18:
        if ( outputs.m_Size <= ++v9 )
        {
          outputs.m_Size = 0;
          if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            goto LABEL_20;
          return v8.m128_f32[0];
        }
      }
      v12 = v10->m_pConnections;
      v13 = 0.0;
      do
      {
        m_flDelay = v12->m_flDelay;
        v12 = v12->m_pNext;
        v15 = fmaxf(m_flDelay, v13);
        v13 = v15;
      }
      while ( v12 != 0 );
      if ( v8.m128_f32[0] > v15 )
        goto LABEL_18;
      v8.m128_i32[0] = 0;
      do
      {
        m_flDelay_low = LODWORD(m_pConnections->m_flDelay);
        m_pConnections = m_pConnections->m_pNext;
        m_flDelay_low.m128_f32[0] = fmaxf(m_flDelay_low.m128_f32[0], v8.m128_f32[0]);
        v8 = m_flDelay_low;
      }
      while ( m_pConnections != 0 );
      ++v9;
    }
    while ( outputs.m_Size > v9 );
  }
  outputs.m_Size = 0;
  if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
LABEL_20:
    v18 = v8.m128_i32[0];
    CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
    v8.m128_i32[0] = v18;
    if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
      v8.m128_i32[0] = v18;
    }
  }
  return v8.m128_f32[0];
}


// Script_FireEntityIOInputVec  (line 1358, @0x0000000001f3b0a0, libserver.so)  // inlines: CVariantBase, CopyData<Vector>, Free, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, ~CVariantBase
// calls: CEntitySystem::AddEntityIOEvent, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall Script_FireEntityIOInputVec(
        unsigned __int16 *hEntity,
        const char *pszActionName,
        const Vector *const vec)
{
  CEntityInstance *m_pInstance; // rsi
  int v5; // eax
  unsigned __int64 v6; // rdi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CVariant value; // [rsp+10h] [rbp-20h] BYREF

  m_pInstance = 0;
  v5 = *hEntity;
  if ( (*hEntity + 2) > 1 )
  {
    v6 = *hEntity;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[v6 & 0x1FF];
      if ( v8 != 0 && v5 == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  value.m_type = 3;
  value.m_uint64 = vec;
  value.m_flags = 0;
  CEntitySystem::AddEntityIOEvent(g_pEntitySystem, m_pInstance, pszActionName, m_pInstance, m_pInstance, &value, 0.0, 0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// Script_FireEntityIOInputString  (line 1364, @0x0000000001f3afd0, libserver.so)  // inlines: CVariantBase, CopyData, Free, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, ~CVariantBase
// calls: CEntitySystem::AddEntityIOEvent, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall Script_FireEntityIOInputString(
        unsigned __int16 *hEntity,
        const char *pszActionName,
        const char *pszString)
{
  CEntityInstance *m_pInstance; // rsi
  int v5; // eax
  unsigned __int64 v6; // rdi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CVariant value; // [rsp+10h] [rbp-20h] BYREF

  m_pInstance = 0;
  v5 = *hEntity;
  if ( (*hEntity + 2) > 1 )
  {
    v6 = *hEntity;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[v6 & 0x1FF];
      if ( v8 != 0 && v5 == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  value.m_type = 30;
  value.m_uint64 = pszString;
  value.m_flags = 0;
  CEntitySystem::AddEntityIOEvent(g_pEntitySystem, m_pInstance, pszActionName, m_pInstance, m_pInstance, &value, 0.0, 0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// Script_FireEntityIOInputNameOnly  (line 1370, @0x0000000001f2fdc0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CEntitySystem::AddEntityIOEvent
// globals: CEntityHandle::gm_pEntityList
void __fastcall Script_FireEntityIOInputNameOnly(unsigned __int16 *hEntity, const char *pszActionName)
{
  CEntityInstance *m_pInstance; // rsi
  int v4; // eax
  unsigned __int64 v5; // rdi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  m_pInstance = 0;
  v4 = *hEntity;
  if ( (*hEntity + 2) > 1 )
  {
    v5 = *hEntity;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && v4 == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  CEntitySystem::AddEntityIOEvent(g_pEntitySystem, m_pInstance, pszActionName, m_pInstance, m_pInstance, 0.0, 0);
}


// Script_SetRenderingEnabled  (line 1376, @0x0000000001f2fe40, libserver.so)  // inlines: GetDebugName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, MarkPVSInformationDirty, RemoveEffects, operator CEntityInstance*
// calls: LoggingSystem_IsChannelEnabled, CEntityIdentity::GetDebugName, LoggingSystem_Log, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::AddEffects
// strings: "Script wants to setrenderingenabled for entity %s w/no body component"
// globals: CEntityHandle::gm_pEntityList
void __fastcall Script_SetRenderingEnabled(_DWORD *hEntity, const bool bRenderOn)
{
  CEntityIdentity *v2; // rdx
  __int64 v3; // rcx
  CEntityIdentity *v4; // rdx
  const char *DebugName; // rax
  CBaseEntity *m_pInstance; // rbx

  if ( (*hEntity + 2) > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hEntity >> 9) & 0x3F]) != 0
    && (v3 = *hEntity & 0x1FF, (v4 = &v2[v3]) != 0)
    && *hEntity == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0) )
  {
    if ( bRenderOn )
    {
      (*(m_pInstance->_vptr_IHandleEntity + 188))(
        v4->m_pInstance,
        m_pInstance->m_fEffects.m_Value & 0xFFFFFFDF,
        v4,
        v3 * 120,
        CEntityHandle::gm_pEntityList);
      m_pInstance->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
      CBaseEntity::DispatchUpdateTransmitState(m_pInstance);
    }
    else
    {
      CBaseEntity::AddEffects(v4->m_pInstance, 32);
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(0);
    LoggingSystem_Log(
      LOG_VSCRIPT,
      2,
      "Script wants to setrenderingenabled for entity %s w/no body component",
      DebugName);
  }
}


// SendToConsole  (line 1399, @0x0000000001f2beb0, libserver.so)  // inlines: UTIL_GetLocalPlayerOrListenServerHost, entindex
// calls: AppIsDedicatedServer, UTIL_GetListenServerHost, CEntityInstance::GetEntityIndex, UTIL_GetLocalPlayer, DevMsg(char const*,...)
// strings: "Cannot execute \"%s\", no player\n"
void __fastcall SendToConsole(const char *pszCommand)
{
  CBasePlayer *LocalPlayer; // rdi
  void (*v3)(IVEngineServer2 *, _QWORD, const char *, ...); // r13
  CEntityIndex v4; // eax

  if ( gpGlobals->maxClients <= 1 )
  {
    LocalPlayer = UTIL_GetLocalPlayer();
  }
  else
  {
    if ( AppIsDedicatedServer() )
      goto LABEL_7;
    LocalPlayer = UTIL_GetListenServerHost();
  }
  if ( LocalPlayer != 0 )
  {
    v3 = *(*engine + 288LL);
    v4.m_Data = CEntityInstance::GetEntityIndex(LocalPlayer).m_Data;
    v3(engine, v4.m_Data, "%s", pszCommand);
    return;
  }
LABEL_7:
  DevMsg("Cannot execute \"%s\", no player\n", pszCommand);
}


// SendToServerConsole  (line 1419, @0x0000000001f2be70, libserver.so)
// calls: UTIL_VarArgs
void __fastcall SendToServerConsole(const char *pszCommand)
{
  void (__fastcall *v1)(IVEngineServer2 *, char *); // r12
  char *v2; // rax

  v1 = *(*engine + 280LL);
  v2 = UTIL_VarArgs("%s\n", pszCommand);
  v1(engine, v2);
}


// PrintLinkedConsoleMessage  (line 1426, @0x0000000001f2f5a0, libserver.so)  // inlines: CLoggingMetaCommandLink, LoggingMetaData_t, V_memcpy, V_strlen, memcpy, ~CLoggingMetaCommandLink
// calls: LoggingSystem_IsChannelEnabled, strlen, operator new [], memcpy, LoggingSystem_Log(int,LoggingSeverity_t,LoggingMetaData_t const*,char const*,...), operator delete [], _Unwind_Resume
// globals: LOG_SCRIPTS
void __fastcall PrintLinkedConsoleMessage(const char *pszString, const char *pszCommand)
{
  int v4; // r14d
  size_t v5; // r13
  uint8 *v6; // rdi
  LoggingMetaData_t v7; // [rsp+0h] [rbp-50h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_SCRIPTS, 1) != 0 )
  {
    v7.m_nVerbosity = 1;
    v7.m_pNext = 0;
    v7.m_TypeID = 0x416B6E694C646D43LL;
    v7.m_pData = 0;
    v7.m_nDataSize = 0;
    if ( pszCommand != 0 )
    {
      v4 = strlen(pszCommand) + 1;
      v5 = v4;
      v7.m_nDataSize = v4 + 4LL;
      v7.m_nVerbosity = 1;
      v7.m_pData = operator new[](v7.m_nDataSize);
      *v7.m_pData = 0;
      v6 = v7.m_pData + 4;
      if ( v4 < 0 )
        __debugbreak();
    }
    else
    {
      v7.m_nDataSize = 5;
      v5 = 1;
      v7.m_nVerbosity = 1;
      v7.m_pData = operator new[](5u);
      *v7.m_pData = 0;
      v6 = v7.m_pData + 4;
    }
    memcpy(v6, pszCommand, v5);
    LoggingSystem_Log(LOG_SCRIPTS, LoggingSeverity_t::LS_MESSAGE, &v7, "%s", pszString);
    if ( v7.m_pData != 0 )
      operator delete[](v7.m_pData);
  }
}


// InitLogFile  (line 1431, @0x0000000001f2bca0, libserver.so)  // inlines: V_strcpy_safe<260ul>, V_strlen
// calls: _V_strncpy, strlen, DevWarning, __stack_chk_fail
// strings: "DEFAULT_WRITE_PATH", "Couldn't create %s!\n"
void __fastcall InitLogFile(const char *pszFilename, const char *pszString)
{
  int v4; // eax
  __int64 v5; // r8
  char v6; // si
  char v7; // cl
  __int64 v8; // r13
  IFileSystem *v9; // rbx
  void (__fastcall *v10)(IBaseFileSystem *, const char *, __int64, __int64); // r15
  __int64 v11; // rdx
  char directoryName[264]; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v13; // [rsp+108h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  _V_strncpy(directoryName, pszFilename, 260);
  v4 = strlen(directoryName) - 1;
  if ( v4 >= 0 )
  {
    v5 = v4;
    v6 = directoryName[v4];
    if ( v6 == 47 || v6 == 92 )
    {
LABEL_10:
      directoryName[v5] = 0;
    }
    else
    {
      while ( --v4 != -1 )
      {
        v5 = v4;
        v7 = directoryName[v4];
        if ( v7 == 92 || v7 == 47 )
          goto LABEL_10;
      }
    }
  }
  (*(filesystem->_vptr_IAppSystem + 27))(filesystem, directoryName, "DEFAULT_WRITE_PATH");
  if ( (*(filesystem->_vptr_IBaseFileSystem + 10))(&filesystem->IBaseFileSystem, pszFilename, "DEFAULT_WRITE_PATH") == 0 )
  {
    v8 = (*(filesystem->_vptr_IBaseFileSystem + 2))(
           &filesystem->IBaseFileSystem,
           pszFilename,
           "w",
           "DEFAULT_WRITE_PATH");
    if ( v8 != 0 )
    {
      v9 = filesystem;
      v10 = *(filesystem->_vptr_IBaseFileSystem + 1);
      if ( pszString != 0 )
        v11 = strlen(pszString);
      else
        v11 = 0;
      v10(&v9->IBaseFileSystem, pszString, v11, v8);
      (*(filesystem->_vptr_IBaseFileSystem + 3))(&filesystem->IBaseFileSystem, v8);
    }
    else
    {
      DevWarning(2, "Couldn't create %s!\n", pszFilename);
    }
  }
}


// AppendToLogFile  (line 1463, @0x0000000001f2bae0, libserver.so)  // inlines: V_strcpy_safe<260ul>, V_strlen
// calls: _V_strncpy, strlen, DevWarning, __stack_chk_fail
// strings: "DEFAULT_WRITE_PATH", "Couldn't create %s!\n"
void __fastcall AppendToLogFile(const char *pszFilename, const char *pszString)
{
  int v4; // eax
  __int64 v5; // r8
  char v6; // si
  char v7; // cl
  __int64 v8; // r14
  IFileSystem *v9; // r12
  void (__fastcall *v10)(IBaseFileSystem *, const char *, __int64, __int64); // r15
  __int64 v11; // rdx
  char directoryName[264]; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v13; // [rsp+108h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  _V_strncpy(directoryName, pszFilename, 260);
  v4 = strlen(directoryName) - 1;
  if ( v4 >= 0 )
  {
    v5 = v4;
    v6 = directoryName[v4];
    if ( v6 == 47 || v6 == 92 )
    {
LABEL_12:
      directoryName[v5] = 0;
    }
    else
    {
      while ( --v4 != -1 )
      {
        v5 = v4;
        v7 = directoryName[v4];
        if ( v7 == 92 || v7 == 47 )
          goto LABEL_12;
      }
    }
  }
  (*(filesystem->_vptr_IAppSystem + 27))(filesystem, directoryName, "DEFAULT_WRITE_PATH");
  v8 = (*(filesystem->_vptr_IBaseFileSystem + 2))(&filesystem->IBaseFileSystem, pszFilename, "a", "DEFAULT_WRITE_PATH");
  if ( v8 != 0 )
  {
    v9 = filesystem;
    v10 = *(filesystem->_vptr_IBaseFileSystem + 1);
    if ( pszString != 0 )
      v11 = strlen(pszString);
    else
      v11 = 0;
    v10(&v9->IBaseFileSystem, pszString, v11, v8);
    (*(filesystem->_vptr_IBaseFileSystem + 3))(&filesystem->IBaseFileSystem, v8);
  }
  else
  {
    DevWarning(2, "Couldn't create %s!\n", pszFilename);
  }
}


// DoUniqueString  (line 1492, @0x0000000001f2a5b0, libserver.so)
// globals: g_pScriptVM, DoUniqueString(char const*)::szBuf
const char *__fastcall DoUniqueString(const char *pszBase)
{
  (*(*g_pScriptVM + 216LL))(g_pScriptVM, pszBase, DoUniqueString(char const*)::szBuf, 512);
  return DoUniqueString(char const*)::szBuf;
}


// DoScriptAssert  (line 1500, @0x0000000001f2a5e0, libserver.so)
void __fastcall DoScriptAssert(bool bExpression, const char *pszMsg)
{
  ;
}


// DoEntFire  (line 1508, @0x0000000001f412f0, libserver.so)  // inlines: CVariantBase, CopyData, FStrEq, HScriptToEntity<CBaseEntity>, SetString, String, ToCStr, ToEnt, _V_strcmp, operator=, ~CVariantBase
// calls: GetScriptDesc<CEntityInstance>, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CServerEventQueue::AddEvent, CVariantBase<CVariantDefaultAllocator>::Free, AllocPooledString, _Unwind_Resume
// strings: "point_servercommand"
// globals: g_pScriptVM
void __fastcall DoEntFire(
        const char *pszTarget,
        const char *pszAction,
        const char *pszValue,
        float delay,
        HSCRIPT hActivator,
        HSCRIPT hCaller)
{
  const char *v9; // rbx
  __int64 (__fastcall *v10)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v12; // r14
  __int64 (__fastcall *v13)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v14; // rax
  int v15; // r15d
  const char *m_uint64; // r13
  const char *v17; // rax
  CBaseEntity *pCaller; // [rsp+0h] [rbp-90h]
  char *action; // [rsp+8h] [rbp-88h]
  float delayb; // [rsp+1Ch] [rbp-74h]
  char *v23; // [rsp+20h] [rbp-70h]
  const char *v24; // [rsp+30h] [rbp-60h]
  variant_t value; // [rsp+40h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> pDest; // [rsp+50h] [rbp-40h] BYREF
  variant_t v27; // 0:rcx.8,8:r8d.4

  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  if ( pszTarget == 0 || *pszTarget == 0 )
    goto LABEL_3;
  AllocPooledString(pszTarget);
  if ( v23 != 0 )
  {
    v9 = v23;
    if ( gpGlobals->maxClients > 1 && (v23 == "point_servercommand" || strcmp(v23, "point_servercommand") == 0) )
    {
      CVariantBase<CVariantDefaultAllocator>::Free(&value);
      return;
    }
  }
  else
  {
    v9 = "";
    if ( gpGlobals->maxClients <= 1 )
LABEL_3:
      v9 = "";
  }
  action = "Use";
  if ( pszAction != 0 && *pszAction != 0 )
  {
    AllocPooledString(pszAction);
    v17 = "";
    if ( v24 != 0 )
      v17 = v24;
    action = v17;
  }
  if ( pszValue != 0 && *pszValue != 0 )
  {
    AllocPooledString(pszValue);
    m_uint64 = "";
    if ( pDest.m_uint64 != 0 )
      m_uint64 = pDest.m_uint64;
    CVariantBase<CVariantDefaultAllocator>::Free(&value);
    value.m_uint64 = m_uint64;
    value.m_type = 30;
  }
  delayb = fmaxf(0.0, delay);
  if ( hCaller != 0 )
  {
    v10 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v12 = v10(g_pScriptVM, hCaller, Script);
  }
  else
  {
    v12 = 0;
  }
  if ( hActivator != 0 )
  {
    v13 = *(*g_pScriptVM + 208LL);
    v14 = GetScriptDesc<CEntityInstance>(0);
    v15 = v13(g_pScriptVM, hActivator, v14);
  }
  else
  {
    v15 = 0;
  }
  pDest.m_flags = 0;
  pDest.m_type = 0;
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&value, &pDest);
  *&v27.m_type = v15;
  v27.m_uint64 = &pDest;
  LODWORD(pCaller) = 0;
  CServerEventQueue::AddEvent(&g_EventQueue, v9, action, v27, delayb, v12, pCaller, action);
  CVariantBase<CVariantDefaultAllocator>::Free(&pDest);
  CVariantBase<CVariantDefaultAllocator>::Free(&value);
}


// IsValidEntity  (line 1548, @0x0000000001f2ff30, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>
// globals: g_pScriptVM
bool __fastcall IsValidEntity(HSCRIPT hEntity)
{
  __int64 (__fastcall *v2)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax

  if ( hEntity == 0 )
    return 0;
  v2 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CEntityInstance>(0);
  return v2(g_pScriptVM, hEntity, Script) != 0;
}


// IsMarkedForDeletion  (line 1553, @0x0000000001f2ff80, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, IsMarkedForDeletion, ToEnt
// calls: GetScriptDesc<CEntityInstance>
// strings: "VScript error: Invalid entity handle passed to IsMarkedForDelete.\n "
// globals: g_pScriptVM
bool __fastcall IsMarkedForDeletion(HSCRIPT hEntity)
{
  __int64 (__fastcall *v2)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  __int64 v4; // rax

  if ( hEntity != 0 )
  {
    v2 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v4 = v2(g_pScriptVM, hEntity, Script);
    if ( v4 != 0 )
      return (*(*(v4 + 8) + 48LL) & 0x200) != 0;
  }
  (*(*g_pScriptVM + 440LL))(g_pScriptVM, "VScript error: Invalid entity handle passed to IsMarkedForDelete.\n ");
  return 0;
}


// EntIndexToHScript  (line 1570, @0x0000000001f2f500, libserver.so)  // inlines: EntityToHScript, Get, GetInstance, GetPublicScriptScope, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, ToHScript
// calls: CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall EntIndexToHScript(int entityIndex)
{
  HSCRIPT result; // rax
  CEntityIdentity *v2; // rcx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rbx

  result = 0;
  if ( entityIndex <= 0x7FFE )
  {
    v2 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[entityIndex >> 9];
    if ( v2 != 0 )
    {
      v3 = &v2[entityIndex & 0x1FF];
      if ( v3 != 0 && entityIndex == (v3->m_EHandle.m_Index & 0x7FFF) )
      {
        m_pInstance = v3->m_pInstance;
        if ( v3->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v3->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// PlayerInstanceFromIndex  (line 1575, @0x0000000001f2f290, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: UTIL_PlayerByIndex, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall PlayerInstanceFromIndex(int idx)
{
  CBasePlayer *v1; // rax
  CBasePlayer *v3; // [rsp+8h] [rbp-8h]

  v1 = UTIL_PlayerByIndex(idx);
  if ( v1 == 0 )
    return 0;
  if ( v1->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return v1->m_pEntity->m_hPublicScope.m_hScope;
  v3 = v1;
  CEntityInstance::CreatePublicScriptScope(v1, 0);
  return v3->m_pEntity->m_hPublicScope.m_hScope;
}


// Script_GetListenServerHost  (line 1580, @0x0000000001f2f720, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: AppIsDedicatedServer, UTIL_PlayerByIndex, CEntityInstance::CreatePublicScriptScope
HSCRIPT __cdecl Script_GetListenServerHost()
{
  bool IsDedicatedServer; // dl
  HSCRIPT result; // rax
  CBasePlayer *v2; // rbx

  IsDedicatedServer = AppIsDedicatedServer();
  result = 0;
  if ( !IsDedicatedServer )
  {
    v2 = UTIL_PlayerByIndex(1);
    result = 0;
    if ( v2 != 0 )
    {
      result = v2->m_pEntity->m_hPublicScope.m_hScope;
      if ( result == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(v2, 0);
        return v2->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
  }
  return result;
}


// Script_IsServer  (line 1590, @0x0000000001f2a5f0, libserver.so)
bool __cdecl Script_IsServer()
{
  return 1;
}


// Script_IsClient  (line 1595, @0x0000000001f2a600, libserver.so)
bool __cdecl Script_IsClient()
{
  return 0;
}


// Script_IsInToolsMode  (line 1600, @0x0000000001f2a610, libserver.so)
bool __cdecl Script_IsInToolsMode()
{
  return (*(g_pApplication->_vptr_IAppSystem + 21))(g_pApplication);
}


// RotatePosition  (line 1605, @0x0000000001f2b350, libserver.so)  // inlines: V3Mul, VectorSubtract, operator-
// calls: VMatrix::SetupMatrixOrgAngles, __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'RotatePosition(Vector,QAngle,Vector)::newPosition, RotatePosition(Vector,QAngle,Vector)::newPosition
// local variable allocation has failed, the output may be wrong!
const Vector *__cdecl RotatePosition(const Vector rotateOrigin, const QAngle rotateAngles, const Vector position)
{
  float v3; // xmm5_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v7; // xmm3_4
  int v8; // eax
  float v9; // [rsp-14h] [rbp-84h]
  float v10; // [rsp-14h] [rbp-84h]
  float v11; // [rsp-10h] [rbp-80h]
  float v12; // [rsp-Ch] [rbp-7Ch]
  float v13; // [rsp-Ch] [rbp-7Ch]
  __int64 position_8; // [rsp+8h] [rbp-68h] OVERLAPPED BYREF
  __int128 rotateAnglesa; // [rsp+10h] [rbp-60h] OVERLAPPED BYREF
  Vector rotateOrigina; // [rsp+20h] [rbp-50h] BYREF
  float v17; // [rsp+2Ch] [rbp-44h]
  VMatrix mPosToWorld; // [rsp+30h] [rbp-40h]

  *(&rotateAnglesa + 1) = *&rotateOrigin.x;
  position_8 = *&rotateAngles.x;
  v12 = position.z - rotateOrigin.z;
  rotateOrigina.x = rotateOrigin.z;
  *&rotateAnglesa = rotateAngles.z;
  v9 = position.x - rotateOrigin.x;
  v11 = position.y - rotateOrigin.y;
  VMatrix::SetupMatrixOrgAngles(&rotateOrigina.z, (&rotateAnglesa + 8), &position_8);
  v3 = v12;
  v4 = v11;
  v5 = v9;
  if ( `guard variable for'RotatePosition(Vector,QAngle,Vector)::newPosition == 0 )
  {
    v10 = v12;
    v13 = v5;
    v8 = __cxa_guard_acquire(&`guard variable for'RotatePosition(Vector,QAngle,Vector)::newPosition);
    v5 = v13;
    v4 = v11;
    v3 = v10;
    if ( v8 != 0 )
    {
      __cxa_guard_release(&`guard variable for'RotatePosition(Vector,QAngle,Vector)::newPosition);
      v3 = v10;
      v4 = v11;
      v5 = v13;
    }
  }
  v7 = 1.0
     / ((((mPosToWorld.m[2][2] * v5) + (mPosToWorld.m[2][3] * v4)) + (mPosToWorld.m[3][0] * v3)) + mPosToWorld.m[3][1]);
  RotatePosition(Vector,QAngle,Vector)::newPosition.x = ((((rotateOrigina.z * v5) + (v17 * v4))
                                                        + (mPosToWorld.m[0][0] * v3))
                                                       + mPosToWorld.m[0][1])
                                                      * v7;
  RotatePosition(Vector,QAngle,Vector)::newPosition.y = ((((mPosToWorld.m[0][2] * v5) + (mPosToWorld.m[0][3] * v4))
                                                        + (mPosToWorld.m[1][0] * v3))
                                                       + mPosToWorld.m[1][1])
                                                      * v7;
  RotatePosition(Vector,QAngle,Vector)::newPosition.z = ((((v5 * mPosToWorld.m[1][2]) + (v4 * mPosToWorld.m[1][3]))
                                                        + (v3 * mPosToWorld.m[2][0]))
                                                       + mPosToWorld.m[2][1])
                                                      * v7;
  return &RotatePosition(Vector,QAngle,Vector)::newPosition;
}


// RotateOrientation  (line 1618, @0x0000000001f2b4f0, libserver.so)
// calls: AngleMatrix, ConcatTransforms, MatrixAngles
QAngle __cdecl RotateOrientation(QAngle posAngles, QAngle entAngles)
{
  QAngle entAnglesa; // [rsp+10h] [rbp-F0h] BYREF
  QAngle posAnglesa; // [rsp+20h] [rbp-E0h] BYREF
  QAngle outAngles; // [rsp+30h] [rbp-D0h] BYREF
  matrix3x4_t posMat; // [rsp+50h] [rbp-B0h] BYREF
  matrix3x4_t entMat; // [rsp+80h] [rbp-80h] BYREF
  matrix3x4_t outMat; // [rsp+B0h] [rbp-50h] BYREF
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  posAnglesa = posAngles;
  entAnglesa = entAngles;
  AngleMatrix(&posAnglesa, &posMat);
  AngleMatrix(&entAnglesa, &entMat);
  ConcatTransforms(&posMat, &entMat, &outMat);
  MatrixAngles(&outMat, &outAngles);
  *&result.x = *&outAngles.x;
  result.z = outAngles.z;
  return result;
}


// Script_RotationDelta  (line 1634, @0x0000000001f2b5a0, libserver.so)
// calls: RotationDelta
QAngle __cdecl Script_RotationDelta(QAngle srcAngles, QAngle destAngles)
{
  QAngle destAnglesa; // [rsp+10h] [rbp-40h] BYREF
  QAngle srcAnglesa; // [rsp+20h] [rbp-30h] BYREF
  QAngle outAngles; // [rsp+30h] [rbp-20h] BYREF
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  srcAnglesa = srcAngles;
  destAnglesa = destAngles;
  RotationDelta(&srcAnglesa, &destAnglesa, &outAngles);
  *&result.x = *&outAngles.x;
  result.z = outAngles.z;
  return result;
}


// VectorToAngles  (line 1641, @0x0000000001f2b5e0, libserver.so)
// calls: VectorAngles
QAngle __cdecl VectorToAngles(Vector vec)
{
  Vector veca; // [rsp+10h] [rbp-30h] BYREF
  QAngle angles; // [rsp+20h] [rbp-20h] BYREF
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  veca = vec;
  VectorAngles(&veca, &angles);
  *&result.x = *&angles.x;
  result.z = angles.z;
  return result;
}


// Script_SetOpvarFloatAll  (line 1649, @0x0000000001f717b0, libserver.so)  // inlines: AllocateData, CSosFieldData, CSosFieldDataFloat, ClearData, CopyData, GetDataPtr, Init, V_memcpy, memcpy, ~CSosFieldData, ~CSosFieldDataFloat
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::SetLibraryStackField, operator delete [], CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume, CSosFieldData::ClearData
// globals: g_pSoundOpGameSystem
void __fastcall Script_SetOpvarFloatAll(
        const char *pszStackName,
        const char *pszOperatorName,
        const char *pszOpvarName,
        float flOpvarValue)
{
  CSosFieldData fieldData; // [rsp+10h] [rbp-190h] BYREF
  CRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v10; // [rsp+168h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  CRecipientFilter::AddAllPlayers(&filter);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  fieldData.m_pData = 0;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  fieldData.m_nAllocSize = 4;
  *&fieldData.m_pData = flOpvarValue;
  CSoundOpGameSystem::SetLibraryStackField(
    g_pSoundOpGameSystem,
    &filter,
    pszStackName,
    pszOperatorName,
    pszOpvarName,
    &fieldData,
    0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  CRecipientFilter::~CRecipientFilter(&filter);
}


// Script_SetOpvarFloatPlayer  (line 1657, @0x0000000001f715d0, libserver.so)  // inlines: AllocateData, CSosFieldData, CSosFieldDataFloat, ClearData, CopyData, GetDataPtr, HScriptToEntity<CBaseEntity>, Init, ToEnt, V_memcpy, memcpy, ~CSosFieldData, ~CSosFieldDataFloat
// calls: GetScriptDesc<CEntityInstance>, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CSoundOpGameSystem::SetLibraryStackField, operator delete [], CRecipientFilter::~CRecipientFilter, __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
// globals: g_pScriptVM, g_pSoundOpGameSystem
void __fastcall Script_SetOpvarFloatPlayer(
        const char *pszStackName,
        const char *pszOperatorName,
        const char *pszOpvarName,
        float flOpvarValue,
        HSCRIPT hEnt)
{
  __int64 (__fastcall *v9)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v11; // rax
  const CEntityInstance *v12; // r15
  CSosFieldData fieldData; // [rsp+10h] [rbp-190h] BYREF
  CRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v16; // [rsp+168h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( hEnt != 0 )
  {
    v9 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v11 = v9(g_pScriptVM, hEnt, Script);
    v12 = v11;
    if ( v11 != 0 && (*(*v11 + 1120LL))(v11) != 0 )
    {
      CRecipientFilter::CRecipientFilter(&filter);
      CRecipientFilter::AddRecipient(&filter, v12);
      fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
      fieldData.m_nAllocSize = 0;
      fieldData.m_pData = 0;
      fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
      fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
      fieldData.m_nAllocSize = 4;
      *&fieldData.m_pData = flOpvarValue;
      CSoundOpGameSystem::SetLibraryStackField(
        g_pSoundOpGameSystem,
        &filter,
        pszStackName,
        pszOperatorName,
        pszOpvarName,
        &fieldData,
        0);
      if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
        operator delete[](fieldData.m_pData);
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
}


// Script_EmitSoundOn  (line 1669, @0x0000000001f30100, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CBaseEntity::EmitSound
// globals: g_pScriptVM
void __fastcall Script_EmitSoundOn(const char *pszSoundName, HSCRIPT hEnt)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v6; // rax

  if ( hEnt != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hEnt, Script);
    if ( v6 != 0 )
      CBaseEntity::EmitSound(v6, pszSoundName, 0.0, 0);
  }
}


// Script_StopSoundOn  (line 1679, @0x0000000001f30090, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CBaseEntity::StopSound
// globals: g_pScriptVM
void __fastcall Script_StopSoundOn(const char *pszSoundName, HSCRIPT hEnt)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v6; // rax

  if ( hEnt != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hEnt, Script);
    if ( v6 != 0 )
      CBaseEntity::StopSound(v6, pszSoundName);
  }
}


// Script_EmitSoundOnClient  (line 1690, @0x0000000001f30530, libserver.so)  // inlines: CSingleUserRecipientFilter, HScriptToEntity<CBaseEntity>, ToBasePlayer, ToEnt, entindex, ~CSingleUserRecipientFilter
// calls: GetScriptDesc<CEntityInstance>, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// globals: g_pScriptVM
void __fastcall Script_EmitSoundOnClient(const char *pszSoundName, HSCRIPT hEnt)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  const CEntityInstance *v7; // rbx
  const CEntityInstance *v8; // r14
  CEntityIndex v9; // eax
  CSingleUserRecipientFilter filter; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v11; // [rsp+138h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  if ( hEnt != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hEnt, Script);
    v7 = v6;
    if ( v6 != 0 && (*(*v6 + 1120LL))(v6) != 0 )
    {
      v8 = 0;
      if ( (*(v7->_vptr_IHandleEntity + 140))(v7) != 0 )
        v8 = v7;
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::AddRecipient(&filter, v8);
      v9.m_Data = CEntityInstance::GetEntityIndex(v7).m_Data;
      CBaseEntity::EmitSound(&filter, v9, pszSoundName, 0, 0.0, 0);
      filter._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
}


// Script_StartSoundEventReliable  (line 1704, @0x0000000001f6a330, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, HScriptToEntity<CBaseEntity>, ToEnt, entindex, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: GetScriptDesc<CEntityInstance>, CEntityInstance::GetEntityIndex, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StartSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// globals: g_pScriptVM, g_pSoundOpGameSystem
void __fastcall Script_StartSoundEventReliable(const char *pszSoundName, HSCRIPT hEnt)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  const CEntityInstance *v6; // rax
  CEntityIndex v7; // r12d
  CRecipientFilter v8; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v9; // [rsp+138h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  if ( hEnt != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hEnt, Script);
    if ( v6 != 0 )
    {
      v7.m_Data = CEntityInstance::GetEntityIndex(v6).m_Data;
      CRecipientFilter::CRecipientFilter(&v8);
      v8._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&v8);
      v8._vptr_IRecipientFilter = &off_3FCB130;
      CRecipientFilter::MakeReliable(&v8);
      CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &v8, pszSoundName, v7, -1, 0.0);
      v8._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&v8);
    }
  }
}


// Script_StartSoundEventUnreliable  (line 1713, @0x0000000001f6a460, libserver.so)  // inlines: CBroadcastRecipientFilter, HScriptToEntity<CBaseEntity>, ToEnt, entindex, ~CBroadcastRecipientFilter
// calls: GetScriptDesc<CEntityInstance>, CEntityInstance::GetEntityIndex, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::StartSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// globals: g_pScriptVM, g_pSoundOpGameSystem
void __fastcall Script_StartSoundEventUnreliable(const char *pszSoundName, HSCRIPT hEnt)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  const CEntityInstance *v6; // rax
  CEntityIndex v7; // r12d
  CRecipientFilter v8; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v9; // [rsp+138h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  if ( hEnt != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hEnt, Script);
    if ( v6 != 0 )
    {
      v7.m_Data = CEntityInstance::GetEntityIndex(v6).m_Data;
      CRecipientFilter::CRecipientFilter(&v8);
      v8._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&v8);
      CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &v8, pszSoundName, v7, -1, 0.0);
      v8._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&v8);
    }
  }
}


// Script_StopSoundEventReliable  (line 1723, @0x0000000001f6ded0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, HScriptToEntity<CBaseEntity>, ToEnt, entindex, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: GetScriptDesc<CEntityInstance>, CEntityInstance::GetEntityIndex, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StopSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// globals: g_pScriptVM, g_pSoundOpGameSystem
void __fastcall Script_StopSoundEventReliable(const char *pszSoundName, HSCRIPT hEnt)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  const CEntityInstance *v6; // rax
  CEntityIndex v7; // r12d
  CRecipientFilter v8; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v9; // [rsp+138h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  if ( hEnt != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hEnt, Script);
    if ( v6 != 0 )
    {
      v7.m_Data = CEntityInstance::GetEntityIndex(v6).m_Data;
      CRecipientFilter::CRecipientFilter(&v8);
      v8._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&v8);
      v8._vptr_IRecipientFilter = &off_3FCB130;
      CRecipientFilter::MakeReliable(&v8);
      CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &v8, pszSoundName, v7);
      v8._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&v8);
    }
  }
}


// Script_StopSoundEventUnreliable  (line 1732, @0x0000000001f6ddc0, libserver.so)  // inlines: CBroadcastRecipientFilter, HScriptToEntity<CBaseEntity>, ToEnt, entindex, ~CBroadcastRecipientFilter
// calls: GetScriptDesc<CEntityInstance>, CEntityInstance::GetEntityIndex, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::StopSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// globals: g_pScriptVM, g_pSoundOpGameSystem
void __fastcall Script_StopSoundEventUnreliable(const char *pszSoundName, HSCRIPT hEnt)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  const CEntityInstance *v6; // rax
  CEntityIndex v7; // r12d
  CRecipientFilter v8; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v9; // [rsp+138h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  if ( hEnt != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hEnt, Script);
    if ( v6 != 0 )
    {
      v7.m_Data = CEntityInstance::GetEntityIndex(v6).m_Data;
      CRecipientFilter::CRecipientFilter(&v8);
      v8._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&v8);
      CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &v8, pszSoundName, v7);
      v8._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&v8);
    }
  }
}


// Script_StartSoundEventFromPositionReliable  (line 1742, @0x0000000001f6ca90, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
// globals: g_pSoundOpGameSystem
void __fastcall Script_StartSoundEventFromPositionReliable(const char *pszSoundName, double a2, float a3)
{
  SndOpEventGuid_t started; // r12
  CSoundOpGameSystem *v5; // rdi
  SosFieldValueMem_t *v6; // rax
  CSosFieldData fieldData; // [rsp+20h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+178h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, pszSoundName, 0, -1, 0.0);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  fieldData.m_pData = 0;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v6 = operator new[](0xCu);
  fieldData.m_pData = v6;
  fieldData.m_nAllocSize = 12;
  *v6 = _mm_cvtsi128_si32(LODWORD(a2));
  *(v6 + 1) = _mm_cvtsi128_si32(HIDWORD(a2));
  v5 = g_pSoundOpGameSystem;
  *(v6 + 2) = _mm_cvtsi128_si32(LODWORD(a3));
  CSoundOpGameSystem::SetSoundEventParam(v5, &filter, started, "position", &fieldData, 0, 0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// Script_StartSoundEventFromPositionUnreliable  (line 1749, @0x0000000001f6ccd0, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
// globals: g_pSoundOpGameSystem
void __fastcall Script_StartSoundEventFromPositionUnreliable(const char *pszSoundName, double a2, float a3)
{
  SndOpEventGuid_t started; // r12
  CSoundOpGameSystem *v5; // rdi
  SosFieldValueMem_t *v6; // rax
  CSosFieldData fieldData; // [rsp+20h] [rbp-190h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+178h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, pszSoundName, 0, -1, 0.0);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  fieldData.m_pData = 0;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v6 = operator new[](0xCu);
  fieldData.m_pData = v6;
  fieldData.m_nAllocSize = 12;
  *v6 = _mm_cvtsi128_si32(LODWORD(a2));
  *(v6 + 1) = _mm_cvtsi128_si32(HIDWORD(a2));
  v5 = g_pSoundOpGameSystem;
  *(v6 + 2) = _mm_cvtsi128_si32(LODWORD(a3));
  CSoundOpGameSystem::SetSoundEventParam(v5, &filter, started, "position", &fieldData, 0, 0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// Script_ScreenShake  (line 1758, @0x0000000001f2bac0, libserver.so)
// calls: UTIL_ScreenShake
void __fastcall Script_ScreenShake(
        const Vector *const center,
        float amplitude,
        float frequency,
        float duration,
        float radius,
        int eCommand,
        bool bAirShake)
{
  UTIL_ScreenShake(center, amplitude, frequency, duration, radius, (eCommand != 0), bAirShake, 0);
}


// ParseConnections  (line 1767, @0x0000000001f3c330, libserver.so)  // inlines: AddConnectionDesc, AssignTo, CResourcePointer, CResourcePointerBase, CResourceString, CVariantBase, EntityIOConnectionData_t, SetPtr, SetRawPtr, TempString, ToString, VariantFieldTypeName, ~CVariantBase
// calls: CEntityIOActionParsedData::CEntityIOActionParsedData, ParseEntityIOAction, CFmtStrN<256, false>::CFmtStrN, CEntityKeyValues::AddConnectionDesc, V_snprintf, VariantFieldTypeName, Warning, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume, __stack_chk_fail
// callers: SetupEntityKeyValuesFromTable
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d", "Unsupported KeyValue type for key \"%s\" (type %s) when parsing connections\n" (25 total)
// globals: g_pScriptVM, jpt_1F3C5BC, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_1F3C630, jpt_1F3CA6B
void __fastcall ParseConnections(CEntitySpawnerBase<CBaseEntity> *pSpawner, HSCRIPT hConnectionTable)
{
  int v2; // ebx
  unsigned int i; // eax
  int16 m_type; // ax
  const char *m_uint64; // r14
  const char *v6; // rsi
  unsigned int v7; // r13d
  const char *v8; // rax
  const char *v9; // rcx
  double m_float; // xmm0_8
  const char *v11; // rdx
  const char *v12; // rax
  const char *v13; // rcx
  double m_float64; // xmm0_8
  int v16; // [rsp+2Ch] [rbp-4D4h]
  ScriptVariant_t vKey; // [rsp+40h] [rbp-4C0h] BYREF
  ScriptVariant_t vValue; // [rsp+50h] [rbp-4B0h] BYREF
  EntityIOConnectionData_t connectionData; // [rsp+60h] [rbp-4A0h] BYREF
  CFmtStr keyName; // [rsp+80h] [rbp-480h] BYREF
  CEntityIOActionParsedData parsedData; // [rsp+190h] [rbp-370h] BYREF
  unsigned __int64 v23; // [rsp+4C8h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  vKey.m_type = 0;
  vKey.m_flags = 0;
  vKey.m_uint64 = 0;
  vValue.m_type = 0;
  vValue.m_flags = 0;
  vValue.m_uint64 = 0;
  v16 = (*(*g_pScriptVM + 280LL))(g_pScriptVM);
  if ( v16 > 0 )
  {
    v2 = 0;
    for ( i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hConnectionTable, 0, &vKey, &vValue);
          ;
          i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hConnectionTable, v7, &vKey, &vValue) )
    {
      v7 = i;
      if ( vKey.m_type == 30 )
      {
        m_type = vValue.m_type;
        m_uint64 = vKey.m_uint64;
        if ( vValue.m_type != 30 )
          goto LABEL_19;
      }
      else
      {
        switch ( vKey.m_type )
        {
          case 0:
            goto LABEL_22;
          case 1:
            m_float = vKey.m_float;
            goto LABEL_28;
          case 3:
          case 0x27:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8));
            break;
          case 4:
          case 0x1B:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8),
              *(vKey.m_uint64 + 12));
            break;
          case 5:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
            break;
          case 6:
            v9 = "true";
            if ( vKey.m_char == 0 )
              v9 = "false";
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v9);
            break;
          case 8:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
            break;
          case 9:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              vKey.m_char,
              BYTE1(vKey.m_int),
              BYTE2(vKey.m_uint),
              HIBYTE(vKey.m_float));
            break;
          case 0x19:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4));
            break;
          case 0x1A:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", vKey.m_uint64);
            break;
          case 0x21:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", vKey.m_uint64);
            break;
          case 0x22:
            m_float = vKey.m_float64;
LABEL_28:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
            break;
          case 0x25:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
            break;
          default:
            v8 = VariantFieldTypeName(vKey.m_type);
            Warning("No conversion from %s to string at the moment!\n", v8);
LABEL_22:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            break;
        }
        m_type = vValue.m_type;
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        if ( vValue.m_type != 30 )
        {
LABEL_19:
          switch ( m_type )
          {
            case 0:
              v11 = "void";
              break;
            case 1:
              v11 = "float";
              break;
            case 3:
              v11 = "vector";
              break;
            case 4:
              v11 = "quaternion";
              break;
            case 5:
              v11 = "integer";
              break;
            case 6:
              v11 = "boolean";
              break;
            case 8:
              v11 = "character";
              break;
            case 9:
              v11 = "color";
              break;
            case 13:
              v11 = "ehandle";
              break;
            case 25:
              v11 = "vector2d";
              break;
            case 26:
              v11 = "int64";
              break;
            case 27:
              v11 = "vector4d";
              break;
            case 28:
              v11 = "resourcehandle";
              break;
            case 30:
              v11 = "cstring";
              break;
            case 31:
              v11 = "hscript";
              break;
            case 32:
              v11 = "variant";
              break;
            case 33:
              v11 = "uint64";
              break;
            case 34:
              v11 = "float64";
              break;
            case 37:
              v11 = "unsigned";
              break;
            case 38:
              v11 = "utlstringtoken";
              break;
            case 39:
              v11 = "qangle";
              break;
            case 48:
              v11 = "hscript_lightbinding";
              break;
            case 49:
              v11 = "js_value";
              break;
            case 50:
              v11 = "js_object";
              break;
            case 51:
              v11 = "js_array";
              break;
            case 52:
              v11 = "js_raw_args";
              break;
            default:
              v11 = "unknown_variant_type";
              break;
          }
          Warning("Unsupported KeyValue type for key \"%s\" (type %s) when parsing connections\n", m_uint64, v11);
          goto LABEL_13;
        }
      }
      CEntityIOActionParsedData::CEntityIOActionParsedData(&parsedData);
      if ( vValue.m_type == 30 )
      {
        v6 = vValue.m_uint64;
      }
      else
      {
        switch ( vValue.m_type )
        {
          case 0:
            goto LABEL_69;
          case 1:
            m_float64 = vValue.m_float;
            goto LABEL_79;
          case 3:
          case 0x27:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              *vValue.m_pszString,
              *(vValue.m_uint64 + 4),
              *(vValue.m_uint64 + 8));
            break;
          case 4:
          case 0x1B:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              *vValue.m_pszString,
              *(vValue.m_uint64 + 4),
              *(vValue.m_uint64 + 8),
              *(vValue.m_uint64 + 12));
            break;
          case 5:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vValue.m_int);
            break;
          case 6:
            v13 = "true";
            if ( vValue.m_char == 0 )
              v13 = "false";
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v13);
            break;
          case 8:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vValue.m_char);
            break;
          case 9:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              vValue.m_char,
              BYTE1(vValue.m_int),
              BYTE2(vValue.m_uint),
              HIBYTE(vValue.m_float));
            break;
          case 0x19:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              *vValue.m_pszString,
              *(vValue.m_uint64 + 4));
            break;
          case 0x1A:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%lld",
              vValue.m_uint64);
            break;
          case 0x21:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%llu",
              vValue.m_uint64);
            break;
          case 0x22:
            m_float64 = vValue.m_float64;
LABEL_79:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
            break;
          case 0x25:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vValue.m_int);
            break;
          default:
            v12 = VariantFieldTypeName(vValue.m_type);
            Warning("No conversion from %s to string at the moment!\n", v12);
LABEL_69:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            break;
        }
        v6 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      ParseEntityIOAction(&parsedData, v6);
      CFmtStrN<256,false>::CFmtStrN(&keyName, "%s", m_uint64);
      connectionData.m_targetName.m_nOffset = 0;
      connectionData.m_inputName.m_nOffset = 0;
      connectionData.m_overrideParam.m_nOffset = 0;
      connectionData.m_outputName.m_nOffset = 41;
      if ( parsedData.m_pTargetName != 0 )
        connectionData.m_targetName.m_nOffset = parsedData.m_pTargetName - &connectionData.m_targetName;
      if ( parsedData.m_pTargetInput != 0 )
        connectionData.m_inputName.m_nOffset = parsedData.m_pTargetInput - &connectionData.m_inputName;
      connectionData.m_flDelay = parsedData.m_flDelay;
      connectionData.m_nTimesToFire = parsedData.m_nTimesToFire;
      if ( parsedData.m_pTargetParam != 0 )
        connectionData.m_overrideParam.m_nOffset = parsedData.m_pTargetParam - &connectionData.m_overrideParam;
      connectionData.m_targetType = 7;
      CEntityKeyValues::AddConnectionDesc(pSpawner->m_pEntityKeyValues, &connectionData);
LABEL_13:
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKey);
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
      if ( ++v2 == v16 )
        break;
    }
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
}


// CEntityGroupCallback::CallBackAndDeleteMe  (line 1924, @0x0000000001f73d50, libserver.so)  // inlines: ~CEntityGroupCallback
// calls: operator delete
// globals: g_pScriptVM
void __fastcall CEntityGroupCallback::CallBackAndDeleteMe(
        CEntityGroupCallback *const this,
        CBaseEntity *pEntity,
        const CEntityKeyValues *pKeyValues)
{
  if ( this != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, this->m_hCallback, pKeyValues);
    operator delete(this);
  }
}


// CEntityListSpawnCallback::CallBackAndDeleteMe  (line 1960, @0x0000000001f8a7f0, libserver.so)  // inlines: CVariantBase, Call<CVariantBase<CVariantDefaultAllocator> >, EntityToHScript, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*, operator=, operator[], ~CEntityListSpawnCallback, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, operator delete, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
// globals: g_pScriptVM, CEntityHandle::gm_pEntityList
void __fastcall CEntityListSpawnCallback::CallBackAndDeleteMe(
        CEntityListSpawnCallback *const this,
        SpawnGroupHandle_t hSpawnGroup,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const entities)
{
  __int64 v4; // r12
  int i; // ebx
  CEntityHandle *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // r15
  IScriptVM *v12; // rdi
  void (__fastcall *v13)(IScriptVM *, uint64, CVariantBase<CVariantDefaultAllocator> *); // r14
  uint64 m_hScope; // rax
  IScriptVM *v15; // r13
  HSCRIPT m_hCallback; // r14
  HSCRIPT v17; // rsi
  ScriptVariant_t returnArray; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> pDest; // [rsp+30h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v21; // [rsp+40h] [rbp-40h] BYREF

  if ( this->m_hCallback != 0 )
  {
    returnArray.m_type = 0;
    returnArray.m_flags = 0;
    returnArray.m_uint64 = 0;
    (*(*g_pScriptVM + 360LL))(g_pScriptVM, &returnArray);
    v4 = 0;
    for ( i = 0; entities->m_Size > i; ++i )
    {
      while ( 1 )
      {
        v6 = &entities->m_Memory.m_pMemory[v4];
        m_Index = v6->m_Index;
        if ( v6->m_Index + 2 > 1 )
        {
          v8 = v6->m_Index;
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[v8 & 0x1FF];
            if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
            {
              m_pInstance = v10->m_pInstance;
              if ( v10->m_pInstance != 0 )
              {
                v12 = g_pScriptVM;
                v13 = *(*g_pScriptVM + 384LL);
                m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
                if ( m_hScope == 0 )
                {
                  CEntityInstance::CreatePublicScriptScope(v10->m_pInstance, 0);
                  v12 = g_pScriptVM;
                  m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
                }
                v21.m_type = 31;
                v21.m_flags = 0;
                v21.m_uint64 = m_hScope;
                v13(v12, returnArray.m_uint64, &v21);
                if ( (v21.m_flags & 1) != 0 )
                  break;
              }
            }
          }
        }
        ++i;
        ++v4;
        if ( entities->m_Size <= i )
          goto LABEL_14;
      }
      ++v4;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
    }
LABEL_14:
    pDest.m_type = 0;
    pDest.m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&returnArray, &pDest);
    v15 = g_pScriptVM;
    v21.m_type = 0;
    v21.m_flags = 0;
    m_hCallback = this->m_hCallback;
    v21.m_uint64 = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&pDest, &v21);
    (*(*v15 + 160LL))(v15, m_hCallback, &v21, 1, 0, 0, 1);
    CVariantBase<CVariantDefaultAllocator>::Free(&v21);
    CVariantBase<CVariantDefaultAllocator>::Free(&pDest);
    (*(*g_pScriptVM + 344LL))(g_pScriptVM, &returnArray);
    CVariantBase<CVariantDefaultAllocator>::Free(&returnArray);
    v17 = this->m_hCallback;
  }
  else
  {
    v17 = 0;
  }
  (*(*g_pScriptVM + 152LL))(g_pScriptVM, v17);
  operator delete(this);
}


// SetupEntityKeyValuesFromTable  (line 1989, @0x0000000001f5ac70, libserver.so)  // inlines: AddKeyValue<CVariantBase<CEntityVariantAllocator> >, AddKeyValue<char const*>, AddToTail, Allocate, AssignTo, Base, CVariantBase, CopyData, Element, EnableKeyValidation, FStrEq, FindKeyHash, Free, MakeStringToken, ParseAttributes, ParseTable, SetClassName, SetDynamicAttribute<CVariantBase<CEntityVariantAllocator> >, SetValue, SetValue<CVariantBase<CEntityVariantAllocator> >, TempString, ToString, V_memcpy, V_strlen, _V_strcmp, memcpy, operator=, operator[], ~CVariantBase
// calls: CEntitySystem::FindClassByDesignName, V_stricmp_fast, V_snprintf, VariantFieldTypeName, Warning, ParseConnections, CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>, strlen, CEntityVariantAllocator::Allocate, memcpy, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr (19 total)
// callers: Script_PrecacheEntityFromTable, Script_SpawnEntityListFromTableSynchronous, Script_SpawnEntityFromTableSynchronous, Script_SpawnEntityListFromTableAsynchronous, Script_SpawnEntityGroupFromTable
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d", "Attempted to set attribute %s as if it was a non-attribute key!\n" (8 total)
// globals: g_pScriptVM, jpt_1F5AEF6, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_1F5B335
bool __fastcall SetupEntityKeyValuesFromTable(
        const char *pClassName,
        HSCRIPT hSpawnTable,
        CEntitySpawnerBase<CBaseEntity> *pSpawner)
{
  const char *m_uint64; // rbx
  CEntityKeyValues *m_pEntityKeyValues; // r12
  CEntityClass *ClassByDesignName; // rax
  IScriptVM *v6; // rdi
  IScriptVM *v7; // rdi
  unsigned int i; // eax
  const char *v9; // rbx
  const char *v10; // rax
  double m_float; // xmm0_8
  const char *v12; // rcx
  uint32 v13; // r12d
  CEntityKeyValues *v14; // rdi
  int v15; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v16; // cx
  __int64 v17; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v18; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v19; // rdx
  __int64 v20; // rax
  int v21; // r12d
  unsigned int v22; // eax
  const char *v23; // r14
  CEntityKeyValues *v24; // rbx
  unsigned int v25; // r15d
  const char *v26; // rax
  double m_float64; // xmm0_8
  const char *v28; // rcx
  uint32 v29; // r13d
  int v30; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v31; // cx
  __int64 v32; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v33; // rdx
  __int64 v34; // rsi
  uint v35; // edi
  __int16 v36; // r14
  unsigned __int64 v37; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v38; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v39; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v40; // rax
  bool result; // al
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v42; // rsi
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v44; // cx
  __int64 v45; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v46; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r12
  __int16 v50; // r14
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v53; // r13
  __int64 v54; // r14
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v55; // r13
  uint16 m_flags; // ax
  signed int v57; // r15d
  void *v58; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v59; // rax
  bool v60; // zf
  __int16 v61; // ax
  signed int v62; // r13d
  void *v63; // rax
  void *dest; // [rsp+18h] [rbp-D8h]
  int v65; // [rsp+24h] [rbp-CCh]
  int v67; // [rsp+30h] [rbp-C0h]
  int v68; // [rsp+34h] [rbp-BCh]
  unsigned int v69; // [rsp+48h] [rbp-A8h]
  int v70; // [rsp+4Ch] [rbp-A4h]
  uint64 v71; // [rsp+50h] [rbp-A0h]
  bool v73; // [rsp+68h] [rbp-88h]
  ScriptVariant_t vClassname; // [rsp+70h] [rbp-80h] BYREF
  CVariantBase<CVariantDefaultAllocator> pString; // [rsp+80h] [rbp-70h] BYREF
  CVariantBase<CVariantDefaultAllocator> hConnectionTable; // [rsp+90h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> s; // [rsp+A0h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v78[4]; // [rsp+B0h] [rbp-40h] BYREF

  m_uint64 = pClassName;
  vClassname.m_type = 0;
  vClassname.m_flags = 0;
  vClassname.m_uint64 = 0;
  if ( pClassName == 0 || *pClassName == 0 )
  {
    if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hSpawnTable, "classname", &vClassname) != 0 && vClassname.m_type == 30 )
      m_uint64 = vClassname.m_uint64;
    if ( m_uint64 == 0 || *m_uint64 == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
        LoggingSystem_Log(
          LOG_VSCRIPT,
          2,
          "When specifying keyvalues to spawn or precache, you must specify a classname!\n");
      result = 0;
      goto LABEL_117;
    }
  }
  m_pEntityKeyValues = pSpawner->m_pEntityKeyValues;
  if ( m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_141:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pSpawner->m_pEntityKeyValues->m_keyHashes);
      v50 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      m_pElements[v50] = -971301790;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v53 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v53 = 0;
      v54 = v50;
      v55 = &v53[v54];
      m_flags = v55->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v55->m_value.m_flags = m_flags & 0xFFFE;
      v55->m_value.m_uint64 = 0;
      v55->m_value.m_type = 30;
      v57 = strlen(m_uint64) + 1;
      v58 = CEntityVariantAllocator::Allocate(v57);
      v55->m_value.m_uint64 = v58;
      memcpy(v58, m_uint64, v57);
      v55->m_value.m_flags |= 1u;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v59 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v59 = 0;
      v59[v54].m_pAttributeName = 0;
      goto LABEL_7;
    }
    v44 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v45 = 0;
    while ( 1 )
    {
      if ( v44 != 0 )
      {
        v46 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v44 > 9 )
          v46 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v46 = 0;
      }
      if ( v46[v45] == -971301790 )
        break;
      if ( m_nCount <= ++v45 )
        goto LABEL_141;
    }
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v47 = m_pEntityKeyValues->m_keyValues.m_pElements;
      v48 = v45;
      v49 = &v47[v48];
      if ( v47[v48].m_pAttributeName != 0 )
      {
LABEL_140:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v47[v48].m_pAttributeName);
        goto LABEL_7;
      }
    }
    else
    {
      v47 = 0;
      v49 = 24 * v45;
      v60 = *(&stru_10.m_Lock.gap0 + 3 * v45) == 0;
      v48 = v45;
      if ( !v60 )
        goto LABEL_140;
    }
    v61 = *(v49 + 10);
    if ( (v61 & 1) != 0 )
      *(v49 + 10) = v61 & 0xFFFE;
    *v49 = 0;
    *(v49 + 8) = 30;
    v62 = strlen(m_uint64) + 1;
    v63 = CEntityVariantAllocator::Allocate(v62);
    *v49 = v63;
    memcpy(v63, m_uint64, v62);
    *(v49 + 10) |= 1u;
  }
LABEL_7:
  ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, m_uint64, &pSpawner->m_scriptClassName);
  v6 = g_pScriptVM;
  pSpawner->m_pEntityClass = ClassByDesignName;
  (*(*v6 + 344LL))(v6, &vClassname);
  v7 = g_pScriptVM;
  hConnectionTable.m_type = 0;
  pSpawner->m_bValidateKeys = 0;
  pString.m_type = 0;
  pString.m_flags = 0;
  pString.m_uint64 = 0;
  hConnectionTable.m_flags = 0;
  hConnectionTable.m_uint64 = 0;
  v67 = (*(*v7 + 280LL))(v7, hSpawnTable);
  if ( v67 > 0 )
  {
    v68 = 0;
    for ( i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hSpawnTable, 0, &pString, &hConnectionTable);
          ;
          i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hSpawnTable, v69, &pString, &hConnectionTable) )
    {
      v69 = i;
      if ( pString.m_type == 30 )
      {
        v9 = pString.m_uint64;
      }
      else
      {
        switch ( pString.m_type )
        {
          case 0:
            goto LABEL_24;
          case 1:
            m_float = pString.m_float;
            goto LABEL_26;
          case 3:
          case 0x27:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              *pString.m_pszString,
              *(pString.m_uint64 + 4),
              *(pString.m_uint64 + 8));
            break;
          case 4:
          case 0x1B:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              *pString.m_pszString,
              *(pString.m_uint64 + 4),
              *(pString.m_uint64 + 8),
              *(pString.m_uint64 + 12));
            break;
          case 5:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", pString.m_int);
            break;
          case 6:
            v12 = "true";
            if ( pString.m_char == 0 )
              v12 = "false";
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v12);
            break;
          case 8:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", pString.m_char);
            break;
          case 9:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              pString.m_char,
              BYTE1(pString.m_int),
              BYTE2(pString.m_uint),
              HIBYTE(pString.m_int));
            break;
          case 0x19:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              *pString.m_pszString,
              *(pString.m_uint64 + 4));
            break;
          case 0x1A:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%lld",
              pString.m_uint64);
            break;
          case 0x21:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%llu",
              pString.m_uint64);
            break;
          case 0x22:
            m_float = pString.m_float64;
LABEL_26:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
            break;
          case 0x25:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", pString.m_int);
            break;
          default:
            v10 = VariantFieldTypeName(pString.m_type);
            Warning("No conversion from %s to string at the moment!\n", v10);
LABEL_24:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            break;
        }
        v9 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      if ( V_stricmp_fast(v9, "classname") == 0 )
        goto LABEL_16;
      if ( hConnectionTable.m_type != 31 )
      {
        v13 = 0;
        if ( v9 != 0 && *v9 != 0 )
        {
          v13 = MurmurHash2LowerCase(v9, 0x31415926u);
          if ( g_bUpdateStringTokenDatabase )
            RegisterStringToken(v13, v9, 0, 1);
        }
        v14 = pSpawner->m_pEntityKeyValues;
        if ( v14->m_nQueuedForSpawnCount > 0 )
          goto LABEL_16;
        v15 = v14->m_keyHashes.m_nCount;
        if ( v15 <= 0 )
        {
LABEL_120:
          CEntityKeyValues::AddKeyValue<CVariantBase<CEntityVariantAllocator>>(v14, v13, &hConnectionTable, 0);
          goto LABEL_16;
        }
        v16 = v14->m_keyHashes.m_nAllocated;
        v17 = 0;
        while ( 1 )
        {
          if ( v16 != 0 )
          {
            v18 = (&v14->m_keyHashes.m_nAllocAllocated + 1);
            if ( v16 > 9 )
              v18 = v14->m_keyHashes.m_pElements;
            if ( v13 == v18[v17] )
            {
LABEL_49:
              if ( v14->m_keyValues.m_nAllocated != 0 )
              {
                v19 = v14->m_keyValues.m_pElements;
                v20 = v17;
                if ( v19[v20].m_pAttributeName != 0 )
                {
LABEL_51:
                  Warning(
                    "Attempted to set attribute %s as if it was a non-attribute key!\n",
                    v19[v20].m_pAttributeName);
                  goto LABEL_16;
                }
                v42 = &v19[v20];
              }
              else
              {
                v19 = 0;
                v60 = *(&stru_10.m_Lock.gap0 + 3 * v17) == 0;
                v42 = (24 * v17);
                v20 = v17;
                if ( !v60 )
                  goto LABEL_51;
              }
              CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>(&hConnectionTable, &v42->m_value);
              goto LABEL_16;
            }
          }
          else if ( v13 == *(4 * v17) )
          {
            goto LABEL_49;
          }
          if ( v15 <= ++v17 )
            goto LABEL_120;
        }
      }
      if ( v9 == &stru_32DB07A.m_HierarchyConstraints.m_table.m_nGrowSize + 2
        || strcmp(v9, &stru_32DB07A.m_HierarchyConstraints.m_table.m_nGrowSize + 2) == 0 )
      {
        ParseConnections(pSpawner, hConnectionTable.m_hScript);
        goto LABEL_16;
      }
      if ( v9 == "attributes" || strcmp(v9, "attributes") == 0 )
      {
        s.m_flags = 0;
        s.m_type = 0;
        s.m_uint64 = 0;
        v78[0].m_type = 0;
        v78[0].m_flags = 0;
        v78[0].m_uint64 = 0;
        v71 = hConnectionTable.m_uint64;
        v70 = (*(*g_pScriptVM + 280LL))(g_pScriptVM, hConnectionTable.m_uint64);
        if ( v70 <= 0 )
          goto LABEL_107;
        v21 = 0;
        v22 = (*(*g_pScriptVM + 296LL))(g_pScriptVM, v71, 0, &s, v78);
LABEL_59:
        v25 = v22;
        if ( s.m_type == 30 )
        {
          v23 = s.m_uint64;
        }
        else
        {
          switch ( s.m_type )
          {
            case 0:
              goto LABEL_65;
            case 1:
              m_float64 = s.m_float;
              goto LABEL_67;
            case 3:
            case 0x27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *s.m_pszString,
                *(s.m_uint64 + 4),
                *(s.m_uint64 + 8));
              break;
            case 4:
            case 0x1B:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *s.m_pszString,
                *(s.m_uint64 + 4),
                *(s.m_uint64 + 8),
                *(s.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", s.m_int);
              break;
            case 6:
              v28 = "true";
              if ( s.m_char == 0 )
                v28 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v28);
              break;
            case 8:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", s.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                s.m_char,
                BYTE1(s.m_int),
                BYTE2(s.m_uint),
                HIBYTE(s.m_int));
              break;
            case 0x19:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *s.m_pszString,
                *(s.m_uint64 + 4));
              break;
            case 0x1A:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", s.m_uint64);
              break;
            case 0x21:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", s.m_uint64);
              break;
            case 0x22:
              m_float64 = s.m_float64;
LABEL_67:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
              break;
            case 0x25:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", s.m_int);
              break;
            default:
              v26 = VariantFieldTypeName(s.m_type);
              Warning("No conversion from %s to string at the moment!\n", v26);
LABEL_65:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          v23 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        v24 = pSpawner->m_pEntityKeyValues;
        if ( v24->m_nQueuedForSpawnCount > 0 )
          goto LABEL_57;
        v29 = 0;
        if ( v23 != 0 && *v23 != 0 )
        {
          v29 = MurmurHash2LowerCase(v23, 0x31415926u);
          if ( g_bUpdateStringTokenDatabase )
            RegisterStringToken(v29, v23, 0, 1);
        }
        v30 = v24->m_keyHashes.m_nCount;
        if ( v30 <= 0 )
        {
LABEL_92:
          if ( v23 != 0 )
          {
            v65 = strlen(v23) + 1;
            v35 = v65;
          }
          else
          {
            v65 = 1;
            v35 = 1;
          }
          dest = CEntityVariantAllocator::Allocate(v35);
          if ( v65 < 0 )
            __debugbreak();
          memcpy(dest, v23, v65);
          CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&v24->m_keyHashes);
          v36 = v24->m_keyHashes.m_nCount - 1;
          v37 = v24->m_keyHashes.m_nAllocated;
          if ( v37 != 0 )
          {
            if ( v37 <= 9 )
              v38 = (&v24->m_keyHashes.m_nAllocAllocated + 1);
            else
              v38 = v24->m_keyHashes.m_pElements;
          }
          else
          {
            v38 = 0;
          }
          v38[v36] = v29;
          CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v24->m_keyValues);
          if ( v24->m_keyValues.m_nAllocated != 0 )
            v39 = v24->m_keyValues.m_pElements;
          else
            v39 = 0;
          CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>(v78, &v39[v36].m_value);
          if ( v24->m_keyValues.m_nAllocated != 0 )
            v40 = v24->m_keyValues.m_pElements;
          else
            v40 = 0;
          v40[v36].m_pAttributeName = dest;
          goto LABEL_57;
        }
        v31 = v24->m_keyHashes.m_nAllocated;
        v32 = 0;
        while ( 1 )
        {
          if ( v31 != 0 )
          {
            v33 = (&v24->m_keyHashes.m_nAllocAllocated + 1);
            if ( v31 > 9 )
              v33 = v24->m_keyHashes.m_pElements;
            if ( v29 == v33[v32] )
            {
LABEL_89:
              if ( v24->m_keyValues.m_nAllocated != 0 )
              {
                v34 = &v24->m_keyValues.m_pElements[v32];
                if ( *(v34 + 16) != 0 )
                  goto LABEL_91;
LABEL_109:
                Warning("Attempted to set non-attribute value %s as if it was an attribute!\n", v23);
              }
              else
              {
                v34 = 24 * v32;
                if ( *(&stru_10.m_Lock.gap0 + 3 * v32) == 0 )
                  goto LABEL_109;
LABEL_91:
                CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>(v78, v34);
              }
LABEL_57:
              (*(*g_pScriptVM + 344LL))(g_pScriptVM, &s);
              (*(*g_pScriptVM + 344LL))(g_pScriptVM, v78);
              if ( ++v21 != v70 )
              {
                v22 = (*(*g_pScriptVM + 296LL))(g_pScriptVM, v71, v25, &s, v78);
                goto LABEL_59;
              }
LABEL_107:
              CVariantBase<CVariantDefaultAllocator>::Free(v78);
              CVariantBase<CVariantDefaultAllocator>::Free(&s);
              break;
            }
          }
          else if ( v29 == *(4 * v32) )
          {
            goto LABEL_89;
          }
          if ( v30 <= ++v32 )
            goto LABEL_92;
        }
      }
LABEL_16:
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &pString);
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &hConnectionTable);
      if ( ++v68 == v67 )
        break;
    }
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&hConnectionTable);
  CVariantBase<CVariantDefaultAllocator>::Free(&pString);
  result = 1;
LABEL_117:
  if ( (vClassname.m_flags & 1) != 0 )
  {
    v73 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, vClassname.m_uint64);
    return v73;
  }
  return result;
}


// Script_SpawnEntityFromTableSynchronous  (line 2017, @0x0000000001f5c740, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, GetSerialNumber, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, Spawn, operator CBaseEntity*, operator CEntityInstance*, operator!, operator(), operator=, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, SetupEntityKeyValuesFromTable, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CUtlString::FreeMemoryBlock, CEntityKeyValues::SetValue, CVProfile::ExitScope (20 total)
// strings: "Server Simulation", "Spawn"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
HSCRIPT __fastcall Script_SpawnEntityFromTableSynchronous(const char *pClassName, HSCRIPT hSpawnTable)
{
  CEntitySystem *v4; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v6; // rdx
  char v7; // al
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // r14d
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v11; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v13; // r14
  CEntityIdentity *m_pEntity; // rax
  __int16 v15; // si
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  CEntityKeyValues *i; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v20; // rdi
  CEntityIdentity *v21; // rax
  CEntityIdentity *v22; // rax
  HSCRIPT m_hScope; // rbx
  CUtlScratchMemoryPool *v24; // rdi
  CEntityKeyValues *v25; // r13
  const char *m_pszClassname; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  CEntityInstance *m_pInstance; // r14
  bool v31; // [rsp+1Fh] [rbp-F1h]
  int v32; // [rsp+20h] [rbp-F0h]
  _QWORD v33[2]; // [rsp+30h] [rbp-E0h] BYREF
  CEntitySpawner<CBaseEntity> syncSpawner; // [rsp+40h] [rbp-D0h] BYREF

  syncSpawner.m_modifyScope.m_pKeyValues = 0;
  syncSpawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&syncSpawner.m_modifyScope, 0);
  syncSpawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
  syncSpawner.m_scriptClassName.m_pString = 0;
  syncSpawner.m_pContext = 0;
  v4 = g_pEntitySystem;
  syncSpawner.m_pSpawnBatch = 0;
  syncSpawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v4->m_entitySpawnerData;
  syncSpawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v4);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&syncSpawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v6 = *&SpawnOriginOffset->m_flMatVal[0][2];
  syncSpawner.m_pEntityKeyValues = 0;
  *&syncSpawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v6;
  *&syncSpawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&syncSpawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  syncSpawner.m_pEntityClass = g_pEntityCBaseEntityClass;
  if ( g_pApplication != 0 )
    v7 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v7 = 0;
  syncSpawner.m_bValidateKeys = v7;
  syncSpawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*syncSpawner._vptr_CEntitySpawnerBase)(&syncSpawner);
  if ( !SetupEntityKeyValuesFromTable(pClassName, hSpawnTable, &syncSpawner) )
    goto LABEL_27;
  m_pEntityKeyValues = syncSpawner.m_pEntityKeyValues;
  v32 = -1;
  if ( syncSpawner.m_pEntityKeyValues == 0 )
    goto LABEL_27;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v31 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
    m_pEntityKeyValues = syncSpawner.m_pEntityKeyValues;
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
  {
    m_pszClassname = syncSpawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(syncSpawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&syncSpawner.m_modifyScope);
  m_nMode = syncSpawner.m_nMode;
  v11 = CUtlString::Get(&syncSpawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             syncSpawner.m_hSpawnGroupHandle,
             syncSpawner.m_pEntityClass,
             v11,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v13 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v32 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
    }
    v33[0] = m_pEntity;
    v33[1] = syncSpawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      syncSpawner.m_hSpawnGroupHandle,
      1,
      v33,
      &syncSpawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v13, syncSpawner.m_pEntityKeyValues);
    if ( syncSpawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = syncSpawner.m_pContext;
    for ( i = syncSpawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v20 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v20 - 1);
        (pfn)(v20, v13, i);
      }
    }
  }
  if ( v31 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  if ( (v32 + 2) > 1
    && (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v32 >> 9) & 0x3F]) != 0
    && (v22 = &v21[v32 & 0x1FF]) != 0
    && v32 == v22->m_EHandle.m_Index
    && (m_pInstance = v22->m_pInstance, v22->m_pInstance != 0) )
  {
    m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(m_pInstance, 0);
      m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
    }
  }
  else
  {
LABEL_27:
    m_hScope = 0;
  }
  v24 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  syncSpawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = syncSpawner.m_pPrevAllocator;
  if ( v24 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v24);
  }
  if ( syncSpawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&syncSpawner.m_modifyScope);
    v25 = syncSpawner.m_pEntityKeyValues;
    if ( --syncSpawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v25);
      operator delete(v25);
    }
  }
  if ( syncSpawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&syncSpawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&syncSpawner.m_modifyScope);
  return m_hScope;
}


// Script_SpawnEntityGroupFromTable  (line 2031, @0x0000000001f5d3c0, libserver.so)  // inlines: AddRef, ApplyContextKeys, AssignTo, CEntityGroupCallback, CEntityHandle, CHandle, CUtlAbstractDelegate, CUtlDelegate, CUtlDelegate<CEntityGroupCallback, CEntityGroupCallback>, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, CVariantBase, CallBackAndDeleteMe, Convert<CEntityGroupCallback, void (CEntityGroupCallback::*)(CBaseEntity*, const CEntityKeyValues*), void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CEntityInstance*, const CEntityKeyValues*, void> >, FastDelegate2, FastDelegate2<CEntityGroupCallback, CEntityGroupCallback>, FilterSpawnGroupEntity, Get, GetClassInfo, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, InvokeCallbacks, IsEmpty, IsEnabled, IsValid, LookupEntity, Purge, QueueContextCallbacks, Release, RemoveAll, Set, SetMementoFrom, SetToIdentity, Spawn, SpawnAndStartNewEntity, SpawnGroup, SpawnInternal, StartNewEntity, TempString, ToString, UtlMakeDelegate<CEntityGroupCallback, CEntityGroupCallback, CBaseEntity*, const CEntityKeyValues*, void>, bindmemfunc<CEntityGroupCallback, void (CEntityGroupCallback::*)(CBaseEntity*, const CEntityKeyValues*)>, operator CBaseEntity*, operator CEntityInstance*, operator!, operator(), operator=, ~CEntityGroupCallback, ~CEntitySpawnBatch, ~CEntitySpawner, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVProfScope, ~CVariantBase
// calls: CEntitySpawnerAsync<CBaseEntity>::CEntitySpawnerAsync, SetupEntityKeyValuesFromTable, operator new, CEntityKeyValues::HasValue, CEntityKeyValues::SetValue, CEntityKeyValuesModifyScope::Release, SetIdentityMatrix, CGameEntitySystem::ListenForEntityInSpawnGroupToFinish, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::CopyFrom, CEntitySpawnerBase<CBaseEntity>::~CEntitySpawnerBase (28 total)
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "false", "true", "Server Simulation" (7 total)
// globals: g_pScriptVM, CEntityGroupCallback::CallBackAndDeleteMe(CBaseEntity *,CEntityKeyValues const*), jpt_1F5DA1B, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, CEntityHandle::gm_pEntityList, jpt_1F5E1C3
bool __fastcall Script_SpawnEntityGroupFromTable(HSCRIPT groupSpawnTables, bool bAsync, HSCRIPT hCallback)
{
  HSCRIPT m_uint64; // rbx
  const char *v5; // rdi
  _QWORD *v6; // rbx
  CEntityKeyValues *m_pEntityKeyValues; // r12
  bool HasValue; // al
  const char *m_pszClassname; // rdx
  CEntityKeyValues *v10; // r14
  bool v11; // zf
  CEntityInstance *v12; // r12
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  CEntityInstance *m_pCompletionListener; // r8
  detail::GenericClass *m_pthis; // rax
  bool v16; // cc
  CEntityKeyValues *v17; // rbx
  CEntitySpawnerContext<CBaseEntity> *j; // rbx
  const char *v20; // rax
  double m_float; // xmm0_8
  const char *v22; // rcx
  int v23; // r15d
  HSCRIPT v24; // rbx
  const char *v25; // rdi
  CEntityKeyValues *v26; // rbx
  int m_enabled; // edx
  const char *v28; // rdx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v30; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v32; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v34; // si
  CEntitySpawnerContext<CBaseEntity> *v35; // rbx
  CEntityKeyValues *k; // r13
  detail::GenericClass *v37; // rdx
  void (*v38)(detail::GenericClass *); // rax
  _QWORD *v39; // rdi
  CEntityKeyValues *v40; // rbx
  CEntitySpawnerContext<CBaseEntity> *m; // rbx
  CEntityIdentity *v42; // rdx
  CEntityIdentity *v43; // rdx
  const char *v44; // rax
  const char *v45; // rcx
  double m_float64; // xmm0_8
  _QWORD *v47; // rbx
  __int64 v48; // rax
  SpawnGroupEntitySpawnCompletionDelegate_t bManualCompletion; // [rsp+0h] [rbp-2B0h]
  int i; // [rsp+4Ch] [rbp-264h]
  bool ia; // [rsp+4Ch] [rbp-264h]
  unsigned int nIter; // [rsp+50h] [rbp-260h]
  int nEntities; // [rsp+88h] [rbp-228h]
  SpawnGroupHandle_t hSpawnGroup; // [rsp+8Ch] [rbp-224h]
  SpawnGroupHandle_t hSpawnGroupa; // [rsp+8Ch] [rbp-224h]
  int v58; // [rsp+90h] [rbp-220h]
  CEntityKeyValues *v59; // [rsp+A0h] [rbp-210h] BYREF
  CEntityKeyValues *v60; // [rsp+A8h] [rbp-208h] BYREF
  ScriptVariant_t vKey; // [rsp+B0h] [rbp-200h] BYREF
  ScriptVariant_t vValue; // [rsp+C0h] [rbp-1F0h] BYREF
  ScriptVariant_t vClassname; // [rsp+D0h] [rbp-1E0h] BYREF
  ScriptVariant_t vSpawnTable; // [rsp+E0h] [rbp-1D0h] BYREF
  _QWORD v65[10]; // [rsp+F0h] [rbp-1C0h] BYREF
  int v66; // [rsp+140h] [rbp-170h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v67; // [rsp+148h] [rbp-168h] BYREF
  int v68; // [rsp+160h] [rbp-150h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v69; // [rsp+168h] [rbp-148h] BYREF
  detail::GenericClass *v70; // [rsp+180h] [rbp-130h]
  void (*pfn)(detail::GenericClass *); // [rsp+188h] [rbp-128h]
  __int64 delta; // [rsp+190h] [rbp-120h]
  CEntitySpawnBatch batch; // [rsp+1A0h] [rbp-110h] BYREF
  CEntitySpawner<CBaseEntity> syncSpawner; // [rsp+1D0h] [rbp-E0h] BYREF
  __int64 v75; // [rsp+270h] [rbp-40h]

  vKey.m_type = 0;
  vKey.m_flags = 0;
  vKey.m_uint64 = 0;
  vValue.m_type = 0;
  vValue.m_flags = 0;
  vValue.m_uint64 = 0;
  vClassname.m_type = 0;
  vClassname.m_flags = 0;
  vClassname.m_uint64 = 0;
  vSpawnTable.m_type = 0;
  vSpawnTable.m_flags = 0;
  vSpawnTable.m_uint64 = 0;
  nEntities = (*(*g_pScriptVM + 280LL))(g_pScriptVM, groupSpawnTables);
  if ( bAsync )
  {
    CEntitySpawnerAsync<CBaseEntity>::CEntitySpawnerAsync(
      &syncSpawner,
      2.0,
      EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_ADD_TO_ACTIVE_SPAWN_GROUP,
      0,
      0,
      ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT,
      -2,
      0);
    if ( nEntities > 0 )
    {
      i = 0;
      nIter = 0;
      do
      {
        nIter = (*(*g_pScriptVM + 296LL))(g_pScriptVM, groupSpawnTables, nIter, &vKey, &vValue);
        (*(*g_pScriptVM + 296LL))(g_pScriptVM, vValue.m_uint64, 0, &vClassname, &vSpawnTable);
        m_uint64 = vSpawnTable.m_uint64;
        if ( vClassname.m_type == 30 )
        {
          v5 = vClassname.m_uint64;
        }
        else
        {
          switch ( vClassname.m_type )
          {
            case 0:
              goto LABEL_37;
            case 1:
              m_float = vClassname.m_float;
              goto LABEL_41;
            case 3:
            case 0x27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *vClassname.m_pszString,
                *(vClassname.m_uint64 + 4),
                *(vClassname.m_uint64 + 8));
              break;
            case 4:
            case 0x1B:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *vClassname.m_pszString,
                *(vClassname.m_uint64 + 4),
                *(vClassname.m_uint64 + 8),
                *(vClassname.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d",
                vClassname.m_int);
              break;
            case 6:
              v22 = "true";
              if ( vClassname.m_char == 0 )
                v22 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v22);
              break;
            case 8:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%c",
                vClassname.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                vClassname.m_char,
                BYTE1(vClassname.m_int),
                BYTE2(vClassname.m_uint),
                HIBYTE(vClassname.m_float));
              break;
            case 0x19:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *vClassname.m_pszString,
                *(vClassname.m_uint64 + 4));
              break;
            case 0x1A:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%lld",
                vClassname.m_uint64);
              break;
            case 0x21:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%llu",
                vClassname.m_uint64);
              break;
            case 0x22:
              m_float = vClassname.m_float64;
LABEL_41:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
              break;
            case 0x25:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%u",
                vClassname.m_int);
              break;
            default:
              v20 = VariantFieldTypeName(vClassname.m_type);
              Warning("No conversion from %s to string at the moment!\n", v20);
LABEL_37:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          v5 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        SetupEntityKeyValuesFromTable(v5, m_uint64, &syncSpawner);
        v6 = operator new(8u);
        *v6 = (*(*g_pScriptVM + 128LL))(g_pScriptVM, hCallback);
        m_pEntityKeyValues = syncSpawner.m_pEntityKeyValues;
        v65[3] = CEntityGroupCallback::CallBackAndDeleteMe;
        v65[4] = 0;
        if ( syncSpawner.m_pEntityKeyValues != 0 )
        {
          if ( syncSpawner.m_pEntityClass != 0 )
          {
            HasValue = CEntityKeyValues::HasValue(syncSpawner.m_pEntityKeyValues, -971301790);
            m_pszClassname = syncSpawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
            if ( !HasValue && m_pszClassname != 0 )
            {
              CEntityKeyValues::SetValue(syncSpawner.m_pEntityKeyValues, -971301790, m_pszClassname);
              m_pszClassname = syncSpawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
            }
            (*(*engine + 464LL))(engine, syncSpawner.m_hSpawnGroupHandle, m_pszClassname);
            CEntityKeyValuesModifyScope::Release(&syncSpawner.m_modifyScope);
            v10 = syncSpawner.m_pEntityKeyValues;
            if ( v75 == 0 )
              goto LABEL_119;
            v59 = syncSpawner.m_pEntityKeyValues;
            v67.m_pMemory = &v59;
            v60 = 0;
            v66 = 1;
            v67.m_nAllocationCount = 1;
            v67.m_nGrowSize = 0x40000000;
            v68 = 0;
            v69.m_pMemory = &v60;
            v69.m_nAllocationCount = 1;
            v69.m_nGrowSize = 0x40000000;
            (*(*v75 + 16LL))(v75, syncSpawner.m_hSpawnGroupHandle, LODWORD(syncSpawner.m_pSpawnBatch) == 2, &v66, &v68);
            v10 = 0;
            v11 = v68 == 1;
            v68 = 0;
            if ( v11 )
              v10 = v60;
            if ( (v69.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<CEntityKeyValues const*,int>::Purge(&v69);
              if ( (v69.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<CEntityKeyValues const*,int>::Purge(&v69);
            }
            v66 = 0;
            if ( (v67.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<CEntityKeyValues const*,int>::Purge(&v67);
              if ( (v67.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<CEntityKeyValues const*,int>::Purge(&v67);
            }
            if ( v10 != 0 )
            {
LABEL_119:
              SetIdentityMatrix(&batch);
              v12 = (*(*(&syncSpawner.m_pSpawnBatch)[1] + 72LL))(
                      (&syncSpawner.m_pSpawnBatch)[1],
                      HIDWORD(syncSpawner.m_pSpawnBatch),
                      &batch,
                      1,
                      v10);
              if ( v12 != 0 )
              {
                v65[7] = CEntityGroupCallback::CallBackAndDeleteMe;
                v65[8] = 0;
                v65[6] = v6;
                CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
                  g_pGameEntitySystem,
                  syncSpawner.m_hSpawnGroupHandle,
                  v12,
                  v10,
                  0,
                  bManualCompletion);
                m_pContext = syncSpawner.m_pContext;
                for ( hSpawnGroup = syncSpawner.m_hSpawnGroupHandle; m_pContext != 0; m_pContext = m_pContext->m_pParent )
                {
                  while ( 1 )
                  {
                    m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
                    if ( m_pthis == 0 && m_pContext->m_callback.m_Closure.m_pFunction.__pfn == 0 )
                      break;
                    m_pCompletionListener = m_pContext->m_pCompletionListener;
                    pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
                    v70 = m_pthis;
                    delta = m_pContext->m_callback.m_Closure.m_pFunction.__delta;
                    CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
                      g_pGameEntitySystem,
                      hSpawnGroup,
                      v12,
                      v10,
                      m_pCompletionListener,
                      bManualCompletion);
                    m_pContext = m_pContext->m_pParent;
                    if ( m_pContext == 0 )
                      goto LABEL_24;
                  }
                }
              }
            }
          }
          else
          {
            CEntityKeyValues::HasValue(syncSpawner.m_pEntityKeyValues, -971301790);
          }
LABEL_24:
          m_pEntityKeyValues = syncSpawner.m_pEntityKeyValues;
        }
        v16 = --m_pEntityKeyValues->m_nRefCount <= 0;
        if ( v16 )
        {
          CEntityKeyValues::~CEntityKeyValues(m_pEntityKeyValues);
          operator delete(m_pEntityKeyValues);
        }
        syncSpawner.m_pEntityKeyValues = 0;
        v17 = operator new(0x70u);
        CEntityKeyValues::CEntityKeyValues(v17);
        syncSpawner.m_pEntityKeyValues = v17;
        ++v17->m_nRefCount;
        CEntityKeyValuesModifyScope::BeginModify(&syncSpawner.m_modifyScope, v17);
        for ( j = syncSpawner.m_pContext; j != 0; j = j->m_pParent )
          CEntityKeyValues::CopyFrom(syncSpawner.m_pEntityKeyValues, &j->m_entityKeyValues, 0);
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKey);
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vClassname);
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vSpawnTable);
        ++i;
      }
      while ( i != nEntities );
    }
    syncSpawner._vptr_CEntitySpawnerBase = off_3FCEC30;
    CEntitySpawnerBase<CBaseEntity>::~CEntitySpawnerBase(&syncSpawner);
  }
  else
  {
    CEntitySpawner<CBaseEntity>::CEntitySpawner(&syncSpawner, 0, &batch);
    if ( nEntities > 0 )
    {
      v23 = 0;
      hSpawnGroupa = 0;
      do
      {
        hSpawnGroupa = (*(*g_pScriptVM + 296LL))(g_pScriptVM, groupSpawnTables, hSpawnGroupa, &vKey, &vValue);
        (*(*g_pScriptVM + 296LL))(g_pScriptVM, vValue.m_uint64, 0, &vClassname, &vSpawnTable);
        v24 = vSpawnTable.m_uint64;
        if ( vClassname.m_type == 30 )
        {
          v25 = vClassname.m_uint64;
        }
        else
        {
          switch ( vClassname.m_type )
          {
            case 0:
              goto LABEL_99;
            case 1:
              m_float64 = vClassname.m_float;
              goto LABEL_105;
            case 3:
            case 0x27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *vClassname.m_pszString,
                *(vClassname.m_uint64 + 4),
                *(vClassname.m_uint64 + 8));
              break;
            case 4:
            case 0x1B:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *vClassname.m_pszString,
                *(vClassname.m_uint64 + 4),
                *(vClassname.m_uint64 + 8),
                *(vClassname.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d",
                vClassname.m_int);
              break;
            case 6:
              v45 = "true";
              if ( vClassname.m_char == 0 )
                v45 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v45);
              break;
            case 8:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%c",
                vClassname.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                vClassname.m_char,
                BYTE1(vClassname.m_int),
                BYTE2(vClassname.m_uint),
                HIBYTE(vClassname.m_float));
              break;
            case 0x19:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *vClassname.m_pszString,
                *(vClassname.m_uint64 + 4));
              break;
            case 0x1A:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%lld",
                vClassname.m_uint64);
              break;
            case 0x21:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%llu",
                vClassname.m_uint64);
              break;
            case 0x22:
              m_float64 = vClassname.m_float64;
LABEL_105:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
              break;
            case 0x25:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%u",
                vClassname.m_int);
              break;
            default:
              v44 = VariantFieldTypeName(vClassname.m_type);
              Warning("No conversion from %s to string at the moment!\n", v44);
LABEL_99:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          v25 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        SetupEntityKeyValuesFromTable(v25, v24, &syncSpawner);
        v26 = syncSpawner.m_pEntityKeyValues;
        v58 = -1;
        if ( syncSpawner.m_pEntityKeyValues != 0 )
        {
          m_enabled = g_VProfCurrentProfile.m_enabled;
          ia = m_enabled != 0;
          if ( m_enabled != 0 )
          {
            CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
            v26 = syncSpawner.m_pEntityKeyValues;
          }
          if ( !CEntityKeyValues::HasValue(v26, -971301790) )
          {
            v28 = syncSpawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
            if ( v28 != 0 )
              CEntityKeyValues::SetValue(syncSpawner.m_pEntityKeyValues, -971301790, v28);
          }
          CEntityKeyValuesModifyScope::Release(&syncSpawner.m_modifyScope);
          m_nMode = syncSpawner.m_nMode;
          v30 = CUtlString::Get(&syncSpawner.m_scriptClassName);
          Entity = CEntitySystem::CreateEntity(
                     g_pEntitySystem,
                     syncSpawner.m_hSpawnGroupHandle,
                     syncSpawner.m_pEntityClass,
                     v30,
                     m_nMode,
                     -1,
                     -1,
                     0,
                     0);
          v32 = Entity;
          if ( Entity != 0 )
          {
            m_pEntity = Entity->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v34 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v34 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              v58 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v34 & 0x7FFF;
            }
            v65[0] = m_pEntity;
            v65[1] = syncSpawner.m_pEntityKeyValues;
            (*(*g_pGameResourceService + 280LL))(
              g_pGameResourceService,
              syncSpawner.m_hSpawnGroupHandle,
              1,
              v65,
              &syncSpawner.m_mSpawnGroupToWorld);
            CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v32, syncSpawner.m_pEntityKeyValues);
            if ( syncSpawner.m_pSpawnBatch == 0 )
              CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
            v35 = syncSpawner.m_pContext;
            for ( k = syncSpawner.m_pEntityKeyValues; v35 != 0; v35 = v35->m_pParent )
            {
              v37 = v35->m_callback.m_Closure.m_pthis;
              v38 = v35->m_callback.m_Closure.m_pFunction.__pfn;
              if ( v37 != 0 || v38 != 0 )
              {
                v39 = (v37 + v35->m_callback.m_Closure.m_pFunction.__delta);
                if ( (v38 & 1) != 0 )
                  v38 = *(v38 + *v39 - 1);
                (v38)(v39, v32, k);
              }
            }
          }
          if ( ia )
            CVProfile::ExitScope(&g_VProfCurrentProfile);
          v26 = syncSpawner.m_pEntityKeyValues;
        }
        v16 = --v26->m_nRefCount <= 0;
        if ( v16 )
        {
          CEntityKeyValues::~CEntityKeyValues(v26);
          operator delete(v26);
        }
        syncSpawner.m_pEntityKeyValues = 0;
        v40 = operator new(0x70u);
        CEntityKeyValues::CEntityKeyValues(v40);
        syncSpawner.m_pEntityKeyValues = v40;
        ++v40->m_nRefCount;
        CEntityKeyValuesModifyScope::BeginModify(&syncSpawner.m_modifyScope, v40);
        for ( m = syncSpawner.m_pContext; m != 0; m = m->m_pParent )
          CEntityKeyValues::CopyFrom(syncSpawner.m_pEntityKeyValues, &m->m_entityKeyValues, 0);
        if ( (v58 + 2) > 1 )
        {
          v42 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v58 >> 9) & 0x3F];
          if ( v42 != 0 )
          {
            v43 = &v42[v58 & 0x1FF];
            if ( v43 != 0 && v58 == v43->m_EHandle.m_Index && v43->m_pInstance != 0 )
            {
              v47 = operator new(8u);
              v48 = (*(*g_pScriptVM + 128LL))(g_pScriptVM, hCallback);
              *v47 = v48;
              (*(*g_pScriptVM + 152LL))(g_pScriptVM, v48);
              operator delete(v47);
            }
          }
        }
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKey);
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vClassname);
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vSpawnTable);
        ++v23;
      }
      while ( v23 != nEntities );
    }
    syncSpawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
    CEntitySpawnerBase<CBaseEntity>::~CEntitySpawnerBase(&syncSpawner);
    CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&vSpawnTable);
  CVariantBase<CVariantDefaultAllocator>::Free(&vClassname);
  CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
  return 1;
}


// Script_SpawnEntityListFromTableSynchronous  (line 2092, @0x0000000001f5bfd0, libserver.so)  // inlines: AddRef, ApplyContextKeys, CEntityHandle, CHandle, CVProfScope, CVariantBase, EntityToHScript, Get, GetClassInfo, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, GetSerialNumber, IndexToIdentity, InvokeCallbacks, IsEmpty, IsEnabled, IsValid, LookupEntity, Release, Set, Spawn, SpawnAndStartNewEntity, SpawnGroup, StartNewEntity, ToHScript, operator CBaseEntity*, operator CEntityInstance*, operator!, operator(), operator=, ~CEntitySpawnBatch, ~CEntitySpawner, ~CVProfScope, ~CVariantBase
// calls: CEntitySpawner<CBaseEntity>::CEntitySpawner, SetupEntityKeyValuesFromTable, CEntityKeyValues::HasValue, CEntityKeyValues::SetValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CVProfile::ExitScope, operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify (21 total)
// strings: "Server Simulation", "Spawn"
// globals: g_pScriptVM, CEntityHandle::gm_pEntityList
HSCRIPT __fastcall Script_SpawnEntityListFromTableSynchronous(HSCRIPT hSpawnTableList)
{
  int v1; // ebx
  int v2; // r13d
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int m_enabled; // esi
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v7; // rcx
  CEntityInstance *Entity; // rax
  CEntityInstance *v9; // r12
  uint64 m_pEntity; // rax
  __int16 v11; // si
  int v12; // edx
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  CEntityKeyValues *i; // r14
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v17; // rdi
  CEntityKeyValues *v19; // rbx
  CEntitySpawnerContext<CBaseEntity> *j; // rbx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  IScriptVM *v23; // rdi
  void (__fastcall *v24)(IScriptVM *, uint64, CVariantBase<CVariantDefaultAllocator> *); // rbx
  uint64 m_hScope; // rax
  HSCRIPT m_uint64; // rbx
  CEntityInstance *m_pInstance; // r12
  int nEntities; // [rsp+3Ch] [rbp-164h]
  bool v31; // [rsp+63h] [rbp-13Dh]
  unsigned int nIter; // [rsp+64h] [rbp-13Ch]
  CEntitySpawnBatch batch; // [rsp+7Fh] [rbp-121h] BYREF
  int v34; // [rsp+80h] [rbp-120h]
  ScriptVariant_t vSemanticName; // [rsp+90h] [rbp-110h] BYREF
  ScriptVariant_t vSpawnTable; // [rsp+A0h] [rbp-100h] BYREF
  ScriptVariant_t spawnedEntityArray; // [rsp+B0h] [rbp-F0h] BYREF
  CVariantBase<CVariantDefaultAllocator> v38; // [rsp+C0h] [rbp-E0h] BYREF
  CEntitySpawner<CBaseEntity> spawner; // [rsp+D0h] [rbp-D0h] BYREF

  vSemanticName.m_type = 0;
  vSemanticName.m_flags = 0;
  vSemanticName.m_uint64 = 0;
  vSpawnTable.m_type = 0;
  vSpawnTable.m_flags = 0;
  vSpawnTable.m_uint64 = 0;
  v1 = (*(*g_pScriptVM + 280LL))(g_pScriptVM, hSpawnTableList);
  nEntities = v1;
  if ( v1 != 0 )
  {
    spawnedEntityArray.m_uint64 = 0;
    spawnedEntityArray.m_type = 0;
    spawnedEntityArray.m_flags = 0;
    (*(*g_pScriptVM + 360LL))(g_pScriptVM, &spawnedEntityArray);
    CEntitySpawner<CBaseEntity>::CEntitySpawner(&spawner, 0, &batch);
    if ( v1 > 0 )
    {
      v2 = 0;
      nIter = 0;
      do
      {
        nIter = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hSpawnTableList, nIter, &vSemanticName, &vSpawnTable);
        SetupEntityKeyValuesFromTable(0, vSpawnTable.m_hScript, &spawner);
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        v34 = -1;
        if ( spawner.m_pEntityKeyValues != 0 )
        {
          m_enabled = g_VProfCurrentProfile.m_enabled;
          v31 = m_enabled != 0;
          if ( m_enabled != 0 )
          {
            CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
            m_pEntityKeyValues = spawner.m_pEntityKeyValues;
          }
          if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
          {
            m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
            if ( m_pszClassname != 0 )
              CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
          }
          CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
          m_nMode = spawner.m_nMode;
          v7 = CUtlString::Get(&spawner.m_scriptClassName);
          Entity = CEntitySystem::CreateEntity(
                     g_pEntitySystem,
                     spawner.m_hSpawnGroupHandle,
                     spawner.m_pEntityClass,
                     v7,
                     m_nMode,
                     -1,
                     -1,
                     0,
                     0);
          v9 = Entity;
          if ( Entity != 0 )
          {
            m_pEntity = Entity->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v11 = 0x7FFF;
              v12 = (*(m_pEntity + 16) >> 15) - (*(m_pEntity + 48) & 1);
              if ( *(m_pEntity + 16) != -1 )
                v11 = *(m_pEntity + 16) & 0x7FFF;
              LOWORD(v34) = v11 | v34 & 0x8000;
              v34 = (v12 << 15) | v34 & 0x7FFF;
            }
            v38.m_uint64 = m_pEntity;
            *&v38.m_type = spawner.m_pEntityKeyValues;
            (*(*g_pGameResourceService + 280LL))(
              g_pGameResourceService,
              spawner.m_hSpawnGroupHandle,
              1,
              &v38,
              &spawner.m_mSpawnGroupToWorld);
            CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v9, spawner.m_pEntityKeyValues);
            if ( spawner.m_pSpawnBatch == 0 )
              CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
            m_pContext = spawner.m_pContext;
            for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
            {
              m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
              pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
              if ( m_pthis != 0 || pfn != 0 )
              {
                v17 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
                if ( (pfn & 1) != 0 )
                  pfn = *(pfn + *v17 - 1);
                (pfn)(v17, v9, i);
              }
            }
          }
          if ( v31 )
            CVProfile::ExitScope(&g_VProfCurrentProfile);
          m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        }
        if ( --m_pEntityKeyValues->m_nRefCount <= 0 )
        {
          CEntityKeyValues::~CEntityKeyValues(m_pEntityKeyValues);
          operator delete(m_pEntityKeyValues);
        }
        spawner.m_pEntityKeyValues = 0;
        v19 = operator new(0x70u);
        CEntityKeyValues::CEntityKeyValues(v19);
        ++v19->m_nRefCount;
        spawner.m_pEntityKeyValues = v19;
        CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, v19);
        for ( j = spawner.m_pContext; j != 0; j = j->m_pParent )
          CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &j->m_entityKeyValues, 0);
        if ( (v34 + 2) > 1
          && (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v34 >> 9) & 0x3F]) != 0
          && (v22 = &v21[v34 & 0x1FF]) != 0
          && v34 == v22->m_EHandle.m_Index )
        {
          v23 = g_pScriptVM;
          m_pInstance = v22->m_pInstance;
          v24 = *(*g_pScriptVM + 384LL);
          if ( v22->m_pInstance != 0 )
          {
            m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            if ( m_hScope == 0 )
            {
              CEntityInstance::CreatePublicScriptScope(v22->m_pInstance, 0);
              v23 = g_pScriptVM;
              m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            }
          }
          else
          {
            m_hScope = 0;
          }
        }
        else
        {
          v23 = g_pScriptVM;
          v24 = *(*g_pScriptVM + 384LL);
          m_hScope = 0;
        }
        v38.m_type = 31;
        v38.m_flags = 0;
        v38.m_uint64 = m_hScope;
        v24(v23, spawnedEntityArray.m_uint64, &v38);
        CVariantBase<CVariantDefaultAllocator>::Free(&v38);
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vSpawnTable);
        ++v2;
      }
      while ( v2 != nEntities );
    }
    spawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
    m_uint64 = spawnedEntityArray.m_uint64;
    CEntitySpawnerBase<CBaseEntity>::~CEntitySpawnerBase(&spawner);
    CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    CVariantBase<CVariantDefaultAllocator>::Free(&spawnedEntityArray);
    CVariantBase<CVariantDefaultAllocator>::Free(&vSpawnTable);
  }
  else
  {
    m_uint64 = 0;
    CVariantBase<CVariantDefaultAllocator>::Free(&vSpawnTable);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&vSemanticName);
  return m_uint64;
}


// Script_SpawnEntityListFromTableAsynchronous  (line 2127, @0x0000000001f5ccb0, libserver.so)  // inlines: AddRef, AddSpawnGroupCompletionCallback, ApplyContextKeys, CEntityListSpawnCallback, CUtlAbstractDelegate, CUtlDelegate, CUtlDelegate<CEntityListSpawnCallback, CEntityListSpawnCallback>, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, Convert<CEntityListSpawnCallback, void (CEntityListSpawnCallback::*)(unsigned int, const CUtlVector<CEntityHandle>&), void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CEntityInstance*, const CEntityKeyValues*, void> >, CopyFrom<FastDelegate2<unsigned int, const CUtlVector<CEntityHandle>&, void> >, FastDelegate2, FastDelegate2<CEntityListSpawnCallback, CEntityListSpawnCallback>, FilterSpawnGroupEntity, GetClassInfo, IsEmpty, Purge, QueueContextCallbacks, Release, RemoveAll, SetMementoFrom, SetToIdentity, Spawn, SpawnAndStartNewEntity, SpawnInternal, StartNewEntity, UtlMakeDelegate<CEntityListSpawnCallback, CEntityListSpawnCallback, unsigned int, const CUtlVector<CEntityHandle>&, void>, bindmemfunc<CEntityListSpawnCallback, void (CEntityListSpawnCallback::*)(unsigned int, const CUtlVector<CEntityHandle>&)>, operator!, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: IScriptVM::Call<HSCRIPT__*>, CVariantBase<CVariantDefaultAllocator>::Free, CEntitySpawnerAsync<CBaseEntity>::CEntitySpawnerAsync, operator new, CGameEntitySystem::ListenForSpawnGroupToFinish, SetupEntityKeyValuesFromTable, CEntityKeyValues::HasValue, CEntityKeyValues::SetValue, CEntityKeyValuesModifyScope::Release, SetIdentityMatrix, CGameEntitySystem::ListenForEntityInSpawnGroupToFinish, CEntityKeyValues::CEntityKeyValues (20 total)
// globals: g_pScriptVM, CEntityListSpawnCallback::CallBackAndDeleteMe(uint,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> const&)
int __fastcall Script_SpawnEntityListFromTableAsynchronous(HSCRIPT hSpawnTableList, HSCRIPT hCallback)
{
  SpawnGroupHandle_t m_hSpawnGroupHandle; // ebx
  _QWORD *v5; // r12
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  bool HasValue; // al
  const char *m_pszClassname; // rdx
  CEntityKeyValues *v9; // r12
  bool v10; // zf
  CEntityInstance *v11; // r13
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  SpawnGroupHandle_t j; // r14d
  CEntityInstance *m_pCompletionListener; // r8
  void (*pfn)(detail::GenericClass *); // rdx
  CEntityKeyValues *v17; // rbx
  CEntitySpawnerContext<CBaseEntity> *k; // rbx
  _BYTE bManualCompletion[24]; // [rsp+0h] [rbp-240h]
  int nEntities; // [rsp+3Ch] [rbp-204h]
  int i; // [rsp+48h] [rbp-1F8h]
  unsigned int nIter; // [rsp+4Ch] [rbp-1F4h]
  CEntityKeyValues *v24; // [rsp+60h] [rbp-1E0h] BYREF
  CEntityKeyValues *v25; // [rsp+68h] [rbp-1D8h] BYREF
  ScriptVariant_t vSemanticName; // [rsp+70h] [rbp-1D0h] BYREF
  ScriptVariant_t vSpawnTable; // [rsp+80h] [rbp-1C0h] BYREF
  void (__fastcall *v28)(CEntityListSpawnCallback *const, SpawnGroupHandle_t, const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const); // [rsp+98h] [rbp-1A8h]
  __int64 v29; // [rsp+A0h] [rbp-1A0h]
  _QWORD *v30; // [rsp+B0h] [rbp-190h]
  void (__fastcall *v31)(CEntityListSpawnCallback *const, SpawnGroupHandle_t, const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const); // [rsp+B8h] [rbp-188h]
  __int64 v32; // [rsp+C0h] [rbp-180h]
  int v33; // [rsp+D0h] [rbp-170h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v34; // [rsp+D8h] [rbp-168h] BYREF
  int v35; // [rsp+F0h] [rbp-150h] BYREF
  CEntityKeyValues **v36; // [rsp+F8h] [rbp-148h] BYREF
  int v37; // [rsp+100h] [rbp-140h]
  int v38; // [rsp+104h] [rbp-13Ch]
  detail::GenericClass *m_pthis; // [rsp+110h] [rbp-130h]
  void (*v40)(detail::GenericClass *); // [rsp+118h] [rbp-128h]
  __int64 delta; // [rsp+120h] [rbp-120h]
  matrix3x4_t matrix; // [rsp+130h] [rbp-110h] BYREF
  CEntitySpawnerAsync<CBaseEntity>_0 asyncSpawner; // [rsp+160h] [rbp-E0h] BYREF

  vSemanticName.m_type = 0;
  vSemanticName.m_flags = 0;
  vSpawnTable.m_type = 0;
  vSemanticName.m_uint64 = 0;
  vSpawnTable.m_flags = 0;
  vSpawnTable.m_uint64 = 0;
  nEntities = (*(*g_pScriptVM + 280LL))(g_pScriptVM, hSpawnTableList);
  if ( nEntities != 0 )
  {
    CEntitySpawnerAsync<CBaseEntity>::CEntitySpawnerAsync(
      &asyncSpawner,
      2.0,
      EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_CREATE_NEW_SPAWN_GROUP,
      0,
      0,
      ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT,
      -2,
      0);
    if ( hCallback != 0 )
    {
      v5 = operator new(8u);
      *v5 = (*(*g_pScriptVM + 128LL))(g_pScriptVM, hCallback);
      v28 = CEntityListSpawnCallback::CallBackAndDeleteMe;
      v31 = CEntityListSpawnCallback::CallBackAndDeleteMe;
      v29 = 0;
      v32 = 0;
      v30 = v5;
      CGameEntitySystem::ListenForSpawnGroupToFinish(
        g_pGameEntitySystem,
        asyncSpawner.m_hSpawnGroupHandle,
        0,
        *bManualCompletion);
    }
    if ( nEntities > 0 )
    {
      i = 0;
      nIter = 0;
      *&bManualCompletion[16] = &v36;
      do
      {
        nIter = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hSpawnTableList, nIter, &vSemanticName, &vSpawnTable);
        SetupEntityKeyValuesFromTable(0, vSpawnTable.m_hScript, &asyncSpawner);
        m_pEntityKeyValues = asyncSpawner.m_pEntityKeyValues;
        if ( asyncSpawner.m_pEntityKeyValues != 0 )
        {
          if ( asyncSpawner.m_pEntityClass != 0 )
          {
            HasValue = CEntityKeyValues::HasValue(asyncSpawner.m_pEntityKeyValues, -971301790);
            m_pszClassname = asyncSpawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
            if ( !HasValue && m_pszClassname != 0 )
            {
              CEntityKeyValues::SetValue(asyncSpawner.m_pEntityKeyValues, -971301790, m_pszClassname);
              m_pszClassname = asyncSpawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
            }
            (*(*engine + 464LL))(engine, asyncSpawner.m_hSpawnGroupHandle, m_pszClassname);
            CEntityKeyValuesModifyScope::Release(&asyncSpawner.m_modifyScope);
            v9 = asyncSpawner.m_pEntityKeyValues;
            if ( asyncSpawner.m_pFilter == 0 )
              goto LABEL_43;
            v24 = asyncSpawner.m_pEntityKeyValues;
            v34.m_pMemory = &v24;
            v25 = 0;
            v33 = 1;
            v34.m_nAllocationCount = 1;
            v34.m_nGrowSize = 0x40000000;
            v35 = 0;
            v36 = &v25;
            v37 = 1;
            v38 = 0x40000000;
            (*(asyncSpawner.m_pFilter->_vptr_ISpawnGroupEntityFilter + 2))(
              asyncSpawner.m_pFilter,
              asyncSpawner.m_hSpawnGroupHandle,
              asyncSpawner.m_behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY,
              &v33,
              &v35);
            v9 = 0;
            v10 = v35 == 1;
            v35 = 0;
            if ( v10 )
              v9 = v25;
            if ( (v38 & 0xC0000000) == 0 )
            {
              CUtlMemory<CEntityKeyValues const*,int>::Purge(*&bManualCompletion[16]);
              if ( (v38 & 0xC0000000) == 0 )
                CUtlMemory<CEntityKeyValues const*,int>::Purge(*&bManualCompletion[16]);
            }
            v33 = 0;
            if ( (v34.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<CEntityKeyValues const*,int>::Purge(&v34);
              if ( (v34.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<CEntityKeyValues const*,int>::Purge(&v34);
            }
            if ( v9 != 0 )
            {
LABEL_43:
              SetIdentityMatrix(&matrix);
              v11 = (*(asyncSpawner.m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 9))(
                      asyncSpawner.m_pLoadingSpawnGroup,
                      asyncSpawner.m_hOwnerSpawnGroup,
                      &matrix,
                      1,
                      v9);
              if ( v11 != 0 )
              {
                m_pContext = asyncSpawner.m_pContext;
                for ( j = asyncSpawner.m_hSpawnGroupHandle; m_pContext != 0; m_pContext = m_pContext->m_pParent )
                {
                  while ( 1 )
                  {
                    pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
                    if ( m_pContext->m_callback.m_Closure.m_pthis == 0 && pfn == 0 )
                      break;
                    m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
                    m_pCompletionListener = m_pContext->m_pCompletionListener;
                    v40 = pfn;
                    delta = m_pContext->m_callback.m_Closure.m_pFunction.__delta;
                    CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
                      g_pGameEntitySystem,
                      j,
                      v11,
                      v9,
                      m_pCompletionListener,
                      *bManualCompletion);
                    m_pContext = m_pContext->m_pParent;
                    if ( m_pContext == 0 )
                      goto LABEL_28;
                  }
                }
              }
            }
          }
          else
          {
            CEntityKeyValues::HasValue(asyncSpawner.m_pEntityKeyValues, -971301790);
          }
LABEL_28:
          m_pEntityKeyValues = asyncSpawner.m_pEntityKeyValues;
        }
        if ( --m_pEntityKeyValues->m_nRefCount <= 0 )
        {
          CEntityKeyValues::~CEntityKeyValues(m_pEntityKeyValues);
          operator delete(m_pEntityKeyValues);
        }
        asyncSpawner.m_pEntityKeyValues = 0;
        v17 = operator new(0x70u);
        CEntityKeyValues::CEntityKeyValues(v17);
        ++v17->m_nRefCount;
        asyncSpawner.m_pEntityKeyValues = v17;
        CEntityKeyValuesModifyScope::BeginModify(&asyncSpawner.m_modifyScope, v17);
        for ( k = asyncSpawner.m_pContext; k != 0; k = k->m_pParent )
          CEntityKeyValues::CopyFrom(asyncSpawner.m_pEntityKeyValues, &k->m_entityKeyValues, 0);
        (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vSpawnTable);
        ++i;
      }
      while ( i != nEntities );
    }
    m_hSpawnGroupHandle = asyncSpawner.m_hSpawnGroupHandle;
    asyncSpawner._vptr_CEntitySpawnerBase = off_3FCEC30;
    CEntitySpawnerBase<CBaseEntity>::~CEntitySpawnerBase(&asyncSpawner);
  }
  else
  {
    if ( hCallback != 0 )
      IScriptVM::Call<HSCRIPT__ *>(g_pScriptVM, hCallback, 0, 1, 0, 0);
    m_hSpawnGroupHandle = 0;
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&vSpawnTable);
  CVariantBase<CVariantDefaultAllocator>::Free(&vSemanticName);
  return m_hSpawnGroupHandle;
}


// Script_PrecacheEntityFromTable  (line 2170, @0x0000000001f5bb90, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CUtlString, DetachKeyValues, EnableKeyValidation, GetEntityClass, Init, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString
// calls: CEntityScriptFramework::GetPrecacheContext, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, SetupEntityKeyValuesFromTable, CEntityKeyValuesModifyScope::Release, CUtlString::FreeMemoryBlock, CEntitySpawnerBase<CBaseEntity>::~CEntitySpawnerBase, CEntityKeyValues::~CEntityKeyValues, operator delete, CUtlScratchMemoryPool::FreeAll, _Unwind_Resume
// callers: Script_PrecacheEntityListFromTable
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall Script_PrecacheEntityFromTable(const char *pClassName, HSCRIPT hSpawnTable, HSCRIPT hPrecacheContext)
{
  const CEntityPrecacheContext *PrecacheContext; // r13
  CEntitySystem *v6; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v8; // rdx
  char v9; // al
  CEntityKeyValues *m_pEntityKeyValues; // rax
  CEntityKeyValues *v11; // r13
  bool v12; // cc
  CUtlScratchMemoryPool *v13; // rdi
  CEntityKeyValues *v14; // r12
  int m_nEntitySpawnerDataUseCount; // ecx
  CEntityKeyValues *pEntityKeys; // [rsp+8h] [rbp-D8h] BYREF
  CEntitySpawner<CBaseEntity> spawner; // [rsp+10h] [rbp-D0h] BYREF

  PrecacheContext = CEntityScriptFramework::GetPrecacheContext(&g_EntityScriptFramework, hPrecacheContext);
  if ( PrecacheContext != 0 )
  {
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_modifyScope.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
    spawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
    spawner.m_scriptClassName.m_pString = 0;
    spawner.m_pContext = 0;
    v6 = g_pEntitySystem;
    spawner.m_pSpawnBatch = 0;
    spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v6->m_entitySpawnerData;
    spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v6);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
    v8 = *&SpawnOriginOffset->m_flMatVal[0][2];
    spawner.m_pEntityKeyValues = 0;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v8;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
    spawner.m_pEntityClass = g_pEntityCBaseEntityClass;
    if ( g_pApplication != 0 )
      v9 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v9 = 0;
    spawner.m_bValidateKeys = v9;
    spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
    (*spawner._vptr_CEntitySpawnerBase)(&spawner);
    spawner.m_bValidateKeys = 0;
    if ( SetupEntityKeyValuesFromTable(pClassName, hSpawnTable, &spawner) )
    {
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      if ( spawner.m_pEntityKeyValues != 0 )
      {
        CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        spawner.m_pEntityKeyValues = 0;
      }
      pEntityKeys = m_pEntityKeyValues;
      (*(g_pEntitySystem->_vptr_IEntityResourceManifestBuilder + 1))(
        g_pEntitySystem,
        0,
        1,
        &pEntityKeys,
        PrecacheContext->m_pConfig,
        PrecacheContext->m_pManifest);
      v11 = pEntityKeys;
      v12 = --pEntityKeys->m_nRefCount <= 0;
      if ( v12 )
      {
        CEntityKeyValues::~CEntityKeyValues(v11);
        operator delete(v11);
      }
      v13 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
      spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
      CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
      if ( v13 == &g_pEntitySystem->m_entitySpawnerData )
      {
        m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
        g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
        if ( m_nEntitySpawnerDataUseCount == 1 )
          CUtlScratchMemoryPool::FreeAll(v13);
      }
      if ( spawner.m_pEntityKeyValues != 0 )
      {
        CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
        v14 = spawner.m_pEntityKeyValues;
        v12 = --spawner.m_pEntityKeyValues->m_nRefCount <= 0;
        if ( v12 )
        {
          CEntityKeyValues::~CEntityKeyValues(v14);
          operator delete(v14);
        }
      }
      if ( spawner.m_scriptClassName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    }
    else
    {
      spawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
      CEntitySpawnerBase<CBaseEntity>::~CEntitySpawnerBase(&spawner);
    }
  }
}


// Script_PrecacheEntityListFromTable  (line 2196, @0x0000000001f5bec0, libserver.so)  // inlines: CVariantBase, ~CVariantBase
// calls: Script_PrecacheEntityFromTable, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: g_pScriptVM
void __fastcall Script_PrecacheEntityListFromTable(HSCRIPT hSpawnTableList, HSCRIPT hPrecacheContext)
{
  int v2; // r15d
  int v3; // ebx
  unsigned int v4; // r14d
  ScriptVariant_t vKey; // [rsp+10h] [rbp-50h] BYREF
  ScriptVariant_t vValue; // [rsp+20h] [rbp-40h] BYREF

  vKey.m_type = 0;
  vKey.m_flags = 0;
  vValue.m_type = 0;
  vKey.m_uint64 = 0;
  vValue.m_flags = 0;
  vValue.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 376LL))(g_pScriptVM, hSpawnTableList);
  if ( v2 > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v4 = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hSpawnTableList, v4, &vKey, &vValue);
      Script_PrecacheEntityFromTable(0, vValue.m_hScript, hPrecacheContext);
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKey);
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
      ++v3;
    }
    while ( v3 != v2 );
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
}


// CScriptSpawnGroupEntityFilterProxy::~CScriptSpawnGroupEntityFilterProxy  (line 2215, @0x0000000001f72520, libserver.so)  // inlines: ~ISpawnGroupEntityFilter
void __fastcall CScriptSpawnGroupEntityFilterProxy::~CScriptSpawnGroupEntityFilterProxy(
        CScriptSpawnGroupEntityFilterProxy *const this)
{
  this->_vptr_ISpawnGroupEntityFilter = off_3FCAF10;  // vptr: ISpawnGroupEntityFilter
}


// CScriptSpawnGroupEntityFilterProxy::~CScriptSpawnGroupEntityFilterProxy  (line 2215, @0x0000000001f73d00, libserver.so)  // inlines: ~CScriptSpawnGroupEntityFilterProxy, ~ISpawnGroupEntityFilter
// calls: operator delete
void __fastcall CScriptSpawnGroupEntityFilterProxy::~CScriptSpawnGroupEntityFilterProxy(
        CScriptSpawnGroupEntityFilterProxy *const this)
{
  this->_vptr_ISpawnGroupEntityFilter = off_3FCAF10;  // vptr: ISpawnGroupEntityFilter
  operator delete(this);
}


// CScriptSpawnGroupEntityFilterProxy::FilterSpawnGroupEntities  (line 2218, @0x0000000001f723e0, libserver.so)
void __fastcall CScriptSpawnGroupEntityFilterProxy::FilterSpawnGroupEntities(
        CScriptSpawnGroupEntityFilterProxy *const this,
        SpawnGroupHandle_t h,
        bool bIsPrecaching,
        const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pInKeyValues,
        CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *const outKeyValues)
{
  ;
}


// Script_RegisterSpawnGroupFilterProxy  (line 2273, @0x0000000001f2b8c0, libserver.so)
// calls: operator new, CGameEntitySystem::RegisterSpawnGroupEntityFilter
void __fastcall Script_RegisterSpawnGroupFilterProxy(const char *pFilterName)
{
  ISpawnGroupEntityFilter *v2; // rax

  v2 = operator new(8u);  // new CScriptSpawnGroupEntityFilterProxy (size matches)
  v2->_vptr_ISpawnGroupEntityFilter = off_3FCEC70;  // vptr: CScriptSpawnGroupEntityFilterProxy
  CGameEntitySystem::RegisterSpawnGroupEntityFilter(
    g_pGameEntitySystem,
    pFilterName,
    v2,
    SpawnGroupEntityFilterType_t::SPAWN_GROUP_ENTITY_FILTER_FALLBACK);
}


// Script_RemoveSpawnGroupFilterProxy  (line 2280, @0x0000000001f2b880, libserver.so)
// calls: CGameEntitySystem::RemoveSpawnGroupEntityFilter
void __fastcall Script_RemoveSpawnGroupFilterProxy(const char *pFilterName)
{
  ISpawnGroupEntityFilter *v1; // rax

  v1 = CGameEntitySystem::RemoveSpawnGroupEntityFilter(g_pGameEntitySystem, pFilterName);
  if ( v1 != 0 )
    (*(v1->_vptr_ISpawnGroupEntityFilter + 1))(v1);
}


// Script_UnloadSpawnGroup  (line 2288, @0x0000000001f44490, libserver.so)
// calls: CSpawnGroupMgrGameSystem::FindSpawnGroupByName
// globals: g_pSpawnGroupMgr
void __fastcall Script_UnloadSpawnGroup(const char *pName)
{
  SpawnGroupHandle_t SpawnGroupByName; // eax

  SpawnGroupByName = CSpawnGroupMgrGameSystem::FindSpawnGroupByName(g_pSpawnGroupMgr, pName);
  if ( SpawnGroupByName != 0 )
    (*(*g_pEngineServer + 448LL))(g_pEngineServer, SpawnGroupByName, 0);
}


// Script_UnloadSpawnGroupByHandle  (line 2299, @0x0000000001f2a630, libserver.so)
void __fastcall Script_UnloadSpawnGroupByHandle(int nSpawnGroup)
{
  if ( nSpawnGroup != 0 )
    (*(*g_pEngineServer + 448LL))(g_pEngineServer, nSpawnGroup, 0);
}


// Script_OverlayCircle  (line 2311, @0x0000000001f2ba30, libserver.so)  // inlines: Vector
// calls: NDebugOverlay::Circle
void __fastcall Script_OverlayCircle(
        bool bZTest,
        double a2,
        vec_t a3,
        double a4,
        float a5,
        float a6,
        float flAlpha,
        float flRad,
        float flDur)
{
  Vector vCentera; // [rsp+20h] [rbp-38h] BYREF
  Vector v10; // [rsp+30h] [rbp-28h] BYREF
  Vector v11; // [rsp+40h] [rbp-18h] BYREF

  *&vCentera.x = a2;
  vCentera.z = a3;
  v11.x = 0.0;
  v11.z = 0.0;
  v10.y = 0.0;
  v10.z = 0.0;
  v11.y = -1.0;
  v10.x = 1.0;
  NDebugOverlay::Circle(&vCentera, &v10, &v11, flAlpha, *&a4, *(&a4 + 1), a5, a6, bZTest, flRad);
}


// Script_OverlaySphere  (line 2318, @0x0000000001f2b9e0, libserver.so)
// calls: NDebugOverlay::Sphere
void __fastcall Script_OverlaySphere(
        bool bZTest,
        double a2,
        vec_t a3,
        double a4,
        float a5,
        double a6,
        float flAlpha,
        float flRad,
        float flDur)
{
  Vector vCentera; // [rsp+10h] [rbp-18h] BYREF

  *&vCentera.x = a2;
  vCentera.z = a3;
  NDebugOverlay::Sphere(&vCentera, flAlpha, *&a4, *(&a4 + 1), a5, bZTest, flRad);
}


// Script_OverlayLine_vCol  (line 2325, @0x0000000001f2ac60, libserver.so)
// calls: NDebugOverlay::Line
void __fastcall Script_OverlayLine_vCol(
        bool bZTest,
        double a2,
        vec_t a3,
        double a4,
        vec_t a5,
        double a6,
        float a7,
        float a8,
        float flDur)
{
  Vector vEnda; // [rsp+10h] [rbp-28h] BYREF
  Vector vStarta; // [rsp+20h] [rbp-18h] BYREF

  *&vStarta.x = a2;
  vStarta.z = a3;
  *&vEnda.x = a4;
  vEnda.z = a5;
  NDebugOverlay::Line(&vStarta, &vEnda, *&a6, *(&a6 + 1), a7, bZTest, a8);
}


// Script_OverlayBoxDirection  (line 2332, @0x0000000001f2b960, libserver.so)
// calls: NDebugOverlay::BoxDirection
void __cdecl Script_OverlayBoxDirection(
        Vector vCenter,
        Vector vMin,
        Vector vMax,
        Vector vForward,
        Vector vCol,
        float flAlpha,
        float flDur)
{
  Vector vForwarda; // [rsp+10h] [rbp-40h] BYREF
  Vector vMaxa; // [rsp+20h] [rbp-30h] BYREF
  Vector vMina; // [rsp+30h] [rbp-20h] BYREF
  Vector vCentera; // [rsp+40h] [rbp-10h] BYREF

  vMina = vMin;
  vCentera = vCenter;
  vMaxa = vMax;
  vForwarda = vForward;
  NDebugOverlay::BoxDirection(&vCentera, &vMina, &vMaxa, &vForwarda, vCol.x, vCol.y, vCol.z, flAlpha, flDur);
}


// Script_OverlayClear  (line 2339, @0x0000000001f2c380, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "No debugoverlay to clear with\n"
void __cdecl Script_OverlayClear()
{
  if ( debugoverlay != 0 )
  {
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 1))(debugoverlay);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 2, "No debugoverlay to clear with\n");
  }
}


// Script_GetPhysVelocity  (line 2357, @0x0000000001f30290, libserver.so)  // inlines: GetAbsVelocity, HScriptToEntity<CBaseEntity>, ToEnt, operator=
// calls: GetScriptDesc<CEntityInstance>, CBaseEntity::VPhysicsGetObject, CBaseEntity::CalcAbsoluteVelocity, __cxa_guard_acquire, __cxa_guard_release
// globals: g_pScriptVM, `guard variable for'Script_GetPhysVelocity(HSCRIPT__ *)::vVel, Script_GetPhysVelocity(HSCRIPT__ *)::vVel
const Vector *__fastcall Script_GetPhysVelocity(HSCRIPT hEnt)
{
  __int64 (__fastcall *v2)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  __int64 v4; // rbx
  IPhysicsObject *Object; // rax
  double v7; // xmm0_8
  vec_t v8; // xmm1_4

  if ( hEnt != 0 )
  {
    v2 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v4 = v2(g_pScriptVM, hEnt, Script);
  }
  else
  {
    v4 = 0;
  }
  if ( *(v4 + 341) == 6 )
  {
    if ( `guard variable for'Script_GetPhysVelocity(HSCRIPT__ *)::vVel == 0
      && __cxa_guard_acquire(&`guard variable for'Script_GetPhysVelocity(HSCRIPT__ *)::vVel) != 0 )
    {
      __cxa_guard_release(&`guard variable for'Script_GetPhysVelocity(HSCRIPT__ *)::vVel);
    }
    Object = CBaseEntity::VPhysicsGetObject(v4);
    v7 = (*(*Object + 1688LL))(Object);
    Script_GetPhysVelocity(HSCRIPT__ *)::vVel.z = v8;
    *&Script_GetPhysVelocity(HSCRIPT__ *)::vVel.x = v7;
    return &Script_GetPhysVelocity(HSCRIPT__ *)::vVel;
  }
  else
  {
    if ( (*(v4 + 573) & 0x10) != 0 )
      CBaseEntity::CalcAbsoluteVelocity(v4);
    return (v4 + 444);
  }
}


// Script_GetPhysAngularVelocity  (line 2372, @0x0000000001f30160, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, QAngleToAngularImpulse, ToEnt, operator=
// calls: GetScriptDesc<CEntityInstance>, __cxa_guard_acquire, __cxa_guard_release, CBaseEntity::VPhysicsGetObject
// globals: g_pScriptVM, `guard variable for'Script_GetPhysAngularVelocity(HSCRIPT__ *)::vAng, Script_GetPhysAngularVelocity(HSCRIPT__ *)::vAng
const Vector *__fastcall Script_GetPhysAngularVelocity(HSCRIPT hEnt)
{
  __int64 (__fastcall *v2)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  __int64 v4; // rbx
  vec_t v5; // xmm0_4
  vec_t v6; // xmm2_4
  vec_t z; // eax
  IPhysicsObject *Object; // rax
  vec_t v10; // xmm1_4
  double v11; // [rsp+0h] [rbp-20h]

  if ( hEnt != 0 )
  {
    v2 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v4 = v2(g_pScriptVM, hEnt, Script);
  }
  else
  {
    v4 = 0;
  }
  if ( `guard variable for'Script_GetPhysAngularVelocity(HSCRIPT__ *)::vAng == 0
    && __cxa_guard_acquire(&`guard variable for'Script_GetPhysAngularVelocity(HSCRIPT__ *)::vAng) != 0 )
  {
    z = vec3_origin.z;
    *&Script_GetPhysAngularVelocity(HSCRIPT__ *)::vAng.x = *&vec3_origin.x;
    Script_GetPhysAngularVelocity(HSCRIPT__ *)::vAng.z = z;
    __cxa_guard_release(&`guard variable for'Script_GetPhysAngularVelocity(HSCRIPT__ *)::vAng);
  }
  if ( *(v4 + 341) == 6 )
  {
    Object = CBaseEntity::VPhysicsGetObject(v4);
    v11 = (*(*Object + 592LL))(Object);
    Script_GetPhysAngularVelocity(HSCRIPT__ *)::vAng.z = v10;
    *&Script_GetPhysAngularVelocity(HSCRIPT__ *)::vAng.x = v11;
  }
  else
  {
    v5 = *(v4 + 740);
    v6 = *(v4 + 744);
    Script_GetPhysAngularVelocity(HSCRIPT__ *)::vAng.y = *(v4 + 736);
    Script_GetPhysAngularVelocity(HSCRIPT__ *)::vAng.z = v5;
    Script_GetPhysAngularVelocity(HSCRIPT__ *)::vAng.x = v6;
  }
  return &Script_GetPhysAngularVelocity(HSCRIPT__ *)::vAng;
}


// Script_SetPhysAngularVelocity  (line 2389, @0x0000000001f30390, libserver.so)  // inlines: AngularImpulseToQAngle, HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::VPhysicsGetObject
// globals: g_pScriptVM
void __fastcall Script_SetPhysAngularVelocity(HSCRIPT hEnt, const Vector *const vAngVel)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rdi
  IPhysicsObject *Object; // rax
  QAngle qAng; // [rsp+0h] [rbp-30h] BYREF

  if ( hEnt != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hEnt, Script);
  }
  else
  {
    v6 = 0;
  }
  if ( *(v6 + 341) == 6 )
  {
    Object = CBaseEntity::VPhysicsGetObject(v6);
    (*(*Object + 576LL))(Object, vAngVel);
  }
  else
  {
    qAng.x = vAngVel->y;
    qAng.y = vAngVel->z;
    qAng.z = vAngVel->x;
    CBaseEntity::SetLocalAngularVelocity(v6, &qAng);
  }
}


// Script_Say  (line 2410, @0x0000000001f30450, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: CCommand::CCommand, GetScriptDesc<CEntityInstance>, CCommand::Tokenize, Host_Say, __stack_chk_fail
// globals: g_pScriptVM
void __fastcall Script_Say(HSCRIPT srcEnt, const char *pszStr, bool bTeamOnly)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v8; // r12
  CCommand tmpArg; // [rsp+0h] [rbp-640h] BYREF
  unsigned __int64 v10; // [rsp+608h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  CCommand::CCommand(&tmpArg);
  if ( srcEnt != 0 )
  {
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, srcEnt, Script);
    CCommand::Tokenize(&tmpArg, pszStr, 0);
    if ( v8 != 0 )
    {
      Host_Say(v8, &tmpArg, bTeamOnly, 0, 0);
      return;
    }
  }
  else
  {
    CCommand::Tokenize(&tmpArg, pszStr, 0);
  }
  Host_Say(0, &tmpArg, 0, 0, 0);
}


// Script_LoadKeyValues  (line 2435, @0x0000000001f40ec0, libserver.so)  // inlines: CVariantBase, CreateTableFromKeyValues, TakeOwnership, ~CVariantBase
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, Warning, KeyValues::~KeyValues, KeyValues::operator delete, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, Recursive_ConvertKeyValuesToTable, _Unwind_Resume
// strings: "Script failed to LoadKeyValues %s\n"
// globals: g_pScriptVM
CVariantBase<CVariantDefaultAllocator> *__fastcall Script_LoadKeyValues(
        CVariantBase<CVariantDefaultAllocator> *a1,
        const char *pszFilename)
{
  KeyValues *v4; // r12
  IBaseFileSystem *v5; // rsi
  IScriptVM *v7; // r14
  ScriptVariant_t v8; // [rsp+0h] [rbp-30h] BYREF

  v4 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v4, "");
  v5 = 0;
  if ( g_pFullFileSystem != 0 )
    v5 = &g_pFullFileSystem->IBaseFileSystem;
  if ( KeyValues::LoadFromFile(v4, v5, pszFilename, "GAME", 0) )
  {
    v7 = g_pScriptVM;
    v8.m_type = 0;
    v8.m_flags = 0;
    v8.m_uint64 = 0;
    (*(*g_pScriptVM + 264LL))(g_pScriptVM, &v8);
    if ( v4 != 0 && v8.m_uint64 != 0 )
    {
      Recursive_ConvertKeyValuesToTable(v4, v7, v8.m_hScript);
      if ( v8.m_type == 31 )
        goto LABEL_12;
    }
    else if ( v8.m_type == 31 )
    {
LABEL_12:
      v8.m_type = 36;
    }
    a1->m_type = 0;
    a1->m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v8, a1);
    CVariantBase<CVariantDefaultAllocator>::Free(&v8);
    return a1;
  }
  Warning("Script failed to LoadKeyValues %s\n", pszFilename);
  if ( v4 != 0 )
  {
    KeyValues::~KeyValues(v4);
    KeyValues::operator delete(v4);
  }
  a1->m_type = 0;
  a1->m_flags = 0;
  v8.m_type = 0;
  v8.m_flags = 0;
  v8.m_uint64 = 0;
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v8, a1);
  CVariantBase<CVariantDefaultAllocator>::Free(&v8);
  return a1;
}


// Script_LoadKeyValuesFromString  (line 2453, @0x0000000001f40d00, libserver.so)  // inlines: CVariantBase, CreateTableFromKeyValues, TakeOwnership, V_strlen, ~CUtlBuffer, ~CUtlMemory, ~CVariantBase
// calls: KeyValues::operator new, KeyValues::KeyValues, strlen, CUtlBuffer::CUtlBuffer, KeyValues::LoadFromBuffer, Warning, KeyValues::~KeyValues, KeyValues::operator delete, CUtlMemory<unsigned char, int>::Purge, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, Recursive_ConvertKeyValuesToTable (13 total)
// strings: "Script failed to LoadKeyValues\n"
// globals: g_pScriptVM
CVariantBase<CVariantDefaultAllocator> *__fastcall Script_LoadKeyValuesFromString(
        CVariantBase<CVariantDefaultAllocator> *a1,
        const char *pszKVString)
{
  KeyValues *v4; // r12
  int v5; // edx
  IScriptVM *v7; // r15
  ScriptVariant_t table; // [rsp+10h] [rbp-90h] BYREF
  CUtlBuffer buf; // [rsp+20h] [rbp-80h] BYREF

  v4 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v4, "");
  if ( pszKVString != 0 )
    v5 = strlen(pszKVString) + 1;
  else
    v5 = 1;
  CUtlBuffer::CUtlBuffer(&buf, pszKVString, v5, 0);
  if ( KeyValues::LoadFromBuffer(v4, "", &buf, 0, 0, 0, 0) )
  {
    v7 = g_pScriptVM;
    table.m_flags = 0;
    table.m_type = 0;
    table.m_uint64 = 0;
    (*(*g_pScriptVM + 264LL))(g_pScriptVM, &table);
    if ( v4 != 0 && table.m_uint64 != 0 )
    {
      Recursive_ConvertKeyValuesToTable(v4, v7, table.m_hScript);
      if ( table.m_type == 31 )
        goto LABEL_13;
    }
    else if ( table.m_type == 31 )
    {
LABEL_13:
      table.m_type = 36;
    }
    a1->m_type = 0;
    a1->m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&table, a1);
    CVariantBase<CVariantDefaultAllocator>::Free(&table);
    goto LABEL_7;
  }
  Warning("Script failed to LoadKeyValues\n");
  if ( v4 != 0 )
  {
    KeyValues::~KeyValues(v4);
    KeyValues::operator delete(v4);
  }
  a1->m_int = 0;
  a1->m_type = 5;
  a1->m_flags = 0;
LABEL_7:
  CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return a1;
}


// Script_LoadMOTD  (line 2470, @0x0000000001f2a660, libserver.so)
void __cdecl Script_LoadMOTD()
{
  ;
}


// Script_TraceLine  (line 2478, @0x0000000001f3deb0, libserver.so)  // inlines: CGameTrace, CVariantBase, CopyData<Vector>, EnableInteractsWith, EntityToHScript, Get, GetFloat, GetPublicScriptScope, Init, LengthSqr, Ray_t, RnCollisionAttr_t, ToEnt, ToHScript, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator const Vector&, operator uint64, operator*, operator+, operator=, ~CVariantBase
// calls: Warning, DevMsg(char const*,...), CVariantBase<CVariantDefaultAllocator>::Free, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, HScriptToEntity<CBaseEntity>, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
// strings: "startpos", "endpos", "Didnt supply startpos and endpos to Script TraceLine call, failing, setting called to fal, "Inputs: startpos, endpos, mask, ignore  -- outputs: pos, fraction, hit, enthit, startsoli, "enthit", "startsolid" (7 total)
// globals: g_pScriptVM
bool __fastcall Script_TraceLine(HSCRIPT hTable)
{
  float z; // r15d
  char v3; // r13
  Vector *m_uint64; // rax
  const Vector *v5; // rax
  uint64 m_float64; // r14
  bool v7; // r12
  float m_fValue; // xmm1_4
  void (__fastcall *v10)(IScriptVM *, HSCRIPT, const char *, Ray_t *); // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, char *, Ray_t *); // rax
  bool v12; // dl
  CBaseEntity *m_pEnt; // r15
  IScriptVM *v14; // rdi
  HSCRIPT m_hScope; // rax
  void (__fastcall *v16)(IScriptVM *, HSCRIPT, const char *, Ray_t *); // rax
  __int64 v17; // rax
  void (__fastcall *v18)(IScriptVM *, HSCRIPT, char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  void (__fastcall *v19)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  float v20; // [rsp+0h] [rbp-1D0h]
  float pIgnoreEnt_0; // [rsp+4h] [rbp-1CCh]
  float pIgnoreEnt_0a; // [rsp+4h] [rbp-1CCh]
  const CBaseEntity *pIgnoreEnt_0_4; // [rsp+8h] [rbp-1C8h]
  CBaseEntity *pIgnoreEnt_0_4a; // [rsp+8h] [rbp-1C8h]
  float x; // [rsp+10h] [rbp-1C0h]
  float v26; // [rsp+10h] [rbp-1C0h]
  Vector vPos; // [rsp+20h] [rbp-1B0h] BYREF
  ScriptVariant_t rval; // [rsp+30h] [rbp-1A0h] BYREF
  CVariantBase<CVariantDefaultAllocator> v31; // [rsp+40h] [rbp-190h] BYREF
  CVariantBase<CVariantDefaultAllocator> v32; // [rsp+50h] [rbp-180h] BYREF
  CTraceFilterSimple v33; // [rsp+60h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+A0h] [rbp-130h] BYREF
  trace_t tr; // [rsp+F0h] [rbp-E0h] BYREF
  Vector v36; // 0:^14.12

  rval.m_type = 0;
  rval.m_flags = 0;
  rval.m_uint64 = 0;
  v3 = 1;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "startpos", &rval) != 0 )
  {
    m_uint64 = rval.m_uint64;
    if ( rval.m_uint64 == 0 )
      m_uint64 = &vec3_origin;
    v3 = 0;
    v36 = *m_uint64;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "endpos", &rval) != 0 )
  {
    v5 = rval.m_uint64;
    if ( rval.m_uint64 == 0 )
      v5 = &vec3_origin;
    z = v5->z;
    x = v5->x;
    pIgnoreEnt_0 = v5->y;
  }
  else
  {
    v3 = 1;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  m_float64 = 540673;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "mask", &rval) != 0 )
  {
    m_float64 = rval.m_uint64;
    if ( rval.m_type == 34 )
      m_float64 = rval.m_float64;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  if ( v3 != 0 )
  {
    Warning("Didnt supply startpos and endpos to Script TraceLine call, failing, setting called to false\n");
    DevMsg("Inputs: startpos, endpos, mask, ignore  -- outputs: pos, fraction, hit, enthit, startsolid");
    v7 = 0;
  }
  else
  {
    if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "ignore", &rval) != 0 )
      pIgnoreEnt_0_4 = HScriptToEntity<CBaseEntity>(rval.m_hScript);
    else
      pIgnoreEnt_0_4 = 0;
    (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
    memset(&tr.m_ShapeAttributes, 0, 31);
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    v26 = x - v36.x;
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Start.w = 0.0;
    ray.m_flRadius = m_fValue;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_Delta.x = v26;
    pIgnoreEnt_0a = pIgnoreEnt_0 - v36.y;
    ray.m_Delta.y = pIgnoreEnt_0a;
    v20 = z - v36.z;
    ray.m_Delta.z = z - v36.z;
    ray.m_IsRay = 1;
    ray.m_Start.Vector = v36;
    ray.m_IsSwept = (((v26 * v26) + (pIgnoreEnt_0a * pIgnoreEnt_0a)) + (v20 * v20)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&v33, pIgnoreEnt_0_4, 4, 0);
    v33.m_attr.m_nInteractsWith |= m_float64;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v33, &tr);
    v10 = *(*g_pScriptVM + 240LL);
    LODWORD(ray.m_Start.z) = 1;
    ray.m_Start.x = tr.fraction;
    v10(g_pScriptVM, hTable, "fraction", &ray);
    CVariantBase<CVariantDefaultAllocator>::Free(&ray);
    v11 = *(*g_pScriptVM + 240LL);
    v12 = tr.fraction != 1.0 || tr.startsolid;
    LOBYTE(ray.m_Start.x) = v12;
    LODWORD(ray.m_Start.z) = 6;
    v11(g_pScriptVM, hTable, "hit", &ray);
    CVariantBase<CVariantDefaultAllocator>::Free(&ray);
    m_pEnt = tr.m_pEnt;
    if ( tr.m_pEnt != 0 )
    {
      v14 = g_pScriptVM;
      pIgnoreEnt_0_4a = *(*g_pScriptVM + 240LL);
      m_hScope = tr.m_pEnt->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(tr.m_pEnt, 0);
        v14 = g_pScriptVM;
        m_hScope = m_pEnt->m_pEntity->m_hPublicScope.m_hScope;
      }
      *&ray.m_Start.x = m_hScope;
      LODWORD(ray.m_Start.z) = 31;
      (pIgnoreEnt_0_4a)(v14, hTable, "enthit", &ray);
      CVariantBase<CVariantDefaultAllocator>::Free(&ray);
    }
    if ( tr.startsolid )
    {
      v16 = *(*g_pScriptVM + 240LL);
      LODWORD(ray.m_Start.z) = 6;
      LOBYTE(ray.m_Start.x) = 1;
      v16(g_pScriptVM, hTable, "startsolid", &ray);
      CVariantBase<CVariantDefaultAllocator>::Free(&ray);
    }
    vPos.x = (v26 * tr.fraction) + v36.x;
    vPos.y = (pIgnoreEnt_0a * tr.fraction) + v36.y;
    vPos.z = (tr.fraction * v20) + v36.z;
    v17 = *g_pScriptVM;
    v31.m_type = 0;
    v31.m_flags = 0;
    v18 = *(v17 + 240);
    CVariantBase<CVariantDefaultAllocator>::Free(&v31);
    v31.m_type = 3;
    v31.m_uint64 = &vPos;
    v18(g_pScriptVM, hTable, "pos", &v31);
    CVariantBase<CVariantDefaultAllocator>::Free(&v31);
    v19 = *(*g_pScriptVM + 240LL);
    v32.m_type = 0;
    v32.m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::Free(&v32);
    v32.m_type = 3;
    v32.m_uint64 = &tr.plane;
    v19(g_pScriptVM, hTable, "normal", &v32);
    v7 = 1;
    CVariantBase<CVariantDefaultAllocator>::Free(&v32);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&rval);
  return v7;
}


// Script_TraceHull  (line 2530, @0x0000000001f3d6f0, libserver.so)  // inlines: CGameTrace, CVariantBase, CopyData<Vector>, EnableInteractsWith, EntityToHScript, Get, GetPublicScriptScope, Init, LengthSqr, Ray_t, RnCollisionAttr_t, ToEnt, ToHScript, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator const Vector&, operator*, operator*=, operator+, operator=, ~CVariantBase
// calls: Warning, DevMsg(char const*,...), CVariantBase<CVariantDefaultAllocator>::Free, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, HScriptToEntity<CBaseEntity>, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
// strings: "startpos", "endpos", "Didnt supply startpos, endpos, min, and max to Script TraceHull call, failing, setting ca, "Inputs: startpos, endpos, min, max, mask, ignore  -- outputs: pos, fraction, hit, enthit,, "enthit", "startsolid" (7 total)
// globals: g_pScriptVM
bool __fastcall Script_TraceHull(HSCRIPT hTable)
{
  const char *v1; // rdx
  char v2; // r14
  __int64 v3; // r13
  const Vector *m_uint64; // rax
  Vector *v6; // rdx
  bool v7; // r12
  CBaseEntity *v9; // r13
  float v10; // xmm3_4
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, Ray_t *); // rax
  void (__fastcall *v12)(IScriptVM *, HSCRIPT, char *, Ray_t *); // rax
  bool v13; // dl
  CBaseEntity *m_pEnt; // r15
  IScriptVM *v15; // rdi
  HSCRIPT m_hScope; // rax
  void (__fastcall *v17)(IScriptVM *, HSCRIPT, const char *, Ray_t *); // rax
  void (__fastcall *v18)(IScriptVM *, HSCRIPT, char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  void (__fastcall *v19)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  void (__fastcall *v20)(IScriptVM *, HSCRIPT, const char *, Ray_t *); // [rsp+0h] [rbp-250h]
  float v21; // [rsp+8h] [rbp-248h]
  float z; // [rsp+Ch] [rbp-244h]
  float v23; // [rsp+10h] [rbp-240h]
  float y; // [rsp+14h] [rbp-23Ch]
  float v25; // [rsp+18h] [rbp-238h]
  float x; // [rsp+1Ch] [rbp-234h]
  Vector vStart; // [rsp+20h] [rbp-230h] BYREF
  Vector vEnd; // [rsp+30h] [rbp-220h] BYREF
  Vector vMin; // [rsp+40h] [rbp-210h] BYREF
  Vector vMax; // [rsp+50h] [rbp-200h] BYREF
  Vector vPos; // [rsp+60h] [rbp-1F0h] BYREF
  ScriptVariant_t rval; // [rsp+70h] [rbp-1E0h] BYREF
  CVariantBase<CVariantDefaultAllocator> v33; // [rsp+80h] [rbp-1D0h] BYREF
  CVariantBase<CVariantDefaultAllocator> v34; // [rsp+90h] [rbp-1C0h] BYREF
  Vector *paramValues[4]; // [rsp+A0h] [rbp-1B0h]
  const char *paramNames[4]; // [rsp+C0h] [rbp-190h]
  CTraceFilterSimple v37; // [rsp+E0h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+120h] [rbp-130h] BYREF
  trace_t tr; // [rsp+170h] [rbp-E0h] BYREF

  v1 = "startpos";
  v2 = 0;
  v3 = 0;
  rval.m_type = 0;
  rval.m_flags = 0;
  paramValues[0] = &vStart;
  paramValues[1] = &vEnd;
  paramValues[2] = &vMin;
  paramValues[3] = &vMax;
  paramNames[0] = "startpos";
  paramNames[1] = "endpos";
  paramNames[2] = "min";
  rval.m_uint64 = 0;
  paramNames[3] = "max";
  while ( 1 )
  {
    if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, v1, &rval) != 0 )
    {
      m_uint64 = rval.m_uint64;
      if ( rval.m_uint64 == 0 )
        m_uint64 = &vec3_origin;
      v6 = paramValues[v3];
      v6->x = m_uint64->x;
      v6->y = m_uint64->y;
      v6->z = m_uint64->z;
    }
    else
    {
      v2 = 1;
    }
    (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
    if ( ++v3 == 4 )
      break;
    v1 = paramNames[v3];
  }
  if ( v2 != 0 )
  {
    Warning("Didnt supply startpos, endpos, min, and max to Script TraceHull call, failing, setting called to false\n");
    DevMsg("Inputs: startpos, endpos, min, max, mask, ignore  -- outputs: pos, fraction, hit, enthit, startsolid");
    v7 = 0;
  }
  else
  {
    if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "ignore", &rval) != 0 )
      v9 = HScriptToEntity<CBaseEntity>(rval.m_hScript);
    else
      v9 = 0;
    (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
    memset(&tr.m_ShapeAttributes, 0, 31);
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    ray.m_Start.w = 0.0;
    ray.m_Delta.w = 0.0;
    x = vStart.x;
    ray.m_StartOffset.w = 0.0;
    ray.m_Extents.w = 0.0;
    ray.m_flRadius = 0.0;
    y = vStart.y;
    z = vStart.z;
    v23 = vEnd.y - vStart.y;
    v21 = vEnd.z - vStart.z;
    ray.m_Delta.z = vEnd.z - vStart.z;
    ray.m_Delta.y = vEnd.y - vStart.y;
    v25 = vEnd.x - vStart.x;
    ray.m_Delta.x = vEnd.x - vStart.x;
    ray.m_Extents.y = (vMax.y - vMin.y) * 0.5;
    ray.m_Extents.z = (vMax.z - vMin.z) * 0.5;
    ray.m_Extents.x = (vMax.x - vMin.x) * 0.5;
    ray.m_IsSwept = ((((vEnd.x - vStart.x) * (vEnd.x - vStart.x)) + ((vEnd.y - vStart.y) * (vEnd.y - vStart.y)))
                   + ((vEnd.z - vStart.z) * (vEnd.z - vStart.z))) != 0.0;
    v10 = (vMax.x + vMin.x) * 0.5;
    ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
                 + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
    ray.m_Start.x = vStart.x + v10;
    ray.m_Start.y = vStart.y + ((vMax.y + vMin.y) * 0.5);
    ray.m_Start.z = vStart.z + ((vMax.z + vMin.z) * 0.5);
    ray.m_StartOffset.x = -v10;
    ray.m_StartOffset.y = -((vMax.y + vMin.y) * 0.5);
    ray.m_StartOffset.z = -((vMax.z + vMin.z) * 0.5);
    CTraceFilterSimple::CTraceFilterSimple(&v37, v9, 4, 0);
    v37.m_attr.m_nInteractsWith |= 0x84001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v37, &tr);
    v11 = *(*g_pScriptVM + 240LL);
    LODWORD(ray.m_Start.z) = 1;
    ray.m_Start.x = tr.fraction;
    v11(g_pScriptVM, hTable, "fraction", &ray);
    CVariantBase<CVariantDefaultAllocator>::Free(&ray);
    v12 = *(*g_pScriptVM + 240LL);
    v13 = tr.fraction != 1.0 || tr.startsolid;
    LOBYTE(ray.m_Start.x) = v13;
    LODWORD(ray.m_Start.z) = 6;
    v12(g_pScriptVM, hTable, "hit", &ray);
    CVariantBase<CVariantDefaultAllocator>::Free(&ray);
    m_pEnt = tr.m_pEnt;
    if ( tr.m_pEnt != 0 )
    {
      v15 = g_pScriptVM;
      v20 = *(*g_pScriptVM + 240LL);
      m_hScope = tr.m_pEnt->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(tr.m_pEnt, 0);
        v15 = g_pScriptVM;
        m_hScope = m_pEnt->m_pEntity->m_hPublicScope.m_hScope;
      }
      *&ray.m_Start.x = m_hScope;
      LODWORD(ray.m_Start.z) = 31;
      v20(v15, hTable, "enthit", &ray);
      CVariantBase<CVariantDefaultAllocator>::Free(&ray);
    }
    if ( tr.startsolid )
    {
      v17 = *(*g_pScriptVM + 240LL);
      LODWORD(ray.m_Start.z) = 6;
      LOBYTE(ray.m_Start.x) = 1;
      v17(g_pScriptVM, hTable, "startsolid", &ray);
      CVariantBase<CVariantDefaultAllocator>::Free(&ray);
    }
    vPos.x = (v25 * tr.fraction) + x;
    vPos.y = (v23 * tr.fraction) + y;
    vPos.z = (tr.fraction * v21) + z;
    v18 = *(*g_pScriptVM + 240LL);
    v33.m_type = 0;
    v33.m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::Free(&v33);
    v33.m_type = 3;
    v33.m_uint64 = &vPos;
    v18(g_pScriptVM, hTable, "pos", &v33);
    CVariantBase<CVariantDefaultAllocator>::Free(&v33);
    v19 = *(*g_pScriptVM + 240LL);
    v34.m_type = 0;
    v34.m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::Free(&v34);
    v34.m_type = 3;
    v34.m_uint64 = &tr.plane;
    v19(g_pScriptVM, hTable, "normal", &v34);
    v7 = 1;
    CVariantBase<CVariantDefaultAllocator>::Free(&v34);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&rval);
  return v7;
}


// Script_TraceCollideable  (line 2590, @0x0000000001f3cd70, libserver.so)  // inlines: CGameTrace, CVariantBase, CopyData<Vector>, HScriptToEntity<CBaseEntity>, Init, LengthSqr, Ray_t, RnCollisionAttr_t, ToEnt, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator const Vector&, operator*, operator*=, operator+, operator=, ~CVariantBase
// calls: CGameTrace::Init, GetScriptDesc<CEntityInstance>, Warning, DevMsg(char const*,...), CVariantBase<CVariantDefaultAllocator>::Free, CGamePhysicsQueryInterface::ClipRayToEntity, _Unwind_Resume
// strings: "startpos", "endpos", "Didnt supply startpos, endpos, and ent to Script TraceCollideable call, failing, setting , "Inputs: startpos, endpos, ent, (optional mins, maxs) -- outputs: pos, fraction, startsoli, "startsolid", "normal"
// globals: g_pScriptVM
bool __fastcall Script_TraceCollideable(HSCRIPT hTable)
{
  uint64 m_uint64; // r15
  __int64 (__fastcall *v3)(IScriptVM *, uint64, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v5; // r15
  char v6; // r13
  const Vector *v7; // rax
  const Vector *v8; // rax
  bool v9; // r12
  char v11; // r13
  void (__fastcall *v12)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  void (__fastcall *v13)(IScriptVM *, HSCRIPT, char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  char v14; // dl
  void (__fastcall *v15)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  __int64 v16; // rax
  void (__fastcall *v17)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const Vector *v18; // rax
  const Vector *v19; // rax
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // [rsp+Ch] [rbp-1A4h]
  float v24; // [rsp+10h] [rbp-1A0h]
  float v25; // [rsp+14h] [rbp-19Ch]
  float v26; // [rsp+18h] [rbp-198h]
  float v27; // [rsp+1Ch] [rbp-194h]
  float v28; // [rsp+20h] [rbp-190h]
  float v29; // [rsp+24h] [rbp-18Ch]
  float v30; // [rsp+28h] [rbp-188h]
  float v32; // [rsp+2Ch] [rbp-184h]
  float y; // [rsp+30h] [rbp-180h]
  float z; // [rsp+34h] [rbp-17Ch]
  float x; // [rsp+38h] [rbp-178h]
  void (__fastcall *v37)(IScriptVM *, HSCRIPT, char *, CVariantBase<CVariantDefaultAllocator> *); // [rsp+38h] [rbp-178h]
  Vector vPos; // [rsp+40h] [rbp-170h] BYREF
  ScriptVariant_t rval; // [rsp+50h] [rbp-160h] BYREF
  CVariantBase<CVariantDefaultAllocator> v40; // [rsp+60h] [rbp-150h] BYREF
  CVariantBase<CVariantDefaultAllocator> v41; // [rsp+70h] [rbp-140h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-130h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-E0h] BYREF
  Vector v44; // 0:^24.12

  memset(&tr.m_ShapeAttributes, 0, 31);
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  rval.m_flags = 0;
  rval.m_type = 0;
  rval.m_uint64 = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "ent", &rval) != 0 )
  {
    m_uint64 = rval.m_uint64;
    if ( rval.m_uint64 != 0 )
    {
      v3 = *(*g_pScriptVM + 208LL);
      Script = GetScriptDesc<CEntityInstance>(0);
      v5 = v3(g_pScriptVM, m_uint64, Script);
    }
    else
    {
      v5 = 0;
    }
    v6 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 1;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "startpos", &rval) != 0 )
  {
    v7 = rval.m_uint64;
    if ( rval.m_uint64 == 0 )
      v7 = &vec3_origin;
    x = v7->x;
    y = v7->y;
    z = v7->z;
  }
  else
  {
    v6 = 1;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "endpos", &rval) != 0 )
  {
    v8 = rval.m_uint64;
    if ( rval.m_uint64 == 0 )
      v8 = &vec3_origin;
    v29 = v8->x;
    v30 = v8->y;
    v32 = v8->z;
  }
  else
  {
    v6 = 1;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  if ( v6 != 0 )
  {
    Warning("Didnt supply startpos, endpos, and ent to Script TraceCollideable call, failing, setting called to false\n");
    DevMsg("Inputs: startpos, endpos, ent, (optional mins, maxs) -- outputs: pos, fraction, startsolid");
LABEL_16:
    v9 = 0;
    goto LABEL_17;
  }
  v11 = 1;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "mins", &rval) != 0 )
  {
    v19 = rval.m_uint64;
    if ( rval.m_uint64 == 0 )
      v19 = &vec3_origin;
    v11 = 0;
    v23 = v19->x;
    v24 = v19->y;
    v25 = v19->z;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "maxs", &rval) != 0 )
  {
    v18 = rval.m_uint64;
    if ( rval.m_uint64 == 0 )
      v18 = &vec3_origin;
    v26 = v18->x;
    v27 = v18->y;
    v28 = v18->z;
  }
  else
  {
    v11 = 1;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  ray.m_flRadius = 0.0;
  if ( v11 != 0 )
  {
    ray.m_Extents.z = 0.0;
    ray.m_Extents.y = 0.0;
    ray.m_Extents.x = 0.0;
    ray.m_IsRay = 1;
    v44.x = v29 - x;
    v44.y = v30 - y;
    v44.z = v32 - z;
    ray.m_Delta.Vector = v44;
    ray.m_StartOffset.z = 0.0;
    ray.m_StartOffset.y = 0.0;
    ray.m_StartOffset.x = 0.0;
    ray.m_Start.x = x;
    ray.m_Start.y = y;
    ray.m_Start.z = z;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (v44.y * v44.y)) + (v44.z * v44.z)) != 0.0;
  }
  else
  {
    v44.x = v29 - x;
    v44.y = v30 - y;
    v44.z = v32 - z;
    ray.m_Delta.Vector = v44;
    ray.m_Extents.y = (v27 - v24) * 0.5;
    ray.m_Extents.z = (v28 - v25) * 0.5;
    ray.m_Extents.x = (v26 - v23) * 0.5;
    ray.m_IsSwept = (((v44.x * v44.x) + (v44.y * v44.y)) + (v44.z * v44.z)) != 0.0;
    v20 = (v26 + v23) * 0.5;
    ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
                 + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
    v21 = (v27 + v24) * 0.5;
    v22 = (v28 + v25) * 0.5;
    ray.m_Start.x = x + v20;
    ray.m_Start.y = y + v21;
    ray.m_Start.z = z + v22;
    ray.m_StartOffset.x = -v20;
    ray.m_StartOffset.y = -v21;
    ray.m_StartOffset.z = -v22;
  }
  if ( v5->m_pCollision == 0 )
    goto LABEL_16;
  CGamePhysicsQueryInterface::ClipRayToEntity(g_pPhysicsQuery, &ray, 0xFFFFFFFFFFFFFFFFLL, v5, &tr);
  v12 = *(*g_pScriptVM + 240LL);
  v41.m_type = 1;
  v41.m_flags = 0;
  v41.m_int = LODWORD(tr.fraction);
  v12(g_pScriptVM, hTable, "fraction", &v41);
  CVariantBase<CVariantDefaultAllocator>::Free(&v41);
  v13 = *(*g_pScriptVM + 240LL);
  v14 = tr.fraction != 1.0 || tr.startsolid;
  v41.m_char = v14;
  v41.m_type = 6;
  v41.m_flags = 0;
  v13(g_pScriptVM, hTable, "hit", &v41);
  CVariantBase<CVariantDefaultAllocator>::Free(&v41);
  if ( tr.startsolid )
  {
    v15 = *(*g_pScriptVM + 240LL);
    v41.m_flags = 0;
    v41.m_type = 6;
    v41.m_char = 1;
    v15(g_pScriptVM, hTable, "startsolid", &v41);
    CVariantBase<CVariantDefaultAllocator>::Free(&v41);
  }
  vPos.x = (v44.x * tr.fraction) + x;
  vPos.y = (v44.y * tr.fraction) + y;
  vPos.z = (tr.fraction * v44.z) + z;
  v16 = *g_pScriptVM;
  v40.m_type = 0;
  v40.m_flags = 0;
  v37 = *(v16 + 240);
  CVariantBase<CVariantDefaultAllocator>::Free(&v40);
  v40.m_uint64 = &vPos;
  v40.m_type = 3;
  v37(g_pScriptVM, hTable, "pos", &v40);
  CVariantBase<CVariantDefaultAllocator>::Free(&v40);
  v17 = *(*g_pScriptVM + 240LL);
  v41.m_type = 0;
  v41.m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v41);
  v41.m_type = 3;
  v41.m_uint64 = &tr.plane;
  v17(g_pScriptVM, hTable, "normal", &v41);
  v9 = 1;
  CVariantBase<CVariantDefaultAllocator>::Free(&v41);
LABEL_17:
  CVariantBase<CVariantDefaultAllocator>::Free(&rval);
  return v9;
}


// Script_CreateEffect  (line 2667, @0x0000000001f3bd60, libserver.so)  // inlines: AssignTo, CDisablePredictionFiltering, CVariantBase, HScriptToEntity<CBaseEntity>, Pop, Push, TempString, ToEnt, ToString, _Pop, _Push, operator const QAngle&, operator const Vector&, operator=, ~CDisablePredictionFiltering, ~CVariantBase
// calls: GetScriptDesc<CEntityInstance>, CBaseEntity::GetAbsOrigin, DispatchParticleEffect, CVariantBase<CVariantDefaultAllocator>::Free, VectorAngles, CVariantBase<CVariantDefaultAllocator>::TempString, CBaseEntity::GetAbsAngles, V_snprintf, VariantFieldTypeName, Warning, _Unwind_Resume
// strings: "effectname", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "false", "true"
// globals: g_pScriptVM, jpt_1F3C013, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
bool __fastcall Script_CreateEffect(HSCRIPT hTable)
{
  uint64 m_uint64; // r14
  __int64 (__fastcall *v3)(IScriptVM *, uint64, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v5; // r15
  char v6; // r14
  Vector *AbsOrigin; // rax
  QAngle *AbsAngles; // rax
  IPredictionSystem *i; // rax
  const char *v10; // rdi
  IPredictionSystem *j; // rax
  Vector *v13; // rax
  const char *v14; // rdi
  const char *v15; // rax
  double m_float; // xmm0_8
  const char *v17; // rcx
  Vector v18; // [rsp+0h] [rbp-90h]
  Vector pos; // [rsp+10h] [rbp-80h] BYREF
  QAngle ang; // [rsp+20h] [rbp-70h] BYREF
  Vector vDir; // [rsp+30h] [rbp-60h] BYREF
  ScriptVariant_t rval; // [rsp+40h] [rbp-50h] BYREF
  ScriptVariant_t vEffectname; // [rsp+50h] [rbp-40h] BYREF

  rval.m_type = 0;
  rval.m_flags = 0;
  vEffectname.m_type = 0;
  rval.m_uint64 = 0;
  vEffectname.m_flags = 0;
  vEffectname.m_uint64 = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "entity", &rval) != 0
    && (m_uint64 = rval.m_uint64, rval.m_uint64 != 0) )
  {
    v3 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v5 = v3(g_pScriptVM, m_uint64, Script);
  }
  else
  {
    v5 = 0;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  v6 = (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "effectname", &vEffectname);
  if ( v6 == 0 )
    goto LABEL_22;
  pos = vec3_origin;
  ang = vec3_angle;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "position", &rval) != 0 )
  {
    AbsOrigin = rval.m_uint64;
    if ( rval.m_uint64 == 0 )
      AbsOrigin = &vec3_origin;
  }
  else
  {
    if ( v5 == 0 )
      goto LABEL_10;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  }
  pos = *AbsOrigin;
LABEL_10:
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "angles", &rval) != 0 )
  {
    AbsAngles = rval.m_uint64;
    if ( rval.m_uint64 == 0 )
      AbsAngles = &vec3_angle;
    goto LABEL_13;
  }
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "direction", &rval) != 0 )
  {
    v13 = rval.m_uint64;
    if ( rval.m_uint64 == 0 )
      v13 = &vec3_origin;
    vDir = *v13;
    VectorAngles(&vDir, &ang);
    goto LABEL_14;
  }
  if ( v5 != 0 )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(v5);
LABEL_13:
    ang = *AbsAngles;
  }
LABEL_14:
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  for ( i = IPredictionSystem::g_pPredictionSystems; i != 0; i = i->m_pNextSystem )
    ++i->m_nStatusPushed;
  if ( v5 != 0 )
  {
    if ( vEffectname.m_type == 30 )
    {
      v10 = vEffectname.m_uint64;
    }
    else
    {
      switch ( vEffectname.m_type )
      {
        case 0:
          goto LABEL_41;
        case 1:
          m_float = vEffectname.m_float;
          goto LABEL_43;
        case 3:
        case 0x27:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g %g",
            *vEffectname.m_pszString,
            *(vEffectname.m_uint64 + 4),
            *(vEffectname.m_uint64 + 8));
          break;
        case 4:
        case 0x1B:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g %g %g",
            *vEffectname.m_pszString,
            *(vEffectname.m_uint64 + 4),
            *(vEffectname.m_uint64 + 8),
            *(vEffectname.m_uint64 + 12));
          break;
        case 5:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vEffectname.m_int);
          break;
        case 6:
          v17 = "true";
          if ( vEffectname.m_char == 0 )
            v17 = "false";
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v17);
          break;
        case 8:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vEffectname.m_char);
          break;
        case 9:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%d %d %d %d",
            vEffectname.m_char,
            BYTE1(vEffectname.m_int),
            BYTE2(vEffectname.m_uint),
            HIBYTE(vEffectname.m_float));
          break;
        case 0x19:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g",
            *vEffectname.m_pszString,
            *(vEffectname.m_uint64 + 4));
          break;
        case 0x1A:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%lld",
            vEffectname.m_uint64);
          break;
        case 0x21:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%llu",
            vEffectname.m_uint64);
          break;
        case 0x22:
          m_float = vEffectname.m_float64;
LABEL_43:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
          break;
        case 0x25:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vEffectname.m_int);
          break;
        default:
          v15 = VariantFieldTypeName(vEffectname.m_type);
          Warning("No conversion from %s to string at the moment!\n", v15);
LABEL_41:
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          break;
      }
      v10 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
    }
    DispatchParticleEffect(v10, &pos, &ang, ParticleAttachment_t::PATTACH_ABSORIGIN_FOLLOW, v5, -1);
  }
  else
  {
    if ( vEffectname.m_type == 30 )
      v14 = vEffectname.m_uint64;
    else
      v14 = CVariantBase<CVariantDefaultAllocator>::TempString(&vEffectname);
    DispatchParticleEffect(v14, v18, pos, 0, 0, -1);
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vEffectname);
  for ( j = IPredictionSystem::g_pPredictionSystems; j != 0; j = j->m_pNextSystem )
    --j->m_nStatusPushed;
LABEL_22:
  CVariantBase<CVariantDefaultAllocator>::Free(&vEffectname);
  CVariantBase<CVariantDefaultAllocator>::Free(&rval);
  return v6;
}


// Script_StopEffect  (line 2725, @0x0000000001f310f0, libserver.so)  // inlines: CDisablePredictionFiltering, HScriptToEntity<CBaseEntity>, Pop, Push, ToEnt, _Pop, _Push, ~CDisablePredictionFiltering
// calls: GetScriptDesc<CEntityInstance>, StopParticleEffect, _Unwind_Resume
// globals: g_pScriptVM
void __fastcall Script_StopEffect(HSCRIPT hEntity, const char *pEffectName)
{
  CBaseEntity *v4; // rdi
  __int64 (__fastcall *v5)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  IPredictionSystem *i; // rdx
  IPredictionSystem *j; // rax

  v4 = 0;
  if ( hEntity != 0 )
  {
    v5 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v4 = v5(g_pScriptVM, hEntity, Script);
  }
  for ( i = IPredictionSystem::g_pPredictionSystems; i != 0; i = i->m_pNextSystem )
    ++i->m_nStatusPushed;
  StopParticleEffect(v4, pEffectName);
  for ( j = IPredictionSystem::g_pPredictionSystems; j != 0; j = j->m_pNextSystem )
    --j->m_nStatusPushed;
}


// CreateDamageInfo  (line 2739, @0x0000000001f30670, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, operator new, CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::GetHScript, operator delete, _Unwind_Resume
// globals: g_pScriptVM
HSCRIPT __fastcall CreateDamageInfo(
        HSCRIPT hInflictor,
        HSCRIPT hAttacker,
        int nDamageType,
        double a4,
        vec_t a5,
        double a6,
        vec_t a7,
        float a8,
        float flDamage)
{
  __int64 (__fastcall *v12)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v14; // r12
  __int64 (__fastcall *v15)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *v16; // rax
  CBaseEntity *v17; // r14
  CTakeDamageInfo *v18; // rbx
  Vector vecPositiona; // [rsp+20h] [rbp-40h] BYREF
  Vector vecForcea; // [rsp+30h] [rbp-30h] BYREF

  *&vecForcea.x = a4;
  vecForcea.z = a5;
  *&vecPositiona.x = a6;
  vecPositiona.z = a7;
  if ( hInflictor != 0 )
  {
    v12 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v14 = v12(g_pScriptVM, hInflictor, Script);
  }
  else
  {
    v14 = 0;
  }
  if ( hAttacker != 0 )
  {
    v15 = *(*g_pScriptVM + 208LL);
    v16 = GetScriptDesc<CEntityInstance>(0);
    v17 = v15(g_pScriptVM, hAttacker, v16);
  }
  else
  {
    v17 = 0;
  }
  v18 = operator new(0x90u);
  CTakeDamageInfo::CTakeDamageInfo(v18, v14, v17, &vecForcea, &vecPositiona, a8, nDamageType, 0, 0);
  return CTakeDamageInfo::GetHScript(v18);
}


// DestroyDamageInfo  (line 2744, @0x0000000001f2b900, libserver.so)
// calls: GetScriptDesc<CTakeDamageInfo>, CTakeDamageInfo::~CTakeDamageInfo, operator delete
// globals: g_pScriptVM
void __fastcall DestroyDamageInfo(HSCRIPT hInfo)
{
  __int64 (__fastcall *v2)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  CTakeDamageInfo *v4; // rax
  CTakeDamageInfo *v5; // rbx

  v2 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CTakeDamageInfo>(0);
  v4 = v2(g_pScriptVM, hInfo, Script);
  v5 = v4;
  if ( v4 != 0 )
  {
    CTakeDamageInfo::~CTakeDamageInfo(v4);
    operator delete(v5);
  }
}


// Script_GetFrameCount  (line 2774, @0x0000000001f2a670, libserver.so)
int __cdecl Script_GetFrameCount()
{
  return gpGlobals->framecount;
}


// Script_Remove  (line 2783, @0x0000000001f2fff0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, UTIL_Remove
// globals: g_pScriptVM
void __fastcall Script_Remove(HSCRIPT hEntity)
{
  __int64 (__fastcall *v2)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  CEntityInstance *v4; // rdi

  if ( hEntity != 0 )
  {
    v2 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v4 = v2(g_pScriptVM, hEntity, Script);
    UTIL_Remove(v4);
  }
  else
  {
    UTIL_Remove(0);
  }
}


// Script_RemoveImmediate  (line 2788, @0x0000000001f30040, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, UTIL_RemoveImmediate
// globals: g_pScriptVM
void __fastcall Script_RemoveImmediate(HSCRIPT hEntity)
{
  __int64 (__fastcall *v2)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  CEntityInstance *v4; // rdi

  if ( hEntity != 0 )
  {
    v2 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v4 = v2(g_pScriptVM, hEntity, Script);
    UTIL_RemoveImmediate(v4);
  }
  else
  {
    UTIL_RemoveImmediate(0);
  }
}


// CreateTriggerInternal  (line 2796, @0x0000000001f44ef0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<<anonymous enum> >, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddKeyValue<bool>, AddToTail, Allocate<QAngle>, Allocate<Vector>, Base, CCollisionAttributeWriter, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CNetworkVarBase, CUtlString, CVProfScope, Compare, CopyData<QAngle>, CopyData<Vector>, DisableInteractsWith, Element, EnableInteractsWith, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetForModify, GetInstance, GetSerialNumber, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, NetworkStateChanged, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetValue, SetValue<<anonymous enum> >, SetValue<QAngle>, SetValue<Vector>, SetValue<bool>, SetWorldTransform, Spawn, VPhysicsCollisionAttribute_t, operator CEntityInstance*, operator CTriggerMultiple*, operator!, operator(), operator=, operator[], ~CCollisionAttributeWriter, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CVProfile::ExitScope, CCollisionProperty::SetupPhysicsFromUnscaledAABB (24 total)
// callers: Script_CreateTrigger, Script_CreateTriggerRadiusApproximate
// strings: "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
CTriggerMultiple *__fastcall CreateTriggerInternal(
        const Vector *const vecOrigin,
        const Vector *const vecMin,
        const Vector *const vecMax)
{
  CEntitySystem *v4; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v6; // rdx
  char v7; // al
  CEntityClass *ClassByDesignName; // rax
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int m_enabled; // edx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v12; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v14; // r14
  CEntityIdentity *m_pEntity; // rax
  __int16 v16; // si
  CEntitySpawnerContext<CTriggerMultiple> *m_pContext; // rbx
  CEntityKeyValues *i; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v21; // rdi
  CEntityIdentity *v22; // rax
  CTriggerMultiple *m_pInstance; // r14
  CEntityIdentity *v24; // rax
  unsigned __int64 m_Value; // rax
  unsigned __int64 v26; // rax
  CCollisionProperty *m_pCollisionProp; // rbx
  CUtlScratchMemoryPool *v28; // rdi
  CEntityKeyValues *v29; // rbx
  const char *m_pszClassname; // rdx
  CCollisionProperty *v33; // rbx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v35; // cx
  __int64 v36; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v37; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int64 v41; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v42; // rax
  __int64 v43; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // r15
  uint16 m_flags; // ax
  vec_t *v46; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v47; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rbx
  int v51; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v52; // cx
  __int64 v53; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v54; // rdx
  __int16 v55; // r14
  unsigned __int64 v56; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v57; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v58; // rax
  __int64 v59; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v60; // r14
  uint16 v61; // ax
  QAngle *v62; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v63; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v64; // rdx
  __int64 v65; // rax
  int v66; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v67; // cx
  __int64 v68; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v69; // rdx
  __int16 v70; // r14
  unsigned __int64 v71; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v72; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v73; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v74; // rax
  uint16 v75; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v76; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rcx
  int v80; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v81; // cx
  __int64 v82; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v83; // rdx
  __int16 v84; // r14
  unsigned __int64 v85; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v86; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v87; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v88; // rax
  uint16 v89; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v90; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int16 v94; // ax
  __int16 v95; // ax
  __int16 v96; // ax
  vec_t *v97; // rax
  __int64 v98; // rbx
  __int16 v99; // ax
  QAngle *v100; // rax
  bool v101; // [rsp+18h] [rbp-148h]
  __int64 v102; // [rsp+18h] [rbp-148h]
  int v105; // [rsp+30h] [rbp-130h]
  _QWORD v106[2]; // [rsp+40h] [rbp-120h] BYREF
  CCollisionAttributeWriter<RnCollisionAttr_t> writer; // [rsp+50h] [rbp-110h] BYREF
  CEntitySpawner<CTriggerMultiple> spawner; // [rsp+90h] [rbp-D0h] BYREF

  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_3FCECD0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v4 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v4->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v4);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v6 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v6;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCTriggerMultipleClass;
  if ( g_pApplication != 0 )
    v7 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v7 = 0;
  spawner.m_bValidateKeys = v7;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "trigger_multiple");
  ClassByDesignName = CEntitySystem::FindClassByDesignName(
                        g_pEntitySystem,
                        "trigger_multiple",
                        &spawner.m_scriptClassName);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  spawner.m_pEntityClass = ClassByDesignName;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_95:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( m_nAllocated != 0 )
    {
      if ( m_nAllocated <= 9 )
        m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    v41 = (m_pEntityKeyValues->m_keyHashes.m_nCount - 1);
    m_pElements[v41] = -467664362;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v42 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v42 = 0;
    v43 = 24 * v41;
    v44 = &v42[v41];
    v102 = v43;
    m_flags = v44->m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v44->m_value.m_flags = m_flags & 0xFFFE;
    v44->m_value.m_uint64 = 0;
    v44->m_value.m_type = 3;
    v46 = CEntityVariantAllocator::Allocate(0xCu);
    v44->m_value.m_uint64 = v46;
    *v46 = vecOrigin->x;
    v46[1] = vecOrigin->y;
    v46[2] = vecOrigin->z;
    v44->m_value.m_flags |= 1u;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v47 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v47 = 0;
    *(&v47->m_pAttributeName + v102) = 0;
  }
  else
  {
    v35 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v36 = 0;
    while ( 1 )
    {
      if ( v35 != 0 )
      {
        v37 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v35 > 9 )
          v37 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v37 = 0;
      }
      if ( v37[v36] == -467664362 )
        break;
      if ( m_nCount <= ++v36 )
        goto LABEL_95;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v48 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v49 = v36;
      v50 = &v48[v49];
      if ( v48[v49].m_pAttributeName != 0 )
      {
LABEL_107:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v48[v49].m_pAttributeName);
        goto LABEL_108;
      }
    }
    else
    {
      v49 = v36;
      v48 = 0;
      v50 = v49 * 24;
      if ( *(v49 * 24 + 16) != 0 )
        goto LABEL_107;
    }
    v96 = *(v50 + 10);
    if ( (v96 & 1) != 0 )
      *(v50 + 10) = v96 & 0xFFFE;
    *v50 = 0;
    *(v50 + 8) = 3;
    v97 = CEntityVariantAllocator::Allocate(0xCu);
    *v50 = v97;
    *v97 = vecOrigin->x;
    v97[1] = vecOrigin->y;
    v97[2] = vecOrigin->z;
    *(v50 + 10) |= 1u;
  }
LABEL_108:
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  v51 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v51 <= 0 )
  {
LABEL_117:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v55 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    v56 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( v56 != 0 )
    {
      if ( v56 <= 9 )
        v57 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        v57 = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v57 = 0;
    }
    v57[v55] = -1164387633;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v58 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v58 = 0;
    v59 = v55;
    v60 = &v58[v59];
    v61 = v58[v59].m_value.m_flags;
    if ( (v61 & 1) != 0 )
      v60->m_value.m_flags = v61 & 0xFFFE;
    v60->m_value.m_uint64 = 0;
    v60->m_value.m_type = 39;
    v62 = CEntityVariantAllocator::Allocate(0xCu);
    v60->m_value.m_uint64 = v62;
    *v62 = vec3_angle;
    v60->m_value.m_flags |= 1u;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v63 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v63 = 0;
    v63[v59].m_pAttributeName = 0;
  }
  else
  {
    v52 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v53 = 0;
    while ( 1 )
    {
      if ( v52 != 0 )
      {
        v54 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v52 > 9 )
          v54 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v54 = 0;
      }
      if ( v54[v53] == -1164387633 )
        break;
      if ( v51 <= ++v53 )
        goto LABEL_117;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v64 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v65 = v53;
      if ( v64[v65].m_pAttributeName != 0 )
      {
LABEL_129:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v64[v65].m_pAttributeName);
        goto LABEL_130;
      }
      v98 = &v64[v65];
    }
    else
    {
      v65 = v53;
      v64 = 0;
      v98 = v65 * 24;
      if ( *(v65 * 24 + 16) != 0 )
        goto LABEL_129;
    }
    v99 = *(v98 + 10);
    if ( (v99 & 1) != 0 )
      *(v98 + 10) = v99 & 0xFFFE;
    *v98 = 0;
    *(v98 + 8) = 39;
    v100 = CEntityVariantAllocator::Allocate(0xCu);
    *v98 = v100;
    *v100 = vec3_angle;
    *(v98 + 10) |= 1u;
  }
LABEL_130:
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  v66 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v66 <= 0 )
  {
LABEL_139:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v70 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    v71 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( v71 != 0 )
    {
      if ( v71 <= 9 )
        v72 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        v72 = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v72 = 0;
    }
    v72[v70] = 1775824117;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v73 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v73 = 0;
    v74 = &v73[v70];
    v75 = v74->m_value.m_flags;
    if ( (v75 & 1) != 0 )
      v74->m_value.m_flags = v75 & 0xFFFE;
    v74->m_value.m_uint64 = 0;
    v74->m_value.m_type = 5;
    v74->m_value.m_int = 1;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v76 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v76 = 0;
    v76[v70].m_pAttributeName = 0;
  }
  else
  {
    v67 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v68 = 0;
    while ( 1 )
    {
      if ( v67 != 0 )
      {
        v69 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v67 > 9 )
          v69 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v69 = 0;
      }
      if ( v69[v68] == 1775824117 )
        break;
      if ( v66 <= ++v68 )
        goto LABEL_139;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v77 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v78 = v68;
      v79 = &v77[v78];
      if ( v77[v78].m_pAttributeName != 0 )
      {
LABEL_151:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v77[v78].m_pAttributeName);
        goto LABEL_152;
      }
    }
    else
    {
      v78 = v68;
      v77 = 0;
      v79 = v78 * 24;
      if ( *(v78 * 24 + 16) != 0 )
        goto LABEL_151;
    }
    v94 = *(v79 + 10);
    if ( (v94 & 1) != 0 )
      *(v79 + 10) = v94 & 0xFFFE;
    *v79 = 0;
    *(v79 + 8) = 5;
    *v79 = 1;
  }
LABEL_152:
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    v80 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v80 <= 0 )
    {
LABEL_161:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v84 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      v85 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( v85 != 0 )
      {
        if ( v85 <= 9 )
          v86 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          v86 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v86 = 0;
      }
      v86[v84] = 250836765;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v87 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v87 = 0;
      v88 = &v87[v84];
      v89 = v88->m_value.m_flags;
      if ( (v89 & 1) != 0 )
        v88->m_value.m_flags = v89 & 0xFFFE;
      v88->m_value.m_uint64 = 0;
      v88->m_value.m_type = 6;
      v88->m_value.m_char = 1;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v90 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v90 = 0;
      v90[v84].m_pAttributeName = 0;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
LABEL_175:
      v105 = -1;
      m_pInstance = 0;
      if ( m_pEntityKeyValues == 0 )
        goto LABEL_28;
      goto LABEL_5;
    }
    v81 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v82 = 0;
    while ( 1 )
    {
      if ( v81 != 0 )
      {
        v83 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v81 > 9 )
          v83 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v83 = 0;
      }
      if ( v83[v82] == 250836765 )
        break;
      if ( v80 <= ++v82 )
        goto LABEL_161;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v91 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v92 = v82;
      v93 = &v91[v92];
      if ( v91[v92].m_pAttributeName != 0 )
      {
LABEL_173:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v91[v92].m_pAttributeName);
LABEL_174:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_175;
      }
    }
    else
    {
      v92 = v82;
      v91 = 0;
      v93 = v92 * 24;
      if ( *(v92 * 24 + 16) != 0 )
        goto LABEL_173;
    }
    v95 = *(v93 + 10);
    if ( (v95 & 1) != 0 )
      *(v93 + 10) = v95 & 0xFFFE;
    *v93 = 0;
    *(v93 + 8) = 6;
    *v93 = 1;
    goto LABEL_174;
  }
LABEL_4:
  v105 = -1;
LABEL_5:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v101 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v12 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v12,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v14 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v105 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
    }
    v106[0] = m_pEntity;
    v106[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v106,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v14, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v21 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v21 - 1);
        (pfn)(v21, v14, i);
      }
    }
  }
  if ( v101 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  if ( (v105 + 2) > 1 && (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v105 >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    v24 = &v22[v105 & 0x1FF];
    if ( v24 != 0 && v24->m_EHandle.m_Index == v105 )
      m_pInstance = v24->m_pInstance;
  }
  else
  {
    m_pInstance = 0;
  }
LABEL_28:
  CCollisionProperty::SetupPhysicsFromUnscaledAABB(
    &m_pInstance->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    2,
    vecMin,
    vecMax);
  writer.m_pCollisionProp = &m_pInstance->m_Collision;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  m_Value = m_pInstance->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  if ( m_Value != 0 )
    writer.m_OriginalState.m_nInteractsAs.m_Value = m_Value;
  v26 = m_pInstance->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
  if ( v26 != 0 )
  {
    writer.m_OriginalState.m_nInteractsWith.m_Value = m_pInstance->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
    v26 = writer.m_OriginalState.m_nInteractsExclude.m_Value;
  }
  if ( m_pInstance->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value != v26 )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nInteractsExclude.m_Value = m_pInstance->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value;
  }
  if ( writer.m_OriginalState.m_nEntityId.m_Value != m_pInstance->m_Collision.m_collisionAttribute.m_nEntityId.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nEntityId.m_Value = m_pInstance->m_Collision.m_collisionAttribute.m_nEntityId.m_Value;
  }
  if ( writer.m_OriginalState.m_nHierarchyId.m_Value != m_pInstance->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nHierarchyId.m_Value = m_pInstance->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value;
  }
  if ( writer.m_OriginalState.m_nCollisionGroup.m_Value != m_pInstance->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nCollisionGroup.m_Value = m_pInstance->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value;
  }
  if ( writer.m_OriginalState.m_nCollisionFunctionMask.m_Value != m_pInstance->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      39,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nCollisionFunctionMask.m_Value = m_pInstance->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  }
  m_pCollisionProp = writer.m_pCollisionProp;
  writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value = writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value
                                                                         & 0xFFFFFFFFFFF1FFFFLL
                                                                         | 0xC0000;
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( !writer.m_bReleased )
    {
      v33 = writer.m_pCollisionProp;
      writer.m_bReleased = 1;
      if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
        (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &writer.m_pCollisionProp->m_collisionAttribute,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( v33->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
        (*(v33->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &v33->m_collisionAttribute,
          16,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( v33->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
        (*(v33->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &v33->m_collisionAttribute,
          24,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( v33->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
        (*(v33->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &v33->m_collisionAttribute,
          32,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( v33->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
        (*(v33->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &v33->m_collisionAttribute,
          36,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( v33->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
        (*(v33->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &v33->m_collisionAttribute,
          38,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( v33->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
        (*(v33->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &v33->m_collisionAttribute,
          39,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
    }
  }
  v28 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_3FCECB0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v28 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v28);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v29 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v29);
      operator delete(v29);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return m_pInstance;
}


// Script_CreateTrigger  (line 2818, @0x0000000001f46110, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CreateTriggerInternal, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall Script_CreateTrigger(
        const Vector *const vecOrigin,
        const Vector *const vecMin,
        const Vector *const vecMax)
{
  CTriggerMultiple *TriggerInternal; // rax
  CTriggerMultiple *pTriggerEnt; // [rsp+8h] [rbp-8h]

  TriggerInternal = CreateTriggerInternal(vecOrigin, vecMin, vecMax);
  if ( TriggerInternal == 0 )
    return 0;
  if ( TriggerInternal->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return TriggerInternal->m_pEntity->m_hPublicScope.m_hScope;
  pTriggerEnt = TriggerInternal;
  CEntityInstance::CreatePublicScriptScope(TriggerInternal, 0);
  return pTriggerEnt->m_pEntity->m_hPublicScope.m_hScope;
}


// Script_CreateTriggerRadiusApproximate  (line 2826, @0x0000000001f46160, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddKeyValue<float>, AddRef, AddToTail, Allocate<QAngle>, Allocate<Vector>, ApplyContextKeys, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, CopyData<QAngle>, CopyData<Vector>, Element, EntityToHScript, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, GetSerialNumber, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, IsValid, LookupEntity, OverrideAllocator, Release, Set, SetClassName, SetValue, SetValue<QAngle>, SetValue<Vector>, SetValue<float>, SetWorldTransform, Spawn, SpawnAndStartNewEntity, StartNewEntity, ToHScript, Vector, operator CEntityInstance*, operator!, operator(), operator=, operator[], ~CEntitySpawner, ~CVProfScope
// calls: CreateTriggerInternal, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CVProfile::ExitScope (27 total)
// strings: "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
HSCRIPT __fastcall Script_CreateTriggerRadiusApproximate(const Vector *const vecOrigin, vec_t a2, float flRadius)
{
  CTriggerMultiple *v3; // rax
  CTriggerMultiple *v4; // r15
  CEntitySystem *v5; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v7; // rdx
  char v8; // al
  CEntityClass *ClassByDesignName; // rax
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int m_enabled; // ecx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v13; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v15; // si
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v19; // rdi
  bool v20; // cc
  CEntityKeyValues *v21; // rbx
  CEntitySpawnerContext<CBaseEntity> *j; // rbx
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CEntityClass *v25; // rax
  CEntityKeyValues *v26; // rbx
  int v27; // eax
  EntityNetworkingMode_t v28; // ebx
  const char *v29; // rax
  CEntityIdentity *v30; // rax
  __int16 v31; // si
  CEntitySpawnerContext<CBaseEntity> *v32; // rbx
  detail::GenericClass *v33; // rdx
  void (*v34)(detail::GenericClass *); // rax
  _QWORD *v35; // rdi
  CEntityKeyValues *v36; // rbx
  CEntitySpawnerContext<CBaseEntity> *m; // rbx
  CEntityIdentity *v38; // rdx
  CEntityIdentity *v39; // rdx
  CEntityClass *v40; // rax
  CEntityKeyValues *v41; // rdi
  int v42; // eax
  EntityNetworkingMode_t v43; // ebx
  const char *v44; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v46; // rbx
  CEntityIdentity *v47; // rax
  __int16 v48; // si
  CEntitySpawnerContext<CBaseEntity> *v49; // r13
  detail::GenericClass *v50; // rdx
  void (*v51)(detail::GenericClass *); // rax
  _QWORD *v52; // rdi
  CEntityIdentity *v53; // rax
  CFilterMultiple *v54; // rbx
  CEntityIdentity *v55; // rax
  CEntityIdentity *v56; // rdx
  int v57; // eax
  __int16 v58; // cx
  HSCRIPT m_hScope; // rbx
  const char *m_pszClassname; // rdx
  const char *v62; // rdx
  const char *v63; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v65; // cx
  __int64 v66; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v67; // rdx
  int v68; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v69; // cx
  __int64 v70; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v71; // rdx
  __int16 v72; // r14
  unsigned __int64 v73; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v74; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v75; // rax
  __int64 v76; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v77; // r14
  uint16 v78; // ax
  vec_t *v79; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v80; // rax
  __int16 v81; // r14
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v84; // rax
  __int64 v85; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v86; // r14
  uint16 m_flags; // ax
  vec_t *v88; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v89; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rbx
  int v93; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v94; // cx
  __int64 v95; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v96; // rdx
  __int16 v97; // r14
  unsigned __int64 v98; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v99; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v100; // rax
  __int64 v101; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v102; // r14
  uint16 v103; // ax
  QAngle *v104; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v105; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v106; // rdx
  __int64 v107; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rbx
  int v111; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v112; // cx
  __int64 v113; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v114; // rdx
  __int16 v115; // r14
  unsigned __int64 v116; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v117; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v118; // rax
  __int64 v119; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v120; // r14
  uint16 v121; // ax
  QAngle *v122; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v123; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rbx
  int v127; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v128; // cx
  __int64 v129; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v130; // rdx
  __int16 v131; // r14
  unsigned __int64 v132; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v133; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v134; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v135; // rax
  uint16 v136; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v137; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rcx
  bool v141; // zf
  __int16 v142; // ax
  QAngle *v143; // rax
  __int16 v144; // ax
  vec_t *v145; // rax
  __int16 v146; // ax
  vec_t *v147; // rax
  __int16 v148; // ax
  __int64 v149; // rbx
  __int16 v150; // ax
  QAngle *v151; // rax
  bool vecOriginb; // [rsp+20h] [rbp-170h]
  bool vecOriginc; // [rsp+20h] [rbp-170h]
  bool pFilter; // [rsp+28h] [rbp-168h]
  CBaseFilter *pFiltera; // [rsp+28h] [rbp-168h]
  CBaseFilter *i; // [rsp+30h] [rbp-160h]
  CBaseFilter *k; // [rsp+30h] [rbp-160h]
  CBaseFilter *m_pInstance; // [rsp+30h] [rbp-160h]
  CBaseFilter *v160; // [rsp+30h] [rbp-160h]
  CBaseFilter *v161; // [rsp+30h] [rbp-160h]
  CEntityInstance *flRadiusb; // [rsp+38h] [rbp-158h]
  CEntityInstance *flRadiusc; // [rsp+38h] [rbp-158h]
  CEntityKeyValues *flRadiusd; // [rsp+38h] [rbp-158h]
  __int64 flRadiuse; // [rsp+38h] [rbp-158h]
  __int64 flRadiusf; // [rsp+38h] [rbp-158h]
  int v168; // [rsp+40h] [rbp-150h]
  int v169; // [rsp+50h] [rbp-140h]
  int v170; // [rsp+60h] [rbp-130h]
  Vector vecMin; // [rsp+70h] [rbp-120h] BYREF
  Vector vecMax; // [rsp+80h] [rbp-110h] BYREF
  _QWORD v173[2]; // [rsp+90h] [rbp-100h] BYREF
  _QWORD v174[2]; // [rsp+A0h] [rbp-F0h] BYREF
  _QWORD v175[2]; // [rsp+B0h] [rbp-E0h] BYREF
  CEntitySpawner<CBaseEntity> spawner; // [rsp+C0h] [rbp-D0h] BYREF

  vecMax.x = a2;
  vecMin.x = -a2;
  vecMin.y = -a2;
  vecMin.z = -a2;
  vecMax.y = a2;
  vecMax.z = a2;
  v3 = CreateTriggerInternal(vecOrigin, &vecMin, &vecMax);
  spawner.m_modifyScope.m_pKeyValues = 0;
  v4 = v3;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v5 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v5->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v5);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v7 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v7;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCBaseEntityClass;
  if ( g_pApplication != 0 )
    v8 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v8 = 0;
  spawner.m_bValidateKeys = v8;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, &stru_32D9EEC.m_kinematicsToUpdate.m_Size + 6);
  ClassByDesignName = CEntitySystem::FindClassByDesignName(
                        g_pEntitySystem,
                        &stru_32D9EEC.m_kinematicsToUpdate.m_Size + 6,
                        &spawner.m_scriptClassName);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  spawner.m_pEntityClass = ClassByDesignName;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_135:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v81 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( m_nAllocated != 0 )
    {
      if ( m_nAllocated <= 9 )
        m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    m_pElements[v81] = -467664362;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v84 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v84 = 0;
    v85 = v81;
    v86 = &v84[v85];
    v160 = (v85 * 24);
    m_flags = v84[v85].m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v86->m_value.m_flags = m_flags & 0xFFFE;
    v86->m_value.m_uint64 = 0;
    v86->m_value.m_type = 3;
    v88 = CEntityVariantAllocator::Allocate(0xCu);
    v86->m_value.m_uint64 = v88;
    *v88 = vecOrigin->x;
    v88[1] = vecOrigin->y;
    v88[2] = vecOrigin->z;
    v86->m_value.m_flags |= 1u;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v89 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v89 = 0;
    *(&v160->m_hPrivateScope.m_hScope + v89) = 0;
  }
  else
  {
    v65 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v66 = 0;
    while ( 1 )
    {
      if ( v65 != 0 )
      {
        v67 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v65 > 9 )
          v67 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v67 = 0;
      }
      if ( v67[v66] == -467664362 )
        break;
      if ( m_nCount <= ++v66 )
        goto LABEL_135;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v108 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v109 = v66;
      v110 = &v108[v109];
      if ( v108[v109].m_pAttributeName != 0 )
      {
LABEL_175:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v108[v109].m_pAttributeName);
        goto LABEL_176;
      }
    }
    else
    {
      v108 = 0;
      v110 = 24 * v66;
      v141 = *(&stru_10.m_Lock.gap0 + 3 * v66) == 0;
      v109 = v66;
      if ( !v141 )
        goto LABEL_175;
    }
    v146 = *(v110 + 10);
    if ( (v146 & 1) != 0 )
      *(v110 + 10) = v146 & 0xFFFE;
    *v110 = 0;
    *(v110 + 8) = 3;
    v147 = CEntityVariantAllocator::Allocate(0xCu);
    *v110 = v147;
    *v147 = vecOrigin->x;
    v147[1] = vecOrigin->y;
    v147[2] = vecOrigin->z;
    *(v110 + 10) |= 1u;
  }
LABEL_176:
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  v111 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v111 <= 0 )
  {
LABEL_185:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v115 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    v116 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( v116 != 0 )
    {
      if ( v116 <= 9 )
        v117 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        v117 = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v117 = 0;
    }
    v117[v115] = -1164387633;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v118 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v118 = 0;
    v119 = v115;
    v120 = &v118[v119];
    v161 = (v119 * 24);
    v121 = v118[v119].m_value.m_flags;
    if ( (v121 & 1) != 0 )
      v120->m_value.m_flags = v121 & 0xFFFE;
    v120->m_value.m_uint64 = 0;
    v120->m_value.m_type = 39;
    v122 = CEntityVariantAllocator::Allocate(0xCu);
    v120->m_value.m_uint64 = v122;
    *v122 = vec3_angle;
    v120->m_value.m_flags |= 1u;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v123 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v123 = 0;
    *(&v161->m_hPrivateScope.m_hScope + v123) = 0;
  }
  else
  {
    v112 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v113 = 0;
    while ( 1 )
    {
      if ( v112 != 0 )
      {
        v114 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v112 > 9 )
          v114 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v114 = 0;
      }
      if ( v114[v113] == -1164387633 )
        break;
      if ( v111 <= ++v113 )
        goto LABEL_185;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v124 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v125 = v113;
      v126 = &v124[v125];
      if ( v124[v125].m_pAttributeName != 0 )
      {
LABEL_197:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v124[v125].m_pAttributeName);
        goto LABEL_198;
      }
    }
    else
    {
      v124 = 0;
      v126 = 24 * v113;
      v141 = *(&stru_10.m_Lock.gap0 + 3 * v113) == 0;
      v125 = v113;
      if ( !v141 )
        goto LABEL_197;
    }
    v142 = *(v126 + 10);
    if ( (v142 & 1) != 0 )
      *(v126 + 10) = v142 & 0xFFFE;
    *v126 = 0;
    *(v126 + 8) = 39;
    v143 = CEntityVariantAllocator::Allocate(0xCu);
    *v126 = v143;
    *v143 = vec3_angle;
    *(v126 + 10) |= 1u;
  }
LABEL_198:
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    v127 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v127 <= 0 )
    {
LABEL_207:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v131 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      v132 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( v132 != 0 )
      {
        if ( v132 <= 9 )
          v133 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          v133 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v133 = 0;
      }
      v133[v131] = 2038620745;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v134 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v134 = 0;
      v135 = &v134[v131];
      v136 = v135->m_value.m_flags;
      if ( (v136 & 1) != 0 )
        v135->m_value.m_flags = v136 & 0xFFFE;
      v135->m_value.m_uint64 = 0;
      v135->m_value.m_type = 1;
      v135->m_value.m_float = a2;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v137 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v137 = 0;
      v137[v131].m_pAttributeName = 0;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
LABEL_221:
      v168 = -1;
      if ( m_pEntityKeyValues == 0 )
        goto LABEL_24;
      goto LABEL_5;
    }
    v128 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v129 = 0;
    while ( 1 )
    {
      if ( v128 != 0 )
      {
        v130 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v128 > 9 )
          v130 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v130 = 0;
      }
      if ( v130[v129] == 2038620745 )
        break;
      if ( v127 <= ++v129 )
        goto LABEL_207;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v138 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v139 = v129;
      v140 = &v138[v139];
      if ( v138[v139].m_pAttributeName != 0 )
      {
LABEL_219:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v138[v139].m_pAttributeName);
LABEL_220:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_221;
      }
    }
    else
    {
      v138 = 0;
      v140 = 24 * v129;
      v141 = *(&stru_10.m_Lock.gap0 + 3 * v129) == 0;
      v139 = v129;
      if ( !v141 )
        goto LABEL_219;
    }
    v148 = *(v140 + 10);
    if ( (v148 & 1) != 0 )
      *(v140 + 10) = v148 & 0xFFFE;
    *v140 = 0;
    *(v140 + 8) = 1;
    *v140 = a2;
    goto LABEL_220;
  }
LABEL_4:
  v168 = -1;
LABEL_5:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  pFilter = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v13 = CUtlString::Get(&spawner.m_scriptClassName);
  flRadiusb = CEntitySystem::CreateEntity(
                g_pEntitySystem,
                spawner.m_hSpawnGroupHandle,
                spawner.m_pEntityClass,
                v13,
                m_nMode,
                -1,
                -1,
                0,
                0);
  if ( flRadiusb != 0 )
  {
    m_pEntity = flRadiusb->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v168 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
    }
    v173[0] = flRadiusb->m_pEntity;
    v173[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v173,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, flRadiusb, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v19 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v19 - 1);
        (pfn)(v19, flRadiusb, i);
      }
    }
  }
  if ( pFilter )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
LABEL_24:
  v20 = --m_pEntityKeyValues->m_nRefCount <= 0;
  if ( v20 )
  {
    CEntityKeyValues::~CEntityKeyValues(m_pEntityKeyValues);
    operator delete(m_pEntityKeyValues);
  }
  spawner.m_pEntityKeyValues = 0;
  v21 = operator new(0x70u);
  CEntityKeyValues::CEntityKeyValues(v21);
  ++v21->m_nRefCount;
  spawner.m_pEntityKeyValues = v21;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, v21);
  for ( j = spawner.m_pContext; j != 0; j = j->m_pParent )
    CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &j->m_entityKeyValues, 0);
  pFiltera = 0;
  if ( (v168 + 2) > 1 )
  {
    v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v168 >> 9) & 0x3F];
    if ( v23 != 0 )
    {
      v24 = &v23[v168 & 0x1FF];
      if ( v24 != 0 && v168 == v24->m_EHandle.m_Index )
        pFiltera = v24->m_pInstance;
    }
  }
  CEntityKeyValues::SetValue(
    spawner.m_pEntityKeyValues,
    -971301790,
    &stru_32D9EEC.m_kinematicsToUpdate.m_Memory.m_nGrowSize + 3);
  v25 = CEntitySystem::FindClassByDesignName(
          g_pEntitySystem,
          &stru_32D9EEC.m_kinematicsToUpdate.m_Memory.m_nGrowSize + 3,
          &spawner.m_scriptClassName);
  v26 = spawner.m_pEntityKeyValues;
  spawner.m_pEntityClass = v25;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_34;
  v68 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v68 <= 0 )
  {
LABEL_125:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v72 = v26->m_keyHashes.m_nCount - 1;
    v73 = v26->m_keyHashes.m_nAllocated;
    if ( v73 != 0 )
    {
      if ( v73 <= 9 )
        v74 = (&v26->m_keyHashes.m_nAllocAllocated + 1);
      else
        v74 = v26->m_keyHashes.m_pElements;
    }
    else
    {
      v74 = 0;
    }
    v74[v72] = -467664362;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v26->m_keyValues);
    if ( v26->m_keyValues.m_nAllocated != 0 )
      v75 = v26->m_keyValues.m_pElements;
    else
      v75 = 0;
    v76 = v72;
    v77 = &v75[v76];
    flRadiuse = v76 * 24;
    v78 = v75[v76].m_value.m_flags;
    if ( (v78 & 1) != 0 )
      v77->m_value.m_flags = v78 & 0xFFFE;
    v77->m_value.m_uint64 = 0;
    v77->m_value.m_type = 3;
    v79 = CEntityVariantAllocator::Allocate(0xCu);
    v77->m_value.m_uint64 = v79;
    *v79 = vecOrigin->x;
    v79[1] = vecOrigin->y;
    v79[2] = vecOrigin->z;
    v77->m_value.m_flags |= 1u;
    if ( v26->m_keyValues.m_nAllocated != 0 )
      v80 = v26->m_keyValues.m_pElements;
    else
      v80 = 0;
    *(&v80->m_pAttributeName + flRadiuse) = 0;
  }
  else
  {
    v69 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v70 = 0;
    while ( 1 )
    {
      if ( v69 != 0 )
      {
        v71 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v69 > 9 )
          v71 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v71 = 0;
      }
      if ( v71[v70] == -467664362 )
        break;
      if ( v68 <= ++v70 )
        goto LABEL_125;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v90 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v91 = v70;
      v92 = &v90[v91];
      if ( v90[v91].m_pAttributeName != 0 )
      {
LABEL_147:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v90[v91].m_pAttributeName);
        goto LABEL_148;
      }
    }
    else
    {
      v90 = 0;
      v92 = 24 * v70;
      v141 = *(&stru_10.m_Lock.gap0 + 3 * v70) == 0;
      v91 = v70;
      if ( !v141 )
        goto LABEL_147;
    }
    v144 = *(v92 + 10);
    if ( (v144 & 1) != 0 )
      *(v92 + 10) = v144 & 0xFFFE;
    *v92 = 0;
    *(v92 + 8) = 3;
    v145 = CEntityVariantAllocator::Allocate(0xCu);
    *v92 = v145;
    *v145 = vecOrigin->x;
    v145[1] = vecOrigin->y;
    v145[2] = vecOrigin->z;
    *(v92 + 10) |= 1u;
  }
LABEL_148:
  v26 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    v93 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v93 <= 0 )
    {
LABEL_157:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v97 = v26->m_keyHashes.m_nCount - 1;
      v98 = v26->m_keyHashes.m_nAllocated;
      if ( v98 != 0 )
      {
        if ( v98 <= 9 )
          v99 = (&v26->m_keyHashes.m_nAllocAllocated + 1);
        else
          v99 = v26->m_keyHashes.m_pElements;
      }
      else
      {
        v99 = 0;
      }
      v99[v97] = -1164387633;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v26->m_keyValues);
      if ( v26->m_keyValues.m_nAllocated != 0 )
        v100 = v26->m_keyValues.m_pElements;
      else
        v100 = 0;
      v101 = v97;
      v102 = &v100[v101];
      flRadiusf = v101 * 24;
      v103 = v100[v101].m_value.m_flags;
      if ( (v103 & 1) != 0 )
        v102->m_value.m_flags = v103 & 0xFFFE;
      v102->m_value.m_uint64 = 0;
      v102->m_value.m_type = 39;
      v104 = CEntityVariantAllocator::Allocate(0xCu);
      v102->m_value.m_uint64 = v104;
      *v104 = vec3_angle;
      v102->m_value.m_flags |= 1u;
      if ( v26->m_keyValues.m_nAllocated != 0 )
        v105 = v26->m_keyValues.m_pElements;
      else
        v105 = 0;
      v26 = spawner.m_pEntityKeyValues;
      *(&v105->m_pAttributeName + flRadiusf) = 0;
LABEL_171:
      v169 = -1;
      if ( v26 == 0 )
        goto LABEL_54;
      goto LABEL_35;
    }
    v94 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v95 = 0;
    while ( 1 )
    {
      if ( v94 != 0 )
      {
        v96 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v94 > 9 )
          v96 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v96 = 0;
      }
      if ( v96[v95] == -1164387633 )
        break;
      if ( v93 <= ++v95 )
        goto LABEL_157;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v106 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v107 = v95;
      if ( v106[v107].m_pAttributeName != 0 )
      {
LABEL_169:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v106[v107].m_pAttributeName);
LABEL_170:
        v26 = spawner.m_pEntityKeyValues;
        goto LABEL_171;
      }
      v149 = &v106[v107];
    }
    else
    {
      v106 = 0;
      v149 = 24 * v95;
      v141 = *(&stru_10.m_Lock.gap0 + 3 * v95) == 0;
      v107 = v95;
      if ( !v141 )
        goto LABEL_169;
    }
    v150 = *(v149 + 10);
    if ( (v150 & 1) != 0 )
      *(v149 + 10) = v150 & 0xFFFE;
    *v149 = 0;
    *(v149 + 8) = 39;
    v151 = CEntityVariantAllocator::Allocate(0xCu);
    *v149 = v151;
    *v151 = vec3_angle;
    *(v149 + 10) |= 1u;
    goto LABEL_170;
  }
LABEL_34:
  v169 = -1;
LABEL_35:
  v27 = g_VProfCurrentProfile.m_enabled;
  vecOriginb = v27 != 0;
  if ( v27 != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
    v26 = spawner.m_pEntityKeyValues;
  }
  if ( !CEntityKeyValues::HasValue(v26, -971301790) )
  {
    v63 = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( v63 != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, v63);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  v28 = spawner.m_nMode;
  v29 = CUtlString::Get(&spawner.m_scriptClassName);
  flRadiusc = CEntitySystem::CreateEntity(
                g_pEntitySystem,
                spawner.m_hSpawnGroupHandle,
                spawner.m_pEntityClass,
                v29,
                v28,
                -1,
                -1,
                0,
                0);
  if ( flRadiusc != 0 )
  {
    v30 = flRadiusc->m_pEntity;
    if ( v30 != 0 )
    {
      v31 = 0x7FFF;
      if ( v30->m_EHandle.m_Index != -1 )
        v31 = v30->m_EHandle.m_Index & 0x7FFF;
      v169 = (((v30->m_EHandle.m_Index >> 15) - (v30->m_flags & 1)) << 15) | v31 & 0x7FFF;
    }
    v174[0] = flRadiusc->m_pEntity;
    v174[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v174,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, flRadiusc, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    v32 = spawner.m_pContext;
    for ( k = spawner.m_pEntityKeyValues; v32 != 0; v32 = v32->m_pParent )
    {
      v33 = v32->m_callback.m_Closure.m_pthis;
      v34 = v32->m_callback.m_Closure.m_pFunction.__pfn;
      if ( v33 != 0 || v34 != 0 )
      {
        v35 = (v33 + v32->m_callback.m_Closure.m_pFunction.__delta);
        if ( (v34 & 1) != 0 )
          v34 = *(v34 + *v35 - 1);
        (v34)(v35, flRadiusc, k);
      }
    }
  }
  if ( vecOriginb )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  v26 = spawner.m_pEntityKeyValues;
LABEL_54:
  v20 = --v26->m_nRefCount <= 0;
  if ( v20 )
  {
    CEntityKeyValues::~CEntityKeyValues(v26);
    operator delete(v26);
  }
  spawner.m_pEntityKeyValues = 0;
  v36 = operator new(0x70u);
  CEntityKeyValues::CEntityKeyValues(v36);
  ++v36->m_nRefCount;
  spawner.m_pEntityKeyValues = v36;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, v36);
  for ( m = spawner.m_pContext; m != 0; m = m->m_pParent )
    CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &m->m_entityKeyValues, 0);
  m_pInstance = 0;
  if ( (v169 + 2) > 1 )
  {
    v38 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v169 >> 9) & 0x3F];
    if ( v38 != 0 )
    {
      v39 = &v38[v169 & 0x1FF];
      if ( v39 != 0 && v169 == v39->m_EHandle.m_Index )
        m_pInstance = v39->m_pInstance;
    }
  }
  CEntityKeyValues::SetValue(
    spawner.m_pEntityKeyValues,
    -971301790,
    &stru_32D9EEC.m_hierarchyJointsToUpdate.m_Memory.m_pMemory + 2);
  v40 = CEntitySystem::FindClassByDesignName(
          g_pEntitySystem,
          &stru_32D9EEC.m_hierarchyJointsToUpdate.m_Memory.m_pMemory + 2,
          &spawner.m_scriptClassName);
  v41 = spawner.m_pEntityKeyValues;
  spawner.m_pEntityClass = v40;
  v170 = -1;
  if ( spawner.m_pEntityKeyValues == 0 )
    goto LABEL_105;
  v42 = g_VProfCurrentProfile.m_enabled;
  vecOriginc = v42 != 0;
  if ( v42 != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
    v41 = spawner.m_pEntityKeyValues;
  }
  if ( !CEntityKeyValues::HasValue(v41, -971301790) )
  {
    v62 = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( v62 != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, v62);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  v43 = spawner.m_nMode;
  v44 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v44,
             v43,
             -1,
             -1,
             0,
             0);
  v46 = Entity;
  if ( Entity != 0 )
  {
    v47 = Entity->m_pEntity;
    if ( v47 != 0 )
    {
      v48 = 0x7FFF;
      if ( v47->m_EHandle.m_Index != -1 )
        v48 = v47->m_EHandle.m_Index & 0x7FFF;
      v170 = (((v47->m_EHandle.m_Index >> 15) - (v47->m_flags & 1)) << 15) | v48 & 0x7FFF;
    }
    v175[0] = v47;
    v175[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v175,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v46, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    v49 = spawner.m_pContext;
    for ( flRadiusd = spawner.m_pEntityKeyValues; v49 != 0; v49 = v49->m_pParent )
    {
      v50 = v49->m_callback.m_Closure.m_pthis;
      v51 = v49->m_callback.m_Closure.m_pFunction.__pfn;
      if ( v50 != 0 || v51 != 0 )
      {
        v52 = (v50 + v49->m_callback.m_Closure.m_pFunction.__delta);
        if ( (v51 & 1) != 0 )
          v51 = *(v51 + *v52 - 1);
        (v51)(v52, v46, flRadiusd);
      }
    }
  }
  if ( vecOriginc )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  if ( (v170 + 2) > 1 && (v53 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v170 >> 9) & 0x3F]) != 0 )
  {
    v54 = 0;
    v55 = &v53[v170 & 0x1FF];
    if ( v55 != 0 && v170 == v55->m_EHandle.m_Index )
      v54 = v55->m_pInstance;
  }
  else
  {
LABEL_105:
    v54 = 0;
  }
  CFilterMultiple::AddFilter(v54, pFiltera);
  CFilterMultiple::AddFilter(v54, m_pInstance);
  if ( v54 == 0 || (v56 = v54->m_pEntity) == 0 )
  {
    v4->m_hFilter.m_Index = -1;
    m_hScope = v4->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope != 0 )
      goto LABEL_92;
LABEL_124:
    CEntityInstance::CreatePublicScriptScope(v4, 0);
    m_hScope = v4->m_pEntity->m_hPublicScope.m_hScope;
    goto LABEL_92;
  }
  v57 = (v56->m_EHandle.m_Index >> 15) - (v56->m_flags & 1);
  v58 = 0x7FFF;
  if ( v56->m_EHandle.m_Index != -1 )
    v58 = v56->m_EHandle.m_Index & 0x7FFF;
  LOWORD(v4->m_hFilter.m_Index) = v58 | v4->m_hFilter.m_Index & 0x8000;
  v4->m_hFilter.m_Index = (v57 << 15) | v4->m_hFilter.m_Index & 0x7FFF;
  m_hScope = v4->m_pEntity->m_hPublicScope.m_hScope;
  if ( m_hScope == 0 )
    goto LABEL_124;
LABEL_92:
  spawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
  CEntitySpawnerBase<CBaseEntity>::~CEntitySpawnerBase(&spawner);
  return m_hScope;
}


// DoEntFireByInstanceHandle  (line 2861, @0x0000000001f41060, libserver.so)  // inlines: CVariantBase, CopyData, FStrEq, HScriptToEntity<CBaseEntity>, SetInt, SetString, String, ToCStr, ToEnt, _V_strcmp, operator=, ~CVariantBase
// calls: GetScriptDesc<CEntityInstance>, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CServerEventQueue::AddEvent, CVariantBase<CVariantDefaultAllocator>::Free, AllocPooledString, Warning, _Unwind_Resume
// strings: "VScript error: DoEntFireByInstanceHandle was passed an invalid entity instance.\n"
// globals: g_pScriptVM
void __fastcall DoEntFireByInstanceHandle(
        HSCRIPT hTarget,
        char *pszAction,
        const char *pszValue,
        float delay,
        HSCRIPT hActivator,
        HSCRIPT hCaller)
{
  char *v9; // rbx
  char *v10; // rdi
  bool v11; // zf
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *v14; // rax
  CBaseEntity *v15; // r13
  __int64 (__fastcall *v16)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v18; // r15
  __int64 (__fastcall *v19)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *v20; // rax
  const char *m_uint64; // r15
  CBaseEntity *pCaller; // [rsp+0h] [rbp-80h]
  int v23; // [rsp+8h] [rbp-78h]
  int hActivatorb; // [rsp+10h] [rbp-70h]
  float delayb; // [rsp+1Ch] [rbp-64h]
  char *v28; // [rsp+20h] [rbp-60h]
  variant_t value; // [rsp+30h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> pDest; // [rsp+40h] [rbp-40h] BYREF
  variant_t v31; // 0:rcx.8,8:r8d.4

  v9 = "Use";
  v11 = *pszAction == 0;
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  if ( !v11 )
  {
    AllocPooledString(pszAction);
    v9 = "";
    if ( v28 != 0 )
      v9 = v28;
  }
  if ( *pszValue != 0 )
  {
    AllocPooledString(pszValue);
    m_uint64 = "";
    if ( pDest.m_uint64 != 0 )
      m_uint64 = pDest.m_uint64;
    CVariantBase<CVariantDefaultAllocator>::Free(&value);
    value.m_uint64 = m_uint64;
    value.m_type = 30;
  }
  v10 = "Use";
  v11 = v9 == "Use";
  delayb = fmaxf(0.0, delay);
  if ( v9 == "Use" )
    goto LABEL_15;
  v12 = 4;
  pszAction = v9;
  do
  {
    if ( v12 == 0 )
      break;
    v11 = *pszAction++ == *v10++;
    --v12;
  }
  while ( v11 );
  if ( v11 )
  {
LABEL_15:
    if ( value.m_type == 0 )
    {
      CVariantBase<CVariantDefaultAllocator>::Free(&value);
      value.m_int = 0;
      value.m_type = 5;
    }
  }
  if ( hTarget != 0
    && (v13 = *(*g_pScriptVM + 208LL),
        v14 = GetScriptDesc<CEntityInstance>(0),
        (v15 = v13(g_pScriptVM, hTarget, v14)) != 0) )
  {
    if ( hCaller != 0 )
    {
      v16 = *(*g_pScriptVM + 208LL);
      Script = GetScriptDesc<CEntityInstance>(0);
      v18 = v16(g_pScriptVM, hCaller, Script);
    }
    else
    {
      v18 = 0;
    }
    if ( hActivator != 0 )
    {
      v19 = *(*g_pScriptVM + 208LL);
      v20 = GetScriptDesc<CEntityInstance>(0);
      hActivatorb = v19(g_pScriptVM, hActivator, v20);
    }
    else
    {
      hActivatorb = 0;
    }
    pDest.m_type = 0;
    pDest.m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&value, &pDest);
    *&v31.m_type = hActivatorb;
    LODWORD(pCaller) = 0;
    v31.m_uint64 = &pDest;
    CServerEventQueue::AddEvent(&g_EventQueue, v15, v9, v31, delayb, v18, pCaller, v23);
    CVariantBase<CVariantDefaultAllocator>::Free(&pDest);
    CVariantBase<CVariantDefaultAllocator>::Free(&value);
  }
  else
  {
    Warning("VScript error: DoEntFireByInstanceHandle was passed an invalid entity instance.\n", pszAction);
    CVariantBase<CVariantDefaultAllocator>::Free(&value);
  }
}


// Script_UTIL_MessageTextAll  (line 2922, @0x0000000001f2b770, libserver.so)  // inlines: Color, SetColor
// calls: UTIL_MessageTextAll
void __fastcall Script_UTIL_MessageTextAll(const char *text, int r, int g, int b, int a)
{
  unsigned __int16 v5; // ax

  LOBYTE(v5) = r;
  HIBYTE(v5) = g;
  UTIL_MessageTextAll(text, ((a << 24) | (b << 16) | v5));
}


// Script_UTIL_MessageTextAll_WithContext  (line 2927, @0x0000000001f3f2f0, libserver.so)  // inlines: CVariantBase, CoerceNumeric<int>, Color, GetNumericFromScriptTable<int>, SetColor, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, UTIL_MessageTextAll_WithContext, _Unwind_Resume
// globals: g_pScriptVM, jpt_1F3F4D8, jpt_1F3F50C, jpt_1F3F53C
void __fastcall Script_UTIL_MessageTextAll_WithContext(const char *text, int r, int g, int b, int a, HSCRIPT hTable)
{
  char v6; // r15
  IScriptVM *v8; // r13
  unsigned __int64 v9; // rax
  IScriptVM *v10; // r13
  int m_float; // r14d
  unsigned __int64 v12; // rax
  IScriptVM *v13; // r13
  int m_int; // r12d
  unsigned __int64 v15; // rax
  unsigned __int16 v16; // dx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  char ga; // [rsp+10h] [rbp-60h]
  unsigned __int8 ba; // [rsp+28h] [rbp-48h]
  int nContextPlayerID; // [rsp+2Ch] [rbp-44h]
  CVariantBase<CVariantDefaultAllocator> v25; // [rsp+30h] [rbp-40h] BYREF

  v6 = r;
  ga = g;
  v8 = g_pScriptVM;
  ba = b;
  if ( hTable != 0 )
  {
    v25.m_uint64 = 0;
    v25.m_type = 0;
    v25.m_flags = 0;
    if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "player_id", &v25) != 0 )
    {
      nContextPlayerID = -1;
      v9 = (v25.m_type - 1);
      if ( v9 <= 0x24 )
      {
        v19 = 0x1302000051LL;
        if ( _bittest64(&v19, v9) )
        {
          switch ( v25.m_type )
          {
            case 1:
              nContextPlayerID = v25.m_float;
              break;
            case 5:
            case 7:
            case 0x21:
            case 0x25:
              nContextPlayerID = v25.m_int;
              break;
            case 0x22:
              nContextPlayerID = v25.m_float64;
              break;
            default:
              nContextPlayerID = 0;
              break;
          }
        }
      }
      (*(*v8 + 344LL))(v8, &v25);
    }
    else
    {
      nContextPlayerID = -1;
    }
    CVariantBase<CVariantDefaultAllocator>::Free(&v25);
    v10 = g_pScriptVM;
    v25.m_type = 0;
    v25.m_flags = 0;
    v25.m_uint64 = 0;
    if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "value", &v25) != 0 )
    {
      m_float = -1;
      v12 = (v25.m_type - 1);
      if ( v12 <= 0x24 )
      {
        v18 = 0x1302000051LL;
        if ( _bittest64(&v18, v12) )
        {
          switch ( v25.m_type )
          {
            case 1:
              m_float = v25.m_float;
              break;
            case 5:
            case 7:
            case 0x21:
            case 0x25:
              m_float = v25.m_int;
              break;
            case 0x22:
              m_float = v25.m_float64;
              break;
            default:
              m_float = 0;
              break;
          }
        }
      }
      (*(*v10 + 344LL))(v10, &v25);
    }
    else
    {
      m_float = -1;
    }
    CVariantBase<CVariantDefaultAllocator>::Free(&v25);
    v13 = g_pScriptVM;
    v25.m_type = 0;
    v25.m_flags = 0;
    v25.m_uint64 = 0;
    if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "team_id", &v25) != 0 )
    {
      m_int = -1;
      v15 = (v25.m_type - 1);
      if ( v15 <= 0x24 )
      {
        v17 = 0x1302000051LL;
        if ( _bittest64(&v17, v15) )
        {
          switch ( v25.m_type )
          {
            case 1:
              m_int = v25.m_float;
              break;
            case 5:
            case 7:
            case 0x21:
            case 0x25:
              m_int = v25.m_int;
              break;
            case 0x22:
              m_int = v25.m_float64;
              break;
            default:
              m_int = 0;
              break;
          }
        }
      }
      (*(*v13 + 344LL))(v13, &v25);
    }
    else
    {
      m_int = -1;
    }
    CVariantBase<CVariantDefaultAllocator>::Free(&v25);
  }
  else
  {
    m_float = -1;
    nContextPlayerID = -1;
    m_int = -1;
  }
  LOBYTE(v16) = v6;
  HIBYTE(v16) = ga;
  UTIL_MessageTextAll_WithContext(text, ((a << 24) | (ba << 16) | v16), nContextPlayerID, m_float, m_int);
}


// Script_UTIL_MessageText  (line 2936, @0x0000000001f2b7a0, libserver.so)  // inlines: Color, SetColor
// calls: UTIL_PlayerByIndex, UTIL_MessageText
void __fastcall Script_UTIL_MessageText(int nPlayerIndex, const char *text, int r, int g, int b, int a)
{
  char v6; // r15
  unsigned __int8 v7; // r14
  CBasePlayer *v10; // rax
  unsigned __int16 v11; // bx
  char ra; // [rsp+Ch] [rbp-34h]

  v6 = g;
  v7 = b;
  ra = r;
  v10 = UTIL_PlayerByIndex(nPlayerIndex);
  if ( v10 != 0 )
  {
    LOBYTE(v11) = ra;
    HIBYTE(v11) = v6;
    UTIL_MessageText(v10, text, ((a << 24) | (v7 << 16) | v11));
  }
}


// Script_UTIL_MessageText_WithContext  (line 2945, @0x0000000001f3ef20, libserver.so)  // inlines: CVariantBase, CoerceNumeric<int>, Color, GetNumericFromScriptTable<int>, SetColor, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, UTIL_PlayerByIndex, UTIL_MessageText_WithContext, _Unwind_Resume
// globals: g_pScriptVM, jpt_1F3F124, jpt_1F3F15C, jpt_1F3F18C
void __fastcall Script_UTIL_MessageText_WithContext(
        int nPlayerIndex,
        const char *text,
        int r,
        int g,
        int b,
        int a,
        HSCRIPT hTable)
{
  char v7; // r15
  IScriptVM *v8; // r13
  unsigned __int64 v9; // rax
  IScriptVM *v10; // r13
  int m_float; // r14d
  unsigned __int64 v12; // rax
  IScriptVM *v13; // r13
  int m_int; // r12d
  unsigned __int64 v15; // rax
  CBasePlayer *v16; // rax
  unsigned __int16 v17; // dx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int8 ba; // [rsp+Ch] [rbp-64h]
  char ga; // [rsp+10h] [rbp-60h]
  int nContextPlayerID; // [rsp+28h] [rbp-48h]
  CVariantBase<CVariantDefaultAllocator> v27; // [rsp+30h] [rbp-40h] BYREF

  v7 = r;
  ga = g;
  v8 = g_pScriptVM;
  ba = b;
  if ( hTable != 0 )
  {
    v27.m_uint64 = 0;
    v27.m_type = 0;
    v27.m_flags = 0;
    if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "player_id", &v27) != 0 )
    {
      nContextPlayerID = -1;
      v9 = (v27.m_type - 1);
      if ( v9 <= 0x24 )
      {
        v20 = 0x1302000051LL;
        if ( _bittest64(&v20, v9) )
        {
          switch ( v27.m_type )
          {
            case 1:
              nContextPlayerID = v27.m_float;
              break;
            case 5:
            case 7:
            case 0x21:
            case 0x25:
              nContextPlayerID = v27.m_int;
              break;
            case 0x22:
              nContextPlayerID = v27.m_float64;
              break;
            default:
              nContextPlayerID = 0;
              break;
          }
        }
      }
      (*(*v8 + 344LL))(v8, &v27);
    }
    else
    {
      nContextPlayerID = -1;
    }
    CVariantBase<CVariantDefaultAllocator>::Free(&v27);
    v10 = g_pScriptVM;
    v27.m_type = 0;
    v27.m_flags = 0;
    v27.m_uint64 = 0;
    if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "value", &v27) != 0 )
    {
      m_float = -1;
      v12 = (v27.m_type - 1);
      if ( v12 <= 0x24 )
      {
        v19 = 0x1302000051LL;
        if ( _bittest64(&v19, v12) )
        {
          switch ( v27.m_type )
          {
            case 1:
              m_float = v27.m_float;
              break;
            case 5:
            case 7:
            case 0x21:
            case 0x25:
              m_float = v27.m_int;
              break;
            case 0x22:
              m_float = v27.m_float64;
              break;
            default:
              m_float = 0;
              break;
          }
        }
      }
      (*(*v10 + 344LL))(v10, &v27);
    }
    else
    {
      m_float = -1;
    }
    CVariantBase<CVariantDefaultAllocator>::Free(&v27);
    v13 = g_pScriptVM;
    v27.m_type = 0;
    v27.m_flags = 0;
    v27.m_uint64 = 0;
    if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "team_id", &v27) != 0 )
    {
      m_int = -1;
      v15 = (v27.m_type - 1);
      if ( v15 <= 0x24 )
      {
        v18 = 0x1302000051LL;
        if ( _bittest64(&v18, v15) )
        {
          switch ( v27.m_type )
          {
            case 1:
              m_int = v27.m_float;
              break;
            case 5:
            case 7:
            case 0x21:
            case 0x25:
              m_int = v27.m_int;
              break;
            case 0x22:
              m_int = v27.m_float64;
              break;
            default:
              m_int = 0;
              break;
          }
        }
      }
      (*(*v13 + 344LL))(v13, &v27);
    }
    else
    {
      m_int = -1;
    }
    CVariantBase<CVariantDefaultAllocator>::Free(&v27);
  }
  else
  {
    m_float = -1;
    nContextPlayerID = -1;
    m_int = -1;
  }
  v16 = UTIL_PlayerByIndex(nPlayerIndex);
  if ( v16 != 0 )
  {
    LOBYTE(v17) = v7;
    HIBYTE(v17) = ga;
    UTIL_MessageText_WithContext(v16, text, ((a << 24) | (ba << 16) | v17), nContextPlayerID, m_float, m_int);
  }
}


// Script_UTIL_ResetMessageText  (line 2958, @0x0000000001f2b810, libserver.so)
// calls: UTIL_PlayerByIndex, UTIL_ResetMessageText
void __fastcall Script_UTIL_ResetMessageText(int nPlayerIndex)
{
  CBasePlayer *v1; // rax

  v1 = UTIL_PlayerByIndex(nPlayerIndex);
  if ( v1 != 0 )
    UTIL_ResetMessageText(v1);
}


// Script_CalcClosestPointOnEntityOBB  (line 2968, @0x0000000001f30790, libserver.so)  // inlines: Forward, HScriptToEntity<CBaseEntity>, InitFLU, Left, Normalized, OBBSize, ToEnt, Up, VectorSubtract, operator*=, operator-
// calls: GetScriptDesc<CEntityInstance>, CBaseEntity::GetAbsOrigin, CBaseEntity::EntityToWorldTransform, VectorNormalize, CalcClosestPointOnOBB
// globals: g_pScriptVM
__m128i __fastcall Script_CalcClosestPointOnEntityOBB(HSCRIPT hEntity, double a2, vec_t a3)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  const CBaseEntity *v6; // rax
  const CBaseEntity *v7; // rbx
  const Vector *AbsOrigin; // r13
  const matrix3x4_t *v9; // rax
  float v10; // xmm2_4
  float v11; // xmm0_4
  const matrix3x4_t *v12; // rax
  float v13; // xmm4_4
  float v14; // xmm0_4
  const matrix3x4_t *v15; // rax
  float v16; // xmm8_4
  float v17; // xmm0_4
  float v18; // xmm8_4
  float v19; // xmm7_4
  float x; // xmm0_4
  float y; // xmm0_4
  float *m_pCollision; // rax
  vec_t v23; // xmm0_4
  vec_t v24; // xmm2_4
  vec_t z; // eax
  __int64 v27; // [rsp+8h] [rbp-A8h]
  float v28; // [rsp+10h] [rbp-A0h]
  __int64 v29; // [rsp+14h] [rbp-9Ch]
  float v30; // [rsp+1Ch] [rbp-94h]
  Vector vPointa; // [rsp+30h] [rbp-80h] BYREF
  Vector vExtent; // [rsp+40h] [rbp-70h] BYREF
  __m128i v33; // [rsp+50h] [rbp-60h] BYREF
  matrix3x4_t xform; // [rsp+60h] [rbp-50h] BYREF

  *&vPointa.x = a2;
  vPointa.z = a3;
  if ( hEntity == 0 )
    goto LABEL_6;
  v4 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CEntityInstance>(0);
  v6 = v4(g_pScriptVM, hEntity, Script);
  v7 = v6;
  if ( v6 == 0 )
    goto LABEL_6;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v9 = CBaseEntity::EntityToWorldTransform(v7);
  v10 = v9->m_flMatVal[1][2];
  v11 = v9->m_flMatVal[0][2];
  xform.m_flMatVal[0][2] = v9->m_flMatVal[2][2];
  *&xform.m_flMatVal[0][0] = __PAIR64__(LODWORD(v10), LODWORD(v11));
  VectorNormalize(&xform);
  v27 = *&xform.m_flMatVal[0][0];
  v28 = xform.m_flMatVal[0][2];
  v12 = CBaseEntity::EntityToWorldTransform(v7);
  v13 = v12->m_flMatVal[1][1];
  v14 = v12->m_flMatVal[0][1];
  xform.m_flMatVal[0][2] = v12->m_flMatVal[2][1];
  *&xform.m_flMatVal[0][0] = __PAIR64__(LODWORD(v13), LODWORD(v14));
  VectorNormalize(&xform);
  v29 = *&xform.m_flMatVal[0][0];
  v30 = xform.m_flMatVal[0][2];
  v15 = CBaseEntity::EntityToWorldTransform(v7);
  v16 = v15->m_flMatVal[1][0];
  v17 = v15->m_flMatVal[0][0];
  xform.m_flMatVal[0][2] = v15->m_flMatVal[2][0];
  *&xform.m_flMatVal[0][0] = __PAIR64__(LODWORD(v16), LODWORD(v17));
  VectorNormalize(&xform);
  v18 = xform.m_flMatVal[0][1];
  LODWORD(xform.m_flMatVal[0][1]) = v29;
  v19 = xform.m_flMatVal[0][2];
  LODWORD(xform.m_flMatVal[0][2]) = v27;
  x = AbsOrigin->x;
  *&xform.m_flMatVal[1][0] = __PAIR64__(HIDWORD(v29), LODWORD(v18));
  xform.m_flMatVal[0][3] = x;
  xform.m_flMatVal[1][2] = *(&v27 + 1);
  y = AbsOrigin->y;
  *&xform.m_flMatVal[2][0] = __PAIR64__(LODWORD(v30), LODWORD(v19));
  xform.m_flMatVal[1][3] = y;
  xform.m_flMatVal[2][2] = v28;
  xform.m_flMatVal[2][3] = AbsOrigin->z;
  m_pCollision = v7->m_pCollision;
  if ( m_pCollision != 0 )
  {
    v23 = (m_pCollision[19] - m_pCollision[16]) * 0.5;
    v24 = (m_pCollision[17] - m_pCollision[14]) * 0.5;
    vExtent.y = (m_pCollision[18] - m_pCollision[15]) * 0.5;
    vExtent.z = v23;
    vExtent.x = v24;
    *v33.m128i_i8 = CalcClosestPointOnOBB(&xform, &vExtent, &vPointa);
  }
  else
  {
LABEL_6:
    z = vec3_origin.z;
    v33.m128i_i64[0] = *&vec3_origin.x;
    *&v33.m128i_i32[2] = z;
  }
  return _mm_loadl_epi64(&v33);
}


// Script_CalcDistanceBetweenEntityOBB  (line 2985, @0x0000000001f30a00, libserver.so)  // inlines: CGJKBoxProxy, CGJKShapeProxy, Forward, HScriptToEntity<CBaseEntity>, InitFLU, Left, Normalized, OBBSize, ToEnt, Up, VectorMultiply, VectorSubtract, operator*, operator-, operator=
// calls: GetScriptDesc<CEntityInstance>, CBaseEntity::GetAbsOrigin, CBaseEntity::EntityToWorldTransform, VectorNormalize, Distance
// globals: g_pScriptVM
float __fastcall Script_CalcDistanceBetweenEntityOBB(HSCRIPT hEntity1, HSCRIPT hEntity2)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  const CBaseEntity *v6; // r12
  __int64 (__fastcall *v7)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v8; // rax
  const CBaseEntity *v9; // rbx
  const Vector *AbsOrigin; // r14
  const matrix3x4_t *v12; // rax
  int v13; // xmm2_4
  int v14; // xmm0_4
  const matrix3x4_t *v15; // rax
  int v16; // xmm4_4
  int v17; // xmm0_4
  int *v18; // rax
  int v19; // xmm8_4
  int v20; // xmm0_4
  float x; // xmm0_4
  float *m_pCollision; // rax
  float y; // xmm0_4
  const Vector *v24; // r12
  const matrix3x4_t *v25; // rax
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // r14d
  const matrix3x4_t *v29; // rax
  float v30; // xmm7_4
  float v31; // xmm0_4
  int *v32; // rax
  int v33; // xmm11_4
  int v34; // xmm0_4
  float *v35; // rax
  float v36; // xmm0_4
  float v37; // xmm0_4
  float v38; // xmm4_4
  float v39; // xmm5_4
  float v40; // xmm0_4
  float v41; // [rsp+Ch] [rbp-1C4h]
  float v42; // [rsp+10h] [rbp-1C0h]
  int m_nVertexCount; // [rsp+18h] [rbp-1B8h]
  float v44; // [rsp+18h] [rbp-1B8h]
  float v45; // [rsp+1Ch] [rbp-1B4h]
  __int64 v46; // [rsp+1Ch] [rbp-1B4h]
  float v47; // [rsp+20h] [rbp-1B0h]
  int v48; // [rsp+24h] [rbp-1ACh]
  __int64 v49; // [rsp+24h] [rbp-1ACh]
  unsigned int v50; // [rsp+28h] [rbp-1A8h]
  unsigned int m_pVertexBuffer; // [rsp+2Ch] [rbp-1A4h]
  unsigned int v52; // [rsp+2Ch] [rbp-1A4h]
  DistanceQueryResult_t v53; // [rsp+30h] [rbp-1A0h] BYREF
  matrix3x4_t xform1; // [rsp+50h] [rbp-180h] BYREF
  matrix3x4_t xform2; // [rsp+80h] [rbp-150h] BYREF
  CGJKShapeProxy proxy1; // [rsp+B0h] [rbp-120h] BYREF
  float v57; // [rsp+C8h] [rbp-108h]
  float v58; // [rsp+CCh] [rbp-104h]
  float v59; // [rsp+D0h] [rbp-100h]
  float v60; // [rsp+D4h] [rbp-FCh]
  float v61; // [rsp+D8h] [rbp-F8h]
  float v62; // [rsp+DCh] [rbp-F4h]
  float v63; // [rsp+E0h] [rbp-F0h]
  float v64; // [rsp+E4h] [rbp-ECh]
  float v65; // [rsp+E8h] [rbp-E8h]
  float v66; // [rsp+ECh] [rbp-E4h]
  float v67; // [rsp+F0h] [rbp-E0h]
  float v68; // [rsp+F4h] [rbp-DCh]
  float v69; // [rsp+F8h] [rbp-D8h]
  float v70; // [rsp+FCh] [rbp-D4h]
  float v71; // [rsp+100h] [rbp-D0h]
  float v72; // [rsp+104h] [rbp-CCh]
  float v73; // [rsp+108h] [rbp-C8h]
  float v74; // [rsp+10Ch] [rbp-C4h]
  float v75; // [rsp+110h] [rbp-C0h]
  float v76; // [rsp+114h] [rbp-BCh]
  float v77; // [rsp+118h] [rbp-B8h]
  float v78; // [rsp+11Ch] [rbp-B4h]
  float v79; // [rsp+120h] [rbp-B0h]
  CGJKShapeProxy vec; // [rsp+130h] [rbp-A0h] BYREF
  float v81; // [rsp+148h] [rbp-88h]
  float v82; // [rsp+14Ch] [rbp-84h]
  float v83; // [rsp+150h] [rbp-80h]
  float v84; // [rsp+154h] [rbp-7Ch]
  float v85; // [rsp+158h] [rbp-78h]
  float v86; // [rsp+15Ch] [rbp-74h]
  float v87; // [rsp+160h] [rbp-70h]
  float v88; // [rsp+164h] [rbp-6Ch]
  float v89; // [rsp+168h] [rbp-68h]
  float v90; // [rsp+16Ch] [rbp-64h]
  float v91; // [rsp+170h] [rbp-60h]
  float v92; // [rsp+174h] [rbp-5Ch]
  float v93; // [rsp+178h] [rbp-58h]
  float v94; // [rsp+17Ch] [rbp-54h]
  float v95; // [rsp+180h] [rbp-50h]
  float v96; // [rsp+184h] [rbp-4Ch]
  float v97; // [rsp+188h] [rbp-48h]
  float v98; // [rsp+18Ch] [rbp-44h]
  float v99; // [rsp+190h] [rbp-40h]
  float v100; // [rsp+194h] [rbp-3Ch]
  float v101; // [rsp+198h] [rbp-38h]
  float v102; // [rsp+19Ch] [rbp-34h]
  float v103; // [rsp+1A0h] [rbp-30h]

  if ( hEntity1 != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hEntity1, Script);
  }
  else
  {
    v6 = 0;
  }
  if ( hEntity2 == 0 )
    return -1.0;
  v7 = *(*g_pScriptVM + 208LL);
  v8 = GetScriptDesc<CEntityInstance>(0);
  v9 = v7(g_pScriptVM, hEntity2, v8);
  if ( v9 == 0 )
    return -1.0;
  if ( v6 == 0 )
    return -1.0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v12 = CBaseEntity::EntityToWorldTransform(v6);
  v13 = LODWORD(v12->m_flMatVal[1][2]);
  v14 = LODWORD(v12->m_flMatVal[0][2]);
  *&vec.m_pVertexBuffer = v12->m_flMatVal[2][2];
  *(&vec.m_nVertexCount + 1) = v13;
  vec.m_nVertexCount = v14;
  VectorNormalize(&vec);
  m_nVertexCount = vec.m_nVertexCount;
  v45 = *(&vec.m_nVertexCount + 1);
  v47 = *&vec.m_pVertexBuffer;
  v15 = CBaseEntity::EntityToWorldTransform(v6);
  v16 = LODWORD(v15->m_flMatVal[1][1]);
  v17 = LODWORD(v15->m_flMatVal[0][1]);
  *&vec.m_pVertexBuffer = v15->m_flMatVal[2][1];
  *(&vec.m_nVertexCount + 1) = v16;
  vec.m_nVertexCount = v17;
  VectorNormalize(&vec);
  v48 = vec.m_nVertexCount;
  v50 = *(&vec.m_nVertexCount + 1);
  m_pVertexBuffer = vec.m_pVertexBuffer;
  v18 = CBaseEntity::EntityToWorldTransform(v6);
  v19 = v18[4];
  v20 = *v18;
  LODWORD(vec.m_pVertexBuffer) = v18[8];
  *(&vec.m_nVertexCount + 1) = v19;
  vec.m_nVertexCount = v20;
  VectorNormalize(&vec);
  *&xform1.m_flMatVal[0][0] = __PAIR64__(v48, vec.m_nVertexCount);
  LODWORD(xform1.m_flMatVal[0][2]) = m_nVertexCount;
  x = AbsOrigin->x;
  xform1.m_flMatVal[1][2] = v45;
  xform1.m_flMatVal[0][3] = x;
  *&xform1.m_flMatVal[1][0] = __PAIR64__(v50, *(&vec.m_nVertexCount + 1));
  m_pCollision = v6->m_pCollision;
  y = AbsOrigin->y;
  xform1.m_flMatVal[2][2] = v47;
  xform1.m_flMatVal[1][3] = y;
  *&xform1.m_flMatVal[2][0] = __PAIR64__(m_pVertexBuffer, vec.m_pVertexBuffer);
  xform1.m_flMatVal[2][3] = AbsOrigin->z;
  if ( m_pCollision == 0 )
    return -1.0;
  v41 = (m_pCollision[17] - m_pCollision[14]) * 0.5;
  v42 = (m_pCollision[18] - m_pCollision[15]) * 0.5;
  v44 = (m_pCollision[19] - m_pCollision[16]) * 0.5;
  v24 = CBaseEntity::GetAbsOrigin(v9);
  v25 = CBaseEntity::EntityToWorldTransform(v9);
  v26 = v25->m_flMatVal[1][2];
  v27 = v25->m_flMatVal[0][2];
  *&vec.m_pVertexBuffer = v25->m_flMatVal[2][2];
  *&vec.m_nVertexCount = __PAIR64__(LODWORD(v26), LODWORD(v27));
  VectorNormalize(&vec);
  v28 = *&vec.m_pVertexBuffer;
  v46 = *&vec.m_nVertexCount;
  v29 = CBaseEntity::EntityToWorldTransform(v9);
  v30 = v29->m_flMatVal[1][1];
  v31 = v29->m_flMatVal[0][1];
  *&vec.m_pVertexBuffer = v29->m_flMatVal[2][1];
  *&vec.m_nVertexCount = __PAIR64__(LODWORD(v30), LODWORD(v31));
  VectorNormalize(&vec);
  v49 = *&vec.m_nVertexCount;
  v52 = vec.m_pVertexBuffer;
  v32 = CBaseEntity::EntityToWorldTransform(v9);
  v33 = v32[4];
  v34 = *v32;
  LODWORD(vec.m_pVertexBuffer) = v32[8];
  *(&vec.m_nVertexCount + 1) = v33;
  vec.m_nVertexCount = v34;
  VectorNormalize(&vec);
  *&xform2.m_flMatVal[0][0] = __PAIR64__(v49, vec.m_nVertexCount);
  LODWORD(xform2.m_flMatVal[0][2]) = v46;
  v35 = v9->m_pCollision;
  v36 = v24->x;
  xform2.m_flMatVal[1][2] = *(&v46 + 1);
  xform2.m_flMatVal[0][3] = v36;
  *&xform2.m_flMatVal[1][0] = __PAIR64__(HIDWORD(v49), *(&vec.m_nVertexCount + 1));
  v37 = v24->y;
  xform2.m_flMatVal[2][2] = v28;
  xform2.m_flMatVal[1][3] = v37;
  *&xform2.m_flMatVal[2][0] = __PAIR64__(v52, vec.m_pVertexBuffer);
  xform2.m_flMatVal[2][3] = v24->z;
  if ( v35 == 0 )
    return -1.0;
  v38 = v35[17] - v35[14];
  v39 = v35[18] - v35[15];
  v40 = v35[19] - v35[16];
  vec.m_nVertexCount = 8;
  vec.m_pVertexBuffer = (&vec.m_flScale + 1);
  vec.m_flScale = 1.0;
  *(&vec.m_flScale + 1) = v38 * 0.5;
  v81 = v39 * 0.5;
  v82 = v40 * 0.5;
  v83 = -(v38 * 0.5);
  v84 = v39 * 0.5;
  v85 = v40 * 0.5;
  v86 = v83;
  v87 = -(v39 * 0.5);
  v88 = v40 * 0.5;
  v89 = v38 * 0.5;
  v90 = v87;
  v91 = v40 * 0.5;
  v92 = v38 * 0.5;
  v93 = v39 * 0.5;
  v94 = -(v40 * 0.5);
  v95 = v83;
  v96 = v39 * 0.5;
  v97 = v94;
  v98 = v83;
  v99 = v87;
  v100 = v94;
  v101 = v38 * 0.5;
  v102 = v87;
  v103 = v94;
  proxy1.m_nVertexCount = 8;
  proxy1.m_pVertexBuffer = (&proxy1.m_flScale + 1);
  v58 = v44;
  v61 = v44;
  v63 = -v42;
  v64 = v44;
  v66 = -v42;
  v67 = v44;
  v75 = -v42;
  v78 = -v42;
  proxy1.m_flScale = 1.0;
  *(&proxy1.m_flScale + 1) = v41;
  v57 = v42;
  v59 = -v41;
  v60 = v42;
  v62 = -v41;
  v65 = v41;
  v68 = v41;
  v69 = v42;
  v70 = -v44;
  v71 = -v41;
  v72 = v42;
  v73 = -v44;
  v74 = -v41;
  v76 = -v44;
  v77 = v41;
  v79 = -v44;
  Distance(&v53, &xform1, &proxy1, &xform2, &vec, 32);
  return v53.m_flDistance;
}


// Script_CalcDistanceToLineSegment2D  (line 3010, @0x0000000001f2b840, libserver.so)
// calls: CalcDistanceToLineSegment2D
float __cdecl Script_CalcDistanceToLineSegment2D(Vector vPos, Vector vLineA, Vector vLineB)
{
  Vector vLineBa; // [rsp+0h] [rbp-30h] BYREF
  Vector vLineAa; // [rsp+10h] [rbp-20h] BYREF
  Vector vPosa; // [rsp+20h] [rbp-10h] BYREF

  vPosa = vPos;
  vLineAa = vLineA;
  vLineBa = vLineB;
  return CalcDistanceToLineSegment2D(&vPosa, &vLineAa, &vLineBa, 0);
}


// GetScriptDesc<ITestScriptMgr>  (line 3016, @0x0000000001f4b100, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Element, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<ITestScriptMgr*, ITestScriptMgr, void, char const*, char const*>, ScriptDeduceFunctionSignature<ITestScriptMgr*, ITestScriptMgr, void, char const*>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow
// callers: CVScriptGameSystem::InstallScriptBindings
// strings: "!ITestScriptMgr", "CheckPoint", "InsertCommandsBeforeCheckpoint"
// globals: g_pITestScriptMgr_ScriptDesc, CMemberScriptBinding1<ITestScriptMgr *,void (ITestScriptMgr::*)(char const*),void,char const*>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,, CMemberScriptBinding2<ITestScriptMgr *,void (ITestScriptMgr::*)(char const*,char const*),void,char const*,char const*>::Call(void *,void *,CVariantBase<CVariant
ScriptClassDesc_t *__fastcall GetScriptDesc<ITestScriptMgr>(ITestScriptMgr *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  ScriptFunctionBinding_t *m_pMemory; // rcx
  int8 m_nNumParameters; // dl
  __int64 v5; // rax
  int v6; // edx
  char v7; // si
  char v8; // di
  __int64 m_Size; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // dl
  char v13; // cl
  int v14; // edx
  char v15; // cl
  char v16; // di

  result = g_pITestScriptMgr_ScriptDesc;
  if ( g_pITestScriptMgr_ScriptDesc == 0 )
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
    g_pITestScriptMgr_ScriptDesc = v2;
    v2->m_pszDescription = "!ITestScriptMgr";
    v2->m_pszScriptName = "ITestScriptMgr";
    v2->m_pszClassname = "ITestScriptMgr";
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
    m_pMemory->m_desc.m_pszDescription = "";
    m_pMemory->m_desc.m_pszScriptName = "CheckPoint";
    m_pMemory->m_desc.m_pszFunction = "CheckPoint";
    v5 = m_nNumParameters++;
    m_pMemory->m_desc.m_ParameterTypes[v5] = 30;
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
    m_pMemory->m_pFunction = (&stru_10 + 81);
    m_pMemory->m_pfnBinding = CMemberScriptBinding1<ITestScriptMgr *,void (ITestScriptMgr::*)(char const*),void,char const*>::Call;
    m_pMemory->m_flags = 1;
    m_Size = v2->m_FunctionBindings.m_Size;
    if ( m_Size == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v10 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    if ( v10 != 0 )
    {
      *v10 = 0;
      *(v10 + 8) = 0;
      *(v10 + 16) = 0;
      *(v10 + 24) = 29;
      *(v10 + 25) = -1;
      *(v10 + 26) = 0;
      *(v10 + 40) = 0;
      v11 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v11 = 0;
    }
    v12 = *(v11 + 26);
    *(v11 + 24) = 0;
    *(v11 + 16) = "";
    *v11 = "InsertCommandsBeforeCheckpoint";
    *(v11 + 8) = "InsertCommandsBeforeCheckpoint";
    *(v11 + v12 + 27) = 30;
    v13 = v12 + 1;
    v12 += 2;
    *(v11 + v13 + 27) = 30;
    *(v11 + 26) = v12;
    v14 = v12 - 1;
    *(v11 + 25) = 0;
    if ( v14 >= 0 && *(v11 + v14 + 27) == 32 )
    {
      v15 = 1;
      do
      {
        --v14;
        v16 = v15;
        if ( v14 == -1 )
        {
          *(v11 + 25) = v15;
          goto LABEL_20;
        }
        ++v15;
      }
      while ( *(v11 + v14 + 27) == 32 );
      *(v11 + 25) = v16;
    }
LABEL_20:
    *(v11 + 56) = 129;
    *(v11 + 48) = CMemberScriptBinding2<ITestScriptMgr *,void (ITestScriptMgr::*)(char const*,char const*),void,char const*,char const*>::Call;
    *(v11 + 64) = 1;
    return v2;
  }
  return result;
}


// CVScriptGameSystem::CVScriptGameSystem  (line 3023, @0x0000000001f44610, libserver.so)  // inlines: CScriptAccessorT, CScriptScopeT, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVectorUltraConservative, ResetDbgInfo
// callers: CGameSystemReallocatingFactory<CDOTAVScriptGameSystem, CDOTAVScriptGameSystem>::CreateGameSystem
void __fastcall CVScriptGameSystem::CVScriptGameSystem(CVScriptGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FCECF0;  // vptr: CVScriptGameSystem
  this->_vptr_IVScriptGameSystem = off_3FCEED0;
  this->m_CompiledScriptCache.m_Tree.m_NumElements = 0;
  this->m_CompiledScriptCache.m_Tree.m_FirstFree = -1;
  this->m_RootTable.m_flags = 0;
  this->m_RootTable.m_hScope = 0;
  this->m_RootTable.m_FuncHandles.m_pData = 0;
  this->m_ScriptScopeCache.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_ScriptScopeCache.m_Tree.m_Elements.m_pMemory = 0;
  this->m_ScriptScopeCache.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_ScriptScopeCache.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_ScriptScopeCache.m_Tree.m_Root = -1;
  this->m_ScriptScopeCache.m_Tree.m_NumElements = 0;
  this->m_ScriptScopeCache.m_Tree.m_FirstFree = -1;
  this->m_ScriptScopeCache.m_Tree.m_LastAlloc.index = -1;
  this->m_ScriptScopeCache.m_Tree.m_pElements = 0;
  this->m_CompiledScriptCache.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_CompiledScriptCache.m_Tree.m_Elements.m_pMemory = 0;
  this->m_CompiledScriptCache.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_CompiledScriptCache.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_CompiledScriptCache.m_Tree.m_Root = -1;
  this->m_CompiledScriptCache.m_Tree.m_LastAlloc.index = -1;
  this->m_CompiledScriptCache.m_Tree.m_pElements = 0;
  this->m_bVscriptServerInitialized = 0;
}


// CVScriptGameSystem::InstallScriptBindings  (line 3028, @0x0000000001f4b3a0, libserver.so)  // inlines: ActivityList_HighestIndex, ActivityList_NameForIndex, AddParameterType, CUtlString, CVariantBase, CopyData<Vector>, GetNameByToken, Max<unsigned int>, RegisterInstance<CScriptConvarAccessor>, RegisterInstance<CScriptEntityIterator>, RegisterInstance<CScriptGlobalSysAccessor>, RegisterInstance<ITestScriptMgr>, RemoveAllParameters, ScriptDeduceFunctionSignature<CVariantBase<CVariantDefaultAllocator>, char const*>, ScriptDeduceFunctionSignature<HSCRIPT__*, HSCRIPT__*, HSCRIPT__*, Vector, Vector, float, int>, ScriptDeduceFunctionSignature<HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<HSCRIPT__*, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<HSCRIPT__*, const Vector&, const Vector&, const Vector&>, ScriptDeduceFunctionSignature<HSCRIPT__*, const Vector&, float>, ScriptDeduceFunctionSignature<HSCRIPT__*, int>, ScriptDeduceFunctionSignature<HSCRIPT__*>, ScriptDeduceFunctionSignature<QAngle, QAngle, QAngle>, ScriptDeduceFunctionSignature<QAngle, Vector>, ScriptDeduceFunctionSignature<Quaternion, const Quaternion&, const Quaternion&, float>, ScriptDeduceFunctionSignature<Quaternion, const Quaternion&, const Vector&, float>, ScriptDeduceFunctionSignature<Quaternion, const Vector&, float>, ScriptDeduceFunctionSignature<Vector, HSCRIPT__*, Vector>, ScriptDeduceFunctionSignature<Vector, const QAngle&, const QAngle&>, ScriptDeduceFunctionSignature<Vector, const Vector&, const Vector&, float>, ScriptDeduceFunctionSignature<bool, HSCRIPT__*, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<bool, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<bool, HSCRIPT__*, bool, HSCRIPT__*>, ScriptDeduceFunctionSignature<bool, HSCRIPT__*>, ScriptDeduceFunctionSignature<bool, char const*, float>, ScriptDeduceFunctionSignature<bool, int>, ScriptDeduceFunctionSignature<bool>, ScriptDeduceFunctionSignature<char const*, char const*>, ScriptDeduceFunctionSignature<char const*>, ScriptDeduceFunctionSignature<const Vector&, HSCRIPT__*>, ScriptDeduceFunctionSignature<const Vector&, Vector, QAngle, Vector>, ScriptDeduceFunctionSignature<float, CEntityHandle, char const*>, ScriptDeduceFunctionSignature<float, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<float, Vector, Vector, Vector>, ScriptDeduceFunctionSignature<float, char const*>, ScriptDeduceFunctionSignature<float, float, float, float>, ScriptDeduceFunctionSignature<float, float, float>, ScriptDeduceFunctionSignature<float>, ScriptDeduceFunctionSignature<int, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<int, char const*, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<int, int, int>, ScriptDeduceFunctionSignature<int>, ScriptDeduceFunctionSignature<void, CEntityHandle, bool>, ScriptDeduceFunctionSignature<void, CEntityHandle, char const*, char const*>, ScriptDeduceFunctionSignature<void, CEntityHandle, char const*, const Vector&>, ScriptDeduceFunctionSignature<void, CEntityHandle, char const*>, ScriptDeduceFunctionSignature<void, CEntityHandle>, ScriptDeduceFunctionSignature<void, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, HSCRIPT__*, char const*, bool>, ScriptDeduceFunctionSignature<void, HSCRIPT__*, char const*, char const*, float, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, HSCRIPT__*, char const*>, ScriptDeduceFunctionSignature<void, HSCRIPT__*, const Vector&>, ScriptDeduceFunctionSignature<void, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, Vector, Vector, Vector, Vector, Vector, float, float>, ScriptDeduceFunctionSignature<void, Vector, Vector, Vector, bool, float>, ScriptDeduceFunctionSignature<void, Vector, Vector, float, float, bool, float>, ScriptDeduceFunctionSignature<void, bool, char const*>, ScriptDeduceFunctionSignature<void, char const*, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, char const*, Vector>, ScriptDeduceFunctionSignature<void, char const*, char const*, char const*, float, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, char const*, char const*, char const*, float, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, char const*, char const*, char const*, float>, ScriptDeduceFunctionSignature<void, char const*, char const*>, ScriptDeduceFunctionSignature<void, char const*, int, int, int, int, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, char const*, int, int, int, int>, ScriptDeduceFunctionSignature<void, char const*>, ScriptDeduceFunctionSignature<void, const Vector&, char const*, bool, float>, ScriptDeduceFunctionSignature<void, const Vector&, const Vector&, const Vector&, int, int, int, int, float>, ScriptDeduceFunctionSignature<void, const Vector&, const Vector&, int, int, int, bool, float>, ScriptDeduceFunctionSignature<void, const Vector&, float, float, float, float, int, bool>, ScriptDeduceFunctionSignature<void, float, float, int, char const*, int, int, int, int, float, char const*, int, bool>, ScriptDeduceFunctionSignature<void, float, float, int, char const*, int, int, int, int, float>, ScriptDeduceFunctionSignature<void, int, char const*, int, int, int, int, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, int, char const*, int, int, int, int>, ScriptDeduceFunctionSignature<void, int>, ScriptDeduceFunctionSignature<void>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, SetValue, String, ~CUtlString, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, EventList_HighestIndex, EventList_NameForIndex, CTakeDamageInfo::DebugGetDamageTypeString, V_StripTrailingWhitespace, V_sprintf_safe<128ul>, GetScriptDesc<CBaseEntity>, GetScriptDesc<CScriptEntityIterator>, GetScriptDesc<CScriptConvarAccessor>, GetScriptDesc<CScriptGlobalSysAccessor>, Plat_IsInTestMode, GetScriptDesc<ITestScriptMgr> (20 total)
// callers: CDOTAVScriptGameSystem::InstallScriptBindings
// strings: "DMG_%s", "Get the time spent on the server in the last frame", "Get a random int within a range", "Get a random float within a range", "Create all I/O events for a particular entity", "CancelEntityIOEvents" (40 total)
// globals: g_pScriptVM, g_WeaponSoundCategories, tokenset_t<WeaponSound_t>::GetNameByToken(WeaponSound_t)::unknown, `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding, CVScriptGameSystem::InstallScriptBindings(void)::binding, CNonMemberScriptBinding0<float (*)(void),float>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantDefaultAllocator> *), FrameTime(void), CNonMemberScriptBinding2<int (*)(int,int),int,int,int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantDefaultAllocator> * (22 total)
void __fastcall CVScriptGameSystem::InstallScriptBindings(CVScriptGameSystem *const this)
{
  int v1; // r14d
  unsigned int i; // ebx
  __int64 v3; // rax
  int v4; // ebx
  AnimEventIndex_t v5; // r13d
  const char *v6; // rax
  unsigned int v7; // ebx
  int j; // ebx
  char *name; // rsi
  tokenset_t<WeaponSound_t> *v10; // rax
  void (__fastcall *v11)(IScriptVM *, ScriptClassDesc_t *); // rbx
  ScriptClassDesc_t *Script; // rax
  IScriptVM *v13; // rbx
  __int64 (__fastcall *v14)(IScriptVM *, ScriptClassDesc_t *, CScriptEntityIterator *); // r13
  ScriptClassDesc_t *v15; // rax
  uint64 v16; // rax
  void (__fastcall *v17)(IScriptVM *, _QWORD, char *, CVariantBase<CVariantDefaultAllocator> *); // r8
  IScriptVM *v18; // rbx
  __int64 (__fastcall *v19)(IScriptVM *, ScriptClassDesc_t *, CScriptConvarAccessor *); // r13
  ScriptClassDesc_t *v20; // rax
  uint64 v21; // rax
  void (__fastcall *v22)(IScriptVM *, _QWORD, char *, CVariantBase<CVariantDefaultAllocator> *); // r8
  IScriptVM *v23; // rbx
  __int64 (__fastcall *v24)(IScriptVM *, ScriptClassDesc_t *, CScriptGlobalSysAccessor *); // r13
  ScriptClassDesc_t *v25; // rax
  uint64 v26; // rax
  void (__fastcall *v27)(IScriptVM *, _QWORD, const char *, CVariantBase<CVariantDefaultAllocator> *); // r8
  ITestScriptMgr *v28; // r13
  IScriptVM *v29; // rbx
  __int64 (__fastcall *v30)(IScriptVM *, ScriptClassDesc_t *, ITestScriptMgr *); // r14
  ScriptClassDesc_t *v31; // rax
  uint64 v32; // rax
  void (__fastcall *v33)(IScriptVM *, _QWORD, const char *, CVariantBase<CVariantDefaultAllocator> *); // r8
  const char *v34; // rax
  CUtlString s; // [rsp+0h] [rbp-150h] BYREF
  CVariantBase<CVariantDefaultAllocator> v36; // [rsp+10h] [rbp-140h] BYREF
  char damageTypeString[128]; // [rsp+20h] [rbp-130h] BYREF
  char damageTypeFlagString[128]; // [rsp+A0h] [rbp-B0h] BYREF
  unsigned __int64 v39; // [rsp+128h] [rbp-28h]

  v39 = __readfsqword(0x28u);
  if ( g_pAnimationSystem != 0 )
  {
    v1 = (*(*g_pAnimationSystem + 320LL))(g_pAnimationSystem);
    if ( v1 > 0 )
    {
      for ( i = 0; i != v1; ++i )
      {
        if ( g_pAnimationSystem != 0 )
        {
          v3 = (*(*g_pAnimationSystem + 312LL))(g_pAnimationSystem, i);
          if ( v3 != 0 )
          {
            v36.m_type = 5;
            v36.m_flags = 0;
            v36.m_int = i;
            (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, v3, &v36);
            CVariantBase<CVariantDefaultAllocator>::Free(&v36);
          }
        }
      }
    }
  }
  v4 = 0;
  v5.m_Data = EventList_HighestIndex().m_Data;
  if ( v5.m_Data > 0 )
  {
    do
    {
      v6 = EventList_NameForIndex(v4);
      if ( v6 != 0 )
      {
        v36.m_flags = 0;
        v36.m_type = 5;
        v36.m_int = v4;
        (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, v6, &v36);
        CVariantBase<CVariantDefaultAllocator>::Free(&v36);
      }
      ++v4;
    }
    while ( v4 != v5.m_Data );
  }
  v7 = 0;
  do
  {
    while ( 1 )
    {
      CTakeDamageInfo::DebugGetDamageTypeString(v7, damageTypeString, 128);
      V_StripTrailingWhitespace(damageTypeString);
      V_sprintf_safe<128ul>(damageTypeFlagString, "DMG_%s", damageTypeString);
      v36.m_flags = 0;
      v36.m_type = 37;
      v36.m_int = v7;
      (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, damageTypeFlagString, &v36);
      CVariantBase<CVariantDefaultAllocator>::Free(&v36);
      v7 *= 2;
      if ( v7 != 0 )
        break;
      v7 = 1;
    }
  }
  while ( v7 <= 0x20000000 );
  for ( j = 0; j != 16; ++j )
  {
    name = g_WeaponSoundCategories[0].name;
    if ( g_WeaponSoundCategories[0].name == 0 )
      goto LABEL_21;
    v10 = g_WeaponSoundCategories;
    if ( j != g_WeaponSoundCategories[0].token )
    {
      while ( 1 )
      {
        ++v10;
        name = v10->name;
        if ( v10->name == 0 )
          break;
        if ( j == v10->token )
          goto LABEL_22;
      }
LABEL_21:
      name = tokenset_t<WeaponSound_t>::GetNameByToken(WeaponSound_t)const::unknown;
      if ( tokenset_t<WeaponSound_t>::GetNameByToken(WeaponSound_t)const::unknown == 0 )
        continue;
    }
LABEL_22:
    if ( *name != 0 )
    {
      s.m_pString = 0;
      CUtlString::Set(&s, name);
      CUtlString::ToUpperFast(&s);
      v36.m_type = 5;
      v36.m_flags = 0;
      v36.m_int = j;
      v34 = CUtlString::Get(&s);
      (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, v34, &v36);
      CVariantBase<CVariantDefaultAllocator>::Free(&v36);
      if ( s.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&s);
    }
  }
  v11 = *(*g_pScriptVM + 176LL);
  Script = GetScriptDesc<CBaseEntity>(0);
  v11(g_pScriptVM, Script);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get the time spent on the server in the last frame";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "FrameTime";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "FrameTime";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = FrameTime;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get a random int within a range";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RandomInt";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "RandomInt";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<int (*)(int,int),int,int,int>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = &RandomInt;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get a random float within a range";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RandomFloat";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "RandomFloat";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<float (*)(float,float),float,float,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = &RandomFloat;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Create all I/O events for a particular entity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CancelEntityIOEvents";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "CancelEntityIOEvents";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(CEntityHandle),void,CEntityHandle>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 13;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = CancelEntityIOEvents;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get the longest delay for all event"
                                                                                     "s attached to an output";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetMaxOutputDelay";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "GetMaxOutputDelay";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<float (*)(CEntityHandle,char const*),float,CEntityHandle,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 13;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = GetMaxOutputDelay;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Smooth curve decreasing slower as i"
                                                                                     "t approaches zero";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "ExponentialDecay";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_ExponentialDecay";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<float (*)(float,float,float),float,float,float,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_ExponentialDecay;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "(vector,vector,float) very basic in"
                                                                                     "terpolation of v0 to v1 over t on [0,1]";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SplineVectors";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_SplineVectors";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<Vector (*)(Vector const&,Vector const&,float),Vector,Vector const&,Vector const&,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_SplineVectors;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "(quaternion,quaternion,float) very "
                                                                                     "basic interpolation of v0 to v1 over t on [0,1]";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SplineQuaternions";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_SplineQuaternions";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<Quaternion (*)(Quaternion const&,Quaternion const&,float),Quaternion,Quaternion const&,Quaternion const&,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 4;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 4;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 4;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_SplineQuaternions;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "(vector,float) constructs a quatern"
                                                                                     "ion representing a rotation by angl"
                                                                                     "e around the specified vector axis";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "AxisAngleToQuaternion";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_AxisAngleToQuaternion";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<Quaternion (*)(Vector const&,float),Quaternion,Vector const&,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 4;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_AxisAngleToQuaternion;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "(quaternion,vector,float) rotates a"
                                                                                     " quaternion by the specified angle "
                                                                                     "around the specified vector axis";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RotateQuaternionByAxisAngle";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_RotateQuaternionByAxisAngle";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<Quaternion (*)(Quaternion const&,Vector const&,float),Quaternion,Quaternion const&,Vector const&,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 4;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 4;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_RotateQuaternionByAxisAngle;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "converts delta QAngle to an angular"
                                                                                     " velocity Vector";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RotationDeltaAsAngularVelocity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_RotationDeltaAsAngularVelocity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<Vector (*)(QAngle const&,QAngle const&),Vector,QAngle const&,QAngle const&>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 39;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 39;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_RotationDeltaAsAngularVelocity;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Fire Entity's Action Input with pas"
                                                                                     "sed Vector - you own the memory";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "FireEntityIOInputVec";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_FireEntityIOInputVec";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<void (*)(CEntityHandle,char const*,Vector const&),void,CEntityHandle,char const*,Vector const&>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 13;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_FireEntityIOInputVec;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Fire Entity's Action Input with pas"
                                                                                     "sed String - you own the memory";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "FireEntityIOInputString";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_FireEntityIOInputString";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<void (*)(CEntityHandle,char const*,char const*),void,CEntityHandle,char const*,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 13;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_FireEntityIOInputString;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Fire Entity's Action Input w/no data";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "FireEntityIOInputNameOnly";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_FireEntityIOInputNameOnly";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(CEntityHandle,char const*),void,CEntityHandle,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 13;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_FireEntityIOInputNameOnly;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Set rendering on/off for an ehandle";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SetRenderingEnabled";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_SetRenderingEnabled";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(CEntityHandle,bool),void,CEntityHandle,bool>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 13;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_SetRenderingEnabled;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Gets the value of the given cvar, as a float.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "cvar_getf";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_CvarGetf";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<float (*)(char const*),float,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_CvarGetf;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Sets the value of the given cvar, as a float.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "cvar_setf";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_CvarSetf";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<bool (*)(char const*,float),bool,char const*,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_CvarSetf;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Print a hud message on all clients";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "ShowMessage";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "UTIL_ShowMessageAll";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(char const*),void,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = UTIL_ShowMessageAll;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get the name of the map.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetMapName";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "GetMapName";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<char const* (*)(void),char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = GetMapName;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Set the current quest name.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SetQuestName";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "SetQuestName";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(char const*),void,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = SetQuestName;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Set the current quest phase.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SetQuestPhase";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "SetQuestPhase";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(int),void,int>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = SetQuestPhase;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Send a string to the console as a client command";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SendToConsole";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "SendToConsole";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(char const*),void,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = SendToConsole;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Send a string to the console as a server command";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SendToServerConsole";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "SendToServerConsole";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(char const*),void,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = SendToServerConsole;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Print a console message with a link"
                                                                                     "ed console command";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "PrintLinkedConsoleMessage";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "PrintLinkedConsoleMessage";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,char const*),void,char const*,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = PrintLinkedConsoleMessage;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "If the given file doesn't exist, cr"
                                                                                     "eates it with the given contents; d"
                                                                                     "oes nothing if it exists";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "InitLogFile";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "InitLogFile";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,char const*),void,char const*,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = InitLogFile;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Appends a string to a log file on the server";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "AppendToLogFile";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "AppendToLogFile";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,char const*),void,char const*,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = AppendToLogFile;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "#ScriptAssert:Asserts the passed in"
                                                                                     " value. Prints out a message and br"
                                                                                     "ings up the assert dialog.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DoScriptAssert";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DoScriptAssert";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(bool,char const*),void,bool,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DoScriptAssert;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get the current server time";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "Time";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Time";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Time;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Removes the specified entity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "UTIL_Remove";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_Remove";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_Remove;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Immediately removes the specified entity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "UTIL_RemoveImmediate";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_RemoveImmediate";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_RemoveImmediate;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "#EntFire:Generate and entity i/o event";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DoEntFire";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DoEntFire";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding6<void (*)(char const*,char const*,char const*,float,HSCRIPT__ *,HSCRIPT__ *),void,char const*,char const*,char const*,float,HSCRIPT__ *,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DoEntFire;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "#EntFireByHandle:Generate and entity i/o event";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DoEntFireByInstanceHandle";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DoEntFireByInstanceHandle";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding6<void (*)(HSCRIPT__ *,char const*,char const*,float,HSCRIPT__ *,HSCRIPT__ *),void,HSCRIPT__ *,char const*,char const*,float,HSCRIPT__ *,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DoEntFireByInstanceHandle;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Checks to see if the given hScript "
                                                                                     "is a valid entity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "IsValidEntity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "IsValidEntity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(HSCRIPT__ *),bool,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = IsValidEntity;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Returns true if the entity is valid"
                                                                                     " and marked for deletion.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "IsMarkedForDeletion";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "IsMarkedForDeletion";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(HSCRIPT__ *),bool,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = IsMarkedForDeletion;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "#UniqueString:Generate a string gua"
                                                                                     "ranteed to be unique across the lif"
                                                                                     "e of the script VM, with an optiona"
                                                                                     "l root string. Useful for adding da"
                                                                                     "ta to tables when not sure what key"
                                                                                     "s are already in use in that table.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DoUniqueString";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DoUniqueString";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<char const* (*)(char const*),char const*,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DoUniqueString;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Register as a listener for a game e"
                                                                                     "vent from script.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "ListenToGameEvent";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "ScriptListenToGameEvent";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<int (*)(char const*,HSCRIPT__ *,HSCRIPT__ *),int,char const*,HSCRIPT__ *,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = ScriptListenToGameEvent;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Stop listening to a particular game event.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "StopListeningToGameEvent";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "ScriptStopListeningToGameEvent";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(int),bool,int>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = ScriptStopListeningToGameEvent;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Stop listening to all game events w"
                                                                                     "ithin a specific context.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "StopListeningToAllGameEvents";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "ScriptStopListeningToAllGameEvents";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = ScriptStopListeningToAllGameEvents;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Fire a game event.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "FireGameEvent";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "ScriptFireGameEvent";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = ScriptFireGameEvent;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Fire a game event without broadcast"
                                                                                     "ing to the client.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "FireGameEventLocal";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "ScriptFireGameEventLocal";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = ScriptFireGameEventLocal;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Turn an entity index integer to an "
                                                                                     "HScript representing that entity's "
                                                                                     "script instance.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "EntIndexToHScript";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "EntIndexToHScript";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<HSCRIPT__ * (*)(int),HSCRIPT__ *,int>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = EntIndexToHScript;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get a script instance of a player by index.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "PlayerInstanceFromIndex";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "PlayerInstanceFromIndex";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<HSCRIPT__ * (*)(int),HSCRIPT__ *,int>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = PlayerInstanceFromIndex;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get the local player on a listen server.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetListenServerHost";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_GetListenServerHost";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<HSCRIPT__ * (*)(void),HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_GetListenServerHost;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Start a screenshake with the follow"
                                                                                     "ing parameters. vecCenter, flAmplit"
                                                                                     "ude, flFrequency, flDuration, flRad"
                                                                                     "ius, eCommand( SHAKE_START = 0, SHA"
                                                                                     "KE_STOP = 1 ), bAirShake";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "ScreenShake";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_ScreenShake";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding7<void (*)(Vector const&,float,float,float,float,int,bool),void,Vector const&,float,float,float,float,int,bool>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[6] = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 7;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_ScreenShake;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Synchronously spawns a single entity from a table";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SpawnEntityFromTableSynchronous";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_SpawnEntityFromTableSynchronous";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<HSCRIPT__ * (*)(char const*,HSCRIPT__ *),HSCRIPT__ *,char const*,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_SpawnEntityFromTableSynchronous;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Hierarchically spawn an entity grou"
                                                                                     "p from a set of spawn tables.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SpawnEntityGroupFromTable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_SpawnEntityGroupFromTable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<bool (*)(HSCRIPT__ *,bool,HSCRIPT__ *),bool,HSCRIPT__ *,bool,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_SpawnEntityGroupFromTable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Synchronously spawn an entity group"
                                                                                     " from a list of spawn tables.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SpawnEntityListFromTableSynchronous";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_SpawnEntityListFromTableSynchronous";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<HSCRIPT__ * (*)(HSCRIPT__ *),HSCRIPT__ *,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_SpawnEntityListFromTableSynchronous;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Asynchronously spawn an entity grou"
                                                                                     "p from a list of spawn tables. A ca"
                                                                                     "llback will be triggered when the s"
                                                                                     "pawning is complete";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SpawnEntityListFromTableAsynchronous";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_SpawnEntityListFromTableAsynchronous";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<int (*)(HSCRIPT__ *,HSCRIPT__ *),int,HSCRIPT__ *,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_SpawnEntityListFromTableAsynchronous;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Precache an entity from KeyValues in table";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "PrecacheEntityFromTable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_PrecacheEntityFromTable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<void (*)(char const*,HSCRIPT__ *,HSCRIPT__ *),void,char const*,HSCRIPT__ *,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_PrecacheEntityFromTable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Precache a list of entity KeyValues tables";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "PrecacheEntityListFromTable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_PrecacheEntityListFromTable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(HSCRIPT__ *,HSCRIPT__ *),void,HSCRIPT__ *,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_PrecacheEntityListFromTable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get Qangles (with no roll) for a Vector.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "VectorToAngles";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "VectorToAngles";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<QAngle (*)(Vector),QAngle,Vector>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 39;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = VectorToAngles;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Rotate a Vector around a point.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RotatePosition";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "RotatePosition";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<Vector const& (*)(Vector,QAngle,Vector),Vector const&,Vector,QAngle,Vector>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 39;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = RotatePosition;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Rotate a QAngle by another QAngle.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RotateOrientation";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "RotateOrientation";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<QAngle (*)(QAngle,QAngle),QAngle,QAngle,QAngle>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 39;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 39;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 39;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = RotateOrientation;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Returns the number of degrees diffe"
                                                                                     "rence between two yaw angles";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "AngleDiff";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "AngleDiff";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<float (*)(float,float),float,float,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = AngleDiff;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Find the delta between two QAngles.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RotationDelta";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_RotationDelta";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<QAngle (*)(QAngle,QAngle),QAngle,QAngle,QAngle>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 39;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 39;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 39;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_RotationDelta;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Play named sound on Entity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "EmitSoundOn";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_EmitSoundOn";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_EmitSoundOn;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Play named sound only on the client"
                                                                                     " for the passed in player";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "EmitSoundOnClient";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_EmitSoundOnClient";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_EmitSoundOnClient;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Stop named sound on Entity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "StopSoundOn";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_StopSoundOn";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_StopSoundOn;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Sets an opvar value for all players";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SetOpvarFloatAll";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_SetOpvarFloatAll";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding4<void (*)(char const*,char const*,char const*,float),void,char const*,char const*,char const*,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 4;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_SetOpvarFloatAll;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Sets an opvar value for a single player";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SetOpvarFloatPlayer";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_SetOpvarFloatPlayer";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding5<void (*)(char const*,char const*,char const*,float,HSCRIPT__ *),void,char const*,char const*,char const*,float,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_SetOpvarFloatPlayer;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Start a sound event";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "StartSoundEvent";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_StartSoundEventUnreliable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_StartSoundEventUnreliable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Start a sound event with reliable delivery";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "StartSoundEventReliable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_StartSoundEventReliable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_StartSoundEventReliable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Start a sound event with optional delivery";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "StartSoundEventUnreliable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_StartSoundEventUnreliable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_StartSoundEventUnreliable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Stops a sound event";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "StopSoundEvent";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_StopSoundEventReliable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_StopSoundEventReliable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Stops a sound event with reliable delivery";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "StopSoundEvent";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_StopSoundEventReliable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_StopSoundEventReliable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Stops a sound event with optional delivery";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "StopSoundEvent";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_StopSoundEventUnreliable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_StopSoundEventUnreliable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Start a sound event from position";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "StartSoundEventFromPosition";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_StartSoundEventFromPositionUnreliable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,Vector),void,char const*,Vector>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_StartSoundEventFromPositionUnreliable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Start a sound event from position w"
                                                                                     "ith reliable delivery";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "StartSoundEventFromPositionReliable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_StartSoundEventFromPositionReliable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,Vector),void,char const*,Vector>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_StartSoundEventFromPositionReliable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Start a sound event from position w"
                                                                                     "ith optional delivery";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "StartSoundEventFromPositionUnreliable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_StartSoundEventFromPositionUnreliable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,Vector),void,char const*,Vector>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_StartSoundEventFromPositionUnreliable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get Velocity for VPHYS or normal object";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetPhysVelocity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_GetPhysVelocity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<Vector const& (*)(HSCRIPT__ *),Vector const&,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_GetPhysVelocity;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get Angular Velocity for VPHYS or n"
                                                                                     "ormal object. Returns a vector of t"
                                                                                     "he axis of rotation, multiplied by "
                                                                                     "the degrees of rotation per second.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetPhysAngularVelocity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_GetPhysAngularVelocity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<Vector const& (*)(HSCRIPT__ *),Vector const&,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_GetPhysAngularVelocity;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Set Angular Velocity for VPHYS or n"
                                                                                     "ormal object, from a vector of the "
                                                                                     "axis of rotation, multiplied by the"
                                                                                     " degrees of rotation per second.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SetPhysAngularVelocity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_SetPhysAngularVelocity";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(HSCRIPT__ *,Vector const&),void,HSCRIPT__ *,Vector const&>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_SetPhysAngularVelocity;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Have Entity say string, and teamOnly or not";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "Say";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_Say";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<void (*)(HSCRIPT__ *,char const*,bool),void,HSCRIPT__ *,char const*,bool>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_Say;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Creates a table from the specified "
                                                                                     "keyvalues text file";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "LoadKeyValues";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_LoadKeyValues";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<CVariantBase<CVariantDefaultAllocator> (*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 32;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_LoadKeyValues;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Creates a table from the specified "
                                                                                     "keyvalues string";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "LoadKeyValuesFromString";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_LoadKeyValuesFromString";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<CVariantBase<CVariantDefaultAllocator> (*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 32;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_LoadKeyValuesFromString;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Draw text with a line offset (x, y,"
                                                                                     " lineOffset, text, r, g, b, a, duration)";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DebugDrawScreenTextLine";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "NDebugOverlay::ScreenTextOffset";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding9<void (*)(float,float,int,char const*,int,int,int,int,float),void,float,float,int,char const*,int,int,int,int,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[6] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[7] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[8] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 9;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = NDebugOverlay::ScreenTextOffset;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Draw pretty debug text (x, y, lineO"
                                                                                     "ffset, text, r, g, b, a, duration, "
                                                                                     "font, size, bBold)";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DebugScreenTextPretty";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "NDebugOverlay::ScreenTextPretty";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding12<void (*)(float,float,int,char const*,int,int,int,int,float,char const*,int,bool),void,float,float,int,char const*,int,int,int,int,float,char const*,int,bool>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[6] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[7] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[8] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[9] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[10] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[11] = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 12;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = NDebugOverlay::ScreenTextPretty;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Draw text in 3d (origin, text, bVie"
                                                                                     "wCheck, duration)";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DebugDrawText";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "NDebugOverlay::Text";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding4<void (*)(Vector const&,char const*,bool,float),void,Vector const&,char const*,bool,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 4;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = NDebugOverlay::Text;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Draw a debug overlay box (origin, m"
                                                                                     "ins, maxs, forward, r, g, b, a, duration )";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DebugDrawBox";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "NDebugOverlay::Box";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding8<void (*)(Vector const&,Vector const&,Vector const&,int,int,int,int,float),void,Vector const&,Vector const&,Vector const&,int,int,int,int,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[6] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[7] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 8;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = NDebugOverlay::Box;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Draw a debug overlay line (origin, "
                                                                                     "target, r, g, b, ztest, duration)";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DebugDrawLine";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "NDebugOverlay::Line";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding7<void (*)(Vector const&,Vector const&,int,int,int,bool,float),void,Vector const&,Vector const&,int,int,int,bool,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[6] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 7;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = NDebugOverlay::Line;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Draw a debug circle (center, vRgb, "
                                                                                     "a, rad, ztest, duration)";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DebugDrawCircle";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_OverlayCircle";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding6<void (*)(Vector,Vector,float,float,bool,float),void,Vector,Vector,float,float,bool,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_OverlayCircle;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Draw a debug sphere (center, vRgb, "
                                                                                     "a, rad, ztest, duration)";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DebugDrawSphere";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_OverlaySphere";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding6<void (*)(Vector,Vector,float,float,bool,float),void,Vector,Vector,float,float,bool,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_OverlaySphere;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Draw a debug line using color vec ("
                                                                                     "start, end, vRgb, a, ztest, duration)";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DebugDrawLine_vCol";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_OverlayLine_vCol";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding5<void (*)(Vector,Vector,Vector,bool,float),void,Vector,Vector,Vector,bool,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_OverlayLine_vCol;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Draw a debug forward box (cent, min"
                                                                                     ", max, forward, vRgb, a, duration)";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DebugDrawBoxDirection";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_OverlayBoxDirection";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding7<void (*)(Vector,Vector,Vector,Vector,Vector,float,float),void,Vector,Vector,Vector,Vector,Vector,float,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[6] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 7;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_OverlayBoxDirection;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Try to clear all the debug overlay info";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DebugDrawClear";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_OverlayClear";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<void (*)(void),void>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_OverlayClear;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Add a rule to the decision database.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "rr_AddDecisionRule";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "CSpeechScriptBridge::Script_AddDecisionRule";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(HSCRIPT__ *),bool,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = CSpeechScriptBridge::Script_AddDecisionRule;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Params: (entity, query) : tests 'qu"
                                                                                     "ery' against entity's response syst"
                                                                                     "em and returns the best response fo"
                                                                                     "und (or null if none found).";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "rr_QueryBestResponse";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "CSpeechScriptBridge::Script_FindBestResponse";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<bool (*)(HSCRIPT__ *,HSCRIPT__ *,HSCRIPT__ *),bool,HSCRIPT__ *,HSCRIPT__ *,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = CSpeechScriptBridge::Script_FindBestResponse;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Commit the result of QueryBestRespo"
                                                                                     "nse back to the given entity to pla"
                                                                                     "y. Call with params (entity, airesponse)";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "rr_CommitAIResponse";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "CSpeechScriptBridge::Script_CommitAIResponse";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<bool (*)(HSCRIPT__ *,HSCRIPT__ *),bool,HSCRIPT__ *,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = CSpeechScriptBridge::Script_CommitAIResponse;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Retrieve a table of all available e"
                                                                                     "xpresser targets, in the form { nam"
                                                                                     "e : handle, name: handle }.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "rr_GetResponseTargets";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "CSpeechScriptBridge::Script_GetExpressers";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<HSCRIPT__ * (*)(void),HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = CSpeechScriptBridge::Script_GetExpressers;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Reloads the MotD file";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "ReloadMOTD";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_LoadMOTD";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<void (*)(void),void>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_LoadMOTD;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "(hInflictor, hAttacker, flDamage) -"
                                                                                     " Allocate a damageinfo object, used"
                                                                                     " as an argument to TakeDamage(). Ca"
                                                                                     "ll DestroyDamageInfo( hInfo ) to free the object.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateDamageInfo";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "CreateDamageInfo";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding6<HSCRIPT__ * (*)(HSCRIPT__ *,HSCRIPT__ *,Vector,Vector,float,int),HSCRIPT__ *,HSCRIPT__ *,HSCRIPT__ *,Vector,Vector,float,int>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = CreateDamageInfo;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Free a damageinfo object that was c"
                                                                                     "reated with CreateDamageInfo().";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DestroyDamageInfo";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DestroyDamageInfo";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DestroyDamageInfo;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Pass table - Inputs: entity, effect";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateEffect";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_CreateEffect";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(HSCRIPT__ *),bool,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_CreateEffect;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Pass entity and effect name";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "StopEffect";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_StopEffect";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(HSCRIPT__ *,char const*),void,HSCRIPT__ *,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_StopEffect;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Pass table - Inputs: startpos, endp"
                                                                                     "os, mask, ignore  -- outputs: pos, "
                                                                                     "fraction, hit, enthit, startsolid";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "TraceLine";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_TraceLine";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(HSCRIPT__ *),bool,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_TraceLine;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Pass table - Inputs: start, end, mi"
                                                                                     "n, max, mask, ignore  -- outputs: p"
                                                                                     "os, fraction, hit, enthit, startsolid";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "TraceHull";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_TraceHull";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(HSCRIPT__ *),bool,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_TraceHull;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Pass table - Inputs: start, end, en"
                                                                                     "t, (optional mins, maxs) -- outputs"
                                                                                     ": pos, fraction, hit, startsolid, normal";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "TraceCollideable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_TraceCollideable";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(HSCRIPT__ *),bool,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_TraceCollideable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Returns the engines current frame count";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetFrameCount";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_GetFrameCount";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<int (*)(void),int>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_GetFrameCount;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Create a C proxy for a script-based"
                                                                                     " spawn group filter";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RegisterSpawnGroupFilterProxy";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_RegisterSpawnGroupFilterProxy";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(char const*),void,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_RegisterSpawnGroupFilterProxy;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Remove the C proxy for a script-bas"
                                                                                     "ed spawn group filter";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RemoveSpawnGroupFilterProxy";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_RemoveSpawnGroupFilterProxy";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(char const*),void,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_RemoveSpawnGroupFilterProxy;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Unload a spawn group by name";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "UnloadSpawnGroup";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_UnloadSpawnGroup";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(char const*),void,char const*>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_UnloadSpawnGroup;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Unload a spawn group by handle";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "UnloadSpawnGroupByHandle";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_UnloadSpawnGroupByHandle";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(int),void,int>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_UnloadSpawnGroupByHandle;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "CreateTrigger( vecMin, vecMax ) : C"
                                                                                     "reates and returns an AABB trigger";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateTrigger";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_CreateTrigger";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<HSCRIPT__ * (*)(Vector const&,Vector const&,Vector const&),HSCRIPT__ *,Vector const&,Vector const&,Vector const&>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_CreateTrigger;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "CreateTriggerRadiusApproximate( vec"
                                                                                     "Origin, flRadius ) : Creates and re"
                                                                                     "turns an AABB trigger thats bigger "
                                                                                     "than the radius provided";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateTriggerRadiusApproximate";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_CreateTriggerRadiusApproximate";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<HSCRIPT__ * (*)(Vector const&,float),HSCRIPT__ *,Vector const&,float>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_CreateTriggerRadiusApproximate;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Sends colored text to all clients.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "UTIL_MessageTextAll";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_UTIL_MessageTextAll";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding5<void (*)(char const*,int,int,int,int),void,char const*,int,int,int,int>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_UTIL_MessageTextAll;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Sends colored text to one client.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "UTIL_MessageText";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_UTIL_MessageText";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding6<void (*)(int,char const*,int,int,int,int),void,int,char const*,int,int,int,int>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_UTIL_MessageText;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Sends colored text to all clients. "
                                                                                     "(Valid context keys: player_id, value, team_id)";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "UTIL_MessageTextAll_WithContext";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_UTIL_MessageTextAll_WithContext";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding6<void (*)(char const*,int,int,int,int,HSCRIPT__ *),void,char const*,int,int,int,int,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_UTIL_MessageTextAll_WithContext;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Sends colored text to one client. ("
                                                                                     "Valid context keys: player_id, value, team_id)";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "UTIL_MessageText_WithContext";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_UTIL_MessageText_WithContext";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding7<void (*)(int,char const*,int,int,int,int,HSCRIPT__ *),void,int,char const*,int,int,int,int,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[6] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 7;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_UTIL_MessageText_WithContext;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Clear all message text from all clients.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "UTIL_ResetMessageTextAll";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "UTIL_ResetMessageTextAll";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<void (*)(void),void>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = UTIL_ResetMessageTextAll;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Clear all message text on one client.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "UTIL_ResetMessageText";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_UTIL_ResetMessageText";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(int),void,int>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_UTIL_ResetMessageText;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Returns true if this server is a dedicated server.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "IsDedicatedServer";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "IsDedicatedServer";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<bool (*)(void),bool>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = IsDedicatedServer;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Returns true if this is lua running"
                                                                                     " from the server.dll.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "IsServer";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_IsServer";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<bool (*)(void),bool>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_IsServer;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Returns true if this is lua running"
                                                                                     " from the client.dll.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "IsClient";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_IsClient";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<bool (*)(void),bool>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_IsClient;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Returns true if this is lua running"
                                                                                     " within tools mode.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "IsInToolsMode";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_IsInToolsMode";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<bool (*)(void),bool>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_IsInToolsMode;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Compute the closest point on the OBB of an entity.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CalcClosestPointOnEntityOBB";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_CalcClosestPointOnEntityOBB";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<Vector (*)(HSCRIPT__ *,Vector),Vector,HSCRIPT__ *,Vector>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_CalcClosestPointOnEntityOBB;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Compute the distance between two en"
                                                                                     "tity OBB. A negative return value i"
                                                                                     "ndicates an input error. A return v"
                                                                                     "alue of zero indicates that the OBB"
                                                                                     "s are overlapping.";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CalcDistanceBetweenEntityOBB";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_CalcDistanceBetweenEntityOBB";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<float (*)(HSCRIPT__ *,HSCRIPT__ *),float,HSCRIPT__ *,HSCRIPT__ *>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_CalcDistanceBetweenEntityOBB;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CalcDistanceToLineSegment2D";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_CalcDistanceToLineSegment2D";
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<float (*)(Vector,Vector,Vector),float,Vector,Vector,Vector>::Call;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_CalcDistanceToLineSegment2D;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CVScriptGameSystem::InstallScriptBindings(void)::binding);
  v13 = g_pScriptVM;
  v14 = *(*g_pScriptVM + 184LL);
  v15 = GetScriptDesc<CScriptEntityIterator>(&g_ScriptEntityIterator);
  v16 = v14(v13, v15, &g_ScriptEntityIterator);
  v17 = *(*v13 + 240LL);
  v36.m_type = 31;
  v36.m_flags = 0;
  v36.m_uint64 = v16;
  v17(v13, 0, "Entities", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v18 = g_pScriptVM;
  v19 = *(*g_pScriptVM + 184LL);
  v20 = GetScriptDesc<CScriptConvarAccessor>(&g_ScriptConvars);
  v21 = v19(v18, v20, &g_ScriptConvars);
  v22 = *(*v18 + 240LL);
  v36.m_type = 31;
  v36.m_flags = 0;
  v36.m_uint64 = v21;
  v22(v18, 0, "Convars", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v23 = g_pScriptVM;
  v24 = *(*g_pScriptVM + 184LL);
  v25 = GetScriptDesc<CScriptGlobalSysAccessor>(&g_ScriptGlobalSys);
  v26 = v24(v23, v25, &g_ScriptGlobalSys);
  v27 = *(*v23 + 240LL);
  v36.m_flags = 0;
  v36.m_type = 31;
  v36.m_uint64 = v26;
  v27(v23, 0, "GlobalSys", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 5;
  v36.m_flags = 0;
  v36.m_int = 1;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_UNREGISTERED", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 5;
  v36.m_flags = 0;
  v36.m_int = 2;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_DEVELOPMENTONLY", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 5;
  v36.m_flags = 0;
  v36.m_int = 16;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_HIDDEN", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 5;
  v36.m_flags = 0;
  v36.m_int = 32;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_PROTECTED", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_flags = 0;
  v36.m_type = 5;
  v36.m_int = 64;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_SPONLY", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_flags = 0;
  v36.m_type = 5;
  v36.m_int = 128;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_ARCHIVE", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_flags = 0;
  v36.m_type = 5;
  v36.m_int = 256;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_NOTIFY", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_flags = 0;
  v36.m_type = 5;
  v36.m_int = 512;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_USERINFO", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 5;
  v36.m_flags = 0;
  v36.m_int = 1024;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_PRINTABLEONLY", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 5;
  v36.m_flags = 0;
  v36.m_int = 2048;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_UNLOGGED", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 5;
  v36.m_flags = 0;
  v36.m_int = 4096;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_NEVER_AS_STRING", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 5;
  v36.m_flags = 0;
  v36.m_int = 0x2000;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_REPLICATED", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_flags = 0;
  v36.m_type = 5;
  v36.m_int = 0x4000;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_CHEAT", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_flags = 0;
  v36.m_type = 5;
  v36.m_int = 0x8000;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_SS", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 5;
  v36.m_flags = 0;
  v36.m_int = 0x10000;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_DEMO", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_flags = 0;
  v36.m_type = 5;
  v36.m_int = 0x20000;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_DONTRECORD", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_flags = 0;
  v36.m_type = 5;
  v36.m_int = 0x400000;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_NOT_CONNECTED", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 5;
  v36.m_flags = 0;
  v36.m_int = 0x40000000;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FCVAR_VCONSOLE_SET_FOCUS", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  if ( g_pTestScriptMgr != 0 && (Plat_IsInTestMode() != 0 || (*(*g_pTestScriptMgr + 104LL))(g_pTestScriptMgr) != 0) )
  {
    v28 = g_pTestScriptMgr;
    v29 = g_pScriptVM;
    v30 = *(*g_pScriptVM + 184LL);
    v31 = GetScriptDesc<ITestScriptMgr>(g_pTestScriptMgr);
    v32 = v30(v29, v31, v28);
    v33 = *(*v29 + 240LL);
    v36.m_type = 31;
    v36.m_flags = 0;
    v36.m_uint64 = v32;
    v33(v29, 0, "TestScriptManager", &v36);
    CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  }
  v36.m_type = 5;
  v36.m_flags = 0;
  v36.m_int = 1;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "SERVER_DLL", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 0;
  v36.m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 3;
  v36.m_uint64 = &vec3_origin;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "vec3_origin", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 0;
  v36.m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
  v36.m_type = 3;
  v36.m_uint64 = &vec3_invalid;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "vec3_invalid", &v36);
  CVariantBase<CVariantDefaultAllocator>::Free(&v36);
}


// CVScriptGameSystem::RemoveScriptBindings  (line 3278, @0x0000000001f2a690, libserver.so)
// callers: CDOTAVScriptGameSystem::RemoveScriptBindings
void __fastcall CVScriptGameSystem::RemoveScriptBindings(CVScriptGameSystem *const this)
{
  ;
}


// VScriptServerToggleGameDebug  (line 3285, @0x0000000001f38b50, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CVScriptGameSystem::GameShutdown, script_debug, CVScriptGameSystem::VScriptInit
// strings: "EndScriptDebug", "BeginScriptDebug", "script_debug %s\n", "Scripting disabled or no server running\n"
// globals: g_pScriptVM, g_bVscriptGameDebugEnabled
void __cdecl VScriptServerToggleGameDebug()
{
  const char *v0; // rsi
  __int64 v1; // rax
  __int64 v2; // rbx
  char *v3; // rcx

  if ( g_pScriptVM != 0 )
  {
    g_bVscriptGameDebugEnabled ^= 1u;
    if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
    {
      v3 = "ON";
      if ( !g_bVscriptGameDebugEnabled )
        v3 = "OFF";
      LoggingSystem_Log(LOG_VSCRIPT, 1, "script_debug %s\n", v3);
    }
    v0 = "BeginScriptDebug";
    if ( !g_bVscriptGameDebugEnabled )
      v0 = "EndScriptDebug";
    v1 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, v0, 0, 0);
    v2 = v1;
    if ( v1 != 0 )
    {
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v1, 0, 0, 0, 0, 1);
      (*(*g_pScriptVM + 152LL))(g_pScriptVM, v2);
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// VScriptConnectDebugger  (line 3304, @0x0000000001f2a9e0, libserver.so)
// calls: Msg, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: script_attach_debugger, CVScriptGameSystem::InitVM
// strings: "Unable to connect to debugger\n", "Debugger connected\n", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __cdecl VScriptConnectDebugger()
{
  __int64 v0; // rbx
  char v1; // al
  const char *v2; // rdi
  void (__fastcall *v3)(__int64, __int64); // r12
  __int64 v4; // rax

  if ( g_pScriptVM != 0 )
  {
    v0 = (*(*g_pScriptManager + 104LL))(g_pScriptManager);
    v1 = (**v0)(v0, "server");
    v2 = "Unable to connect to debugger\n";
    if ( v1 != 0 )
    {
      v3 = *(*v0 + 16LL);
      v4 = (*(*g_pScriptVM + 32LL))(g_pScriptVM);
      v3(v0, v4);
      v2 = "Debugger connected\n";
    }
    Msg(v2);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// CVScriptGameSystem::VScriptInit  (line 3325, @0x0000000001f38f80, libserver.so)  // inlines: Init
// calls: CVScriptGameSystem::InitVM, CEntityScriptFramework::LoadFramework, CEntitySystem::LoadEntityScriptClasses, VScriptServerToggleGameDebug
// strings: "addon_init"
// globals: g_pScriptVM, g_bVscriptGameDebugEnabled
void __fastcall CVScriptGameSystem::VScriptInit(CVScriptGameSystem *const this)
{
  int (**vptr_IGameSystem)(...); // rax

  g_VScriptGameEventListener.m_bHasLookedForCollectFunc = 0;
  g_VScriptGameEventListener.m_nNextReferenceNumber = 1;
  g_VScriptGameEventListener.m_CollectGameEventCallbacksFunc = 0;
  CVScriptGameSystem::InitVM(this);
  if ( g_pScriptVM != 0 )
  {
    vptr_IGameSystem = this->_vptr_IGameSystem;
    this->m_bVscriptServerInitialized = 1;
    vptr_IGameSystem[56](this);
    CEntityScriptFramework::LoadFramework(&g_EntityScriptFramework);
    (*(this->_vptr_IGameSystem + 47))(this, "addon_init", 0);
    CEntitySystem::LoadEntityScriptClasses(g_pEntitySystem);
    if ( g_bVscriptGameDebugEnabled )
    {
      g_bVscriptGameDebugEnabled = 0;
      VScriptServerToggleGameDebug();
    }
  }
}


// CVScriptGameSystem::VScriptTerm  (line 3364, @0x0000000001f63320, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, PurgeAndDeleteElements, StopListeningForAllEvents, Term, operator[]
// calls: CScriptConvarAccessor::CleanupCommands, CUtlRBTree<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements, CGameEventListener::StopListeningForAllEvents, CVScriptGameSystem::DestroyVM
// globals: g_ScriptConvars, g_pScriptVM, g_VScriptGameEventListener
void __fastcall CVScriptGameSystem::VScriptTerm(CVScriptGameSystem *const this)
{
  unsigned __int16 m_Root; // r14
  UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v4; // rax
  unsigned __int16 m_Left; // si
  __int64 v6; // r12
  int v7; // ebx
  CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int> >*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // r15
  CVScriptGameEventListener::GameEventFunc_t *v9; // r13

  (*(this->_vptr_IGameSystem + 57))(this);
  this->m_bVscriptServerInitialized = 0;
  CScriptConvarAccessor::CleanupCommands(&g_ScriptConvars);
  m_Root = g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Root;
  if ( g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Root != 0xFFFF )
  {
    m_pMemory = g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Elements.m_pMemory;
    v4 = g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Root;
    m_Left = g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Elements.m_pMemory[g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Elements.m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Elements.m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      v6 = 0;
      v7 = 0;
      elem = m_pMemory[v4].m_Data.elem;
      if ( elem->m_Size > 0 )
      {
        do
        {
          ++v7;
          v9 = &elem->m_Memory.m_pMemory[v6++];
          (*(*g_pScriptVM + 152LL))(g_pScriptVM, v9->m_hFunction);
          (*(*g_pScriptVM + 96LL))(g_pScriptVM, v9->m_hContext);
        }
        while ( v7 < elem->m_Size );
      }
      m_Root = CUtlRBTree<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &g_VScriptGameEventListener.m_GameEventFunctions.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = g_VScriptGameEventListener.m_GameEventFunctions.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CVScriptGameEventListener::GameEventFunc_t,CUtlMemory<CVScriptGameEventListener::GameEventFunc_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&g_VScriptGameEventListener.m_GameEventFunctions.m_Tree);
  g_VScriptGameEventListener.m_nNextReferenceNumber = 1;
  if ( g_VScriptGameEventListener.m_bRegisteredForEvents )
    CGameEventListener::StopListeningForAllEvents(&g_VScriptGameEventListener);
  CVScriptGameSystem::DestroyVM(this);
}


// VScriptServerReplaceClosures  (line 3382, @0x0000000001f3ad60, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*, HSCRIPT__*>, Free, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: script_reload_code, script_reload_entity_code
// strings: "__ReplaceClosures"
// globals: g_pScriptVM, g_pVScriptGameSystem
bool __fastcall VScriptServerReplaceClosures(const char *pszScriptName, HSCRIPT hScope, bool bWarnMissing)
{
  __int64 v6; // r12
  uint64 v7; // r13
  IScriptVM *v8; // r15
  CVariantBase<CVariantDefaultAllocator> *v9; // rbx
  int v11; // [rsp+0h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v12; // [rsp+10h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v13[4]; // [rsp+20h] [rbp-40h] BYREF

  if ( g_pScriptVM == 0 )
    return 0;
  v6 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "__ReplaceClosures", 0, 0);
  if ( v6 == 0 )
    return 0;
  v7 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 5))(g_pVScriptGameSystem, pszScriptName, bWarnMissing);
  if ( v7 == 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v6);
    return 0;
  }
  v8 = g_pScriptVM;
  v12.m_type = 0;
  v12.m_flags = 0;
  v13[0].m_type = 0;
  v12.m_uint64 = 0;
  v13[0].m_flags = 0;
  v13[0].m_uint64 = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v12);
  v12.m_uint64 = v7;
  v12.m_type = 31;
  CVariantBase<CVariantDefaultAllocator>::Free(v13);
  v13[0].m_uint64 = hScope;
  v13[0].m_type = 31;
  (*(*v8 + 160LL))(v8, v6, &v12, 2, 0, 0, 1);
  v9 = v13;
  do
  {
    if ( (v9->m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9->m_uint64);
      v9->m_flags &= ~1u;
    }
    --v9;
    v9[1].m_uint64 = 0;
    v9[1].m_type = 0;
  }
  while ( v9 != &v11 );
  (*(*g_pScriptVM + 152LL))(g_pScriptVM, v6);
  (*(*g_pScriptVM + 96LL))(g_pScriptVM, v7);
  return 1;
}


// script_reload  (line 3423, @0x0000000001f2c620, libserver.so)  // inlines: FirstEnt
// calls: CGameEntitySystem::NextEnt, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "Scripting disabled or no server running\n"
// globals: g_pScriptVM, g_pVScriptGameSystem
void __fastcall script_reload(const CCommandContext *const ctx, const CCommand *const args)
{
  CBaseEntity *i; // rsi
  CBaseEntity *Ent; // rax
  CBaseEntity *v4; // rbx

  if ( g_pScriptVM != 0 )
  {
    (*(*g_pScriptVM + 48LL))(g_pScriptVM, args);
    (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 11))(g_pVScriptGameSystem);
    for ( i = 0; ; i = v4 )
    {
      Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, i);
      v4 = Ent;
      if ( Ent == 0 )
        break;
      (*(Ent->_vptr_IHandleEntity + 25))(Ent);
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_attach_debugger  (line 3445, @0x0000000001f2aa90, libserver.so)
// calls: VScriptConnectDebugger
void __fastcall script_attach_debugger(const CCommandContext *const ctx, const CCommand *const args)
{
  VScriptConnectDebugger();
}


// script_debug  (line 3450, @0x0000000001f38cd0, libserver.so)  // inlines: Arg, operator[]
// calls: tolower, VScriptServerToggleGameDebug
// strings: "ScriptDebugDrawTextEnabled = !ScriptDebugDrawTextEnabled", "ScriptDebugDrawWatchesEnabled = !ScriptDebugDrawWatchesEnabled"
// globals: g_pScriptVM
void __fastcall script_debug(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // eax

  if ( args->m_nArgc > 1 )
  {
    v2 = tolower(*args->m_ppArgv[1]);
    if ( v2 != 119 )
      goto LABEL_3;
LABEL_7:
    (*(*g_pScriptVM + 80LL))(g_pScriptVM, "ScriptDebugDrawWatchesEnabled = !ScriptDebugDrawWatchesEnabled", 1);
    return;
  }
  v2 = tolower(0);
  if ( v2 == 119 )
    goto LABEL_7;
LABEL_3:
  if ( v2 == 109 )
    (*(*g_pScriptVM + 80LL))(g_pScriptVM, "ScriptDebugDrawTextEnabled = !ScriptDebugDrawTextEnabled", 1);
  else
    VScriptServerToggleGameDebug();
}


// script_add_watch  (line 3466, @0x0000000001f39f00, libserver.so)  // inlines: Arg, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "ScriptDebugAddWatch( \"%s\" )", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_add_watch(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdx
  void (__fastcall *v3)(IScriptVM *, char *, __int64); // r12
  CFmtStrN<256,false> v4; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+118h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  if ( g_pScriptVM != 0 )
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
      v2 = args->m_ppArgv[1];
    v3 = *(*g_pScriptVM + 80LL);
    CFmtStrN<256,false>::CFmtStrN(&v4, "ScriptDebugAddWatch( \"%s\" )", v2);
    v3(g_pScriptVM, v4.m_szBuf, 1);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_remove_watch  (line 3478, @0x0000000001f39e30, libserver.so)  // inlines: Arg, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "ScriptDebugRemoveWatch( \"%s\" )", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_remove_watch(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdx
  void (__fastcall *v3)(IScriptVM *, char *, __int64); // r12
  CFmtStrN<256,false> v4; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+118h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  if ( g_pScriptVM != 0 )
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
      v2 = args->m_ppArgv[1];
    v3 = *(*g_pScriptVM + 80LL);
    CFmtStrN<256,false>::CFmtStrN(&v4, "ScriptDebugRemoveWatch( \"%s\" )", v2);
    v3(g_pScriptVM, v4.m_szBuf, 1);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_add_watch_pattern  (line 3490, @0x0000000001f39d60, libserver.so)  // inlines: Arg, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "ScriptDebugAddWatchPattern( \"%s\" )", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_add_watch_pattern(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdx
  void (__fastcall *v3)(IScriptVM *, char *, __int64); // r12
  CFmtStrN<256,false> v4; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+118h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  if ( g_pScriptVM != 0 )
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
      v2 = args->m_ppArgv[1];
    v3 = *(*g_pScriptVM + 80LL);
    CFmtStrN<256,false>::CFmtStrN(&v4, "ScriptDebugAddWatchPattern( \"%s\" )", v2);
    v3(g_pScriptVM, v4.m_szBuf, 1);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_remove_watch_pattern  (line 3502, @0x0000000001f39c90, libserver.so)  // inlines: Arg, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "ScriptDebugRemoveWatchPattern( \"%s\" )", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_remove_watch_pattern(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdx
  void (__fastcall *v3)(IScriptVM *, char *, __int64); // r12
  CFmtStrN<256,false> v4; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+118h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  if ( g_pScriptVM != 0 )
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
      v2 = args->m_ppArgv[1];
    v3 = *(*g_pScriptVM + 80LL);
    CFmtStrN<256,false>::CFmtStrN(&v4, "ScriptDebugRemoveWatchPattern( \"%s\" )", v2);
    v3(g_pScriptVM, v4.m_szBuf, 1);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_add_debug_filter  (line 3514, @0x0000000001f39bc0, libserver.so)  // inlines: Arg, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "ScriptDebugAddTextFilter( \"%s\" )", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_add_debug_filter(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdx
  void (__fastcall *v3)(IScriptVM *, char *, __int64); // r12
  CFmtStrN<256,false> v4; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+118h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  if ( g_pScriptVM != 0 )
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
      v2 = args->m_ppArgv[1];
    v3 = *(*g_pScriptVM + 80LL);
    CFmtStrN<256,false>::CFmtStrN(&v4, "ScriptDebugAddTextFilter( \"%s\" )", v2);
    v3(g_pScriptVM, v4.m_szBuf, 1);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_remove_debug_filter  (line 3526, @0x0000000001f39af0, libserver.so)  // inlines: Arg, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "ScriptDebugRemoveTextFilter( \"%s\" )", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_remove_debug_filter(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdx
  void (__fastcall *v3)(IScriptVM *, char *, __int64); // r12
  CFmtStrN<256,false> v4; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+118h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  if ( g_pScriptVM != 0 )
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
      v2 = args->m_ppArgv[1];
    v3 = *(*g_pScriptVM + 80LL);
    CFmtStrN<256,false>::CFmtStrN(&v4, "ScriptDebugRemoveTextFilter( \"%s\" )", v2);
    v3(g_pScriptVM, v4.m_szBuf, 1);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_trace_enable  (line 3538, @0x0000000001f399f0, libserver.so)  // inlines: Arg, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "ScriptDebugAddTrace( \"%s\" )", "No key specified\n", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_trace_enable(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdx
  void (__fastcall *v3)(IScriptVM *, char *, __int64); // r12
  CFmtStrN<256,false> v4; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+118h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  if ( g_pScriptVM != 0 )
  {
    if ( args->m_nArgc > 1 && *(v2 = args->m_ppArgv[1]) != 0 )
    {
      v3 = *(*g_pScriptVM + 80LL);
      CFmtStrN<256,false>::CFmtStrN(&v4, "ScriptDebugAddTrace( \"%s\" )", v2);
      v3(g_pScriptVM, v4.m_szBuf, 1);
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
    {
      LoggingSystem_Log(LOG_VSCRIPT, 1, "No key specified\n");
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_trace_disable  (line 3556, @0x0000000001f398f0, libserver.so)  // inlines: Arg, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "ScriptDebugRemoveTrace( \"%s\" )", "No key specified\n", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_trace_disable(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdx
  void (__fastcall *v3)(IScriptVM *, char *, __int64); // r12
  CFmtStrN<256,false> v4; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+118h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  if ( g_pScriptVM != 0 )
  {
    if ( args->m_nArgc > 1 && *(v2 = args->m_ppArgv[1]) != 0 )
    {
      v3 = *(*g_pScriptVM + 80LL);
      CFmtStrN<256,false>::CFmtStrN(&v4, "ScriptDebugRemoveTrace( \"%s\" )", v2);
      v3(g_pScriptVM, v4.m_szBuf, 1);
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
    {
      LoggingSystem_Log(LOG_VSCRIPT, 1, "No key specified\n");
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_trace_enable_key  (line 3574, @0x0000000001f397f0, libserver.so)  // inlines: Arg, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "ScriptDebugAddTrace( %s )", "No key specified\n", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_trace_enable_key(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdx
  void (__fastcall *v3)(IScriptVM *, char *, __int64); // r12
  CFmtStrN<256,false> v4; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+118h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  if ( g_pScriptVM != 0 )
  {
    if ( args->m_nArgc > 1 && *(v2 = args->m_ppArgv[1]) != 0 )
    {
      v3 = *(*g_pScriptVM + 80LL);
      CFmtStrN<256,false>::CFmtStrN(&v4, "ScriptDebugAddTrace( %s )", v2);
      v3(g_pScriptVM, v4.m_szBuf, 1);
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
    {
      LoggingSystem_Log(LOG_VSCRIPT, 1, "No key specified\n");
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_trace_disable_key  (line 3592, @0x0000000001f396f0, libserver.so)  // inlines: Arg, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "ScriptDebugRemoveTrace( %s )", "No key specified\n", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_trace_disable_key(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdx
  void (__fastcall *v3)(IScriptVM *, char *, __int64); // r12
  CFmtStrN<256,false> v4; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+118h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  if ( g_pScriptVM != 0 )
  {
    if ( args->m_nArgc > 1 && *(v2 = args->m_ppArgv[1]) != 0 )
    {
      v3 = *(*g_pScriptVM + 80LL);
      CFmtStrN<256,false>::CFmtStrN(&v4, "ScriptDebugRemoveTrace( %s )", v2);
      v3(g_pScriptVM, v4.m_szBuf, 1);
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
    {
      LoggingSystem_Log(LOG_VSCRIPT, 1, "No key specified\n");
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_trace_enable_all  (line 3610, @0x0000000001f2c5b0, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "ScriptDebugTraceAll( true )", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_trace_enable_all(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( g_pScriptVM != 0 )
  {
    (*(*g_pScriptVM + 80LL))(g_pScriptVM, "ScriptDebugTraceAll( true )", 1);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_trace_disable_all  (line 3621, @0x0000000001f2c540, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "ScriptDebugTraceAll( false )", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_trace_disable_all(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( g_pScriptVM != 0 )
  {
    (*(*g_pScriptVM + 80LL))(g_pScriptVM, "ScriptDebugTraceAll( false )", 1);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_clear_watches  (line 3632, @0x0000000001f2c4d0, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "ScriptDebugClearWatches()", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_clear_watches(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( g_pScriptVM != 0 )
  {
    (*(*g_pScriptVM + 80LL))(g_pScriptVM, "ScriptDebugClearWatches()", 1);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_find  (line 3643, @0x0000000001f3e990, libserver.so)  // inlines: Arg, CVariantBase, Call<char const*>, CopyData, operator=, operator[], ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, _Unwind_Resume
// strings: "ScriptDebugDumpKeys", "No key specified\n", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_find(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rax
  __int64 v4; // r12
  const char *v5; // r14
  IScriptVM *v6; // r13
  CVariantBase<CVariantDefaultAllocator> v7; // [rsp+10h] [rbp-30h] BYREF

  if ( g_pScriptVM != 0 )
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
      v2 = args->m_ppArgv[1];
    if ( *v2 != 0 )
    {
      v4 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "ScriptDebugDumpKeys", 0, 0);
      if ( v4 != 0 )
      {
        v5 = "";
        if ( args->m_nArgc > 1 )
          v5 = args->m_ppArgv[1];
        v6 = g_pScriptVM;
        v7.m_flags = 0;
        v7.m_type = 0;
        v7.m_uint64 = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v7);
        v7.m_uint64 = v5;
        v7.m_type = 30;
        (*(*v6 + 160LL))(v6, v4, &v7, 1, 0, 0, 1);
        CVariantBase<CVariantDefaultAllocator>::Free(&v7);
        (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
      }
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
    {
      LoggingSystem_Log(LOG_VSCRIPT, 1, "No key specified\n");
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_resurrect_unreachable  (line 3666, @0x0000000001f39610, libserver.so)  // inlines: Arg, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "ResurrectedUnreachables%d", "Scripting disabled or no server running\n"
// globals: g_pScriptVM, script_resurrect_unreachable(CCommandContext const&,CCommand const&)::counter
void __fastcall script_resurrect_unreachable(const CCommandContext *const ctx, const CCommand *const args)
{
  IScriptVM *v2; // rdi
  char *m_szBuf; // rsi
  CFmtStrN<256,false> v4; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+118h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  v2 = g_pScriptVM;
  if ( g_pScriptVM != 0 )
  {
    if ( args->m_nArgc <= 1 || (m_szBuf = *args->m_ppArgv[1]) == 0 )
    {
      CFmtStrN<256,false>::CFmtStrN(
        &v4,
        "ResurrectedUnreachables%d",
        ++script_resurrect_unreachable(CCommandContext const&,CCommand const&)::counter);
      v2 = g_pScriptVM;
      m_szBuf = v4.m_szBuf;
    }
    (*(*v2 + 408LL))(v2, m_szBuf, 1);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_reload_code  (line 3681, @0x0000000001f3af10, libserver.so)  // inlines: Arg, operator[]
// calls: VScriptServerReplaceClosures, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "No script specified\n", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_reload_code(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rax
  const char *v3; // rdi
  char IsChannelEnabled; // al
  const char *v5; // rdx

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  if ( *v2 == 0 )
  {
    IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1);
    v5 = "No script specified\n";
    if ( IsChannelEnabled == 0 )
      return;
    goto LABEL_12;
  }
  if ( g_pScriptVM == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) == 0 )
      return;
    v5 = "Scripting disabled or no server running\n";
LABEL_12:
    LoggingSystem_Log(LOG_VSCRIPT, 1, v5);
    return;
  }
  v3 = "";
  if ( args->m_nArgc > 1 )
    v3 = args->m_ppArgv[1];
  VScriptServerReplaceClosures(v3, 0, 1);
}


// script_reload_entity_code  (line 3700, @0x0000000001f406c0, libserver.so)  // inlines: Arg, CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, GetHammerSpecifiedPrivateScripts, Purge, PurgeAndDeleteElements, RemoveAll, V_strcpy_safe<255ul>, operator HSCRIPT, operator[], ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: UTIL_GetCommandClient, GetNextCommandEntity, _V_strncpy, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), VScriptServerReplaceClosures, CUtlMemory<char*, int>::Purge, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// strings: "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_reload_entity_code(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // r15
  CBaseEntity *v3; // r14
  CBaseEntity *NextCommandEntity; // rax
  HSCRIPT m_hScope; // r13
  UtlSymLargeId_t m_Id; // rsi
  __int64 v7; // r12
  int v8; // ebx
  __int64 v9; // r13
  int v10; // r12d
  char *v11; // rsi
  CBasePlayer *pPlayer; // [rsp+18h] [rbp-168h]
  CUtlStringList szScripts; // [rsp+20h] [rbp-160h] BYREF
  char szScriptsList[255]; // [rsp+40h] [rbp-140h] BYREF
  unsigned __int64 v15; // [rsp+148h] [rbp-38h]

  v2 = "";
  v15 = __readfsqword(0x28u);
  if ( args->m_nArgc > 1 )
  {
    v2 = args->m_ppArgv[1];
    if ( *v2 == 0 )
      v2 = "";
  }
  if ( g_pScriptVM != 0 )
  {
    pPlayer = UTIL_GetCommandClient(ctx);
    if ( pPlayer != 0 )
    {
      v3 = 0;
      while ( 1 )
      {
        NextCommandEntity = GetNextCommandEntity(pPlayer, v2, v3);
        v3 = NextCommandEntity;
        if ( NextCommandEntity == 0 )
          break;
        m_hScope = NextCommandEntity->m_hPrivateScope.m_hScope;
        if ( m_hScope != 0 )
        {
          m_Id = NextCommandEntity->m_iszPrivateVScripts.u.m_Id;
          if ( m_Id != 0 )
          {
            _V_strncpy(szScriptsList, m_Id, 255);
            szScripts.m_Size = 0;
            szScripts.m_Memory.m_pMemory = 0;
            szScripts.m_Memory.m_nAllocationCount = 0;
            szScripts.m_Memory.m_nGrowSize = 0;
            V_SplitString(szScriptsList, " ", &szScripts);
            if ( szScripts.m_Size > 0 )
            {
              v7 = 0;
              v8 = 0;
              do
              {
                VScriptServerReplaceClosures(szScripts.m_Memory.m_pMemory[v7], m_hScope, 1);
                ++v8;
                ++v7;
              }
              while ( szScripts.m_Size > v8 );
              if ( szScripts.m_Size > 0 )
              {
                v9 = 0;
                v10 = 0;
                do
                {
                  ++v10;
                  v11 = szScripts.m_Memory.m_pMemory[v9++];
                  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v11);
                }
                while ( v10 < szScripts.m_Size );
              }
            }
            szScripts.m_Size = 0;
            if ( (szScripts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<char *,int>::Purge(&szScripts.m_Memory);
              if ( (szScripts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<char *,int>::Purge(&szScripts.m_Memory);
            }
          }
        }
      }
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_help  (line 3740, @0x0000000001f39530, libserver.so)  // inlines: Arg, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "ScriptFunctionHelp( \"%s\" )", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_help(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdx
  void (__fastcall *v3)(IScriptVM *, char *, __int64); // r12
  CFmtStrN<256,false> v4; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+118h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  if ( g_pScriptVM != 0 )
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
    {
      v2 = args->m_ppArgv[1];
      if ( *v2 == 0 )
        v2 = "";
    }
    v3 = *(*g_pScriptVM + 80LL);
    CFmtStrN<256,false>::CFmtStrN(&v4, "ScriptFunctionHelp( \"%s\" )", v2);
    v3(g_pScriptVM, v4.m_szBuf, 1);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_help2  (line 3756, @0x0000000001f2c460, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "DumpScriptBindings()", "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_help2(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( g_pScriptVM != 0 )
  {
    (*(*g_pScriptVM + 80LL))(g_pScriptVM, "DumpScriptBindings()", 1);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// script_dump_all  (line 3766, @0x0000000001f2c3f0, libserver.so)
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "Scripting disabled or no server running\n"
// globals: g_pScriptVM
void __fastcall script_dump_all(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( g_pScriptVM != 0 )
  {
    (*(*g_pScriptVM + 416LL))(g_pScriptVM, args);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "Scripting disabled or no server running\n");
  }
}


// CVScriptGameSystem::BuildGameSessionManifest  (line 3793, @0x0000000001f2a6a0, libserver.so)
void __fastcall CVScriptGameSystem::BuildGameSessionManifest(
        CVScriptGameSystem *const this,
        const EventBuildGameSessionManifest_t *const msg)
{
  ;
}


// CVScriptGameSystem::GameInit  (line 3797, @0x0000000001f401c0, libserver.so)  // inlines: Clear
// calls: CUtlLinkedList<CScrollingScreenOverlay::TextLine_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int> >::RemoveAll
// globals: g_ScriptErrorScreenOverlay
void __fastcall CVScriptGameSystem::GameInit(CVScriptGameSystem *const this, const EventGameInit_t *const msg)
{
  this->m_bAllowEntityCreationInScripts = 1;
  CUtlLinkedList<CScrollingScreenOverlay::TextLine_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t,unsigned short>,unsigned short>>::RemoveAll(&g_ScriptErrorScreenOverlay.m_Text);
  (*(this->_vptr_IGameSystem + 40))(this);
}


// CVScriptGameSystem::GameShutdown  (line 3811, @0x0000000001f38c80, libserver.so)
// calls: VScriptServerToggleGameDebug
// globals: g_bVscriptGameDebugEnabled
void __fastcall CVScriptGameSystem::GameShutdown(CVScriptGameSystem *const this, const EventGameShutdown_t *const msg)
{
  bool v2; // zf

  v2 = !g_bVscriptGameDebugEnabled;
  this->m_bAllowEntityCreationInScripts = 0;
  if ( v2 )
  {
    (*(this->_vptr_IGameSystem + 41))(this, msg);
  }
  else
  {
    VScriptServerToggleGameDebug();
    g_bVscriptGameDebugEnabled = 1;
    (*(this->_vptr_IGameSystem + 41))(this);
  }
}


// CVScriptGameSystem::GetScriptLanguage  (line 3824, @0x0000000001f2a6b0, libserver.so)
ScriptLanguage_t __fastcall CVScriptGameSystem::GetScriptLanguage(CVScriptGameSystem *const this)
{
  return ScriptLanguage_t::SL_LUA;
}


// CVScriptGameSystem::InitVM  (line 3829, @0x0000000001f38d50, libserver.so)  // inlines: GetBool, GetInt, GetVM, Init, SetLessFunc, _V_strcmp
// calls: LoggingSystem_IsChannelEnabled, VScriptConnectDebugger, CommandLine, LoggingSystem_Log, DevWarning(char const*,...)
// callers: CVScriptGameSystem::VScriptInit
// strings: "-vscriptdebug", "VSCRIPT: Started VScript virtual machine using script language '%s'\n", "WAITING FOR VSCRIPT DEBUGGER CONNECTION -- '-vscriptdebug' was provided on the command li, "VM Did not start!\n"
// globals: g_pScriptVM, VScriptServerScriptErrorFunc(ScriptErrorLevel_t,char const*), CDefOps<CUtlSymbol>::LessFunc(CUtlSymbol const&,CUtlSymbol const&)
void __fastcall CVScriptGameSystem::InitVM(CVScriptGameSystem *const this)
{
  unsigned int v2; // eax
  IScriptVM *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r12
  HSCRIPT v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  bool v11; // zf
  __int64 v12; // rax
  char *v13; // rdi
  __int64 v14; // rcx
  _BYTE *v15; // rsi
  void (__fastcall *v16)(__int64, __int64); // r12
  __int64 v17; // rax
  const char *v18; // rax

  v2 = (*(this->_vptr_IGameSystem + 55))(this);
  v3 = (*(*g_pScriptManager + 88LL))(g_pScriptManager, v2);
  g_pScriptVM = v3;
  if ( v3 == 0 )
  {
    DevWarning("VM Did not start!\n");
    return;
  }
  if ( developer.m_pParent->m_Value.m_nValue == 0 )
  {
    if ( this->m_ScriptScopeCache.m_Tree.m_LessFunc.m_LessFunc != 0 )
      goto LABEL_4;
LABEL_15:
    v11 = this->m_CompiledScriptCache.m_Tree.m_LessFunc.m_LessFunc == 0;
    this->m_ScriptScopeCache.m_Tree.m_LessFunc.m_LessFunc = CDefOps<CUtlSymbol>::LessFunc;
    if ( !v11 )
      goto LABEL_5;
LABEL_16:
    this->m_CompiledScriptCache.m_Tree.m_LessFunc.m_LessFunc = CDefOps<CUtlSymbol>::LessFunc;
    goto LABEL_5;
  }
  (*(*v3 + 56LL))(v3);
  v3 = g_pScriptVM;
  if ( this->m_ScriptScopeCache.m_Tree.m_LessFunc.m_LessFunc == 0 )
    goto LABEL_15;
LABEL_4:
  if ( this->m_CompiledScriptCache.m_Tree.m_LessFunc.m_LessFunc == 0 )
    goto LABEL_16;
LABEL_5:
  v4 = (*(*v3 + 448LL))(v3);
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = (*(*g_pScriptVM + 128LL))(g_pScriptVM, v4);
    this->m_RootTable.m_flags = 0;
    this->m_RootTable.m_hScope = v6;
  }
  (*(*g_pScriptVM + 136LL))(g_pScriptVM, v5);
  if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 0) != 0 )
  {
    v18 = (*(*g_pScriptVM + 24LL))(g_pScriptVM);
    LoggingSystem_Log(LOG_VSCRIPT, 0, "VSCRIPT: Started VScript virtual machine using script language '%s'\n", v18);
  }
  if ( script_attach_debugger_at_startup.m_pParent->m_Value.m_nValue != 0
    || (v9 = CommandLine(v7, v8), (*(*v9 + 24LL))(v9, "-vscriptdebug", 0) != 0) )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
      LoggingSystem_Log(
        LOG_VSCRIPT,
        1,
        "WAITING FOR VSCRIPT DEBUGGER CONNECTION -- '-vscriptdebug' was provided on the command line.\n");
    VScriptConnectDebugger();
  }
  else
  {
    v10 = (*(*g_pScriptManager + 104LL))(g_pScriptManager);
    v12 = (*(*v10 + 32LL))(v10);
    v13 = "server";
    v14 = 7;
    v15 = v12;
    do
    {
      if ( v14 == 0 )
        break;
      v11 = *v15++ == *v13++;
      --v14;
    }
    while ( v11 );
    if ( v11 )
    {
      v16 = *(*v10 + 16LL);
      v17 = (*(*g_pScriptVM + 32LL))(g_pScriptVM, v15);
      v16(v10, v17);
    }
  }
  (*(*g_pScriptVM + 432LL))(g_pScriptVM, VScriptServerScriptErrorFunc);
}


// CVScriptGameSystem::DestroyVM  (line 3872, @0x0000000001f39040, libserver.so)  // inlines: Count, Free, GetVM, Purge, RemoveAll, Term
// calls: CEntityScriptFramework::DisconnectFromVM
// callers: CVScriptGameSystem::VScriptTerm
// globals: g_pScriptVM
void __fastcall CVScriptGameSystem::DestroyVM(CVScriptGameSystem *const this)
{
  IScriptVM *v2; // r14
  int v3; // ebx
  __int64 v4; // r13
  HSCRIPT__ **v5; // rdx
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  if ( g_pScriptVM != 0 )
  {
    CEntityScriptFramework::DisconnectFromVM(&g_EntityScriptFramework);
    (*(this->_vptr_IGameSystem + 50))(this);
    if ( this->m_RootTable.m_hScope != 0 )
    {
      v2 = g_pScriptVM;
      v3 = 0;
      if ( g_pScriptVM != 0 )
      {
        while ( 1 )
        {
          m_pData = this->m_RootTable.m_FuncHandles.m_pData;
          if ( m_pData != 0 )
          {
            if ( v3 >= m_pData->m_Size )
              goto LABEL_9;
          }
          else if ( v3 >= 0 )
          {
LABEL_9:
            if ( m_pData != 0 )
              goto LABEL_10;
            goto LABEL_11;
          }
          v4 = v3;
          v5 = m_pData->m_Elements[v3++];
          (*(*v2 + 152LL))(v2, *v5);
          *this->m_RootTable.m_FuncHandles.m_pData->m_Elements[v4] = 0;
        }
      }
      if ( this->m_RootTable.m_FuncHandles.m_pData != 0 )
      {
LABEL_10:
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        this->m_RootTable.m_FuncHandles.m_pData = 0;
      }
LABEL_11:
      if ( this->m_RootTable.m_hScope != 0 && v2 != 0 && (this->m_RootTable.m_flags & 1) == 0 )
      {
        (*(*v2 + 136LL))(v2);
        this->m_RootTable.m_hScope = 0;
      }
      else
      {
        this->m_RootTable.m_hScope = 0;
      }
    }
    this->m_RootTable.m_flags = 0;
    (*(*g_pScriptManager + 96LL))(g_pScriptManager, g_pScriptVM);
    g_pScriptVM = 0;
  }
}


// CVScriptGameSystem::CompileScript  (line 3884, @0x0000000001f2bf50, libserver.so)
// calls: CEntityScriptFramework::CompileScript
HSCRIPT __fastcall CVScriptGameSystem::CompileScript(
        CVScriptGameSystem *const this,
        const char *pszScriptName,
        bool bWarnMissing)
{
  return CEntityScriptFramework::CompileScript(&g_EntityScriptFramework, pszScriptName, bWarnMissing);
}


// CVScriptGameSystem::RunScript  (line 3889, @0x0000000001f2bf80, libserver.so)
// calls: CEntityScriptFramework::RunScript
bool __fastcall CVScriptGameSystem::RunScript(
        CVScriptGameSystem *const this,
        const char *pszScriptName,
        HSCRIPT hScope,
        bool bWarnMissing)
{
  return CEntityScriptFramework::RunScript(&g_EntityScriptFramework, pszScriptName, hScope, bWarnMissing);
}


// CVScriptGameSystem::RunScript  (line 3894, @0x0000000001f2bfb0, libserver.so)
// calls: CEntityScriptFramework::RunScript
bool __fastcall CVScriptGameSystem::RunScript(
        CVScriptGameSystem *const this,
        const char *pszScriptName,
        bool bWarnMissing)
{
  return CEntityScriptFramework::RunScript(&g_EntityScriptFramework, pszScriptName, 0, bWarnMissing);
}


// CVScriptGameSystem::RunScript  (line 3899, @0x0000000001f2bfe0, libserver.so)
// calls: CEntityScriptFramework::RunScript
bool __fastcall CVScriptGameSystem::RunScript(CVScriptGameSystem *const this, const char *pszScript)
{
  return CEntityScriptFramework::RunScript(&g_EntityScriptFramework, pszScript);
}


// CVScriptGameSystem::FetchCachedScriptScope  (line 3904, @0x0000000001f6f580, libserver.so)  // inlines: Element, Find, FindInsertionPosition, Insert, InsertAt, IsIdxValid, IsValidIndex, LeftChild, RightChild, operator(), operator=, operator[]
// calls: CUtlSymbol::CUtlSymbol, CUtlRBTree<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, HSCRIPT__*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, HSCRIPT__*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// globals: g_pScriptVM
HSCRIPT __fastcall CVScriptGameSystem::FetchCachedScriptScope(
        CVScriptGameSystem *const this,
        const char *pszScriptName)
{
  unsigned __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__*>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // rdx
  CUtlMap<CUtlSymbol,HSCRIPT__*,short unsigned int,bool (*)(const CUtlSymbol&,const CUtlSymbol&)>::ElemType_t v7; // rax
  unsigned __int16 v8; // r12
  unsigned __int16 m_Right; // ax
  char v10; // dl
  bool v11; // zf
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__*>::Node_t,short unsigned int> *v12; // rax
  char v13; // cl
  unsigned __int16 v14; // ax
  __int64 v15; // r14
  int (**vptr_IGameSystem)(...); // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__*>::Node_t,short unsigned int> *v17; // rax
  bool isLeft; // [rsp+4h] [rbp-6Ch]
  HSCRIPT hNewScope; // [rsp+8h] [rbp-68h]
  CUtlSymbol key; // [rsp+20h] [rbp-50h] BYREF
  CUtlMap<CUtlSymbol,HSCRIPT__*,short unsigned int,bool (*)(const CUtlSymbol&,const CUtlSymbol&)>::Node_t v23[4]; // [rsp+30h] [rbp-40h] BYREF

  if ( g_pScriptVM == 0 || pszScriptName == 0 )
    return 0;
  CUtlSymbol::CUtlSymbol(&key, pszScriptName);
  m_Root = this->m_ScriptScopeCache.m_Tree.m_Root;
  v23[0].key = key;
  if ( m_Root == 0xFFFF )
  {
LABEL_9:
    v6 = 0xFFFF;
    m_Root = -1;
  }
  else
  {
    m_pMemory = this->m_ScriptScopeCache.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = m_Root;
        if ( !this->m_ScriptScopeCache.m_Tree.m_LessFunc.m_LessFunc(v23, &m_pMemory[v5].m_Data) )
          break;
        m_pMemory = this->m_ScriptScopeCache.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == 0xFFFF )
          goto LABEL_9;
      }
      if ( !this->m_ScriptScopeCache.m_Tree.m_LessFunc.m_LessFunc(
              &this->m_ScriptScopeCache.m_Tree.m_Elements.m_pMemory[v5].m_Data,
              v23) )
        break;
      m_pMemory = this->m_ScriptScopeCache.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v5].m_Right;
      if ( m_Root == 0xFFFF )
        goto LABEL_9;
    }
    v6 = m_Root;
  }
  if ( this->m_ScriptScopeCache.m_Tree.m_Elements.m_nAllocationCount <= v6
    || this->m_ScriptScopeCache.m_Tree.m_LastAlloc.index < m_Root
    || m_Root == 0xFFFF
    || (v17 = &this->m_ScriptScopeCache.m_Tree.m_Elements.m_pMemory[m_Root])->m_Left == m_Root )
  {
    v7 = (*(*g_pScriptVM + 120LL))(g_pScriptVM, pszScriptName, 0);
    v8 = this->m_ScriptScopeCache.m_Tree.m_Root;
    hNewScope = v7;
    v23[0].elem = v7;
    v23[0].key = key;
    if ( v8 != 0xFFFF )
    {
      while ( 1 )
      {
        v11 = !this->m_ScriptScopeCache.m_Tree.m_LessFunc.m_LessFunc(
                 v23,
                 &this->m_ScriptScopeCache.m_Tree.m_Elements.m_pMemory[v8].m_Data);
        v12 = this->m_ScriptScopeCache.m_Tree.m_Elements.m_pMemory;
        if ( v11 )
        {
          m_Right = v12[v8].m_Right;
          v10 = 0;
          if ( m_Right == 0xFFFF )
          {
LABEL_17:
            v13 = v10;
            goto LABEL_18;
          }
        }
        else
        {
          m_Right = v12[v8].m_Left;
          v10 = 1;
          if ( m_Right == 0xFFFF )
            goto LABEL_17;
        }
        v8 = m_Right;
      }
    }
    v8 = -1;
    v13 = 0;
LABEL_18:
    isLeft = v13;
    v14 = CUtlRBTree<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
            &this->m_ScriptScopeCache.m_Tree,
            v23);
    v15 = v14;
    CUtlRBTree<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
      &this->m_ScriptScopeCache.m_Tree,
      v14,
      v8,
      isLeft);
    vptr_IGameSystem = this->_vptr_IGameSystem;
    ++this->m_ScriptScopeCache.m_Tree.m_NumElements;
    if ( vptr_IGameSystem[46](this, pszScriptName, hNewScope, 1) == 0 )
    {
      (*(*g_pScriptVM + 136LL))(g_pScriptVM, this->m_ScriptScopeCache.m_Tree.m_Elements.m_pMemory[v15].m_Data.elem);
      this->m_ScriptScopeCache.m_Tree.m_Elements.m_pMemory[v15].m_Data.elem = 0;
    }
    v17 = &this->m_ScriptScopeCache.m_Tree.m_Elements.m_pMemory[v15];
  }
  return v17->m_Data.elem;
}


// CVScriptGameSystem::ClearCachedScripts  (line 3924, @0x0000000001f446f0, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild, RemoveAll
// calls: CUtlRBTree<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, HSCRIPT__*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll
// globals: g_pScriptVM
void __fastcall CVScriptGameSystem::ClearCachedScripts(CVScriptGameSystem *const this)
{
  __int64 v1; // r13
  int v3; // ebx
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__*>::Node_t,short unsigned int> *m_pMemory; // rcx
  __int64 v6; // r13
  int v7; // ebx
  int v8; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__*>::Node_t,short unsigned int> *v9; // rcx

  if ( g_pScriptVM != 0 )
  {
    v1 = 0;
    v3 = 0;
    m_nAllocationCount = this->m_ScriptScopeCache.m_Tree.m_Elements.m_nAllocationCount;
    if ( m_nAllocationCount != 0 )
    {
      do
      {
        if ( v3 < m_nAllocationCount && v3 <= this->m_ScriptScopeCache.m_Tree.m_LastAlloc.index )
        {
          m_pMemory = this->m_ScriptScopeCache.m_Tree.m_Elements.m_pMemory;
          if ( m_pMemory[v3].m_Left != v3 )
          {
            (*(*g_pScriptVM + 136LL))(g_pScriptVM, m_pMemory[v1].m_Data.elem);
            m_nAllocationCount = this->m_ScriptScopeCache.m_Tree.m_Elements.m_nAllocationCount;
          }
        }
        ++v3;
        ++v1;
      }
      while ( m_nAllocationCount > v3 );
    }
    v6 = 0;
    v7 = 0;
    CUtlRBTree<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_ScriptScopeCache.m_Tree);
    v8 = this->m_CompiledScriptCache.m_Tree.m_Elements.m_nAllocationCount;
    if ( v8 != 0 )
    {
      do
      {
        if ( v7 < v8 && v7 <= this->m_CompiledScriptCache.m_Tree.m_LastAlloc.index )
        {
          v9 = this->m_CompiledScriptCache.m_Tree.m_Elements.m_pMemory;
          if ( v9[v7].m_Left != v7 )
          {
            (*(*g_pScriptVM + 136LL))(g_pScriptVM, v9[v6].m_Data.elem);
            v8 = this->m_CompiledScriptCache.m_Tree.m_Elements.m_nAllocationCount;
          }
        }
        ++v7;
        ++v6;
      }
      while ( v8 > v7 );
    }
    CUtlRBTree<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_CompiledScriptCache.m_Tree);
  }
}


// CVScriptGameSystem::ReloadCachedScripts  (line 3941, @0x0000000001f2a6c0, libserver.so)
// strings: "addon_init"
// globals: g_pVScriptGameSystem
void __fastcall CVScriptGameSystem::ReloadCachedScripts(CVScriptGameSystem *const this)
{
  if ( g_pVScriptGameSystem != 0 )
    (*(g_pVScriptGameSystem[-2]._vptr_IVScriptGameSystem + 50))(g_pVScriptGameSystem - 2);
  else
    (*(loc_0 + 400LL))(0);
  (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 7))(g_pVScriptGameSystem, "init", 0);
  (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 7))(g_pVScriptGameSystem, "addon_init", 0);
}


// CVScriptGameSystem::OnServerGamePostSimulate  (line 3953, @0x0000000001f5aa10, libserver.so)  // inlines: CScriptAccessorT, CScriptScopeT, CUtlVectorUltraConservative, Call, Count, Free, GetBool, GetInt, GetVM, Init, Purge, RemoveAll, Term, curtime, ~CScriptScopeT, ~CUtlVectorUltraConservative
// calls: CScrollingScreenOverlay::Draw, CScriptScopeT<CDefScriptAccessorBase, true>::~CScriptScopeT, _Unwind_Resume
// globals: g_pScriptVM, g_ScriptErrorScreenOverlay, g_bVscriptGameDebugEnabled
void __fastcall CVScriptGameSystem::OnServerGamePostSimulate(
        CVScriptGameSystem *const this,
        const EventServerGamePostSimulate_t *const msg)
{
  IScriptVM *v2; // rdi
  double v3; // xmm0_8
  void (__fastcall *v4)(IScriptVM *, const EventServerGamePostSimulate_t *const, double); // r12
  CGlobalVars *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  __int64 root; // [rsp+10h] [rbp-40h]

  v2 = g_pScriptVM;
  if ( g_pScriptVM != 0 )
  {
    v3 = 0.0;
    v4 = *(*g_pScriptVM + 72LL);
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          (m_pfnWarningFunc)(1, msg, 0.0);
          v2 = g_pScriptVM;
        }
      }
      *&v3 = LODWORD(v5->m_flCurrentTime);
    }
    v4(v2, msg, v3);
  }
  CScrollingScreenOverlay::Draw(&g_ScriptErrorScreenOverlay);
  if ( developer.m_pParent->m_Value.m_nValue != 0 && g_bVscriptGameDebugEnabled )
  {
    root = 0;
    v6 = (*(*g_pScriptVM + 448LL))(g_pScriptVM);
    if ( v6 != 0 )
    {
      v7 = (*(*g_pScriptVM + 128LL))(g_pScriptVM, v6);
      root = v7;
    }
    else
    {
      v7 = 0;
    }
    v8 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, &stru_32DB07A.m_flSubStepInterval + 6, v7, 0);
    v9 = v8;
    if ( v8 != 0 )
    {
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v8, 0, 0, 0, root, 1);
      (*(*g_pScriptVM + 152LL))(g_pScriptVM, v9);
    }
    if ( root != 0 && g_pScriptVM != 0 )
      (*(*g_pScriptVM + 136LL))(g_pScriptVM);
  }
}


// CVScriptGameSystem::FrameBoundary  (line 3973, @0x0000000001f2a740, libserver.so)
// globals: g_pScriptVM
void __fastcall CVScriptGameSystem::FrameBoundary(
        CVScriptGameSystem *const this,
        const EventGameFrameBoundary_t *const msg)
{
  __int64 v2; // rbx
  void (__fastcall *v3)(__int64, __int64); // r12
  __int64 v4; // rax

  v2 = (*(*g_pScriptManager + 104LL))(g_pScriptManager, msg);
  v3 = *(*v2 + 24LL);
  v4 = (*(*g_pScriptVM + 32LL))(g_pScriptVM);
  v3(v2, v4);
}


// CVScriptGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 3985, @0x0000000001f39190, libserver.so)
void __cdecl CVScriptGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CBaseEntityScriptInstanceHelper::ToString  (line 4140, @0x0000000001f2aaf0, libserver.so)  // inlines: CUtlSymbolLarge, GetClassName, GetEntityName, entindex
// calls: CEntityInstance::GetEntityIndex, V_snprintf
// strings: "([%d] %s: %s)", "([%d] %s)"
bool __fastcall CBaseEntityScriptInstanceHelper::ToString(
        CBaseEntityScriptInstanceHelper *const this,
        void *p,
        char *pBuf,
        int bufSize)
{
  __int64 v6; // rax
  const char *v7; // rbx
  const char *v8; // rax
  const char *v9; // r14
  CEntityIndex v10; // eax
  const char *v12; // rbx
  CEntityIndex v13; // eax

  v6 = *(p + 1);
  v7 = *(v6 + 24);
  v8 = *(v6 + 32);
  if ( v7 != 0 )
  {
    v9 = "";
    if ( v8 != 0 )
      v9 = v8;
    v10.m_Data = CEntityInstance::GetEntityIndex(p).m_Data;
    V_snprintf(pBuf, bufSize, "([%d] %s: %s)", v10.m_Data, v9, v7);
    return 1;
  }
  else
  {
    v12 = "";
    if ( v8 != 0 )
      v12 = v8;
    v13.m_Data = CEntityInstance::GetEntityIndex(p).m_Data;
    V_snprintf(pBuf, bufSize, "([%d] %s)", v13.m_Data, v12);
    return 1;
  }
}


// GetHScriptEntityFromScriptTable  (line 4186, @0x0000000001f3ac00, libserver.so)  // inlines: CVariantBase, Free, GetEHandle, GetEntryIndex, GetSerialNumber, HScriptToEntity<CBaseEntity>, Set, ToEnt, operator=, ~CVariantBase
// calls: GetScriptDesc<CEntityInstance>, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDOTA_ProjectileManager::Script_CreateLinearProjectile, CDOTA_ProjectileManager::Script_CreateTrackingProjectile
// globals: g_pScriptVM
bool __fastcall GetHScriptEntityFromScriptTable(HSCRIPT hTable, const char *pszVarName, EHANDLE *const hEnt)
{
  bool v4; // bl
  uint64 m_uint64; // rbx
  __int64 (__fastcall *v7)(IScriptVM *, uint64, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int16 v12; // cx
  ScriptVariant_t ValueVariant; // [rsp+0h] [rbp-30h] BYREF

  ValueVariant.m_type = 0;
  ValueVariant.m_flags = 0;
  ValueVariant.m_uint64 = 0;
  v4 = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, pszVarName, &ValueVariant) != 0 && ValueVariant.m_type == 31 )
  {
    m_uint64 = ValueVariant.m_uint64;
    if ( ValueVariant.m_uint64 != 0
      && (v7 = *(*g_pScriptVM + 208LL),
          Script = GetScriptDesc<CEntityInstance>(0),
          (v9 = v7(g_pScriptVM, m_uint64, Script)) != 0)
      && (v10 = *(v9 + 8)) != 0 )
    {
      v11 = (*(v10 + 16) >> 15) - (*(v10 + 48) & 1);
      v12 = 0x7FFF;
      if ( *(v10 + 16) != -1 )
        v12 = *(v10 + 16) & 0x7FFF;
      v4 = 1;
      LOWORD(hEnt->m_Index) = v12 | hEnt->m_Index & 0x8000;
      hEnt->m_Index = (v11 << 15) | hEnt->m_Index & 0x7FFF;
    }
    else
    {
      hEnt->m_Index = -1;
      v4 = 1;
    }
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &ValueVariant);
  if ( (ValueVariant.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, ValueVariant.m_uint64);
  return v4;
}


