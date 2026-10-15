// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/game_saverestore.cpp:66
struct AutoSaveType_t {
	bool m_bIsQuickSave;  // +0x0
	bool m_bIsAutoSave;  // +0x1
	bool m_bIsAutoSaveDanagerous;  // +0x2
	AutoSaveType_t(const char *);

	// sizeof = 3
};

// src/game/shared/game_saverestore.cpp:83
class CSaveMemory {
private:

	uint32 m_nSaveAllocs;  // +0x8
	int GetSavegameReservedMemorySize();
	CSaveMemory();
	~CSaveMemory();
	void Shutdown();
	void CheckInit();
	void * SaveAllocMemory(size_t, size_t, bool);
	void SaveFreeMemory(void *);
	void SaveResetMemory();

	// sizeof = 16
};

// src/game/shared/game_saverestore.cpp:172
struct GAME_HEADER {
	static datamap_t m_DataMap;

	int m_nSpawnGroupCount;  // +0x8

	GAME_HEADER();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	~GAME_HEADER();

	// sizeof = 24
};

// src/game/shared/game_saverestore.cpp:189
struct SPAWNGROUP_HEADER {
	static datamap_t m_DataMap;

	bool m_bClientSpawnGroup;  // +0x40
	SPAWNGROUP_HEADER();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	~SPAWNGROUP_HEADER();
	SPAWNGROUP_HEADER(const SPAWNGROUP_HEADER &);

	// sizeof = 80
};

// src/game/shared/game_saverestore.cpp:206
struct SAVE_HEADER {
	static datamap_t m_DataMap;

	int m_saveId;  // +0x0
	int m_version;  // +0x4
	int m_nConnectionCount;  // +0x8
	int m_nMapVersion;  // +0xc

	float m_flSaveTime;  // +0x50
	SAVE_HEADER();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	~SAVE_HEADER();

	// sizeof = 96
};

// src/game/shared/game_saverestore.cpp:239
class CRestoreData {
private:

	CRestoreData();
	~CRestoreData();
	RestoreLookupTable_t * FindOrAddRestoreLookupTable(const char *);

	// sizeof = 48
};

// src/game/shared/game_saverestore.cpp:266
class CSaveRestoreHostData {
	CSaveRestoreHostData();
	~CSaveRestoreHostData();

	// sizeof = 24
};

// src/game/shared/game_saverestore.cpp:272
class CEntity2SaveRestore : public IEntity2SaveRestore {
	enum {
		SAVEGAME_SCREENSHOT_WIDTH = 0x80,
		SAVEGAME_SCREENSHOT_HEIGHT = 0x80,
	};

public:

private:

	bool m_bInRestore;  // +0x58
	bool m_bClearSaveDir;  // +0x59
	bool m_bOneWayTransition;  // +0x5a
	bool m_bClearFile;  // +0x5b
	bool m_bSaveStarted;  // +0x5c
	bool m_bAsyncSaveInProgress;  // +0x5d

	~CEntity2SaveRestore();
	CEntity2SaveRestore(CEntity2SaveRestore &);
	CEntity2SaveRestore(const CEntity2SaveRestore &);
	CEntity2SaveRestore();
	virtual void Init();
	virtual void Shutdown();
	virtual void Release();
	virtual bool IsRestoring();
	virtual bool StreamEntitiesFromFile(ISaveRestoreBlockSet *, const char *, const void *, size_t, SpawnGroupHandle_t, const Vector &, IStreamEntitiesFromFileCompletion *, CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > *);
	virtual void LoadAdjacentEnts(ISaveRestoreBlockSet *, const char *, const char *, const char *, SpawnGroupHandle_t, IStreamEntitiesFromFileCompletion *, CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > *);
	virtual void AddRestoredEntity(CEntityInstance *);
	virtual void OpenSaveFileAndExtractLevels(const char *, CUtlVector<CCreateGameServerLoadInfo, CUtlMemory<CCreateGameServerLoadInfo, int> > &, bool, SaveFileLevelsType_t);
	virtual void ExtractResourcesFromSaveGame(CCompressedResourceManifest *, ILoadingSpawnGroup *);
	virtual void AppendTransitionResources(CCompressedResourceManifest *, ILoadingSpawnGroup *);
	virtual void ClearSaveDirectory();
	virtual void SetOneWayTransition(bool);
	virtual bool GetOneWayTransition();
	virtual CUtlString CalcSaveGameName(const char *);
	virtual CSaveRestoreData * SaveInit(int, int, float, int);
	virtual void SaveFinish(CSaveRestoreData *);
	virtual void ChangeSaveInMemory(bool);
	virtual void SetCurrentMod(const char *);
	virtual bool SaveGame_Finalize(SaveRestoreDataHandle_t);
	virtual SaveRestoreDataHandle_t SaveGame_Start(const SaveGameInfo_t &);
	virtual bool StreamEntitiesToFile(SaveRestoreDataHandle_t, const SaveStreamInfo_t &);
	virtual const char * SaveGame_GetLastSaveFile();
	virtual bool IsReadyToSave();
	bool StreamEntitiesToFile(const SaveStreamInfo_t &);
	void FinishAsyncSave();
	void DispatchAsyncSave();
	void BeginRestoreEntities();
	void EndRestoreEntities(IStreamEntitiesFromFileCompletion *);
	CSaveRestoreData * LoadSaveData(const char *, const void *, int);
	void Finish(CSaveRestoreData *);
	int WriteSymbolTable(CSaveRestoreData *);
	int WriteResourceList(CSaveRestoreData *);
	char * ReadSymbolTable(CSaveRestoreData *, char *, size_t, int);
	char * ReadResourceList(CCompressedResourceManifest &, char *, size_t, int);
	void ParseSaveTables(CSaveRestoreData *, SAVE_HEADER *, CRestore &);
	int SaveReadHeaderAndSpawnGroupList(FileHandle_t, GAME_HEADER *, int *, CUtlVector<CCreateGameServerLoadInfo, CUtlMemory<CCreateGameServerLoadInfo, int> > &, SaveFileLevelsType_t);
	void SaveGameStateGlobals(const char *, const matrix3x4a_t &, CSaveRestoreData *, CSave &, float);
	void DirectoryCopy(const char *, const char *);
	void ClearSaveDir();
	void DoClearSaveDir();
	void DirectoryClear(const char *);
	bool DirectoryExtract(FileHandle_t, int);
	void BuildRestoredIndexTranslationTable(const char *, const CSaveRestoreData *, bool);
	CUtlString GetSaveGameSpawnGroupName(const char *);
	void AgeSaveList(const char *, int);
	void AgeSaveFile(const char *, const char *, int);
	void EntityPatchRead(CSaveRestoreData *, const char *);
	void EntityPatchWrite(CSaveRestoreData *, const char *, bool);
	void LoadAdjacentDecals(ISaveRestoreBlockSet *, const char *, const CSaveRestoreData &, const char *, SpawnGroupHandle_t);

	// vtable[0] Init
	// vtable[1] Shutdown
	// vtable[2] Release
	// vtable[3] IsRestoring
	// vtable[4] StreamEntitiesFromFile
	// vtable[5] LoadAdjacentEnts
	// vtable[6] AddRestoredEntity
	// vtable[7] OpenSaveFileAndExtractLevels
	// vtable[8] ExtractResourcesFromSaveGame
	// vtable[9] AppendTransitionResources
	// vtable[10] ClearSaveDirectory
	// vtable[11] SetOneWayTransition
	// vtable[12] GetOneWayTransition
	// vtable[13] CalcSaveGameName
	// vtable[14] SaveInit
	// vtable[15] SaveFinish
	// vtable[17] ChangeSaveInMemory
	// vtable[16] SetCurrentMod
	// vtable[20] SaveGame_Finalize
	// vtable[19] SaveGame_Start
	// vtable[21] StreamEntitiesToFile
	// vtable[22] SaveGame_GetLastSaveFile
	// vtable[18] IsReadyToSave
	// sizeof = 256
};

// src/game/shared/game_saverestore.cpp:501
struct SaveFileHeaderTag_t {
	int id;  // +0x0
	int version;  // +0x4
	bool operator==(const SaveFileHeaderTag_t &);
	bool operator!=(const SaveFileHeaderTag_t &);

	// sizeof = 8
};

// src/game/shared/game_saverestore.cpp:512
struct SaveFileSectionsInfo_t {
	int m_nSymbols;  // +0x0
	int m_nResourceCount;  // +0x4
	int m_nBytesSymbols;  // +0x8
	int m_nBytesDataHeaders;  // +0xc
	int m_nBytesResourceList;  // +0x10
	int m_nBytesData;  // +0x14
	SaveFileSectionsInfo_t();
	int SumBytes();

	// sizeof = 24
};

// src/game/shared/game_saverestore.cpp:528
struct SaveFileSections_t {
	char * m_pSymbols;  // +0x0
	char * m_pDataHeaders;  // +0x8
	char * m_pResourceList;  // +0x10
	char * m_pData;  // +0x18
	SaveFileSections_t();

	// sizeof = 32
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SkipGlobalState  (line 48, @0x0000000002074250, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, globalentitydatabase_t, ~CRestore, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~globalentitydatabase_t
// calls: CRestore::CRestore, CUtlSymbolTable::CUtlSymbolTable, globalentitydatabase_t::Restore, CUtlSymbolTable::~CUtlSymbolTable, CUtlMemory<globalentity_t, int>::Purge, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CEntity2SaveRestore::SaveReadHeaderAndSpawnGroupList
void __fastcall SkipGlobalState(CSaveRestoreData *pSaveData)
{
  CRestore restoreHelper; // [rsp+0h] [rbp-D0h] BYREF
  globalentitydatabase_t dummy; // [rsp+40h] [rbp-90h] BYREF

  CRestore::CRestore(&restoreHelper, pSaveData);
  CUtlSymbolTable::CUtlSymbolTable(&dummy.m_nameList, 0, 16, 0);
  dummy.m_list.m_Size = 0;
  dummy.m_list.m_Memory.m_pMemory = 0;
  dummy.m_list.m_Memory.m_nAllocationCount = 0;
  dummy.m_list.m_Memory.m_nGrowSize = 0;
  globalentitydatabase_t::Restore(&dummy, &restoreHelper, 1);
  dummy.m_list.m_Size = 0;
  if ( (dummy.m_list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<globalentity_t,int>::Purge(&dummy.m_list.m_Memory);
    if ( (dummy.m_list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<globalentity_t,int>::Purge(&dummy.m_list.m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&dummy.m_nameList);
  restoreHelper.m_BlockEndStack.m_Size = 0;
  restoreHelper._vptr_IRestore = &off_3FF5F30;
  if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
    if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
  }
}


// CSaveMemory::SaveAllocMemory  (line 123, @0x0000000002094f80, libserver.so)  // inlines: AlignValue<unsigned int>, Alloc, CAutoLockT, CheckInit, InterlockedAssignIf<unsigned char*>, Lock, ReadVolatileMemory<unsigned char*>, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, memset, ~CAutoLockT
// calls: ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), ThreadInterlockedExchange64, CMemoryStack::CommitTo, memset, operator new, CMemoryStack::CMemoryStack, CMemoryStack::Init, operator delete, _Unwind_Resume
// callers: CEntity2SaveRestore::ReadSymbolTable, CEntity2SaveRestore::LoadSaveData, CEntity2SaveRestore::SaveReadHeaderAndSpawnGroupList
// strings: "CSaveMemory"
void *__fastcall CSaveMemory::SaveAllocMemory(CSaveMemory *const this, size_t num, size_t size, bool bClear)
{
  int v5; // r14d
  int v6; // r13d
  CMemoryStack *m_pMemoryStack; // rbx
  unsigned int v9; // r13d
  uint8 *m_pNextAlloc; // rcx
  uint8 *v11; // r12
  signed __int64 CurrentId; // rsi
  uint8 *m_pHighestAllocLimit; // rax
  bool v15; // cc
  CMemoryStack *v16; // rbx
  uint8 *v17; // [rsp+8h] [rbp-38h]

  v5 = num;
  v6 = size;
  m_pMemoryStack = this->m_pMemoryStack;
  if ( this->m_pMemoryStack == 0 )
  {
    v16 = operator new(0x58u);
    CMemoryStack::CMemoryStack(v16);
    this->m_pMemoryStack = v16;
    CMemoryStack::Init(v16, "CSaveMemory", &loc_2000000, 0x40u, 0x230000u, 0x10u);
    m_pMemoryStack = this->m_pMemoryStack;
  }
  ++this->m_nSaveAllocs;
  if ( v6 * v5 == 0 )
    return 0;
  v9 = -m_pMemoryStack->m_alignment & (m_pMemoryStack->m_alignment + v6 * v5 - 1);
LABEL_5:
  while ( 1 )
  {
    m_pNextAlloc = m_pMemoryStack->m_pNextAlloc;
    v11 = &m_pMemoryStack->m_pNextAlloc[v9];
    if ( v11 > m_pMemoryStack->m_pCommitLimit )
      break;
LABEL_11:
    if ( m_pNextAlloc == _InterlockedCompareExchange64(m_pMemoryStack, v11, m_pNextAlloc) )
    {
      if ( bClear )
      {
        v17 = m_pNextAlloc;
        memset(m_pNextAlloc, 0, v9);
        m_pNextAlloc = v17;
      }
      m_pHighestAllocLimit = m_pMemoryStack->m_pNextAlloc;
      if ( m_pMemoryStack->m_pHighestAllocLimit >= m_pMemoryStack->m_pNextAlloc )
        m_pHighestAllocLimit = m_pMemoryStack->m_pHighestAllocLimit;
      m_pMemoryStack->m_pHighestAllocLimit = m_pHighestAllocLimit;
      return m_pNextAlloc;
    }
  }
  while ( 1 )
  {
    CurrentId = ThreadGetCurrentId(this);
    if ( CurrentId == m_pMemoryStack->m_allocMutex.m_ownerID
      || _InterlockedCompareExchange64(&m_pMemoryStack->m_allocMutex, CurrentId, 0) == 0 )
    {
      break;
    }
    _mm_pause();
    CThreadFastMutex::Lock(&m_pMemoryStack->m_allocMutex, CurrentId, 0);
    if ( v11 > m_pMemoryStack->m_pCommitLimit )
      goto LABEL_18;
LABEL_9:
    if ( --m_pMemoryStack->m_allocMutex.m_depth != 0 )
      goto LABEL_5;
    ThreadInterlockedExchange64(&m_pMemoryStack->m_allocMutex, 0);
    m_pNextAlloc = m_pMemoryStack->m_pNextAlloc;
    v11 = &m_pMemoryStack->m_pNextAlloc[v9];
    if ( v11 <= m_pMemoryStack->m_pCommitLimit )
      goto LABEL_11;
  }
  v15 = v11 <= m_pMemoryStack->m_pCommitLimit;
  ++m_pMemoryStack->m_allocMutex.m_depth;
  if ( v15 )
    goto LABEL_9;
LABEL_18:
  if ( CMemoryStack::CommitTo(m_pMemoryStack, v11) )
    goto LABEL_9;
  if ( --m_pMemoryStack->m_allocMutex.m_depth != 0 )
    return 0;
  ThreadInterlockedExchange64(&m_pMemoryStack->m_allocMutex, 0);
  return 0;
}


// GAME_HEADER::~GAME_HEADER  (line 172, @0x0000000002095170, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CEntity2SaveRestore::OpenSaveFileAndExtractLevels, CEntity2SaveRestore::SaveGame_Finalize
void __fastcall GAME_HEADER::~GAME_HEADER(GAME_HEADER *const this)
{
  if ( this->m_sLandmark.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sLandmark);
  if ( this->m_sComment.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sComment);
}


// GAME_HEADER::AddDatadescMetadataKeys  (line 181, @0x0000000002071fe0, libserver.so)
void __fastcall GAME_HEADER::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// GAME_HEADER::GetBaseMap  (line 181, @0x0000000002071ff0, libserver.so)
datamap_t *__cdecl GAME_HEADER::GetBaseMap()
{
  return 0;
}


// DataMapInit<GAME_HEADER>  (line 181, @0x0000000002072000, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "GAME_HEADER"
// globals: `guard variable for'DataMapInit<GAME_HEADER>(GAME_HEADER *)::nameHolder, GAME_HEADER::m_DataMap, DataMapInit<GAME_HEADER>(GAME_HEADER *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<GAME_HEADER>(GAME_HEADER *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<GAME_HEADER>(GAME_HEADER *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<GAME_HEADER>(GAME_HEADER *)::nameHolder) != 0 )
  {
    DataMapInit<GAME_HEADER>(GAME_HEADER *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<GAME_HEADER>(GAME_HEADER *)::nameHolder.m_pszBase = "GAME_HEADER";
    DataMapInit<GAME_HEADER>(GAME_HEADER *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<GAME_HEADER>(GAME_HEADER *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<GAME_HEADER>(GAME_HEADER *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<GAME_HEADER>(GAME_HEADER *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<GAME_HEADER>(GAME_HEADER *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<GAME_HEADER>(GAME_HEADER *)::nameHolder,
      &_dso_handle);
  }
  GAME_HEADER::m_DataMap.baseMap = 0;
  GAME_HEADER::m_DataMap.dataDesc = &DataMapInit<GAME_HEADER>(GAME_HEADER *)::dataDesc[1];
  GAME_HEADER::m_DataMap.dataNumFields = 3;
  return &GAME_HEADER::m_DataMap;
}


// SPAWNGROUP_HEADER::AddDatadescMetadataKeys  (line 198, @0x00000000020720c0, libserver.so)
void __fastcall SPAWNGROUP_HEADER::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// SPAWNGROUP_HEADER::GetBaseMap  (line 198, @0x00000000020720d0, libserver.so)
datamap_t *__cdecl SPAWNGROUP_HEADER::GetBaseMap()
{
  return 0;
}


// DataMapInit<SPAWNGROUP_HEADER>  (line 198, @0x00000000020720e0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "SPAWNGROUP_HEADER"
// globals: `guard variable for'DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *)::nameHolder, SPAWNGROUP_HEADER::m_DataMap, DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *)::nameHolder) != 0 )
  {
    DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *)::nameHolder.m_pszBase = "SPAWNGROUP_HEADER";
    DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *)::nameHolder,
      &_dso_handle);
  }
  SPAWNGROUP_HEADER::m_DataMap.baseMap = 0;
  SPAWNGROUP_HEADER::m_DataMap.dataDesc = &DataMapInit<SPAWNGROUP_HEADER>(SPAWNGROUP_HEADER *)::dataDesc[1];
  SPAWNGROUP_HEADER::m_DataMap.dataNumFields = 3;
  return &SPAWNGROUP_HEADER::m_DataMap;
}


// SAVE_HEADER::AddDatadescMetadataKeys  (line 219, @0x00000000020721a0, libserver.so)
void __fastcall SAVE_HEADER::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// SAVE_HEADER::GetBaseMap  (line 219, @0x00000000020721b0, libserver.so)
datamap_t *__cdecl SAVE_HEADER::GetBaseMap()
{
  return 0;
}


// DataMapInit<SAVE_HEADER>  (line 219, @0x00000000020721c0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "SAVE_HEADER"
// globals: `guard variable for'DataMapInit<SAVE_HEADER>(SAVE_HEADER *)::nameHolder, SAVE_HEADER::m_DataMap, DataMapInit<SAVE_HEADER>(SAVE_HEADER *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<SAVE_HEADER>(SAVE_HEADER *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<SAVE_HEADER>(SAVE_HEADER *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<SAVE_HEADER>(SAVE_HEADER *)::nameHolder) != 0 )
  {
    DataMapInit<SAVE_HEADER>(SAVE_HEADER *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<SAVE_HEADER>(SAVE_HEADER *)::nameHolder.m_pszBase = "SAVE_HEADER";
    DataMapInit<SAVE_HEADER>(SAVE_HEADER *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<SAVE_HEADER>(SAVE_HEADER *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<SAVE_HEADER>(SAVE_HEADER *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<SAVE_HEADER>(SAVE_HEADER *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<SAVE_HEADER>(SAVE_HEADER *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<SAVE_HEADER>(SAVE_HEADER *)::nameHolder,
      &_dso_handle);
  }
  SAVE_HEADER::m_DataMap.baseMap = 0;
  SAVE_HEADER::m_DataMap.dataDesc = &DataMapInit<SAVE_HEADER>(SAVE_HEADER *)::dataDesc[1];
  SAVE_HEADER::m_DataMap.dataNumFields = 7;
  return &SAVE_HEADER::m_DataMap;
}


// levellist_t::AddDatadescMetadataKeys  (line 230, @0x0000000002072280, libserver.so)
void __fastcall levellist_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// levellist_t::GetBaseMap  (line 230, @0x0000000002072290, libserver.so)
datamap_t *__cdecl levellist_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<levellist_t>  (line 230, @0x00000000020722a0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "levellist_t"
// globals: `guard variable for'DataMapInit<levellist_t>(levellist_t *)::nameHolder, levellist_t::m_DataMap, DataMapInit<levellist_t>(levellist_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<levellist_t>(levellist_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<levellist_t>(levellist_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<levellist_t>(levellist_t *)::nameHolder) != 0 )
  {
    DataMapInit<levellist_t>(levellist_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<levellist_t>(levellist_t *)::nameHolder.m_pszBase = "levellist_t";
    DataMapInit<levellist_t>(levellist_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<levellist_t>(levellist_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<levellist_t>(levellist_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<levellist_t>(levellist_t *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<levellist_t>(levellist_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<levellist_t>(levellist_t *)::nameHolder,
      &_dso_handle);
  }
  levellist_t::m_DataMap.baseMap = 0;
  levellist_t::m_DataMap.dataDesc = &DataMapInit<levellist_t>(levellist_t *)::dataDesc[1];
  levellist_t::m_DataMap.dataNumFields = 4;
  return &levellist_t::m_DataMap;
}


// CRestoreData::FindOrAddRestoreLookupTable  (line 253, @0x000000000208b9a0, libserver.so)  // inlines: CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase, Element, Find, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: operator new, strlen, strcpy, CUtlRBTree<CUtlMap<char const*, RestoreLookupTable_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, RestoreLookupTable_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, RestoreLookupTable_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, RestoreLookupTable_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, RestoreLookupTable_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, RestoreLookupTable_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CEntity2SaveRestore::BuildRestoredIndexTranslationTable
RestoreLookupTable_t *__fastcall CRestoreData::FindOrAddRestoreLookupTable(
        CRestoreData *const this,
        const char *mapname)
{
  int m_Root; // r13d
  UtlRBTreeNode_t<CUtlMap<char const*,RestoreLookupTable_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v6; // rbx
  RestoreLookupTable_t *v7; // rax
  RestoreLookupTable_t *v8; // rbx
  size_t v9; // rax
  char *v10; // rax
  char *v11; // rax
  int v12; // r13d
  bool v13; // r15
  int m_Left; // eax
  char v15; // dl
  bool v16; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,RestoreLookupTable_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v17; // rax
  int v18; // eax
  vec_t z; // eax
  CUtlMap<char const*,RestoreLookupTable_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-40h] BYREF

  if ( mapname != 0 )
  {
    m_Root = this->m_RestoreLookup.m_Elements.m_Tree.m_Root;
    pCopyFrom.key = mapname;
    if ( m_Root != -1 )
    {
      m_pMemory = this->m_RestoreLookup.m_Elements.m_Tree.m_Elements.m_pMemory;
      do
      {
        while ( 1 )
        {
          v6 = m_Root;
          if ( this->m_RestoreLookup.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&pCopyFrom, &m_pMemory[v6].m_Data) == 0 )
            break;
          m_pMemory = this->m_RestoreLookup.m_Elements.m_Tree.m_Elements.m_pMemory;
          m_Root = m_pMemory[m_Root].m_Left;
          if ( m_Root == -1 )
            goto LABEL_8;
        }
        if ( this->m_RestoreLookup.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
               &this->m_RestoreLookup.m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Data,
               &pCopyFrom) == 0 )
          return this->m_RestoreLookup.m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem;
        m_pMemory = this->m_RestoreLookup.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[v6].m_Right;
      }
      while ( m_Root != -1 );
    }
LABEL_8:
    v7 = operator new(0x28u);
    v7->m_lookup.m_Size = 0;
    v8 = v7;
    v7->m_lookup.m_Memory.m_pMemory = 0;
    v7->m_lookup.m_Memory.m_nAllocationCount = 0;
    v7->m_lookup.m_Memory.m_nGrowSize = 0;
    *&v7 = vec3_origin.z;
    *&v8->m_vecLandMarkOffset.x = *&vec3_origin.x;
    LODWORD(v8->m_vecLandMarkOffset.z) = v7;
    v9 = strlen(mapname);
    v10 = (**g_pMemAlloc)(g_pMemAlloc, v9 + 1);
    v11 = strcpy(v10, mapname);
  }
  else
  {
    v8 = operator new(0x28u);
    v8->m_lookup.m_Size = 0;
    v8->m_lookup.m_Memory.m_pMemory = 0;
    v8->m_lookup.m_Memory.m_nAllocationCount = 0;
    v8->m_lookup.m_Memory.m_nGrowSize = 0;
    z = vec3_origin.z;
    *&v8->m_vecLandMarkOffset.x = *&vec3_origin.x;
    v8->m_vecLandMarkOffset.z = z;
    v11 = 0;
  }
  v12 = this->m_RestoreLookup.m_Elements.m_Tree.m_Root;
  pCopyFrom.key = v11;
  pCopyFrom.elem = v8;
  if ( v12 == -1 )
  {
    v13 = 0;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v16 = this->m_RestoreLookup.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &pCopyFrom,
            &this->m_RestoreLookup.m_Elements.m_Tree.m_Elements.m_pMemory[v12].m_Data) == 0;
    v17 = this->m_RestoreLookup.m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v16 )
      break;
    m_Left = v17[v12].m_Left;
    v15 = 1;
    if ( m_Left == -1 )
      goto LABEL_15;
LABEL_12:
    v12 = m_Left;
  }
  m_Left = v17[v12].m_Right;
  v15 = 0;
  if ( m_Left != -1 )
    goto LABEL_12;
LABEL_15:
  v13 = v15;
LABEL_16:
  v18 = CUtlRBTree<CUtlMap<char const*,RestoreLookupTable_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,RestoreLookupTable_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,RestoreLookupTable_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_RestoreLookup.m_Elements.m_Tree,
          &pCopyFrom);
  v6 = v18;
  CUtlRBTree<CUtlMap<char const*,RestoreLookupTable_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,RestoreLookupTable_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,RestoreLookupTable_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_RestoreLookup.m_Elements.m_Tree,
    v18,
    v12,
    v13);
  ++this->m_RestoreLookup.m_Elements.m_Tree.m_NumElements;
  return this->m_RestoreLookup.m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem;
}


// CEntity2SaveRestore::SaveGame_GetLastSaveFile  (line 309, @0x000000000208f840, libserver.so)  // inlines: String
// calls: CUtlString::Get
const char *__fastcall CEntity2SaveRestore::SaveGame_GetLastSaveFile(CEntity2SaveRestore *const this)
{
  return CUtlString::Get(&this->m_sLastSaveFile);
}


// AllocEntity2SaveRestore  (line 382, @0x000000000207d430, libserver.so)
// calls: operator new, CEntity2SaveRestore::CEntity2SaveRestore, operator delete, _Unwind_Resume
// callers: CSource2EntitySystem::StaticInit
IEntity2SaveRestore *__cdecl AllocEntity2SaveRestore()
{
  CEntity2SaveRestore *v0; // rbx

  v0 = operator new(0x100u);
  CEntity2SaveRestore::CEntity2SaveRestore(v0);
  return v0;
}


// CEntity2SaveRestore::CEntity2SaveRestore  (line 387, @0x000000000207d1f0, libserver.so)  // inlines: CCallQueue, CCallQueueT, CInterlockedIntT, CSaveMemory, CTSListBase, CTSQueue, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Detach, Purge, RemoveAll, SaveGameInfo_t, Shutdown, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedExchange, ThreadPause, operator=, ~CSaveMemory, ~CTSListBase, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: operator new, CMemoryStack::~CMemoryStack, operator delete, CUtlString::FreeMemoryBlock, SaveGameInfo_t::~SaveGameInfo_t, _Unwind_Resume, CUtlMemory<CEntityHandle, int>::Purge
// callers: AllocEntity2SaveRestore
void __fastcall CEntity2SaveRestore::CEntity2SaveRestore(CEntity2SaveRestore *const this)
{
  CCallQueue *p_m_AsyncSaveCallQueue; // r12
  CTSQueue<CFunctor*,false>::Node_t *v3; // rax

  p_m_AsyncSaveCallQueue = &this->m_AsyncSaveCallQueue;
  this->_vptr_IEntity2SaveRestore = off_3FF1D30;
  this->m_RestoredEntities.m_Size = 0;
  this->m_RestoredEntities.m_Memory.m_pMemory = 0;
  this->m_RestoredEntities.m_Memory.m_nAllocationCount = 0;
  this->m_RestoredEntities.m_Memory.m_nGrowSize = 0;
  this->m_SaveGameInfo.m_sSaveName.m_pString = 0;
  this->m_SaveGameInfo.m_sSaveComment.m_pString = 0;
  this->m_SaveGameInfo.m_bTransition = 0;
  this->m_SaveGameInfo.m_sOldLevel.m_pString = 0;
  this->m_SaveGameInfo.m_sLandmarkName.m_pString = 0;
  this->m_sSaveGameFileName.m_pString = 0;
  this->m_sLastSaveFile.m_pString = 0;
  this->m_bInRestore = 0;
  this->m_bClearSaveDir = 0;
  this->m_bOneWayTransition = 0;
  this->m_bClearFile = 1;
  this->m_bSaveStarted = 0;
  this->m_bAsyncSaveInProgress = 0;
  this->m_SaveMemory.m_pMemoryStack = 0;
  this->m_SaveMemory.m_nSaveAllocs = 0;
  this->m_pSaveThread = 0;
  this->m_AsyncSaveCallQueue.m_queue.m_Count.m_value = 0;
  this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head.value64x128 = 0u;
  _InterlockedExchange(&this->m_AsyncSaveCallQueue.m_queue.m_Count.m_value, 0);
  this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.sequence = 0;
  this->m_AsyncSaveCallQueue.m_queue.m_Head.value.sequence = 0;
  v3 = operator new(0x10u);
  this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.pNode = v3;
  this->m_AsyncSaveCallQueue.m_queue.m_Head.value.pNode = v3;
  v3->pNext = p_m_AsyncSaveCallQueue;
  this->m_AsyncSaveCallQueue.m_bNoQueue = 0;
  this->m_AsyncSaveCallQueue.m_nRefCount = 0;
  this->m_CurrentMod.m_pString = 0;
  this->m_residentSpawnGroups.m_Size = 0;
  this->m_residentSpawnGroups.m_Memory.m_pMemory = 0;
  this->m_residentSpawnGroups.m_Memory.m_nAllocationCount = 0;
  this->m_residentSpawnGroups.m_Memory.m_nGrowSize = 0;
  this->m_pRestoreData = 0;
}


// CEntity2SaveRestore::SaveInit  (line 391, @0x000000000205a350, libserver.so)  // inlines: CSaveRestoreData, CSaveRestoreSegment, Construct<CSaveRestoreData>, Init, InitSymbolTable, MakeSaveRestoreData, memset, operator=
// calls: operator new [], CGameSaveRestoreInfo::CGameSaveRestoreInfo, memset
CSaveRestoreData *__fastcall CEntity2SaveRestore::SaveInit(
        CEntity2SaveRestore *const this,
        int size,
        int numentities,
        __m128i flCurrentTime,
        int nCurrentTick)
{
  int v5; // r14d
  int v7; // r12d
  Elf64_Rela *v8; // rdi
  __int64 v9; // rax
  char *v10; // rax
  char *v11; // rbx
  void *v12; // rax

  v5 = _mm_cvtsi128_si32(flCurrentTime);
  v7 = size;
  if ( size <= 0 )
  {
    v8 = &stru_2003D0;
    v7 = 0x200000;
  }
  else
  {
    v8 = (size + 976LL);
  }
  v9 = 0x200000;
  if ( numentities >= 0 )
    v9 = numentities << 6;
  v10 = operator new[](v8 + v9);
  v11 = v10;
  if ( v10 == 0 )
    return 0;
  *v10 = 0;
  *(v10 + 1) = 0;
  *(v10 + 4) = 0;
  *(v10 + 5) = 0;
  *(v10 + 6) = 0;
  *(v10 + 4) = 0;
  CGameSaveRestoreInfo::CGameSaveRestoreInfo((v10 + 40));
  *(v11 + 5) = v7;
  v11[968] = 0;
  *v11 = v11 + 976;
  *(v11 + 1) = v11 + 976;
  *(v11 + 4) = 0;
  v12 = operator new[](0x7FF8u);
  if ( v12 == 0 )
    return 0;
  *(v11 + 6) = 4095;
  *(v11 + 4) = v12;
  memset(v12, 0, 0x7FF8u);
  *(v11 + 147) = v5;
  *(v11 + 148) = nCurrentTick;
  v11[560] = 0;
  *(v11 + 10) = 0;
  *(v11 + 48) = vec3_origin;
  return v11;
}


// CEntity2SaveRestore::SaveFinish  (line 443, @0x00000000020724f0, libserver.so)
// calls: CEntity2SaveRestore::Finish
void __fastcall CEntity2SaveRestore::SaveFinish(CEntity2SaveRestore *const this, CSaveRestoreData *pSaveData)
{
  CEntity2SaveRestore::Finish(this, pSaveData);
}


// CEntity2SaveRestore::Finish  (line 448, @0x0000000002072360, libserver.so)  // inlines: CheckInit, DetachSymbolTable, SaveFreeMemory, Shutdown
// calls: CGameSaveRestoreInfo::ShutdownEntityTable, CGameSaveRestoreInfo::PurgeEntityHash, CMemoryStack::~CMemoryStack, operator delete, operator new, CMemoryStack::CMemoryStack, CMemoryStack::Init, _Unwind_Resume
// callers: CEntity2SaveRestore::SaveFinish, CEntity2SaveRestore::LoadSaveData, CEntity2SaveRestore::LoadAdjacentDecals, CEntity2SaveRestore::AppendTransitionResources, CEntity2SaveRestore::ExtractResourcesFromSaveGame, CEntity2SaveRestore::SaveReadHeaderAndSpawnGroupList, CEntity2SaveRestore::StreamEntitiesFromFile, CEntity2SaveRestore::LoadAdjacentEnts, CEntity2SaveRestore::StreamEntitiesToFile, CEntity2SaveRestore::SaveGame_Finalize
// strings: "CSaveMemory"
void __fastcall CEntity2SaveRestore::Finish(CEntity2SaveRestore *const this, CSaveRestoreData *save)
{
  char **pTokens; // rax
  bool v5; // zf
  CGameSaveRestoreInfo *v6; // r12
  CMemoryStack *m_pMemoryStack; // r13
  CMemoryStack *v8; // r12
  CMemoryStack *v9; // r12
  CMemoryStack *v10; // r13

  save->tokenCount = 0;
  pTokens = save->pTokens;
  save->pTokens = 0;
  if ( pTokens != 0 )
  {
    if ( this->m_SaveMemory.m_pMemoryStack == 0 )
    {
      v10 = operator new(0x58u);
      CMemoryStack::CMemoryStack(v10);
      this->m_SaveMemory.m_pMemoryStack = v10;
      CMemoryStack::Init(v10, "CSaveMemory", &loc_2000000, 0x40u, 0x230000u, 0x10u);
    }
    v5 = this->m_SaveMemory.m_nSaveAllocs-- == 1;
    if ( v5 )
    {
      m_pMemoryStack = this->m_SaveMemory.m_pMemoryStack;
      if ( m_pMemoryStack != 0 )
      {
        CMemoryStack::~CMemoryStack(this->m_SaveMemory.m_pMemoryStack);
        operator delete(m_pMemoryStack);
      }
      this->m_SaveMemory.m_pMemoryStack = 0;
      this->m_SaveMemory.m_nSaveAllocs = 0;
    }
  }
  v6 = &save->CGameSaveRestoreInfo;
  CGameSaveRestoreInfo::ShutdownEntityTable(v6);
  CGameSaveRestoreInfo::PurgeEntityHash(v6);
  if ( this->m_SaveMemory.m_pMemoryStack == 0 )
  {
    v9 = operator new(0x58u);
    CMemoryStack::CMemoryStack(v9);
    this->m_SaveMemory.m_pMemoryStack = v9;
    CMemoryStack::Init(v9, "CSaveMemory", &loc_2000000, 0x40u, 0x230000u, 0x10u);
  }
  v5 = this->m_SaveMemory.m_nSaveAllocs-- == 1;
  if ( v5 )
  {
    v8 = this->m_SaveMemory.m_pMemoryStack;
    if ( v8 != 0 )
    {
      CMemoryStack::~CMemoryStack(this->m_SaveMemory.m_pMemoryStack);
      operator delete(v8);
    }
    this->m_SaveMemory.m_pMemoryStack = 0;
    this->m_SaveMemory.m_nSaveAllocs = 0;
  }
}


// CEntity2SaveRestore::SetCurrentMod  (line 462, @0x0000000002059400, libserver.so)
// calls: CUtlString::operator=
void __fastcall CEntity2SaveRestore::SetCurrentMod(CEntity2SaveRestore *const this, const char *pCurrentMod)
{
  CUtlString::operator=(&this->m_CurrentMod, pCurrentMod);
}


// CEntity2SaveRestore::FinishAsyncSave  (line 467, @0x000000000205c090, libserver.so)  // inlines: CAutoLockT, CThreadFastMutex, CallQueued, CopyConstruct<CFunctor*>, Count, FinishPush, FreeNode, InterlockedCompareExchangeNode, InterlockedCompareExchangeNodeLink, Lock, Pop, PopItem, Push, PushItem, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64, ThreadInterlockedAssignIf64x128, ThreadInterlockedCompareExchange64, ThreadInterlockedCompareExchangePointer, ThreadInterlockedDecrement, ThreadInterlockedIncrement, ThreadPause, TryLockInline, Unlock, operator int, operator++, operator--, ~CAutoLockT
// calls: ThreadGetCurrentId, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), __cxa_guard_acquire, __cxa_guard_release, AssertMsg_ConditionFailed, operator new, _Unwind_Resume
// callers: CEntity2SaveRestore::Shutdown, CEntity2SaveRestore::DispatchAsyncSave, CEntity2SaveRestore::LoadAdjacentEnts
// strings: "CTSQueue corruption"
// globals: `guard variable for'CEntity2SaveRestore::FinishAsyncSave(void)::autoMutex__, CEntity2SaveRestore::FinishAsyncSave(void)::autoMutex__, CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants
void __fastcall CEntity2SaveRestore::FinishAsyncSave(CEntity2SaveRestore *const this)
{
  unsigned __int64 v1; // r12
  signed __int64 CurrentId; // rsi
  unsigned __int64 v3; // rcx
  TSLHead_t m_Head; // rax
  CCallQueue *p_m_AsyncSaveCallQueue; // r13
  TSLHead_t v6; // rt0
  int v7; // r15d
  CTSQueue<CFunctor*,false>::NodeLink_t *p_m_Tail; // r14
  intp sequence; // rdx
  CTSQueue<CFunctor*,false>::Node_t *pNode; // rsi
  intp v11; // rcx
  __int64 v12; // rdx
  __int128 v13; // rt0
  __int128 v14; // rt0
  signed __int64 *v15; // rsi
  signed __int64 v16; // rdi
  signed __int64 v17; // r15
  __int128 v18; // rt0
  TSLHead_t v19; // rax
  __int64 v20; // rdx
  TSLHead_t v21; // rt0
  unsigned __int8 v22; // tt
  __int128 v23; // rt0
  _QWORD *p_Next; // [rsp+10h] [rbp-60h]
  intp *p_sequence; // [rsp+10h] [rbp-60h]

  if ( `guard variable for'CEntity2SaveRestore::FinishAsyncSave(void)::autoMutex__ == 0
    && __cxa_guard_acquire(&`guard variable for'CEntity2SaveRestore::FinishAsyncSave(void)::autoMutex__) != 0 )
  {
    CEntity2SaveRestore::FinishAsyncSave(void)::autoMutex__.m_ownerID = 0;
    CEntity2SaveRestore::FinishAsyncSave(void)::autoMutex__.m_depth = 0;
    __cxa_guard_release(&`guard variable for'CEntity2SaveRestore::FinishAsyncSave(void)::autoMutex__);
  }
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != CEntity2SaveRestore::FinishAsyncSave(void)::autoMutex__.m_ownerID
    && _InterlockedCompareExchange64(&CEntity2SaveRestore::FinishAsyncSave(void)::autoMutex__, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(&CEntity2SaveRestore::FinishAsyncSave(void)::autoMutex__, CurrentId, 0);
    if ( this->m_AsyncSaveCallQueue.m_queue.m_Count.m_value == 0 )
      goto LABEL_5;
  }
  else
  {
    ++CEntity2SaveRestore::FinishAsyncSave(void)::autoMutex__.m_depth;
    if ( this->m_AsyncSaveCallQueue.m_queue.m_Count.m_value == 0 )
      goto LABEL_5;
  }
  if ( this->m_AsyncSaveCallQueue.m_queue.m_Count.m_value != 0 )
  {
    v3 = 0;
    m_Head = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
    p_m_AsyncSaveCallQueue = &this->m_AsyncSaveCallQueue;
    p_Next = &m_Head.value.Next->Next;
    if ( m_Head.value.Next != 0 )
    {
      while ( 1 )
      {
        v3 = (m_Head.value32.DepthAndSequence - 1) | v3 & 0xFFFFFFFF00000000LL;
        v6 = m_Head;
        if ( _InterlockedCompareExchange128(
               &this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes,
               v3,
               m_Head.value.Next->Next,
               &v6) != 0 )
          break;
        _mm_pause();
        m_Head = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
        p_Next = &m_Head.value.Next->Next;
        if ( m_Head.value.Next == 0 )
          goto LABEL_34;
      }
    }
    else
    {
LABEL_34:
      p_Next = operator new(0x10u);
    }
    if ( p_Next != -8LL )
      p_Next[1] = 0;
    v7 = 0;
    *p_Next = p_m_AsyncSaveCallQueue;
    p_m_Tail = &this->m_AsyncSaveCallQueue.m_queue.m_Tail;
    while ( 1 )
    {
      sequence = this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.sequence;
      pNode = this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.pNode;
      if ( p_m_AsyncSaveCallQueue == _InterlockedCompareExchange64(pNode, p_Next, p_m_AsyncSaveCallQueue) )
        break;
      v11 = sequence + 1;
      *&v13 = pNode;
      *(&v13 + 1) = sequence;
      _InterlockedCompareExchange128(p_m_Tail, sequence + 1, pNode->pNext, &v13);
      v12 = *(&v13 + 1);
      if ( ++v7 > 9999999
        && AssertMsg_ConditionFailed(
             &CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants,
             "CTSQueue corruption",
             v12,
             v11) != 0 )
      {
        __debugbreak();
      }
    }
    *&v14 = pNode;
    *(&v14 + 1) = sequence;
    _InterlockedCompareExchange128(p_m_Tail, sequence + 1, p_Next, &v14);
    _InterlockedAdd(&this->m_AsyncSaveCallQueue.m_queue.m_Count.m_value, 1u);
    p_sequence = &this->m_AsyncSaveCallQueue.m_queue.m_Head.value.sequence;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            v15 = this->m_AsyncSaveCallQueue.m_queue.m_Head.value.pNode;
            v16 = *v15;
          }
          while ( *v15 == 0 );
          if ( v15 != p_m_Tail->value.pNode )
            break;
          if ( p_m_AsyncSaveCallQueue == v16 )
            goto LABEL_10;
          *&v23 = this->m_AsyncSaveCallQueue.m_queue.m_Head.value.pNode;
          *(&v23 + 1) = this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.sequence;
          _InterlockedCompareExchange128(&this->m_AsyncSaveCallQueue.m_queue.m_Tail, *(&v23 + 1) + 1LL, v16, &v23);
        }
        if ( p_m_AsyncSaveCallQueue != v16 )
        {
          v17 = *(v16 + 8);
          *&v18 = this->m_AsyncSaveCallQueue.m_queue.m_Head.value.pNode;
          *(&v18 + 1) = *p_sequence;
          if ( _InterlockedCompareExchange128(p_m_AsyncSaveCallQueue, *p_sequence + 1, v16, &v18) != 0 )
            break;
        }
      }
      _InterlockedSub(&this->m_AsyncSaveCallQueue.m_queue.m_Count.m_value, 1u);
      v15[1] = v17;
      v1 = v1;
      while ( 1 )
      {
        v19 = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
        v1 = (v19.value32.DepthAndSequence + 65537) | v1 & 0xFFFFFFFF00000000LL;
        *v15 = v19.value.Next;
        v21 = v19;
        v22 = _InterlockedCompareExchange128(&this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes, v1, v15, &v21);
        v20 = *(&v21.value64x128 + 1);
        if ( v22 != 0 )
          break;
        _mm_pause();
      }
      if ( v17 == 0 )
        break;
      (*(*v17 + 16LL))(v17, v15, v20, v1, p_m_Tail);
      (*(*v17 + 8LL))(v17);
    }
  }
LABEL_10:
  (*(g_pFullFileSystem->_vptr_IAppSystem + 52))(g_pFullFileSystem);
LABEL_5:
  this->m_bAsyncSaveInProgress = 0;
  if ( --CEntity2SaveRestore::FinishAsyncSave(void)::autoMutex__.m_depth == 0 )
    ThreadInterlockedExchange64(&CEntity2SaveRestore::FinishAsyncSave(void)::autoMutex__, 0);
}


// CEntity2SaveRestore::DispatchAsyncSave  (line 480, @0x0000000002072500, libserver.so)  // inlines: CMemberFuncProxy0, CMemberFuncProxyBase, CMemberFunctor0, CRefCountServiceBase, CRefCounted1, CreateFunctor<CEntity2SaveRestore*, CEntity2SaveRestore, void>, GetBool, GetInt, QueueCall<CEntity2SaveRestore, CEntity2SaveRestore, void>
// calls: operator new, CEntity2SaveRestore::FinishAsyncSave
// callers: CEntity2SaveRestore::SaveGame_Finalize
// strings: "CEntity2SaveRestore::FinishAsyncSave"
// globals: CEntity2SaveRestore::FinishAsyncSave(void)
void __fastcall CEntity2SaveRestore::DispatchAsyncSave(CEntity2SaveRestore *const this)
{
  IThreadPool *m_pSaveThread; // r12
  void (__fastcall *v3)(IThreadPool *, _QWORD *, _QWORD, const char *, __int64); // r13
  _QWORD *v4; // rax

  this->m_bAsyncSaveInProgress = 1;
  m_pSaveThread = this->m_pSaveThread;
  if ( m_pSaveThread != 0 && save_async.m_pParent->m_Value.m_nValue != 0 )
  {
    v3 = *(m_pSaveThread->_vptr_IRefCounted + 22);
    v4 = operator new(0x38u);
    *v4 = off_3FF2030;
    v4[2] = off_3FF2068;
    v4[4] = CEntity2SaveRestore::FinishAsyncSave;
    *(v4 + 6) = 1;
    v4[5] = 0;
    v4[6] = this;
    v3(m_pSaveThread, v4, 0, "CEntity2SaveRestore::FinishAsyncSave", 8);
  }
  else
  {
    CEntity2SaveRestore::FinishAsyncSave(this);
  }
}


// CEntity2SaveRestore::SaveGameStateGlobals  (line 536, @0x00000000020725c0, libserver.so)  // inlines: CSaveFlushScope, CUtlString, Release, SAVE_HEADER, operator char const*, ~CSaveFlushScope, ~CUtlString, ~SAVE_HEADER
// calls: CUtlString::Set, CUtlString::operator=, CUtlString::FreeMemoryBlock, CUtlString::Get, _Unwind_Resume, CSaveFlushScope::~CSaveFlushScope
// callers: CEntity2SaveRestore::StreamEntitiesToFile
// strings: "Header | ", "Save Header", "ADJACENCY"
// globals: SAVE_HEADER::m_DataMap, levellist_t::m_DataMap
void __fastcall CEntity2SaveRestore::SaveGameStateGlobals(
        CEntity2SaveRestore *const this,
        const char *pSpawnGroupName,
        const matrix3x4a_t *const vecWorldOffset,
        CSaveRestoreData *pSaveData,
        CSave *const saveHelper,
        __m128i flCurrentTime)
{
  int v6; // r15d
  int m_nFlushScopeDepth; // eax
  int m_nConnectionCount; // eax
  __int64 dataNumFields; // r9
  typedescription_t *dataDesc; // r8
  char *v15; // rax
  int v16; // eax
  levellist_t *m_levelList; // r12
  int v18; // ebx
  int v19; // ecx
  void (__fastcall *v20)(CSave *, const char *); // rbx
  const char *v21; // rax
  CSaveFlushScope_0 guard; // [rsp+8h] [rbp-A0h] BYREF
  _DWORD v23[4]; // [rsp+18h] [rbp-90h] BYREF
  CUtlString v24[8]; // [rsp+28h] [rbp-80h] BYREF
  int flCurrentTimea; // [rsp+68h] [rbp-40h]

  v6 = _mm_cvtsi128_si32(flCurrentTime);
  guard.m_pSave = saveHelper;
  guard.m_sScopeName.m_pString = 0;
  CUtlString::Set(&guard.m_sScopeName, "Header | ");
  m_nFlushScopeDepth = guard.m_pSave->m_nFlushScopeDepth;
  guard.m_pSave->m_nFlushScopeDepth = m_nFlushScopeDepth + 1;
  if ( m_nFlushScopeDepth == 0 )
    (*(guard.m_pSave->_vptr_ISave + 74))(guard.m_pSave, "");
  m_nConnectionCount = pSaveData->m_levelInfo.m_nConnectionCount;
  flCurrentTimea = v6;
  v24[0].m_pString = 0;
  v23[0] = 0;
  v23[1] = 1;
  v23[2] = m_nConnectionCount;
  v23[3] = 1;
  CUtlString::operator=(v24, pSpawnGroupName);
  dataNumFields = SAVE_HEADER::m_DataMap.dataNumFields;
  dataDesc = SAVE_HEADER::m_DataMap.dataDesc;
  v24[2] = *&vecWorldOffset->m_flMatVal[0][0];
  v24[3] = *&vecWorldOffset->m_flMatVal[0][2];
  v24[4] = *&vecWorldOffset->m_flMatVal[1][0];
  v24[5] = *&vecWorldOffset->m_flMatVal[1][2];
  v24[6] = *&vecWorldOffset->m_flMatVal[2][0];
  v15 = *&vecWorldOffset->m_flMatVal[2][2];
  pSaveData->m_levelInfo.m_flSaveTime = 0.0;
  v24[7].m_pString = v15;
  (*(saveHelper->_vptr_ISave + 6))(saveHelper, "Save Header", v23, 0, dataDesc, dataNumFields);
  v16 = pSaveData->m_levelInfo.m_nConnectionCount;
  m_levelList = pSaveData->m_levelInfo.m_levelList;
  v18 = 0;
  LODWORD(pSaveData->m_levelInfo.m_flSaveTime) = flCurrentTimea;
  if ( v16 > 0 )
  {
    do
    {
      (*(saveHelper->_vptr_ISave + 6))(
        saveHelper,
        "ADJACENCY",
        m_levelList,
        0,
        levellist_t::m_DataMap.dataDesc,
        levellist_t::m_DataMap.dataNumFields);
      ++v18;
      ++m_levelList;
    }
    while ( pSaveData->m_levelInfo.m_nConnectionCount > v18 );
  }
  if ( v24[0].m_pString != 0 )
    CUtlString::FreeMemoryBlock(v24);
  if ( guard.m_pSave != 0 )
  {
    v19 = guard.m_pSave->m_nFlushScopeDepth;
    guard.m_pSave->m_nFlushScopeDepth = v19 - 1;
    if ( v19 == 1 )
    {
      v20 = *(guard.m_pSave->_vptr_ISave + 74);
      v21 = CUtlString::Get(&guard.m_sScopeName);
      v20(guard.m_pSave, v21);
    }
  }
  if ( guard.m_sScopeName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&guard.m_sScopeName);
}


// CEntity2SaveRestore::ParseSaveTables  (line 568, @0x0000000002072820, libserver.so)  // inlines: Rebase, operator=
// callers: CEntity2SaveRestore::LoadAdjacentDecals, CEntity2SaveRestore::StreamEntitiesFromFile, CEntity2SaveRestore::LoadAdjacentEnts
// strings: "Save Header", "ADJACENCY"
// globals: SAVE_HEADER::m_DataMap, levellist_t::m_DataMap
void __fastcall CEntity2SaveRestore::ParseSaveTables(
        CEntity2SaveRestore *const this,
        CSaveRestoreData *pSaveData,
        SAVE_HEADER *pHeader,
        CRestore *const restoreHelper)
{
  levellist_t *m_levelList; // r12
  int size; // eax
  __int64 dataNumFields; // r9
  typedescription_t *dataDesc; // r8
  int m_nConnectionCount; // edx
  float m_flSaveTime; // xmm0_4
  int v13; // ebx
  levellist_t *v14; // rdx

  m_levelList = pSaveData->m_levelInfo.m_levelList;
  pSaveData->pBaseData = pSaveData->pCurrentData;
  size = pSaveData->size;
  pSaveData->size = 0;
  dataNumFields = SAVE_HEADER::m_DataMap.dataNumFields;
  dataDesc = SAVE_HEADER::m_DataMap.dataDesc;
  pSaveData->bufferSize -= size;
  (*(restoreHelper->_vptr_IRestore + 3))(restoreHelper, "Save Header", pHeader, 0, dataDesc, dataNumFields);
  pSaveData->m_levelInfo.m_nMapVersion = pHeader->m_version;
  m_nConnectionCount = pHeader->m_nConnectionCount;
  pSaveData->m_levelInfo.m_nConnectionCount = m_nConnectionCount;
  m_flSaveTime = pHeader->m_flSaveTime;
  v13 = 0;
  pSaveData->m_levelInfo.m_bUseLandmark = 1;
  pSaveData->m_levelInfo.m_flSaveTime = m_flSaveTime;
  pSaveData->m_levelInfo.m_vecLandmarkOffset = vec3_origin;
  while ( pSaveData->m_levelInfo.m_nConnectionCount > v13 )
  {
    v14 = m_levelList;
    ++v13;
    ++m_levelList;
    (*(restoreHelper->_vptr_IRestore + 3))(
      restoreHelper,
      "ADJACENCY",
      v14,
      0,
      levellist_t::m_DataMap.dataDesc,
      levellist_t::m_DataMap.dataNumFields);
  }
}


// CEntity2SaveRestore::WriteSymbolTable  (line 592, @0x0000000002072910, libserver.so)  // inlines: BytesAvailable, MoveCurPos, StringFromSymbol, Write, memcpy
// calls: strlen, memcpy, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CEntity2SaveRestore::StreamEntitiesToFile, CEntity2SaveRestore::SaveGame_Finalize
// strings: "Token Table Save/Restore overflow on token [%d]!"
int __fastcall CEntity2SaveRestore::WriteSymbolTable(CEntity2SaveRestore *const this, CSaveRestoreData *pSaveData)
{
  int size; // r14d
  __int64 v4; // r13
  int v5; // r15d
  int v6; // eax
  const char *v7; // rsi
  int v8; // r12d
  int bufferSize; // eax
  __int64 v10; // r14
  int v11; // r12d
  char *v12; // rcx
  bool v13; // cc
  char **pTokens; // rax
  char *pCurrentData; // [rsp+0h] [rbp-40h]
  const char *pszToken; // [rsp+8h] [rbp-38h]

  pCurrentData = pSaveData->pCurrentData;
  if ( pSaveData->tokenCount <= 0 )
    return 0;
  size = pSaveData->size;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    pTokens = pSaveData->pTokens;
    if ( pTokens[v4] == 0 )
      break;
    pszToken = pTokens[v4];
    v6 = strlen(pszToken);
    v7 = pszToken;
    v8 = v6 + 1;
    bufferSize = pSaveData->bufferSize;
    if ( bufferSize - size < v8 )
      goto LABEL_8;
LABEL_4:
    v10 = v8;
    ++v5;
    ++v4;
    memcpy(pSaveData->pCurrentData, v7, v8);
    v11 = pSaveData->size + v8;
    v12 = &pSaveData->pCurrentData[v10];
    v13 = pSaveData->tokenCount <= v5;
    pSaveData->size = v11;
    pSaveData->pCurrentData = v12;
    if ( v13 )
      return v12 - pCurrentData;
    size = v11;
  }
  bufferSize = pSaveData->bufferSize;
  v7 = "";
  v8 = 1;
  if ( bufferSize - size >= 1 )
    goto LABEL_4;
LABEL_8:
  pSaveData->size = bufferSize;
  if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
    LoggingSystem_Log(LOG_SAVERESTORE, 2, "Token Table Save/Restore overflow on token [%d]!", v5);
  return &pSaveData->pCurrentData[-pCurrentData];
}


// CEntity2SaveRestore::WriteResourceList  (line 608, @0x000000000208b650, libserver.so)  // inlines: AddMultipleToTail, BytesAvailable, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, MoveCurPos, Purge, RemoveAll, Write, memcpy, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGameSaveRestoreInfo::GetResourceList, CUtlMemory<char, int>::Grow, bf_write::bf_write, CCompressedResourceManifest::Serialize, memcpy, CUtlMemory<char, int>::Purge, _Unwind_Resume
// callers: CEntity2SaveRestore::StreamEntitiesToFile
int __fastcall CEntity2SaveRestore::WriteResourceList(CEntity2SaveRestore *const this, CSaveRestoreData *pSaveData)
{
  const CCompressedResourceManifest *ResourceList; // r12
  char *pCurrentData; // r14
  int v5; // r12d
  char *v6; // rdx
  int v7; // ebx
  CUtlVector<char,CUtlMemory<char,int> > data; // [rsp+0h] [rbp-70h] BYREF
  bf_write dataOut; // [rsp+20h] [rbp-50h] BYREF

  ResourceList = CGameSaveRestoreInfo::GetResourceList(&pSaveData->CGameSaveRestoreInfo);
  pCurrentData = pSaveData->pCurrentData;
  data.m_Memory.m_pMemory = 0;
  data.m_Memory.m_nAllocationCount = 0;
  data.m_Memory.m_nGrowSize = 0;
  CUtlMemory<char,int>::Grow(&data.m_Memory, 4124672);
  bf_write::bf_write(&dataOut, data.m_Memory.m_pMemory, 4124672, -1);
  CCompressedResourceManifest::Serialize(ResourceList, &dataOut);
  v5 = (dataOut.m_iCurBit + 7) >> 3;
  if ( v5 <= pSaveData->bufferSize - pSaveData->size )
  {
    memcpy(pSaveData->pCurrentData, dataOut.m_pData, v5);
    v6 = &pSaveData->pCurrentData[v5];
    pSaveData->size += v5;
    pSaveData->pCurrentData = v6;
  }
  else
  {
    v6 = pSaveData->pCurrentData;
    pSaveData->size = pSaveData->bufferSize;
  }
  v7 = v6 - pCurrentData;
  if ( (data.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char,int>::Purge(&data.m_Memory);
    if ( (data.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char,int>::Purge(&data.m_Memory);
  }
  return v7;
}


// CEntity2SaveRestore::StreamEntitiesToFile  (line 624, @0x000000000208cde0, libserver.so)  // inlines: Purge, String, SumBytes, operator char const*, operator[], ~CUtlBuffer, ~CUtlMemory, ~CUtlString
// calls: CUtlString::Get, CEntity2SaveRestore::GetSaveGameSpawnGroupName, V_snprintf, CUtlString::FreeMemoryBlock, LoggingSystem_IsChannelEnabled, CSave::CSave, CEntity2SaveRestore::SaveGameStateGlobals, CGameSaveRestoreInfo::AddResourceToSaveManifest, CEntity2SaveRestore::WriteSymbolTable, CEntity2SaveRestore::WriteResourceList, CGameSaveRestoreInfo::GetResourceList, CCompressedResourceManifest::GetResourceCount (23 total)
// callers: CEntity2SaveRestore::StreamEntitiesToFile
// strings: "SAVE/%s.HL%s", "SAVE/", "SV", "%s:  StreamEntitiesToFile:  '%s' [%d entities]\n", "%s:  adding %d spawn group resources to save\n"
// globals: CURRENT_SAVEFILE_HEADER_TAG
bool __fastcall CEntity2SaveRestore::StreamEntitiesToFile(
        CEntity2SaveRestore *const this,
        const SaveStreamInfo_t *const stream)
{
  CSaveRestoreData *v4; // r14
  const char *v5; // rax
  ISaveRestoreBlockSet *m_pSaveRestoreBlockSet; // rbx
  __int64 i; // rbx
  const char *v8; // rax
  char *pCurrentData; // r13
  char *v10; // r12
  const CCompressedResourceManifest *ResourceList; // rax
  void *v12; // rax
  const char *v13; // rax
  const char *pSpawnGroupName; // [rsp+10h] [rbp-230h]
  char *pMem; // [rsp+18h] [rbp-228h]
  SaveFileSections_t sections; // [rsp+20h] [rbp-220h] BYREF
  SaveFileSectionsInfo_t sectionsInfo; // [rsp+40h] [rbp-200h] BYREF
  CSave saveHelper; // [rsp+60h] [rbp-1E0h] BYREF
  CUtlBuffer buffer; // [rsp+B0h] [rbp-190h] BYREF
  char name[264]; // [rsp+100h] [rbp-140h] BYREF
  unsigned __int64 v22; // [rsp+208h] [rbp-38h]

  memset(&sectionsInfo, 0, sizeof(sectionsInfo));
  v22 = __readfsqword(0x28u);
  v4 = (*(this->_vptr_IEntity2SaveRestore + 14))(
         this,
         0,
         stream->m_Entities.m_Size,
         stream->m_nCurrentTick,
         stream->m_flCurrentTime);
  if ( v4 == 0 )
    return 0;
  pSpawnGroupName = CUtlString::Get(&stream->m_SpawnGroup.m_SpawnGroupName);
  CEntity2SaveRestore::GetSaveGameSpawnGroupName(&buffer, this, pSpawnGroupName);
  v5 = CUtlString::Get(&buffer);
  V_snprintf(name, 260, "SAVE/%s.HL%s", v5, "1");
  if ( buffer.m_Memory.m_pMemory != 0 )
    CUtlString::FreeMemoryBlock(&buffer);
  if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
    LoggingSystem_Log(
      LOG_SAVERESTORE,
      0,
      "%s:  StreamEntitiesToFile:  '%s' [%d entities]\n",
      "SV",
      name,
      stream->m_Entities.m_Size);
  v4->bAsync = 0;
  m_pSaveRestoreBlockSet = stream->m_pSaveRestoreBlockSet;
  sections.m_pSymbols = v4->pCurrentData;
  (*(m_pSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 1))(m_pSaveRestoreBlockSet, v4, &stream->m_Entities);
  if ( this->m_SaveGameInfo.m_bTransition )
    v4->m_levelInfo.m_nConnectionCount = BuildChangeList(v4, v4->m_levelInfo.m_levelList, 16);
  CSave::CSave(&saveHelper, v4);
  CEntity2SaveRestore::SaveGameStateGlobals(
    this,
    pSpawnGroupName,
    &stream->m_SpawnGroup.m_vecWorldOrigin,
    v4,
    &saveHelper,
    LODWORD(stream->m_flCurrentTime));
  (*(m_pSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 2))(m_pSaveRestoreBlockSet, &saveHelper);
  sectionsInfo.m_nBytesData = &v4->pCurrentData[-LODWORD(sections.m_pSymbols)];
  pMem = v4->pCurrentData;
  (*(m_pSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 3))(m_pSaveRestoreBlockSet, &saveHelper);
  (*(m_pSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 4))(m_pSaveRestoreBlockSet, &stream->m_Entities);
  if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
    LoggingSystem_Log(
      LOG_SAVERESTORE,
      0,
      "%s:  adding %d spawn group resources to save\n",
      "SV",
      stream->m_SpawnGroupResources.m_Size);
  for ( i = 0; stream->m_SpawnGroupResources.m_Size > i; ++i )
  {
    v8 = CUtlString::Get(&stream->m_SpawnGroupResources.m_Memory.m_pMemory[i]);
    CGameSaveRestoreInfo::AddResourceToSaveManifest(&v4->CGameSaveRestoreInfo, v8);
  }
  sectionsInfo.m_nBytesDataHeaders = &v4->pCurrentData[-pMem];
  pCurrentData = v4->pCurrentData;
  sectionsInfo.m_nBytesSymbols = CEntity2SaveRestore::WriteSymbolTable(this, v4);
  v10 = v4->pCurrentData;
  sectionsInfo.m_nSymbols = v4->tokenCount;
  sectionsInfo.m_nBytesResourceList = CEntity2SaveRestore::WriteResourceList(this, v4);
  ResourceList = CGameSaveRestoreInfo::GetResourceList(&v4->CGameSaveRestoreInfo);
  sectionsInfo.m_nResourceCount = CCompressedResourceManifest::GetResourceCount(ResourceList);
  v12 = operator new[](
          sectionsInfo.m_nBytesData
        + sectionsInfo.m_nBytesResourceList
        + sectionsInfo.m_nBytesDataHeaders
        + sectionsInfo.m_nBytesSymbols
        + 32);
  CUtlBuffer::CUtlBuffer(
    &buffer,
    v12,
    sectionsInfo.m_nBytesData
  + sectionsInfo.m_nBytesResourceList
  + sectionsInfo.m_nBytesDataHeaders
  + sectionsInfo.m_nBytesSymbols
  + 32,
    0);
  CUtlBuffer::Put(&buffer, &CURRENT_SAVEFILE_HEADER_TAG, 8);
  CUtlBuffer::Put(&buffer, &sectionsInfo, 24);
  CUtlBuffer::Put(&buffer, pCurrentData, sectionsInfo.m_nBytesSymbols);
  CUtlBuffer::Put(&buffer, v10, sectionsInfo.m_nBytesResourceList);
  CUtlBuffer::Put(&buffer, pMem, sectionsInfo.m_nBytesDataHeaders);
  CUtlBuffer::Put(&buffer, sections.m_pSymbols, sectionsInfo.m_nBytesData);
  (*(g_pFullFileSystem->_vptr_IAppSystem + 27))(g_pFullFileSystem, "SAVE/", "MOD");
  (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 15))(&g_pFullFileSystem->IBaseFileSystem, name, "MOD", &buffer);
  CEntity2SaveRestore::GetSaveGameSpawnGroupName(&sections.m_pResourceList, this, pSpawnGroupName);
  v13 = CUtlString::Get(&sections.m_pResourceList);
  CEntity2SaveRestore::EntityPatchWrite(this, v4, v13, 0);
  if ( sections.m_pResourceList != 0 )
    CUtlString::FreeMemoryBlock(&sections.m_pResourceList);
  CEntity2SaveRestore::Finish(this, v4);
  if ( (buffer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned char,int>::Purge(&buffer.m_Memory);
  CSave::~CSave(&saveHelper);
  return 1;
}


// CEntity2SaveRestore::SetOneWayTransition  (line 741, @0x00000000020592e0, libserver.so)
void __fastcall CEntity2SaveRestore::SetOneWayTransition(CEntity2SaveRestore *const this, bool bState)
{
  this->m_bOneWayTransition = bState;
}


// CEntity2SaveRestore::GetOneWayTransition  (line 746, @0x00000000020592f0, libserver.so)
bool __fastcall CEntity2SaveRestore::GetOneWayTransition(const CEntity2SaveRestore *const this)
{
  return this->m_bOneWayTransition;
}


// CEntity2SaveRestore::IsRestoring  (line 751, @0x0000000002059300, libserver.so)
bool __fastcall CEntity2SaveRestore::IsRestoring(const CEntity2SaveRestore *const this)
{
  return this->m_bInRestore;
}


// CEntity2SaveRestore::AddRestoredEntity  (line 756, @0x00000000020877a0, libserver.so)  // inlines: AddToTail, CEntityHandle, CopyConstruct<CEntityHandle>, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Init, operator[]
// calls: CUtlMemory<CEntityHandle, int>::Grow
void __fastcall CEntity2SaveRestore::AddRestoredEntity(CEntity2SaveRestore *const this, CEntityInstance *pEntity)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  int v5; // r13d
  __int64 m_Size; // r12
  int v7; // edx
  CEntityHandle *v8; // rdx

  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v5 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
    else
    {
      v5 = -1;
    }
    m_Size = this->m_RestoredEntities.m_Size;
    v7 = this->m_RestoredEntities.m_Size;
    if ( m_Size == this->m_RestoredEntities.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEntityHandle,int>::Grow(&this->m_RestoredEntities.m_Memory, 1);
      v7 = this->m_RestoredEntities.m_Size;
    }
    this->m_RestoredEntities.m_Size = v7 + 1;
    v8 = &this->m_RestoredEntities.m_Memory.m_pMemory[m_Size];
    if ( v8 != 0 )
      v8->m_Index = v5;
  }
}


// CEntity2SaveRestore::BeginRestoreEntities  (line 765, @0x0000000002072a30, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<CEntityHandle, int>::Purge, LoggingSystem_IsChannelEnabled, CEntitySystem::ExecuteQueuedOperations, LoggingSystem_Log
// callers: CEntity2SaveRestore::StreamEntitiesFromFile, CEntity2SaveRestore::LoadAdjacentEnts
// strings: "BeginRestoreEntities without previous EndRestoreEntities.\n"
void __fastcall CEntity2SaveRestore::BeginRestoreEntities(CEntity2SaveRestore *const this)
{
  bool v2; // zf

  if ( this->m_bInRestore )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
      LoggingSystem_Log(LOG_SAVERESTORE, 2, "BeginRestoreEntities without previous EndRestoreEntities.\n");
    CEntitySystem::ExecuteQueuedOperations(g_pEntitySystem, 0);
  }
  v2 = (this->m_RestoredEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_RestoredEntities.m_Size = 0;
  if ( v2 )
    CUtlMemory<CEntityHandle,int>::Purge(&this->m_RestoredEntities.m_Memory);
  this->m_bInRestore = 1;
}


// CEntity2SaveRestore::EndRestoreEntities  (line 776, @0x000000000205c940, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, operator CEntityInstance*, operator[]
// calls: CEntitySystem::ExecuteQueuedOperations, CBodyGameSystem::OnRestore, CUtlMemory<CEntityHandle, int>::Purge
// callers: CEntity2SaveRestore::EndRestoreEntities, CEntity2SaveRestore::StreamEntitiesFromFile, CEntity2SaveRestore::LoadAdjacentEnts
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEntity2SaveRestore::EndRestoreEntities(
        CEntity2SaveRestore *const this,
        IStreamEntitiesFromFileCompletion *pCompletion)
{
  int v4; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  CEntityHandle *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // rdi
  bool v13; // zf

  CEntitySystem::ExecuteQueuedOperations(g_pEntitySystem, 1);
  CBodyGameSystem::OnRestore(
    g_pBodyGameSystem,
    this->m_RestoredEntities.m_Size,
    this->m_RestoredEntities.m_Memory.m_pMemory);
  v4 = this->m_RestoredEntities.m_Size - 1;
  if ( v4 >= 0 )
  {
    v5 = 4LL * v4;
    v6 = 4 * (v4 - v4) - 4;
    do
    {
      while ( 1 )
      {
        v7 = &this->m_RestoredEntities.m_Memory.m_pMemory[v5 / 4];
        m_Index = v7->m_Index;
        if ( v7->m_Index + 2 > 1 )
        {
          v9 = v7->m_Index;
          v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
          if ( v10 != 0 )
          {
            v11 = &v10[v9 & 0x1FF];
            if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
            {
              m_pInstance = v11->m_pInstance;
              if ( v11->m_pInstance != 0 && SLOBYTE(m_pInstance->m_pEntity->m_flags) >= 0 )
                break;
            }
          }
        }
        v5 -= 4LL;
        if ( v5 == v6 )
          goto LABEL_11;
      }
      v5 -= 4LL;
      (*(m_pInstance->_vptr_IHandleEntity + 18))(m_pInstance);
    }
    while ( v5 != v6 );
  }
LABEL_11:
  if ( pCompletion != 0 )
    (*pCompletion->_vptr_IStreamEntitiesFromFileCompletion)(pCompletion, &this->m_RestoredEntities);
  v13 = (this->m_RestoredEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_RestoredEntities.m_Size = 0;
  if ( v13 )
    CUtlMemory<CEntityHandle,int>::Purge(&this->m_RestoredEntities.m_Memory);
  this->m_bInRestore = 0;
  CEntitySystem::ExecuteQueuedOperations(g_pEntitySystem, 0);
}


// CEntity2SaveRestore::EndRestoreEntities  (line 776, @0x0000000002072ac0, libserver.so)
// calls: CEntity2SaveRestore::EndRestoreEntities
void __fastcall CEntity2SaveRestore::EndRestoreEntities(
        CEntity2SaveRestore *const this,
        IStreamEntitiesFromFileCompletion *pCompletion)
{
  if ( this->m_bInRestore )
    CEntity2SaveRestore::EndRestoreEntities(this, pCompletion);
}


// CEntity2SaveRestore::ReadSymbolTable  (line 807, @0x0000000002072ae0, libserver.so)  // inlines: CheckInit, DefineSymbol, InitSymbolTable, SaveFreeMemory, Shutdown, memset
// calls: CSaveMemory::SaveAllocMemory, memset, CMemoryStack::~CMemoryStack, operator delete, operator new, CMemoryStack::CMemoryStack, CMemoryStack::Init, _Unwind_Resume
// callers: CEntity2SaveRestore::LoadSaveData, CEntity2SaveRestore::SaveReadHeaderAndSpawnGroupList
// strings: "CSaveMemory"
char *__fastcall CEntity2SaveRestore::ReadSymbolTable(
        CEntity2SaveRestore *const this,
        CSaveRestoreData *pSaveData,
        char *pszTokenList,
        size_t nBytesSymbols,
        int nSymbols)
{
  char *v6; // rbx
  __int64 v7; // r15
  char **v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // al
  char **v13; // rsi
  char *result; // rax
  CMemoryStack *m_pMemoryStack; // rbx
  CMemoryStack *v17; // rbx

  v6 = pszTokenList;
  if ( nBytesSymbols != 0 )
  {
    v7 = nSymbols;
    v10 = CSaveMemory::SaveAllocMemory(&this->m_SaveMemory, nSymbols, 8u, 1);
    if ( v10 != 0 )
    {
      pSaveData->tokenCount = nSymbols;
      pSaveData->pTokens = v10;
      memset(v10, 0, 8 * v7);
      if ( nSymbols > 0 )
      {
        v11 = 0;
        do
        {
          v12 = *v6;
          if ( *v6 != 0 )
          {
            v13 = &pSaveData->pTokens[v11 / 8];
            if ( *v13 == 0 )
            {
              *v13 = v6;
              goto LABEL_8;
            }
          }
          while ( 1 )
          {
            ++v6;
            if ( v12 == 0 )
              break;
LABEL_8:
            v12 = *v6;
          }
          v11 += 8LL;
        }
        while ( v11 != 8LL * (nSymbols - 1) + 8 );
      }
      return v6;
    }
    else
    {
      if ( this->m_SaveMemory.m_pMemoryStack == 0 )
      {
        v17 = operator new(0x58u);
        CMemoryStack::CMemoryStack(v17);
        this->m_SaveMemory.m_pMemoryStack = v17;
        CMemoryStack::Init(v17, "CSaveMemory", &loc_2000000, 0x40u, 0x230000u, 0x10u);
      }
      result = 0;
      if ( this->m_SaveMemory.m_nSaveAllocs-- == 1 )
      {
        m_pMemoryStack = this->m_SaveMemory.m_pMemoryStack;
        if ( m_pMemoryStack != 0 )
        {
          CMemoryStack::~CMemoryStack(this->m_SaveMemory.m_pMemoryStack);
          operator delete(m_pMemoryStack);
        }
        this->m_SaveMemory.m_pMemoryStack = 0;
        this->m_SaveMemory.m_nSaveAllocs = 0;
        return 0;
      }
    }
  }
  else
  {
    pSaveData->tokenCount = 0;
    result = pszTokenList;
    pSaveData->pTokens = 0;
  }
  return result;
}


// CEntity2SaveRestore::ReadResourceList  (line 839, @0x0000000002072c70, libserver.so)
// calls: CCompressedResourceManifest::RemoveAll, bf_read::bf_read, CCompressedResourceManifest::Unserialize
// callers: CEntity2SaveRestore::LoadSaveData
char *__fastcall CEntity2SaveRestore::ReadResourceList(
        CEntity2SaveRestore *const this,
        CCompressedResourceManifest *const resourceList,
        char *pCompressedManifestData,
        size_t nBytesResources,
        int nResources)
{
  __int64 v8; // rax
  bf_read dataIn; // [rsp+0h] [rbp-40h] BYREF

  CCompressedResourceManifest::RemoveAll(resourceList);
  bf_read::bf_read(&dataIn, pCompressedManifestData, nBytesResources, -1);
  v8 = 0;
  if ( nBytesResources != 0 )
  {
    CCompressedResourceManifest::Unserialize(resourceList, &dataIn);
    v8 = (dataIn.m_iCurBit + 7) >> 3;
  }
  return &pCompressedManifestData[v8];
}


// CEntity2SaveRestore::LoadSaveData  (line 863, @0x0000000002072ce0, libserver.so)  // inlines: CSaveRestoreData, CSaveRestoreSegment, Construct<CSaveRestoreData>, Init, MakeSaveRestoreData, Purge, SumBytes, operator!=, operator=, ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, CUtlBuffer::Put, CUtlBuffer::Get, memcmp, CSaveMemory::SaveAllocMemory, CGameSaveRestoreInfo::CGameSaveRestoreInfo, CUtlString::operator=, CUtlString::FixSlashes, CUtlString::ToLowerFast, CEntity2SaveRestore::ReadSymbolTable, CGameSaveRestoreInfo::GetResourceListForWrite, CEntity2SaveRestore::ReadResourceList (15 total)
// callers: CEntity2SaveRestore::LoadAdjacentDecals, CEntity2SaveRestore::AppendTransitionResources, CEntity2SaveRestore::ExtractResourcesFromSaveGame, CEntity2SaveRestore::StreamEntitiesFromFile, CEntity2SaveRestore::LoadAdjacentEnts
// globals: CURRENT_SAVEFILE_HEADER_TAG
CSaveRestoreData *__fastcall CEntity2SaveRestore::LoadSaveData(
        CEntity2SaveRestore *const this,
        const char *pSpawnGroupName,
        const void *pvData,
        int nDataSize)
{
  CSaveRestoreData *v8; // rax
  CSaveRestoreData *v9; // rbx
  CGameSaveRestoreInfo *v10; // rax
  char *SymbolTable; // r14
  int m_nResourceCount; // r15d
  CCompressedResourceManifest *v13; // rax
  char *ResourceList; // rax
  int m_nBytesSymbols; // esi
  int m_nBytesDataHeaders; // edx
  int m_nBytesResourceList; // ecx
  int v18; // edx
  vec_t x; // xmm0_4
  bool v20; // zf
  CSaveRestoreData *result; // rax
  CGameSaveRestoreInfo *v22; // [rsp+0h] [rbp-C0h]
  size_t pPayloadStart; // [rsp+8h] [rbp-B8h]
  CSaveRestoreData *pPayloadStarta; // [rsp+8h] [rbp-B8h]
  SaveFileHeaderTag_t tag; // [rsp+10h] [rbp-B0h] BYREF
  SaveFileSectionsInfo_t sectionsInfo; // [rsp+20h] [rbp-A0h] BYREF
  CUtlBuffer filebuf; // [rsp+40h] [rbp-80h] BYREF

  CUtlBuffer::CUtlBuffer(&filebuf, 0, 0, 0);
  CUtlBuffer::Put(&filebuf, pvData, nDataSize);
  CUtlBuffer::Get(&filebuf, &tag, 8);
  if ( filebuf.m_Error == 0 && memcmp(&tag, &CURRENT_SAVEFILE_HEADER_TAG, 8u) == 0 )
  {
    memset(&sectionsInfo, 0, sizeof(sectionsInfo));
    CUtlBuffer::Get(&filebuf, &sectionsInfo, 24);
    if ( filebuf.m_Error == 0 )
    {
      v8 = CSaveMemory::SaveAllocMemory(
             &this->m_SaveMemory,
             sectionsInfo.m_nBytesData
           + sectionsInfo.m_nBytesResourceList
           + sectionsInfo.m_nBytesDataHeaders
           + sectionsInfo.m_nBytesSymbols
           + 976LL,
             1u,
             1);
      v9 = v8;
      if ( v8 != 0 )
      {
        v8->pBaseData = 0;
        v10 = &v8->CGameSaveRestoreInfo;
        v10[-1].m_ResourceList.m_extensions.m_pUserSearchString = 0;
        v10[-1].m_ResourceList.m_extensions.m_StringPools.m_Size = 0;
        *(&v10[-1].m_ResourceList.m_extensions.m_StringPools.m_Size + 1) = 0;
        LODWORD(v10[-1].m_ResourceList.m_extensions.m_StringPools.m_Memory.m_pMemory) = 0;
        *&v10[-1].m_ResourceList.m_extensions.m_StringPools.m_Memory.m_nAllocationCount = 0;
        v22 = v10;
        CGameSaveRestoreInfo::CGameSaveRestoreInfo(v10);
        v9->bAsync = 0;
        CUtlString::operator=(&v9->m_levelInfo.m_sCurrentMapName, pSpawnGroupName);
        CUtlString::FixSlashes(&v9->m_levelInfo.m_sCurrentMapName, 47);
        CUtlString::ToLowerFast(&v9->m_levelInfo.m_sCurrentMapName);
        CUtlBuffer::Get(
          &filebuf,
          &v9[1],
          sectionsInfo.m_nBytesData
        + sectionsInfo.m_nBytesResourceList
        + sectionsInfo.m_nBytesDataHeaders
        + sectionsInfo.m_nBytesSymbols);
        if ( filebuf.m_Error == 0 )
        {
          SymbolTable = CEntity2SaveRestore::ReadSymbolTable(
                          this,
                          v9,
                          &v9[1],
                          sectionsInfo.m_nBytesSymbols,
                          sectionsInfo.m_nSymbols);
          if ( SymbolTable != 0 )
          {
            m_nResourceCount = sectionsInfo.m_nResourceCount;
            pPayloadStart = sectionsInfo.m_nBytesResourceList;
            v13 = CGameSaveRestoreInfo::GetResourceListForWrite(v22);
            ResourceList = CEntity2SaveRestore::ReadResourceList(
                             this,
                             v13,
                             SymbolTable,
                             pPayloadStart,
                             m_nResourceCount);
            if ( ResourceList != 0 )
            {
              m_nBytesSymbols = sectionsInfo.m_nBytesSymbols;
              v9->m_levelInfo.m_nConnectionCount = 0;
              m_nBytesDataHeaders = sectionsInfo.m_nBytesDataHeaders;
              v9->m_levelInfo.m_bUseLandmark = 1;
              v9->m_levelInfo.m_flSaveTime = 0.0;
              m_nBytesResourceList = sectionsInfo.m_nBytesResourceList;
              v18 = sectionsInfo.m_nBytesData
                  + sectionsInfo.m_nBytesResourceList
                  + m_nBytesSymbols
                  + m_nBytesDataHeaders;
              v9->pBaseData = ResourceList;
              v9->pCurrentData = ResourceList;
              v9->size = 0;
              x = vec3_origin.x;
              v20 = (filebuf.m_Memory.m_nGrowSize & 0xC0000000) == 0;
              v9->bufferSize = v18 - m_nBytesSymbols - m_nBytesResourceList;
              v9->m_levelInfo.m_vecLandmarkOffset.x = x;
              v9->m_levelInfo.m_vecLandmarkOffset.y = vec3_origin.y;
              result = v9;
              v9->m_levelInfo.m_vecLandmarkOffset.z = vec3_origin.z;
              if ( !v20 )
                return result;
LABEL_12:
              pPayloadStarta = result;
              CUtlMemory<unsigned char,int>::Purge(&filebuf.m_Memory);
              return pPayloadStarta;
            }
          }
        }
        CEntity2SaveRestore::Finish(this, v9);
      }
    }
  }
  result = 0;
  if ( (filebuf.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    goto LABEL_12;
  return result;
}


// CEntity2SaveRestore::EntityPatchWrite  (line 946, @0x0000000002083bb0, libserver.so)  // inlines: AddToTail, CMemberFuncProxy6, CMemberFuncProxyBase, CMemberFunctor6, CRefCountServiceBase, CRefCounted1, CUtlEnvelope, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<int>, CreateFunctor<ISaveRestoreFileSystem*, ISaveRestoreFileSystem, FSAsyncStatus_t, char const*, void const*, int, bool, bool, FSAsyncControl_t__**, CUtlEnvelope<char const*>, void*, int, bool, bool, FSAsyncControl_t__**>, Element, GrowMemory, Purge, QueueCall<ISaveRestoreFileSystem*, ISaveRestoreFileSystem, FSAsyncStatus_t, char const*, void const*, int, bool, bool, FSAsyncControl_t__**, CUtlEnvelope<char const*>, void*, int, bool, bool, FSAsyncControl_t__**>, RemoveAll, String, operator char const*, operator[], ~CRefCountServiceBase, ~CRefCounted1, ~CUtlBuffer, ~CUtlEnvelope, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CEntity2SaveRestore::GetSaveGameSpawnGroupName, CUtlString::Get, CUtlString::Format, CUtlString::FreeMemoryBlock, CGameSaveRestoreInfo::NumEntities, CGameSaveRestoreInfo::GetEntityInfo, CUtlMemory<int, int>::Grow, operator new [], CUtlBuffer::CUtlBuffer, CUtlBuffer::Put, LoggingSystem_IsChannelEnabled, CUtlString::operator= (20 total)
// callers: CEntity2SaveRestore::LoadAdjacentEnts, CEntity2SaveRestore::StreamEntitiesToFile
// strings: "SAVE/%s.HL3", "SV", "%s:  Queue AsyncWrite (%s)\n", "%s:  EntityPatchWrite( %s ) wrote %d entries\n"
// globals: g_pSaveRestoreFileSystem
void __fastcall CEntity2SaveRestore::EntityPatchWrite(
        CEntity2SaveRestore *const this,
        CSaveRestoreData *pSaveData,
        const char *level,
        bool bAsync)
{
  const char *v5; // rax
  CGameSaveRestoreInfo *v6; // r14
  int v7; // ebx
  __int64 m_Size; // r15
  int v9; // eax
  int *v10; // rax
  int v11; // r14d
  void *v12; // r15
  __int64 v13; // r12
  int i; // ebx
  void (__fastcall *v15)(ISaveRestoreFileSystem *, const char *, void *, _QWORD, __int64, _QWORD, _QWORD); // rbx
  const char *v16; // rax
  const char *v17; // rax
  void *v18; // rbx
  const char *v19; // rax
  int v20; // r12d
  const char *v21; // rax
  CUtlMemory<int,int> *v24; // [rsp+20h] [rbp-F0h]
  int count; // [rsp+3Ch] [rbp-D4h] BYREF
  CUtlString name; // [rsp+40h] [rbp-D0h] BYREF
  CUtlString v27; // [rsp+50h] [rbp-C0h] BYREF
  CUtlString src; // [rsp+60h] [rbp-B0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > patchIndices; // [rsp+70h] [rbp-A0h] BYREF
  CUtlBuffer buffer; // [rsp+90h] [rbp-80h] BYREF

  name.m_pString = 0;
  CEntity2SaveRestore::GetSaveGameSpawnGroupName(&v27, this, level);
  v5 = CUtlString::Get(&v27);
  CUtlString::Format(&name, "SAVE/%s.HL3", v5);
  if ( v27.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v27);
  v6 = &pSaveData->CGameSaveRestoreInfo;
  v7 = 0;
  patchIndices.m_Size = 0;
  patchIndices.m_Memory.m_pMemory = 0;
  patchIndices.m_Memory.m_nAllocationCount = 0;
  patchIndices.m_Memory.m_nGrowSize = 0;
  while ( CGameSaveRestoreInfo::NumEntities(v6) > v7 )
  {
    if ( (CGameSaveRestoreInfo::GetEntityInfo(v6, v7)->flags & 0x40000000) != 0 )
    {
      m_Size = patchIndices.m_Size;
      v9 = patchIndices.m_Size;
      if ( patchIndices.m_Size == patchIndices.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<int,int>::Grow(&patchIndices.m_Memory, 1);
        v9 = patchIndices.m_Size;
      }
      patchIndices.m_Size = v9 + 1;
      v10 = &patchIndices.m_Memory.m_pMemory[m_Size];
      if ( v10 != 0 )
        *v10 = v7;
    }
    ++v7;
  }
  v11 = 4 * patchIndices.m_Size + 4;
  count = patchIndices.m_Size;
  v12 = operator new[](v11);
  CUtlBuffer::CUtlBuffer(&buffer, v12, v11, 0);
  CUtlBuffer::Put(&buffer, &count, 4);
  v13 = 0;
  for ( i = 0; patchIndices.m_Size > i; ++v13 )
  {
    CUtlBuffer::Put(&buffer, &patchIndices.m_Memory.m_pMemory[v13], 4);
    ++i;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 1) != 0 )
  {
    v20 = count;
    v21 = CUtlString::Get(&name);
    LoggingSystem_Log(LOG_SAVERESTORE, 1, "%s:  EntityPatchWrite( %s ) wrote %d entries\n", "SV", v21, v20);
  }
  if ( bAsync )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 1) != 0 )
    {
      v19 = CUtlString::Get(&name);
      LoggingSystem_Log(LOG_SAVERESTORE, 1, "%s:  Queue AsyncWrite (%s)\n", "SV", v19);
    }
    v17 = CUtlString::Get(&name);
    src.m_pString = 0;
    CUtlString::operator=(&src, v17);
    v24 = g_pSaveRestoreFileSystem;
    v18 = operator new(0x58u);
    *v18 = off_3FF2090;
    *(v18 + 6) = 1;
    *(v18 + 2) = off_3FF20C8;
    *(v18 + 4) = 105;
    *(v18 + 5) = 0;
    *(v18 + 7) = 0;
    *(v18 + 6) = v24;
    CUtlString::operator=(v18 + 7, &src);
    *(v18 + 8) = v12;
    *(v18 + 18) = v11;
    *(v18 + 76) = 1;
    *(v18 + 77) = 0;
    *(v18 + 10) = 0;
    CCallQueueT<CTSQueue<CFunctor *,false>>::QueueFunctorInternal(&this->m_AsyncSaveCallQueue, v18);
    if ( src.m_pString != 0 )
    {
      CUtlString::FreeMemoryBlock(&src);
      if ( (buffer.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_18;
LABEL_26:
      CUtlMemory<unsigned char,int>::Purge(&buffer.m_Memory);
      goto LABEL_18;
    }
  }
  else
  {
    v15 = *(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 13);
    v16 = CUtlString::Get(&name);
    v15(g_pSaveRestoreFileSystem, v16, v12, v11, 1, 0, 0);
    (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 11))(g_pSaveRestoreFileSystem);
  }
  if ( (buffer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    goto LABEL_26;
LABEL_18:
  patchIndices.m_Size = 0;
  if ( (patchIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&patchIndices.m_Memory);
    if ( (patchIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&patchIndices.m_Memory);
  }
  if ( name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&name);
}


// CEntity2SaveRestore::EntityPatchRead  (line 989, @0x0000000002073240, libserver.so)  // inlines: CUtlString, String, operator char const*, ~CUtlString
// calls: CEntity2SaveRestore::GetSaveGameSpawnGroupName, CUtlString::Get, CUtlString::Format, CUtlString::FreeMemoryBlock, CGameSaveRestoreInfo::GetEntityInfo, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, _Unwind_Resume
// callers: CEntity2SaveRestore::StreamEntitiesFromFile, CEntity2SaveRestore::LoadAdjacentEnts
// strings: "SAVE/%s.HL3", "SV", "%s:  EntityPatchRead( %s ) read %d entries\n"
// globals: g_pSaveRestoreFileSystem
void __fastcall CEntity2SaveRestore::EntityPatchRead(
        CEntity2SaveRestore *const this,
        CSaveRestoreData *pSaveData,
        const char *level)
{
  const char *v4; // rax
  int (*v5)(...); // rbx
  const char *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  int v9; // ebx
  CGameSaveRestoreInfo *i; // r14
  int v11; // r12d
  const char *v12; // rax
  int size; // [rsp+Ch] [rbp-54h] BYREF
  CUtlString name; // [rsp+10h] [rbp-50h] BYREF
  CUtlString entityId; // [rsp+20h] [rbp-40h] BYREF

  name.m_pString = 0;
  CEntity2SaveRestore::GetSaveGameSpawnGroupName(&entityId, this, level);
  v4 = CUtlString::Get(&entityId);
  CUtlString::Format(&name, "SAVE/%s.HL3", v4);
  if ( entityId.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&entityId);
  v5 = *g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem;
  v6 = CUtlString::Get(&name);
  v7 = (v5)(g_pSaveRestoreFileSystem, v6, "rb", 0);
  v8 = v7;
  if ( v7 != 0 )
  {
    (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 2))(g_pSaveRestoreFileSystem, &size, 4, v7);
    v9 = 0;
    for ( i = &pSaveData->CGameSaveRestoreInfo;
          size > v9;
          CGameSaveRestoreInfo::GetEntityInfo(i, entityId.m_pString)->flags = 0x40000000 )
    {
      (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 2))(g_pSaveRestoreFileSystem, &entityId, 4, v8);
      ++v9;
    }
    (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 1))(g_pSaveRestoreFileSystem, v8);
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 1) != 0 )
    {
      v11 = size;
      v12 = CUtlString::Get(&name);
      LoggingSystem_Log(LOG_SAVERESTORE, 1, "%s:  EntityPatchRead( %s ) read %d entries\n", "SV", v12, v11);
    }
  }
  if ( name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&name);
}


// CEntity2SaveRestore::StreamEntitiesFromFile  (line 1014, @0x000000000208bd20, libserver.so)  // inlines: AddToTail, CEntityHandle, CUtlString, CopyConstruct<CEntityHandle>, Element, EndRestoreEntities, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, IndexToIdentity, Init, IsUsed, LookupEntityByIndex, Purge, RemoveAll, SAVE_HEADER, operator[], ~CRestore, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~SAVE_HEADER
// calls: CEntity2SaveRestore::BeginRestoreEntities, CEntity2SaveRestore::LoadSaveData, CGlobalVarsBase::curtime, CRestore::CRestore, CEntity2SaveRestore::ParseSaveTables, CEntity2SaveRestore::EntityPatchRead, CGameSaveRestoreInfo::NumEntities, CGameSaveRestoreInfo::GetEntityInfo, CUtlMemory<CEntityHandle, int>::Grow, CEntity2SaveRestore::BuildRestoredIndexTranslationTable, CEntity2SaveRestore::Finish, CUtlString::FreeMemoryBlock (16 total)
bool __fastcall CEntity2SaveRestore::StreamEntitiesFromFile(
        CEntity2SaveRestore *const this,
        ISaveRestoreBlockSet *pSaveRestoreBlockSet,
        const char *pSpawnGroupName,
        const void *pvSaveData,
        size_t nSaveDataSize,
        SpawnGroupHandle_t handle,
        const Vector *const vecWorldOffset,
        IStreamEntitiesFromFileCompletion *pCompletion,
        CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *pEntitiesRestored)
{
  int v9; // r15d
  CSaveRestoreData *SaveData; // r15
  float v14; // xmm0_4
  CGlobalVars *v15; // rax
  float v16; // xmm0_4
  CGlobalVars *v17; // rax
  int v18; // ebx
  CGameSaveRestoreInfo *v19; // r15
  CEntityHandle *v20; // rax
  int32 m_Data; // eax
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rcx
  __int16 v24; // si
  int v25; // r12d
  __int64 m_Size; // r14
  int v27; // eax
  CSaveRestoreData *pSaveData; // [rsp+8h] [rbp-108h]
  CRestore restoreHelper; // [rsp+40h] [rbp-D0h] BYREF
  SAVE_HEADER header; // [rsp+80h] [rbp-90h] BYREF

  v9 = nSaveDataSize;
  CEntity2SaveRestore::BeginRestoreEntities(this);
  SaveData = CEntity2SaveRestore::LoadSaveData(this, pSpawnGroupName, pvSaveData, v9);
  pSaveData = SaveData;
  if ( SaveData != 0 )
  {
    v14 = CGlobalVarsBase::curtime(gpGlobals, 0);
    v15 = gpGlobals;
    SaveData->m_levelInfo.m_flSaveTime = v14;
    SaveData->m_levelInfo.m_nSaveTick = v15->tickcount;
    CRestore::CRestore(&restoreHelper, SaveData);
    (*(pSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 5))(pSaveRestoreBlockSet);
    (*(pSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 6))(pSaveRestoreBlockSet, &restoreHelper);
    memset(&header, 0, 24);
    header.m_flSaveTime = 0.0;
    CEntity2SaveRestore::ParseSaveTables(this, SaveData, &header, &restoreHelper);
    CEntity2SaveRestore::EntityPatchRead(this, SaveData, pSpawnGroupName);
    v16 = CGlobalVarsBase::curtime(gpGlobals, 0);
    v17 = gpGlobals;
    SaveData->m_levelInfo.m_flSaveTime = v16;
    SaveData->m_levelInfo.m_nSaveTick = v17->tickcount;
    (*(pSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 7))(pSaveRestoreBlockSet, &restoreHelper, handle, 1);
    (*(pSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 8))(pSaveRestoreBlockSet);
    v18 = 0;
    v19 = &SaveData->CGameSaveRestoreInfo;
    while ( v18 < CGameSaveRestoreInfo::NumEntities(v19) )
    {
      m_Data = CGameSaveRestoreInfo::GetEntityInfo(v19, v18)->restoreentityindex.m_Data;
      if ( m_Data <= 0x7FFE )
      {
        v22 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[m_Data >> 9];
        if ( v22 != 0 )
        {
          v23 = &v22[m_Data & 0x1FF];
          if ( v23 != 0 && m_Data == (v23->m_EHandle.m_Index & 0x7FFF) )
          {
            v24 = 0x7FFF;
            if ( v23->m_EHandle.m_Index != -1 )
              v24 = v23->m_EHandle.m_Index & 0x7FFF;
            v25 = (((v23->m_EHandle.m_Index >> 15) - (v23->m_flags & 1)) << 15) | v24 & 0x7FFF;
            m_Size = pEntitiesRestored->m_Size;
            v27 = pEntitiesRestored->m_Size;
            if ( m_Size == pEntitiesRestored->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CEntityHandle,int>::Grow(&pEntitiesRestored->m_Memory, 1);
              v27 = pEntitiesRestored->m_Size;
            }
            pEntitiesRestored->m_Size = v27 + 1;
            v20 = &pEntitiesRestored->m_Memory.m_pMemory[m_Size];
            if ( v20 != 0 )
              v20->m_Index = v25;
          }
        }
      }
      ++v18;
    }
    CEntity2SaveRestore::BuildRestoredIndexTranslationTable(this, pSpawnGroupName, pSaveData, 1);
    CEntity2SaveRestore::Finish(this, pSaveData);
    if ( header.m_sSpawnGroupName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&header.m_sSpawnGroupName);
    restoreHelper.m_BlockEndStack.m_Size = 0;
    restoreHelper._vptr_IRestore = &off_3FF5F30;
    if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
      if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
    }
  }
  if ( this->m_bInRestore )
    CEntity2SaveRestore::EndRestoreEntities(this, pCompletion);
  return 1;
}


// CEntity2SaveRestore::LoadAdjacentEnts  (line 1116, @0x000000000208c0c0, libserver.so)  // inlines: CSaveRestoreData, CSaveRestoreSegment, CUtlString, Clear, CreateEntityTransitionListHelper, EndRestoreEntities, Purge, RemoveAll, SAVE_HEADER, String, VectorSubtract, curtime, operator char const*, operator-, operator=, operator[], ~CCompressedResourceManifest, ~CGameSaveRestoreInfo, ~CRestore, ~CSaveRestoreData, ~CUtlBuffer, ~CUtlHash, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase, ~SAVE_HEADER, ~levellist_t, ~saverestorelevelinfo_t
// calls: CEntity2SaveRestore::FinishAsyncSave, CGameSaveRestoreInfo::CGameSaveRestoreInfo, CGameSaveRestoreInfo::Clear, CUtlString::Set, CUtlString::FixSlashes, CUtlString::ToLowerFast, BuildChangeList, CEntity2SaveRestore::BeginRestoreEntities, CUtlString::operator==, CUtlString::FreeMemoryBlock, CUtlSymbolTable::~CUtlSymbolTable, CUtlVectorBase<CCompressedResourceManifest::CompressedResourceName_t, CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t, int> >::RemoveAll (44 total)
// strings: "SAVE/%s.HL%s", "SV", "%s:  transfering entities from %s [%s] (landmark='%s')\n", "%s:  level transition ERROR:  no connection from new level '%s' back to old level '%s'\n"
void __fastcall CEntity2SaveRestore::LoadAdjacentEnts(
        CEntity2SaveRestore *const this,
        ISaveRestoreBlockSet *pSaveRestoreBlockSet,
        const char *pNewLevel,
        const char *pOldLevel,
        const char *pLandmarkName,
        SpawnGroupHandle_t handle,
        IStreamEntitiesFromFileCompletion *pCompletion,
        CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *pEntitiesRestored)
{
  int v10; // r12d
  levellist_t *m_levelList; // rbx
  bool v12; // al
  char v13; // cl
  CSaveRestoreData *v14; // r13
  unsigned __int64 v15; // rbx
  __int64 v16; // r12
  CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int> > *v17; // rax
  bool v18; // zf
  levellist_t *v19; // rbx
  const char *v20; // rax
  const char *v21; // rax
  const char *v22; // r14
  const char *v23; // rax
  int m_Put; // r14d
  unsigned __int8 *m_pMemory; // r13
  const char *v26; // rax
  CSaveRestoreData *SaveData; // rax
  CSaveRestoreData *v28; // r13
  const char *v29; // rax
  CGlobalVars *v30; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  vec_t v33; // xmm2_4
  vec_t v34; // xmm1_4
  unsigned int v35; // r15d
  int v36; // r15d
  const char *v37; // rax
  const char *v38; // rax
  unsigned int ReadPos; // r14d
  int EntityTransitionList; // r15d
  ISaveRestoreBlockHandler *PhysSaveRestoreBlockHandler; // rsi
  ISaveRestoreBlockHandler *v42; // rax
  const char *v43; // rax
  const char *v44; // rax
  IStreamEntitiesFromFileCompletion *v45; // [rsp+8h] [rbp-728h]
  void (__fastcall *v47)(ISaveRestoreBlockSet *, ISaveRestoreBlockHandler *, _QWORD, CRestore *, _QWORD, _QWORD); // [rsp+20h] [rbp-710h]
  CGameSaveRestoreInfo *v51; // [rsp+60h] [rbp-6D0h]
  bool foundprevious; // [rsp+9Fh] [rbp-691h]
  CUtlString sOldLevel; // [rsp+A0h] [rbp-690h] BYREF
  CUtlString v56; // [rsp+B0h] [rbp-680h] BYREF
  Vector landmarkOrigin; // [rsp+C0h] [rbp-670h]
  Vector saveLandmarkOrigin; // [rsp+D0h] [rbp-660h]
  CRestore restoreHelper; // [rsp+E0h] [rbp-650h] BYREF
  CRestore v60; // [rsp+120h] [rbp-610h] BYREF
  CUtlBuffer bufSaveData; // [rsp+160h] [rbp-5D0h] BYREF
  SAVE_HEADER header; // [rsp+1B0h] [rbp-580h] BYREF
  CSaveRestoreData currentLevelData; // [rsp+210h] [rbp-520h] BYREF
  CFmtStr filename; // [rsp+5E0h] [rbp-150h] BYREF
  unsigned __int64 v65; // [rsp+6F8h] [rbp-38h]

  v45 = pCompletion;
  v65 = __readfsqword(0x28u);
  CEntity2SaveRestore::FinishAsyncSave(this);
  memset(&currentLevelData, 0, 28);
  currentLevelData.pTokens = 0;
  CGameSaveRestoreInfo::CGameSaveRestoreInfo(&currentLevelData.CGameSaveRestoreInfo);
  currentLevelData.bAsync = 0;
  memset(&currentLevelData, 0, 28);
  currentLevelData.pTokens = 0;
  CGameSaveRestoreInfo::Clear(&currentLevelData.CGameSaveRestoreInfo);
  sOldLevel.m_pString = 0;
  CUtlString::Set(&sOldLevel, pOldLevel);
  CUtlString::FixSlashes(&sOldLevel, 47);
  CUtlString::ToLowerFast(&sOldLevel);
  currentLevelData.m_levelInfo.m_nConnectionCount = BuildChangeList(
                                                      &currentLevelData,
                                                      currentLevelData.m_levelInfo.m_levelList,
                                                      16);
  CEntity2SaveRestore::BeginRestoreEntities(this);
  if ( currentLevelData.m_levelInfo.m_nConnectionCount <= 0 )
  {
    foundprevious = 0;
  }
  else
  {
    v10 = 0;
    foundprevious = 0;
    m_levelList = currentLevelData.m_levelInfo.m_levelList;
    do
    {
      v12 = CUtlString::operator==(&m_levelList->m_sMapName, &sOldLevel);
      v13 = foundprevious;
      if ( v12 )
        v13 = 1;
      foundprevious = v13;
      if ( v10 != 0 )
      {
        v14 = currentLevelData.m_levelInfo.m_levelList;
        while ( !CUtlString::operator==(&m_levelList->m_sMapName, v14) )
        {
          v14 = (v14 + 32);
          if ( v14 == &currentLevelData.m_levelInfo.m_levelList[(v10 - 1) + 1] )
            goto LABEL_34;
        }
      }
      else
      {
LABEL_34:
        v20 = CUtlString::Get(&m_levelList->m_sMapName);
        CEntity2SaveRestore::GetSaveGameSpawnGroupName(&header, this, v20);
        v21 = CUtlString::Get(&header);
        CFmtStrN<256,false>::CFmtStrN(&filename, "SAVE/%s.HL%s", v21, "1");
        if ( *&header.m_saveId != 0 )
          CUtlString::FreeMemoryBlock(&header);
        if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
        {
          v22 = CUtlString::Get(&m_levelList->m_sLandmarkName);
          v23 = CUtlString::Get(&m_levelList->m_sMapName);
          LoggingSystem_Log(
            LOG_SAVERESTORE,
            0,
            "%s:  transfering entities from %s [%s] (landmark='%s')\n",
            "SV",
            filename.m_szBuf,
            v23,
            v22);
        }
        CUtlBuffer::CUtlBuffer(&bufSaveData, 0, 0, 0);
        (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
          &g_pFullFileSystem->IBaseFileSystem,
          filename.m_szBuf,
          "MOD",
          &bufSaveData,
          0,
          0,
          0,
          v45);
        m_Put = bufSaveData.m_Put;
        m_pMemory = bufSaveData.m_Memory.m_pMemory;
        v26 = CUtlString::Get(&m_levelList->m_sMapName);
        SaveData = CEntity2SaveRestore::LoadSaveData(this, v26, m_pMemory, m_Put);
        v28 = SaveData;
        if ( SaveData != 0 )
        {
          CRestore::CRestore(&restoreHelper, SaveData);
          v51 = &v28->CGameSaveRestoreInfo;
          CGameSaveRestoreInfo::SetAdjacent(&v28->CGameSaveRestoreInfo, 1);
          (*(pSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 5))(pSaveRestoreBlockSet);
          (*(pSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 6))(pSaveRestoreBlockSet, &restoreHelper);
          memset(&header, 0, 24);
          header.m_flSaveTime = 0.0;
          CEntity2SaveRestore::ParseSaveTables(this, v28, &header, &restoreHelper);
          v29 = CUtlString::Get(&m_levelList->m_sMapName);
          CEntity2SaveRestore::EntityPatchRead(this, v28, v29);
          v30 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            }
            m_flCurrentTime = v30->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          v28->m_levelInfo.m_flSaveTime = m_flCurrentTime;
          v28->m_levelInfo.m_bUseLandmark = 1;
          landmarkOrigin = CGameSaveRestoreInfo::LandmarkOrigin(&currentLevelData.CGameSaveRestoreInfo, pLandmarkName);
          saveLandmarkOrigin = CGameSaveRestoreInfo::LandmarkOrigin(v51, pLandmarkName);
          v33 = landmarkOrigin.y - saveLandmarkOrigin.y;
          v34 = landmarkOrigin.x - saveLandmarkOrigin.x;
          v28->m_levelInfo.m_vecLandmarkOffset.z = landmarkOrigin.z - saveLandmarkOrigin.z;
          v28->m_levelInfo.m_vecLandmarkOffset.y = v33;
          v28->m_levelInfo.m_vecLandmarkOffset.x = v34;
          v35 = CUtlString::operator==(&m_levelList->m_sMapName, &sOldLevel) ? 0x80000000 : 0;
          v36 = CGameSaveRestoreInfo::EntryInTableBitMask(v51, pNewLevel) | v35;
          if ( v36 != 0 )
          {
            CRestore::CRestore(&v60, v28);
            ReadPos = CRestore::GetReadPos(&v60);
            EntityTransitionList = CreateEntityTransitionList(v28, v36, handle, pEntitiesRestored);
            if ( EntityTransitionList != 0 )
            {
              v47 = *(g_pGameSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 11);
              PhysSaveRestoreBlockHandler = GetPhysSaveRestoreBlockHandler();
              v47(g_pGameSaveRestoreBlockSet, PhysSaveRestoreBlockHandler, ReadPos, &v60, handle, 0);
            }
            v42 = GetPhysSaveRestoreBlockHandler();
            (*(v42->_vptr_ISaveRestoreBlockHandler + 8))(v42);
            v60.m_BlockEndStack.m_Size = 0;
            v60._vptr_IRestore = &off_3FF5F30;
            if ( (v60.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<int,int>::Purge(&v60.m_BlockEndStack.m_Memory);
              if ( (v60.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<int,int>::Purge(&v60.m_BlockEndStack.m_Memory);
            }
            if ( EntityTransitionList != 0 )
            {
              v43 = CUtlString::Get(&m_levelList->m_sMapName);
              CEntity2SaveRestore::GetSaveGameSpawnGroupName(&v56, this, v43);
              v44 = CUtlString::Get(&v56);
              CEntity2SaveRestore::EntityPatchWrite(this, v28, v44, 0);
              if ( v56.m_pString != 0 )
                CUtlString::FreeMemoryBlock(&v56);
            }
          }
          v37 = CUtlString::Get(&m_levelList->m_sMapName);
          CEntity2SaveRestore::BuildRestoredIndexTranslationTable(this, v37, v28, 1);
          CEntity2SaveRestore::Finish(this, v28);
          v38 = CUtlString::Get(&m_levelList->m_sMapName);
          CEntity2SaveRestore::LoadAdjacentDecals(
            this,
            pSaveRestoreBlockSet,
            v38,
            &currentLevelData,
            pLandmarkName,
            handle);
          if ( header.m_sSpawnGroupName.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&header.m_sSpawnGroupName);
          restoreHelper.m_BlockEndStack.m_Size = 0;
          restoreHelper._vptr_IRestore = &off_3FF5F30;
          if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
            if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
          }
        }
        if ( (bufSaveData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<unsigned char,int>::Purge(&bufSaveData.m_Memory);
      }
      ++v10;
      ++m_levelList;
    }
    while ( currentLevelData.m_levelInfo.m_nConnectionCount > v10 );
  }
  if ( this->m_bInRestore )
    CEntity2SaveRestore::EndRestoreEntities(this, v45);
  if ( !foundprevious )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
      LoggingSystem_Log(
        LOG_SAVERESTORE,
        2,
        "%s:  level transition ERROR:  no connection from new level '%s' back to old level '%s'\n",
        "SV",
        pNewLevel,
        pOldLevel);
    (*(*g_pHostStateMgr + 96LL))(g_pHostStateMgr, 0);
  }
  if ( sOldLevel.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&sOldLevel);
  CUtlSymbolTable::~CUtlSymbolTable(&currentLevelData.m_ResourceList.m_extensions);
  CUtlSymbolTable::~CUtlSymbolTable(&currentLevelData.m_ResourceList.m_paths);
  CUtlSymbolTable::~CUtlSymbolTable(&currentLevelData.m_ResourceList.m_resources.m_SymbolTable);
  CUtlVectorBase<CCompressedResourceManifest::CompressedResourceName_t,CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>>::RemoveAll(&currentLevelData.m_ResourceList.m_resources.m_Vector);
  if ( (currentLevelData.m_ResourceList.m_resources.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>::Purge(&currentLevelData.m_ResourceList.m_resources.m_Vector.m_Memory);
    if ( (currentLevelData.m_ResourceList.m_resources.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>::Purge(&currentLevelData.m_ResourceList.m_resources.m_Vector.m_Memory);
  }
  if ( currentLevelData.m_EntityToIndex.m_Buckets.m_Size > 0 )
  {
    v15 = 0;
    v16 = 8 * (3LL * (currentLevelData.m_EntityToIndex.m_Buckets.m_Size - 1) + 3);
    do
    {
      v17 = &currentLevelData.m_EntityToIndex.m_Buckets.m_Memory.m_pMemory[v15 / 0x18];
      v18 = (currentLevelData.m_EntityToIndex.m_Buckets.m_Memory.m_pMemory[v15 / 0x18].m_Memory.m_nGrowSize & 0xC0000000) == 0;
      currentLevelData.m_EntityToIndex.m_Buckets.m_Memory.m_pMemory[v15 / 0x18].m_Size = 0;
      if ( v18 )
        CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>::Purge(&v17->m_Memory);
      v15 += 24LL;
    }
    while ( v15 != v16 );
  }
  CUtlVectorBase<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,int>>::RemoveAll(&currentLevelData.m_EntityToIndex.m_Buckets);
  if ( (currentLevelData.m_EntityToIndex.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,int>::Purge(&currentLevelData.m_EntityToIndex.m_Buckets.m_Memory);
    if ( (currentLevelData.m_EntityToIndex.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement,CUtlMemory<CGameSaveRestoreInfo::CHashElement,int>>,int>::Purge(&currentLevelData.m_EntityToIndex.m_Buckets.m_Memory);
  }
  currentLevelData.m_EntityTable.m_Size = 0;
  if ( (currentLevelData.m_EntityTable.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<entitytable_t,int>::Purge(&currentLevelData.m_EntityTable.m_Memory);
    if ( (currentLevelData.m_EntityTable.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<entitytable_t,int>::Purge(&currentLevelData.m_EntityTable.m_Memory);
  }
  if ( currentLevelData.m_levelInfo.m_sCurrentMapName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&currentLevelData.m_levelInfo.m_sCurrentMapName);
  if ( currentLevelData.m_levelInfo.m_sLandmarkName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&currentLevelData.m_levelInfo.m_sLandmarkName);
  v19 = &currentLevelData.m_levelInfo.m_levelList[15];
  do
  {
    if ( v19->m_sLandmarkName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v19->m_sLandmarkName);
    if ( v19->m_sMapName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v19->m_sMapName);
    --v19;
  }
  while ( v19 != &currentLevelData.size );
}


// CEntity2SaveRestore::LoadAdjacentDecals  (line 1234, @0x00000000020743d0, libserver.so)  // inlines: CUtlString, Purge, RemoveAll, SAVE_HEADER, String, VectorSubtract, curtime, operator-, operator=, ~CRestore, ~CUtlBuffer, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~SAVE_HEADER
// calls: CEntity2SaveRestore::GetSaveGameSpawnGroupName, CUtlString::Get, CFmtStrN<256, false>::CFmtStrN, CUtlString::FreeMemoryBlock, LoggingSystem_IsChannelEnabled, CUtlBuffer::CUtlBuffer, CEntity2SaveRestore::LoadSaveData, CRestore::CRestore, CGameSaveRestoreInfo::SetAdjacent, CEntity2SaveRestore::ParseSaveTables, CGameSaveRestoreInfo::LandmarkOrigin, CRestore::GetReadPos (20 total)
// callers: CEntity2SaveRestore::LoadAdjacentEnts
// strings: "SAVE/%s.HL2", "SV", "%s:  transfering decals from %s [%s] (landmark='%s')\n"
void __fastcall CEntity2SaveRestore::LoadAdjacentDecals(
        CEntity2SaveRestore *const this,
        ISaveRestoreBlockSet *pSaveRestoreBlockSet,
        const char *pLevelName,
        const CSaveRestoreData *const currentLevelData,
        const char *pLandmarkName,
        SpawnGroupHandle_t handle)
{
  const char *v8; // rax
  CSaveRestoreData *SaveData; // rax
  CSaveRestoreData *v10; // rbx
  CGlobalVars *v11; // r13
  float m_flCurrentTime; // xmm0_4
  ISaveRestoreBlockHandler *DecalsSaveRestoreBlockHandler; // rsi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const CSaveRestoreData *currentLevelDatab; // [rsp+28h] [rbp-278h]
  unsigned int basea; // [rsp+30h] [rbp-270h]
  CRestore restoreHelper; // [rsp+60h] [rbp-240h] BYREF
  CUtlBuffer bufSaveData; // [rsp+A0h] [rbp-200h] BYREF
  SAVE_HEADER header; // [rsp+F0h] [rbp-1B0h] BYREF
  CFmtStr filename; // [rsp+150h] [rbp-150h] BYREF
  unsigned __int64 v25; // [rsp+268h] [rbp-38h]
  Vector v26; // 0:kr00_12.12
  Vector v27; // 0:kr14_12.12

  v25 = __readfsqword(0x28u);
  CEntity2SaveRestore::GetSaveGameSpawnGroupName(&header, this, pLevelName);
  v8 = CUtlString::Get(&header);
  CFmtStrN<256,false>::CFmtStrN(&filename, "SAVE/%s.HL2", v8);
  if ( *&header.m_saveId != 0 )
    CUtlString::FreeMemoryBlock(&header);
  if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
    LoggingSystem_Log(
      LOG_SAVERESTORE,
      0,
      "%s:  transfering decals from %s [%s] (landmark='%s')\n",
      "SV",
      filename.m_szBuf,
      pLevelName,
      pLandmarkName);
  CUtlBuffer::CUtlBuffer(&bufSaveData, 0, 0, 0);
  (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
    &g_pFullFileSystem->IBaseFileSystem,
    filename.m_szBuf,
    "MOD",
    &bufSaveData,
    0,
    0,
    0);
  SaveData = CEntity2SaveRestore::LoadSaveData(this, pLevelName, bufSaveData.m_Memory.m_pMemory, bufSaveData.m_Put);
  v10 = SaveData;
  if ( SaveData != 0 )
  {
    CRestore::CRestore(&restoreHelper, SaveData);
    CGameSaveRestoreInfo::SetAdjacent(&v10->CGameSaveRestoreInfo, 1);
    (*(pSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 5))(pSaveRestoreBlockSet);
    (*(pSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 6))(pSaveRestoreBlockSet, &restoreHelper);
    memset(&header, 0, 24);
    header.m_flSaveTime = 0.0;
    CEntity2SaveRestore::ParseSaveTables(this, v10, &header, &restoreHelper);
    v11 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v11->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v10->m_levelInfo.m_flSaveTime = m_flCurrentTime;
    v10->m_levelInfo.m_bUseLandmark = 1;
    v26 = CGameSaveRestoreInfo::LandmarkOrigin(&currentLevelData->CGameSaveRestoreInfo, pLandmarkName);
    v27 = CGameSaveRestoreInfo::LandmarkOrigin(&v10->CGameSaveRestoreInfo, pLandmarkName);
    v10->m_levelInfo.m_vecLandmarkOffset.z = v26.z - v27.z;
    v10->m_levelInfo.m_vecLandmarkOffset.y = v26.y - v27.y;
    v10->m_levelInfo.m_vecLandmarkOffset.x = v26.x - v27.x;
    basea = CRestore::GetReadPos(&restoreHelper);
    currentLevelDatab = *(g_pGameSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 11);
    DecalsSaveRestoreBlockHandler = GetDecalsSaveRestoreBlockHandler();
    (currentLevelDatab)(g_pGameSaveRestoreBlockSet, DecalsSaveRestoreBlockHandler, basea, &restoreHelper, handle, 0);
    (*(pSaveRestoreBlockSet->_vptr_ISaveRestoreBlockHandler + 8))(pSaveRestoreBlockSet);
    CEntity2SaveRestore::Finish(this, v10);
    if ( header.m_sSpawnGroupName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&header.m_sSpawnGroupName);
    restoreHelper.m_BlockEndStack.m_Size = 0;
    restoreHelper._vptr_IRestore = &off_3FF5F30;
    if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
      if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
    }
  }
  if ( (bufSaveData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned char,int>::Purge(&bufSaveData.m_Memory);
}


// CEntity2SaveRestore::BuildRestoredIndexTranslationTable  (line 1276, @0x000000000208bb90, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CEntityIndex, CUtlString, Clear, Construct<SaveRestoreTranslate_t>, Destruct<SaveRestoreTranslate_t>, Element, GrowMemory, Init, Rebuild, RemoveAll, SaveRestoreTranslate_t, String, ToCStr, operator=, operator[], ~CUtlString, ~SaveRestoreTranslate_t
// calls: CRestoreData::FindOrAddRestoreLookupTable, CUtlString::FreeMemoryBlock, CGameSaveRestoreInfo::NumEntities, CUtlString::operator=, CGameSaveRestoreInfo::GetEntityInfo, CUtlMemory<SaveRestoreTranslate_t, int>::Grow
// callers: CEntity2SaveRestore::StreamEntitiesFromFile, CEntity2SaveRestore::LoadAdjacentEnts
void __fastcall CEntity2SaveRestore::BuildRestoredIndexTranslationTable(
        CEntity2SaveRestore *const this,
        const char *pSpawnGroupName,
        const CSaveRestoreData *pSaveData,
        bool verbose)
{
  CGameSaveRestoreInfo *v4; // r13
  RestoreLookupTable_t *v6; // rax
  bool v7; // zf
  RestoreLookupTable_t *v8; // rbx
  CGameSaveRestoreInfo *v9; // rax
  int m_Size; // r12d
  __int64 i; // r14
  CUtlString *v12; // rdi
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r15
  const char *m_pAsString; // rsi
  const entitytable_t *EntityInfo; // rax
  int v18; // r15d
  const entitytable_t *v19; // r14
  int v20; // ecx
  int v21; // [rsp+Ch] [rbp-34h]

  v4 = 0;
  v6 = CRestoreData::FindOrAddRestoreLookupTable(this->m_pRestoreData, pSpawnGroupName);
  v7 = pSaveData == 0;
  v8 = v6;
  v9 = &pSaveData->CGameSaveRestoreInfo;
  m_Size = v8->m_lookup.m_Size;
  if ( !v7 )
    v4 = v9;
  for ( i = 16LL * m_Size - 16; --m_Size >= 0; i -= 16 )
  {
    v12 = (&v8->m_lookup.m_Memory.m_pMemory->m_classname + i);
    if ( v12->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v12);
  }
  v8->m_lookup.m_Size = 0;
  v13 = 0;
  v8->m_vecLandMarkOffset.x = 0.0;
  v8->m_vecLandMarkOffset.y = 0.0;
  v8->m_vecLandMarkOffset.z = 0.0;
  v21 = CGameSaveRestoreInfo::NumEntities(v4);
  if ( v21 > 0 )
  {
    do
    {
      EntityInfo = CGameSaveRestoreInfo::GetEntityInfo(v4, v13);
      v18 = v8->m_lookup.m_Size;
      v19 = EntityInfo;
      v20 = v8->m_lookup.m_Size;
      if ( v8->m_lookup.m_Size == v8->m_lookup.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<SaveRestoreTranslate_t,int>::Grow(&v8->m_lookup.m_Memory, 1);
        v20 = v8->m_lookup.m_Size;
      }
      v8->m_lookup.m_Size = v20 + 1;
      v14 = &v8->m_lookup.m_Memory.m_pMemory[v18];
      if ( v14 != 0 )
      {
        *v14 = 0;
        *(v14 + 8) = -1;
        *(v14 + 12) = -1;
        v15 = &v8->m_lookup.m_Memory.m_pMemory[v18];
      }
      else
      {
        v15 = 0;
      }
      m_pAsString = "";
      if ( v19->classname.u.m_Id != 0 )
        m_pAsString = v19->classname.u.m_pAsString;
      ++v13;
      CUtlString::operator=(v15, m_pAsString);
      *(v15 + 8) = v19->saveentityindex.m_Data;
      *(v15 + 12) = v19->restoreentityindex.m_Data;
    }
    while ( v13 != v21 );
  }
  v8->m_vecLandMarkOffset.x = v4->m_levelInfo.m_vecLandmarkOffset.x;
  v8->m_vecLandMarkOffset.y = v4->m_levelInfo.m_vecLandmarkOffset.y;
  v8->m_vecLandMarkOffset.z = v4->m_levelInfo.m_vecLandmarkOffset.z;
}


// CEntity2SaveRestore::CalcSaveGameName  (line 1293, @0x000000000205a490, libserver.so)  // inlines: CUtlString
// calls: CUtlString::Format, CUtlString::FixSlashes, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "SAVE/%s.sav"
CUtlString __fastcall CEntity2SaveRestore::CalcSaveGameName(
        CUtlString *a1,
        const CEntity2SaveRestore *const this,
        const char *name)
{
  a1->m_pString = 0;
  if ( name == 0 || *name == 0 )
    return a1;
  CUtlString::Format(a1, "SAVE/%s.sav", name);
  CUtlString::FixSlashes(a1, 47);
  return a1;
}


// CEntity2SaveRestore::DirectoryCopy  (line 1308, @0x000000000205dda0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, String, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: LoggingSystem_IsChannelEnabled, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlString::Get, LoggingSystem_Log, CUtlMemory<char*, int>::Purge, _Unwind_Resume
// strings: "ab+", "Directory copy (%s)\n", "Invalid save, failed to open file\n"
// globals: g_pSaveRestoreFileSystem
void __fastcall CEntity2SaveRestore::DirectoryCopy(
        CEntity2SaveRestore *const this,
        const char *pPath,
        const char *pDestFileName)
{
  __int64 v6; // r12
  int i; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  CUtlString *p_m_CurrentMod; // r15
  __int64 j; // rbx
  void (__fastcall *v12)(ISaveRestoreFileSystem *, char *, const char *, const char *); // r12
  const char *v13; // rax
  int nFiles; // [rsp+Ch] [rbp-54h] BYREF
  CUtlVector<char*,CUtlMemory<char*,int> > parts; // [rsp+10h] [rbp-50h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 1) != 0 )
    LoggingSystem_Log(LOG_SAVERESTORE, 1, "Directory copy (%s)\n", pPath);
  (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 11))(g_pSaveRestoreFileSystem);
  nFiles = 0;
  parts.m_Size = 0;
  parts.m_Memory.m_pMemory = 0;
  parts.m_Memory.m_nAllocationCount = 0;
  parts.m_Memory.m_nGrowSize = 0;
  V_SplitString(pPath, &unk_34E9DAD, &parts);
  v6 = 0;
  for ( i = 0; parts.m_Size > i; ++v6 )
  {
    nFiles += (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 19))(
                g_pSaveRestoreFileSystem,
                parts.m_Memory.m_pMemory[v6]);
    ++i;
  }
  v8 = (*g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem)(g_pSaveRestoreFileSystem, pDestFileName, "ab+", 0);
  v9 = v8;
  if ( v8 != 0 )
  {
    (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 3))(g_pSaveRestoreFileSystem, &nFiles, 4, v8);
    (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 1))(g_pSaveRestoreFileSystem, v9);
    p_m_CurrentMod = &this->m_CurrentMod;
    for ( j = 0; parts.m_Size > j; ++j )
    {
      v12 = *(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 17);
      v13 = CUtlString::Get(p_m_CurrentMod);
      v12(g_pSaveRestoreFileSystem, parts.m_Memory.m_pMemory[j], pDestFileName, v13);
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
  {
    LoggingSystem_Log(LOG_SAVERESTORE, 2, "Invalid save, failed to open file\n");
  }
  parts.m_Size = 0;
  if ( (parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&parts.m_Memory);
    if ( (parts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&parts.m_Memory);
  }
}


// CEntity2SaveRestore::SaveGame_Start  (line 1338, @0x00000000020733e0, libserver.so)  // inlines: AutoSaveType_t, CMemberFuncProxy2, CMemberFuncProxyBase, CMemberFunctor2, CRefCountServiceBase, CRefCounted1, CUtlEnvelope, CUtlString, CopyConstruct<CFunctor*>, CreateFunctor<CEntity2SaveRestore*, CEntity2SaveRestore, void, char const*, int, CUtlEnvelope<char const*>, int>, FinishPush, GetInt, InterlockedCompareExchangeNode, InterlockedCompareExchangeNodeLink, Pop, Push, PushItem, QueueCall<CEntity2SaveRestore*, CEntity2SaveRestore, void, char const*, int, CUtlEnvelope<char const*>, int>, QueueFunctorInternal, SaveResetMemory, SetPtr, Shutdown, String, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedCompareExchange64, ThreadInterlockedCompareExchangePointer, ThreadInterlockedIncrement, ThreadPause, operator char const*, operator++, operator=, ~CRefCountServiceBase, ~CRefCounted1, ~CUtlEnvelope, ~CUtlString
// calls: CMemoryStack::~CMemoryStack, operator delete, CUtlString::operator=, CUtlString::Clear, LoggingSystem_IsChannelEnabled, operator new, CUtlString::Get, CEntity2SaveRestore::GetSaveGameSpawnGroupName, CUtlString::FreeMemoryBlock, V_stricmp_fast, LoggingSystem_Log, AssertMsg_ConditionFailed (13 total)
// strings: "quick", "autosavedangerous", "Queue AgeSaveList\n", "SV", "%s:  transition game save to %s...\n", "Saving game to %s...\n" (7 total)
// globals: CEntity2SaveRestore::AgeSaveList(char const*,int), CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants
SaveRestoreDataHandle_t __fastcall CEntity2SaveRestore::SaveGame_Start(
        CEntity2SaveRestore *const this,
        const SaveGameInfo_t *const saveGameInfo)
{
  CMemoryStack *m_pMemoryStack; // r12
  SaveGameInfo_t *p_m_SaveGameInfo; // r12
  SaveRestoreDataHandle_t result; // rax
  void (__fastcall *v7)(CUtlString *, CEntity2SaveRestore *const, const char *); // r14
  const char *v8; // rax
  const char *v9; // rax
  char *m_pString; // r14
  bool v11; // zf
  const char *v12; // r14
  __int64 v13; // rdi
  int m_nValue; // r13d
  const char *v15; // rax
  void *v16; // r12
  const char *v17; // rax
  const char *v18; // rax
  CCallQueue *p_m_AsyncSaveCallQueue; // r13
  unsigned __int64 v20; // rcx
  TSLHead_t m_Head; // rax
  _QWORD *p_Next; // r14
  TSLHead_t v23; // rt0
  int v24; // r12d
  CTSQueue<CFunctor*,false>::NodeLink_t *p_m_Tail; // r15
  intp sequence; // rdx
  CTSQueue<CFunctor*,false>::Node_t *pNode; // rsi
  intp v28; // rcx
  __int64 v29; // rdx
  __int128 v30; // rt0
  __int128 v31; // rt0
  CUtlString v33; // [rsp+10h] [rbp-50h] BYREF
  CUtlString v34[8]; // [rsp+20h] [rbp-40h] BYREF

  m_pMemoryStack = this->m_SaveMemory.m_pMemoryStack;
  this->m_bSaveStarted = 1;
  if ( m_pMemoryStack != 0 )
  {
    CMemoryStack::~CMemoryStack(m_pMemoryStack);
    operator delete(m_pMemoryStack);
    this->m_SaveMemory.m_pMemoryStack = 0;
    this->m_SaveMemory.m_nSaveAllocs = 0;
  }
  p_m_SaveGameInfo = &this->m_SaveGameInfo;
  CUtlString::operator=(&this->m_SaveGameInfo.m_sSaveName, &saveGameInfo->m_sSaveName);
  CUtlString::operator=(&this->m_SaveGameInfo.m_sSaveComment, &saveGameInfo->m_sSaveComment);
  this->m_SaveGameInfo.m_bTransition = saveGameInfo->m_bTransition;
  CUtlString::operator=(&this->m_SaveGameInfo.m_sOldLevel, &saveGameInfo->m_sOldLevel);
  CUtlString::operator=(&this->m_SaveGameInfo.m_sLandmarkName, &saveGameInfo->m_sLandmarkName);
  if ( this->m_SaveGameInfo.m_bTransition )
  {
    CUtlString::Clear(&this->m_sSaveGameFileName);
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 1) != 0 )
    {
      v17 = CUtlString::Get(&p_m_SaveGameInfo->m_sSaveName);
      LoggingSystem_Log(LOG_SAVERESTORE, 1, "%s:  transition game save to %s...\n", "SV", v17);
    }
  }
  else
  {
    v7 = *(this->_vptr_IEntity2SaveRestore + 13);
    v8 = CUtlString::Get(&p_m_SaveGameInfo->m_sSaveName);
    CEntity2SaveRestore::GetSaveGameSpawnGroupName(&v33, this, v8);
    v9 = CUtlString::Get(&v33);
    v7(v34, this, v9);
    m_pString = v34[0].m_pString;
    if ( this->m_sSaveGameFileName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&this->m_sSaveGameFileName);
    v11 = v33.m_pString == 0;
    this->m_sSaveGameFileName.m_pString = m_pString;
    if ( !v11 )
      CUtlString::FreeMemoryBlock(&v33);
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 1) != 0 )
    {
      v18 = CUtlString::Get(&this->m_sSaveGameFileName);
      LoggingSystem_Log(LOG_SAVERESTORE, 1, "Saving game to %s...\n", v18);
    }
    this->m_bClearFile = 1;
    v12 = CUtlString::Get(&p_m_SaveGameInfo->m_sSaveName);
    if ( V_stricmp_fast(v12, "quick") != 0 )
    {
      if ( V_stricmp_fast(v12, "autosave") != 0 && V_stricmp_fast(v12, "autosavedangerous") != 0 )
        goto LABEL_6;
    }
    else
    {
      V_stricmp_fast(v12, "autosavedangerous");
    }
    v13 = LOG_SAVERESTORE;
    this->m_bClearFile = 0;
    if ( LoggingSystem_IsChannelEnabled(v13, 1) != 0 )
      LoggingSystem_Log(LOG_SAVERESTORE, 1, "Queue AgeSaveList\n");
    m_nValue = save_history_count.m_pParent->m_Value.m_nValue;
    v15 = CUtlString::Get(&p_m_SaveGameInfo->m_sSaveName);
    v34[0].m_pString = 0;
    CUtlString::operator=(v34, v15);
    v16 = operator new(0x48u);
    *(v16 + 6) = 1;
    *(v16 + 5) = 0;
    *v16 = off_3FF20F0;
    *(v16 + 2) = off_3FF2128;
    *(v16 + 4) = CEntity2SaveRestore::AgeSaveList;
    *(v16 + 7) = 0;
    *(v16 + 6) = this;
    CUtlString::operator=(v16 + 7, v34);
    *(v16 + 16) = m_nValue;
    if ( this->m_AsyncSaveCallQueue.m_bNoQueue )
    {
      (*(*v16 + 16LL))(v16);
      (*(*v16 + 8LL))(v16);
    }
    else
    {
      p_m_AsyncSaveCallQueue = &this->m_AsyncSaveCallQueue;
      v20 = 0;
      m_Head = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
      p_Next = &m_Head.value.Next->Next;
      if ( m_Head.value.Next != 0 )
      {
        while ( 1 )
        {
          v20 = (m_Head.value32.DepthAndSequence - 1) | v20 & 0xFFFFFFFF00000000LL;
          v23 = m_Head;
          if ( _InterlockedCompareExchange128(
                 &this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes,
                 v20,
                 m_Head.value.Next->Next,
                 &v23) != 0 )
            break;
          _mm_pause();
          m_Head = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
          p_Next = &m_Head.value.Next->Next;
          if ( m_Head.value.Next == 0 )
            goto LABEL_35;
        }
      }
      else
      {
LABEL_35:
        p_Next = operator new(0x10u);
      }
      if ( p_Next != -8LL )
        p_Next[1] = v16;
      *p_Next = p_m_AsyncSaveCallQueue;
      v24 = 0;
      p_m_Tail = &this->m_AsyncSaveCallQueue.m_queue.m_Tail;
      while ( 1 )
      {
        sequence = this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.sequence;
        pNode = this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.pNode;
        if ( p_m_AsyncSaveCallQueue == _InterlockedCompareExchange64(pNode, p_Next, p_m_AsyncSaveCallQueue) )
          break;
        v28 = sequence + 1;
        *&v30 = pNode;
        *(&v30 + 1) = sequence;
        _InterlockedCompareExchange128(p_m_Tail, sequence + 1, pNode->pNext, &v30);
        v29 = *(&v30 + 1);
        if ( ++v24 > 9999999
          && AssertMsg_ConditionFailed(
               &CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants,
               "CTSQueue corruption",
               v29,
               v28) != 0 )
        {
          __debugbreak();
        }
      }
      *&v31 = pNode;
      *(&v31 + 1) = sequence;
      _InterlockedCompareExchange128(p_m_Tail, sequence + 1, p_Next, &v31);
      _InterlockedAdd(&this->m_AsyncSaveCallQueue.m_queue.m_Count.m_value, 1u);
    }
    if ( v34[0].m_pString != 0 )
      CUtlString::FreeMemoryBlock(v34);
  }
LABEL_6:
  result = operator new(0x18u);
  *result = 0;
  *(result + 1) = 0;
  *(result + 4) = 0;
  *(result + 5) = 0;
  return result;
}


// CEntity2SaveRestore::StreamEntitiesToFile  (line 1378, @0x000000000208d2f0, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<SPAWNGROUP_HEADER>, Element, GrowMemory, SPAWNGROUP_HEADER, String, operator[], ~CUtlString, ~SPAWNGROUP_HEADER
// calls: CUtlString::operator=, CEntity2SaveRestore::StreamEntitiesToFile, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlMemory<SPAWNGROUP_HEADER, int>::Grow, _Unwind_Resume
// strings: "CEntity2SaveRestore::StreamEntitiesToFile on %s failed\n"
bool __fastcall CEntity2SaveRestore::StreamEntitiesToFile(
        CEntity2SaveRestore *const this,
        SaveRestoreDataHandle_t hSaveRestore,
        const SaveStreamInfo_t *const stream)
{
  CUtlString *p_m_SpawnGroupName; // r14
  __int64 v7; // rax
  bool v8; // bl
  __int64 v9; // r14
  int v10; // eax
  bool v11; // zf
  _QWORD *v12; // rax
  _QWORD *v13; // r12
  const char *v14; // rax
  const char *v16; // rax
  SPAWNGROUP_HEADER group; // [rsp+0h] [rbp-80h] BYREF

  if ( hSaveRestore == 0 )
    return 0;
  p_m_SpawnGroupName = &stream->m_SpawnGroup.m_SpawnGroupName;
  group.m_sGroupName.m_pString = 0;
  group.m_bClientSpawnGroup = 0;
  CUtlString::operator=(&group.m_sGroupName, &stream->m_SpawnGroup.m_SpawnGroupName);
  v7 = *&stream->m_SpawnGroup.m_vecWorldOrigin.m_flMatVal[0][0];
  group.m_bClientSpawnGroup = 0;
  *&group.m_vecWorldOffset.m_flMatVal[0][0] = v7;
  *&group.m_vecWorldOffset.m_flMatVal[0][2] = *&stream->m_SpawnGroup.m_vecWorldOrigin.m_flMatVal[0][2];
  *&group.m_vecWorldOffset.m_flMatVal[1][0] = *&stream->m_SpawnGroup.m_vecWorldOrigin.m_flMatVal[1][0];
  *&group.m_vecWorldOffset.m_flMatVal[2][0] = *&stream->m_SpawnGroup.m_vecWorldOrigin.m_flMatVal[2][0];
  v8 = CEntity2SaveRestore::StreamEntitiesToFile(this, stream);
  if ( v8 )
  {
    v9 = *hSaveRestore;
    v10 = *hSaveRestore;
    if ( v9 == *(hSaveRestore + 4) )
    {
      CUtlMemory<SPAWNGROUP_HEADER,int>::Grow((hSaveRestore + 2), 1);
      v10 = *hSaveRestore;
    }
    *hSaveRestore = v10 + 1;
    v11 = *(hSaveRestore + 1) + 80 * v9 == 0;
    v12 = (*(hSaveRestore + 1) + 80 * v9);
    v13 = v12;
    if ( !v11 )
    {
      *v12 = 0;
      v14 = CUtlString::Get(&group.m_sGroupName);
      CUtlString::Set(v13, v14);
      *(v13 + 2) = group.m_vecWorldOffset;
      *(v13 + 64) = group.m_bClientSpawnGroup;
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
  {
    v16 = CUtlString::Get(p_m_SpawnGroupName);
    LoggingSystem_Log(LOG_SAVERESTORE, 2, "CEntity2SaveRestore::StreamEntitiesToFile on %s failed\n", v16);
  }
  if ( group.m_sGroupName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&group.m_sGroupName);
  return v8;
}


// CEntity2SaveRestore::SaveGame_Finalize  (line 1400, @0x000000000208d4a0, libserver.so)  // inlines: AutoSaveType_t, CMemberFuncProxy0, CMemberFuncProxy2, CMemberFuncProxy6, CMemberFuncProxyBase, CMemberFunctor0, CMemberFunctor2, CMemberFunctor6, CRefCountServiceBase, CRefCounted1, CUtlEnvelope, CUtlString, Clear, CopyConstruct<CFunctor*>, CreateFunctor<CEntity2SaveRestore*, CEntity2SaveRestore, void, char const*, char const*, CUtlEnvelope<char const*>, CUtlEnvelope<char const*> >, CreateFunctor<IFileSystem*, IFileSystem, void>, CreateFunctor<ISaveRestoreFileSystem*, ISaveRestoreFileSystem, FSAsyncStatus_t, char const*, void const*, int, bool, bool, FSAsyncControl_t__**, CUtlEnvelope<char const*>, void*, int, bool, bool, FSAsyncControl_t__**>, Destruct<SPAWNGROUP_HEADER>, Element, FinishPush, GAME_HEADER, GetBool, GetInt, InterlockedCompareExchangeNode, InterlockedCompareExchangeNodeLink, MoveCurPos, Pop, Purge, Push, PushItem, QueueCall<CEntity2SaveRestore*, CEntity2SaveRestore, void, char const*, char const*, CUtlEnvelope<char const*>, CUtlEnvelope<char const*> >, QueueCall<IFileSystem*, IFileSystem, void>, QueueCall<ISaveRestoreFileSystem*, ISaveRestoreFileSystem, FSAsyncStatus_t, char const*, void const*, int, bool, bool, FSAsyncControl_t__**, CUtlEnvelope<char const*>, void*, int, bool, bool, FSAsyncControl_t__**>, QueueFunctorInternal, RemoveAll, Rewind, String, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedCompareExchange64, ThreadInterlockedCompareExchangePointer, ThreadInterlockedIncrement, ThreadPause, operator char const*, operator++, operator[], ~CRefCountServiceBase, ~CRefCounted1, ~CSaveRestoreHostData, ~CUtlBuffer, ~CUtlEnvelope, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~GAME_HEADER, ~SPAWNGROUP_HEADER
// calls: CUtlString::operator=, CUtlString::Clear, CSave::CSave, CSave::WriteFields, SaveGlobalState, CEntity2SaveRestore::WriteSymbolTable, CUtlString::Get, CUtlBuffer::CUtlBuffer, CUtlBuffer::Put, CUtlString::Set, CUtlString::FixSlashes, LoggingSystem_IsChannelEnabled (29 total)
// strings: "GameHeader", "wb", "SAVE/*.hl?", "quick", "autosavedangerous", "SAVE/%s%s.jpg" (11 total)
// globals: GAME_HEADER::m_DataMap, SPAWNGROUP_HEADER::m_DataMap, g_pSaveRestoreFileSystem, CEntity2SaveRestore::DirectoryCopy(char const*,char const*), CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants
bool __fastcall CEntity2SaveRestore::SaveGame_Finalize(
        CEntity2SaveRestore *const this,
        SaveRestoreDataHandle_t hSaveRestore)
{
  char m_bTransition; // r14
  __int64 v4; // r13
  int i; // r12d
  char *pCurrentData; // r12
  int v7; // eax
  int size; // edx
  int v9; // ecx
  int v10; // edx
  int (*v11)(...); // r13
  const char *v12; // rax
  __int64 v13; // rax
  int v14; // r13d
  const void *v15; // rax
  int m_Put; // r13d
  unsigned __int8 *m_pMemory; // r14
  const char *v18; // rax
  ISaveRestoreFileSystem *v19; // rbx
  void *v20; // r12
  const char *v21; // rax
  const char *v22; // rax
  void *v23; // r12
  IFileSystem *v24; // r13
  CMemberFunctor0<IFileSystem*,void (IFileSystem::*)(),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *v25; // rax
  CMemberFunctor0<IFileSystem*,void (IFileSystem::*)(),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *v26; // r12
  int v27; // r12d
  __int64 k; // r13
  CUtlString *v29; // rdi
  bool v30; // zf
  int v31; // r12d
  __int64 m; // r13
  CUtlString *v33; // rdi
  const char *v35; // r12
  const char *v36; // rax
  const char *v37; // rax
  const char *v38; // rax
  TSLHead_t v39; // rax
  CCallQueue *v40; // r14
  unsigned __int64 v41; // rcx
  _QWORD *v42; // r13
  TSLHead_t v43; // rt0
  int v44; // r12d
  intp v45; // rdx
  CTSQueue<CFunctor*,false>::Node_t *v46; // rsi
  intp v47; // rcx
  __int64 v48; // rdx
  __int128 v49; // rt0
  __int128 v50; // rt0
  TSLHead_t v51; // rax
  CCallQueue *v52; // r13
  unsigned __int64 v53; // rcx
  _QWORD *v54; // r14
  TSLHead_t v55; // rt0
  int v56; // r12d
  intp v57; // rdx
  CTSQueue<CFunctor*,false>::Node_t *v58; // rsi
  intp v59; // rcx
  __int64 v60; // rdx
  __int128 v61; // rt0
  __int128 v62; // rt0
  TSLHead_t m_Head; // rax
  CCallQueue *p_m_AsyncSaveCallQueue; // r14
  unsigned __int64 v65; // rcx
  _QWORD *p_Next; // r13
  TSLHead_t v67; // rt0
  int v68; // r12d
  intp sequence; // rdx
  CTSQueue<CFunctor*,false>::Node_t *pNode; // rsi
  intp v71; // rcx
  __int64 v72; // rdx
  __int128 v73; // rt0
  __int128 v74; // rt0
  const char *v75; // rax
  int v76; // r12d
  __int64 n; // r13
  CUtlString *v78; // rdi
  const char *v79; // rax
  int v80; // r12d
  __int64 j; // r13
  CUtlString *v82; // rdi
  CUtlString *p_m_sSaveComment; // [rsp+10h] [rbp-2C0h]
  CUtlString *p_m_sSaveGameFileName; // [rsp+38h] [rbp-298h]
  CUtlString *v85; // [rsp+38h] [rbp-298h]
  CUtlString *v86; // [rsp+40h] [rbp-290h]
  CUtlString *v87; // [rsp+40h] [rbp-290h]
  CUtlString *p_m_Tail; // [rsp+40h] [rbp-290h]
  CSaveRestoreData *pSaveData; // [rsp+48h] [rbp-288h]
  int tokenSize; // [rsp+68h] [rbp-268h] BYREF
  int tag; // [rsp+6Ch] [rbp-264h] BYREF
  CUtlString filesToCopy; // [rsp+70h] [rbp-260h] BYREF
  CUtlString v94; // [rsp+80h] [rbp-250h] BYREF
  CUtlString v95; // [rsp+90h] [rbp-240h] BYREF
  CUtlString v96; // [rsp+A0h] [rbp-230h] BYREF
  CUtlString v97; // [rsp+B0h] [rbp-220h] BYREF
  GAME_HEADER gameHeader; // [rsp+C0h] [rbp-210h] BYREF
  CSave saveHelper; // [rsp+E0h] [rbp-1F0h] BYREF
  CUtlBuffer saveHeader; // [rsp+130h] [rbp-1A0h] BYREF
  CFmtStr sSaveGameScreenshotFile; // [rsp+180h] [rbp-150h] BYREF
  unsigned __int64 v102; // [rsp+298h] [rbp-38h]

  v102 = __readfsqword(0x28u);
  this->m_bSaveStarted = 0;
  if ( hSaveRestore == 0 )
  {
    m_bTransition = 0;
    CUtlString::Clear(&this->m_SaveGameInfo.m_sSaveName);
    CUtlString::Clear(&this->m_SaveGameInfo.m_sSaveComment);
    CUtlString::Clear(&this->m_SaveGameInfo.m_sOldLevel);
    CUtlString::Clear(&this->m_SaveGameInfo.m_sLandmarkName);
    this->m_SaveGameInfo.m_bTransition = 0;
    CUtlString::Clear(&this->m_sSaveGameFileName);
    return m_bTransition;
  }
  pSaveData = (*(this->_vptr_IEntity2SaveRestore + 14))(this, 0, 0, 0, 0.0);
  if ( pSaveData != 0 )
  {
    m_bTransition = this->m_SaveGameInfo.m_bTransition;
    if ( m_bTransition == 0 )
    {
      gameHeader.m_sComment.m_pString = 0;
      p_m_sSaveComment = &this->m_SaveGameInfo.m_sSaveComment;
      gameHeader.m_nSpawnGroupCount = 0;
      gameHeader.m_sLandmark.m_pString = 0;
      CUtlString::operator=(&gameHeader.m_sComment, &this->m_SaveGameInfo.m_sSaveComment);
      gameHeader.m_nSpawnGroupCount = *hSaveRestore;
      CUtlString::Clear(&gameHeader.m_sLandmark);
      CSave::CSave(&saveHelper, pSaveData);
      CSave::WriteFields(
        &saveHelper,
        "GameHeader",
        &gameHeader,
        0,
        GAME_HEADER::m_DataMap.dataDesc,
        GAME_HEADER::m_DataMap.dataNumFields);
      v4 = 0;
      for ( i = 0; *hSaveRestore > i; v4 += 80 )
      {
        CSave::WriteFields(
          &saveHelper,
          "SpawnGroups",
          (*(hSaveRestore + 1) + v4),
          0,
          SPAWNGROUP_HEADER::m_DataMap.dataDesc,
          SPAWNGROUP_HEADER::m_DataMap.dataNumFields);
        ++i;
      }
      SaveGlobalState(pSaveData);
      pCurrentData = pSaveData->pCurrentData;
      v7 = CEntity2SaveRestore::WriteSymbolTable(this, pSaveData);
      size = pSaveData->size;
      tokenSize = v7;
      v9 = size;
      if ( v7 <= size )
        v9 = v7;
      v10 = size - v9;
      pSaveData->size = v10;
      pSaveData->pCurrentData -= v9;
      if ( this->m_bClearFile )
      {
        v11 = *g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem;
        p_m_sSaveGameFileName = &this->m_sSaveGameFileName;
        v12 = CUtlString::Get(&this->m_sSaveGameFileName);
        v13 = (v11)(g_pSaveRestoreFileSystem, v12, "wb", 0);
        if ( v13 == 0 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
          {
            v79 = CUtlString::Get(p_m_sSaveGameFileName);
            LoggingSystem_Log(LOG_SAVERESTORE, 2, "Save failed: invalid file name '%s'\n", v79);
          }
          CUtlString::Clear(p_m_sSaveGameFileName);
          CUtlString::Clear(&this->m_SaveGameInfo.m_sSaveName);
          CUtlString::Clear(p_m_sSaveComment);
          CUtlString::Clear(&this->m_SaveGameInfo.m_sOldLevel);
          CUtlString::Clear(&this->m_SaveGameInfo.m_sLandmarkName);
          this->m_SaveGameInfo.m_bTransition = 0;
          v80 = *hSaveRestore;
          for ( j = 80LL * *hSaveRestore - 80; --v80 >= 0; j -= 80 )
          {
            v82 = (*(hSaveRestore + 1) + j);
            if ( v82->m_pString != 0 )
              CUtlString::FreeMemoryBlock(v82);
          }
          v30 = (hSaveRestore[5] & 0xC0000000) == 0;
          *hSaveRestore = 0;
          if ( v30 )
          {
            CUtlMemory<SPAWNGROUP_HEADER,int>::Purge((hSaveRestore + 2));
            if ( (hSaveRestore[5] & 0xC0000000) == 0 )
              CUtlMemory<SPAWNGROUP_HEADER,int>::Purge((hSaveRestore + 2));
          }
          operator delete(hSaveRestore);
LABEL_36:
          CSave::~CSave(&saveHelper);
          if ( gameHeader.m_sLandmark.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&gameHeader.m_sLandmark);
          if ( gameHeader.m_sComment.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&gameHeader.m_sComment);
          return m_bTransition;
        }
        (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 1))(g_pSaveRestoreFileSystem, v13);
        v7 = tokenSize;
        v10 = pSaveData->size;
      }
      v14 = v10 + v7 + 64;
      v15 = (**g_pMemAlloc)(g_pMemAlloc, v14);
      CUtlBuffer::CUtlBuffer(&saveHeader, v15, v14, 0);
      tag = 1448292947;
      CUtlBuffer::Put(&saveHeader, &tag, 4);
      tag = 116;
      CUtlBuffer::Put(&saveHeader, &tag, 4);
      tag = pSaveData->size;
      CUtlBuffer::Put(&saveHeader, &tag, 4);
      tag = pSaveData->tokenCount;
      CUtlBuffer::Put(&saveHeader, &tag, 4);
      CUtlBuffer::Put(&saveHeader, &tokenSize, 4);
      CUtlBuffer::Put(&saveHeader, pCurrentData, tokenSize);
      CUtlBuffer::Put(&saveHeader, pSaveData->pBaseData, pSaveData->size);
      filesToCopy.m_pString = 0;
      CUtlString::Set(&filesToCopy, "SAVE/*.hl?");
      CUtlString::FixSlashes(&filesToCopy, 47);
      v85 = &this->m_sSaveGameFileName;
      if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
      {
        v38 = CUtlString::Get(&this->m_sSaveGameFileName);
        LoggingSystem_Log(
          LOG_SAVERESTORE,
          0,
          "%s:  SaveGame_Finalize:  gathering .hl? files and writing to %s\n",
          "SV",
          v38);
      }
      m_Put = saveHeader.m_Put;
      m_pMemory = saveHeader.m_Memory.m_pMemory;
      v18 = CUtlString::Get(v85);
      v94.m_pString = 0;
      CUtlString::operator=(&v94, v18);
      v19 = g_pSaveRestoreFileSystem;
      v20 = operator new(0x58u);
      *(v20 + 6) = 1;
      *(v20 + 6) = v19;
      *v20 = off_3FF2090;
      *(v20 + 2) = off_3FF20C8;
      *(v20 + 4) = 105;
      *(v20 + 5) = 0;
      *(v20 + 7) = 0;
      CUtlString::operator=(v20 + 7, &v94);
      *(v20 + 8) = m_pMemory;
      *(v20 + 18) = m_Put;
      *(v20 + 76) = 1;
      *(v20 + 77) = 0;
      *(v20 + 10) = 0;
      if ( this->m_AsyncSaveCallQueue.m_bNoQueue )
      {
        (*(*v20 + 16LL))(v20);
        (*(*v20 + 8LL))(v20);
      }
      else
      {
        m_Head = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
        p_m_AsyncSaveCallQueue = &this->m_AsyncSaveCallQueue;
        v65 = 0;
        p_Next = &m_Head.value.Next->Next;
        if ( m_Head.value.Next != 0 )
        {
          while ( 1 )
          {
            v65 = (m_Head.value32.DepthAndSequence - 1) | v65 & 0xFFFFFFFF00000000LL;
            v67 = m_Head;
            if ( _InterlockedCompareExchange128(
                   &this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes,
                   v65,
                   m_Head.value.Next->Next,
                   &v67) != 0 )
              break;
            _mm_pause();
            m_Head = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
            p_Next = &m_Head.value.Next->Next;
            if ( m_Head.value.Next == 0 )
              goto LABEL_116;
          }
        }
        else
        {
LABEL_116:
          p_Next = operator new(0x10u);
        }
        if ( p_Next != -8LL )
          p_Next[1] = v20;
        *p_Next = p_m_AsyncSaveCallQueue;
        v68 = 0;
        p_m_Tail = &this->m_AsyncSaveCallQueue.m_queue.m_Tail;
        while ( 1 )
        {
          sequence = this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.sequence;
          pNode = this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.pNode;
          if ( p_m_AsyncSaveCallQueue == _InterlockedCompareExchange64(pNode, p_Next, p_m_AsyncSaveCallQueue) )
            break;
          v71 = sequence + 1;
          *&v73 = pNode;
          *(&v73 + 1) = sequence;
          _InterlockedCompareExchange128(p_m_Tail, sequence + 1, pNode->pNext, &v73);
          v72 = *(&v73 + 1);
          if ( ++v68 > 9999999
            && AssertMsg_ConditionFailed(
                 &CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants,
                 "CTSQueue corruption",
                 v72,
                 v71) != 0 )
          {
            __debugbreak();
          }
        }
        *&v74 = pNode;
        *(&v74 + 1) = sequence;
        _InterlockedCompareExchange128(p_m_Tail, sequence + 1, p_Next, &v74);
        _InterlockedAdd(&this->m_AsyncSaveCallQueue.m_queue.m_Count.m_value, 1u);
      }
      if ( v94.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v94);
      v21 = CUtlString::Get(v85);
      v96.m_pString = 0;
      CUtlString::operator=(&v96, v21);
      v22 = CUtlString::Get(&filesToCopy);
      v95.m_pString = 0;
      CUtlString::operator=(&v95, v22);
      v23 = operator new(0x48u);
      *(v23 + 6) = 1;
      *(v23 + 6) = this;
      *v23 = off_3FF2150;
      *(v23 + 2) = off_3FF2188;
      *(v23 + 5) = 0;
      *(v23 + 4) = CEntity2SaveRestore::DirectoryCopy;
      *(v23 + 7) = 0;
      CUtlString::operator=(v23 + 7, &v95);
      *(v23 + 8) = 0;
      CUtlString::operator=(v23 + 8, &v96);
      if ( this->m_AsyncSaveCallQueue.m_bNoQueue )
      {
        (*(*v23 + 16LL))(v23);
        (*(*v23 + 8LL))(v23);
      }
      else
      {
        v51 = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
        v52 = &this->m_AsyncSaveCallQueue;
        v53 = 0;
        v54 = &v51.value.Next->Next;
        if ( v51.value.Next != 0 )
        {
          while ( 1 )
          {
            v53 = (v51.value32.DepthAndSequence - 1) | v53 & 0xFFFFFFFF00000000LL;
            v55 = v51;
            if ( _InterlockedCompareExchange128(
                   &this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes,
                   v53,
                   v51.value.Next->Next,
                   &v55) != 0 )
              break;
            _mm_pause();
            v51 = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
            v54 = &v51.value.Next->Next;
            if ( v51.value.Next == 0 )
              goto LABEL_118;
          }
        }
        else
        {
LABEL_118:
          v54 = operator new(0x10u);
        }
        if ( v54 != -8LL )
          v54[1] = v23;
        *v54 = v52;
        v56 = 0;
        v87 = &this->m_AsyncSaveCallQueue.m_queue.m_Tail;
        while ( 1 )
        {
          v57 = this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.sequence;
          v58 = this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.pNode;
          if ( v52 == _InterlockedCompareExchange64(v58, v54, v52) )
            break;
          v59 = v57 + 1;
          *&v61 = v58;
          *(&v61 + 1) = v57;
          _InterlockedCompareExchange128(v87, v57 + 1, v58->pNext, &v61);
          v60 = *(&v61 + 1);
          if ( ++v56 > 9999999
            && AssertMsg_ConditionFailed(
                 &CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants,
                 "CTSQueue corruption",
                 v60,
                 v59) != 0 )
          {
            __debugbreak();
          }
        }
        *&v62 = v58;
        *(&v62 + 1) = v57;
        _InterlockedCompareExchange128(v87, v57 + 1, v54, &v62);
        _InterlockedAdd(&this->m_AsyncSaveCallQueue.m_queue.m_Count.m_value, 1u);
      }
      if ( v95.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v95);
      if ( v96.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v96);
      v24 = g_pFullFileSystem;
      v25 = operator new(0x38u);
      v25->m_iRefs = 1;
      v26 = v25;
      v25->m_Proxy.m_pObject = v24;
      v25->_vptr_IRefCounted = off_3FF21B0;
      v25->_vptr_CRefCountServiceBase = off_3FF21E8;
      v25->m_Proxy.m_pfnProxied.__pfn = (&stru_10 + 401);
      v25->m_Proxy.m_pfnProxied.__delta = 0;
      if ( this->m_AsyncSaveCallQueue.m_bNoQueue )
      {
        CMemberFunctor0<IFileSystem *,void (IFileSystem::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::operator()(v25);
        (*(v26->_vptr_IRefCounted + 1))(v26);
      }
      else
      {
        v39 = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
        v40 = &this->m_AsyncSaveCallQueue;
        v41 = 0;
        v42 = &v39.value.Next->Next;
        if ( v39.value.Next != 0 )
        {
          while ( 1 )
          {
            v41 = (v39.value32.DepthAndSequence - 1) | v41 & 0xFFFFFFFF00000000LL;
            v43 = v39;
            if ( _InterlockedCompareExchange128(
                   &this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes,
                   v41,
                   v39.value.Next->Next,
                   &v43) != 0 )
              break;
            _mm_pause();
            v39 = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
            v42 = &v39.value.Next->Next;
            if ( v39.value.Next == 0 )
              goto LABEL_114;
          }
        }
        else
        {
LABEL_114:
          v42 = operator new(0x10u);
        }
        if ( v42 != -8LL )
          v42[1] = v26;
        *v42 = v40;
        v44 = 0;
        v86 = &this->m_AsyncSaveCallQueue.m_queue.m_Tail;
        while ( 1 )
        {
          v45 = this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.sequence;
          v46 = this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.pNode;
          if ( v40 == _InterlockedCompareExchange64(v46, v42, v40) )
            break;
          v47 = v45 + 1;
          *&v49 = v46;
          *(&v49 + 1) = v45;
          _InterlockedCompareExchange128(v86, v45 + 1, v46->pNext, &v49);
          v48 = *(&v49 + 1);
          if ( ++v44 > 9999999
            && AssertMsg_ConditionFailed(
                 &CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants,
                 "CTSQueue corruption",
                 v48,
                 v47) != 0 )
          {
            __debugbreak();
          }
        }
        *&v50 = v46;
        *(&v50 + 1) = v45;
        _InterlockedCompareExchange128(v86, v45 + 1, v42, &v50);
        _InterlockedAdd(&this->m_AsyncSaveCallQueue.m_queue.m_Count.m_value, 1u);
      }
      CEntity2SaveRestore::Finish(this, pSaveData);
      if ( save_screenshot.m_pParent->m_Value.m_nValue != 0 )
      {
        if ( ((v35 = CUtlString::Get(&this->m_SaveGameInfo.m_sSaveName), V_stricmp_fast(v35, "quick") == 0)
           || V_stricmp_fast(v35, "autosave") != 0)
          && V_stricmp_fast(v35, "autosavedangerous") != 0
          || save_screenshot.m_pParent->m_Value.m_nValue == 2 )
        {
          v36 = CUtlString::Get(&this->m_SaveGameInfo.m_sSaveName);
          CEntity2SaveRestore::GetSaveGameSpawnGroupName(&v97, this, v36);
          v37 = CUtlString::Get(&v97);
          CFmtStrN<256,false>::CFmtStrN(&sSaveGameScreenshotFile, "SAVE/%s%s.jpg", v37, "");
          if ( v97.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&v97);
          (*(*g_pSource2Engine + 128LL))(g_pSource2Engine, sSaveGameScreenshotFile.m_szBuf, 100, 128, 128);
        }
      }
      CEntity2SaveRestore::DispatchAsyncSave(this);
      CUtlString::operator=(&this->m_sLastSaveFile, &this->m_SaveGameInfo.m_sSaveName);
      CUtlString::Clear(v85);
      CUtlString::Clear(&this->m_SaveGameInfo.m_sSaveName);
      CUtlString::Clear(p_m_sSaveComment);
      CUtlString::Clear(&this->m_SaveGameInfo.m_sOldLevel);
      CUtlString::Clear(&this->m_SaveGameInfo.m_sLandmarkName);
      this->m_SaveGameInfo.m_bTransition = 0;
      v27 = *hSaveRestore;
      for ( k = 80LL * *hSaveRestore - 80; --v27 >= 0; k -= 80 )
      {
        v29 = (*(hSaveRestore + 1) + k);
        if ( v29->m_pString != 0 )
          CUtlString::FreeMemoryBlock(v29);
      }
      v30 = (hSaveRestore[5] & 0xC0000000) == 0;
      *hSaveRestore = 0;
      if ( v30 )
      {
        CUtlMemory<SPAWNGROUP_HEADER,int>::Purge((hSaveRestore + 2));
        if ( (hSaveRestore[5] & 0xC0000000) == 0 )
          CUtlMemory<SPAWNGROUP_HEADER,int>::Purge((hSaveRestore + 2));
      }
      operator delete(hSaveRestore);
      if ( filesToCopy.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&filesToCopy);
      m_bTransition = 1;
      if ( (saveHeader.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<unsigned char,int>::Purge(&saveHeader.m_Memory);
      goto LABEL_36;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
    {
      v75 = CUtlString::Get(&this->m_SaveGameInfo.m_sSaveName);
      LoggingSystem_Log(LOG_SAVERESTORE, 0, "%s:  SaveGame_Finalize:  transition %s, not making .sav file\n", "SV", v75);
    }
    CUtlString::Clear(&this->m_sSaveGameFileName);
    CUtlString::Clear(&this->m_SaveGameInfo.m_sSaveName);
    CUtlString::Clear(&this->m_SaveGameInfo.m_sSaveComment);
    CUtlString::Clear(&this->m_SaveGameInfo.m_sOldLevel);
    CUtlString::Clear(&this->m_SaveGameInfo.m_sLandmarkName);
    this->m_SaveGameInfo.m_bTransition = 0;
    v31 = *hSaveRestore;
    for ( m = 80LL * *hSaveRestore - 80; --v31 >= 0; m -= 80 )
    {
      v33 = (*(hSaveRestore + 1) + m);
      if ( v33->m_pString != 0 )
        CUtlString::FreeMemoryBlock(v33);
    }
    v30 = (hSaveRestore[5] & 0xC0000000) == 0;
    *hSaveRestore = 0;
    if ( v30 )
    {
      CUtlMemory<SPAWNGROUP_HEADER,int>::Purge((hSaveRestore + 2));
      if ( (hSaveRestore[5] & 0xC0000000) == 0 )
        CUtlMemory<SPAWNGROUP_HEADER,int>::Purge((hSaveRestore + 2));
    }
    operator delete(hSaveRestore);
  }
  else
  {
    CUtlString::Clear(&this->m_sSaveGameFileName);
    CUtlString::Clear(&this->m_SaveGameInfo.m_sSaveName);
    CUtlString::Clear(&this->m_SaveGameInfo.m_sSaveComment);
    CUtlString::Clear(&this->m_SaveGameInfo.m_sOldLevel);
    CUtlString::Clear(&this->m_SaveGameInfo.m_sLandmarkName);
    this->m_SaveGameInfo.m_bTransition = 0;
    v76 = *hSaveRestore;
    for ( n = 80LL * *hSaveRestore - 80; --v76 >= 0; n -= 80 )
    {
      v78 = (*(hSaveRestore + 1) + n);
      if ( v78->m_pString != 0 )
        CUtlString::FreeMemoryBlock(v78);
    }
    v30 = (hSaveRestore[5] & 0xC0000000) == 0;
    *hSaveRestore = 0;
    if ( v30 )
    {
      CUtlMemory<SPAWNGROUP_HEADER,int>::Purge((hSaveRestore + 2));
      if ( (hSaveRestore[5] & 0xC0000000) == 0 )
        CUtlMemory<SPAWNGROUP_HEADER,int>::Purge((hSaveRestore + 2));
    }
    m_bTransition = 0;
    operator delete(hSaveRestore);
  }
  return m_bTransition;
}


// CEntity2SaveRestore::SaveReadHeaderAndSpawnGroupList  (line 1539, @0x0000000002087860, libserver.so)  // inlines: AddToTail, CCreateGameServerLoadInfo, CSaveRestoreData, CSaveRestoreSegment, CUtlString, Construct<CCreateGameServerLoadInfo>, Construct<CSaveRestoreData>, Element, GrowMemory, Init, MakeSaveRestoreData, SPAWNGROUP_HEADER, SetPtr, operator char const*, operator=, operator[], ~CRestore, ~CUtlString, ~CUtlVector, ~SPAWNGROUP_HEADER
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CSaveMemory::SaveAllocMemory, CGameSaveRestoreInfo::CGameSaveRestoreInfo, CEntity2SaveRestore::ReadSymbolTable, CEntity2SaveRestore::Finish, CRestore::CRestore, CRestore::ReadFields, SetIdentityMatrix, CUtlString::operator=, CUtlString::Get, CEntity2SaveRestore::GetSaveGameSpawnGroupName (18 total)
// callers: CEntity2SaveRestore::OpenSaveFileAndExtractLevels
// strings: "Can't load saved game, incorrect FILEID\n", "Can't load saved game, incorrect version (got %i expecting %i)\n", "GameHeader"
// globals: g_pSaveRestoreFileSystem, GAME_HEADER::m_DataMap, SPAWNGROUP_HEADER::m_DataMap
int __fastcall CEntity2SaveRestore::SaveReadHeaderAndSpawnGroupList(
        CEntity2SaveRestore *const this,
        FileHandle_t pFile,
        GAME_HEADER *pHeader,
        int *pMapCount,
        CUtlVector<CCreateGameServerLoadInfo,CUtlMemory<CCreateGameServerLoadInfo,int> > *const spawngroupinfo,
        SaveFileLevelsType_t_0 saveFileLevelsType)
{
  char *v11; // rax
  char *v12; // r12
  __int64 v13; // rdx
  char *v14; // r9
  int v15; // eax
  char *SymbolTable; // rax
  int v17; // edx
  ISaveRestoreFileSystem *v18; // rdi
  __int64 v19; // rdx
  int v20; // eax
  CCreateGameServerLoadInfo *m_pMemory; // rax
  const char *v22; // rax
  char *v23; // rdi
  __int64 v24; // rcx
  matrix3x4a_t *p_m_vecWorldOffset; // rsi
  bool v26; // zf
  int v27; // eax
  __int64 v28; // [rsp+18h] [rbp-118h]
  __int64 v29; // [rsp+18h] [rbp-118h]
  char *pszTokenList; // [rsp+38h] [rbp-F8h]
  char *pszTokenLista; // [rsp+38h] [rbp-F8h]
  int pszTokenListb; // [rsp+38h] [rbp-F8h]
  int i; // [rsp+40h] [rbp-F0h]
  int pMapCountb; // [rsp+48h] [rbp-E8h]
  int tag; // [rsp+50h] [rbp-E0h] BYREF
  int size; // [rsp+54h] [rbp-DCh] BYREF
  int tokenCount; // [rsp+58h] [rbp-D8h] BYREF
  int tokenSize; // [rsp+5Ch] [rbp-D4h] BYREF
  __int64 v41; // [rsp+60h] [rbp-D0h] BYREF
  CRestore restoreHelper; // [rsp+70h] [rbp-C0h] BYREF
  SPAWNGROUP_HEADER group; // [rsp+B0h] [rbp-80h] BYREF

  if ( (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 2))(g_pSaveRestoreFileSystem, &tag, 4, pFile) != 4 )
    return 0;
  if ( tag != 1448292947 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
    {
      LoggingSystem_Log(LOG_SAVERESTORE, 2, "Can't load saved game, incorrect FILEID\n");
      return 0;
    }
    return 0;
  }
  if ( (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 2))(g_pSaveRestoreFileSystem, &tag, 4, pFile) != 4 )
    return 0;
  if ( tag == 116 )
  {
    if ( (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 2))(g_pSaveRestoreFileSystem, &size, 4, pFile) != 4 )
      return 0;
    if ( (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 2))(
           g_pSaveRestoreFileSystem,
           &tokenCount,
           4,
           pFile) != 4 )
      return 0;
    if ( (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 2))(g_pSaveRestoreFileSystem, &tokenSize, 4, pFile) != 4 )
      return 0;
    v11 = CSaveMemory::SaveAllocMemory(&this->m_SaveMemory, tokenSize + size + 976, 1u, 1);
    v12 = v11;
    if ( v11 == 0 )
      return 0;
    *v11 = 0;
    *(v11 + 1) = 0;
    *(v11 + 4) = 0;
    *(v11 + 5) = 0;
    *(v11 + 6) = 0;
    *(v11 + 4) = 0;
    CGameSaveRestoreInfo::CGameSaveRestoreInfo((v11 + 40));
    v13 = tokenSize;
    v12[968] = 0;
    v14 = v12 + 976;
    if ( v13 > 0 )
    {
      v15 = (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 2))(
              g_pSaveRestoreFileSystem,
              v12 + 976,
              v13,
              pFile);
      if ( v15 != tokenSize )
      {
LABEL_19:
        CEntity2SaveRestore::Finish(this, v12);
        return 0;
      }
      LODWORD(v13) = tokenSize;
      v14 = v12 + 976;
    }
    SymbolTable = CEntity2SaveRestore::ReadSymbolTable(this, v12, v14, v13, tokenCount);
    if ( SymbolTable == 0 )
      goto LABEL_19;
    v17 = size;
    *v12 = SymbolTable;
    v18 = g_pSaveRestoreFileSystem;
    *(v12 + 1) = SymbolTable;
    v12[560] = 0;
    *(v12 + 147) = 0;
    *(v12 + 5) = v17;
    v19 = size;
    *(v12 + 4) = 0;
    v20 = (*(v18->_vptr_ISaveRestoreFileSystem + 2))(v18, SymbolTable, v19, pFile);
    if ( v20 != size )
      goto LABEL_19;
    CRestore::CRestore(&restoreHelper, v12);
    CRestore::ReadFields(
      &restoreHelper,
      "GameHeader",
      pHeader,
      0,
      GAME_HEADER::m_DataMap.dataDesc,
      GAME_HEADER::m_DataMap.dataNumFields);
    if ( pHeader->m_nSpawnGroupCount > 0x1000u )
    {
      CEntity2SaveRestore::Finish(this, v12);
    }
    else
    {
      for ( i = 0; i < pHeader->m_nSpawnGroupCount; ++i )
      {
        group.m_bClientSpawnGroup = 0;
        group.m_sGroupName.m_pString = 0;
        CRestore::ReadFields(
          &restoreHelper,
          "SpawnGroups",
          &group,
          0,
          SPAWNGROUP_HEADER::m_DataMap.dataDesc,
          SPAWNGROUP_HEADER::m_DataMap.dataNumFields);
        pszTokenListb = spawngroupinfo->m_Size;
        if ( spawngroupinfo->m_Size == spawngroupinfo->m_Memory.m_nAllocationCount )
          CUtlMemory<CCreateGameServerLoadInfo,int>::Grow(&spawngroupinfo->m_Memory, 1);
        ++spawngroupinfo->m_Size;
        v28 = pszTokenListb;
        m_pMemory = spawngroupinfo->m_Memory.m_pMemory;
        pszTokenList = &m_pMemory[v28];
        if ( &m_pMemory[v28] != 0 )
        {
          *(pszTokenList + 6) = 0;
          *(pszTokenList + 7) = 0;
          *(pszTokenList + 8) = 0;
          pszTokenList[72] = 0;
          pszTokenList[73] = 0;
          SetIdentityMatrix(pszTokenList);
          m_pMemory = spawngroupinfo->m_Memory.m_pMemory;
        }
        pszTokenLista = &m_pMemory[v28];
        CUtlString::operator=(&m_pMemory[v28].m_SpawnGroupName, &group.m_sGroupName);
        v22 = CUtlString::Get(&group.m_sGroupName);
        CEntity2SaveRestore::GetSaveGameSpawnGroupName(&v41, this, v22);
        v29 = v41;
        if ( *(pszTokenLista + 8) != 0 )
          CUtlString::FreeMemoryBlock(pszTokenLista + 8);
        v23 = pszTokenLista;
        v24 = 12;
        p_m_vecWorldOffset = &group.m_vecWorldOffset;
        *(pszTokenLista + 8) = v29;
        while ( v24 != 0 )
        {
          *v23 = p_m_vecWorldOffset->m_flMatVal[0][0];
          p_m_vecWorldOffset = (p_m_vecWorldOffset + 4);
          v23 += 4;
          --v24;
        }
        pszTokenLista[72] = 1;
        v26 = group.m_sGroupName.m_pString == 0;
        pszTokenLista[73] = group.m_bClientSpawnGroup;
        if ( !v26 )
          CUtlString::FreeMemoryBlock(&group.m_sGroupName);
      }
      if ( saveFileLevelsType != SaveFileLevelsType_t::SFL_SERVER_0 )
        SkipGlobalState(v12);
      else
        RestoreGlobalState(v12);
      if ( (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 2))(
             g_pSaveRestoreFileSystem,
             pMapCount,
             4,
             pFile) == 4 )
      {
        CEntity2SaveRestore::Finish(this, v12);
        v27 = 1;
        goto LABEL_39;
      }
    }
    v27 = 0;
LABEL_39:
    pMapCountb = v27;
    restoreHelper._vptr_IRestore = &off_3FF5F30;
    CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&restoreHelper.m_BlockEndStack);
    return pMapCountb;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) == 0 )
    return 0;
  LoggingSystem_Log(LOG_SAVERESTORE, 2, "Can't load saved game, incorrect version (got %i expecting %i)\n", tag, 116);
  return 0;
}


// CEntity2SaveRestore::OpenSaveFileAndExtractLevels  (line 1650, @0x0000000002087e70, libserver.so)  // inlines: CUtlString, GAME_HEADER, Length, SetPtr, String, V_strlen, operator=, operator[], ~CUtlString, ~GAME_HEADER
// calls: CUtlString::FreeMemoryBlock, strlen, CUtlString::Get, CEntity2SaveRestore::SaveReadHeaderAndSpawnGroupList, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlVectorBase<CCreateGameServerLoadInfo, CUtlMemory<CCreateGameServerLoadInfo, int> >::Remove, CEntity2SaveRestore::DirectoryExtract, GAME_HEADER::~GAME_HEADER, _Unwind_Resume
// strings: "ignoring %s.HL%s on %s\n", "CEntity2SaveRestore::OnLoad:  not such save file '%s'\n", "CEntity2SaveRestore::OnLoad:  SaveReadHeaderAndSpawnGroupList failed '%s'\n", "CEntity2SaveRestore::OnLoad:  DirectoryExtract failed '%s'\n", "File '%s' not found or failed to open.\n"
// globals: g_pSaveRestoreFileSystem
void __fastcall CEntity2SaveRestore::OpenSaveFileAndExtractLevels(
        CEntity2SaveRestore *const this,
        const char *pSaveGame,
        CUtlVector<CCreateGameServerLoadInfo,CUtlMemory<CCreateGameServerLoadInfo,int> > *const list,
        bool bWipeDirectoryAndExtract,
        SaveFileLevelsType_t_0 saveFileLevelsType)
{
  int (**vptr_IEntity2SaveRestore)(...); // rax
  unsigned __int8 (__fastcall *v9)(IBaseFileSystem *, const char *, char *); // r13
  const char *v10; // rax
  int (*v11)(...); // rbx
  const char *v12; // rax
  bool v13; // r14
  int v14; // ebx
  __int64 v15; // r12
  CCreateGameServerLoadInfo *v16; // r13
  char *v17; // rax
  char *v18; // rcx
  const char *v19; // rax
  const char *v20; // rax
  const char *v21; // rax
  const char *v22; // rax
  const char *v23; // rax
  FileHandle_t pFile; // [rsp+8h] [rbp-A8h]
  const char *v25; // [rsp+18h] [rbp-98h]
  const char *v26; // [rsp+20h] [rbp-90h]
  int mapCount; // [rsp+3Ch] [rbp-74h] BYREF
  CUtlString name; // [rsp+40h] [rbp-70h] BYREF
  char *s; // [rsp+50h] [rbp-60h] BYREF
  GAME_HEADER header; // [rsp+60h] [rbp-50h] BYREF

  vptr_IEntity2SaveRestore = this->_vptr_IEntity2SaveRestore;
  name.m_pString = 0;
  vptr_IEntity2SaveRestore[13](&s, this, pSaveGame);
  name.m_pString = s;
  if ( s == 0 )
    return;
  if ( strlen(s) <= 0 )
  {
    CUtlString::FreeMemoryBlock(&name);
    return;
  }
  v9 = *(g_pFullFileSystem->_vptr_IBaseFileSystem + 10);
  v10 = CUtlString::Get(&name);
  if ( v9(&g_pFullFileSystem->IBaseFileSystem, v10, "MOD") != 0 )
  {
    v11 = *g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem;
    v12 = CUtlString::Get(&name);
    pFile = (v11)(g_pSaveRestoreFileSystem, v12, "rb", "MOD");
    if ( pFile != 0 )
    {
      header.m_sComment.m_pString = 0;
      header.m_nSpawnGroupCount = 0;
      header.m_sLandmark.m_pString = 0;
      if ( CEntity2SaveRestore::SaveReadHeaderAndSpawnGroupList(
             this,
             pFile,
             &header,
             &mapCount,
             list,
             saveFileLevelsType) != 0 )
      {
        if ( bWipeDirectoryAndExtract )
        {
          (*(this->_vptr_IEntity2SaveRestore + 10))(this);
          if ( !CEntity2SaveRestore::DirectoryExtract(this, pFile, mapCount)
            && LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
          {
            v22 = CUtlString::Get(&name);
            LoggingSystem_Log(LOG_SAVERESTORE, 2, "CEntity2SaveRestore::OnLoad:  DirectoryExtract failed '%s'\n", v22);
          }
        }
        v13 = saveFileLevelsType == SaveFileLevelsType_t::SFL_CLIENT_0;
        v14 = list->m_Size - 1;
        if ( v14 >= 0 )
        {
          v15 = v14;
          do
          {
            v16 = &list->m_Memory.m_pMemory[v15];
            if ( v16->m_bIsClientSideSpawnGroup != v13 )
            {
              if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
              {
                v17 = "client";
                if ( !v13 )
                  v17 = "server";
                v18 = "2";
                v26 = v17;
                if ( !v16->m_bIsClientSideSpawnGroup )
                  v18 = "1";
                v25 = v18;
                v19 = CUtlString::Get(&v16->m_SpawnGroupName);
                LoggingSystem_Log(LOG_SAVERESTORE, 0, "ignoring %s.HL%s on %s\n", v19, v25, v26);
              }
              CUtlVectorBase<CCreateGameServerLoadInfo,CUtlMemory<CCreateGameServerLoadInfo,int>>::Remove(list, v14);
            }
            --v14;
            --v15;
          }
          while ( v14 != -1 );
        }
        (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 1))(g_pSaveRestoreFileSystem, pFile);
        if ( header.m_sLandmark.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&header.m_sLandmark);
        if ( header.m_sComment.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&header.m_sComment);
        if ( name.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&name);
        return;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
      {
        v21 = CUtlString::Get(&name);
        LoggingSystem_Log(
          LOG_SAVERESTORE,
          2,
          "CEntity2SaveRestore::OnLoad:  SaveReadHeaderAndSpawnGroupList failed '%s'\n",
          v21);
      }
      (*(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 1))(g_pSaveRestoreFileSystem, pFile);
      if ( header.m_sLandmark.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&header.m_sLandmark);
      if ( header.m_sComment.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&header.m_sComment);
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
    {
      v23 = CUtlString::Get(&name);
      LoggingSystem_Log(LOG_SAVERESTORE, 2, "File '%s' not found or failed to open.\n", v23);
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
  {
    v20 = CUtlString::Get(&name);
    LoggingSystem_Log(LOG_SAVERESTORE, 2, "CEntity2SaveRestore::OnLoad:  not such save file '%s'\n", v20);
  }
  if ( name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&name);
}


// CEntity2SaveRestore::DirectoryExtract  (line 1714, @0x0000000002073000, libserver.so)  // inlines: String
// calls: CUtlString::Get
// callers: CEntity2SaveRestore::OpenSaveFileAndExtractLevels
// globals: g_pSaveRestoreFileSystem
bool __fastcall CEntity2SaveRestore::DirectoryExtract(
        CEntity2SaveRestore *const this,
        FileHandle_t pFile,
        int fileCount)
{
  bool (__fastcall *v5)(ISaveRestoreFileSystem *, FileHandle_t, _QWORD, const char *); // r13
  const char *v6; // rax

  v5 = *(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 18);
  v6 = CUtlString::Get(&this->m_CurrentMod);
  return v5(g_pSaveRestoreFileSystem, pFile, fileCount, v6);
}


// CEntity2SaveRestore::Init  (line 1722, @0x000000000205bd70, libserver.so)  // inlines: CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, IsDedicatedServer, ResetDbgInfo, SetCompareType, SetLessFunc, ThreadPoolStartParams_t
// calls: CreateNewThreadPool, CommandLine, operator new
// strings: "SaveJob", "-noclearsave"
// globals: FastCaselessStringLessThan(char const* const&,char const* const&), g_pSaveRestoreHostDataMgr
void __fastcall CEntity2SaveRestore::Init(CEntity2SaveRestore *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  IApplication *v4; // rdi
  IThreadPool *NewThreadPool; // rax
  __int64 v6; // rax
  CRestoreData *v7; // rax
  ISaveRestoreDataMgr *v8; // rdi
  ThreadPoolStartParams_t threadPoolStartParams; // [rsp+0h] [rbp-130h] BYREF

  v4 = g_pApplication;
  if ( g_pApplication == 0 || (*(g_pApplication->_vptr_IAppSystem + 33))(g_pApplication) != 2 )
  {
    threadPoolStartParams.nThreadsMax = -1;
    threadPoolStartParams.iThreadPriority = -32768;
    *(&threadPoolStartParams + 276) &= 0xF8u;
    threadPoolStartParams.nThreads = 1;
    threadPoolStartParams.nStackSize = 0x10000;
    threadPoolStartParams.fDistribute = ThreeState_t::TRS_FALSE;
    NewThreadPool = CreateNewThreadPool(v4, v2, v1);
    this->m_pSaveThread = NewThreadPool;
    (*(NewThreadPool->_vptr_IRefCounted + 25))(NewThreadPool, &threadPoolStartParams, "SaveJob");
  }
  v6 = CommandLine(v4, v2);
  if ( (*(*v6 + 64LL))(v6, "-noclearsave") == 0 )
    (*(this->_vptr_IEntity2SaveRestore + 10))(this);
  v7 = operator new(0x30u);
  v7->m_RestoreLookup.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  v8 = g_pSaveRestoreHostDataMgr;
  v7->m_RestoreLookup.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  v7->m_RestoreLookup.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  v7->m_RestoreLookup.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  v7->m_RestoreLookup.m_Elements.m_Tree.m_Root = -1;
  v7->m_RestoreLookup.m_Elements.m_Tree.m_NumElements = 0;
  v7->m_RestoreLookup.m_Elements.m_Tree.m_FirstFree = -1;
  v7->m_RestoreLookup.m_Elements.m_Tree.m_LastAlloc.index = -1;
  v7->m_RestoreLookup.m_Elements.m_Tree.m_pElements = 0;
  this->m_pRestoreData = v7;
  (*(v8->_vptr_IAppSystem + 13))(v8, v7);
}


// CEntity2SaveRestore::Release  (line 1761, @0x000000000205d7e0, libserver.so)  // inlines: CopyConstruct<CFunctor*>, Destruct<SPAWNGROUP_HEADER>, Detach, Element, FinishPush, Flush, FreeNode, InterlockedCompareExchangeNode, InterlockedCompareExchangeNodeLink, Pop, PopItem, Purge, Push, PushItem, RemoveAll, Shutdown, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedCompareExchange64, ThreadInterlockedCompareExchangePointer, ThreadInterlockedDecrement, ThreadInterlockedIncrement, ThreadPause, operator++, operator--, operator[], ~CCallQueue, ~CCallQueueT, ~CEntity2SaveRestore, ~CSaveMemory, ~CTSListBase, ~CTSQueue, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~SPAWNGROUP_HEADER, ~SaveGameInfo_t
// calls: CUtlString::FreeMemoryBlock, AssertMsg_ConditionFailed, operator delete, CMemoryStack::~CMemoryStack, CUtlMemory<SPAWNGROUP_HEADER, int>::Purge, CUtlMemory<CEntityHandle, int>::Purge, operator new
// strings: "CTSQueue corruption"
// globals: CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants
void __fastcall CEntity2SaveRestore::Release(CEntity2SaveRestore *const this)
{
  int v1; // r12d
  unsigned __int64 v2; // r15
  int m_Size; // r13d
  __int64 i; // r14
  CUtlString *v6; // rdi
  bool v7; // zf
  unsigned __int64 v8; // rcx
  TSLHead_t m_Head; // rax
  CCallQueue *p_m_AsyncSaveCallQueue; // r14
  _QWORD *p_Next; // r13
  TSLHead_t v12; // rt0
  int v13; // r8d
  CTSQueue<CFunctor*,false>::NodeLink_t *p_m_Tail; // r9
  intp sequence; // rdx
  CTSQueue<CFunctor*,false>::Node_t *pNode; // rsi
  intp v17; // rcx
  __int64 v18; // rdx
  __int128 v19; // rt0
  char v20; // al
  __int128 v21; // rt0
  CInterlockedInt *p_m_Count; // r13
  signed __int64 *v23; // r10
  signed __int64 v24; // rsi
  signed __int64 v25; // rdi
  __int128 v26; // rt0
  CTSListBase *p_m_FreeNodes; // rsi
  TSLHead_t v28; // rax
  __int64 v29; // rdx
  TSLHead_t v30; // rt0
  unsigned __int8 v31; // tt
  __int128 v32; // rt0
  CTSQueue<CFunctor*,false>::NodeLink_t *v33; // r15
  CCallQueue *v34; // r12
  CEntity2SaveRestore *v35; // r14
  signed __int64 *v36; // rdi
  signed __int64 v37; // rbx
  signed __int64 v38; // r10
  __int128 v39; // rt0
  __int128 v40; // rt0
  unsigned __int64 v41; // r12
  __int128 v42; // rt0
  signed __int64 *Next; // rdi
  __int64 v44; // rdx
  CTSQueue<CFunctor*,false>::Node_t *v45; // rdi
  unsigned __int64 v46; // rcx
  TSLHead_t v47; // rt0
  CMemoryStack *m_pMemoryStack; // r12
  CTSQueue<CFunctor*,false>::NodeLink_t *v49; // [rsp-18h] [rbp-80h]
  int v50; // [rsp-18h] [rbp-80h]
  int v51; // [rsp-10h] [rbp-78h]
  CTSQueue<CFunctor*,false>::NodeLink_t *v52; // [rsp-10h] [rbp-78h]
  intp *p_sequence; // [rsp-8h] [rbp-70h]

  if ( this != 0 )
  {
    this->_vptr_IEntity2SaveRestore = off_3FF1D30;
    m_Size = this->m_residentSpawnGroups.m_Size;
    for ( i = 80LL * m_Size - 80; --m_Size >= 0; i -= 80 )
    {
      v6 = (&this->m_residentSpawnGroups.m_Memory.m_pMemory->m_sGroupName + i);
      if ( v6->m_pString != 0 )
        CUtlString::FreeMemoryBlock(v6);
    }
    v7 = (this->m_residentSpawnGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_residentSpawnGroups.m_Size = 0;
    if ( v7 )
    {
      CUtlMemory<SPAWNGROUP_HEADER,int>::Purge(&this->m_residentSpawnGroups.m_Memory);
      if ( (this->m_residentSpawnGroups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<SPAWNGROUP_HEADER,int>::Purge(&this->m_residentSpawnGroups.m_Memory);
    }
    if ( this->m_CurrentMod.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&this->m_CurrentMod);
    v8 = 0;
    m_Head = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
    p_m_AsyncSaveCallQueue = &this->m_AsyncSaveCallQueue;
    p_Next = &m_Head.value.Next->Next;
    if ( m_Head.value.Next != 0 )
    {
      while ( 1 )
      {
        v8 = (m_Head.value32.DepthAndSequence - 1) | v8 & 0xFFFFFFFF00000000LL;
        v12 = m_Head;
        if ( _InterlockedCompareExchange128(
               &this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes,
               v8,
               m_Head.value.Next->Next,
               &v12) != 0 )
          break;
        _mm_pause();
        m_Head = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
        p_Next = &m_Head.value.Next->Next;
        if ( m_Head.value.Next == 0 )
          goto LABEL_67;
      }
    }
    else
    {
LABEL_67:
      p_Next = operator new(0x10u);
    }
    if ( p_Next != -8LL )
      p_Next[1] = 0;
    *p_Next = p_m_AsyncSaveCallQueue;
    v13 = 0;
    p_m_Tail = &this->m_AsyncSaveCallQueue.m_queue.m_Tail;
    while ( 1 )
    {
      sequence = this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.sequence;
      pNode = this->m_AsyncSaveCallQueue.m_queue.m_Tail.value.pNode;
      if ( p_m_AsyncSaveCallQueue == _InterlockedCompareExchange64(pNode, p_Next, p_m_AsyncSaveCallQueue) )
        break;
      v17 = sequence + 1;
      *&v19 = pNode;
      *(&v19 + 1) = sequence;
      _InterlockedCompareExchange128(p_m_Tail, sequence + 1, pNode->pNext, &v19);
      v18 = *(&v19 + 1);
      if ( ++v13 > 9999999 )
      {
        v49 = p_m_Tail;
        v51 = v13;
        v20 = AssertMsg_ConditionFailed(
                &CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants,
                "CTSQueue corruption",
                v18,
                v17);
        v13 = v51;
        p_m_Tail = v49;
        if ( v20 != 0 )
          __debugbreak();
      }
    }
    *&v21 = pNode;
    *(&v21 + 1) = sequence;
    _InterlockedCompareExchange128(p_m_Tail, sequence + 1, p_Next, &v21);
    p_m_Count = &this->m_AsyncSaveCallQueue.m_queue.m_Count;
    _InterlockedAdd(&this->m_AsyncSaveCallQueue.m_queue.m_Count.m_value, 1u);
    v50 = v1;
    p_sequence = &this->m_AsyncSaveCallQueue.m_queue.m_Head.value.sequence;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            v23 = this->m_AsyncSaveCallQueue.m_queue.m_Head.value.pNode;
            v24 = *v23;
          }
          while ( *v23 == 0 );
          if ( v23 != p_m_Tail->value.pNode )
            break;
          if ( p_m_AsyncSaveCallQueue == v24 )
            goto LABEL_30;
          *&v32 = this->m_AsyncSaveCallQueue.m_queue.m_Head.value.pNode;
          *(&v32 + 1) = p_m_Tail->value.sequence;
          _InterlockedCompareExchange128(p_m_Tail, *(&v32 + 1) + 1LL, v24, &v32);
        }
        if ( p_m_AsyncSaveCallQueue != v24 )
        {
          v25 = *(v24 + 8);
          *&v26 = this->m_AsyncSaveCallQueue.m_queue.m_Head.value.pNode;
          *(&v26 + 1) = *p_sequence;
          if ( _InterlockedCompareExchange128(p_m_AsyncSaveCallQueue, *p_sequence + 1, v24, &v26) != 0 )
            break;
        }
      }
      _InterlockedSub(&p_m_Count->m_value, 1u);
      v23[1] = v25;
      p_m_FreeNodes = &this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes;
      v2 = v2;
      while ( 1 )
      {
        v28 = this->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
        v2 = (v28.value32.DepthAndSequence + 65537) | v2 & 0xFFFFFFFF00000000LL;
        *v23 = v28.value.Next;
        v30 = v28;
        v31 = _InterlockedCompareExchange128(p_m_FreeNodes, v2, v23, &v30);
        v29 = *(&v30.value64x128 + 1);
        if ( v31 != 0 )
          break;
        _mm_pause();
      }
      if ( v25 == 0 )
        break;
      v52 = p_m_Tail;
      (*(*v25 + 8LL))(v25, p_m_FreeNodes, v29, v2);
      p_m_Tail = v52;
    }
LABEL_30:
    v33 = p_m_Tail;
    v34 = &this->m_AsyncSaveCallQueue;
    v35 = this;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v36 = v35->m_AsyncSaveCallQueue.m_queue.m_Head.value.pNode;
          v37 = *v36;
        }
        while ( *v36 == 0 );
        if ( v36 == v33->value.pNode )
          break;
        if ( v34 != v37 )
        {
          v38 = *(v37 + 8);
          *&v39 = v35->m_AsyncSaveCallQueue.m_queue.m_Head.value.pNode;
          *(&v39 + 1) = *p_sequence;
          if ( _InterlockedCompareExchange128(v34, *p_sequence + 1, v37, &v39) != 0 )
          {
            _InterlockedSub(&p_m_Count->m_value, 1u);
            v36[1] = v38;
            operator delete(v36);
          }
        }
      }
      if ( v34 == v37 )
        break;
      *&v40 = v35->m_AsyncSaveCallQueue.m_queue.m_Head.value.pNode;
      *(&v40 + 1) = v33->value.sequence;
      _InterlockedCompareExchange128(v33, *(&v40 + 1) + 1LL, v37, &v40);
    }
    LODWORD(v41) = v50;
    while ( 1 )
    {
      Next = v35->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head.value.Next;
      v41 = v41;
      v44 = *(&v35->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head.value64x128 + 1);
      if ( Next == 0 )
        break;
      while ( 1 )
      {
        v41 = (v44 - 1) | v41 & 0xFFFFFFFF00000000LL;
        *&v42 = Next;
        *(&v42 + 1) = v44;
        if ( _InterlockedCompareExchange128(&v35->m_AsyncSaveCallQueue.m_queue.m_FreeNodes, v41, *Next, &v42) != 0 )
          break;
        _mm_pause();
        Next = v35->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head.value.Next;
        v44 = *(&v35->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head.value64x128 + 1);
        if ( Next == 0 )
          goto LABEL_42;
      }
      operator delete(Next);
    }
LABEL_42:
    v45 = v35->m_AsyncSaveCallQueue.m_queue.m_Head.value.pNode;
    v35->m_AsyncSaveCallQueue.m_queue.m_Tail.value.sequence = 0;
    v35->m_AsyncSaveCallQueue.m_queue.m_Head.value.sequence = 0;
    operator delete(v45);
    v46 = 0;
    v35->m_AsyncSaveCallQueue.m_queue.m_Head.value.pNode = 0;
    v35->m_AsyncSaveCallQueue.m_queue.m_Tail.value.pNode = 0;
    do
    {
      _mm_pause();
      if ( v35->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head.value.Next == 0 )
        break;
      v46 = *(&v35->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head.value64x128 + 1) & 0xFFFF0000LL
          | v46 & 0xFFFFFFFF00000000LL;
      v47 = v35->m_AsyncSaveCallQueue.m_queue.m_FreeNodes.m_Head;
    }
    while ( _InterlockedCompareExchange128(&v35->m_AsyncSaveCallQueue.m_queue.m_FreeNodes, v46, 0, &v47) == 0 );
    m_pMemoryStack = v35->m_SaveMemory.m_pMemoryStack;
    if ( m_pMemoryStack != 0 )
    {
      CMemoryStack::~CMemoryStack(m_pMemoryStack);
      operator delete(m_pMemoryStack);
    }
    v7 = v35->m_sLastSaveFile.m_pString == 0;
    v35->m_SaveMemory.m_pMemoryStack = 0;
    v35->m_SaveMemory.m_nSaveAllocs = 0;
    if ( !v7 )
      CUtlString::FreeMemoryBlock(&v35->m_sLastSaveFile);
    if ( v35->m_sSaveGameFileName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v35->m_sSaveGameFileName);
    if ( v35->m_SaveGameInfo.m_sLandmarkName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v35->m_SaveGameInfo.m_sLandmarkName);
    if ( v35->m_SaveGameInfo.m_sOldLevel.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v35->m_SaveGameInfo.m_sOldLevel);
    if ( v35->m_SaveGameInfo.m_sSaveComment.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v35->m_SaveGameInfo.m_sSaveComment);
    if ( v35->m_SaveGameInfo.m_sSaveName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v35->m_SaveGameInfo.m_sSaveName);
    v7 = (v35->m_RestoredEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v35->m_RestoredEntities.m_Size = 0;
    if ( v7 )
    {
      CUtlMemory<CEntityHandle,int>::Purge(&v35->m_RestoredEntities.m_Memory);
      if ( (v35->m_RestoredEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityHandle,int>::Purge(&v35->m_RestoredEntities.m_Memory);
    }
    operator delete(v35);
  }
}


// CEntity2SaveRestore::Shutdown  (line 1769, @0x000000000205c440, libserver.so)
// calls: CEntity2SaveRestore::FinishAsyncSave
void __fastcall CEntity2SaveRestore::Shutdown(CEntity2SaveRestore *const this)
{
  IThreadPool *m_pSaveThread; // rdi

  CEntity2SaveRestore::FinishAsyncSave(this);
  m_pSaveThread = this->m_pSaveThread;
  if ( m_pSaveThread != 0 )
  {
    (*(m_pSaveThread->_vptr_IRefCounted + 5))(m_pSaveThread, 0xFFFFFFFFLL);
    (*(this->m_pSaveThread->_vptr_IRefCounted + 1))(this->m_pSaveThread);
    this->m_pSaveThread = 0;
  }
}


// CEntity2SaveRestore::ClearSaveDir  (line 1785, @0x0000000002073050, libserver.so)
void __fastcall CEntity2SaveRestore::ClearSaveDir(CEntity2SaveRestore *const this)
{
  this->m_bClearSaveDir = 1;
}


// CEntity2SaveRestore::DoClearSaveDir  (line 1793, @0x00000000020730a0, libserver.so)  // inlines: CUtlString, SetPtr, String, operator=, ~CUtlString
// calls: CUtlString::Set, CUtlString::Get, CUtlString::operator+, CUtlString::FreeMemoryBlock, CEntity2SaveRestore::DirectoryClear, _Unwind_Resume
// callers: CEntity2SaveRestore::ClearSaveDirectory
// strings: "SAVE/"
void __fastcall CEntity2SaveRestore::DoClearSaveDir(CEntity2SaveRestore *const this)
{
  void (__fastcall *v2)(IFileSystem *, const char *, char *); // r12
  const char *v3; // rax
  char *v4; // r13
  const char *v5; // rax
  CUtlString savedir; // [rsp+0h] [rbp-60h] BYREF
  CUtlString wildcard; // [rsp+10h] [rbp-50h] BYREF
  char *v8; // [rsp+20h] [rbp-40h]

  savedir.m_pString = 0;
  CUtlString::Set(&savedir, "SAVE/");
  v2 = *(g_pFullFileSystem->_vptr_IAppSystem + 27);
  v3 = CUtlString::Get(&savedir);
  v2(g_pFullFileSystem, v3, "MOD");
  wildcard.m_pString = 0;
  CUtlString::operator+(&savedir, "*.hl?");
  v4 = v8;
  if ( wildcard.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&wildcard);
  wildcard.m_pString = v4;
  v5 = CUtlString::Get(&wildcard);
  CEntity2SaveRestore::DirectoryClear(this, v5);
  if ( wildcard.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&wildcard);
  if ( savedir.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&savedir);
}


// CEntity2SaveRestore::DirectoryClear  (line 1819, @0x0000000002073060, libserver.so)  // inlines: String
// calls: CUtlString::Get
// callers: CEntity2SaveRestore::DoClearSaveDir
// globals: g_pSaveRestoreFileSystem
void __fastcall CEntity2SaveRestore::DirectoryClear(CEntity2SaveRestore *const this, const char *pPath)
{
  void (__fastcall *v3)(ISaveRestoreFileSystem *, const char *, const char *); // r12
  const char *v4; // rax

  v3 = *(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 20);
  v4 = CUtlString::Get(&this->m_CurrentMod);
  v3(g_pSaveRestoreFileSystem, pPath, v4);
}


// CEntity2SaveRestore::ClearSaveDirectory  (line 1824, @0x00000000020731c0, libserver.so)
// calls: CEntity2SaveRestore::DoClearSaveDir
void __fastcall CEntity2SaveRestore::ClearSaveDirectory(CEntity2SaveRestore *const this)
{
  this->m_bClearSaveDir = 0;
  CEntity2SaveRestore::DoClearSaveDir(this);
}


// CEntity2SaveRestore::ExtractResourcesFromSaveGame  (line 1830, @0x0000000002087570, libserver.so)  // inlines: Append, CUtlString, Copy, Purge, RemoveAll, SAVE_HEADER, ~CRestore, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~IRestore, ~SAVE_HEADER
// calls: CEntity2SaveRestore::LoadSaveData, CRestore::CRestore, CGameSaveRestoreInfo::GetResourceList, CUtlVectorBase<CCompressedResourceManifest::CompressedResourceName_t, CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t, int> >::RemoveAll, CUtlSymbolTable::RemoveAll, CCompressedResourceManifest::GetResourceCount, CCompressedResourceManifest::GetResource, CCompressedResourceManifest::AddResource, CEntity2SaveRestore::Finish, CUtlString::FreeMemoryBlock, CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t, int>::Purge, CUtlMemory<int, int>::Purge (14 total)
void __fastcall CEntity2SaveRestore::ExtractResourcesFromSaveGame(
        CEntity2SaveRestore *const this,
        CCompressedResourceManifest *pCompressedManifestOut,
        ILoadingSpawnGroup *pLoadingSpawnGroup)
{
  __int64 v5; // rax
  CSaveRestoreData *SaveData; // r15
  const CCompressedResourceManifest *ResourceList; // r14
  int v8; // ebx
  int ResourceCount; // r13d
  const char *Resource; // rax
  CRestore restoreHelper; // [rsp+10h] [rbp-D0h] BYREF
  SAVE_HEADER header; // [rsp+50h] [rbp-90h] BYREF

  v5 = (*(pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 3))(pLoadingSpawnGroup);
  header.m_flSaveTime = 0.0;
  memset(&header, 0, 24);
  SaveData = CEntity2SaveRestore::LoadSaveData(this, "dummy", *v5, *(v5 + 20));
  if ( SaveData != 0 )
  {
    CRestore::CRestore(&restoreHelper, SaveData);
    ResourceList = CGameSaveRestoreInfo::GetResourceList(&SaveData->CGameSaveRestoreInfo);
    CUtlVectorBase<CCompressedResourceManifest::CompressedResourceName_t,CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>>::RemoveAll(&pCompressedManifestOut->m_resources.m_Vector);
    if ( (pCompressedManifestOut->m_resources.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t,int>::Purge(&pCompressedManifestOut->m_resources.m_Vector.m_Memory);
    CUtlSymbolTable::RemoveAll(&pCompressedManifestOut->m_resources.m_SymbolTable);
    CUtlSymbolTable::RemoveAll(&pCompressedManifestOut->m_paths);
    CUtlSymbolTable::RemoveAll(&pCompressedManifestOut->m_extensions);
    v8 = 0;
    ResourceCount = CCompressedResourceManifest::GetResourceCount(ResourceList);
    if ( ResourceCount > 0 )
    {
      do
      {
        Resource = CCompressedResourceManifest::GetResource(ResourceList, v8);
        CCompressedResourceManifest::AddResource(pCompressedManifestOut, Resource);
        ++v8;
      }
      while ( v8 != ResourceCount );
    }
    CEntity2SaveRestore::Finish(this, SaveData);
    restoreHelper.m_BlockEndStack.m_Size = 0;
    restoreHelper._vptr_IRestore = &off_3FF5F30;
    if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
      if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
    }
    restoreHelper._vptr_IRestore = &off_3FEC5D0;
    if ( header.m_sSpawnGroupName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&header.m_sSpawnGroupName);
  }
}


// CEntity2SaveRestore::AppendTransitionResources  (line 1846, @0x0000000002074830, libserver.so)  // inlines: Append, CUtlString, Purge, RemoveAll, String, operator char const*, ~CRestore, ~CUtlBuffer, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~IRestore
// calls: CUtlBuffer::CUtlBuffer, CUtlString::Set, CUtlString::Get, CEntity2SaveRestore::GetSaveGameSpawnGroupName, CFmtStrN<256, false>::CFmtStrN, CUtlString::FreeMemoryBlock, CEntity2SaveRestore::LoadSaveData, CRestore::CRestore, CGameSaveRestoreInfo::GetResourceList, CCompressedResourceManifest::GetResourceCount, CCompressedResourceManifest::GetResource, CCompressedResourceManifest::AddResource (18 total)
// strings: "SAVE/%s.HL%s"
void __fastcall CEntity2SaveRestore::AppendTransitionResources(
        CEntity2SaveRestore *const this,
        CCompressedResourceManifest *pCompressedManifestOut,
        ILoadingSpawnGroup *pLoadingSpawnGroup)
{
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  int m_Put; // ebx
  unsigned __int8 *m_pMemory; // r13
  const char *v11; // rax
  CSaveRestoreData *SaveData; // rbx
  const CCompressedResourceManifest *ResourceList; // r14
  int v14; // ebx
  int ResourceCount; // r13d
  const char *Resource; // rax
  CSaveRestoreData *pSaveDataa; // [rsp+18h] [rbp-218h]
  CSaveRestoreData *pSaveData; // [rsp+18h] [rbp-218h]
  CUtlString sLevelMapName; // [rsp+30h] [rbp-200h] BYREF
  CUtlString v20; // [rsp+40h] [rbp-1F0h] BYREF
  CRestore restoreHelper; // [rsp+50h] [rbp-1E0h] BYREF
  CUtlBuffer bufSaveData; // [rsp+90h] [rbp-1A0h] BYREF
  CFmtStrN<256,false> v23; // [rsp+E0h] [rbp-150h] BYREF
  unsigned __int64 v24; // [rsp+1F8h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( pLoadingSpawnGroup != 0 && (*(pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 5))(pLoadingSpawnGroup) != 0 )
  {
    CUtlBuffer::CUtlBuffer(&bufSaveData, 0, 0, 0);
    v6 = (*(pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 6))(pLoadingSpawnGroup);
    sLevelMapName.m_pString = 0;
    CUtlString::Set(&sLevelMapName, v6);
    pSaveDataa = *(g_pFullFileSystem->_vptr_IBaseFileSystem + 14);
    v7 = CUtlString::Get(&sLevelMapName);
    CEntity2SaveRestore::GetSaveGameSpawnGroupName(&v20, this, v7);
    v8 = CUtlString::Get(&v20);
    CFmtStrN<256,false>::CFmtStrN(&v23, "SAVE/%s.HL%s", v8, "1");
    (pSaveDataa)(&g_pFullFileSystem->IBaseFileSystem, v23.m_szBuf, "MOD", &bufSaveData, 0, 0, 0);
    if ( v20.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v20);
    m_Put = bufSaveData.m_Put;
    m_pMemory = bufSaveData.m_Memory.m_pMemory;
    v11 = CUtlString::Get(&sLevelMapName);
    SaveData = CEntity2SaveRestore::LoadSaveData(this, v11, m_pMemory, m_Put);
    pSaveData = SaveData;
    if ( SaveData != 0 )
    {
      CRestore::CRestore(&restoreHelper, SaveData);
      ResourceList = CGameSaveRestoreInfo::GetResourceList(&SaveData->CGameSaveRestoreInfo);
      v14 = 0;
      ResourceCount = CCompressedResourceManifest::GetResourceCount(ResourceList);
      if ( ResourceCount > 0 )
      {
        do
        {
          Resource = CCompressedResourceManifest::GetResource(ResourceList, v14);
          CCompressedResourceManifest::AddResource(pCompressedManifestOut, Resource);
          ++v14;
        }
        while ( v14 != ResourceCount );
      }
      CEntity2SaveRestore::Finish(this, pSaveData);
      restoreHelper.m_BlockEndStack.m_Size = 0;
      restoreHelper._vptr_IRestore = &off_3FF5F30;
      if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
        if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
      }
      restoreHelper._vptr_IRestore = &off_3FEC5D0;
      if ( sLevelMapName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&sLevelMapName);
      if ( (bufSaveData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_12:
        CUtlMemory<unsigned char,int>::Purge(&bufSaveData.m_Memory);
    }
    else
    {
      if ( sLevelMapName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&sLevelMapName);
      if ( (bufSaveData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_12;
    }
  }
}


// CEntity2SaveRestore::ChangeSaveInMemory  (line 1866, @0x00000000020593c0, libserver.so)  // inlines: String
// calls: CUtlString::Get
// globals: g_pSaveRestoreFileSystem
void __fastcall CEntity2SaveRestore::ChangeSaveInMemory(CEntity2SaveRestore *const this, bool bSaveInMemory)
{
  void (__fastcall *v3)(ISaveRestoreFileSystem *, bool, const char *); // r12
  const char *v4; // rax

  v3 = *(g_pSaveRestoreFileSystem->_vptr_ISaveRestoreFileSystem + 23);
  v4 = CUtlString::Get(&this->m_CurrentMod);
  v3(g_pSaveRestoreFileSystem, bSaveInMemory, v4);
}


// CEntity2SaveRestore::IsReadyToSave  (line 1871, @0x000000000205a500, libserver.so)
// calls: CPhysicsGameSystem::GetLevelAggregateInstance
bool __fastcall CEntity2SaveRestore::IsReadyToSave(CEntity2SaveRestore *const this)
{
  return CPhysicsGameSystem::GetLevelAggregateInstance(g_pPhysicsGameSystem) != 0;
}


// CEntity2SaveRestore::GetSaveGameSpawnGroupName  (line 1877, @0x00000000020731d0, libserver.so)  // inlines: CUtlString, ~CUtlString
// calls: CUtlString::Set, CUtlString::GetBaseFilename, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CEntity2SaveRestore::EntityPatchRead, CEntity2SaveRestore::SaveGame_Start, CEntity2SaveRestore::LoadAdjacentDecals, CEntity2SaveRestore::AppendTransitionResources, CEntity2SaveRestore::EntityPatchWrite, CEntity2SaveRestore::SaveReadHeaderAndSpawnGroupList, CEntity2SaveRestore::LoadAdjacentEnts, CEntity2SaveRestore::StreamEntitiesToFile, CEntity2SaveRestore::SaveGame_Finalize
CUtlString __fastcall CEntity2SaveRestore::GetSaveGameSpawnGroupName(
        __int64 a1,
        const CEntity2SaveRestore *const this,
        const char *pSpawnGroupName)
{
  CUtlString v5; // [rsp+0h] [rbp-20h] BYREF

  v5.m_pString = 0;
  CUtlString::Set(&v5, pSpawnGroupName);
  CUtlString::GetBaseFilename(&v5);
  if ( v5.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v5);
  return a1;
}


// CEntity2SaveRestore::AgeSaveList  (line 1887, @0x0000000002073ab0, libserver.so)
// calls: CEntity2SaveRestore::AgeSaveFile
void __fastcall CEntity2SaveRestore::AgeSaveList(const CEntity2SaveRestore *const this, const char *pName, int count)
{
  int v5; // ebx

  v5 = count;
  if ( count > 0 )
  {
    do
      CEntity2SaveRestore::AgeSaveFile(this, pName, "sav", v5--);
    while ( v5 != 0 );
  }
}


// CEntity2SaveRestore::AgeSaveFile  (line 1904, @0x00000000020738e0, libserver.so)  // inlines: CUtlString, GetInt, operator char const*, ~CUtlString
// calls: CUtlString::Format, CUtlString::Get, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CEntity2SaveRestore::AgeSaveList
// strings: "SAVE/%s%02d.%s", "SAVE/%s.%s"
void __fastcall CEntity2SaveRestore::AgeSaveFile(
        const CEntity2SaveRestore *const this,
        const char *pName,
        const char *ext,
        int count)
{
  unsigned __int8 (__fastcall *v7)(IBaseFileSystem *, const char *, char *); // r15
  const char *v8; // rax
  void (__fastcall *v9)(IFileSystem *, const char *, const char *, char *); // r12
  const char *v10; // r15
  const char *v11; // rax
  unsigned __int8 (__fastcall *v12)(IBaseFileSystem *, const char *, char *); // r12
  const char *v13; // rax
  void (__fastcall *v14)(IFileSystem *, const char *, char *); // r12
  const char *v15; // rax
  CUtlString newName; // [rsp+0h] [rbp-50h] BYREF
  CUtlString oldName; // [rsp+10h] [rbp-40h] BYREF

  newName.m_pString = 0;
  oldName.m_pString = 0;
  if ( count == 1 )
    CUtlString::Format(&oldName, "SAVE/%s.%s", pName, ext);
  else
    CUtlString::Format(&oldName, "SAVE/%s%02d.%s", pName, count - 1, ext);
  CUtlString::Format(&newName, "SAVE/%s%02d.%s", pName, count, ext);
  v7 = *(g_pFullFileSystem->_vptr_IBaseFileSystem + 10);
  v8 = CUtlString::Get(&oldName);
  if ( v7(&g_pFullFileSystem->IBaseFileSystem, v8, "MOD") != 0 )
  {
    if ( count == save_history_count.m_pParent->m_Value.m_nValue )
    {
      v12 = *(g_pFullFileSystem->_vptr_IBaseFileSystem + 10);
      v13 = CUtlString::Get(&newName);
      if ( v12(&g_pFullFileSystem->IBaseFileSystem, v13, "MOD") != 0 )
      {
        v14 = *(g_pFullFileSystem->_vptr_IAppSystem + 25);
        v15 = CUtlString::Get(&newName);
        v14(g_pFullFileSystem, v15, "MOD");
      }
    }
    v9 = *(g_pFullFileSystem->_vptr_IAppSystem + 26);
    v10 = CUtlString::Get(&newName);
    v11 = CUtlString::Get(&oldName);
    v9(g_pFullFileSystem, v11, v10, "MOD");
  }
  if ( oldName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&oldName);
  if ( newName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&newName);
}


