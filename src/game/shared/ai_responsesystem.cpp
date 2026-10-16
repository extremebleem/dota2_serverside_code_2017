// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/ai_responsesystem.cpp:65
class CScenePrecacheSystem : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	CUtlMap<int, int, short unsigned int, bool (*)(int const&, int const&)> m_RepeatCounts;  // +0x18
	typedef CAutoGameSystem BaseClass;

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CScenePrecacheSystem *);
	CScenePrecacheSystem();
	virtual void PreSpawnGroupUnload(const EventPreSpawnGroupUnload_t &);
	bool ShouldPrecache(const char *);
	virtual ~CScenePrecacheSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[16] PreSpawnGroupUnload
	// sizeof = 64
};

// src/game/shared/ai_responsesystem.cpp:232
class CInstancedResponseSystem : public IResponseSystem {
public:

protected:

	const CSpeechScriptBridge & m_rr2;  // +0x10
	CInstancedResponseSystem(const CInstancedResponseSystem &);
	CInstancedResponseSystem(const char *);
	virtual ~CInstancedResponseSystem();
	void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	void ResetResponseGroups();
	virtual bool FindBestResponse(const CResponseCriteriaSet &, CRR_Response &, IResponseFilter *);
	virtual void GetAllResponses(CUtlVector<CRR_Response, CUtlMemory<CRR_Response, int> > *);
	virtual void PrecacheResponses(bool);
	void Clear();
	void Precache(IEntityResourceManifest *);
	bool ShouldPrecache();
	const CUtlDict<ResponseGroup, short int> & GetResponses();
	CUtlDict<ResponseGroup, short int> & GetResponses();

	// vtable[2] FindBestResponse
	// vtable[3] GetAllResponses
	// vtable[4] PrecacheResponses
	// sizeof = 24
};

// src/game/shared/ai_responsesystem.cpp:316
class CDefaultResponseSystem : public CAutoGameSystem, public IResponseSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	typedef Crr2LibPort ShadowLib_t;

	ShadowLib_t * m_prr2shadow;  // +0x58
	typedef CAutoGameSystem BaseClass;
	CDefaultResponseSystem(const CDefaultResponseSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDefaultResponseSystem *);
	CDefaultResponseSystem();
	virtual ~CDefaultResponseSystem();
	bool StaticInit();
	virtual void Shutdown();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	void AddInstancedResponseSystem(const char *, CInstancedResponseSystem *);
	CInstancedResponseSystem * FindResponseSystem(const char *);
	IResponseSystem * FindCustomResponseSystem(const char *);
	IResponseSystem * FindOrCreateCustomResponseSystem(const char *);
	IResponseSystem * PrecacheCustomResponseSystem(IEntityResourceManifest *, const char *);
	virtual void BuildGameSessionManifest(const EventBuildGameSessionManifest_t &);
	virtual void GameActivate(const EventGameActivate_t &);
	void ReloadAllResponseSystems();
	virtual bool FindBestResponse(const CResponseCriteriaSet &, CRR_Response &, IResponseFilter *);
	void Clear();
	void Precache(IEntityResourceManifest *);
	bool ShouldPrecache();
	void ResetResponseGroups();
	bool IsCustomManagable();
	virtual void GetAllResponses(CUtlVector<CRR_Response, CUtlMemory<CRR_Response, int> > *);
	virtual void PrecacheResponses(bool);
	const CUtlDict<ResponseGroup, short int> & GetResponses();
	CUtlDict<ResponseGroup, short int> & GetResponses();

private:

	void ClearInstanced();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[2] Shutdown
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[15] PostSpawnGroupLoad
	// vtable[7] BuildGameSessionManifest
	// vtable[8] GameActivate
	// vtable[40] FindBestResponse
	// vtable[41] GetAllResponses
	// vtable[42] PrecacheResponses
	// sizeof = 112
};

// src/game/shared/ai_responsesystem.cpp:561
class CDefaultResponseSystemSaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler {
public:

private:

	bool m_fDoLoad;  // +0x8
	CDefaultResponseSystemSaveRestoreBlockHandler(CDefaultResponseSystemSaveRestoreBlockHandler &);
	CDefaultResponseSystemSaveRestoreBlockHandler(const CDefaultResponseSystemSaveRestoreBlockHandler &);
	CDefaultResponseSystemSaveRestoreBlockHandler();
	virtual const char * GetBlockName();
	virtual void WriteSaveHeaders(ISave *);
	virtual void ReadRestoreHeaders(IRestore *);
	virtual void Save(ISave *);
	virtual void Restore(IRestore *, SpawnGroupHandle_t, bool);

	// vtable[0] GetBlockName
	// vtable[3] WriteSaveHeaders
	// vtable[6] ReadRestoreHeaders
	// vtable[2] Save
	// vtable[7] Restore
	// sizeof = 16
};

// src/game/shared/ai_responsesystem.cpp:698
class CResponseSystemSaveRestoreOps : public CDefSaveRestoreOps {
public:

	CResponseSystemSaveRestoreOps(CResponseSystemSaveRestoreOps &);
	CResponseSystemSaveRestoreOps(const CResponseSystemSaveRestoreOps &);
	CResponseSystemSaveRestoreOps();
	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);

	// vtable[0] Save
	// vtable[1] Restore
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ParserResponse::AddDatadescMetadataKeys  (line 43, @0x000000000205e400, libserver.so)
void __fastcall ParserResponse::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// ParserResponse::GetBaseMap  (line 43, @0x000000000205e410, libserver.so)
datamap_t *__cdecl ParserResponse::GetBaseMap()
{
  return 0;
}


// DataMapInit<ParserResponse>  (line 43, @0x000000000205e420, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "ParserResponse"
// globals: `guard variable for'DataMapInit<ParserResponse>(ParserResponse *)::nameHolder, ParserResponse::m_DataMap, DataMapInit<ParserResponse>(ParserResponse *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<ParserResponse>(ParserResponse *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<ParserResponse>(ParserResponse *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<ParserResponse>(ParserResponse *)::nameHolder) != 0 )
  {
    DataMapInit<ParserResponse>(ParserResponse *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<ParserResponse>(ParserResponse *)::nameHolder.m_pszBase = "ParserResponse";
    DataMapInit<ParserResponse>(ParserResponse *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<ParserResponse>(ParserResponse *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<ParserResponse>(ParserResponse *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<ParserResponse>(ParserResponse *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<ParserResponse>(ParserResponse *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<ParserResponse>(ParserResponse *)::nameHolder,
      &_dso_handle);
  }
  ParserResponse::m_DataMap.baseMap = 0;
  ParserResponse::m_DataMap.dataDesc = &DataMapInit<ParserResponse>(ParserResponse *)::dataDesc[1];
  ParserResponse::m_DataMap.dataNumFields = 1;
  return &ParserResponse::m_DataMap;
}


// ResponseGroup::AddDatadescMetadataKeys  (line 53, @0x000000000205e4e0, libserver.so)
void __fastcall ResponseGroup::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// ResponseGroup::GetBaseMap  (line 53, @0x000000000205e4f0, libserver.so)
datamap_t *__cdecl ResponseGroup::GetBaseMap()
{
  return 0;
}


// DataMapInit<ResponseGroup>  (line 53, @0x000000000205e500, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "ResponseGroup"
// globals: `guard variable for'DataMapInit<ResponseGroup>(ResponseGroup *)::nameHolder, ResponseGroup::m_DataMap, DataMapInit<ResponseGroup>(ResponseGroup *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<ResponseGroup>(ResponseGroup *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<ResponseGroup>(ResponseGroup *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<ResponseGroup>(ResponseGroup *)::nameHolder) != 0 )
  {
    DataMapInit<ResponseGroup>(ResponseGroup *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<ResponseGroup>(ResponseGroup *)::nameHolder.m_pszBase = "ResponseGroup";
    DataMapInit<ResponseGroup>(ResponseGroup *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<ResponseGroup>(ResponseGroup *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<ResponseGroup>(ResponseGroup *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<ResponseGroup>(ResponseGroup *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<ResponseGroup>(ResponseGroup *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<ResponseGroup>(ResponseGroup *)::nameHolder,
      &_dso_handle);
  }
  ResponseGroup::m_DataMap.baseMap = 0;
  ResponseGroup::m_DataMap.dataDesc = &DataMapInit<ResponseGroup>(ResponseGroup *)::dataDesc[1];
  ResponseGroup::m_DataMap.dataNumFields = 3;
  return &ResponseGroup::m_DataMap;
}


// CScenePrecacheSystem::~CScenePrecacheSystem  (line 65, @0x0000000002095ca0, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<int, int>::Node_t, short unsigned int, CUtlMap<int, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int>::Purge, IGameSystem::~IGameSystem
void __fastcall CScenePrecacheSystem::~CScenePrecacheSystem(CScenePrecacheSystem *const this)
{
  CUtlMap<int,int,short unsigned int,bool (*)(int const&,int const&)> *p_m_RepeatCounts; // rdi

  p_m_RepeatCounts = &this->m_RepeatCounts;
  *&p_m_RepeatCounts[-1].m_Tree.m_Elements.m_nAllocationCount = off_3FECE50;
  CUtlRBTree<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&p_m_RepeatCounts->m_Tree);
  if ( (this->m_RepeatCounts.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_RepeatCounts.m_Tree.m_Elements);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CScenePrecacheSystem::~CScenePrecacheSystem  (line 65, @0x0000000002095cf0, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CScenePrecacheSystem, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<int, int>::Node_t, short unsigned int, CUtlMap<int, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int>::Purge, IGameSystem::~IGameSystem, operator delete
void __fastcall CScenePrecacheSystem::~CScenePrecacheSystem(CScenePrecacheSystem *const this)
{
  CUtlMap<int,int,short unsigned int,bool (*)(int const&,int const&)> *p_m_RepeatCounts; // rdi

  p_m_RepeatCounts = &this->m_RepeatCounts;
  *&p_m_RepeatCounts[-1].m_Tree.m_Elements.m_nAllocationCount = off_3FECE50;
  CUtlRBTree<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&p_m_RepeatCounts->m_Tree);
  if ( (this->m_RepeatCounts.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_RepeatCounts.m_Tree.m_Elements);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CScenePrecacheSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 67, @0x000000000208eb40, libserver.so)
void __fastcall CScenePrecacheSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CScenePrecacheSystem *const this)
{
  ;
}


// CScenePrecacheSystem::DoesGameSystemReallocate  (line 67, @0x000000000208eb50, libserver.so)
// globals: CScenePrecacheSystem::sm_Factory
bool __fastcall CScenePrecacheSystem::DoesGameSystemReallocate(const CScenePrecacheSystem *const this)
{
  return (*(CScenePrecacheSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CScenePrecacheSystem::sm_Factory);
}


// CScenePrecacheSystem::SetGameSystemGlobalPtrs  (line 67, @0x000000000208eb70, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CScenePrecacheSystem::sm_Factory
void __fastcall CScenePrecacheSystem::SetGameSystemGlobalPtrs(CScenePrecacheSystem *const this, void *pValue)
{
  if ( CScenePrecacheSystem::sm_Factory != 0 )
    (*(CScenePrecacheSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CScenePrecacheSystem::sm_Factory, pValue);
}


// CScenePrecacheSystem::PreSpawnGroupUnload  (line 75, @0x0000000002095c90, libserver.so)  // inlines: Purge
// calls: CUtlRBTree<CUtlMap<int, int>::Node_t, short unsigned int, CUtlMap<int, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int> >::Purge
void __fastcall CScenePrecacheSystem::PreSpawnGroupUnload(
        CScenePrecacheSystem *const this,
        const EventPreSpawnGroupUnload_t *const msg)
{
  CUtlRBTree<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_RepeatCounts.m_Tree);
}


// CScenePrecacheSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 101, @0x000000000205e5c0, libserver.so)
void __cdecl CScenePrecacheSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// PrecacheInstancedScene  (line 107, @0x0000000002089070, libserver.so)  // inlines: Element, Find, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, ShouldPrecache, operator(), operator[]
// calls: HashStringFastCaselessConventional, CUtlRBTree<CUtlMap<int, int>::Node_t, short unsigned int, CUtlMap<int, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, int>::Node_t, short unsigned int, CUtlMap<int, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CBaseEntity::PrecacheScriptSound, CommandLine
// callers: GameResponseSystem_Precache, CSceneEntity::Precache
// strings: "-makereslists"
// globals: g_pScenePrecacheSystem, PrecacheInstancedScene(char const*,IEntityResourceManifest *)::nMakingReslists
void __fastcall PrecacheInstancedScene(const char *pszScene, IEntityResourceManifest *pManifest)
{
  CScenePrecacheSystem *v3; // r14
  __int64 m_Root; // rbx
  UtlRBTreeNode_t<CUtlMap<int,int>::Node_t,short unsigned int> *m_pMemory; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int16 v8; // r15
  __int64 v9; // rcx
  unsigned __int16 v10; // bx
  unsigned __int16 m_Right; // ax
  bool v12; // zf
  UtlRBTreeNode_t<CUtlMap<int,int>::Node_t,short unsigned int> *v13; // rax
  unsigned __int16 v14; // ax
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rdx
  __int16 v20; // ax
  const char *v21; // rax
  __int64 v22; // rax
  bool isLeft; // [rsp+Ch] [rbp-54h]
  unsigned int msecs; // [rsp+10h] [rbp-50h]
  SceneCachedData_t sceneData; // [rsp+20h] [rbp-40h] BYREF

  v3 = g_pScenePrecacheSystem;
  sceneData.msecs = HashStringFastCaselessConventional(pszScene);
  msecs = sceneData.msecs;
  m_Root = v3->m_RepeatCounts.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
  {
    sceneData.m_fLastSpeakSecs = 0.0;
    v10 = -1;
    LOBYTE(v9) = 0;
  }
  else
  {
    m_pMemory = v3->m_RepeatCounts.m_Tree.m_Elements.m_pMemory;
    do
    {
      while ( 1 )
      {
        v6 = m_Root;
        if ( !v3->m_RepeatCounts.m_Tree.m_LessFunc.m_LessFunc(&sceneData, &m_pMemory[v6].m_Data) )
          break;
        m_pMemory = v3->m_RepeatCounts.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[v6].m_Left;
        if ( m_Root == 0xFFFF )
          goto LABEL_7;
      }
      if ( !v3->m_RepeatCounts.m_Tree.m_LessFunc.m_LessFunc(
              &v3->m_RepeatCounts.m_Tree.m_Elements.m_pMemory[v6].m_Data,
              &sceneData) )
      {
        ++v3->m_RepeatCounts.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem;
        return;
      }
      m_pMemory = v3->m_RepeatCounts.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v6].m_Right;
    }
    while ( m_Root != 0xFFFF );
LABEL_7:
    v8 = v3->m_RepeatCounts.m_Tree.m_Root;
    v9 = 0;
    sceneData.m_fLastSpeakSecs = 0.0;
    v10 = -1;
    sceneData.msecs = msecs;
    if ( v8 != 0xFFFF )
    {
      while ( 1 )
      {
        v12 = (v3->m_RepeatCounts.m_Tree.m_LessFunc.m_LessFunc)(
                &sceneData,
                &v3->m_RepeatCounts.m_Tree.m_Elements.m_pMemory[v8].m_Data,
                v7,
                v9) == 0;
        v13 = v3->m_RepeatCounts.m_Tree.m_Elements.m_pMemory;
        if ( v12 )
        {
          m_Right = v13[v8].m_Right;
          v9 = 0;
          if ( m_Right == 0xFFFF )
          {
LABEL_13:
            v10 = v8;
            break;
          }
        }
        else
        {
          m_Right = v13[v8].m_Left;
          v9 = 1;
          if ( m_Right == 0xFFFF )
            goto LABEL_13;
        }
        v8 = m_Right;
      }
    }
  }
  isLeft = v9;
  v14 = CUtlRBTree<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &v3->m_RepeatCounts.m_Tree,
          &sceneData);
  CUtlRBTree<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,int,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &v3->m_RepeatCounts.m_Tree,
    v14,
    v10,
    isLeft);
  v17 = PrecacheInstancedScene(char const*,IEntityResourceManifest *)::nMakingReslists;
  ++v3->m_RepeatCounts.m_Tree.m_NumElements;
  if ( v17 == -1 )
  {
    v22 = CommandLine(v15, v16);
    v17 = (*(*v22 + 64LL))(v22, "-makereslists") > 0;
    PrecacheInstancedScene(char const*,IEntityResourceManifest *)::nMakingReslists = v17;
  }
  if ( v17 == 1 )
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 7))(&g_pFullFileSystem->IBaseFileSystem, pszScene, 0);
  if ( (*(*scenefilecache + 104LL))(scenefilecache, pszScene, &sceneData) != 0 && sceneData.numSounds > 0 )
  {
    v18 = 0;
    do
    {
      v19 = v18++;
      v20 = (*(*scenefilecache + 112LL))(scenefilecache, sceneData.sceneId, v19);
      v21 = (*(*scenefilecache + 120LL))(scenefilecache, v20);
      CBaseEntity::PrecacheScriptSound(v21, pManifest);
    }
    while ( v18 < sceneData.numSounds );
  }
  (*(g_pStringTableClientSideChoreoScenes->_vptr_INetworkStringTable + 8))(
    g_pStringTableClientSideChoreoScenes,
    1,
    pszScene,
    0xFFFFFFFFLL,
    0);
}


// GameResponseSystem_Precache  (line 153, @0x00000000020892c0, libserver.so)  // inlines: Base, Element, TouchFile, V_strncpy<long unsigned int>, operator[], strstr
// calls: CommandLine, _V_strncpy, strstr, V_snprintf, PrecacheInstancedScene, CBaseEntity::PrecacheScriptSound, __stack_chk_fail
// callers: CDefaultResponseSystem::BuildGameSessionManifest, PrecacheCustomResponseSystem, rr_reloadresponsesystems
// strings: "-makereslists", "$gender", "%smale%s", "%sfemale%s"
void __fastcall GameResponseSystem_Precache(
        const CUtlDict<ResponseGroup,short int> *const dict,
        IEntityResourceManifest *pManifest)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,ResponseGroup,short int,bool (*)(char const* const&,char const* const&)>::Node_t,short int> *v6; // r15
  char *v7; // rax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v9; // rax
  __int64 v10; // rdx
  __int64 v12; // [rsp+10h] [rbp-2060h]
  int i; // [rsp+18h] [rbp-2058h]
  bool bTouchFiles; // [rsp+1Fh] [rbp-2051h]
  const char *postGender; // [rsp+28h] [rbp-2048h]
  char file[4096]; // [rsp+30h] [rbp-2040h] BYREF
  char genderFile[4104]; // [rsp+1030h] [rbp-1040h] BYREF
  unsigned __int64 v19; // [rsp+2038h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  v3 = CommandLine(dict, pManifest);
  v12 = 0;
  i = 0;
  for ( bTouchFiles = (*(*v3 + 64LL))(v3, "-makereslists") != 0; dict->m_Elements.m_Tree.m_NumElements > i; ++v12 )
  {
    v4 = 0;
    v5 = 0;
    v6 = &dict->m_Elements.m_Tree.m_Elements.m_pMemory[v12];
    if ( v6->m_Data.elem.group.m_nCount > 0 )
    {
      do
      {
        if ( v6->m_Data.elem.group.m_nAllocated != 0 )
          m_pElements = v6->m_Data.elem.group.m_pElements;
        else
          m_pElements = 0;
        v9 = &m_pElements[v4];
        v10 = *(v9 + 81) & 0x3F;
        if ( v10 == 1 )
        {
          CBaseEntity::PrecacheScriptSound(v9->value, pManifest);
        }
        else if ( v10 == 3 )
        {
          LOWORD(v10) = 4096;
          _V_strncpy(file, v9->value, v10);
          v7 = strstr(file, "$gender");
          if ( v7 != 0 )
          {
            *v7 = 0;
            postGender = v7 + 7;
            V_snprintf(genderFile, 4096, "%smale%s", file, v7 + 7);
            PrecacheInstancedScene(genderFile, pManifest);
            if ( bTouchFiles )
            {
              (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 7))(&g_pFullFileSystem->IBaseFileSystem, genderFile, 0);
              V_snprintf(genderFile, 4096, "%sfemale%s", file, postGender);
              PrecacheInstancedScene(genderFile, pManifest);
              (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 7))(&g_pFullFileSystem->IBaseFileSystem, genderFile, 0);
            }
            else
            {
              V_snprintf(genderFile, 4096, "%sfemale%s", file, postGender);
              PrecacheInstancedScene(genderFile, pManifest);
            }
          }
          else
          {
            PrecacheInstancedScene(file, pManifest);
            if ( bTouchFiles )
              (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 7))(&g_pFullFileSystem->IBaseFileSystem, file, 0);
          }
        }
        ++v5;
        ++v4;
      }
      while ( v6->m_Data.elem.group.m_nCount > v5 );
    }
    ++i;
  }
}


// ShouldPrecacheResponsesDefault  (line 220, @0x000000000205e5d0, libserver.so)
bool __cdecl ShouldPrecacheResponsesDefault()
{
  return 0;
}


// CInstancedResponseSystem::~CInstancedResponseSystem  (line 243, @0x0000000002092d30, libserver.so)  // inlines: DoRelease, Release, ~IResponseSystem
void __fastcall CInstancedResponseSystem::~CInstancedResponseSystem(CInstancedResponseSystem *const this)
{
  CGameResponseSystem *m_pWrapped; // rbx

  this->_vptr_IResponseSystem = off_3FED010;  // vptr: CInstancedResponseSystem
  m_pWrapped = this->m_pWrapped;
  if ( m_pWrapped != 0 )
  {
    if ( _InterlockedSub(&m_pWrapped->m_iRefs, 1u) == 0
      && (*(m_pWrapped->_vptr_CRefCountServiceBase + 2))(&m_pWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >) != 0 )
    {
      (*(m_pWrapped->_vptr_CRefCountServiceBase + 1))(&m_pWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >);
    }
    this->m_pWrapped = 0;
  }
  this->_vptr_IResponseSystem = off_3FECD30;  // vptr: IResponseSystem
}


// CInstancedResponseSystem::~CInstancedResponseSystem  (line 243, @0x0000000002092da0, libserver.so)  // inlines: DoRelease, Release, ~CInstancedResponseSystem, ~IResponseSystem
// calls: operator delete
void __fastcall CInstancedResponseSystem::~CInstancedResponseSystem(CInstancedResponseSystem *const this)
{
  CGameResponseSystem *m_pWrapped; // r12

  this->_vptr_IResponseSystem = off_3FED010;  // vptr: CInstancedResponseSystem
  m_pWrapped = this->m_pWrapped;
  if ( m_pWrapped != 0 )
  {
    if ( _InterlockedSub(&m_pWrapped->m_iRefs, 1u) == 0
      && (*(m_pWrapped->_vptr_CRefCountServiceBase + 2))(&m_pWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >) != 0 )
    {
      (*(m_pWrapped->_vptr_CRefCountServiceBase + 1))(&m_pWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >);
    }
    this->m_pWrapped = 0;
  }
  this->_vptr_IResponseSystem = off_3FECD30;  // vptr: IResponseSystem
  operator delete(this);
}


// CInstancedResponseSystem::FindBestResponse  (line 262, @0x000000000208ff20, libserver.so)
// calls: CSpeechScriptBridge::FindBestResponse, CResponseSystem::SpewDebugInfo
bool __fastcall CInstancedResponseSystem::FindBestResponse(
        CInstancedResponseSystem *const this,
        const CResponseCriteriaSet *const set,
        CRR_Response *const response,
        IResponseFilter *pFilter)
{
  bool BestResponse; // al
  bool v9; // cl
  char v10; // bl
  rr2::MatchInfo_t match; // [rsp+0h] [rbp-50h] BYREF

  BestResponse = CSpeechScriptBridge::FindBestResponse(this->m_rr2, set, &match, response, pFilter);
  v9 = 1;
  v10 = BestResponse;
  if ( !BestResponse )
  {
    v10 = (*(this->m_pWrapped->_vptr_IResponseSystem + 2))(this->m_pWrapped, set, response, pFilter);
    v9 = v10;
  }
  CResponseSystem::SpewDebugInfo(this->m_pWrapped, set, response, v9);
  return v10;
}


// CInstancedResponseSystem::GetAllResponses  (line 273, @0x000000000208eba0, libserver.so)
void __fastcall CInstancedResponseSystem::GetAllResponses(
        CInstancedResponseSystem *const this,
        CUtlVector<CRR_Response,CUtlMemory<CRR_Response,int> > *pResponses)
{
  (*(this->m_pWrapped->_vptr_IResponseSystem + 3))(this->m_pWrapped, pResponses);
}


// CInstancedResponseSystem::PrecacheResponses  (line 277, @0x000000000208ebc0, libserver.so)
void __fastcall CInstancedResponseSystem::PrecacheResponses(CInstancedResponseSystem *const this, bool bEnable)
{
  (*(this->m_pWrapped->_vptr_IResponseSystem + 4))(this->m_pWrapped, bEnable);
}


// CDefaultResponseSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 318, @0x000000000208ebe0, libserver.so)
void __fastcall CDefaultResponseSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDefaultResponseSystem *const this)
{
  ;
}


// CDefaultResponseSystem::DoesGameSystemReallocate  (line 318, @0x000000000208ebf0, libserver.so)
// globals: CDefaultResponseSystem::sm_Factory
bool __fastcall CDefaultResponseSystem::DoesGameSystemReallocate(const CDefaultResponseSystem *const this)
{
  return (*(CDefaultResponseSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CDefaultResponseSystem::sm_Factory);
}


// CDefaultResponseSystem::SetGameSystemGlobalPtrs  (line 318, @0x000000000208ec10, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDefaultResponseSystem::sm_Factory
void __fastcall CDefaultResponseSystem::SetGameSystemGlobalPtrs(CDefaultResponseSystem *const this, void *pValue)
{
  if ( CDefaultResponseSystem::sm_Factory != 0 )
    (*(CDefaultResponseSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CDefaultResponseSystem::sm_Factory, pValue);
}


// CDefaultResponseSystem::~CDefaultResponseSystem  (line 334, @0x0000000002096660, libserver.so)  // inlines: DoRelease, FirstInorder, LeftChild, NextInorder, Purge, Release, operator[], ~CAutoGameSystem, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlString, ~IResponseSystem
// calls: Crr2LibPort::~Crr2LibPort, operator delete, CUtlString::FreeMemoryBlock, CUtlRBTree<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, IGameSystem::~IGameSystem
void __fastcall CDefaultResponseSystem::~CDefaultResponseSystem(CDefaultResponseSystem *const this)
{
  CGameResponseSystem *m_pPreviousWrapped; // rbx
  CDefaultResponseSystem::ShadowLib_t *m_prr2shadow; // rbx
  bool v4; // zf
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v7; // rcx
  int m_Left; // esi

  m_pPreviousWrapped = this->m_pPreviousWrapped;
  this->_vptr_IGameSystem = off_3FED150;  // vptr: CDefaultResponseSystem
  this->_vptr_IResponseSystem = off_3FED2B8;
  if ( m_pPreviousWrapped != 0 )
  {
    if ( _InterlockedSub(&m_pPreviousWrapped->m_iRefs, 1u) == 0
      && (*(m_pPreviousWrapped->_vptr_CRefCountServiceBase + 2))(&m_pPreviousWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >) != 0 )
    {
      (*(m_pPreviousWrapped->_vptr_CRefCountServiceBase + 1))(&m_pPreviousWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >);
    }
    this->m_pPreviousWrapped = 0;
  }
  m_prr2shadow = this->m_prr2shadow;
  if ( m_prr2shadow != 0 )
  {
    Crr2LibPort::~Crr2LibPort(this->m_prr2shadow);
    operator delete(m_prr2shadow);
  }
  v4 = this->m_sResponseSystemFullPath.m_pString == 0;
  this->m_prr2shadow = 0;
  if ( !v4 )
    CUtlString::FreeMemoryBlock(&this->m_sResponseSystemFullPath);
  m_Root = this->m_InstancedSystems.m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_InstancedSystems.m_Elements.m_Tree.m_Elements.m_pMemory;
    v7 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v7 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v7].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_InstancedSystems.m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_InstancedSystems.m_Elements.m_Tree.m_Elements.m_pMemory;
      v7 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_InstancedSystems.m_Elements.m_Tree);
  CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_InstancedSystems.m_Elements.m_Tree);
  if ( (this->m_InstancedSystems.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_InstancedSystems.m_Elements.m_Tree.m_Elements);
  this->_vptr_IResponseSystem = off_3FECD30;  // vptr: IResponseSystem
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CDefaultResponseSystem::~CDefaultResponseSystem  (line 334, @0x00000000020967e0, libserver.so)  // inlines: DoRelease, FirstInorder, LeftChild, NextInorder, Purge, Release, operator[], ~CAutoGameSystem, ~CDefaultResponseSystem, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlString, ~IResponseSystem
// calls: Crr2LibPort::~Crr2LibPort, operator delete, CUtlString::FreeMemoryBlock, CUtlRBTree<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, IGameSystem::~IGameSystem
void __fastcall CDefaultResponseSystem::~CDefaultResponseSystem(CDefaultResponseSystem *const this)
{
  CGameResponseSystem *m_pPreviousWrapped; // rbx
  CDefaultResponseSystem::ShadowLib_t *m_prr2shadow; // rbx
  bool v4; // zf
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v7; // rcx
  int m_Left; // esi

  m_pPreviousWrapped = this->m_pPreviousWrapped;
  this->_vptr_IGameSystem = off_3FED150;  // vptr: CDefaultResponseSystem
  this->_vptr_IResponseSystem = off_3FED2B8;
  if ( m_pPreviousWrapped != 0 )
  {
    if ( _InterlockedSub(&m_pPreviousWrapped->m_iRefs, 1u) == 0
      && (*(m_pPreviousWrapped->_vptr_CRefCountServiceBase + 2))(&m_pPreviousWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >) != 0 )
    {
      (*(m_pPreviousWrapped->_vptr_CRefCountServiceBase + 1))(&m_pPreviousWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >);
    }
    this->m_pPreviousWrapped = 0;
  }
  m_prr2shadow = this->m_prr2shadow;
  if ( m_prr2shadow != 0 )
  {
    Crr2LibPort::~Crr2LibPort(this->m_prr2shadow);
    operator delete(m_prr2shadow);
  }
  v4 = this->m_sResponseSystemFullPath.m_pString == 0;
  this->m_prr2shadow = 0;
  if ( !v4 )
    CUtlString::FreeMemoryBlock(&this->m_sResponseSystemFullPath);
  m_Root = this->m_InstancedSystems.m_Elements.m_Tree.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_InstancedSystems.m_Elements.m_Tree.m_Elements.m_pMemory;
    v7 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v7 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v7].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_InstancedSystems.m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_InstancedSystems.m_Elements.m_Tree.m_Elements.m_pMemory;
      v7 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_InstancedSystems.m_Elements.m_Tree);
  CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_InstancedSystems.m_Elements.m_Tree);
  if ( (this->m_InstancedSystems.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_InstancedSystems.m_Elements.m_Tree.m_Elements);
  this->_vptr_IResponseSystem = off_3FECD30;  // vptr: IResponseSystem
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDefaultResponseSystem::PostSpawnGroupLoad  (line 355, @0x000000000208ec40, libserver.so)
void __fastcall CDefaultResponseSystem::PostSpawnGroupLoad(
        CDefaultResponseSystem *const this,
        const EventPostSpawnGroupLoad_t *const msg)
{
  ;
}


// CDefaultResponseSystem::FindOrCreateCustomResponseSystem  (line 378, @0x0000000001999a74, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/ai_respon, "FindOrCreateCustomResponseSystem", "Failed to load response system data from %s"
Color __fastcall CDefaultResponseSystem::FindOrCreateCustomResponseSystem(
        CDefaultResponseSystem *const this,
        const char *scriptfile)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  const char *v7; // rdi
  LeafCodeInfo_t v9; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v9.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/ai_responsesystem.cpp";
    v9.m_szFunction = "FindOrCreateCustomResponseSystem";
    v9.m_nLine = 388;
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v9,
      "Failed to load response system data from %s",
      this);
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v5, v6, v3, v4) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  return GetNetworkGroupColor(v7);
}


// CDefaultResponseSystem::BuildGameSessionManifest  (line 411, @0x0000000002099a90, libserver.so)  // inlines: Precache
// calls: GameResponseSystem_Precache
void __fastcall CDefaultResponseSystem::BuildGameSessionManifest(
        CDefaultResponseSystem *const this,
        const EventBuildGameSessionManifest_t *const msg)
{
  CGameResponseSystem *m_pWrapped; // rdi

  m_pWrapped = this->m_pWrapped;
  if ( m_pWrapped->m_bPrecache )
    GameResponseSystem_Precache(&m_pWrapped->m_Responses, msg->m_pResourceManifest);
}


// CDefaultResponseSystem::GameActivate  (line 423, @0x000000000208ffa0, libserver.so)  // inlines: ResetResponseGroups
// calls: CResponseSystem::ResetResponseGroups
void __fastcall CDefaultResponseSystem::GameActivate(
        CDefaultResponseSystem *const this,
        const EventGameActivate_t *const msg)
{
  CResponseSystem::ResetResponseGroups(this->m_pWrapped);
}


// CDefaultResponseSystem::GetAllResponses  (line 484, @0x000000000208ec50, libserver.so)
void __fastcall CDefaultResponseSystem::GetAllResponses(
        CDefaultResponseSystem *const this,
        CUtlVector<CRR_Response,CUtlMemory<CRR_Response,int> > *pResponses)
{
  (*(this->m_pWrapped->_vptr_IResponseSystem + 3))(this->m_pWrapped, pResponses);
}


// CDefaultResponseSystem::PrecacheResponses  (line 488, @0x000000000208ec80, libserver.so)
void __fastcall CDefaultResponseSystem::PrecacheResponses(CDefaultResponseSystem *const this, bool bEnable)
{
  (*(this->m_pWrapped->_vptr_IResponseSystem + 4))(this->m_pWrapped, bEnable);
}


// CDefaultResponseSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 528, @0x000000000205e5e0, libserver.so)
void __cdecl CDefaultResponseSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GetDefaultResponseSystem  (line 530, @0x000000000205e5f0, libserver.so)
// callers: CAI_ExpresserHost<CBasePlayer>::GetResponseSystem, CAI_ExpresserHost<CFlexExpresserShim>::GetResponseSystem
// globals: g_pResponseSystem
IResponseSystem *__cdecl GetDefaultResponseSystem()
{
  IResponseSystem *result; // rax

  result = 0;
  if ( g_pResponseSystem != 0 && g_pResponseSystem != &stru_10 )
    return g_pResponseSystem;
  return result;
}


// rr_reloadresponsesystems  (line 535, @0x00000000020897b0, libserver.so)  // inlines: Clear, DoRelease, Element, FreeNode, GetDefaultResponseSystem, Precache, Release, ReloadAllResponseSystems, RemoveAt, SetLeftChild, SetRightChild, operator[]
// calls: UTIL_IsCommandIssuedByServerAdmin, CResponseSystem::Clear, CUtlRBTree<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Unlink, GameResponseSystem_Precache
// strings: "scripts/talker/response_rules.txt"
// globals: g_pResponseSystem
void __fastcall rr_reloadresponsesystems(const CCommandContext *const ctx, const CCommand *const args)
{
  IResponseSystem *v2; // rbx
  int (**vptr_IResponseSystem)(...); // r12
  int v4; // r12d
  __int64 v5; // r13
  int (**v6)(...); // rax
  int (*v7)(...); // rcx

  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    v2 = g_pResponseSystem;
    if ( g_pResponseSystem != 0 && g_pResponseSystem != &stru_10 )
    {
      CResponseSystem::Clear(g_pResponseSystem[2]._vptr_IResponseSystem);
      vptr_IResponseSystem = v2[2]._vptr_IResponseSystem;
      if ( vptr_IResponseSystem != 0
        && _InterlockedSub(vptr_IResponseSystem + 4, 1u) == 0
        && (*(vptr_IResponseSystem[1] + 2))(vptr_IResponseSystem + 1) != 0 )
      {
        (*(vptr_IResponseSystem[1] + 1))(vptr_IResponseSystem + 1);
      }
      v2[2]._vptr_IResponseSystem = (*(*responserulesfilecache + 88LL))(
                                      responserulesfilecache,
                                      "scripts/talker/response_rules.txt",
                                      0);
      v4 = HIDWORD(v2[6]._vptr_IResponseSystem) - 1;
      v5 = 4LL * v4;
      if ( v4 >= 0 )
      {
        do
        {
          while ( 1 )
          {
            v6 = &v2[4]._vptr_IResponseSystem[v5];
            v7 = v6[3];
            if ( *(v2[2]._vptr_IResponseSystem + 20680) != 0 )
              break;
            --v4;
            v5 -= 4;
            CResponseSystem::Clear(*(v7 + 1));
            if ( v4 == -1 )
              goto LABEL_11;
          }
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6[2], *g_pMemAlloc, v7);
          CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Unlink(
            &v2[3],
            v4);
          LODWORD(v2[4]._vptr_IResponseSystem[v5]) = v4;
          HIDWORD(v2[4]._vptr_IResponseSystem[v5]) = v2[7]._vptr_IResponseSystem;
          v5 -= 4;
          --HIDWORD(v2[6]._vptr_IResponseSystem);
          LODWORD(v2[7]._vptr_IResponseSystem) = v4--;
        }
        while ( v4 != -1 );
      }
LABEL_11:
      GameResponseSystem_Precache((v2[2]._vptr_IResponseSystem + 3), 0);
    }
  }
}


// CDefaultResponseSystemSaveRestoreBlockHandler::GetBlockName  (line 564, @0x000000000208ecb0, libserver.so)
const char *__fastcall CDefaultResponseSystemSaveRestoreBlockHandler::GetBlockName(
        const CDefaultResponseSystemSaveRestoreBlockHandler *const this)
{
  return "ResponseSystem";
}


// CDefaultResponseSystemSaveRestoreBlockHandler::WriteSaveHeaders  (line 569, @0x000000000208ecc0, libserver.so)
// globals: RESPONSESYSTEM_SAVE_RESTORE_VERSION
void __fastcall CDefaultResponseSystemSaveRestoreBlockHandler::WriteSaveHeaders(
        CDefaultResponseSystemSaveRestoreBlockHandler *const this,
        ISave *pSave)
{
  (*(pSave->_vptr_ISave + 10))(pSave, &RESPONSESYSTEM_SAVE_RESTORE_VERSION, 1);
}


// CDefaultResponseSystemSaveRestoreBlockHandler::ReadRestoreHeaders  (line 574, @0x000000000208ece0, libserver.so)
// globals: RESPONSESYSTEM_SAVE_RESTORE_VERSION
void __fastcall CDefaultResponseSystemSaveRestoreBlockHandler::ReadRestoreHeaders(
        CDefaultResponseSystemSaveRestoreBlockHandler *const this,
        IRestore *pRestore)
{
  __int16 version[9]; // [rsp+Eh] [rbp-12h] BYREF

  (*(pRestore->_vptr_IRestore + 23))(pRestore, version, 1, 0);
  this->m_fDoLoad = version[0] == RESPONSESYSTEM_SAVE_RESTORE_VERSION;
}


// CDefaultResponseSystemSaveRestoreBlockHandler::Save  (line 582, @0x0000000002092390, libserver.so)  // inlines: Base, Element, GetDefaultResponseSystem, GetElementName, Key, WriteAll<ParserResponse>, WriteAll<ResponseGroup>, operator[]
// strings: "ResponseGroup", "responsegroup", "responsevalue"
// globals: g_pResponseSystem, ResponseGroup::m_DataMap, ParserResponse::m_DataMap
void __fastcall CDefaultResponseSystemSaveRestoreBlockHandler::Save(
        CDefaultResponseSystemSaveRestoreBlockHandler *const this,
        ISave *pSave)
{
  IResponseSystem *v2; // rax
  __int64 v4; // r13
  int v5; // r14d
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rbx
  int (**vptr_IResponseSystem)(...); // [rsp+10h] [rbp-50h]
  int i; // [rsp+1Ch] [rbp-44h]
  __int16 groupCount; // [rsp+2Ah] [rbp-36h] BYREF
  int count[13]; // [rsp+2Ch] [rbp-34h] BYREF

  v2 = 0;
  if ( g_pResponseSystem != 0 )
    v2 = g_pResponseSystem - 2;
  vptr_IResponseSystem = v2[4]._vptr_IResponseSystem;
  count[0] = *(vptr_IResponseSystem + 25);
  (*(pSave->_vptr_ISave + 11))(pSave, count, 1);
  for ( i = 0; count[0] > i; ++i )
  {
    v4 = 0;
    v5 = 0;
    (*(pSave->_vptr_ISave + 7))(pSave, "ResponseGroup");
    v6 = 40LL * i;
    (*(pSave->_vptr_ISave + 38))(pSave, "responsegroup", *(vptr_IResponseSystem[4] + v6 + 8));
    v7 = vptr_IResponseSystem[4] + v6;
    (*(pSave->_vptr_ISave + 5))(pSave, v7 + 16, &ResponseGroup::m_DataMap);
    groupCount = *(v7 + 16);
    (*(pSave->_vptr_ISave + 10))(pSave, &groupCount, 1);
    if ( groupCount > 0 )
    {
      do
      {
        if ( *(v7 + 18) != 0 )
          v8 = *(v7 + 24);
        else
          v8 = 0;
        v9 = v4 + v8;
        ++v5;
        v4 += 90;
        (*(pSave->_vptr_ISave + 7))(pSave, "Response");
        (*(pSave->_vptr_ISave + 38))(pSave, "responsevalue", *(v9 + 82));
        (*(pSave->_vptr_ISave + 5))(pSave, v9, &ParserResponse::m_DataMap);
        (*(pSave->_vptr_ISave + 9))(pSave);
      }
      while ( groupCount > v5 );
    }
    (*(pSave->_vptr_ISave + 9))(pSave);
  }
}


// CDefaultResponseSystemSaveRestoreBlockHandler::Restore  (line 613, @0x000000000207c370, libserver.so)  // inlines: Base, CUtlLeanVector, CUtlLeanVectorBase, CUtlLeanVectorImpl, Destruct<ParserResponse>, Element, Find, GetDefaultResponseSystem, LeftChild, Node_t, Purge, ReadAll<ParserResponse>, ReadAll<ResponseGroup>, RemoveAll, ResponseGroup, RightChild, operator(), operator[], ~CUtlLeanVector, ~CUtlLeanVectorBase, ~CUtlLeanVectorImpl, ~Node_t, ~ResponseGroup
// calls: V_stricmp_fast, ParserResponse::~ParserResponse, __stack_chk_fail, CUtlLeanVectorBase<ParserResponse, short int>::Purge, _Unwind_Resume
// callers: CDefaultResponseSystemSaveRestoreBlockHandler::Restore
// strings: "ResponseGroup"
// globals: g_pResponseSystem, ResponseGroup::m_DataMap, ParserResponse::m_DataMap
void __fastcall CDefaultResponseSystemSaveRestoreBlockHandler::Restore(
        CDefaultResponseSystemSaveRestoreBlockHandler *const this,
        IRestore *pRestore,
        SpawnGroupHandle_t handle,
        bool fCreatePlayers)
{
  IResponseSystem *v5; // rax
  int (**vptr_IResponseSystem)(...); // r15
  __int64 v7; // rbx
  int (*v8)(...); // rdx
  __int64 v9; // r14
  __int16 v10; // ax
  __int64 v11; // r13
  int v12; // r14d
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int16 v15; // ax
  __int64 v16; // r15
  int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // rsi
  int (**v20)(...); // [rsp+8h] [rbp-2D8h]
  int count; // [rsp+28h] [rbp-2B8h]
  int v22; // [rsp+2Ch] [rbp-2B4h]
  int i; // [rsp+30h] [rbp-2B0h]
  int j; // [rsp+34h] [rbp-2ACh]
  char *v25; // [rsp+40h] [rbp-2A0h] BYREF
  __int16 v26; // [rsp+48h] [rbp-298h]
  __int16 v27; // [rsp+4Ah] [rbp-296h]
  __int64 v28; // [rsp+50h] [rbp-290h]
  char v29; // [rsp+58h] [rbp-288h]
  char v30; // [rsp+59h] [rbp-287h]
  char v31; // [rsp+5Ah] [rbp-286h]
  char v32; // [rsp+5Bh] [rbp-285h]
  char szResponseGroupBlockName[32]; // [rsp+60h] [rbp-280h] BYREF
  char szResponseBlockName[32]; // [rsp+80h] [rbp-260h] BYREF
  char groupname[256]; // [rsp+A0h] [rbp-240h] BYREF
  char responsename[264]; // [rsp+1A0h] [rbp-140h] BYREF
  unsigned __int64 v37; // [rsp+2A8h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  v5 = 0;
  if ( g_pResponseSystem != 0 )
    v5 = g_pResponseSystem - 2;
  vptr_IResponseSystem = v5[4]._vptr_IResponseSystem;
  i = 0;
  count = (*(this->_vptr_ISaveRestoreBlockHandler + 13))(this, pRestore);
  if ( count > 0 )
  {
    do
    {
      (*(this->_vptr_ISaveRestoreBlockHandler + 6))(this, szResponseGroupBlockName);
      if ( V_stricmp_fast(szResponseGroupBlockName, "ResponseGroup") == 0 )
      {
        (*(this->_vptr_ISaveRestoreBlockHandler + 22))(this, groupname, 256, 0);
        v25 = groupname;
        v26 = 0;
        v7 = *(vptr_IResponseSystem + 24);
        v27 = 0;
        v28 = 0;
        v29 = 1;
        v30 = 0;
        v31 = 1;
        v32 = v32 & 0xE0 | 1;
        if ( v7 == 0xFFFF )
        {
          v10 = 0;
        }
        else
        {
          v8 = vptr_IResponseSystem[4];
          do
          {
            while ( 1 )
            {
              v9 = 40LL * v7;
              if ( vptr_IResponseSystem[3](&v25, v8 + v9 + 8) == 0 )
                break;
              v8 = vptr_IResponseSystem[4];
              v7 = *(v8 + 20 * v7);
              if ( v7 == 0xFFFF )
                goto LABEL_13;
            }
            if ( vptr_IResponseSystem[3](vptr_IResponseSystem[4] + v9 + 8, &v25) == 0 )
              break;
            v8 = vptr_IResponseSystem[4];
            v7 = *(v8 + v9 + 2);
          }
          while ( v7 != 0xFFFF );
LABEL_13:
          v10 = v27;
          if ( v27 != 0 )
            v11 = v28;
          else
            v11 = 0;
          if ( v26 > 0 )
          {
            v12 = 0;
            do
            {
              v13 = v12++;
              ParserResponse::~ParserResponse((v11 + 90 * v13));
            }
            while ( v12 < v26 );
            v10 = v27;
          }
        }
        v26 = 0;
        if ( v10 > 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v28);
        if ( v7 != 0xFFFF )
        {
          v14 = vptr_IResponseSystem[4] + 40 * v7;
          (*(this->_vptr_ISaveRestoreBlockHandler + 2))(this, v14 + 16, &ResponseGroup::m_DataMap);
          v15 = (*(this->_vptr_ISaveRestoreBlockHandler + 12))(this);
          if ( v15 > 0 )
          {
            v20 = vptr_IResponseSystem;
            j = 1;
            v22 = v15 + 1;
            do
            {
              (*(this->_vptr_ISaveRestoreBlockHandler + 6))(this, szResponseBlockName);
              if ( V_stricmp_fast(szResponseBlockName, "Response") == 0 )
              {
                (*(this->_vptr_ISaveRestoreBlockHandler + 22))(this, responsename, 256, 0);
                if ( *(v14 + 16) > 0 )
                {
                  v16 = 0;
                  v17 = 0;
                  while ( 1 )
                  {
                    v18 = *(v14 + 18) != 0 ? *(v14 + 24) : 0LL;
                    if ( V_stricmp_fast(*(v18 + v16 + 82), responsename) == 0 )
                      break;
                    ++v17;
                    v16 += 90;
                    if ( v17 >= *(v14 + 16) )
                      goto LABEL_24;
                  }
                  if ( *(v14 + 16) > v17 )
                  {
                    if ( *(v14 + 18) != 0 )
                      v19 = *(v14 + 24);
                    else
                      v19 = 0;
                    (*(this->_vptr_ISaveRestoreBlockHandler + 2))(this, v16 + v19, &ParserResponse::m_DataMap);
                  }
                }
              }
LABEL_24:
              (*(this->_vptr_ISaveRestoreBlockHandler + 8))(this);
              ++j;
            }
            while ( j != v22 );
            vptr_IResponseSystem = v20;
          }
        }
      }
      (*(this->_vptr_ISaveRestoreBlockHandler + 8))(this);
      ++i;
    }
    while ( i != count );
  }
}


// CDefaultResponseSystemSaveRestoreBlockHandler::Restore  (line 613, @0x0000000002095bb0, libserver.so)
// calls: CDefaultResponseSystemSaveRestoreBlockHandler::Restore
void __fastcall CDefaultResponseSystemSaveRestoreBlockHandler::Restore(
        CDefaultResponseSystemSaveRestoreBlockHandler *const this,
        IRestore *pRestore,
        SpawnGroupHandle_t handle,
        bool fCreatePlayers)
{
  if ( this->m_fDoLoad )
    CDefaultResponseSystemSaveRestoreBlockHandler::Restore(pRestore, pRestore, handle, fCreatePlayers);
}


// GetDefaultResponseSystemSaveRestoreBlockHandler  (line 683, @0x000000000205e610, libserver.so)
// callers: CSource2Server::Shutdown, CSource2Server::Init
// globals: g_DefaultResponseSystemSaveRestoreBlockHandler
ISaveRestoreBlockHandler *__cdecl GetDefaultResponseSystemSaveRestoreBlockHandler()
{
  return &g_DefaultResponseSystemSaveRestoreBlockHandler;
}


// CResponseSystemSaveRestoreOps::Save  (line 702, @0x0000000002092520, libserver.so)  // inlines: Base, Element, GetElementName, Key, WriteAll<ParserResponse>, WriteAll<ResponseGroup>, operator[]
// strings: "ResponseGroup", "responsegroup", "responsevalue"
// globals: g_pResponseSystem, ResponseGroup::m_DataMap, ParserResponse::m_DataMap
void __fastcall CResponseSystemSaveRestoreOps::Save(
        CResponseSystemSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  IResponseSystem *v3; // rax
  __int64 v5; // r13
  int v6; // r14d
  __int64 v7; // r12
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rbx
  int (**vptr_IResponseSystem)(...); // [rsp-1Ah] [rbp-58h]
  int i; // [rsp-Eh] [rbp-4Ch]
  __int16 groupCount; // [rsp+0h] [rbp-3Eh] BYREF
  int count[15]; // [rsp+2h] [rbp-3Ch] BYREF

  v3 = *fieldInfo->pField;
  if ( v3 != 0 && v3 != g_pResponseSystem )
  {
    vptr_IResponseSystem = v3[1]._vptr_IResponseSystem;
    count[0] = *(vptr_IResponseSystem + 25);
    (*(pSave->_vptr_ISave + 11))(pSave, count, 1);
    for ( i = 0; count[0] > i; ++i )
    {
      v5 = 0;
      v6 = 0;
      (*(pSave->_vptr_ISave + 7))(pSave, "ResponseGroup");
      v7 = 40LL * i;
      (*(pSave->_vptr_ISave + 38))(pSave, "responsegroup", *(vptr_IResponseSystem[4] + v7 + 8));
      v8 = vptr_IResponseSystem[4] + v7;
      (*(pSave->_vptr_ISave + 5))(pSave, v8 + 16, &ResponseGroup::m_DataMap);
      groupCount = *(v8 + 16);
      (*(pSave->_vptr_ISave + 10))(pSave, &groupCount, 1);
      if ( groupCount > 0 )
      {
        do
        {
          if ( *(v8 + 18) != 0 )
            v9 = *(v8 + 24);
          else
            v9 = 0;
          v10 = v5 + v9;
          ++v6;
          v5 += 90;
          (*(pSave->_vptr_ISave + 7))(pSave, "Response");
          (*(pSave->_vptr_ISave + 38))(pSave, "responsevalue", *(v10 + 82));
          (*(pSave->_vptr_ISave + 5))(pSave, v10, &ParserResponse::m_DataMap);
          (*(pSave->_vptr_ISave + 9))(pSave);
        }
        while ( groupCount > v6 );
      }
      (*(pSave->_vptr_ISave + 9))(pSave);
    }
  }
}


// CResponseSystemSaveRestoreOps::Restore  (line 738, @0x0000000002095790, libserver.so)  // inlines: Base, CUtlLeanVector, CUtlLeanVectorBase, CUtlLeanVectorImpl, Destruct<ParserResponse>, Element, Find, LeftChild, Node_t, Purge, ReadAll<ParserResponse>, ReadAll<ResponseGroup>, RemoveAll, ResponseGroup, RightChild, operator(), operator[], ~CUtlLeanVector, ~CUtlLeanVectorBase, ~CUtlLeanVectorImpl, ~Node_t, ~ResponseGroup
// calls: V_stricmp_fast, ParserResponse::~ParserResponse, __stack_chk_fail, CUtlLeanVectorBase<ParserResponse, short int>::Purge, _Unwind_Resume
// strings: "ResponseGroup"
// globals: g_pResponseSystem, ResponseGroup::m_DataMap, ParserResponse::m_DataMap
void __fastcall CResponseSystemSaveRestoreOps::Restore(
        CResponseSystemSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  IResponseSystem *v3; // rax
  int (**vptr_IResponseSystem)(...); // r15
  __int64 v6; // rbx
  int (*v7)(...); // rdx
  __int64 v8; // r14
  __int16 v9; // ax
  __int64 v10; // r13
  int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int16 v14; // ax
  __int64 v15; // r15
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rsi
  int (**v19)(...); // [rsp+8h] [rbp-2D8h]
  int count; // [rsp+28h] [rbp-2B8h]
  int v21; // [rsp+2Ch] [rbp-2B4h]
  int i; // [rsp+30h] [rbp-2B0h]
  int j; // [rsp+34h] [rbp-2ACh]
  char *v24; // [rsp+40h] [rbp-2A0h] BYREF
  __int16 v25; // [rsp+48h] [rbp-298h]
  __int16 v26; // [rsp+4Ah] [rbp-296h]
  __int64 v27; // [rsp+50h] [rbp-290h]
  char v28; // [rsp+58h] [rbp-288h]
  char v29; // [rsp+59h] [rbp-287h]
  char v30; // [rsp+5Ah] [rbp-286h]
  char v31; // [rsp+5Bh] [rbp-285h]
  char szResponseGroupBlockName[32]; // [rsp+60h] [rbp-280h] BYREF
  char szResponseBlockName[32]; // [rsp+80h] [rbp-260h] BYREF
  char groupname[256]; // [rsp+A0h] [rbp-240h] BYREF
  char responsename[264]; // [rsp+1A0h] [rbp-140h] BYREF
  unsigned __int64 v36; // [rsp+2A8h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  v3 = *fieldInfo->pField;
  if ( v3 != 0 && v3 != g_pResponseSystem )
  {
    vptr_IResponseSystem = v3[1]._vptr_IResponseSystem;
    count = (*(pRestore->_vptr_IRestore + 13))(pRestore);
    if ( count > 0 )
    {
      for ( i = 0; i != count; ++i )
      {
        (*(pRestore->_vptr_IRestore + 6))(pRestore, szResponseGroupBlockName);
        if ( V_stricmp_fast(szResponseGroupBlockName, "ResponseGroup") == 0 )
        {
          (*(pRestore->_vptr_IRestore + 22))(pRestore, groupname, 256, 0);
          v24 = groupname;
          v6 = *(vptr_IResponseSystem + 24);
          v25 = 0;
          v26 = 0;
          v28 = 1;
          v27 = 0;
          v29 = 0;
          v30 = 1;
          v31 = v31 & 0xE0 | 1;
          if ( v6 == 0xFFFF )
          {
            v9 = 0;
          }
          else
          {
            v7 = vptr_IResponseSystem[4];
            do
            {
              while ( 1 )
              {
                v8 = 40LL * v6;
                if ( vptr_IResponseSystem[3](&v24, v7 + v8 + 8) == 0 )
                  break;
                v7 = vptr_IResponseSystem[4];
                v6 = *(v7 + 20 * v6);
                if ( v6 == 0xFFFF )
                  goto LABEL_13;
              }
              if ( vptr_IResponseSystem[3](vptr_IResponseSystem[4] + v8 + 8, &v24) == 0 )
                break;
              v7 = vptr_IResponseSystem[4];
              v6 = *(v7 + v8 + 2);
            }
            while ( v6 != 0xFFFF );
LABEL_13:
            v9 = v26;
            if ( v26 != 0 )
              v10 = v27;
            else
              v10 = 0;
            if ( v25 > 0 )
            {
              v11 = 0;
              do
              {
                v12 = v11++;
                ParserResponse::~ParserResponse((v10 + 90 * v12));
              }
              while ( v11 < v25 );
              v9 = v26;
            }
          }
          v25 = 0;
          if ( v9 > 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v27);
          if ( v6 != 0xFFFF )
          {
            v13 = vptr_IResponseSystem[4] + 40 * v6;
            (*(pRestore->_vptr_IRestore + 2))(pRestore, v13 + 16, &ResponseGroup::m_DataMap);
            v14 = (*(pRestore->_vptr_IRestore + 12))(pRestore);
            if ( v14 > 0 )
            {
              v19 = vptr_IResponseSystem;
              j = 1;
              v21 = v14 + 1;
              do
              {
                (*(pRestore->_vptr_IRestore + 6))(pRestore, szResponseBlockName);
                if ( V_stricmp_fast(szResponseBlockName, "Response") == 0 )
                {
                  (*(pRestore->_vptr_IRestore + 22))(pRestore, responsename, 256, 0);
                  if ( *(v13 + 16) > 0 )
                  {
                    v15 = 0;
                    v16 = 0;
                    while ( 1 )
                    {
                      v17 = *(v13 + 18) != 0 ? *(v13 + 24) : 0LL;
                      if ( V_stricmp_fast(*(v17 + v15 + 82), responsename) == 0 )
                        break;
                      ++v16;
                      v15 += 90;
                      if ( *(v13 + 16) <= v16 )
                        goto LABEL_24;
                    }
                    if ( *(v13 + 16) > v16 )
                    {
                      if ( *(v13 + 18) != 0 )
                        v18 = *(v13 + 24);
                      else
                        v18 = 0;
                      (*(pRestore->_vptr_IRestore + 2))(pRestore, v15 + v18, &ParserResponse::m_DataMap);
                    }
                  }
                }
LABEL_24:
                (*(pRestore->_vptr_IRestore + 8))(pRestore);
                ++j;
              }
              while ( j != v21 );
              vptr_IResponseSystem = v19;
            }
          }
        }
        (*(pRestore->_vptr_IRestore + 8))(pRestore);
      }
    }
  }
}


// CDefaultResponseSystem::StaticInit  (line 813, @0x000000000205e620, libserver.so)  // inlines: SetCriteriaSymbolTable
bool __cdecl CDefaultResponseSystem::StaticInit()
{
  CResponseCriteriaSet::sm_pCriteriaSymbols = (*(*responserulesfilecache + 104LL))(responserulesfilecache);
  return 1;
}


// CDefaultResponseSystem::Shutdown  (line 819, @0x000000000205c690, libserver.so)  // inlines: DoRelease, Release
void __fastcall CDefaultResponseSystem::Shutdown(CDefaultResponseSystem *const this)
{
  CGameResponseSystem *m_pPreviousWrapped; // rbx

  m_pPreviousWrapped = this->m_pPreviousWrapped;
  if ( m_pPreviousWrapped != 0 )
  {
    if ( _InterlockedSub(&m_pPreviousWrapped->m_iRefs, 1u) == 0
      && (*(m_pPreviousWrapped->_vptr_CRefCountServiceBase + 2))(&m_pPreviousWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >) != 0 )
    {
      (*(m_pPreviousWrapped->_vptr_CRefCountServiceBase + 1))(&m_pPreviousWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >);
    }
    this->m_pPreviousWrapped = 0;
  }
}


// CDefaultResponseSystem::GameInit  (line 828, @0x000000000205cdd0, libserver.so)  // inlines: DoRelease, Release, _V_strcmp
// calls: CUtlString::Get, strcmp, CUtlString::operator=, Crr2LibPort::rr2Warning, Crr2LibPort::~Crr2LibPort, operator delete, Warning, __stack_chk_fail
// callers: CDefaultResponseSystem::GameInit
// strings: "scripts/talker/response_rules.txt", "CDefaultResponseSystem::Init() was called twice! Deleting old system at @%p\n", "We have %d instanced response systems, an obsolete feature not supported by RR2.\n"
void __fastcall CDefaultResponseSystem::GameInit(CDefaultResponseSystem *const this, const EventGameInit_t *const msg)
{
  const char *v3; // rax
  CGameResponseSystem *m_pPreviousWrapped; // r14
  Crr2LibPort *m_prr2shadow; // rdi
  CDefaultResponseSystem::ShadowLib_t *v6; // r12
  CGameResponseSystem *v7; // rax
  char localPath[264]; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v9; // [rsp+118h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  if ( (*(filesystem->_vptr_IAppSystem + 23))(
         filesystem,
         "scripts/talker/response_rules.txt",
         "GAME",
         localPath,
         260,
         0,
         0) != 0 )
  {
    if ( this->m_pPreviousWrapped == 0 )
    {
LABEL_7:
      this->m_pWrapped = (*(*responserulesfilecache + 88LL))(
                           responserulesfilecache,
                           "scripts/talker/response_rules.txt",
                           0);
      CUtlString::operator=(&this->m_sResponseSystemFullPath, localPath);
      goto LABEL_8;
    }
    v3 = CUtlString::Get(&this->m_sResponseSystemFullPath);
    if ( strcmp(v3, localPath) != 0 )
    {
      m_pPreviousWrapped = this->m_pPreviousWrapped;
      if ( m_pPreviousWrapped != 0 )
      {
        if ( _InterlockedSub(&m_pPreviousWrapped->m_iRefs, 1u) == 0
          && (*(m_pPreviousWrapped->_vptr_CRefCountServiceBase + 2))(&m_pPreviousWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >) != 0 )
        {
          (*(m_pPreviousWrapped->_vptr_CRefCountServiceBase + 1))(&m_pPreviousWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >);
        }
        this->m_pPreviousWrapped = 0;
      }
      goto LABEL_7;
    }
    v7 = this->m_pPreviousWrapped;
    this->m_pPreviousWrapped = 0;
    this->m_pWrapped = v7;
  }
LABEL_8:
  m_prr2shadow = this->m_prr2shadow;
  if ( m_prr2shadow != 0 )
  {
    Crr2LibPort::rr2Warning(
      m_prr2shadow,
      "CDefaultResponseSystem::Init() was called twice! Deleting old system at @%p\n",
      this->m_prr2shadow);
    v6 = this->m_prr2shadow;
    if ( v6 != 0 )
    {
      Crr2LibPort::~Crr2LibPort(this->m_prr2shadow);
      operator delete(v6);
    }
    this->m_prr2shadow = 0;
  }
  if ( this->m_InstancedSystems.m_Elements.m_Tree.m_NumElements != 0 )
    Warning("We have %d instanced response systems, an obsolete feature not supported by RR2.\n", 1);
}


// CDefaultResponseSystem::GameInit  (line 828, @0x000000000205cf70, libserver.so)
// calls: CDefaultResponseSystem::GameInit, IGameSystem::GameInitDestroyGameSystem
void __fastcall CDefaultResponseSystem::GameInit(CDefaultResponseSystem *const this, const EventGameInit_t *const msg)
{
  const EventGameInit_t *v3; // rsi

  if ( (*(g_pLoopModeGameSharedState->_vptr_ILoopModeGameSharedState + 5))(g_pLoopModeGameSharedState, msg) != 0 )
    IGameSystem::GameInitDestroyGameSystem(this);
  else
    CDefaultResponseSystem::GameInit(this, v3);
}


// CDefaultResponseSystem::GameShutdown  (line 889, @0x0000000002083390, libserver.so)  // inlines: ClearInstanced, DoRelease, FirstInorder, LeftChild, NextInorder, Release, RemoveAll, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, CUtlRBTree<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::RemoveAll
void __fastcall CDefaultResponseSystem::GameShutdown(
        CDefaultResponseSystem *const this,
        const EventGameShutdown_t *const msg)
{
  int v3; // ebx
  __int64 v4; // r12
  CUtlMap<char const*,CInstancedResponseSystem*,int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // rdi
  int m_Root; // ebx
  CUtlDict<CInstancedResponseSystem*,int> *p_m_InstancedSystems; // r12
  UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  __int64 v9; // rcx
  int m_Left; // esi
  CGameResponseSystem *m_pWrapped; // rax
  CGameResponseSystem *m_pPreviousWrapped; // rbx

  v3 = this->m_InstancedSystems.m_Elements.m_Tree.m_NumElements - 1;
  v4 = v3;
  if ( v3 >= 0 )
  {
    do
    {
      elem = this->m_InstancedSystems.m_Elements.m_Tree.m_Elements.m_pMemory[v4].m_Data.elem;
      if ( elem != 0 )
        (*(elem->_vptr_IResponseSystem + 1))(elem, msg);
      --v3;
      --v4;
    }
    while ( v3 != -1 );
  }
  m_Root = this->m_InstancedSystems.m_Elements.m_Tree.m_Root;
  p_m_InstancedSystems = &this->m_InstancedSystems;
  if ( m_Root != -1 )
  {
    m_pMemory = this->m_InstancedSystems.m_Elements.m_Tree.m_Elements.m_pMemory;
    v9 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v9 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    p_m_InstancedSystems = &this->m_InstancedSystems;
    while ( 1 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory[v9].m_Data.key);
      m_Root = CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &this->m_InstancedSystems.m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = this->m_InstancedSystems.m_Elements.m_Tree.m_Elements.m_pMemory;
      v9 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::RemoveAll(&p_m_InstancedSystems->m_Elements.m_Tree);
  m_pWrapped = this->m_pWrapped;
  if ( m_pWrapped != 0 )
  {
    m_pPreviousWrapped = this->m_pPreviousWrapped;
    if ( m_pPreviousWrapped != 0 )
    {
      if ( _InterlockedSub(&m_pPreviousWrapped->m_iRefs, 1u) == 0
        && (*(m_pPreviousWrapped->_vptr_CRefCountServiceBase + 2))(&m_pPreviousWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >) != 0 )
      {
        (*(m_pPreviousWrapped->_vptr_CRefCountServiceBase + 1))(&m_pPreviousWrapped->CRefCounted<CRefCountServiceBase<true,CRefMT> >);
      }
      m_pWrapped = this->m_pWrapped;
    }
    this->m_pPreviousWrapped = m_pWrapped;
    this->m_pWrapped = 0;
  }
}


// CDefaultResponseSystem::FindBestResponse  (line 908, @0x00000000020834b0, libserver.so)  // inlines: AddToTail, Base, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char const*>, Element, GetBool, GetInt, GrowMemory, HashStringFastCaseless, Purge, RemoveAll, operator[], rg, ~CUtlBuffer, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Crr2LibPort::FindBestResponse, CUtlBuffer::CUtlBuffer, CUtlBuffer::Printf, CResponseCriteriaSet::Describe, Crr2LibPort::rr2Warning, CRR_Response::GetName, CUtlMemory<unsigned char, int>::Purge, MurmurHash2LowerCase, CMemAllocSystemInitialize, CUtlMemory<char const*, int>::Grow, Crr2LibPort::CreateNewRRDBFromOld, CUtlMemory<char const*, int>::Purge (14 total)
// strings: "true", "false", "query result mismatch between old and new systems.\told: %s\tnew: %s\nQuery:\n", "\tnew responses:\n", "(null)", "\t-\n" (12 total)
bool __fastcall CDefaultResponseSystem::FindBestResponse(
        CDefaultResponseSystem *const this,
        const CResponseCriteriaSet *const set,
        CRR_Response *const response,
        IResponseFilter *pFilter)
{
  char v6; // al
  Crr2LibPort *m_prr2shadow; // rdi
  char BestResponse; // bl
  const char *v9; // rdx
  const char *v10; // rcx
  rr2::IRulePayload *pRulePayload; // rbx
  __int64 v12; // r12
  int v13; // ebx
  __int16 *v14; // r13
  __int64 v15; // rax
  const char *v16; // rdx
  bool result; // al
  int m_Size; // eax
  ResponseGroup *v19; // r13
  unsigned __int64 v20; // rbx
  const char **v21; // rax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v22; // rax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // r14
  __int64 v24; // r12
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *v25; // r14
  int v26; // eax
  __int64 v27; // r12
  int j; // ebx
  Crr2LibPort *NewRRDBFromOld; // rax
  __int64 v30; // [rsp+0h] [rbp-210h]
  Crr2Payload *pPayload; // [rsp+10h] [rbp-200h]
  char bOldResult; // [rsp+18h] [rbp-1F8h]
  unsigned __int64 bOldResulta; // [rsp+18h] [rbp-1F8h]
  CRR_Response *responseb; // [rsp+28h] [rbp-1E8h]
  int i; // [rsp+30h] [rbp-1E0h]
  __int64 ia; // [rsp+30h] [rbp-1E0h]
  rr2::IRulePayload *nResponseName; // [rsp+38h] [rbp-1D8h]
  uint32 nResponseNamea; // [rsp+38h] [rbp-1D8h]
  rr2::MatchInfo_t match; // [rsp+40h] [rbp-1D0h] BYREF
  CUtlVector<char const*,CUtlMemory<char const*,int> > found; // [rsp+60h] [rbp-1B0h] BYREF
  CUtlBuffer msg; // [rsp+80h] [rbp-190h] BYREF
  char buf[264]; // [rsp+D0h] [rbp-140h] BYREF
  unsigned __int64 v45; // [rsp+1D8h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  if ( rr_discrepancycheck.m_pParent->m_Value.m_nValue == 0 )
    return (*(this->m_pWrapped->_vptr_IResponseSystem + 2))(this->m_pWrapped, set);
  v6 = (*(this->m_pWrapped->_vptr_IResponseSystem + 2))(this->m_pWrapped, set, response);
  m_prr2shadow = this->m_prr2shadow;
  bOldResult = v6;
  if ( m_prr2shadow == 0 )
  {
    NewRRDBFromOld = Crr2LibPort::CreateNewRRDBFromOld(this->m_pWrapped, 1, 0);
    this->m_prr2shadow = NewRRDBFromOld;
    m_prr2shadow = NewRRDBFromOld;
  }
  BestResponse = Crr2LibPort::FindBestResponse(m_prr2shadow, set, &match, pFilter);
  if ( bOldResult == BestResponse )
  {
    result = 0;
    if ( bOldResult != 0 )
    {
      nResponseNamea = MurmurHash2LowerCase(response->m_szResponseName, 0x3501A674u);
      pPayload = match.pRulePayload;
      if ( match.pRulePayload != 0 )
      {
        found.m_Size = 0;
        found.m_Memory.m_pMemory = 0;
        found.m_Memory.m_nAllocationCount = 32;
        found.m_Memory.m_nGrowSize = 0;
        CMemAllocSystemInitialize();
        found.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 8LL * found.m_Memory.m_nAllocationCount);
        m_Size = pPayload->m_Responses.m_Size;
        if ( m_Size <= 0 )
        {
LABEL_47:
          CUtlBuffer::CUtlBuffer(&msg, 0, 2000, 5);
          CUtlBuffer::Printf(&msg, "Old system's match was not found in the new.\nOld result:\n");
          CRR_Response::GetName(response, buf, 0x100u);
          CUtlBuffer::Printf(&msg, "\t%s\n", buf);
          CUtlBuffer::Printf(&msg, "New result:\n");
          v27 = 0;
          for ( j = 0; found.m_Size > j; ++v27 )
          {
            CUtlBuffer::Printf(&msg, "\t%s\n", found.m_Memory.m_pMemory[v27]);
            ++j;
          }
          CUtlBuffer::Printf(&msg, "Query:\n");
          CResponseCriteriaSet::Describe(set, &msg);
          Crr2LibPort::rr2Warning(this->m_prr2shadow, "%s", msg.m_Memory.m_pMemory);
          if ( (msg.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<unsigned char,int>::Purge(&msg.m_Memory);
        }
        else
        {
          bOldResulta = 0;
          v30 = 4 * (5LL * (m_Size - 1) + 5);
          while ( 1 )
          {
            v19 = &pPayload->m_Responses.m_Memory.m_pMemory[bOldResulta / 0x14];
            if ( v19->group.m_nCount > 0 )
              break;
LABEL_46:
            bOldResulta += 20LL;
            if ( bOldResulta == v30 )
              goto LABEL_47;
          }
          v20 = 0;
          ia = 90 * ((v19->group.m_nCount - 1) + 1LL);
          while ( 1 )
          {
            v22 = v19->group.m_nAllocated != 0 ? v19->group.m_pElements : 0LL;
            if ( nResponseNamea == MurmurHash2LowerCase(v22[v20 / 0x5A].value, 0x3501A674u) )
              break;
            if ( v19->group.m_nAllocated != 0 )
              m_pElements = v19->group.m_pElements;
            else
              m_pElements = 0;
            v24 = found.m_Size;
            v25 = &m_pElements[v20 / 0x5A];
            v26 = found.m_Size;
            if ( found.m_Size == found.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<char const*,int>::Grow(&found.m_Memory, 1);
              v26 = found.m_Size;
            }
            found.m_Size = v26 + 1;
            v21 = &found.m_Memory.m_pMemory[v24];
            if ( v21 != 0 )
              *v21 = v25->value;
            v20 += 90LL;
            if ( v20 == ia )
              goto LABEL_46;
          }
        }
        found.m_Size = 0;
        if ( (found.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<char const*,int>::Purge(&found.m_Memory);
          if ( (found.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<char const*,int>::Purge(&found.m_Memory);
        }
      }
      else
      {
        CUtlBuffer::CUtlBuffer(&msg, 0, 1000, 5);
        CUtlBuffer::Printf(&msg, "found no payload in new-system match\n");
        CResponseCriteriaSet::Describe(set, &msg);
        Crr2LibPort::rr2Warning(this->m_prr2shadow, "%s", msg.m_Memory.m_pMemory);
        if ( (msg.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<unsigned char,int>::Purge(&msg.m_Memory);
      }
      return 1;
    }
  }
  else
  {
    CUtlBuffer::CUtlBuffer(&msg, 0, 1000, 5);
    v9 = "false";
    v10 = "true";
    if ( BestResponse == 0 )
      v10 = "false";
    if ( bOldResult != 0 )
      v9 = "true";
    CUtlBuffer::Printf(&msg, "query result mismatch between old and new systems.\told: %s\tnew: %s\nQuery:\n", v9, v10);
    CResponseCriteriaSet::Describe(set, &msg);
    if ( bOldResult != 0 )
    {
      memset(buf, 0, 0x100u);
      CRR_Response::GetName(response, buf, 0x100u);
      CUtlBuffer::Printf(&msg, "\told result response: %s\n", buf);
    }
    if ( BestResponse != 0 )
    {
      pRulePayload = match.pRulePayload;
      nResponseName = match.pRulePayload;
      CUtlBuffer::Printf(&msg, "\tnew responses:\n");
      if ( SLODWORD(pRulePayload[2]._vptr_IRulePayload) > 0 )
      {
        responseb = 0;
        i = 0;
        do
        {
          CUtlBuffer::Printf(&msg, "\t-\n");
          v12 = 0;
          v13 = 0;
          v14 = (nResponseName[3]._vptr_IRulePayload + responseb);
          if ( *v14 > 0 )
          {
            do
            {
              if ( v14[1] != 0 )
                v15 = *(v14 + 1);
              else
                v15 = 0;
              v16 = *(v15 + v12 + 82);
              if ( v16 == 0 )
                v16 = "(null)";
              CUtlBuffer::Printf(&msg, "\t\t%s\n", v16);
              ++v13;
              v12 += 90;
            }
            while ( *v14 > v13 );
          }
          ++i;
          responseb = (responseb + 20);
        }
        while ( i < SLODWORD(nResponseName[2]._vptr_IRulePayload) );
      }
    }
    Crr2LibPort::rr2Warning(this->m_prr2shadow, "%s", msg.m_Memory.m_pMemory);
    if ( (msg.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned char,int>::Purge(&msg.m_Memory);
    return bOldResult;
  }
  return result;
}


// PrecacheCustomResponseSystem  (line 1031, @0x0000000002089570, libserver.so)  // inlines: AddInstancedResponseSystem, CInstancedResponseSystem, Element, Find, FindOrCreateCustomResponseSystem, FindResponseSystem, GetDefaultResponseSystem, Precache, PrecacheCustomResponseSystem, operator[], ~IResponseSystem
// calls: COM_TimestampedLog, CUtlRBTree<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find, GameResponseSystem_Precache, operator new, CUtlDict<CInstancedResponseSystem*, int>::Insert, operator delete, _Unwind_Resume
// strings: "PrecacheCustomResponseSystem %s - Start", "FindOrCreateCustomResponseSystem %s - Start", "FindOrCreateCustomResponseSystem %s - Finish", "PrecacheCustomResponseSystem %s - Finish"
// globals: g_pResponseSystem
IResponseSystem *__fastcall PrecacheCustomResponseSystem(IEntityResourceManifest *pManifest, const char *scriptfile)
{
  IResponseSystem *v3; // r13
  int v5; // eax
  IResponseSystem *v6; // r12
  CUtlMap<char const*,CInstancedResponseSystem*,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  v3 = 0;
  if ( g_pResponseSystem != 0 )
    v3 = g_pResponseSystem - 2;
  COM_TimestampedLog("PrecacheCustomResponseSystem %s - Start");
  COM_TimestampedLog("FindOrCreateCustomResponseSystem %s - Start", scriptfile);
  if ( scriptfile == 0
    || (search.key = scriptfile,
        (v5 = CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
                &v3[5],
                &search)) == -1)
    || (v6 = v3[6]._vptr_IResponseSystem[4 * v5 + 3]) == 0 )
  {
    v6 = operator new(0x18u);  // new CInstancedResponseSystem (size matches)
    v6->_vptr_IResponseSystem = off_3FED010;  // vptr: CInstancedResponseSystem
    v6[2]._vptr_IResponseSystem = &g_ExpresserRRScriptBridge;
    v6[1]._vptr_IResponseSystem = (*(*responserulesfilecache + 88LL))(responserulesfilecache, scriptfile, 0);
    search.key = v6;
    CUtlDict<CInstancedResponseSystem *,int>::Insert(&v3[5], scriptfile, &search);
  }
  COM_TimestampedLog("FindOrCreateCustomResponseSystem %s - Finish", scriptfile);
  GameResponseSystem_Precache((v6[1]._vptr_IResponseSystem + 3), pManifest);
  COM_TimestampedLog("PrecacheCustomResponseSystem %s - Finish", scriptfile);
  return v6;
}


// FindCustomResponseSystem  (line 1036, @0x0000000002083330, libserver.so)  // inlines: Element, Find, FindCustomResponseSystem, FindResponseSystem, GetDefaultResponseSystem, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find
// globals: g_pResponseSystem
IResponseSystem *__fastcall FindCustomResponseSystem(const char *scriptfile)
{
  IResponseSystem *v1; // rbx
  int v2; // eax
  CUtlMap<char const*,CInstancedResponseSystem*,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  v1 = 0;
  if ( g_pResponseSystem != 0 )
    v1 = g_pResponseSystem - 2;
  if ( scriptfile == 0 )
    return 0;
  search.key = scriptfile;
  v2 = CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
         &v1[5],
         &search);
  if ( v2 == -1 )
    return 0;
  else
    return v1[6]._vptr_IResponseSystem[4 * v2 + 3];
}


// FindOrCreateCustomResponseSystem  (line 1041, @0x00000000020896b0, libserver.so)  // inlines: AddInstancedResponseSystem, CInstancedResponseSystem, Element, Find, FindOrCreateCustomResponseSystem, FindResponseSystem, GetDefaultResponseSystem, operator[], ~IResponseSystem
// calls: COM_TimestampedLog, CUtlRBTree<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find, operator new, CUtlDict<CInstancedResponseSystem*, int>::Insert, operator delete, _Unwind_Resume
// strings: "FindOrCreateCustomResponseSystem %s - Start", "FindOrCreateCustomResponseSystem %s - Finish"
// globals: g_pResponseSystem
IResponseSystem *__fastcall FindOrCreateCustomResponseSystem(const char *scriptfile)
{
  IResponseSystem *v1; // r12
  int v3; // eax
  IResponseSystem *v4; // r13
  CUtlMap<char const*,CInstancedResponseSystem*,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  v1 = 0;
  if ( g_pResponseSystem != 0 )
    v1 = g_pResponseSystem - 2;
  COM_TimestampedLog("FindOrCreateCustomResponseSystem %s - Start", scriptfile);
  if ( scriptfile == 0
    || (search.key = scriptfile,
        (v3 = CUtlRBTree<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CInstancedResponseSystem *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
                &v1[5],
                &search)) == -1)
    || (v4 = v1[6]._vptr_IResponseSystem[4 * v3 + 3]) == 0 )
  {
    v4 = operator new(0x18u);  // new CInstancedResponseSystem (size matches)
    v4->_vptr_IResponseSystem = off_3FED010;  // vptr: CInstancedResponseSystem
    v4[2]._vptr_IResponseSystem = &g_ExpresserRRScriptBridge;
    v4[1]._vptr_IResponseSystem = (*(*responserulesfilecache + 88LL))(responserulesfilecache, scriptfile, 0);
    search.key = v4;
    CUtlDict<CInstancedResponseSystem *,int>::Insert(&v1[5], scriptfile, &search);
  }
  COM_TimestampedLog("FindOrCreateCustomResponseSystem %s - Finish", scriptfile);
  return v4;
}


