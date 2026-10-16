// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gameentitysystem.cpp:507
class CSpawnGroupCompletionCallbackGameSystem : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct SpawnGroupCompletionDelegateInfo_t {
		EHANDLE m_hListener;  // +0x0

		SpawnGroupCompletionDelegate_t m_delegate;  // +0x8
		SpawnGroupCompletionDelegateHandle_t m_nHandle;  // +0x20
		SpawnGroupCompletionDelegateInfo_t();

		// sizeof = 40
	};

	struct SpawnGroupEntitySpawnCompletionDelegateInfo_t {
		const CEntityKeyValues * m_pKeyValues;  // +0x10
		SpawnGroupEntitySpawnCompletionDelegate_t m_delegate;  // +0x18
		SpawnGroupCompletionDelegateHandle_t m_nHandle;  // +0x30
		SpawnGroupEntitySpawnCompletionDelegateInfo_t();

		// sizeof = 56
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	struct SpawnGroupFinishListener_t {
		SpawnGroupHandle_t m_hSpawnGroup;  // +0x0

		int m_nSpawnGroupRefCount;  // +0x50
		SpawnGroupFinishListener_t();
		~SpawnGroupFinishListener_t();

		// sizeof = 88
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	SpawnGroupCompletionDelegateHandle_t m_nCurrentHandle;  // +0x30
	typedef CAutoGameSystem BaseClass;

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CSpawnGroupCompletionCallbackGameSystem *);
	int GetPriority();
	CSpawnGroupCompletionCallbackGameSystem();
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	SpawnGroupCompletionDelegateHandle_t ListenForSpawnGroupToFinish(SpawnGroupHandle_t, CBaseEntity *, SpawnGroupCompletionDelegate_t);
	SpawnGroupCompletionDelegateHandle_t ListenForEntityInSpawnGroupToFinish(SpawnGroupHandle_t, CEntityInstance *, const CEntityKeyValues *, CEntityInstance *, SpawnGroupEntitySpawnCompletionDelegate_t);
	void RemoveSpawnGroupListener(SpawnGroupCompletionDelegateHandle_t);

private:

	int FindOrAddSpawnGroupListener(SpawnGroupHandle_t);
	virtual ~CSpawnGroupCompletionCallbackGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[15] PostSpawnGroupLoad
	// sizeof = 56
};

// src/game/shared/gameentitysystem.cpp:762
class CLoadingSpawnGroup : public ILoadingSpawnGroup {
public:

	CLoadingSpawnGroup(CLoadingSpawnGroup &);
	CLoadingSpawnGroup(const CLoadingSpawnGroup &);
	~CLoadingSpawnGroup();
	CLoadingSpawnGroup();
	virtual CUtlScratchMemoryPool * GetEntityKeyValuesAllocator();
	virtual CEntityInstance * CreateEntityToSpawn(SpawnGroupHandle_t, const matrix3x4a_t &, int, const CEntityKeyValues *);
	void AddEntityToSpawn(CEntityIdentity *, const CEntityKeyValues *);
	virtual int EntityCount();
	virtual const EntitySpawnInfo_t * GetEntities();
	virtual void SpawnEntities();
	virtual void Release();
	virtual bool ShouldLoadEntitiesFromSave();
	virtual const CUtlBuffer & GetSaveRestoreFileData();
	void SetSaveRestoreFileData(const void *, int);
	virtual bool IsLevelTransition();
	virtual const char * GetLevelTransitionPreviousMap();
	virtual const char * GetLevelTransitionLandmarkName();
	virtual void SetLevelTransitionPreviousMap(const char *, const char *);

	// vtable[8] GetEntityKeyValuesAllocator
	// vtable[9] CreateEntityToSpawn
	// vtable[0] EntityCount
	// vtable[1] GetEntities
	// vtable[10] SpawnEntities
	// vtable[11] Release
	// vtable[2] ShouldLoadEntitiesFromSave
	// vtable[3] GetSaveRestoreFileData
	// vtable[5] IsLevelTransition
	// vtable[6] GetLevelTransitionPreviousMap
	// vtable[7] GetLevelTransitionLandmarkName
	// vtable[4] SetLevelTransitionPreviousMap
	// sizeof = 144
};

// src/game/shared/gameentitysystem.cpp:1087
class CLoadingEntityListener : public IEntityListener {
public:

private:

	CLoadingEntityListener(CLoadingEntityListener &);
	CLoadingEntityListener(const CLoadingEntityListener &);
	CLoadingEntityListener(CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > *);
	virtual void OnEntitySpawned(CEntityInstance *);

	// vtable[1] OnEntitySpawned
	// sizeof = 16
};

// src/game/shared/gameentitysystem.cpp:2872
class CRespawnEntitiesFilter : public ISpawnGroupEntityFilter {
public:

	CRespawnEntitiesFilter(CRespawnEntitiesFilter &);
	CRespawnEntitiesFilter(const CRespawnEntitiesFilter &);
	CRespawnEntitiesFilter();
	virtual void FilterSpawnGroupEntities(SpawnGroupHandle_t, bool, const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *, CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > &);
	virtual ~CRespawnEntitiesFilter();

	// vtable[2] FilterSpawnGroupEntities
	// sizeof = 8
};

// src/game/shared/gameentitysystem.cpp:2898
class CRespawnAllEntitiesSystem : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	bool m_bRespawnAllEntities;  // +0x11
	typedef CAutoGameSystem BaseClass;
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CRespawnAllEntitiesSystem *);
	CRespawnAllEntitiesSystem();
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual ~CRespawnAllEntitiesSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[25] FrameUpdatePostEntityThink
	// sizeof = 24
};

// src/game/shared/gameentitysystem.cpp:3359
class CEntityIONotify : public IEntityIONotify {
public:

	CEntityIONotify(CEntityIONotify &);
	CEntityIONotify(const CEntityIONotify &);
	CEntityIONotify();
	virtual void OnEntityIOOutput(CEntityInstance *, CEntityInstance *, EntityIOConnection_t *);
	virtual void OnEntityIOInput(CEntityInstance *, const char *, CEntityInstance *, CEntityInstance *, const CVariant &, int);
	virtual void OnEntityIOConnectionRemoved(CEntityInstance *, CEntityInstance *, EntityIOConnection_t *);

	// vtable[0] OnEntityIOOutput
	// vtable[1] OnEntityIOInput
	// vtable[2] OnEntityIOConnectionRemoved
	// sizeof = 8
};

// src/game/shared/gameentitysystem.cpp:3487
class CSource2EntitySystem : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CAutoGameSystem BaseClass;
	CSource2EntitySystem(CSource2EntitySystem &);
	CSource2EntitySystem(const CSource2EntitySystem &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CSource2EntitySystem *);
	CSource2EntitySystem();
	int GetPriority();
	bool StaticInit();
	void StaticShutdown();
	virtual ~CSource2EntitySystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};

// src/game/shared/gameentitysystem.cpp:3571
class CSource2ServerSerializers : public CGameAppSystem<ISource2ServerSerializers, 0> {
public:

private:

	CSource2ServerSerializers(CSource2ServerSerializers &);
	CSource2ServerSerializers(const CSource2ServerSerializers &);
	CSource2ServerSerializers();
	virtual const AppSystemInfo_t * GetDependencies();
	bool Initialize();
	virtual bool Connect(CreateInterfaceFn);
	virtual InitReturnVal_t Init();
	virtual int GetSerializerCount();
	virtual void GetSerializer(int, char *, int, FlattenedSerializerHandle_t *);
	~CSource2ServerSerializers();

	// vtable[6] GetDependencies
	// vtable[0] Connect
	// vtable[3] Init
	// vtable[11] GetSerializerCount
	// vtable[12] GetSerializer
	// sizeof = 64
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseEntityClassList::CBaseEntityClassList  (line 59, @0x00000000020a44a0, libserver.so)
// callers: _GLOBAL__sub_I__unity_entities_01.cpp, _GLOBAL__sub_I__unity_base_11.cpp
// globals: s_pClassLists
void __fastcall CBaseEntityClassList::CBaseEntityClassList(CBaseEntityClassList *const this)
{
  CBaseEntityClassList *v1; // rax

  v1 = s_pClassLists;
  s_pClassLists = this;
  this->m_pNextClassList = v1;
}


// CBaseEntityClassList::~CBaseEntityClassList  (line 64, @0x00000000020a44c0, libserver.so)
// callers: CEntityClassList<CPointCamera>::~CEntityClassList, CEntityClassList<CSkyCamera>::~CEntityClassList
void __fastcall CBaseEntityClassList::~CBaseEntityClassList(CBaseEntityClassList *const this)
{
  ;
}


// EntityCreationDelegate  (line 80, @0x000000000209be40, libserver.so)  // inlines: GetBool, GetInt
// globals: EntityCreationDelegate(bool)::bInCreate, EntityCreationDelegate(bool)::bAsyncAnims
void __fastcall EntityCreationDelegate(bool bStart)
{
  if ( bStart )
  {
    EntityCreationDelegate(bool)::bInCreate = 1;
  }
  else
  {
    EntityCreationDelegate(bool)::bInCreate = 0;
    if ( sv_sync_anims_spawn.m_pParent->m_Value.m_nValue != 0 )
      EntityCreationDelegate(bool)::bAsyncAnims = 1;
  }
}


// EntityPostSpawnDelegate  (line 107, @0x00000000020a61c0, libserver.so)  // inlines: CEntityHandle, FStrEq, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GlobalEntity_GetIndex, IndexToIdentity, Init, IsValid, LookupEntity, SetInPVS, String, ToCStr, _V_strcmp, operator CBaseEntity*, operator!=
// calls: GlobalEntity_GetIndex, GlobalEntity_GetState, GlobalEntity_GetMap, strcmp, CGameEntitySystem::NotifySpawn, GlobalEntity_Add, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntitySystem::QueueDestroyEntity, CEntitySystem::SetInPVS
// strings: "%s:  added global entity %d %s (%s)\n", "SV", "%s:  removing GLOBAL_DEAD global entity %d %s (%s)\n", "%s:  marking global entity dormant (current:'%s' vs last active in:'%s') %d %s (%s)\n"
// globals: CEntityHandle::gm_pEntityList, g_pGameEntitySystem
void __fastcall EntityPostSpawnDelegate(int nCount, CEntityHandle *pHandles)
{
  CEntityHandle *v2; // r12
  CEntityHandle *v3; // rbx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CBaseEntity *m_pInstance; // r14
  const char *m_pAsString; // rdi
  int Index; // eax
  int v9; // r15d
  const char *Map; // rax
  const char *mapname; // rdi
  const char *v12; // rdi
  const char *v13; // rsi
  CEntityIdentity *m_pEntity; // rax
  const char *v15; // r9
  int v16; // edx
  unsigned __int16 v17; // cx
  __int64 v18; // r8
  const char *v19; // rsi
  CEntityIdentity *v20; // rax
  const char *v21; // r9
  int v22; // edx
  unsigned __int16 v23; // cx
  __int64 v24; // r8
  const char *v25; // r11
  CEntityIdentity *v26; // rax
  const char *v27; // rsi
  int v28; // ecx
  unsigned __int16 v29; // di
  int v30; // eax
  int v31; // ecx
  const char *v32; // rax
  const char *v33; // [rsp+20h] [rbp-68h]
  const char *v34; // [rsp+28h] [rbp-60h]
  int v35; // [rsp+34h] [rbp-54h]
  SetInPVSInfo_t v36; // [rsp+40h] [rbp-48h] BYREF

  if ( nCount > 0 )
  {
    v2 = &pHandles[nCount - 1 + 1];
    v3 = pHandles;
    while ( 1 )
    {
      if ( v3->m_Index + 2 <= 1 )
        goto LABEL_3;
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
      if ( v4 == 0 )
        goto LABEL_3;
      v5 = &v4[v3->m_Index & 0x1FF];
      if ( v5 == 0 )
        goto LABEL_3;
      if ( v3->m_Index != v5->m_EHandle.m_Index )
        goto LABEL_3;
      m_pInstance = v5->m_pInstance;
      if ( v5->m_pInstance == 0 || (m_pInstance->m_pEntity->m_flags & 0x200) != 0 )
        goto LABEL_3;
      m_pAsString = m_pInstance->m_iGlobalname.u.m_pAsString;
      if ( m_pAsString != 0 )
      {
        Index = GlobalEntity_GetIndex(m_pAsString);
        v9 = Index;
        if ( Index < 0 )
        {
          v12 = "";
          if ( m_pInstance->m_iGlobalname.u.m_Id != 0 )
            v12 = m_pInstance->m_iGlobalname.u.m_pAsString;
          GlobalEntity_Add(v12, gpGlobals->mapname, GLOBALESTATE::GLOBAL_ON);
          if ( LoggingSystem_IsChannelEnabled(LOG_GLOBALSTATE, 0) != 0 )
          {
            v13 = "";
            if ( m_pInstance->m_iGlobalname.u.m_Id != 0 )
              v13 = m_pInstance->m_iGlobalname.u.m_pAsString;
            m_pEntity = m_pInstance->m_pEntity;
            v15 = "";
            if ( m_pEntity->m_designerName.u.m_Id != 0 )
              v15 = m_pEntity->m_designerName.u.m_pAsString;
            v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v17 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            v18 = 0x7FFF;
            LOWORD(v36.m_pEntity) = v17 | v36.m_pEntity & 0x8000;
            LODWORD(v36.m_pEntity) = (v16 << 15) | v36.m_pEntity & 0x7FFF;
            if ( LODWORD(v36.m_pEntity) != -1 )
              v18 = v17;
            LoggingSystem_Log(LOG_GLOBALSTATE, 0, "%s:  added global entity %d %s (%s)\n", "SV", v18, v15, v13);
          }
          goto LABEL_16;
        }
        if ( GlobalEntity_GetState(Index) != GLOBALESTATE::GLOBAL_DEAD )
        {
          Map = GlobalEntity_GetMap(v9);
          mapname = gpGlobals->mapname;
          if ( Map != mapname && strcmp(mapname, Map) != 0 && SLOBYTE(m_pInstance->m_pEntity->m_flags) >= 0 )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GLOBALSTATE, 0) != 0 )
            {
              v25 = "";
              if ( m_pInstance->m_iGlobalname.u.m_Id != 0 )
                v25 = m_pInstance->m_iGlobalname.u.m_pAsString;
              v26 = m_pInstance->m_pEntity;
              v27 = "";
              if ( v26->m_designerName.u.m_Id != 0 )
                v27 = v26->m_designerName.u.m_pAsString;
              v28 = (v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1);
              v29 = 0x7FFF;
              if ( v26->m_EHandle.m_Index != -1 )
                v29 = v26->m_EHandle.m_Index & 0x7FFF;
              v33 = v27;
              v34 = v25;
              LOWORD(v36.m_pEntity) = v29 | v36.m_pEntity & 0x8000;
              v30 = (v28 << 15) | v36.m_pEntity & 0x7FFF;
              v31 = 0x7FFF;
              LODWORD(v36.m_pEntity) = v30;
              if ( v30 != -1 )
                v31 = v29;
              v35 = v31;
              v32 = GlobalEntity_GetMap(v9);
              LoggingSystem_Log(
                LOG_GLOBALSTATE,
                0,
                "%s:  marking global entity dormant (current:'%s' vs last active in:'%s') %d %s (%s)\n",
                "SV",
                gpGlobals->mapname,
                v32,
                v35,
                v33,
                v34);
            }
            v36.m_pEntity = m_pInstance;
            v36.m_bInPVS = 0;
            CEntitySystem::SetInPVS(g_pGameEntitySystem, 1, &v36);
          }
          goto LABEL_16;
        }
        if ( LoggingSystem_IsChannelEnabled(LOG_GLOBALSTATE, 0) != 0 )
        {
          v19 = "";
          if ( m_pInstance->m_iGlobalname.u.m_Id != 0 )
            v19 = m_pInstance->m_iGlobalname.u.m_pAsString;
          v20 = m_pInstance->m_pEntity;
          v21 = "";
          if ( v20->m_designerName.u.m_Id != 0 )
            v21 = v20->m_designerName.u.m_pAsString;
          v22 = (v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1);
          v23 = 0x7FFF;
          if ( v20->m_EHandle.m_Index != -1 )
            v23 = v20->m_EHandle.m_Index & 0x7FFF;
          v24 = 0x7FFF;
          LOWORD(v36.m_pEntity) = v23 | v36.m_pEntity & 0x8000;
          LODWORD(v36.m_pEntity) = (v22 << 15) | v36.m_pEntity & 0x7FFF;
          if ( LODWORD(v36.m_pEntity) != -1 )
            v24 = v23;
          LoggingSystem_Log(
            LOG_GLOBALSTATE,
            0,
            "%s:  removing GLOBAL_DEAD global entity %d %s (%s)\n",
            "SV",
            v24,
            v21,
            v19);
        }
        CEntitySystem::QueueDestroyEntity(g_pEntitySystem, m_pInstance);
LABEL_3:
        if ( ++v3 == v2 )
          return;
      }
      else
      {
LABEL_16:
        ++v3;
        CGameEntitySystem::NotifySpawn(g_pGameEntitySystem, m_pInstance);
        if ( v3 == v2 )
          return;
      }
    }
  }
}


// CGameEntitySystem::CGameEntitySystem  (line 155, @0x00000000020eefd0, libserver.so)  // inlines: CEntityDataInstantiator, CUtlDict, CUtlHash, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ResetDbgInfo, SetCompareType, SetGrowSize, SetLessFunc, operator[], ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~IEntityDataInstantiator
// calls: CEntitySystem::CEntitySystem, operator new, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int> >, int> >::SetCount, CUtlVectorBase<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int> >::SetCount, CEntitySystem::AddDataAccessor, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int> >, int> >::SetCount, CUtlVectorBase<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int> >::SetCount, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int> >, int> >::SetCount, CUtlVectorBase<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int> >::SetCount, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int> >, int> >::SetCount, CUtlVectorBase<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int> >::SetCount, CUtlVectorBase<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int> >, CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int> >, int> >::SetCount (37 total)
// callers: CSource2EntitySystem::StaticInit
// globals: FastCaselessStringLessThan(char const* const&,char const* const&), CEntityDataInstantiator<touchlink_t>::CompareFunc(CEntityDataInstantiator<touchlink_t>::HashEntry const&,CEntityDataInstantiator<touchlink_t>::HashEntry const&), CEntityDataInstantiator<touchlink_t>::KeyFunc(CEntityDataInstantiator<touchlink_t>::HashEntry const&), CEntityDataInstantiator<groundlink_t>::CompareFunc(CEntityDataInstantiator<groundlink_t>::HashEntry const&,CEntityDataInstantiator<groundlink_t>::HashEntry cons, CEntityDataInstantiator<groundlink_t>::KeyFunc(CEntityDataInstantiator<groundlink_t>::HashEntry const&), CEntityDataInstantiator<StepSimulationData>::CompareFunc(CEntityDataInstantiator<StepSimulationData>::HashEntry const&,CEntityDataInstantiator<StepSimulationDat, CEntityDataInstantiator<StepSimulationData>::KeyFunc(CEntityDataInstantiator<StepSimulationData>::HashEntry const&), CEntityDataInstantiator<ModelScale>::CompareFunc(CEntityDataInstantiator<ModelScale>::HashEntry const&,CEntityDataInstantiator<ModelScale>::HashEntry const&) (15 total)
void __fastcall CGameEntitySystem::CGameEntitySystem(CGameEntitySystem *const this)
{
  char *v2; // r13
  __int64 i; // rbx
  __int64 v4; // rcx
  char *v5; // r13
  __int64 j; // rbx
  __int64 v7; // rcx
  char *v8; // r13
  __int64 k; // rbx
  __int64 v10; // rcx
  char *v11; // r13
  __int64 m; // rbx
  __int64 v13; // rcx
  char *v14; // r13
  __int64 n; // rbx
  __int64 v16; // rcx
  char *v17; // r13
  __int64 ii; // rbx
  __int64 v19; // rcx
  char *v20; // r13
  __int64 jj; // rbx
  __int64 v22; // rcx
  char *v23; // r13
  __int64 kk; // rbx
  __int64 v25; // rcx

  CEntitySystem::CEntitySystem(this);
  this->_vptr_IEntityResourceManifestBuilder = &off_3FF6370;
  this->m_iMaxNetworkedEntIndex = -1;
  this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  *(&stru_1A088.r_offset + this) = -1;
  this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_NumElements = 0;
  this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_pElements = 0;
  *(&stru_1A070.r_offset + this) = FastCaselessStringLessThan;
  *(&stru_1A0A0.r_offset + this) = 0;
  this->m_entityListeners.m_Memory.m_pMemory = 0;
  this->m_entityListeners.m_Memory.m_nAllocationCount = 0;
  this->m_entityListeners.m_Memory.m_nGrowSize = 0;
  *(&stru_1A0B8.r_offset + this) = 0;
  this->m_iNumEdicts = 0;
  this->m_iNonNetworkedSavedEntCount = 0;
  this->m_iNetworkedEntCount = 0;
  v2 = operator new(0x38u);
  *(v2 + 2) = 0;
  *v2 = &off_3FF61B0;
  *(v2 + 4) = CEntityDataInstantiator<touchlink_t>::CompareFunc;
  *(v2 + 2) = 0;
  *(v2 + 6) = 0;
  *(v2 + 7) = 0;
  *(v2 + 5) = CEntityDataInstantiator<touchlink_t>::KeyFunc;
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>>,int>>::SetCount(
    (v2 + 8),
    64);
  for ( i = 0; i != 1536; i += 24 )
  {
    CUtlVectorBase<CEntityDataInstantiator<touchlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry,int>>::SetCount(
      (*(v2 + 2) + i),
      0);
    v4 = i;
    *(*(v2 + 2) + v4 + 20) &= 0xC0000000;
  }
  v2[48] = 1;
  *(v2 + 13) = 63;
  CEntitySystem::AddDataAccessor(this, 1, v2);
  v5 = operator new(0x38u);
  *(v5 + 2) = 0;
  *v5 = &off_3FF61F0;
  *(v5 + 4) = CEntityDataInstantiator<groundlink_t>::CompareFunc;
  *(v5 + 2) = 0;
  *(v5 + 6) = 0;
  *(v5 + 7) = 0;
  *(v5 + 5) = CEntityDataInstantiator<groundlink_t>::KeyFunc;
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>>,int>>::SetCount(
    (v5 + 8),
    64);
  for ( j = 0; j != 1536; j += 24 )
  {
    CUtlVectorBase<CEntityDataInstantiator<groundlink_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry,int>>::SetCount(
      (*(v5 + 2) + j),
      0);
    v7 = j;
    *(*(v5 + 2) + v7 + 20) &= 0xC0000000;
  }
  v5[48] = 1;
  *(v5 + 13) = 63;
  CEntitySystem::AddDataAccessor(this, 0, v5);
  v8 = operator new(0x38u);
  *(v8 + 2) = 0;
  *v8 = &off_3FF6230;
  *(v8 + 4) = CEntityDataInstantiator<StepSimulationData>::CompareFunc;
  *(v8 + 2) = 0;
  *(v8 + 6) = 0;
  *(v8 + 7) = 0;
  *(v8 + 5) = CEntityDataInstantiator<StepSimulationData>::KeyFunc;
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>>,int>>::SetCount(
    (v8 + 8),
    64);
  for ( k = 0; k != 1536; k += 24 )
  {
    CUtlVectorBase<CEntityDataInstantiator<StepSimulationData>::HashEntry,CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry,int>>::SetCount(
      (*(v8 + 2) + k),
      0);
    v10 = k;
    *(*(v8 + 2) + v10 + 20) &= 0xC0000000;
  }
  v8[48] = 1;
  *(v8 + 13) = 63;
  CEntitySystem::AddDataAccessor(this, 2, v8);
  v11 = operator new(0x38u);
  *(v11 + 2) = 0;
  *v11 = &off_3FF6270;
  *(v11 + 4) = CEntityDataInstantiator<ModelScale>::CompareFunc;
  *(v11 + 2) = 0;
  *(v11 + 6) = 0;
  *(v11 + 7) = 0;
  *(v11 + 5) = CEntityDataInstantiator<ModelScale>::KeyFunc;
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>>,int>>::SetCount(
    (v11 + 8),
    64);
  for ( m = 0; m != 1536; m += 24 )
  {
    CUtlVectorBase<CEntityDataInstantiator<ModelScale>::HashEntry,CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry,int>>::SetCount(
      (*(v11 + 2) + m),
      0);
    v13 = m;
    *(*(v11 + 2) + v13 + 20) &= 0xC0000000;
  }
  v11[48] = 1;
  *(v11 + 13) = 63;
  CEntitySystem::AddDataAccessor(this, 3, v11);
  v14 = operator new(0x38u);
  *(v14 + 2) = 0;
  *v14 = &off_3FF62B0;
  *(v14 + 4) = CEntityDataInstantiator<CWatcherList>::CompareFunc;
  *(v14 + 2) = 0;
  *(v14 + 6) = 0;
  *(v14 + 7) = 0;
  *(v14 + 5) = CEntityDataInstantiator<CWatcherList>::KeyFunc;
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>,int>>::SetCount(
    (v14 + 8),
    64);
  for ( n = 0; n != 1536; n += 24 )
  {
    CUtlVectorBase<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>::SetCount(
      (*(v14 + 2) + n),
      0);
    v16 = n;
    *(*(v14 + 2) + v16 + 20) &= 0xC0000000;
  }
  v14[48] = 1;
  *(v14 + 13) = 63;
  CEntitySystem::AddDataAccessor(this, 4, v14);
  v17 = operator new(0x38u);
  *(v17 + 2) = 0;
  *v17 = &off_3FF62F0;
  *(v17 + 4) = CEntityDataInstantiator<physicspushlist_t>::CompareFunc;
  *(v17 + 2) = 0;
  *(v17 + 6) = 0;
  *(v17 + 7) = 0;
  *(v17 + 5) = CEntityDataInstantiator<physicspushlist_t>::KeyFunc;
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>>,int>>::SetCount(
    (v17 + 8),
    64);
  for ( ii = 0; ii != 1536; ii += 24 )
  {
    CUtlVectorBase<CEntityDataInstantiator<physicspushlist_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry,int>>::SetCount(
      (*(v17 + 2) + ii),
      0);
    v19 = ii;
    *(*(v17 + 2) + v19 + 20) &= 0xC0000000;
  }
  v17[48] = 1;
  *(v17 + 13) = 63;
  CEntitySystem::AddDataAccessor(this, 5, v17);
  v20 = operator new(0x38u);
  *(v20 + 2) = 0;
  *v20 = &off_3FF6330;
  *(v20 + 4) = CEntityDataInstantiator<vphysicsupdateai_t>::CompareFunc;
  *(v20 + 2) = 0;
  *(v20 + 6) = 0;
  *(v20 + 7) = 0;
  *(v20 + 5) = CEntityDataInstantiator<vphysicsupdateai_t>::KeyFunc;
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>>,int>>::SetCount(
    (v20 + 8),
    64);
  for ( jj = 0; jj != 1536; jj += 24 )
  {
    CUtlVectorBase<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry,int>>::SetCount(
      (*(v20 + 2) + jj),
      0);
    v22 = jj;
    *(*(v20 + 2) + v22 + 20) &= 0xC0000000;
  }
  v20[48] = 1;
  *(v20 + 13) = 63;
  CEntitySystem::AddDataAccessor(this, 6, v20);
  v23 = operator new(0x38u);
  *(v23 + 2) = 0;
  *v23 = &off_3FF62B0;
  *(v23 + 4) = CEntityDataInstantiator<CWatcherList>::CompareFunc;
  *(v23 + 2) = 0;
  *(v23 + 6) = 0;
  *(v23 + 7) = 0;
  *(v23 + 5) = CEntityDataInstantiator<CWatcherList>::KeyFunc;
  CUtlVectorBase<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>,CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>,int>>::SetCount(
    (v23 + 8),
    64);
  for ( kk = 0; kk != 1536; kk += 24 )
  {
    CUtlVectorBase<CEntityDataInstantiator<CWatcherList>::HashEntry,CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry,int>>::SetCount(
      (*(v23 + 2) + kk),
      0);
    v25 = kk;
    *(*(v23 + 2) + v25 + 20) &= 0xC0000000;
  }
  v23[48] = 1;
  *(v23 + 13) = 63;
  CEntitySystem::AddDataAccessor(this, 7, v23);
}


// CGameEntitySystem::~CGameEntitySystem  (line 169, @0x00000000020df660, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlDict<CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int>::Purge, CUtlRBTree<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CEntitySystem::~CEntitySystem, CUtlMemory<IEntityListener*, int>::Purge
// callers: CGameEntitySystem::~CGameEntitySystem
void __fastcall CGameEntitySystem::~CGameEntitySystem(CGameEntitySystem *const this)
{
  bool v2; // zf
  CUtlVectorBase<IEntityListener*,CUtlMemory<IEntityListener*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_entityListeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IEntityResourceManifestBuilder = &off_3FF6370;
  *(&stru_1A0A0.r_offset + this) = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_entityListeners.m_Memory;
    CUtlMemory<IEntityListener *,int>::Purge(&this->m_entityListeners.m_Memory);
    if ( (this->m_entityListeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IEntityListener *,int>::Purge(p_m_Memory);
  }
  CUtlDict<CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int>::Purge((&stru_1A070 + this));
  CUtlRBTree<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge((&stru_1A070 + this));
  if ( (this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements);
  CEntitySystem::~CEntitySystem(this);
}


// CGameEntitySystem::~CGameEntitySystem  (line 169, @0x00000000020df6f0, libserver.so)
// calls: CGameEntitySystem::~CGameEntitySystem, operator delete
void __fastcall CGameEntitySystem::~CGameEntitySystem(CGameEntitySystem *const this)
{
  CGameEntitySystem::~CGameEntitySystem(this);
  operator delete(this);
}


// CGameEntitySystem::BuildResourceManifest  (line 173, @0x00000000020f0120, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventBuildGameSessionManifest_t&)>, DispatchEvent<EventBuildGameSessionManifest_t>, GetVTableIndex, ~CDontUseThisGameSystem
// calls: CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, CEntitySystem::BuildResourceManifest, V_stricmp_fast, IGameSystem::DispatchEventInternal, IGameSystem::~IGameSystem, __cxa_guard_acquire, __cxa_guard_release, _Unwind_Resume
// strings: "GameSessionManifest.vrgrp"
// globals: EventBuildGameSessionManifest_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGam, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBui
void __fastcall CGameEntitySystem::BuildResourceManifest(
        CGameEntitySystem *const this,
        const char *pManifestGroupName,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest)
{
  bool IsPrecacheAllowed; // r14
  GameSystemEventId_t v9; // edi
  IEntityResourceManifest *m_pCurrentManifest; // r12
  EventBuildGameSessionManifest_t msg; // [rsp+0h] [rbp-50h] BYREF
  IGameSystem v12; // [rsp+10h] [rbp-40h] BYREF

  IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
  CBaseEntity::SetAllowPrecache(1);
  CEntitySystem::BuildResourceManifest(this, pManifestGroupName, pConfig, pResourceManifest);
  if ( V_stricmp_fast(pManifestGroupName, "GameSessionManifest.vrgrp") == 0 )
  {
    v9 = EventBuildGameSessionManifest_t::GetVTableIndex(void)::s_nComputedIndex;
    msg.m_pResourceManifest = pResourceManifest;
    m_pCurrentManifest = this->m_pCurrentManifest;
    this->m_pCurrentManifest = pResourceManifest;
    if ( v9 < 0 )
    {
      v12._vptr_IGameSystem = off_3FC3E30;
      if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::ppVTableNew == 0
        && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::ppVTableNew) != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::ppVTableNew);
      }
      v12._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::ppVTableNew;
      EventBuildGameSessionManifest_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::ppVTableNew
                                                                                 + 56))(&v12);
      v12._vptr_IGameSystem = off_3FC3E30;
      IGameSystem::~IGameSystem(&v12);
      v9 = EventBuildGameSessionManifest_t::GetVTableIndex(void)::s_nComputedIndex;
    }
    IGameSystem::DispatchEventInternal(v9, 0x39uLL, &msg);
    this->m_pCurrentManifest = m_pCurrentManifest;
  }
  CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
}


// CGameEntitySystem::BuildResourceManifest  (line 197, @0x00000000020f0260, libserver.so)
// calls: CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, CEntitySystem::BuildResourceManifest
void __fastcall CGameEntitySystem::BuildResourceManifest(
        CGameEntitySystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        int nCount,
        const EntitySpawnInfo_t *pEntities,
        const matrix3x4a_t *const vWorldOffset,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest)
{
  bool IsPrecacheAllowed; // r15

  IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
  CBaseEntity::SetAllowPrecache(1);
  CEntitySystem::BuildResourceManifest(this, hSpawnGroup, nCount, pEntities, vWorldOffset, pConfig, pResourceManifest);
  CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
}


// CGameEntitySystem::BuildResourceManifest  (line 207, @0x00000000020f02e0, libserver.so)
// calls: CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, CEntitySystem::BuildResourceManifest
void __fastcall CGameEntitySystem::BuildResourceManifest(
        CGameEntitySystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        int nCount,
        const CEntityKeyValues **pKeyValues,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest)
{
  bool IsPrecacheAllowed; // r15

  IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
  CBaseEntity::SetAllowPrecache(1);
  CEntitySystem::BuildResourceManifest(this, hSpawnGroup, nCount, pKeyValues, pConfig, pResourceManifest);
  CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
}


// CGameEntitySystem::BuildResourceManifest  (line 217, @0x00000000020d7840, libserver.so)  // inlines: AddRef, Base, CUtlMemory, CUtlVector, CUtlVectorBase, Element, EnsureCapacity, FindKeyHash, GetValue, GetValueString, Purge, Release, Remove, RemoveAll, ShiftElementsLeft, TempString, V_memmove, memmove, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGameEntitySystem::FindSpawnGroupFilter, CGameEntitySystem::ExtractClientServerSpecificEntities, V_stricmp_fast, memmove, CEntityKeyValues::~CEntityKeyValues, operator delete, CUtlMemory<const CEntityKeyValues*, int>::Purge, CUtlVectorBase<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// strings: "point_prefab"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CGameEntitySystem::BuildResourceManifest(
        CGameEntitySystem *const this,
        SpawnGroupHandle_t h,
        const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pKeyValues,
        const char *pFilterName,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pManifest)
{
  const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *p_scratchEmptyKeyValues; // rbx
  int m_Size; // r12d
  unsigned __int64 v8; // rax
  const CEntityKeyValues *v9; // rdx
  ISpawnGroupEntityFilter *SpawnGroupFilter; // r14
  int v11; // r15d
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *p_filteredKeyValues; // r13
  int v13; // ecx
  const CEntityKeyValues **m_pMemory; // rdx
  void *v15; // rsp
  const CEntityKeyValues **v16; // rcx
  int v17; // r13d
  __int64 v18; // r14
  const CEntityKeyValues *v19; // rsi
  int m_nCount; // r8d
  __int16 m_nAllocated; // di
  __int64 v22; // rax
  __int16 *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rdx
  CEntityVariant *p_m_value; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r14
  unsigned __int64 v29; // r12
  CEntityKeyValues *v30; // r13
  __int64 v34; // [rsp+10h] [rbp-A0h] BYREF
  CGameEntitySystem *thisa; // [rsp+18h] [rbp-98h]
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > scratchEmptyKeyValues; // [rsp+20h] [rbp-90h] BYREF
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > filteredKeyValues; // [rsp+40h] [rbp-70h] BYREF
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > finalKeyValues; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-38h]

  p_scratchEmptyKeyValues = pKeyValues;
  thisa = this;
  v39 = __readfsqword(0x28u);
  HIDWORD(v34) = h;
  scratchEmptyKeyValues.m_Size = 0;
  scratchEmptyKeyValues.m_Memory.m_pMemory = 0;
  scratchEmptyKeyValues.m_Memory.m_nAllocationCount = 0;
  scratchEmptyKeyValues.m_Memory.m_nGrowSize = 0;
  if ( pKeyValues != 0 )
  {
    m_Size = pKeyValues->m_Size;
    if ( pKeyValues->m_Size > 0 )
    {
      v8 = 0;
      do
      {
        v9 = p_scratchEmptyKeyValues->m_Memory.m_pMemory[v8 / 8];
        v8 += 8LL;
        ++v9->m_nRefCount;
      }
      while ( v8 != 8LL * (m_Size - 1) + 8 );
    }
  }
  else
  {
    p_scratchEmptyKeyValues = &scratchEmptyKeyValues;
    m_Size = 0;
  }
  SpawnGroupFilter = CGameEntitySystem::FindSpawnGroupFilter(thisa, pFilterName);
  filteredKeyValues.m_Size = 0;
  filteredKeyValues.m_Memory.m_pMemory = 0;
  filteredKeyValues.m_Memory.m_nAllocationCount = 0;
  filteredKeyValues.m_Memory.m_nGrowSize = 0;
  if ( SpawnGroupFilter != 0 )
  {
    v11 = p_scratchEmptyKeyValues->m_Size;
    if ( p_scratchEmptyKeyValues->m_Size > 0 )
    {
      filteredKeyValues.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v11);
      filteredKeyValues.m_Memory.m_nAllocationCount = v11;
    }
    p_filteredKeyValues = &filteredKeyValues;
    (*(SpawnGroupFilter->_vptr_ISpawnGroupEntityFilter + 2))(
      SpawnGroupFilter,
      HIDWORD(v34),
      1,
      p_scratchEmptyKeyValues,
      &filteredKeyValues);
  }
  else
  {
    p_filteredKeyValues = p_scratchEmptyKeyValues;
  }
  v13 = p_filteredKeyValues->m_Size;
  finalKeyValues.m_Size = 0;
  m_pMemory = p_filteredKeyValues->m_Memory.m_pMemory;
  finalKeyValues.m_Memory.m_nGrowSize = 0x40000000;
  finalKeyValues.m_Memory.m_nAllocationCount = v13;
  v15 = alloca(((8LL * v13 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  finalKeyValues.m_Memory.m_pMemory = (&v34 & 0xFFFFFFFFFFFFFFEFLL);
  CGameEntitySystem::ExtractClientServerSpecificEntities(thisa, &finalKeyValues, m_pMemory, v13);
  v16 = finalKeyValues.m_Memory.m_pMemory;
  v17 = finalKeyValues.m_Size - 1;
  if ( finalKeyValues.m_Size - 1 >= 0 )
  {
    v18 = v17;
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = v16[v18];
        m_nCount = v19->m_keyHashes.m_nCount;
        if ( m_nCount <= 0 )
        {
LABEL_38:
          p_m_value = &CEntityKeyValues::sm_EmptyVariant;
          if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
            break;
          goto LABEL_39;
        }
        m_nAllocated = v19->m_keyHashes.m_nAllocated;
        v22 = 0;
        while ( m_nAllocated == 0 )
        {
          if ( *(4 * v22) == -971301790 )
            goto LABEL_19;
LABEL_16:
          if ( m_nCount <= ++v22 )
            goto LABEL_38;
        }
        m_pElements = &v19->m_keyHashes.m_nAllocAllocated + 1;
        if ( m_nAllocated > 9 )
          m_pElements = v19->m_keyHashes.m_pElements;
        if ( *&m_pElements[2 * v22] != -971301790 )
          goto LABEL_16;
LABEL_19:
        v24 = v19->m_keyValues.m_nAllocated != 0 ? v19->m_keyValues.m_pElements : 0LL;
        p_m_value = &v24[v22].m_value;
        if ( p_m_value->m_type == 30 )
          break;
LABEL_39:
        --v17;
        --v18;
        if ( v17 == -1 )
          goto LABEL_28;
      }
      if ( p_m_value->m_uint64 == 0 )
        goto LABEL_39;
      if ( V_stricmp_fast(p_m_value->m_uint64, "point_prefab") == 0 )
      {
        v26 = finalKeyValues.m_Size;
        if ( finalKeyValues.m_Size - v17 - 1 > 0 )
        {
          memmove(
            &finalKeyValues.m_Memory.m_pMemory[v18],
            &finalKeyValues.m_Memory.m_pMemory[v18 + 1],
            8LL * (finalKeyValues.m_Size - v17 - 1));
          v26 = finalKeyValues.m_Size;
        }
        finalKeyValues.m_Size = v26 - 1;
      }
      --v17;
      --v18;
      v16 = finalKeyValues.m_Memory.m_pMemory;
      if ( v17 == -1 )
      {
LABEL_28:
        v27 = finalKeyValues.m_Size;
        goto LABEL_29;
      }
    }
  }
  v27 = finalKeyValues.m_Size;
LABEL_29:
  (*(thisa->_vptr_IEntityResourceManifestBuilder + 1))(thisa, HIDWORD(v34), v27, v16, pConfig, pManifest);
  if ( m_Size > 0 )
  {
    v28 = 8LL * (m_Size - 1) + 8;
    v29 = 0;
    do
    {
      while ( 1 )
      {
        v30 = p_scratchEmptyKeyValues->m_Memory.m_pMemory[v29 / 8];
        if ( --v30->m_nRefCount <= 0 )
          break;
        v29 += 8LL;
        if ( v29 == v28 )
          goto LABEL_34;
      }
      v29 += 8LL;
      CEntityKeyValues::~CEntityKeyValues(v30);
      operator delete(v30);
    }
    while ( v29 != v28 );
  }
LABEL_34:
  finalKeyValues.m_Size = 0;
  if ( (finalKeyValues.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CEntityKeyValues const*,int>::Purge(&finalKeyValues.m_Memory),
        (finalKeyValues.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    filteredKeyValues.m_Size = 0;
    if ( (filteredKeyValues.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_36;
  }
  else
  {
    CUtlMemory<CEntityKeyValues const*,int>::Purge(&finalKeyValues.m_Memory);
    filteredKeyValues.m_Size = 0;
    if ( (filteredKeyValues.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_36;
  }
  CUtlMemory<CEntityKeyValues const*,int>::Purge(&filteredKeyValues.m_Memory);
  if ( (filteredKeyValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEntityKeyValues const*,int>::Purge(&filteredKeyValues.m_Memory);
LABEL_36:
  scratchEmptyKeyValues.m_Size = 0;
  if ( (scratchEmptyKeyValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityKeyValues const*,int>::Purge(&scratchEmptyKeyValues.m_Memory);
    if ( (scratchEmptyKeyValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityKeyValues const*,int>::Purge(&scratchEmptyKeyValues.m_Memory);
  }
}


// CGameEntitySystem::BuildResourceManifest  (line 286, @0x00000000020f0350, libserver.so)
// calls: CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, CEntitySystem::BuildResourceManifest
void __fastcall CGameEntitySystem::BuildResourceManifest(
        CGameEntitySystem *const this,
        EntityResourceManifestCreationCallback_t callback,
        void *pContext,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest)
{
  bool IsPrecacheAllowed; // r12

  IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
  CBaseEntity::SetAllowPrecache(1);
  CEntitySystem::BuildResourceManifest(this, callback, pContext, pConfig, pResourceManifest);
  CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
}


// CGameEntitySystem::BuildResourceManifestForEntity  (line 296, @0x00000000020f03b0, libserver.so)
// calls: CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, CEntitySystem::BuildResourceManifestForEntity
void __fastcall CGameEntitySystem::BuildResourceManifestForEntity(
        CGameEntitySystem *const this,
        const char *pEntityDesignerName,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest)
{
  bool IsPrecacheAllowed; // r12

  IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
  CBaseEntity::SetAllowPrecache(1);
  CEntitySystem::BuildResourceManifestForEntity(this, pEntityDesignerName, pConfig, pResourceManifest);
  CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
}


// CGameEntitySystem::InvokePrecacheCallback  (line 306, @0x00000000020f0410, libserver.so)
// calls: CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, CEntitySystem::InvokePrecacheCallback
void __fastcall CGameEntitySystem::InvokePrecacheCallback(
        CGameEntitySystem *const this,
        ResourceHandle_t hResource,
        const EntitySpawnInfo_t *const info,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pResourceManifest,
        __int64 a6,
        SecondaryPrecacheMemberCallback_t callback)
{
  bool IsPrecacheAllowed; // r12

  IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
  CBaseEntity::SetAllowPrecache(1);
  CEntitySystem::InvokePrecacheCallback(this, hResource, info, pConfig, pResourceManifest, callback);
  CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
}


// CGameEntitySystem::LockResourceManifest  (line 316, @0x00000000020f0490, libserver.so)
// calls: CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, CEntitySystem::LockResourceManifest
void __fastcall CGameEntitySystem::LockResourceManifest(
        CGameEntitySystem *const this,
        bool bLock,
        CEntityResourceManifestLock *const context)
{
  bool IsPrecacheAllowed; // r15

  if ( context->m_bIsLocked != bLock )
  {
    IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
    CBaseEntity::SetAllowPrecache(bLock);
    if ( bLock )
      context->m_bPrecacheEnable = IsPrecacheAllowed;
    CEntitySystem::LockResourceManifest(this, bLock, context);
  }
}


// CGameEntitySystem::FirstEntInfo  (line 333, @0x00000000020a44d0, libserver.so)
// callers: CDOTAGamerules::ClientDisconnected, CDOTAPlayer::PrepareForFullUpdate
CEntityIdentity *__fastcall CGameEntitySystem::FirstEntInfo(const CGameEntitySystem *const this)
{
  return this->m_EntityList.m_pFirstActiveEntity;
}


// CGameEntitySystem::NextEntInfo  (line 338, @0x00000000020a44e0, libserver.so)
// callers: CDOTAGamerules::ClientDisconnected, CDOTAPlayer::PrepareForFullUpdate
CEntityIdentity *__fastcall CGameEntitySystem::NextEntInfo(const CGameEntitySystem *const this, CEntityIdentity *pInfo)
{
  return pInfo->m_pNext;
}


// CGameEntitySystem::GetEntInfoPtr  (line 343, @0x00000000020a44f0, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CEntityIdentity*
// callers: CGameEntitySystem::NextEnt
// globals: CEntityHandle::gm_pEntityList
CEntityIdentity *__fastcall CGameEntitySystem::GetEntInfoPtr(
        const CGameEntitySystem *const this,
        const CBaseHandle *const hEnt)
{
  uint32 v2; // ecx
  unsigned __int16 v3; // dx
  int v4; // esi
  int v5; // edx
  CEntityIdentity *result; // rax

  v2 = hEnt->m_Index >> 15;
  if ( hEnt->m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = hEnt->m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (v2 << 15) | v3 & 0x7FFF;
  result = 0;
  if ( (v5 + 2) > 1 )
  {
    result = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v4 >> 9];
    if ( result != 0 )
    {
      result += v4 & 0x1FF;
      if ( result != 0 && v5 != result->m_EHandle.m_Index )
        return 0;
    }
  }
  return result;
}


// CGameEntitySystem::CleanupDeleteList  (line 349, @0x00000000020a4590, libserver.so)
// calls: CPhysicsGameSystem::OnBatchClear, CEntitySystem::ExecuteQueuedDeletion
// callers: CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink, CSource2Server::GameFrame, Physics_RunThinkFunctions, CChangeLevel::ChangeLevelNow
void __fastcall CGameEntitySystem::CleanupDeleteList(CGameEntitySystem *const this)
{
  if ( g_pPhysicsGameSystem != 0 )
    CPhysicsGameSystem::OnBatchClear(g_pPhysicsGameSystem);
  CEntitySystem::ExecuteQueuedDeletion(this, 1);
}


// CGameEntitySystem::AddListenerEntity  (line 363, @0x00000000020d6de0, libserver.so)  // inlines: AddToTail, CopyConstruct<IEntityListener*>, Element, GrowMemory, operator[]
// calls: CUtlVectorBase<IEntityListener*, CUtlMemory<IEntityListener*, int> >::Find, CUtlMemory<IEntityListener*, int>::Grow
// callers: CAimTargetManager::GameActivate, CEntityTouchManager::GameActivate, CNotifyManager::GameActivate, CGameEntitySystem::SpawnLoadingEntities, CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses, CLogicNavigation::TurnOn, CLogicNavigation::Activate, CPhysSaveRestoreBlockHandler::PreRestore, CDOTA_UnitFilterCache::GameInit
void __fastcall CGameEntitySystem::AddListenerEntity(CGameEntitySystem *const this, IEntityListener *pListener)
{
  __int64 v3; // r12
  int v4; // eax
  IEntityListener **v5; // rax
  IEntityListener *pListenera; // [rsp+8h] [rbp-18h] BYREF

  pListenera = pListener;
  if ( CUtlVectorBase<IEntityListener *,CUtlMemory<IEntityListener *,int>>::Find((&stru_1A0A0 + this), &pListenera) < 0 )
  {
    v3 = *(&stru_1A0A0.r_offset + this);
    v4 = *(&stru_1A0A0.r_offset + this);
    if ( v3 == this->m_entityListeners.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<IEntityListener *,int>::Grow(&this->m_entityListeners.m_Memory, 1);
      v4 = *(&stru_1A0A0.r_offset + this);
    }
    *(&stru_1A0A0.r_offset + this) = v4 + 1;
    v5 = &this->m_entityListeners.m_Memory.m_pMemory[v3];
    if ( v5 != 0 )
      *v5 = pListenera;
  }
}


// CGameEntitySystem::RemoveListenerEntity  (line 373, @0x00000000020cda60, libserver.so)
// calls: CUtlVectorBase<IEntityListener*, CUtlMemory<IEntityListener*, int> >::FindAndRemove
// callers: CAimTargetManager::GameDeactivate, CEntityTouchManager::GameDeactivate, CNotifyManager::GameDeactivate, CLogicNavigation::UpdateOnRemove, CLogicNavigation::TurnOff, CPhysSaveRestoreBlockHandler::PostRestore, CDOTA_UnitFilterCache::GameShutdown
void __fastcall CGameEntitySystem::RemoveListenerEntity(CGameEntitySystem *const this, IEntityListener *pListener)
{
  IEntityListener *pListenera; // [rsp+8h] [rbp-8h] BYREF

  pListenera = pListener;
  CUtlVectorBase<IEntityListener *,CUtlMemory<IEntityListener *,int>>::FindAndRemove(
    &this->m_entityListeners,
    &pListenera);
}


// CGameEntitySystem::NumberOfEntities  (line 378, @0x00000000020a45d0, libserver.so)
// callers: CMultiplayRules::FlWeaponTryRespawn, DOTA_ServerHasEntitySpace
int __fastcall CGameEntitySystem::NumberOfEntities(
        const CGameEntitySystem *const this,
        bool bIncludeNonNetworkableSavedEntities)
{
  int result; // eax

  result = this->m_iNetworkedEntCount;
  if ( bIncludeNonNetworkableSavedEntities )
    result += this->m_iNonNetworkedSavedEntCount;
  return result;
}


// CGameEntitySystem::NextEnt  (line 386, @0x00000000020a45f0, libserver.so)  // inlines: GetInstance
// calls: CGameEntitySystem::GetEntInfoPtr
// callers: ent_find, ent_remove_all, script_reload, CScriptEntityIterator::First, ent_remove, CScriptEntityIterator::Next, report_touchlinks, AimTarget_ForceRepopulateList, prop_debug, CBaseAnimatingController::UpdateGameAnimations, CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink, report_entities (31 total)
CBaseEntity *__fastcall CGameEntitySystem::NextEnt(CGameEntitySystem *const this, CBaseEntity *pCurrentEnt)
{
  CEntityIdentity *EntInfoPtr; // rax
  CEntityIdentity *m_pNext; // rdx
  CBaseEntity *result; // rax
  CBaseHandle hEnt; // [rsp+0h] [rbp-20h] BYREF

  if ( pCurrentEnt != 0 )
  {
    (*(pCurrentEnt->_vptr_IHandleEntity + 3))(&hEnt);
    EntInfoPtr = CGameEntitySystem::GetEntInfoPtr(this, &hEnt);
    if ( EntInfoPtr != 0 )
    {
      m_pNext = EntInfoPtr->m_pNext;
      goto LABEL_5;
    }
  }
  else
  {
    m_pNext = this->m_EntityList.m_pFirstActiveEntity;
LABEL_5:
    while ( m_pNext != 0 )
    {
      result = m_pNext->m_pInstance;
      if ( m_pNext->m_pInstance != 0 )
        return result;
      m_pNext = m_pNext->m_pNext;
    }
  }
  return 0;
}


// CSpawnGroupEntityFilterRegistrar::CSpawnGroupEntityFilterRegistrar  (line 418, @0x00000000020a4670, libserver.so)
// callers: _GLOBAL__sub_I__unity_dota_03.cpp, _GLOBAL__sub_I__unity_dota_05.cpp
// globals: CSpawnGroupEntityFilterRegistrar::sm_pFirst
void __fastcall CSpawnGroupEntityFilterRegistrar::CSpawnGroupEntityFilterRegistrar(
        CSpawnGroupEntityFilterRegistrar *const this,
        const char *pName,
        ISpawnGroupEntityFilter *pFilter,
        SpawnGroupEntityFilterType_t type)
{
  CSpawnGroupEntityFilterRegistrar *v4; // rax

  this->m_pFilter = pFilter;
  v4 = CSpawnGroupEntityFilterRegistrar::sm_pFirst;
  this->m_pName = pName;
  this->m_nFilterType = type;
  CSpawnGroupEntityFilterRegistrar::sm_pFirst = this;
  this->m_pNext = v4;
}


// CSpawnGroupEntityFilterRegistrar::RegisterSpawnGroupEntityFilters  (line 425, @0x00000000020ed560, libserver.so)
// calls: CGameEntitySystem::RegisterSpawnGroupEntityFilter
// callers: CSource2EntitySystem::StaticInit
// globals: CSpawnGroupEntityFilterRegistrar::sm_pFirst, g_pGameEntitySystem
void __cdecl CSpawnGroupEntityFilterRegistrar::RegisterSpawnGroupEntityFilters()
{
  CSpawnGroupEntityFilterRegistrar *i; // rbx

  for ( i = CSpawnGroupEntityFilterRegistrar::sm_pFirst; i != 0; i = i->m_pNext )
    CGameEntitySystem::RegisterSpawnGroupEntityFilter(g_pGameEntitySystem, i->m_pName, i->m_pFilter, i->m_nFilterType);
}


// CGameEntitySystem::RegisterSpawnGroupEntityFilter  (line 433, @0x00000000020ed3e0, libserver.so)  // inlines: Element, Find, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, operator(), operator[], strcpy
// calls: CUtlRBTree<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find, CUtlRBTree<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent, strcpy
// callers: Script_RegisterSpawnGroupFilterProxy, CSpawnGroupEntityFilterRegistrar::RegisterSpawnGroupEntityFilters
void __fastcall CGameEntitySystem::RegisterSpawnGroupEntityFilter(
        CGameEntitySystem *const this,
        const char *pName,
        ISpawnGroupEntityFilter *pFilter,
        SpawnGroupEntityFilterType_t type)
{
  int v7; // eax
  __int64 v8; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v9; // rdx
  char *v10; // rax
  int v11; // r12d
  char v12; // cl
  int v13; // eax
  __int64 v14; // rbx
  int m_Right; // eax
  bool v16; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  char *v18; // rax
  CUtlRBTree<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int> > *v19; // [rsp+8h] [rbp-68h]
  bool isLeft; // [rsp+10h] [rbp-60h]
  CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+20h] [rbp-50h] BYREF

  if ( pName != 0 )
  {
    search.key = pName;
    v19 = (&stru_1A070 + this);
    v7 = CUtlRBTree<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
           (&stru_1A070 + this),
           &search);
    if ( v7 != -1 )
    {
      v8 = v7;
      v9 = &this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_pMemory[v8];
      if ( v9->m_Data.elem.m_nType >= type )
        return;
      goto LABEL_4;
    }
    v18 = (**g_pMemAlloc)(g_pMemAlloc, strlen(pName) + 1);
    v10 = strcpy(v18, pName);
  }
  else
  {
    v10 = 0;
    v19 = (&stru_1A070 + this);
  }
  v11 = *(&stru_1A088.r_offset + this);
  search.key = v10;
  if ( v11 == -1 )
  {
    v12 = 0;
  }
  else
  {
    while ( 1 )
    {
      v16 = (*(&stru_1A070.r_offset + this))(&search) == 0;
      m_pMemory = this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_pMemory;
      if ( v16 )
      {
        m_Right = m_pMemory[v11].m_Right;
        v12 = 0;
      }
      else
      {
        m_Right = m_pMemory[v11].m_Left;
        v12 = 1;
      }
      if ( m_Right == -1 )
        break;
      v11 = m_Right;
    }
  }
  isLeft = v12;
  v13 = CUtlRBTree<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          v19,
          &search);
  v14 = v13;
  CUtlRBTree<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    v19,
    v13,
    v11,
    isLeft);
  ++this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_NumElements;
  v8 = v14;
  v9 = &this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_pMemory[v14];
LABEL_4:
  v9->m_Data.elem.m_pFilter = pFilter;
  this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem.m_nType = type;
}


// CGameEntitySystem::RemoveSpawnGroupEntityFilter  (line 454, @0x00000000020ed5a0, libserver.so)  // inlines: Element, Find, FreeNode, Key, Remove, RemoveAt, SetLeftChild, SetRightChild, operator[]
// calls: CGameEntitySystem::GetSpawnGroupEntityFilter, CUtlRBTree<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find, CUtlRBTree<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Unlink
// callers: Script_RemoveSpawnGroupFilterProxy
ISpawnGroupEntityFilter *__fastcall CGameEntitySystem::RemoveSpawnGroupEntityFilter(
        CGameEntitySystem *const this,
        const char *pName)
{
  ISpawnGroupEntityFilter *SpawnGroupEntityFilter; // r14
  int v5; // eax
  int v6; // r12d
  __int64 v7; // r13
  CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+0h] [rbp-50h] BYREF

  SpawnGroupEntityFilter = CGameEntitySystem::GetSpawnGroupEntityFilter(this, pName);
  if ( pName != 0 )
  {
    search.key = pName;
    v5 = CUtlRBTree<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
           (&stru_1A070 + this),
           &search);
    v6 = v5;
    if ( v5 != -1 )
    {
      v7 = v5;
      (*(*g_pMemAlloc + 16LL))(
        g_pMemAlloc,
        this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data.key);
      CUtlRBTree<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Unlink(
        (&stru_1A070 + this),
        v6);
      this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Left = v6;
      this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Right = this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_FirstFree;
      --this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_NumElements;
      this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_FirstFree = v6;
    }
  }
  return SpawnGroupEntityFilter;
}


// CGameEntitySystem::GetSpawnGroupEntityFilter  (line 462, @0x00000000020d6ee0, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find
// callers: CGameEntitySystem::RemoveSpawnGroupEntityFilter
ISpawnGroupEntityFilter *__fastcall CGameEntitySystem::GetSpawnGroupEntityFilter(
        CGameEntitySystem *const this,
        const char *pName)
{
  int v3; // eax
  CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t v5; // [rsp-38h] [rbp-38h] BYREF

  if ( pName == 0 )
    return 0;
  v5.key = pName;
  v3 = CUtlRBTree<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
         (&stru_1A070 + this),
         &v5);
  if ( v3 == -1 )
    return 0;
  else
    return this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem.m_pFilter;
}


// CGameEntitySystem::GetSpawnGroupEntityFilterName  (line 471, @0x00000000020a46a0, libserver.so)  // inlines: GetElementName, IsIdxValid, IsValidIndex, LeftChild, operator[]
const char *__fastcall CGameEntitySystem::GetSpawnGroupEntityFilterName(
        CGameEntitySystem *const this,
        ISpawnGroupEntityFilter *pFilter)
{
  int m_nAllocationCount; // r9d
  __int64 v3; // rdx
  __int64 v4; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v5; // r8

  m_nAllocationCount = this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount <= 0 )
    return 0;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    if ( m_nAllocationCount > v4 && this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_LastAlloc.index >= v4 )
    {
      v5 = &this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_pMemory[v3];
      if ( v5->m_Left != v4 && v5->m_Data.elem.m_pFilter == pFilter )
        break;
    }
    ++v4;
    ++v3;
    if ( m_nAllocationCount <= v4 )
      return 0;
  }
  return v5->m_Data.key;
}


// CGameEntitySystem::IsEntityPtr  (line 487, @0x00000000020a4700, libserver.so)
// callers: CPhysObjSaveRestoreOps::Save
bool __fastcall CGameEntitySystem::IsEntityPtr(CGameEntitySystem *const this, void *pTest)
{
  CEntityIdentity *m_pFirstActiveEntity; // rax

  if ( pTest == 0 )
    return 0;
  m_pFirstActiveEntity = this->m_EntityList.m_pFirstActiveEntity;
  if ( m_pFirstActiveEntity == 0 )
    return 0;
  while ( pTest != m_pFirstActiveEntity->m_pInstance )
  {
    m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
    if ( m_pFirstActiveEntity == 0 )
      return 0;
  }
  return 1;
}


// CSpawnGroupCompletionCallbackGameSystem::~CSpawnGroupCompletionCallbackGameSystem  (line 507, @0x0000000002119950, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t, CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t, int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t, int>::Purge
void __fastcall CSpawnGroupCompletionCallbackGameSystem::~CSpawnGroupCompletionCallbackGameSystem(
        CSpawnGroupCompletionCallbackGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF6450;  // vptr: CSpawnGroupCompletionCallbackGameSystem
  CUtlVectorBase<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t,CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t,int>>::RemoveAll(&this->m_listenForSpawnGroup);
  if ( (this->m_listenForSpawnGroup.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t,int>::Purge(&this->m_listenForSpawnGroup.m_Memory);
    if ( (this->m_listenForSpawnGroup.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t,int>::Purge(&this->m_listenForSpawnGroup.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CSpawnGroupCompletionCallbackGameSystem::~CSpawnGroupCompletionCallbackGameSystem  (line 507, @0x00000000021199b0, libserver.so)  // inlines: Purge, ~CAutoGameSystem, ~CSpawnGroupCompletionCallbackGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t, CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t, int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t, int>::Purge
void __fastcall CSpawnGroupCompletionCallbackGameSystem::~CSpawnGroupCompletionCallbackGameSystem(
        CSpawnGroupCompletionCallbackGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF6450;  // vptr: CSpawnGroupCompletionCallbackGameSystem
  CUtlVectorBase<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t,CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t,int>>::RemoveAll(&this->m_listenForSpawnGroup);
  if ( (this->m_listenForSpawnGroup.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t,int>::Purge(&this->m_listenForSpawnGroup.m_Memory);
    if ( (this->m_listenForSpawnGroup.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t,int>::Purge(&this->m_listenForSpawnGroup.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CSpawnGroupCompletionCallbackGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 509, @0x00000000020f1420, libserver.so)
void __fastcall CSpawnGroupCompletionCallbackGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CSpawnGroupCompletionCallbackGameSystem *const this)
{
  ;
}


// CSpawnGroupCompletionCallbackGameSystem::DoesGameSystemReallocate  (line 509, @0x00000000020f1430, libserver.so)
// globals: CSpawnGroupCompletionCallbackGameSystem::sm_Factory
bool __fastcall CSpawnGroupCompletionCallbackGameSystem::DoesGameSystemReallocate(
        const CSpawnGroupCompletionCallbackGameSystem *const this)
{
  return (*(CSpawnGroupCompletionCallbackGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CSpawnGroupCompletionCallbackGameSystem::sm_Factory);
}


// CSpawnGroupCompletionCallbackGameSystem::SetGameSystemGlobalPtrs  (line 509, @0x00000000020f1450, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CSpawnGroupCompletionCallbackGameSystem::sm_Factory
void __fastcall CSpawnGroupCompletionCallbackGameSystem::SetGameSystemGlobalPtrs(
        CSpawnGroupCompletionCallbackGameSystem *const this,
        void *pValue)
{
  if ( CSpawnGroupCompletionCallbackGameSystem::sm_Factory != 0 )
    (*(CSpawnGroupCompletionCallbackGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CSpawnGroupCompletionCallbackGameSystem::sm_Factory,
      pValue);
}


// CSpawnGroupCompletionCallbackGameSystem::PostSpawnGroupLoad  (line 523, @0x0000000002119bc0, libserver.so)  // inlines: AddMultipleToTail, CEntityHandle, Construct<CEntityHandle>, CopyConstruct<CEntityHandle>, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, GrowVector, IndexToIdentity, InsertMultipleBefore, IsValid, LookupEntity, Release, ShiftElementsRight, operator CEntityInstance*, operator(), operator[]
// calls: CUtlMemory<CEntityHandle, int>::Grow, CUtlVectorBase<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t, CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t, int> >::FastRemove, CEntityKeyValues::~CEntityKeyValues, operator delete
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSpawnGroupCompletionCallbackGameSystem::PostSpawnGroupLoad(
        CSpawnGroupCompletionCallbackGameSystem *const this,
        const EventPostSpawnGroupLoad_t *const msg)
{
  __int64 v2; // r12
  SpawnGroupHandle_t m_SpawnGroupHandle; // r15d
  char *v5; // rbx
  SpawnGroupHandle_t v6; // eax
  __int64 v7; // rsi
  int v8; // eax
  unsigned __int64 m_Index_low; // r8
  CEntityHandle *m_pMemory; // r9
  int v11; // r13d
  CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *p_m_EntityList; // r14
  int v13; // r13d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r15
  CEntityIdentity *v18; // rcx
  CEntityIdentity *v19; // rcx
  unsigned __int16 *v20; // r11
  int v21; // eax
  __int64 v22; // rsi
  CEntityHandle *v23; // rax
  __int64 v24; // r10
  __int64 v25; // rdi
  CEntityIdentity *v26; // rcx
  char *v27; // rcx
  int v28; // esi
  int v29; // eax
  __int64 v30; // rax
  __int64 i; // rcx
  uint32 *v32; // rsi
  unsigned int *v33; // r8
  __int64 v34; // r14
  __int64 v35; // r15
  CEntityIdentity *v36; // rcx
  CEntityIdentity *v37; // rcx
  unsigned __int16 *v38; // rdx
  int v39; // eax
  char *v40; // rax
  _QWORD *v41; // rdi
  __int64 v42; // r14
  char *j; // r12
  CEntityKeyValues *v44; // rbx
  char *v46; // rax
  __int64 v47; // rcx
  __int64 *v48; // rdi
  int v49; // ecx
  _DWORD *v50; // rsi
  CEntityHandle *v51; // [rsp+8h] [rbp-58h]
  int v52; // [rsp+10h] [rbp-50h]
  __int64 v53; // [rsp+10h] [rbp-50h]
  unsigned int v54; // [rsp+18h] [rbp-48h]
  int m_Size; // [rsp+1Ch] [rbp-44h]
  int v56; // [rsp+1Ch] [rbp-44h]
  int callbackEntities; // [rsp+28h] [rbp-38h]
  const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *callbackEntitiesa; // [rsp+28h] [rbp-38h]

  v2 = 0;
  m_Size = this->m_listenForSpawnGroup.m_Size;
  if ( m_Size <= 0 )
    return;
  callbackEntities = 0;
  while ( 1 )
  {
    m_SpawnGroupHandle = msg->m_SpawnGroupHandle;
    v5 = this->m_listenForSpawnGroup.m_Memory.m_pMemory + v2;
    if ( m_SpawnGroupHandle != 0 )
      break;
LABEL_8:
    ++callbackEntities;
    v2 += 88;
    if ( callbackEntities == m_Size )
      return;
  }
  if ( m_SpawnGroupHandle != *v5 )
  {
    while ( 1 )
    {
      v6 = (*(g_pSpawnGroupMgr->_vptr_IGameSpawnGroupMgr + 10))(g_pSpawnGroupMgr, m_SpawnGroupHandle);
      m_SpawnGroupHandle = v6;
      if ( v6 == 0 )
        goto LABEL_8;
      if ( *v5 == v6 )
      {
        v7 = msg->m_SpawnGroupHandle;
        goto LABEL_11;
      }
    }
  }
  v7 = m_SpawnGroupHandle;
LABEL_11:
  v8 = *(v5 + 20) + (*(g_pSpawnGroupMgr->_vptr_IGameSpawnGroupMgr + 11))(g_pSpawnGroupMgr, v7);
  *(v5 + 20) = v8;
  if ( v8 <= 0 )
    goto LABEL_13;
  m_Index_low = msg->m_EntityList.m_Size;
  m_pMemory = msg->m_EntityList.m_Memory.m_pMemory;
  v11 = *(v5 + 14);
  if ( m_Index_low == 0 )
    goto LABEL_13;
  v28 = *(v5 + 18);
  v29 = m_Index_low + v11;
  if ( m_Index_low + v11 > v28 )
  {
    v51 = msg->m_EntityList.m_Memory.m_pMemory;
    v54 = msg->m_EntityList.m_Size;
    v52 = m_Index_low + v11;
    CUtlMemory<CEntityHandle,int>::Grow(v5 + 4, v29 - v28);
    m_pMemory = v51;
    m_Index_low = v54;
    v29 = v52;
  }
  *(v5 + 14) = v29;
  v30 = 4LL * v11;
  if ( m_pMemory != 0 )
  {
    for ( i = 0; m_Index_low > i; v30 += 4 )
    {
      v32 = (*(v5 + 8) + v30);
      if ( v32 != 0 )
        *v32 = m_pMemory[i].m_Index;
      ++i;
    }
    goto LABEL_42;
  }
  v49 = 0;
  if ( m_Index_low <= 0 )
  {
LABEL_42:
    v8 = *(v5 + 20);
    goto LABEL_13;
  }
  do
  {
    v50 = (*(v5 + 8) + v30);
    if ( v50 != 0 )
      *v50 = -1;
    ++v49;
    v30 += 4;
  }
  while ( m_Index_low > v49 );
  v8 = *(v5 + 20);
LABEL_13:
  if ( msg->m_SpawnGroupHandle != m_SpawnGroupHandle )
    *(v5 + 20) = --v8;
  if ( v8 > 0 )
    goto LABEL_8;
  p_m_EntityList = &msg->m_EntityList;
  v13 = callbackEntities;
  if ( *(v5 + 14) != 0 )
    p_m_EntityList = (v5 + 56);
  v14 = *(v5 + 8);
  v56 = *(v5 + 2);
  callbackEntitiesa = p_m_EntityList;
  if ( v14 > 0 )
  {
    v15 = *(v5 + 5);
    v16 = 0;
    v17 = 56 * ((v14 - 1) + 1LL);
    do
    {
      v20 = (v15 + v16);
      v21 = *(v15 + v16);
      if ( v21 == -1
        || v21 != -2
        && (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v20 >> 9) & 0x3F]) != 0
        && (v19 = &v18[*v20 & 0x1FF]) != 0
        && v21 == v19->m_EHandle.m_Index
        && v19->m_pInstance != 0 )
      {
        v22 = *(v20 + 1);
        if ( callbackEntitiesa->m_Size > 0 )
        {
          v23 = callbackEntitiesa->m_Memory.m_pMemory;
          v24 = &v23[callbackEntitiesa->m_Size - 1 + 1];
          while ( 1 )
          {
            v25 = 0;
            if ( v23->m_Index + 2 > 1 )
            {
              m_Index_low = LOWORD(v23->m_Index);
              v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
              if ( v26 != 0 )
              {
                m_Index_low = 120 * (m_Index_low & 0x1FF);
                v27 = v26 + m_Index_low;
                if ( v27 != 0 && v23->m_Index == *(v27 + 4) )
                  v25 = *v27;
              }
            }
            if ( v22 == v25 )
              break;
            if ( ++v23 == v24 )
              goto LABEL_66;
          }
          v46 = *(v20 + 4);
          v47 = *(v20 + 5);
          v48 = (v47 + *(v20 + 3));
          if ( (v46 & 1) != 0 )
          {
            v47 = *v48;
            v46 = *&v46[*v48 - 1];
          }
          (v46)(v48, v22, *(v20 + 2), v47, m_Index_low, CEntityHandle::gm_pEntityList);
        }
LABEL_66:
        v5 = this->m_listenForSpawnGroup.m_Memory.m_pMemory + v2;
        v15 = *(v5 + 5);
      }
      v16 += 56;
    }
    while ( v16 != v17 );
    v53 = v2;
    v42 = 0;
    for ( j = v5; ; v15 = *(j + 5) )
    {
      v44 = *(v15 + v42 + 16);
      if ( v44 != 0 && --v44->m_nRefCount <= 0 )
      {
        CEntityKeyValues::~CEntityKeyValues(v44);
        operator delete(v44);
      }
      v42 += 56;
      if ( v42 == v17 )
        break;
    }
    v5 = j;
    v2 = v53;
  }
  if ( v56 > 0 )
  {
    v33 = v5;
    v34 = 0;
    v35 = 8 * (5LL * (v56 - 1) + 5);
    do
    {
      while ( 1 )
      {
        v38 = (*(v33 + 2) + v34);
        v39 = *v38;
        if ( *v38 == -1 )
          break;
        if ( v39 != -2 )
        {
          v36 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v38 >> 9) & 0x3F];
          if ( v36 != 0 )
          {
            v37 = &v36[*v38 & 0x1FF];
            if ( v37 != 0 && v39 == v37->m_EHandle.m_Index && v37->m_pInstance != 0 )
              break;
          }
        }
        v34 += 40;
        if ( v34 == v35 )
          goto LABEL_56;
      }
      v40 = *(v38 + 2);
      v41 = (*(v38 + 3) + *(v38 + 1));
      if ( (v40 & 1) != 0 )
        v40 = *&v40[*v41 - 1];
      v34 += 40;
      (v40)(v41, *v33, callbackEntitiesa);
      v33 = (&this->m_listenForSpawnGroup.m_Memory.m_pMemory->m_hSpawnGroup + v2);
    }
    while ( v34 != v35 );
  }
LABEL_56:
  CUtlVectorBase<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t,CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t,int>>::FastRemove(
    &this->m_listenForSpawnGroup,
    v13);
}


// CSpawnGroupCompletionCallbackGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 737, @0x00000000020a4740, libserver.so)
void __cdecl CSpawnGroupCompletionCallbackGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CGameEntitySystem::ListenForSpawnGroupToFinish  (line 741, @0x00000000020d7240, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlVector, CUtlVectorBase, ClosurePtr, Construct<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupCompletionDelegateInfo_t>, Construct<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t>, CopyFrom<FastDelegate2<unsigned int, const CUtlVector<CEntityHandle>&, void> >, Element, FastDelegate2, FindOrAddSpawnGroupListener, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, ListenForSpawnGroupToFinish, Set, SetMementoFrom, SpawnGroupCompletionDelegateInfo_t, SpawnGroupFinishListener_t, operator=, operator[]
// calls: CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupCompletionDelegateInfo_t, int>::Grow, CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t, int>::Grow
// callers: CInfoWorldLayer::SpawnLayerEntityLump, CResourcePrecacher::DispatchPrecache, Script_SpawnEntityListFromTableAsynchronous, CPointTemplate::ListenForSpawnGroupToFinish, CreateInstanceFromLump, DOTA_PrecacheItemByNameAsync, CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::AddSpawnGroupCompletionCallback
// globals: g_pSpawnGroupCompletionSystem
__int64 __fastcall CGameEntitySystem::ListenForSpawnGroupToFinish(
        CGameEntitySystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        CBaseEntity *pListener,
        __int64 *a4)
{
  CSpawnGroupCompletionCallbackGameSystem *v5; // r13
  __int64 v6; // r8
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 m_Size; // rbx
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t *m_pMemory; // rsi
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t *v11; // rcx
  int v12; // eax
  int v13; // eax
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rax
  CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupCompletionDelegateInfo_t,int> *v18; // rbx
  __int64 v19; // r12
  int m_nAllocationCount; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v24; // eax
  __int16 v25; // si
  __int64 result; // rax
  CBaseEntity *v27; // [rsp+8h] [rbp-48h]
  CBaseEntity *pListenerb; // [rsp+10h] [rbp-40h]
  CBaseEntity *pListenera; // [rsp+10h] [rbp-40h]
  __int64 v30; // [rsp+18h] [rbp-38h]
  __int64 v31; // [rsp+18h] [rbp-38h]

  v5 = g_pSpawnGroupCompletionSystem;
  v6 = a4[1];
  v7 = a4[2];
  v8 = *a4;
  m_Size = g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Memory.m_pMemory;
    if ( hSpawnGroup != m_pMemory->m_hSpawnGroup )
    {
      v11 = g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Memory.m_pMemory;
      v12 = 0;
      while ( ++v12 != m_Size )
      {
        ++v11;
        if ( hSpawnGroup == v11->m_hSpawnGroup )
          goto LABEL_13;
      }
      goto LABEL_6;
    }
    v12 = 0;
LABEL_13:
    v16 = 88LL * v12;
    goto LABEL_14;
  }
  if ( m_Size != 0 )
  {
    m_pMemory = g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Memory.m_pMemory;
    v12 = 0;
    goto LABEL_13;
  }
LABEL_6:
  v13 = g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Size;
  if ( m_Size == g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Memory.m_nAllocationCount )
  {
    pListenera = pListener;
    v31 = v6;
    CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t,int>::Grow(
      &g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Memory,
      1);
    v13 = v5->m_listenForSpawnGroup.m_Size;
    pListener = pListenera;
    v6 = v31;
  }
  v14 = 0;
  v5->m_listenForSpawnGroup.m_Size = v13 + 1;
  v15 = m_Size;
  v16 = 88 * m_Size;
  v17 = &v5->m_listenForSpawnGroup.m_Memory.m_pMemory[m_Size];
  if ( v17 != 0 )
  {
    *(v17 + 8) = 0;
    *(v17 + 16) = 0;
    *(v17 + 24) = 0;
    *(v17 + 28) = 0;
    *(v17 + 32) = 0;
    *(v17 + 40) = 0;
    *(v17 + 48) = 0;
    *(v17 + 52) = 0;
    *(v17 + 56) = 0;
    *(v17 + 64) = 0;
    *(v17 + 72) = 0;
    *(v17 + 76) = 0;
    v14 = &v5->m_listenForSpawnGroup.m_Memory.m_pMemory[v15];
  }
  v14->m_hSpawnGroup = hSpawnGroup;
  v5->m_listenForSpawnGroup.m_Memory.m_pMemory[v15].m_nSpawnGroupRefCount = 0;
  m_pMemory = v5->m_listenForSpawnGroup.m_Memory.m_pMemory;
LABEL_14:
  v18 = (m_pMemory + v16);
  v19 = *(&m_pMemory->m_completionDelegates.m_Size + v16);
  m_nAllocationCount = *(&m_pMemory->m_completionDelegates.m_Size + v16);
  if ( v19 == *(&m_pMemory->m_completionDelegates.m_Memory.m_nAllocationCount + v16) )
  {
    v27 = pListener;
    pListenerb = v16;
    v30 = v6;
    CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupCompletionDelegateInfo_t,int>::Grow(v18 + 1, 1);
    m_nAllocationCount = v18->m_nAllocationCount;
    pListener = v27;
    v16 = pListenerb;
    v6 = v30;
  }
  v18->m_nAllocationCount = m_nAllocationCount + 1;
  v21 = &v18[1].m_pMemory[v19];
  if ( v21 != 0 )
  {
    *v21 = -1;
    *(v21 + 8) = 0;
    *(v21 + 16) = 0;
    *(v21 + 24) = 0;
  }
  v22 = &(*(&v5->m_listenForSpawnGroup.m_Memory.m_pMemory->m_completionDelegates.m_Memory.m_pMemory + v16))[v19];
  if ( pListener != 0 && (m_pEntity = pListener->m_pEntity) != 0 )
  {
    v24 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v25 = 0x7FFF;
    else
      v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    *v22 = v25 | *v22 & 0x8000;
    *v22 = (v24 << 15) | *v22 & 0x7FFF;
  }
  else
  {
    *v22 = -1;
  }
  *(v22 + 16) = v6;
  *(v22 + 24) = v7;
  *(v22 + 8) = v8;
  result = v5->m_nCurrentHandle;
  v5->m_nCurrentHandle = result + 1;
  *(v22 + 32) = result;
  return result;
}


// CGameEntitySystem::ListenForEntityInSpawnGroupToFinish  (line 748, @0x00000000020d6fa0, libserver.so)  // inlines: AddRef, AddToTail, CEntityHandle, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlVector, CUtlVectorBase, ClosurePtr, Construct<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupEntitySpawnCompletionDelegateInfo_t>, Construct<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t>, CopyFrom<FastDelegate2<CEntityInstance*, const CEntityKeyValues*, void> >, Element, FastDelegate2, FindOrAddSpawnGroupListener, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, ListenForEntityInSpawnGroupToFinish, Set, SetMementoFrom, SpawnGroupEntitySpawnCompletionDelegateInfo_t, SpawnGroupFinishListener_t, operator=, operator[]
// calls: CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupEntitySpawnCompletionDelegateInfo_t, int>::Grow, CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t, int>::Grow
// callers: Script_SpawnEntityListFromTableAsynchronous, Script_SpawnEntityGroupFromTable, CC_Ent_Create, CSource2Server::OnLoadSessionPersisters, CBasePlayer::Activate, phys_shoot, CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal, CDOTAGamerules::HeroPickState_Enter_Ability_Draft_SELECT, DOTA_PrecacheItemByNameAsync, CreateItemOnPositionAsync, SpawnerSpawn, CDOTA_Item_Courier::OnSpellStart (13 total)
// globals: g_pSpawnGroupCompletionSystem
__int64 __fastcall CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
        CGameEntitySystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        CEntityInstance *pEntityToListenFor,
        const CEntityKeyValues *pKeyValues,
        CEntityInstance *pListener,
        __int64 *a6)
{
  CSpawnGroupCompletionCallbackGameSystem *v7; // r13
  __int64 v8; // r10
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 m_Size; // rbx
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t *m_pMemory; // rsi
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t *v13; // rdi
  int v14; // eax
  int v15; // eax
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r9
  __int64 v19; // rax
  char *v20; // rbx
  int v21; // r12d
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v26; // eax
  __int16 v27; // di
  __int64 result; // rax
  CEntityInstance *v29; // [rsp+8h] [rbp-58h]
  const CEntityKeyValues *pListenerb; // [rsp+10h] [rbp-50h]
  CEntityInstance *pListenera; // [rsp+10h] [rbp-50h]
  CEntityInstance *pKeyValuesb; // [rsp+18h] [rbp-48h]
  const CEntityKeyValues *pKeyValuesa; // [rsp+18h] [rbp-48h]
  CEntityInstance *pEntityToListenForb; // [rsp+20h] [rbp-40h]
  CEntityInstance *pEntityToListenFora; // [rsp+20h] [rbp-40h]
  __int64 v36; // [rsp+28h] [rbp-38h]
  __int64 v37; // [rsp+28h] [rbp-38h]

  v7 = g_pSpawnGroupCompletionSystem;
  v8 = a6[1];
  v9 = a6[2];
  v10 = *a6;
  m_Size = g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Memory.m_pMemory;
    if ( hSpawnGroup != m_pMemory->m_hSpawnGroup )
    {
      v13 = g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Memory.m_pMemory;
      v14 = 0;
      while ( ++v14 != m_Size )
      {
        ++v13;
        if ( hSpawnGroup == v13->m_hSpawnGroup )
          goto LABEL_13;
      }
      goto LABEL_6;
    }
    v14 = 0;
LABEL_13:
    v18 = 88LL * v14;
    goto LABEL_14;
  }
  if ( m_Size != 0 )
  {
    m_pMemory = g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Memory.m_pMemory;
    v14 = 0;
    goto LABEL_13;
  }
LABEL_6:
  v15 = g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Size;
  if ( m_Size == g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Memory.m_nAllocationCount )
  {
    pListenera = pListener;
    pKeyValuesa = pKeyValues;
    pEntityToListenFora = pEntityToListenFor;
    v37 = a6[1];
    CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t,int>::Grow(
      &g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Memory,
      1);
    v15 = v7->m_listenForSpawnGroup.m_Size;
    pListener = pListenera;
    pKeyValues = pKeyValuesa;
    pEntityToListenFor = pEntityToListenFora;
    v8 = v37;
  }
  v16 = 0;
  v7->m_listenForSpawnGroup.m_Size = v15 + 1;
  v17 = m_Size;
  v18 = 88 * m_Size;
  v19 = &v7->m_listenForSpawnGroup.m_Memory.m_pMemory[m_Size];
  if ( v19 != 0 )
  {
    *(v19 + 8) = 0;
    *(v19 + 16) = 0;
    *(v19 + 24) = 0;
    *(v19 + 28) = 0;
    *(v19 + 32) = 0;
    *(v19 + 40) = 0;
    *(v19 + 48) = 0;
    *(v19 + 52) = 0;
    *(v19 + 56) = 0;
    *(v19 + 64) = 0;
    *(v19 + 72) = 0;
    *(v19 + 76) = 0;
    v16 = &v7->m_listenForSpawnGroup.m_Memory.m_pMemory[v17];
  }
  v16->m_hSpawnGroup = hSpawnGroup;
  v7->m_listenForSpawnGroup.m_Memory.m_pMemory[v17].m_nSpawnGroupRefCount = 0;
  m_pMemory = v7->m_listenForSpawnGroup.m_Memory.m_pMemory;
LABEL_14:
  v20 = m_pMemory + v18;
  v21 = *(&m_pMemory->m_entityCompletionDelegates.m_Size + v18);
  v22 = v21;
  if ( v21 == *(&m_pMemory->m_entityCompletionDelegates.m_Memory.m_nAllocationCount + v18) )
  {
    v29 = pListener;
    pListenerb = pKeyValues;
    pKeyValuesb = pEntityToListenFor;
    pEntityToListenForb = v18;
    v36 = v8;
    CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupEntitySpawnCompletionDelegateInfo_t,int>::Grow(
      (v20 + 40),
      1);
    v22 = *(v20 + 8);
    pListener = v29;
    pKeyValues = pListenerb;
    pEntityToListenFor = pKeyValuesb;
    v18 = pEntityToListenForb;
    v8 = v36;
  }
  *(v20 + 8) = v22 + 1;
  v23 = *(v20 + 5) + 56LL * v21;
  if ( v23 != 0 )
  {
    *v23 = -1;
    *(v23 + 24) = 0;
    *(v23 + 32) = 0;
    *(v23 + 40) = 0;
  }
  v24 = &(*(&v7->m_listenForSpawnGroup.m_Memory.m_pMemory->m_entityCompletionDelegates.m_Memory.m_pMemory + v18))[v21];
  *(v24 + 8) = pEntityToListenFor;
  if ( pListener != 0 && (m_pEntity = pListener->m_pEntity) != 0 )
  {
    v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v27 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    *v24 = v27 | *v24 & 0x8000;
    *v24 = (v26 << 15) | *v24 & 0x7FFF;
  }
  else
  {
    *v24 = -1;
  }
  *(v24 + 32) = v8;
  *(v24 + 40) = v9;
  *(v24 + 24) = v10;
  *(v24 + 16) = pKeyValues;
  result = v7->m_nCurrentHandle;
  v7->m_nCurrentHandle = result + 1;
  *(v24 + 48) = result;
  if ( pKeyValues != 0 )
  {
    ++pKeyValues->m_nRefCount;
    return *(v24 + 48);
  }
  return result;
}


// CGameEntitySystem::RemoveSpawnGroupListener  (line 755, @0x00000000020a4750, libserver.so)  // inlines: Element, Release, Remove, RemoveSpawnGroupListener, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove, CEntityKeyValues::~CEntityKeyValues, operator delete
// globals: g_pSpawnGroupCompletionSystem
void __fastcall CGameEntitySystem::RemoveSpawnGroupListener(
        CGameEntitySystem *const this,
        SpawnGroupCompletionDelegateHandle_t hHandle)
{
  int m_Size; // eax
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t *m_pMemory; // r13
  __int64 v4; // r9
  int v5; // edx
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupEntitySpawnCompletionDelegateInfo_t *v6; // rcx
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupEntitySpawnCompletionDelegateInfo_t *v7; // rax
  int v8; // ebx
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupEntitySpawnCompletionDelegateInfo_t *v9; // r12
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupEntitySpawnCompletionDelegateInfo_t *v10; // r8
  __int64 v11; // r12
  int v12; // edx
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupCompletionDelegateInfo_t *v13; // r8
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupCompletionDelegateInfo_t *v14; // rax
  int v15; // ecx
  CSpawnGroupCompletionCallbackGameSystem::SpawnGroupCompletionDelegateInfo_t *v16; // rdi
  CEntityKeyValues *m_pKeyValues; // r14
  bool v18; // zf
  bool v19; // sf

  m_Size = g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Size;
  if ( m_Size <= 0 )
    return;
  m_pMemory = g_pSpawnGroupCompletionSystem->m_listenForSpawnGroup.m_Memory.m_pMemory;
  v4 = &m_pMemory[(m_Size - 1) + 1];
  while ( 1 )
  {
    v5 = m_pMemory->m_entityCompletionDelegates.m_Size;
    if ( v5 > 0 )
    {
      v6 = m_pMemory->m_entityCompletionDelegates.m_Memory.m_pMemory;
      if ( hHandle == v6->m_nHandle )
        break;
      v7 = v6 + 1;
      v8 = 0;
      while ( ++v8 != v5 )
      {
        v9 = v7;
        v10 = v7++;
        v11 = v9 - v6;
        if ( hHandle == v7[-1].m_nHandle )
          goto LABEL_16;
      }
    }
    v12 = m_pMemory->m_completionDelegates.m_Size;
    if ( v12 > 0 )
    {
      v13 = m_pMemory->m_completionDelegates.m_Memory.m_pMemory;
      if ( hHandle == v13->m_nHandle )
      {
        v16 = m_pMemory->m_completionDelegates.m_Memory.m_pMemory;
        v15 = 0;
LABEL_25:
        if ( v12 - v15 - 1 > 0 )
        {
          memmove(v16, &v13[v15 + 1], 40LL * (v12 - v15 - 1));
          --m_pMemory->m_completionDelegates.m_Size;
        }
        else
        {
          m_pMemory->m_completionDelegates.m_Size = v12 - 1;
        }
        return;
      }
      v14 = v13 + 1;
      v15 = 0;
      while ( ++v15 != v12 )
      {
        v16 = v14++;
        if ( hHandle == v14[-1].m_nHandle )
          goto LABEL_25;
      }
    }
    if ( ++m_pMemory == v4 )
      return;
  }
  v10 = m_pMemory->m_entityCompletionDelegates.m_Memory.m_pMemory;
  v11 = 0;
  v8 = 0;
LABEL_16:
  m_pKeyValues = v10->m_pKeyValues;
  if ( m_pKeyValues != 0 )
  {
    v18 = m_pKeyValues->m_nRefCount == 1;
    v19 = --m_pKeyValues->m_nRefCount < 0;
    if ( v19 || v18 )
    {
      CEntityKeyValues::~CEntityKeyValues(m_pKeyValues);
      operator delete(m_pKeyValues);
    }
    v5 = m_pMemory->m_entityCompletionDelegates.m_Size;
  }
  if ( v5 - v8 - 1 > 0 )
  {
    memmove(
      m_pMemory->m_entityCompletionDelegates.m_Memory.m_pMemory + v11,
      &m_pMemory->m_entityCompletionDelegates.m_Memory.m_pMemory[v8 + 1],
      56LL * (v5 - v8 - 1));
    v5 = m_pMemory->m_entityCompletionDelegates.m_Size;
  }
  m_pMemory->m_entityCompletionDelegates.m_Size = v5 - 1;
}


// CLoadingSpawnGroup::GetEntityKeyValuesAllocator  (line 770, @0x00000000020f1480, libserver.so)
CUtlScratchMemoryPool *__fastcall CLoadingSpawnGroup::GetEntityKeyValuesAllocator(CLoadingSpawnGroup *const this)
{
  return &this->m_variantMemory;
}


// CLoadingSpawnGroup::CreateEntityToSpawn  (line 775, @0x00000000021140c0, libserver.so)  // inlines: AddEntityToSpawn, AddRef, AddToTail, Base, CopyConstruct<EntitySpawnInfo_t>, Element, FindKeyHash, GetEntityNameAsCStr, GetValue, GrowMemory, LeafCodeInfo_t, String, TempString, operator[]
// calls: V_stricmp_fast, CGameEntitySystem::HandlePointPrefab, CEntitySystem::CreateEntity, CEntityIdentity::GetInstanceSchemaBinding, CUtlMemory<EntitySpawnInfo_t, int>::Grow, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "point_prefab", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/gameentit, "CreateEntityToSpawn", "CGameEntitySystem::CreateEntities: NULL binding for entity %s.\n", "classname missing from entity!\n"
// globals: CEntityKeyValues::sm_EmptyVariant, g_pGameEntitySystem
CEntityInstance *__fastcall CLoadingSpawnGroup::CreateEntityToSpawn(
        CLoadingSpawnGroup *const this,
        SpawnGroupHandle_t hSpawnGroup,
        const matrix3x4a_t *const vecSpawnOffset,
        int createType,
        const CEntityKeyValues *pEntityKeyValues)
{
  int m_nCount; // ecx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // dx
  __int64 v11; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // r9
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // r13
  CEntityInstance *Entity; // rax
  CEntityInstance *v18; // r12
  const ISchemaBinding *InstanceSchemaBinding; // rax
  CEntityIdentity *v20; // r14
  int m_Size; // r13d
  int v22; // eax
  EntitySpawnInfo_t *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r8
  LeafCodeInfo_t v31; // [rsp+20h] [rbp-50h] BYREF

  m_nCount = pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = "";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_14;
  }
  m_nAllocated = pEntityKeyValues->m_keyHashes.m_nAllocated;
  v11 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v11) == -971301790 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v11 )
      goto LABEL_13;
  }
  m_pElements = (&pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pEntityKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v11] != -971301790 )
    goto LABEL_6;
LABEL_9:
  if ( pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v13 = pEntityKeyValues->m_keyValues.m_pElements;
  else
    v13 = 0;
  p_m_value = &v13[v11].m_value;
  m_uint64 = "";
  if ( p_m_value->m_type == 30 )
LABEL_12:
    m_uint64 = p_m_value->m_uint64;
LABEL_14:
  if ( *m_uint64 == 0 )
    goto LABEL_34;
  if ( V_stricmp_fast(m_uint64, "point_prefab") != 0 )
  {
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               hSpawnGroup,
               m_uint64,
               EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT,
               -1,
               -1,
               0,
               1);
    v18 = Entity;
    if ( Entity == 0 )
      return 0;
    InstanceSchemaBinding = CEntityIdentity::GetInstanceSchemaBinding(Entity->m_pEntity);
    if ( (*(InstanceSchemaBinding->_vptr_ISchemaBinding + 1))(InstanceSchemaBinding) == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        m_pEntity = v18->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_name.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_name.u.m_pAsString;
        v31.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/gameentitysystem.cpp";
        v31.m_szFunction = "CreateEntityToSpawn";
        v31.m_nLine = 804;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v31,
          "CGameEntitySystem::CreateEntities: NULL binding for entity %s.\n",
          m_pAsString);
      }
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v26, v27, v24, v25) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_34:
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v31.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/gameentitysystem.cpp";
          v31.m_szFunction = "CreateEntityToSpawn";
          v31.m_nLine = 781;
          LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v31, "classname missing from entity!\n");
        }
      }
    }
    v20 = v18->m_pEntity;
    ++pEntityKeyValues->m_nRefCount;
    m_Size = this->m_spawnInfo.m_Size;
    v22 = m_Size;
    if ( m_Size == this->m_spawnInfo.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<EntitySpawnInfo_t,int>::Grow(&this->m_spawnInfo.m_Memory, 1);
      v22 = this->m_spawnInfo.m_Size;
    }
    this->m_spawnInfo.m_Size = v22 + 1;
    v23 = &this->m_spawnInfo.m_Memory.m_pMemory[m_Size];
    if ( v23 != 0 )
    {
      v23->m_pEntity = v20;
      v23->m_pKeyValues = pEntityKeyValues;
    }
    return v18;
  }
  else
  {
    if ( createType != 0 )
      CGameEntitySystem::HandlePointPrefab(g_pGameEntitySystem, hSpawnGroup, this, vecSpawnOffset, pEntityKeyValues);
    return 0;
  }
}


// CLoadingSpawnGroup::EntityCount  (line 821, @0x00000000020f1490, libserver.so)
int __fastcall CLoadingSpawnGroup::EntityCount(const CLoadingSpawnGroup *const this)
{
  return this->m_spawnInfo.m_Size;
}


// CLoadingSpawnGroup::GetEntities  (line 826, @0x00000000020f14a0, libserver.so)
const EntitySpawnInfo_t *__fastcall CLoadingSpawnGroup::GetEntities(const CLoadingSpawnGroup *const this)
{
  return this->m_spawnInfo.m_Memory.m_pMemory;
}


// CLoadingSpawnGroup::SpawnEntities  (line 831, @0x0000000002111f90, libserver.so)  // inlines: Release, operator[]
// calls: CEntitySystem::QueueSpawnEntity, CEntityKeyValues::~CEntityKeyValues, operator delete, CEntitySystem::ExecuteQueuedCreation, CUtlVectorBase<EntitySpawnInfo_t, CUtlMemory<EntitySpawnInfo_t, int> >::RemoveAll
// globals: g_pGameEntitySystem
void __fastcall CLoadingSpawnGroup::SpawnEntities(CLoadingSpawnGroup *const this)
{
  int m_Size; // r13d
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CEntityKeyValues *m_pKeyValues; // r12
  bool v6; // zf
  bool v7; // sf

  m_Size = this->m_spawnInfo.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 16 * ((m_Size - 1) + 1LL);
    do
    {
      while ( 1 )
      {
        CEntitySystem::QueueSpawnEntity(
          g_pGameEntitySystem,
          this->m_spawnInfo.m_Memory.m_pMemory[v3 / 0x10].m_pEntity,
          this->m_spawnInfo.m_Memory.m_pMemory[v3 / 0x10].m_pKeyValues);
        m_pKeyValues = this->m_spawnInfo.m_Memory.m_pMemory[v3 / 0x10].m_pKeyValues;
        v6 = m_pKeyValues->m_nRefCount == 1;
        v7 = --m_pKeyValues->m_nRefCount < 0;
        if ( v7 || v6 )
          break;
        v3 += 16LL;
        if ( v3 == v4 )
          goto LABEL_6;
      }
      v3 += 16LL;
      CEntityKeyValues::~CEntityKeyValues(m_pKeyValues);
      operator delete(m_pKeyValues);
    }
    while ( v3 != v4 );
  }
LABEL_6:
  CEntitySystem::ExecuteQueuedCreation(g_pGameEntitySystem);
  CUtlVectorBase<EntitySpawnInfo_t,CUtlMemory<EntitySpawnInfo_t,int>>::RemoveAll(&this->m_spawnInfo);
}


// CLoadingSpawnGroup::Release  (line 855, @0x0000000002112090, libserver.so)  // inlines: Purge, Release, ~CLoadingSpawnGroup, ~CUtlBuffer, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CEntitySystem::QueueDestroyEntity, CEntityKeyValues::~CEntityKeyValues, operator delete, CUtlVectorBase<EntitySpawnInfo_t, CUtlMemory<EntitySpawnInfo_t, int> >::RemoveAll, CEntitySystem::ExecuteQueuedOperations, CUtlString::FreeMemoryBlock, CUtlMemory<unsigned char, int>::Purge, CUtlScratchMemoryPool::~CUtlScratchMemoryPool, CUtlMemory<EntitySpawnInfo_t, int>::Purge
// globals: g_pGameEntitySystem
void __fastcall CLoadingSpawnGroup::Release(CLoadingSpawnGroup *const this)
{
  int m_Size; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  CEntityIdentity *m_pEntity; // rsi
  CEntityKeyValues *m_pKeyValues; // r12
  bool v8; // zf

  m_Size = this->m_spawnInfo.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 16 * ((m_Size - 1) + 1LL);
    do
    {
      m_pKeyValues = this->m_spawnInfo.m_Memory.m_pMemory[v3 / 0x10].m_pKeyValues;
      if ( --m_pKeyValues->m_nRefCount <= 0 )
      {
        CEntityKeyValues::~CEntityKeyValues(m_pKeyValues);
        operator delete(m_pKeyValues);
      }
      m_pEntity = this->m_spawnInfo.m_Memory.m_pMemory[v3 / 0x10].m_pEntity;
      v3 += 16LL;
      CEntitySystem::QueueDestroyEntity(g_pGameEntitySystem, m_pEntity);
    }
    while ( v3 != v4 );
  }
  CUtlVectorBase<EntitySpawnInfo_t,CUtlMemory<EntitySpawnInfo_t,int>>::RemoveAll(&this->m_spawnInfo);
  CEntitySystem::ExecuteQueuedOperations(g_pGameEntitySystem, 0);
  v8 = this->m_sLevelTransitionLandmarkName.m_pString == 0;
  this->_vptr_ILoadingSpawnGroup = off_3FF6610;  // vptr: CLoadingSpawnGroup
  if ( !v8 )
    CUtlString::FreeMemoryBlock(&this->m_sLevelTransitionLandmarkName);
  if ( this->m_sLevelTransitionPreviousMap.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sLevelTransitionPreviousMap);
  CUtlMemory<unsigned char,int>::Purge(&this->m_SaveRestoreFileData.m_Memory);
  CUtlScratchMemoryPool::~CUtlScratchMemoryPool(&this->m_variantMemory);
  CUtlVectorBase<EntitySpawnInfo_t,CUtlMemory<EntitySpawnInfo_t,int>>::RemoveAll(&this->m_spawnInfo);
  if ( (this->m_spawnInfo.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<EntitySpawnInfo_t,int>::Purge(&this->m_spawnInfo.m_Memory),
        (this->m_spawnInfo.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    operator delete(this);
  }
  else
  {
    CUtlMemory<EntitySpawnInfo_t,int>::Purge(&this->m_spawnInfo.m_Memory);
    operator delete(this);
  }
}


// CLoadingSpawnGroup::ShouldLoadEntitiesFromSave  (line 872, @0x00000000020f14b0, libserver.so)
bool __fastcall CLoadingSpawnGroup::ShouldLoadEntitiesFromSave(const CLoadingSpawnGroup *const this)
{
  return this->m_SaveRestoreFileData.m_Put > 0;
}


// CLoadingSpawnGroup::GetSaveRestoreFileData  (line 877, @0x00000000020f14c0, libserver.so)
const CUtlBuffer *__fastcall CLoadingSpawnGroup::GetSaveRestoreFileData(const CLoadingSpawnGroup *const this)
{
  return &this->m_SaveRestoreFileData;
}


// CLoadingSpawnGroup::IsLevelTransition  (line 889, @0x00000000020f4ec0, libserver.so)  // inlines: Length, V_strlen
// calls: strlen
bool __fastcall CLoadingSpawnGroup::IsLevelTransition(const CLoadingSpawnGroup *const this)
{
  char *m_pString; // rdi

  m_pString = this->m_sLevelTransitionPreviousMap.m_pString;
  return m_pString != 0 && strlen(m_pString) != 0;
}


// CLoadingSpawnGroup::GetLevelTransitionPreviousMap  (line 894, @0x00000000020f4e50, libserver.so)  // inlines: String
// calls: CUtlString::Get
const char *__fastcall CLoadingSpawnGroup::GetLevelTransitionPreviousMap(const CLoadingSpawnGroup *const this)
{
  return CUtlString::Get(&this->m_sLevelTransitionPreviousMap);
}


// CLoadingSpawnGroup::GetLevelTransitionLandmarkName  (line 899, @0x00000000020f4e60, libserver.so)  // inlines: String
// calls: CUtlString::Get
const char *__fastcall CLoadingSpawnGroup::GetLevelTransitionLandmarkName(const CLoadingSpawnGroup *const this)
{
  return CUtlString::Get(&this->m_sLevelTransitionLandmarkName);
}


// CLoadingSpawnGroup::SetLevelTransitionPreviousMap  (line 904, @0x00000000020f4e90, libserver.so)
// calls: CUtlString::operator=
void __fastcall CLoadingSpawnGroup::SetLevelTransitionPreviousMap(
        CLoadingSpawnGroup *const this,
        const char *pLevelTransitionMap,
        const char *pLandmarkName)
{
  CUtlString::operator=(&this->m_sLevelTransitionPreviousMap, pLevelTransitionMap);
  CUtlString::operator=(&this->m_sLevelTransitionLandmarkName, pLandmarkName);
}


// OptionallyFixupTargetName  (line 933, @0x000000000209d710, libserver.so)  // inlines: V_memcpy, V_strlen, memcpy
// calls: V_stristr_fast(char const*,char const*), memcpy, strlen
// callers: CGameEntitySystem::UniqueifyEntityNames
// strings: "[PR#]", "&0000"
__int64 __fastcall OptionallyFixupTargetName(
        const char *pValue,
        const char *pFixedParentName,
        int nFixedParentNameSize,
        const char *pFixedLocalName,
        int nFixedLocalNameSize,
        char *pOutputBuffer)
{
  size_t v6; // r15
  size_t v7; // r14
  const char *v9; // rbx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdx
  int v12; // eax
  const char *v13; // rax
  char *v14; // r12
  char *v15; // rdi
  size_t v16; // r13
  char *v17; // rdi
  char *v18; // r12
  size_t v19; // rdx
  const char *v20; // rbx
  char *v21; // r14
  int v22; // eax
  size_t v23; // rdx
  __int64 result; // rax
  unsigned __int64 v25; // rax
  size_t offset; // [rsp+8h] [rbp-48h]

  v6 = nFixedParentNameSize;
  v7 = nFixedLocalNameSize;
  v9 = pValue;
  v10 = V_stristr_fast(pValue, "[PR#]");
  v11 = V_stristr_fast(v9, "&0000");
  if ( v11 != 0 || (result = 0, v10 != 0) )
  {
    if ( v10 < v11 )
    {
      v25 = v11;
      v11 = v10;
      v10 = v25;
    }
    else
    {
      v12 = v6;
      v6 = v7;
      v7 = v12;
      v13 = pFixedParentName;
      pFixedParentName = pFixedLocalName;
      pFixedLocalName = v13;
    }
    if ( v11 != 0 )
    {
      offset = v11 - v9;
      memcpy(pOutputBuffer, v9, v11 - v9);
      v14 = &pOutputBuffer[offset];
      if ( (v6 & 0x80000000) != 0LL )
        __debugbreak();
      v15 = v14;
      pOutputBuffer = &v14[v6];
      memcpy(v15, pFixedParentName, v6);
      v9 += offset + 5;
    }
    v16 = v10 - v9;
    v17 = pOutputBuffer;
    v18 = &pOutputBuffer[v16];
    memcpy(v17, v9, v16);
    if ( (v7 & 0x80000000) != 0LL )
      __debugbreak();
    v19 = v7;
    v20 = &v9[v16 + 5];
    v21 = &v18[v7];
    memcpy(v18, pFixedLocalName, v19);
    if ( v20 != 0 )
    {
      v22 = strlen(v20) + 1;
      if ( v22 < 0 )
        __debugbreak();
      v23 = v22;
    }
    else
    {
      v23 = 1;
    }
    memcpy(v21, v20, v23);
    return 1;
  }
  return result;
}


// CGameEntitySystem::UniqueifyEntityNames  (line 998, @0x00000000020d7ca0, libserver.so)  // inlines: AddKeyValue<char [260]>, AddRef, AddToTail, Allocate, AssignTo, Base, CEntityHandle, CEntityKeyValuesModifyScope, CUtlSymbolLarge, CopyConstruct<const CEntityKeyValues*>, CopyData, Element, EnsureCapacity, EntityIOConnectionDesc_t, FindKeyHash, Free, GetConnectionDesc, GrowMemory, Id, IsValid, Release, SetValue<char [260]>, String, TempString, ToString, V_strlen, Value, memcpy, operator=, operator[], ~CEntityKeyValuesModifyScope
// calls: strlen, CUtlMemory<const CEntityKeyValues*, int>::EnsureCapacity, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::GetNumConnectionDescs, CEntityKeyValues::SetTargetNameForConnection, OptionallyFixupTargetName, CEntityKeyValues::SetValueOverrideForConnection, EntityIOConnectionDesc_t::Init, operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValues::CopyFrom, Warning (24 total)
// callers: CGameEntitySystem::CreateSpawnGroupEntities
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_20D813B, CVariantBase<CEntityVariantAllocator>::ToString(void)::szBuf
void __fastcall CGameEntitySystem::UniqueifyEntityNames(
        CGameEntitySystem *const this,
        const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pSrcEntities,
        const NameFixupSettings_t *pNameFixupSettings,
        CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pDstEntities)
{
  const char *m_pLocalNameFixup; // rax
  int m_Size; // ebx
  CEntityKeyValues *v7; // r15
  int m_nCount; // eax
  __int64 v9; // r13
  __int64 v10; // rbx
  CEntityKeyValues *v11; // r12
  int16 m_type; // dx
  __int64 v13; // rbx
  const char *m_pAsString; // rdi
  __int64 v15; // rax
  const char *v16; // r8
  const char *m_Id; // rdi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rdx
  float **v19; // rax
  int16 v20; // dx
  float *v21; // rdi
  int v22; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v23; // cx
  __int64 v24; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v25; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r14
  const char *v29; // rax
  const char *v30; // rcx
  double v31; // xmm0_8
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v32; // rax
  unsigned __int64 m_nAllocated; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v34; // rdx
  __int64 v35; // rbx
  int v36; // eax
  const CEntityKeyValues **v37; // rax
  __int16 v39; // r14
  unsigned __int64 v40; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v41; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v42; // rax
  __int64 v43; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // r14
  uint16 m_flags; // ax
  char *v46; // rcx
  int v47; // edx
  unsigned int v48; // eax
  void *v49; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v50; // rax
  bool v51; // zf
  __int16 v52; // ax
  char *v53; // rcx
  int v54; // edx
  unsigned int v55; // eax
  void *v56; // rax
  const CEntityKeyValues **v57; // rax
  signed int v58; // [rsp+Ch] [rbp-1E4h]
  CUtlVectorBase<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> >::CAllocator *p_m_Memory; // [rsp+10h] [rbp-1E0h]
  __int64 v60; // [rsp+18h] [rbp-1D8h]
  unsigned __int64 v63; // [rsp+30h] [rbp-1C0h]
  int NumConnectionDescs; // [rsp+48h] [rbp-1A8h]
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t v65; // [rsp+48h] [rbp-1A8h]
  __int64 v66; // [rsp+48h] [rbp-1A8h]
  signed int v67; // [rsp+48h] [rbp-1A8h]
  int nFixedParentNameSize; // [rsp+50h] [rbp-1A0h]
  int nFixedLocalNameSize; // [rsp+54h] [rbp-19Ch]
  const char *pLocalFixup; // [rsp+58h] [rbp-198h]
  const char *pParentFixup; // [rsp+60h] [rbp-190h]
  CEntityKeyValuesModifyScope_0 sg; // [rsp+70h] [rbp-180h] BYREF
  EntityIOConnectionDesc_t connectionDesc; // [rsp+80h] [rbp-170h] BYREF
  char pFixed[264]; // [rsp+B0h] [rbp-140h] BYREF
  unsigned __int64 v75; // [rsp+1B8h] [rbp-38h]

  v75 = __readfsqword(0x28u);
  if ( pNameFixupSettings != 0 )
  {
    pParentFixup = pNameFixupSettings->m_pParentNameFixup;
    if ( pNameFixupSettings->m_pParentNameFixup != 0 )
    {
      nFixedParentNameSize = strlen(pParentFixup);
    }
    else
    {
      nFixedParentNameSize = 0;
      pParentFixup = "";
    }
    m_pLocalNameFixup = pNameFixupSettings->m_pLocalNameFixup;
    pLocalFixup = m_pLocalNameFixup;
    if ( m_pLocalNameFixup != 0 )
    {
      nFixedLocalNameSize = strlen(m_pLocalNameFixup);
    }
    else
    {
      nFixedLocalNameSize = 0;
      pLocalFixup = "";
    }
  }
  else
  {
    nFixedLocalNameSize = 0;
    nFixedParentNameSize = 0;
    pParentFixup = "";
    pLocalFixup = "";
  }
  m_Size = pSrcEntities->m_Size;
  p_m_Memory = &pDstEntities->m_Memory;
  CUtlMemory<CEntityKeyValues const*,int>::EnsureCapacity(&pDstEntities->m_Memory, pSrcEntities->m_Size);
  if ( m_Size <= 0 )
    return;
  v63 = 0;
  v60 = 8LL * (m_Size - 1) + 8;
  do
  {
    v7 = pSrcEntities->m_Memory.m_pMemory[v63 / 8];
    sg.m_pKeyValues = 0;
    sg.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&sg, 0);
    m_nCount = v7->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
      v11 = 0;
      goto LABEL_14;
    }
    v9 = 0;
    v10 = 0;
    v11 = 0;
    do
    {
      if ( v10 < m_nCount )
      {
        if ( v7->m_keyValues.m_nAllocated != 0 )
        {
          m_pElements = v7->m_keyValues.m_pElements;
          if ( m_pElements[v9].m_value.m_type == 30 )
            goto LABEL_32;
        }
        else
        {
          m_pElements = 0;
          if ( *(v9 * 24 + 8) == 30 )
            goto LABEL_32;
        }
        m_type = m_pElements[v9].m_value.m_type;
      }
      else
      {
        m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
        if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
          goto LABEL_33;
      }
      if ( m_type != 13 )
        goto LABEL_13;
LABEL_32:
      if ( v10 < m_nCount )
      {
        if ( v7->m_keyValues.m_nAllocated != 0 )
          v32 = v7->m_keyValues.m_pElements;
        else
          v32 = 0;
        v19 = &v32[v9];
        goto LABEL_34;
      }
LABEL_33:
      v19 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_34:
      v20 = *(v19 + 4);
      if ( v20 == 30 )
      {
        v21 = *v19;
      }
      else
      {
        switch ( v20 )
        {
          case 0:
            goto LABEL_61;
          case 1:
            v31 = *v19;
            goto LABEL_71;
          case 3:
          case 39:
            V_snprintf(
              &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              **v19,
              (*v19)[1],
              (*v19)[2]);
            break;
          case 4:
          case 27:
            V_snprintf(
              &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              **v19,
              (*v19)[1],
              (*v19)[2],
              (*v19)[3]);
            break;
          case 5:
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%d", *v19);
            break;
          case 6:
            v30 = "true";
            if ( *v19 == 0 )
              v30 = "false";
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%s", v30);
            break;
          case 8:
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%c", *v19);
            break;
          case 9:
            V_snprintf(
              &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              *v19,
              BYTE1(*v19),
              BYTE2(*v19),
              HIBYTE(*v19));
            break;
          case 25:
            V_snprintf(
              &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              **v19,
              (*v19)[1]);
            break;
          case 26:
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%lld", *v19);
            break;
          case 33:
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%llu", *v19);
            break;
          case 34:
            v31 = *v19;
LABEL_71:
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%g", v31);
            break;
          case 37:
            V_snprintf(&CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf, 512, "%u", *v19);
            break;
          default:
            v29 = VariantFieldTypeName(v20);
            Warning("No conversion from %s to string at the moment!\n", v29);
LABEL_61:
            CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf = 0;
            break;
        }
        v21 = &CVariantBase<CEntityVariantAllocator>::ToString(void)const::szBuf;
      }
      if ( OptionallyFixupTargetName(v21, pParentFixup, nFixedParentNameSize, pLocalFixup, nFixedLocalNameSize, pFixed) == 0 )
        goto LABEL_52;
      if ( v11 == 0 )
      {
        v11 = operator new(0x70u);
        CEntityKeyValues::CEntityKeyValues(v11);
        CEntityKeyValuesModifyScope::BeginModify(&sg, v11);
        CEntityKeyValues::CopyFrom(v11, v7, 1);
      }
      v65 = 0;
      m_nCount = v7->m_keyHashes.m_nCount;
      if ( v10 < m_nCount )
      {
        m_nAllocated = v7->m_keyHashes.m_nAllocated;
        if ( m_nAllocated != 0 )
        {
          if ( m_nAllocated <= 9 )
            v34 = (&v7->m_keyHashes.m_nAllocAllocated + 1);
          else
            v34 = v7->m_keyHashes.m_pElements;
        }
        else
        {
          v34 = 0;
        }
        v65 = v34[v10];
      }
      if ( v11->m_nQueuedForSpawnCount > 0 )
        goto LABEL_13;
      v22 = v11->m_keyHashes.m_nCount;
      if ( v22 <= 0 )
      {
LABEL_92:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&v11->m_keyHashes);
        v39 = v11->m_keyHashes.m_nCount - 1;
        v40 = v11->m_keyHashes.m_nAllocated;
        if ( v40 != 0 )
        {
          if ( v40 <= 9 )
            v41 = (&v11->m_keyHashes.m_nAllocAllocated + 1);
          else
            v41 = v11->m_keyHashes.m_pElements;
        }
        else
        {
          v41 = 0;
        }
        v41[v39] = v65;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v11->m_keyValues);
        if ( v11->m_keyValues.m_nAllocated != 0 )
          v42 = v11->m_keyValues.m_pElements;
        else
          v42 = 0;
        v43 = v39;
        v44 = &v42[v43];
        v66 = v43 * 24;
        m_flags = v42[v43].m_value.m_flags;
        if ( (m_flags & 1) != 0 )
          v44->m_value.m_flags = m_flags & 0xFFFE;
        v46 = pFixed;
        v44->m_value.m_uint64 = 0;
        v44->m_value.m_type = 30;
        do
        {
          v47 = *v46;
          v46 += 4;
          v48 = ~v47 & (v47 - 16843009) & 0x80808080;
        }
        while ( v48 == 0 );
        if ( (~v47 & (v47 - 16843009) & 0x8080) == 0 )
        {
          LOBYTE(v48) = (~v47 & (v47 - 16843009) & 0x80808080) >> 16;
          LODWORD(v46) = v46 + 2;
        }
        v58 = v46 - (__CFADD__(v48, v48) + 3) - pFixed + 1;
        v49 = CEntityVariantAllocator::Allocate(v58);
        v44->m_value.m_uint64 = v49;
        memcpy(v49, pFixed, v58);
        v44->m_value.m_flags |= 1u;
        if ( v11->m_keyValues.m_nAllocated != 0 )
          v50 = v11->m_keyValues.m_pElements;
        else
          v50 = 0;
        *(&v50->m_pAttributeName + v66) = 0;
        m_nCount = v7->m_keyHashes.m_nCount;
        goto LABEL_13;
      }
      v23 = v11->m_keyHashes.m_nAllocated;
      v24 = 0;
      while ( v23 == 0 )
      {
        if ( v65 == *(4 * v24) )
          goto LABEL_49;
LABEL_46:
        if ( v22 <= ++v24 )
          goto LABEL_92;
      }
      v25 = (&v11->m_keyHashes.m_nAllocAllocated + 1);
      if ( v23 > 9 )
        v25 = v11->m_keyHashes.m_pElements;
      if ( v65 != v25[v24] )
        goto LABEL_46;
LABEL_49:
      if ( v11->m_keyValues.m_nAllocated == 0 )
      {
        v26 = 0;
        v51 = *(&stru_10.m_Lock.gap0 + 3 * v24) == 0;
        v28 = 24 * v24;
        v27 = v24;
        if ( v51 )
          goto LABEL_109;
LABEL_51:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v26[v27].m_pAttributeName);
LABEL_52:
        m_nCount = v7->m_keyHashes.m_nCount;
        goto LABEL_13;
      }
      v26 = v11->m_keyValues.m_pElements;
      v27 = v24;
      v28 = &v26[v27];
      if ( v26[v27].m_pAttributeName != 0 )
        goto LABEL_51;
LABEL_109:
      v52 = *(v28 + 10);
      if ( (v52 & 1) != 0 )
        *(v28 + 10) = v52 & 0xFFFE;
      v53 = pFixed;
      *v28 = 0;
      *(v28 + 8) = 30;
      do
      {
        v54 = *v53;
        v53 += 4;
        v55 = ~v54 & (v54 - 16843009) & 0x80808080;
      }
      while ( v55 == 0 );
      if ( (~v54 & (v54 - 16843009) & 0x8080) == 0 )
      {
        LOBYTE(v55) = (~v54 & (v54 - 16843009) & 0x80808080) >> 16;
        LODWORD(v53) = v53 + 2;
      }
      v67 = v53 - (__CFADD__(v55, v55) + 3) - pFixed + 1;
      v56 = CEntityVariantAllocator::Allocate(v67);
      *v28 = v56;
      memcpy(v56, pFixed, v67);
      *(v28 + 10) |= 1u;
      m_nCount = v7->m_keyHashes.m_nCount;
LABEL_13:
      ++v9;
      ++v10;
    }
    while ( m_nCount > v10 );
LABEL_14:
    NumConnectionDescs = CEntityKeyValues::GetNumConnectionDescs(v7);
    if ( NumConnectionDescs > 0 )
    {
      v13 = 0;
      do
      {
        connectionDesc.m_hTarget.m_Index = -1;
        v15 = &v7->m_connectionDescs.m_Memory.m_pMemory[v13];
        memset(&connectionDesc, 0, 24);
        v16 = *(v15 + 32);
        if ( *v16 == 0 )
          v16 = 0;
        EntityIOConnectionDesc_t::Init(
          &connectionDesc,
          *(v15 + 8),
          *(v15 + 16),
          *(v15 + 24),
          v16,
          *(v15 + 44),
          *(v15 + 40));
        m_Id = "";
        if ( connectionDesc.m_targetDesc.u.m_Id != 0 )
          m_Id = connectionDesc.m_targetDesc.u.m_Id;
        if ( OptionallyFixupTargetName(
               m_Id,
               pParentFixup,
               nFixedParentNameSize,
               pLocalFixup,
               nFixedLocalNameSize,
               pFixed) != 0 )
        {
          if ( v11 == 0 )
          {
            v11 = operator new(0x70u);
            CEntityKeyValues::CEntityKeyValues(v11);
            CEntityKeyValuesModifyScope::BeginModify(&sg, v11);
            CEntityKeyValues::CopyFrom(v11, v7, 1);
          }
          CEntityKeyValues::SetTargetNameForConnection(v11, v13, pFixed);
        }
        m_pAsString = "";
        if ( connectionDesc.m_valueOverride.u.m_Id != 0 )
          m_pAsString = connectionDesc.m_valueOverride.u.m_pAsString;
        if ( OptionallyFixupTargetName(
               m_pAsString,
               pParentFixup,
               nFixedParentNameSize,
               pLocalFixup,
               nFixedLocalNameSize,
               pFixed) != 0 )
        {
          if ( v11 == 0 )
          {
            v11 = operator new(0x70u);
            CEntityKeyValues::CEntityKeyValues(v11);
            CEntityKeyValuesModifyScope::BeginModify(&sg, v11);
            CEntityKeyValues::CopyFrom(v11, v7, 1);
          }
          CEntityKeyValues::SetValueOverrideForConnection(v11, v13, pFixed);
        }
        ++v13;
      }
      while ( NumConnectionDescs > v13 );
    }
    v35 = pDstEntities->m_Size;
    v36 = pDstEntities->m_Size;
    if ( v11 != 0 )
    {
      if ( v35 == pDstEntities->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEntityKeyValues const*,int>::Grow(p_m_Memory, 1);
        v36 = pDstEntities->m_Size;
      }
      pDstEntities->m_Size = v36 + 1;
      v37 = &pDstEntities->m_Memory.m_pMemory[v35];
      if ( v37 != 0 )
        *v37 = v11;
      ++v11->m_nRefCount;
      if ( --v7->m_nRefCount <= 0 )
      {
        CEntityKeyValues::~CEntityKeyValues(v7);
        operator delete(v7);
      }
    }
    else
    {
      if ( v35 == pDstEntities->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEntityKeyValues const*,int>::Grow(p_m_Memory, 1);
        v36 = pDstEntities->m_Size;
      }
      pDstEntities->m_Size = v36 + 1;
      v57 = &pDstEntities->m_Memory.m_pMemory[v35];
      if ( v57 != 0 )
        *v57 = v7;
    }
    CEntityKeyValuesModifyScope::Release(&sg);
    v63 += 8LL;
  }
  while ( v63 != v60 );
}


// CLoadingEntityListener::OnEntitySpawned  (line 1092, @0x0000000002114b10, libserver.so)  // inlines: AddToTail, CEntityHandle, CopyConstruct<CEntityHandle>, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Init, operator[]
// calls: CUtlMemory<CEntityHandle, int>::Grow
void __fastcall CLoadingEntityListener::OnEntitySpawned(CLoadingEntityListener *const this, CEntityInstance *pEntity)
{
  int v2; // r13d
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *m_pOutHandles; // rbx
  __int64 m_Size; // r12
  int v7; // edx
  CEntityHandle *v8; // rdx

  v2 = -1;
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v2 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  m_pOutHandles = this->m_pOutHandles;
  m_Size = m_pOutHandles->m_Size;
  v7 = m_pOutHandles->m_Size;
  if ( m_Size == m_pOutHandles->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CEntityHandle,int>::Grow(&m_pOutHandles->m_Memory, 1);
    v7 = m_pOutHandles->m_Size;
  }
  m_pOutHandles->m_Size = v7 + 1;
  v8 = &m_pOutHandles->m_Memory.m_pMemory[m_Size];
  if ( v8 != 0 )
    v8->m_Index = v2;
}


// CGameEntitySystem::SpawnLoadingEntities  (line 1101, @0x00000000020d6e70, libserver.so)  // inlines: CLoadingEntityListener, RemoveListenerEntity
// calls: CGameEntitySystem::AddListenerEntity, CUtlVectorBase<IEntityListener*, CUtlMemory<IEntityListener*, int> >::FindAndRemove
// callers: CMapSpawnGroup::SpawnLoadingEntities, CGameEntitySystem::CreateSpawnGroupEntities
void __fastcall CGameEntitySystem::SpawnLoadingEntities(
        CGameEntitySystem *const this,
        ILoadingSpawnGroup *pLoadingSpawnGroup,
        CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *pOutHandles)
{
  IEntityListener *src; // [rsp+8h] [rbp-38h] BYREF
  CLoadingEntityListener listener; // [rsp+10h] [rbp-30h] BYREF

  listener._vptr_IEntityListener = &off_3FF6690;
  listener.m_pOutHandles = pOutHandles;
  if ( pOutHandles != 0 )
    CGameEntitySystem::AddListenerEntity(this, &listener);
  if ( pLoadingSpawnGroup != 0 )
    (*(pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 10))(pLoadingSpawnGroup);
  if ( pOutHandles != 0 )
  {
    src = &listener;
    CUtlVectorBase<IEntityListener *,CUtlMemory<IEntityListener *,int>>::FindAndRemove((&stru_1A0A0 + this), &src);
  }
}


// CGameEntitySystem::PrecacheSpawnGroupEntities  (line 1126, @0x00000000020a48f0, libserver.so)
void __fastcall CGameEntitySystem::PrecacheSpawnGroupEntities(
        CGameEntitySystem *const this,
        SpawnGroupHandle_t h,
        const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pKeyValues,
        const matrix3x4a_t *const vecSpawnOffset,
        const char *pFilterName,
        IEntityPrecacheConfiguration *pConfig,
        IEntityResourceManifest *pManifest)
{
  (*(this->_vptr_IEntityResourceManifestBuilder + 2))(this, h, pKeyValues, pFilterName, pConfig, pManifest);
}


// CGameEntitySystem::HandlePointPrefab  (line 1133, @0x00000000020d4390, libserver.so)  // inlines: AssignTo, Base, CUtlString, CUtlStringToken, Element, FindKeyHash, GetValue, GetValue<QAngle>, GetValue<Vector>, GetValue<bool>, GetValue<float>, GetValueString, SetToIdentity, SpawnGroupDesc_t, TempString, VariantFieldTypeName, _V_strcmp, atof, operator=, operator[], ~CUtlString
// calls: SetIdentityMatrix, CSpawnGroupMgrGameSystem::GetSpawnGroupDesc, VariantFieldTypeName, Warning, AngleMatrix, ConcatTransforms, V_stricmp_fast, CSpawnGroupMgrGameSystem::GetSpawnGroupParentNameFixup, CUtlString::operator=, CUtlString::Get, CSpawnGroupMgrGameSystem::GetSpawnGroupLocalNameFixup, CSpawnGroupMgrGameSystem::AddChildSpawnGroup (20 total)
// callers: CLoadingSpawnGroup::CreateEntityToSpawn
// strings: "CREATE_FOR_CLIENTS_WHO_CONNECT_LATER", "No free conversion of %s variant to Vector right now\n", "point_prefab", "%dd_%s", "No free conversion of %s variant to QAngle right now\n", "Encountered point_prefab with no targetMapName key!\n" (31 total)
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_20D46CC, jpt_20D477F, CGameEntitySystem::HandlePointPrefab(uint,ILoadingSpawnGroup *,matrix3x4a_t const&,CEntityKeyValues const*)::s_iUniquePrefabInstance, jpt_20D4E23
void __fastcall CGameEntitySystem::HandlePointPrefab(
        CGameEntitySystem *const this,
        SpawnGroupHandle_t hParentSpawnGroup,
        ILoadingSpawnGroup *pLoadingSpawnGroup,
        const matrix3x4a_t *const mOwnerToWorld,
        const CEntityKeyValues *pEntityKeyValues)
{
  int m_nCount; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v9; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rcx
  CEntityVariant *p_m_value; // rdx
  const char *m_uint64; // r13
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v14; // si
  __int64 v15; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v16; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rcx
  CEntityVariant *v18; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v19; // si
  __int64 v20; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v21; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // rcx
  CEntityVariant *v23; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v24; // si
  __int64 v25; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v26; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rcx
  CEntityVariant *v28; // rcx
  int16 m_type; // dx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v30; // si
  __int64 i; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v32; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v33; // rcx
  char m_char; // r15
  CEntityVariant *v35; // rcx
  int16 v36; // dx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v37; // si
  __int64 v38; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v39; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v40; // rcx
  float **v41; // rdi
  int16 v42; // dx
  const char *v43; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  float z; // xmm2_4
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v47; // si
  __int64 v48; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v49; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v50; // rcx
  float **v51; // rdi
  int16 v52; // ax
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // xmm0_4
  const char *v56; // rax
  SpawnGroupHandle_t v57; // eax
  const char *SpawnGroupParentNameFixup; // rax
  const char *v59; // rax
  const char *v60; // rdx
  float m_float; // xmm0_4
  const char *v62; // rdx
  __int64 v63; // rcx
  double v64; // xmm0_8
  const char *v65; // rax
  const char *v66; // rsi
  float m_flTimeoutInterval; // [rsp+Ch] [rbp-224h]
  const char *v69; // [rsp+18h] [rbp-218h]
  const char *m_pEntityFilterName; // [rsp+20h] [rbp-210h]
  CUtlString parentNameFixup; // [rsp+30h] [rbp-200h] BYREF
  Vector vOrigin; // [rsp+40h] [rbp-1F0h] BYREF
  QAngle vAngles; // [rsp+50h] [rbp-1E0h] BYREF
  matrix3x4a_t mPrefabToOwner; // [rsp+60h] [rbp-1D0h] BYREF
  matrix3x4a_t mPrefabToWorld; // [rsp+90h] [rbp-1A0h] BYREF
  SpawnGroupDesc_t parentDesc; // [rsp+C0h] [rbp-170h] BYREF
  SpawnGroupDesc_t desc; // [rsp+160h] [rbp-D0h] BYREF

  memset(&parentDesc.m_pWorldName, 0, 72);
  parentDesc.m_iPriorityLoader = -2;
  parentDesc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
  parentDesc.m_flTimeoutInterval = 0.0;
  parentDesc.m_pSaveFileName = 0;
  parentDesc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
  parentDesc.m_bDontSpawnEntities = 0;
  parentDesc.m_bBlockUntilLoaded = 0;
  parentDesc.m_bLoadStreamingData = 1;
  parentDesc.m_bCreateNewSceneWorld = 0;
  parentDesc.m_bManualCompletion = 0;
  parentDesc.m_bSetActivePostLoad = 0;
  SetIdentityMatrix(&parentDesc.m_vecWorldOffset);
  CSpawnGroupMgrGameSystem::GetSpawnGroupDesc(g_pSpawnGroupMgr, hParentSpawnGroup, &parentDesc);
  m_nCount = pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = "error";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_14;
  }
  m_nAllocated = pEntityKeyValues->m_keyHashes.m_nAllocated;
  v9 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v9) == 1807471209 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v9 )
      goto LABEL_13;
  }
  m_pElements = (&pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pEntityKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v9] != 1807471209 )
    goto LABEL_6;
LABEL_9:
  if ( pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v11 = pEntityKeyValues->m_keyValues.m_pElements;
  else
    v11 = 0;
  p_m_value = &v11[v9].m_value;
  m_uint64 = "error";
  if ( p_m_value->m_type == 30 )
LABEL_12:
    m_uint64 = p_m_value->m_uint64;
LABEL_14:
  if ( m_nCount <= 0 )
  {
LABEL_25:
    v18 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_26;
  }
  v14 = pEntityKeyValues->m_keyHashes.m_nAllocated;
  v15 = 0;
  while ( 2 )
  {
    if ( v14 == 0 )
    {
      if ( *(4 * v15) == -1086860197 )
        break;
      goto LABEL_19;
    }
    v16 = (&pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v14 > 9 )
      v16 = pEntityKeyValues->m_keyHashes.m_pElements;
    if ( v16[v15] != -1086860197 )
    {
LABEL_19:
      if ( m_nCount <= ++v15 )
        goto LABEL_25;
      continue;
    }
    break;
  }
  if ( pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v17 = pEntityKeyValues->m_keyValues.m_pElements;
  else
    v17 = 0;
  v18 = &v17[v15].m_value;
LABEL_26:
  v69 = "CREATE_FOR_CLIENTS_WHO_CONNECT_LATER";
  if ( v18->m_type == 30 )
    v69 = v18->m_uint64;
  m_pEntityFilterName = parentDesc.m_pEntityFilterName;
  if ( m_nCount <= 0 )
  {
LABEL_40:
    v23 = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_39;
    goto LABEL_41;
  }
  v19 = pEntityKeyValues->m_keyHashes.m_nAllocated;
  v20 = 0;
  while ( 2 )
  {
    if ( v19 == 0 )
    {
      if ( *(4 * v20) == -251202724 )
        break;
      goto LABEL_33;
    }
    v21 = (&pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v19 > 9 )
      v21 = pEntityKeyValues->m_keyHashes.m_pElements;
    if ( v21[v20] != -251202724 )
    {
LABEL_33:
      if ( m_nCount <= ++v20 )
        goto LABEL_40;
      continue;
    }
    break;
  }
  if ( pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v22 = pEntityKeyValues->m_keyValues.m_pElements;
  else
    v22 = 0;
  v23 = &v22[v20].m_value;
  if ( v23->m_type == 30 )
LABEL_39:
    m_pEntityFilterName = v23->m_uint64;
LABEL_41:
  if ( m_nCount <= 0 )
  {
LABEL_53:
    v28 = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_52;
    goto LABEL_54;
  }
  v24 = pEntityKeyValues->m_keyHashes.m_nAllocated;
  v25 = 0;
  while ( v24 == 0 )
  {
    if ( *(4 * v25) == -1161640042 )
      goto LABEL_49;
LABEL_46:
    if ( m_nCount <= ++v25 )
      goto LABEL_53;
  }
  v26 = (&pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v24 > 9 )
    v26 = pEntityKeyValues->m_keyHashes.m_pElements;
  if ( v26[v25] != -1161640042 )
    goto LABEL_46;
LABEL_49:
  if ( pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v27 = pEntityKeyValues->m_keyValues.m_pElements;
  else
    v27 = 0;
  v28 = &v27[v25].m_value;
  m_type = v28->m_type;
  if ( m_type == 0 )
  {
LABEL_54:
    m_flTimeoutInterval = parentDesc.m_flTimeoutInterval;
    goto LABEL_55;
  }
LABEL_52:
  switch ( m_type )
  {
    case 1:
      m_float = v28->m_float;
      break;
    case 5:
      m_float = v28->m_int;
      break;
    case 6:
      m_float = v28->m_char;
      break;
    case 26:
      m_float = v28->m_uint64;
      break;
    case 30:
      v64 = strtod(v28->m_pszString, 0);
      m_nCount = pEntityKeyValues->m_keyHashes.m_nCount;
      m_float = v64;
      break;
    case 33:
      v60 = v28->m_uint64;
      if ( v28->m_int64 >= 0 )
        goto LABEL_122;
      v63 = v28->m_uint64 & 1 | (v28->m_uint64 >> 1);
      m_float = v63 + v63;
      break;
    case 34:
      m_float = v28->m_float64;
      break;
    case 37:
      LODWORD(v60) = v28->m_int;
LABEL_122:
      m_float = v60;
      break;
    default:
      switch ( m_type )
      {
        case 1:
          v66 = "float";
          break;
        case 3:
          v66 = "vector";
          break;
        case 4:
          v66 = "quaternion";
          break;
        case 5:
          v66 = "integer";
          break;
        case 6:
          v66 = "boolean";
          break;
        case 8:
          v66 = "character";
          break;
        case 9:
          v66 = "color";
          break;
        case 13:
          v66 = "ehandle";
          break;
        case 25:
          v66 = "vector2d";
          break;
        case 26:
          v66 = "int64";
          break;
        case 27:
          v66 = "vector4d";
          break;
        case 28:
          v66 = "resourcehandle";
          break;
        case 30:
          v66 = "cstring";
          break;
        case 31:
          v66 = "hscript";
          break;
        case 32:
          v66 = "variant";
          break;
        case 33:
          v66 = "uint64";
          break;
        case 34:
          v66 = "float64";
          break;
        case 37:
          v66 = "unsigned";
          break;
        case 38:
          v66 = "utlstringtoken";
          break;
        case 39:
          v66 = "qangle";
          break;
        case 48:
          v66 = "hscript_lightbinding";
          break;
        case 49:
          v66 = "js_value";
          break;
        case 50:
          v66 = "js_object";
          break;
        case 51:
          v66 = "js_array";
          break;
        case 52:
          v66 = "js_raw_args";
          break;
        default:
          v66 = "unknown_variant_type";
          break;
      }
      Warning("No conversion from %s to float now\n", v66);
      m_nCount = pEntityKeyValues->m_keyHashes.m_nCount;
      goto LABEL_54;
  }
  m_flTimeoutInterval = m_float;
LABEL_55:
  if ( m_nCount > 0 )
  {
    v30 = pEntityKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( v30 != 0 )
      {
        v32 = (&pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v30 > 9 )
          v32 = pEntityKeyValues->m_keyHashes.m_pElements;
        if ( v32[i] == -932051308 )
        {
LABEL_63:
          if ( pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
            v33 = pEntityKeyValues->m_keyValues.m_pElements;
          else
            v33 = 0;
          m_char = 0;
          v35 = &v33[i].m_value;
          v36 = v35->m_type;
          if ( v36 != 0 )
            goto LABEL_66;
          goto LABEL_68;
        }
      }
      else if ( *(4 * i) == -932051308 )
      {
        goto LABEL_63;
      }
    }
  }
  v35 = &CEntityKeyValues::sm_EmptyVariant;
  m_char = 0;
  v36 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v36 != 0 )
  {
LABEL_66:
    switch ( v36 )
    {
      case 1:
        m_char = v35->m_float != 0.0;
        break;
      case 5:
      case 37:
        m_char = v35->m_int != 0;
        break;
      case 6:
        m_char = v35->m_char;
        break;
      case 26:
      case 33:
        m_char = v35->m_uint64 != 0;
        break;
      case 30:
        v62 = v35->m_uint64;
        if ( strcmp(v35->m_pszString, "0") == 0 || strcmp(v62, "false") == 0 || strcmp(v62, "no") == 0 )
          goto LABEL_143;
        if ( strcmp(v62, "1") != 0 && strcmp(v62, "true") != 0 && strcmp(v62, "yes") != 0 )
        {
          Warning("Invalid conversion : CString '%s' to bool\n", v62);
          goto LABEL_142;
        }
        m_char = 1;
        break;
      case 34:
        m_char = v35->m_float64 != 0.0;
        break;
      default:
        v65 = VariantFieldTypeName(v36);
        Warning("No conversion from %s to bool now\n", v65);
LABEL_142:
        m_nCount = pEntityKeyValues->m_keyHashes.m_nCount;
LABEL_143:
        m_char = 0;
        break;
    }
  }
LABEL_68:
  if ( m_nCount <= 0 )
  {
LABEL_84:
    v41 = &CEntityKeyValues::sm_EmptyVariant;
    v42 = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( v42 != 0 )
      goto LABEL_79;
    goto LABEL_85;
  }
  v37 = pEntityKeyValues->m_keyHashes.m_nAllocated;
  v38 = 0;
  while ( v37 == 0 )
  {
    if ( *(4 * v38) == -467664362 )
      goto LABEL_76;
LABEL_73:
    if ( m_nCount <= ++v38 )
      goto LABEL_84;
  }
  v39 = (&pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v37 > 9 )
    v39 = pEntityKeyValues->m_keyHashes.m_pElements;
  if ( v39[v38] != -467664362 )
    goto LABEL_73;
LABEL_76:
  if ( pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v40 = pEntityKeyValues->m_keyValues.m_pElements;
  else
    v40 = 0;
  v41 = &v40[v38];
  v42 = *(v41 + 4);
  if ( v42 == 0 )
  {
LABEL_85:
    x = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
    goto LABEL_86;
  }
LABEL_79:
  if ( v42 == 30 )
  {
    if ( V_sscanf(
           *v41,
           "%g %g %g",
           &desc,
           &desc.m_vecWorldOffset.m_flMatVal[0][1],
           &desc.m_vecWorldOffset.m_flMatVal[0][2]) == 3 )
    {
      z = desc.m_vecWorldOffset.m_flMatVal[0][2];
      x = desc.m_vecWorldOffset.m_flMatVal[0][0];
      y = desc.m_vecWorldOffset.m_flMatVal[0][1];
      m_nCount = pEntityKeyValues->m_keyHashes.m_nCount;
      goto LABEL_86;
    }
LABEL_83:
    m_nCount = pEntityKeyValues->m_keyHashes.m_nCount;
    goto LABEL_85;
  }
  if ( v42 != 39 && v42 != 3 )
  {
    v43 = VariantFieldTypeName(v42);
    Warning("No free conversion of %s variant to Vector right now\n", v43);
    goto LABEL_83;
  }
  y = (*v41)[1];
  x = **v41;
  z = (*v41)[2];
LABEL_86:
  vOrigin.x = x;
  vOrigin.y = y;
  vOrigin.z = z;
  if ( m_nCount <= 0 )
  {
LABEL_97:
    v51 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_98;
  }
  v47 = pEntityKeyValues->m_keyHashes.m_nAllocated;
  v48 = 0;
  while ( 2 )
  {
    if ( v47 == 0 )
    {
      if ( *(4 * v48) == -1164387633 )
        break;
      goto LABEL_91;
    }
    v49 = (&pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v47 > 9 )
      v49 = pEntityKeyValues->m_keyHashes.m_pElements;
    if ( v49[v48] != -1164387633 )
    {
LABEL_91:
      if ( m_nCount <= ++v48 )
        goto LABEL_97;
      continue;
    }
    break;
  }
  if ( pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v50 = pEntityKeyValues->m_keyValues.m_pElements;
  else
    v50 = 0;
  v51 = &v50[v48];
LABEL_98:
  v52 = *(v51 + 4);
  if ( v52 == 0 )
  {
LABEL_99:
    v53 = vec3_angle.x;
    v54 = vec3_angle.y;
    v55 = vec3_angle.z;
    goto LABEL_100;
  }
  if ( v52 == 4 )
  {
    QuaternionAngles(*v51, &desc);
    v54 = desc.m_vecWorldOffset.m_flMatVal[0][1];
    v53 = desc.m_vecWorldOffset.m_flMatVal[0][0];
    v55 = desc.m_vecWorldOffset.m_flMatVal[0][2];
  }
  else if ( v52 <= 4 )
  {
    if ( v52 != 3 )
      goto LABEL_113;
LABEL_111:
    v55 = (*v51)[2];
    v53 = **v51;
    v54 = (*v51)[1];
  }
  else
  {
    if ( v52 != 30 )
    {
      if ( v52 == 39 )
        goto LABEL_111;
LABEL_113:
      v59 = VariantFieldTypeName(v52);
      Warning("No free conversion of %s variant to QAngle right now\n", v59);
      goto LABEL_99;
    }
    mPrefabToWorld.m_flMatVal[0][0] = 0.0;
    if ( V_sscanf(
           *v51,
           "%g %g %g %g",
           &desc,
           &desc.m_vecWorldOffset.m_flMatVal[0][1],
           &desc.m_vecWorldOffset.m_flMatVal[0][2],
           &mPrefabToWorld) != 3 )
      goto LABEL_99;
    v54 = desc.m_vecWorldOffset.m_flMatVal[0][1];
    v53 = desc.m_vecWorldOffset.m_flMatVal[0][0];
    v55 = desc.m_vecWorldOffset.m_flMatVal[0][2];
  }
LABEL_100:
  vAngles.x = v53;
  vAngles.y = v54;
  vAngles.z = v55;
  AngleMatrix(&vAngles, &vOrigin, &mPrefabToOwner);
  ConcatTransforms(mOwnerToWorld, &mPrefabToOwner, &mPrefabToWorld);
  if ( m_uint64 != 0 )
  {
    desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
    desc.m_bDontSpawnEntities = 0;
    memset(&desc.m_pWorldName, 0, 72);
    desc.m_iPriorityLoader = -2;
    desc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
    desc.m_flTimeoutInterval = 0.0;
    desc.m_pSaveFileName = 0;
    desc.m_bBlockUntilLoaded = 0;
    desc.m_bLoadStreamingData = 1;
    desc.m_bCreateNewSceneWorld = 0;
    desc.m_bManualCompletion = 0;
    desc.m_bSetActivePostLoad = 0;
    SetIdentityMatrix(&desc.m_vecWorldOffset);
    desc.m_pWorldName = m_uint64;
    desc.m_hOwner = 0;
    desc.m_pEntityLumpName = 0;
    desc.m_pEntityFilterName = m_pEntityFilterName;
    desc.m_pDescriptiveName = "point_prefab";
    desc.m_flTimeoutInterval = m_flTimeoutInterval;
    desc.m_vecWorldOffset = mPrefabToWorld;
    desc.m_worldGroupId.m_nHashCode = parentDesc.m_worldGroupId.m_nHashCode;
    desc.m_manifestLoadPriority = parentDesc.m_manifestLoadPriority;
    desc.m_bLoadStreamingData = parentDesc.m_bLoadStreamingData;
    desc.m_bCreateNewSceneWorld = parentDesc.m_bCreateNewSceneWorld;
    parentNameFixup.m_pString = 0;
    desc.m_bCreateClientEntitiesOnLaterConnectingClients = V_stricmp_fast(v69, "CREATE_FOR_CLIENTS_WHO_CONNECT_LATER") == 0;
    if ( m_char != 0 )
    {
      ++CGameEntitySystem::HandlePointPrefab(unsigned int,ILoadingSpawnGroup *,matrix3x4a_t const&,CEntityKeyValues const*)::s_iUniquePrefabInstance;
      SpawnGroupParentNameFixup = CSpawnGroupMgrGameSystem::GetSpawnGroupParentNameFixup(
                                    g_pSpawnGroupMgr,
                                    hParentSpawnGroup);
      CUtlString::Format(
        &parentNameFixup,
        "%dd_%s",
        CGameEntitySystem::HandlePointPrefab(unsigned int,ILoadingSpawnGroup *,matrix3x4a_t const&,CEntityKeyValues const*)::s_iUniquePrefabInstance,
        SpawnGroupParentNameFixup);
    }
    else
    {
      v56 = CSpawnGroupMgrGameSystem::GetSpawnGroupParentNameFixup(g_pSpawnGroupMgr, hParentSpawnGroup);
      CUtlString::operator=(&parentNameFixup, v56);
    }
    desc.m_pParentNameFixup = CUtlString::Get(&parentNameFixup);
    desc.m_pLocalNameFixup = CSpawnGroupMgrGameSystem::GetSpawnGroupLocalNameFixup(g_pSpawnGroupMgr, hParentSpawnGroup);
    v57 = (*(*engine + 456LL))(engine, &desc);
    CSpawnGroupMgrGameSystem::AddChildSpawnGroup(g_pSpawnGroupMgr, hParentSpawnGroup, v57);
    if ( parentNameFixup.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&parentNameFixup);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
  {
    LoggingSystem_Log(LOG_ENTITY_SYSTEM, 2, "Encountered point_prefab with no targetMapName key!\n");
  }
}


// CGameEntitySystem::ExtractClientServerSpecificEntities  (line 1208, @0x00000000020d74a0, libserver.so)  // inlines: AddToTail, AssignTo, Base, CopyConstruct<const CEntityKeyValues*>, Element, FindKeyHash, GetValue, GetValue<bool>, GetValueString, GrowMemory, LeafCodeInfo_t, TempString, _V_strcmp, operator[]
// calls: Warning, VariantFieldTypeName, CUtlMemory<const CEntityKeyValues*, int>::Grow, CEntitySystem::FindClassByDesignName, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CGameEntitySystem::BuildResourceManifest, CGameEntitySystem::CreateSpawnGroupEntities
// strings: "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/gameentit, "ExtractClientServerSpecificEntities" (7 total)
// globals: jpt_20D7564, CEntityKeyValues::sm_EmptyVariant
void __fastcall CGameEntitySystem::ExtractClientServerSpecificEntities(
        CGameEntitySystem *const this,
        CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pOutKeyValues,
        const CEntityKeyValues **pInKeyValues,
        int nKeyCount)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  const CEntityKeyValues **v9; // r15
  const CEntityKeyValues **v12; // rbx
  const CEntityKeyValues *v13; // rdx
  int m_nCount; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v16; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rcx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  __int64 m_Size; // rax
  int v22; // ecx
  const CEntityKeyValues **v23; // rax
  char m_char; // al
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v25; // si
  __int64 v26; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v27; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v28; // rdx
  CEntityVariant *v29; // rax
  const char *v30; // rsi
  const char *m_uint64; // rax
  const char *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *v37; // rdx
  const char *v38; // rcx
  CGameEntitySystem *const v39; // rdi
  SpawnGroupHandle_t v40; // esi
  IEntityPrecacheConfiguration *v41; // r8
  IEntityResourceManifest *v42; // r9
  CUtlVectorBase<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> >::CAllocator *p_m_Memory; // [rsp-18h] [rbp-70h]
  int v44; // [rsp-Ch] [rbp-64h]
  const CEntityKeyValues *v45; // [rsp-8h] [rbp-60h]
  const CEntityKeyValues *v46; // [rsp-8h] [rbp-60h]
  const CEntityKeyValues *v47; // [rsp-8h] [rbp-60h]
  const CEntityKeyValues *pCurrentKey; // [rsp+0h] [rbp-58h] BYREF
  int v49; // [rsp+8h] [rbp-50h]
  const char *v50; // [rsp+10h] [rbp-48h]
  __int64 v51; // [rsp+28h] [rbp-30h]
  __int64 v52; // [rsp+38h] [rbp-20h]
  __int64 v53; // [rsp+40h] [rbp-18h]
  __int64 v54; // [rsp+48h] [rbp-10h]
  __int64 v55; // [rsp+50h] [rbp-8h]

  if ( pInKeyValues == 0 || nKeyCount <= 0 )
    return;
  v55 = v5;
  v54 = v8;
  v9 = pInKeyValues;
  v53 = v7;
  v52 = v6;
  v51 = v4;
  v12 = &pInKeyValues[(nKeyCount - 1) + 1];
  p_m_Memory = &pOutKeyValues->m_Memory;
  while ( 1 )
  {
    v13 = *v9;
    m_nCount = (*v9)->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_16:
      p_m_value = &CEntityKeyValues::sm_EmptyVariant;
      m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
      if ( m_type != 0 )
        break;
      goto LABEL_17;
    }
    m_nAllocated = v13->m_keyHashes.m_nAllocated;
    v16 = 0;
    while ( m_nAllocated == 0 )
    {
      if ( *(4 * v16) == -1037279173 )
        goto LABEL_12;
LABEL_9:
      if ( m_nCount <= ++v16 )
        goto LABEL_16;
    }
    m_pElements = (&v13->m_keyHashes.m_nAllocAllocated + 1);
    if ( m_nAllocated > 9 )
      m_pElements = v13->m_keyHashes.m_pElements;
    if ( m_pElements[v16] != -1037279173 )
      goto LABEL_9;
LABEL_12:
    v18 = v13->m_keyValues.m_nAllocated != 0 ? v13->m_keyValues.m_pElements : 0LL;
    p_m_value = &v18[v16].m_value;
    m_type = p_m_value->m_type;
    if ( m_type != 0 )
      break;
LABEL_17:
    m_Size = pOutKeyValues->m_Size;
    v22 = pOutKeyValues->m_Size;
    if ( m_Size == pOutKeyValues->m_Memory.m_nAllocationCount )
    {
LABEL_48:
      v44 = m_Size;
      v47 = v13;
      CUtlMemory<CEntityKeyValues const*,int>::Grow(p_m_Memory, 1);
      v22 = pOutKeyValues->m_Size;
      m_Size = v44;
      v13 = v47;
    }
LABEL_18:
    pOutKeyValues->m_Size = v22 + 1;
    v23 = &pOutKeyValues->m_Memory.m_pMemory[m_Size];
    if ( v23 != 0 )
      *v23 = v13;
LABEL_20:
    if ( ++v9 == v12 )
      return;
  }
  switch ( m_type )
  {
    case 1:
      m_char = p_m_value->m_float != 0.0;
      goto LABEL_23;
    case 5:
    case 37:
      m_char = p_m_value->m_int != 0;
      goto LABEL_23;
    case 6:
      m_char = p_m_value->m_char;
      goto LABEL_23;
    case 26:
    case 33:
      m_char = p_m_value->m_uint64 != 0;
      goto LABEL_23;
    case 30:
      m_uint64 = p_m_value->m_uint64;
      if ( strcmp(p_m_value->m_pszString, "0") == 0 || strcmp(m_uint64, "false") == 0 || strcmp(m_uint64, "no") == 0 )
        goto LABEL_17;
      if ( strcmp(m_uint64, "1") == 0 || strcmp(m_uint64, "true") == 0 || strcmp(m_uint64, "yes") == 0 )
        goto LABEL_24;
      v45 = *v9;
      Warning("Invalid conversion : CString '%s' to bool\n", m_uint64);
      v13 = v45;
      goto LABEL_17;
    case 34:
      m_char = p_m_value->m_float64 != 0.0;
LABEL_23:
      if ( m_char == 0 )
        goto LABEL_17;
LABEL_24:
      if ( m_nCount <= 0 )
        goto LABEL_49;
      v25 = v13->m_keyHashes.m_nAllocated;
      v26 = 0;
      break;
    default:
      v46 = *v9;
      v32 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to bool now\n", v32);
      m_Size = pOutKeyValues->m_Size;
      v13 = v46;
      v22 = pOutKeyValues->m_Size;
      if ( m_Size == pOutKeyValues->m_Memory.m_nAllocationCount )
        goto LABEL_48;
      goto LABEL_18;
  }
  do
  {
    if ( v25 != 0 )
    {
      v27 = (&v13->m_keyHashes.m_nAllocAllocated + 1);
      if ( v25 > 9 )
        v27 = v13->m_keyHashes.m_pElements;
      if ( v27[v26] == -971301790 )
      {
LABEL_32:
        if ( v13->m_keyValues.m_nAllocated != 0 )
          v28 = v13->m_keyValues.m_pElements;
        else
          v28 = 0;
        v29 = &v28[v26].m_value;
        v30 = "";
        if ( v29->m_type == 30 )
          goto LABEL_35;
        goto LABEL_50;
      }
    }
    else if ( *(4 * v26) == -971301790 )
    {
      goto LABEL_32;
    }
    ++v26;
  }
  while ( m_nCount > v26 );
LABEL_49:
  v29 = &CEntityKeyValues::sm_EmptyVariant;
  v30 = "";
  if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
LABEL_35:
    v30 = v29->m_uint64;
LABEL_50:
  if ( *v30 != 0 )
  {
    CEntitySystem::FindClassByDesignName(this, v30, 0);
    goto LABEL_20;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    pCurrentKey = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/gameentitysystem.cpp";
    v50 = "ExtractClientServerSpecificEntities";
    v49 = 1227;
    LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &pCurrentKey, "classname missing from entity!\n");
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v35, v36, v33, v34) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  CGameEntitySystem::BuildResourceManifest(v39, v40, v37, v38, v41, v42);
}


// CGameEntitySystem::FindSpawnGroupFilter  (line 1244, @0x00000000020d6f40, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find
// callers: CEntitySpawnerAsync<CBaseEntity>::CEntitySpawnerAsync, CGameEntitySystem::BuildResourceManifest, CGameEntitySystem::CreateSpawnGroupEntities, CEntitySpawnerAsync<CBaseEntity>::Init, CEntitySpawnerAsyncBase<CBaseEntity>::Init, CEntitySpawnerAsyncBase<CPointHMDAnchor>::Init, CEntitySpawnerAsync<CPhysicsProp>::Init, CEntitySpawnerAsync<CDOTA_BaseNPC>::Init, CEntitySpawnerAsync<CDOTA_Item>::Init, CEntitySpawnerAsync<CDOTA_Item_Physical>::Init
ISpawnGroupEntityFilter *__fastcall CGameEntitySystem::FindSpawnGroupFilter(
        CGameEntitySystem *const this,
        const char *pFilterName)
{
  int v3; // eax
  CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t v5; // [rsp-38h] [rbp-38h] BYREF

  if ( pFilterName == 0 || *pFilterName == 0 )
    return 0;
  v5.key = pFilterName;
  v3 = CUtlRBTree<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CGameEntitySystem::SpawnGroupEntityFilterInfo_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
         (&stru_1A070 + this),
         &v5);
  if ( v3 == -1 )
    return 0;
  else
    return this->m_spawnGroupEntityFilters.m_Elements.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem.m_pFilter;
}


// CGameEntitySystem::CreateSpawnGroupEntitiesFromSaveRestoreData  (line 1251, @0x00000000020cdc70, libserver.so)  // inlines: CLoadingSpawnGroup, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Clear, SetSaveRestoreFileData, ~CUtlBuffer, ~CUtlMemory, ~CUtlString, ~CUtlVector
// calls: operator new, CUtlScratchMemoryPool::CUtlScratchMemoryPool, CUtlBuffer::CUtlBuffer, CUtlScratchMemoryPool::Init, CUtlBuffer::AddNullTermination, CUtlBuffer::Put, CUtlVectorBase<EntitySpawnInfo_t, CUtlMemory<EntitySpawnInfo_t, int> >::~CUtlVectorBase, operator delete, _Unwind_Resume, CUtlString::FreeMemoryBlock, CUtlMemory<unsigned char, int>::Purge, CUtlScratchMemoryPool::~CUtlScratchMemoryPool
// callers: CSpawnGroupMgrGameSystem::CreateLoadingSpawnGroupForSaveFile
ILoadingSpawnGroup *__fastcall CGameEntitySystem::CreateSpawnGroupEntitiesFromSaveRestoreData(
        CGameEntitySystem *const this,
        SpawnGroupHandle_t h,
        const matrix3x4a_t *const vecSpawnOffset,
        CreateSpawnGroupType_t createType,
        const void *pSaveData,
        size_t nSaveDataSize,
        CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *pOutHandles)
{
  int v7; // r15d
  char *v9; // rbx

  v7 = nSaveDataSize;
  v9 = operator new(0x90u);
  *(v9 + 2) = 0;
  *(v9 + 2) = 0;
  *v9 = off_3FF6610;
  *(v9 + 6) = 0;
  *(v9 + 7) = 0;
  CUtlScratchMemoryPool::CUtlScratchMemoryPool(v9 + 2);
  CUtlBuffer::CUtlBuffer((v9 + 48), 0, 0, 0);
  *(v9 + 16) = 0;
  *(v9 + 17) = 0;
  CUtlScratchMemoryPool::Init(v9 + 2, 0x2000, 0, 0);
  *(v9 + 16) = 0;
  *(v9 + 17) = 0;
  v9[72] = 0;
  *(v9 + 21) = 0;
  *(v9 + 20) = -1;
  CUtlBuffer::AddNullTermination((v9 + 48));
  CUtlBuffer::Put((v9 + 48), pSaveData, v7);
  return v9;
}


// CGameEntitySystem::CreateSpawnGroupEntities  (line 1262, @0x00000000020d8840, libserver.so)  // inlines: AddRef, CLoadingSpawnGroup, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, EnsureCapacity, OverrideAllocator, Purge, Release, RemoveAll, memcpy, ~CUtlBuffer, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CGameEntitySystem::FindSpawnGroupFilter, operator new, CUtlScratchMemoryPool::CUtlScratchMemoryPool, CUtlBuffer::CUtlBuffer, CUtlScratchMemoryPool::Init, CGameEntitySystem::ExtractClientServerSpecificEntities, CGameEntitySystem::UniqueifyEntityNames, CEntityKeyValues::~CEntityKeyValues, operator delete, CGameEntitySystem::SpawnLoadingEntities, CUtlMemory<const CEntityKeyValues*, int>::Purge, memcpy (19 total)
// callers: CSpawnGroupMgrGameSystem::CreateLoadingSpawnGroup, CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink, CreateInstanceFromLump
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
ILoadingSpawnGroup *__fastcall CGameEntitySystem::CreateSpawnGroupEntities(
        CGameEntitySystem *const this,
        SpawnGroupHandle_t hSpawnGroup,
        const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pKeyValues,
        const matrix3x4a_t *const vecSpawnOffset,
        const char *pFilterName,
        CreateSpawnGroupType_t createType,
        const NameFixupSettings_t *pNameFixupSettings,
        CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *pOutHandles)
{
  const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *p_scratchEmptyKeyValues; // r13
  ISpawnGroupEntityFilter *SpawnGroupFilter; // r15
  ILoadingSpawnGroup *v10; // r12
  CUtlScratchMemoryPool *v11; // rax
  int m_Size; // r14d
  int v13; // ecx
  const CEntityKeyValues **m_pMemory; // rdx
  void *v15; // rsp
  int v16; // ecx
  const CEntityKeyValues **v17; // rsi
  __int64 v18; // rax
  const CEntityKeyValues *v19; // rdx
  void *v20; // rsp
  int v21; // ebx
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *p_uniqueifiedValues; // r13
  bool v23; // cc
  int vptr_ILoadingSpawnGroup_high; // eax
  int (**v25)(...); // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r15
  unsigned __int64 v29; // rbx
  __int64 v30; // r15
  int v31; // r14d
  CEntityKeyValues *v32; // rbx
  void (__fastcall *v33)(IGameResourceService *, _QWORD, _QWORD, __int64, const matrix3x4a_t *); // r13
  __int64 v34; // r15
  unsigned int v35; // eax
  CUtlVectorBase<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> >::CAllocator *p_m_Memory; // rbx
  int (**vptr_ILoadingSpawnGroup)(...); // r15
  int (**v39)(...); // rax
  void *v40; // rsp
  NameFixupSettings_t *v41; // [rsp+10h] [rbp-E0h] BYREF
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pSrcEntities; // [rsp+18h] [rbp-D8h]
  CUtlScratchMemoryPool *v43; // [rsp+20h] [rbp-D0h]
  CGameEntitySystem *thisa; // [rsp+28h] [rbp-C8h]
  const matrix3x4a_t *vecSpawnOffseta; // [rsp+30h] [rbp-C0h]
  SpawnGroupHandle_t hSpawnGroupa; // [rsp+38h] [rbp-B8h]
  CreateSpawnGroupType_t createTypea; // [rsp+3Ch] [rbp-B4h]
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > scratchEmptyKeyValues; // [rsp+40h] [rbp-B0h] BYREF
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > filteredKeyValues; // [rsp+60h] [rbp-90h] BYREF
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > pOutKeyValues; // [rsp+80h] [rbp-70h] BYREF
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > uniqueifiedValues; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v52; // [rsp+B8h] [rbp-38h]

  p_scratchEmptyKeyValues = pKeyValues;
  hSpawnGroupa = hSpawnGroup;
  thisa = this;
  vecSpawnOffseta = vecSpawnOffset;
  createTypea = createType;
  scratchEmptyKeyValues.m_Size = 0;
  v41 = pNameFixupSettings;
  scratchEmptyKeyValues.m_Memory.m_pMemory = 0;
  scratchEmptyKeyValues.m_Memory.m_nAllocationCount = 0;
  scratchEmptyKeyValues.m_Memory.m_nGrowSize = 0;
  v52 = __readfsqword(0x28u);
  if ( pKeyValues == 0 )
    p_scratchEmptyKeyValues = &scratchEmptyKeyValues;
  SpawnGroupFilter = CGameEntitySystem::FindSpawnGroupFilter(this, pFilterName);
  v10 = operator new(0x90u);  // new CLoadingSpawnGroup (size matches)
  LODWORD(v10[1]._vptr_ILoadingSpawnGroup) = 0;
  v10->_vptr_ILoadingSpawnGroup = off_3FF6610;  // vptr: CLoadingSpawnGroup
  v10[2]._vptr_ILoadingSpawnGroup = 0;
  LODWORD(v10[3]._vptr_ILoadingSpawnGroup) = 0;
  HIDWORD(v10[3]._vptr_ILoadingSpawnGroup) = 0;
  CUtlScratchMemoryPool::CUtlScratchMemoryPool(&v10[4]);
  CUtlBuffer::CUtlBuffer(&v10[6], 0, 0, 0);
  v10[16]._vptr_ILoadingSpawnGroup = 0;
  v10[17]._vptr_ILoadingSpawnGroup = 0;
  CUtlScratchMemoryPool::Init(&v10[4], 0x2000, 0, 0);
  v11 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v10[4];
  filteredKeyValues.m_Size = 0;
  filteredKeyValues.m_Memory.m_pMemory = 0;
  filteredKeyValues.m_Memory.m_nAllocationCount = 0;
  v43 = v11;
  filteredKeyValues.m_Memory.m_nGrowSize = 0;
  if ( SpawnGroupFilter != 0 )
  {
    m_Size = p_scratchEmptyKeyValues->m_Size;
    if ( p_scratchEmptyKeyValues->m_Size > 0 )
    {
      filteredKeyValues.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 8LL * m_Size);
      filteredKeyValues.m_Memory.m_nAllocationCount = m_Size;
    }
    (*(SpawnGroupFilter->_vptr_ISpawnGroupEntityFilter + 2))(
      SpawnGroupFilter,
      hSpawnGroupa,
      0,
      p_scratchEmptyKeyValues,
      &filteredKeyValues);
    p_scratchEmptyKeyValues = &filteredKeyValues;
  }
  v13 = p_scratchEmptyKeyValues->m_Size;
  pOutKeyValues.m_Size = 0;
  m_pMemory = p_scratchEmptyKeyValues->m_Memory.m_pMemory;
  pOutKeyValues.m_Memory.m_nGrowSize = 0x40000000;
  pOutKeyValues.m_Memory.m_nAllocationCount = v13;
  v15 = alloca(((8LL * v13 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  pOutKeyValues.m_Memory.m_pMemory = (&v41 & 0xFFFFFFFFFFFFFFEFLL);
  pSrcEntities = &pOutKeyValues;
  CGameEntitySystem::ExtractClientServerSpecificEntities(thisa, &pOutKeyValues, m_pMemory, v13);
  v16 = pOutKeyValues.m_Size;
  if ( pOutKeyValues.m_Size <= 0 )
  {
    uniqueifiedValues.m_Size = 0;
    uniqueifiedValues.m_Memory.m_nAllocationCount = pOutKeyValues.m_Size;
    uniqueifiedValues.m_Memory.m_nGrowSize = 0x40000000;
    v40 = alloca(((8LL * pOutKeyValues.m_Size + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    uniqueifiedValues.m_Memory.m_pMemory = (&v41 & 0xFFFFFFFFFFFFFFEFLL);
    if ( pOutKeyValues.m_Size == 0 )
    {
      v21 = 0;
      p_uniqueifiedValues = pSrcEntities;
      goto LABEL_12;
    }
  }
  else
  {
    v17 = pOutKeyValues.m_Memory.m_pMemory;
    v18 = 0;
    do
    {
      v19 = v17[v18++];
      ++v19->m_nRefCount;
    }
    while ( v16 > v18 );
    uniqueifiedValues.m_Size = 0;
    uniqueifiedValues.m_Memory.m_nAllocationCount = v16;
    uniqueifiedValues.m_Memory.m_nGrowSize = 0x40000000;
    v20 = alloca(((8LL * v16 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    uniqueifiedValues.m_Memory.m_pMemory = (&v41 & 0xFFFFFFFFFFFFFFEFLL);
  }
  CGameEntitySystem::UniqueifyEntityNames(thisa, pSrcEntities, v41, &uniqueifiedValues);
  v21 = uniqueifiedValues.m_Size;
  p_uniqueifiedValues = &uniqueifiedValues;
LABEL_12:
  v23 = v21 <= SLODWORD(v10[3]._vptr_ILoadingSpawnGroup);
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = v43;
  if ( !v23 )
  {
    vptr_ILoadingSpawnGroup_high = HIDWORD(v10[3]._vptr_ILoadingSpawnGroup);
    if ( (vptr_ILoadingSpawnGroup_high & 0x40000000) == 0 )
    {
      if ( (vptr_ILoadingSpawnGroup_high & 0xC0000000) != 0 )
      {
        vptr_ILoadingSpawnGroup = v10[2]._vptr_ILoadingSpawnGroup;
        v39 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * v21);
        v10[2]._vptr_ILoadingSpawnGroup = v39;
        if ( vptr_ILoadingSpawnGroup != 0 )
          memcpy(v39, vptr_ILoadingSpawnGroup, 16LL * SLODWORD(v10[3]._vptr_ILoadingSpawnGroup));
        HIDWORD(v10[3]._vptr_ILoadingSpawnGroup) &= 0x3FFFFFFFu;
      }
      else
      {
        v25 = v10[2]._vptr_ILoadingSpawnGroup;
        v26 = *g_pMemAlloc;
        if ( v25 != 0 )
          v27 = (*(v26 + 8))(g_pMemAlloc, v25, 16LL * v21);
        else
          v27 = (*v26)(g_pMemAlloc, 16LL * v21);
        v10[2]._vptr_ILoadingSpawnGroup = v27;
      }
      LODWORD(v10[3]._vptr_ILoadingSpawnGroup) = v21;
    }
  }
  if ( v21 > 0 )
  {
    v28 = 8LL * (v21 - 1) + 8;
    v29 = 0;
    do
    {
      (*(v10->_vptr_ILoadingSpawnGroup + 9))(
        v10,
        hSpawnGroupa,
        vecSpawnOffseta,
        createTypea,
        p_uniqueifiedValues->m_Memory.m_pMemory[v29 / 8]);
      v29 += 8LL;
    }
    while ( v29 != v28 );
  }
  v30 = 0;
  v31 = 0;
  while ( p_uniqueifiedValues->m_Size > v31 )
  {
    while ( 1 )
    {
      v32 = p_uniqueifiedValues->m_Memory.m_pMemory[v30];
      v23 = --v32->m_nRefCount <= 0;
      if ( v23 )
        break;
      ++v31;
      ++v30;
      if ( p_uniqueifiedValues->m_Size <= v31 )
        goto LABEL_27;
    }
    ++v31;
    ++v30;
    CEntityKeyValues::~CEntityKeyValues(v32);
    operator delete(v32);
  }
LABEL_27:
  if ( createTypea == CreateSpawnGroupType_t::CREATE_SPAWN_GROUP_ASYNCHRONOUSLY
    || (v33 = *(*g_pGameResourceService + 280LL),
        v34 = (*(v10->_vptr_ILoadingSpawnGroup + 1))(v10),
        v35 = v10->EntityCount(),
        v33(g_pGameResourceService, hSpawnGroupa, v35, v34, vecSpawnOffseta),
        createTypea != CreateSpawnGroupType_t::CREATE_SPAWN_GROUP_IMMEDIATELY) )
  {
    uniqueifiedValues.m_Size = 0;
    if ( (uniqueifiedValues.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_30;
  }
  else
  {
    CGameEntitySystem::SpawnLoadingEntities(thisa, v10, pOutHandles);
    (*(v10->_vptr_ILoadingSpawnGroup + 11))(v10);
    v10 = 0;
    uniqueifiedValues.m_Size = 0;
    if ( (uniqueifiedValues.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_30;
  }
  CUtlMemory<CEntityKeyValues const*,int>::Purge(&uniqueifiedValues.m_Memory);
  if ( (uniqueifiedValues.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
LABEL_30:
    pOutKeyValues.m_Size = 0;
    if ( (pOutKeyValues.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_31;
    goto LABEL_37;
  }
  CUtlMemory<CEntityKeyValues const*,int>::Purge(&uniqueifiedValues.m_Memory);
  pOutKeyValues.m_Size = 0;
  if ( (pOutKeyValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
LABEL_37:
    p_m_Memory = &pSrcEntities->m_Memory;
    CUtlMemory<CEntityKeyValues const*,int>::Purge(&pSrcEntities->m_Memory);
    if ( (pOutKeyValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityKeyValues const*,int>::Purge(p_m_Memory);
  }
LABEL_31:
  filteredKeyValues.m_Size = 0;
  if ( (filteredKeyValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityKeyValues const*,int>::Purge(&filteredKeyValues.m_Memory);
    if ( (filteredKeyValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityKeyValues const*,int>::Purge(&filteredKeyValues.m_Memory);
  }
  scratchEmptyKeyValues.m_Size = 0;
  if ( (scratchEmptyKeyValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityKeyValues const*,int>::Purge(&scratchEmptyKeyValues.m_Memory);
    if ( (scratchEmptyKeyValues.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityKeyValues const*,int>::Purge(&scratchEmptyKeyValues.m_Memory);
  }
  return v10;
}


// CGameEntitySystem::CreateLoadingSpawnGroup  (line 1389, @0x00000000020cdb70, libserver.so)  // inlines: CLoadingSpawnGroup, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, ~CUtlBuffer, ~CUtlMemory, ~CUtlString, ~CUtlVector
// calls: operator new, CUtlScratchMemoryPool::CUtlScratchMemoryPool, CUtlBuffer::CUtlBuffer, CUtlScratchMemoryPool::Init, CUtlVectorBase<EntitySpawnInfo_t, CUtlMemory<EntitySpawnInfo_t, int> >::~CUtlVectorBase, operator delete, _Unwind_Resume, CUtlString::FreeMemoryBlock, CUtlMemory<unsigned char, int>::Purge, CUtlScratchMemoryPool::~CUtlScratchMemoryPool
// callers: CEntitySpawnerAsync<CBaseEntity>::CEntitySpawnerAsync, CEntitySpawnerAsync<CBaseEntity>::Init, CEntitySpawnerAsyncBase<CBaseEntity>::Init, CEntitySpawnerAsyncBase<CPointHMDAnchor>::Init, CEntitySpawnerAsync<CPhysicsProp>::Init, CEntitySpawnerAsync<CDOTA_BaseNPC>::Init, CEntitySpawnerAsync<CDOTA_Item>::Init, CEntitySpawnerAsync<CDOTA_Item_Physical>::Init
ILoadingSpawnGroup *__fastcall CGameEntitySystem::CreateLoadingSpawnGroup(CGameEntitySystem *const this)
{
  char *v1; // rbx

  v1 = operator new(0x90u);
  *(v1 + 2) = 0;
  *(v1 + 2) = 0;
  *v1 = off_3FF6610;
  *(v1 + 6) = 0;
  *(v1 + 7) = 0;
  CUtlScratchMemoryPool::CUtlScratchMemoryPool(v1 + 2);
  CUtlBuffer::CUtlBuffer((v1 + 48), 0, 0, 0);
  *(v1 + 16) = 0;
  *(v1 + 17) = 0;
  CUtlScratchMemoryPool::Init(v1 + 2, 0x2000, 0, 0);
  return v1;
}


// CGameEntitySystem::FindEntityProcedural  (line 1402, @0x00000000020f0500, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: CEntitySystem::FindEntityProcedural, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, UTIL_FindClientInPVS, UTIL_PlayerByIndex
// strings: "pvsplayer", "SV", "%s:  Invalid entity search name %s\n"
CEntityInstance *__fastcall CGameEntitySystem::FindEntityProcedural(
        CGameEntitySystem *const this,
        const char *szName,
        CEntityInstance *pSearchingEntity,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller)
{
  char *v6; // rax
  CEntityInstance *result; // rax
  CBasePlayer *v10; // rax

  if ( szName == 0 || *szName != 33 )
    return 0;
  v6 = (szName + 1);
  if ( szName + 1 == "player" || strcmp(szName + 1, "player") == 0 )
    return UTIL_PlayerByIndex(1);
  if ( v6 == "pvsplayer" || strcmp(v6, "pvsplayer") == 0 )
  {
    if ( pSearchingEntity != 0 )
      return UTIL_FindClientInPVS(pSearchingEntity);
    if ( pActivator != 0 )
      return UTIL_FindClientInPVS(pActivator);
    return UTIL_PlayerByIndex(1);
  }
  if ( v6 == "picker" || strcmp(v6, "picker") == 0 )
  {
    v10 = UTIL_PlayerByIndex(1);
    return (*(v10->_vptr_IHandleEntity + 531))(v10);
  }
  result = (*(g_pGameConfiguration->ISource2ClientConfig::IAppSystem::_vptr_IAppSystem + 19))(g_pGameConfiguration, v6);
  if ( result == 0 )
  {
    result = CEntitySystem::FindEntityProcedural(this, szName, pSearchingEntity, pActivator, pCaller);
    if ( result == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
        LoggingSystem_Log(LOG_SERVER, 0, "%s:  Invalid entity search name %s\n", "SV", szName);
      return 0;
    }
  }
  return result;
}


// CGameEntitySystem::FindEntityProcedural  (line 1459, @0x00000000020a4910, libserver.so)
// callers: CFlexExpresser::InputSpeakResponseConcept
CBaseEntity *__fastcall CGameEntitySystem::FindEntityProcedural(
        CGameEntitySystem *const this,
        const char *szName,
        CBaseEntity *pSearchingEntity,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  return (*(this->_vptr_IEntityResourceManifestBuilder + 13))(this, szName, pSearchingEntity, pActivator, pCaller);
}


// CGameEntitySystem::FindEntityByClassname  (line 1466, @0x00000000020a4920, libserver.so)
// calls: EntityInstanceByClassIter_t::EntityInstanceByClassIter_t, EntityInstanceByClassIter_t::Next
// callers: CPointCamera::InputForceActive, CPointCamera::InputSetOnAndTurnOthersOff, CScriptEntityIterator::FindByClassname, CScriptEntityIterator::FindAllByClassname, CMapSpawnGroup::OnSpawnGroupLoad, CGameEntitySystem::FindEntityByClassnameNearest, CGameEntitySystem::FindEntityByClassnameNearest2D, CGameEntitySystem::FindEntityByClassnameWithin, CGameEntitySystem::FindEntityGeneric, CC_GetCommandEnt, CRagdollMagnet::FindBestMagnet, CCommentarySystem::JumpToNextNode (87 total)
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByClassname(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        const char *szName)
{
  EntityInstanceByClassIter_t_0 iter; // [rsp+0h] [rbp-40h] BYREF

  EntityInstanceByClassIter_t::EntityInstanceByClassIter_t(
    &iter,
    pStartEntity,
    szName,
    0,
    EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
  return EntityInstanceByClassIter_t::Next(&iter);
}


// CGameEntitySystem::FindEntityByClassnameFast  (line 1485, @0x00000000020a4950, libserver.so)  // inlines: String
// calls: EntityInstanceByClassIter_t::EntityInstanceByClassIter_t, EntityInstanceByClassIter_t::Next
// callers: CMultiLightProxy::Activate, CGameEntitySystem::FindEntityByClassnameNearestFast
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByClassnameFast(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        string_t iszClassname)
{
  const char *v3; // rax
  EntityInstanceByClassIter_t_0 iter; // [rsp+0h] [rbp-40h] BYREF

  v3 = "";
  if ( *iszClassname.u.m_Id != 0 )
    v3 = *iszClassname.u.m_pAsString;
  EntityInstanceByClassIter_t::EntityInstanceByClassIter_t(
    &iter,
    pStartEntity,
    v3,
    0,
    EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
  return EntityInstanceByClassIter_t::Next(&iter);
}


// CGameEntitySystem::FindEntityByName  (line 1504, @0x00000000020a4990, libserver.so)
// calls: EntityInstanceByNameIter_t::EntityInstanceByNameIter_t, EntityInstanceByNameIter_t::Next
// callers: CBaseEntity::SpawnShared, CScriptEntityIterator::FindByName, CScriptEntityIterator::FindAllByName, CGameEntitySystem::FindEntityByNameNearest, CGameEntitySystem::FindEntityByNameWithin, CGameEntitySystem::FindEntityGeneric, AscertainSpeechSubjectFromContext, ResolveFollowupTargetToEntity, CC_GetCommandEnt, CAI_Expresser::FireEntIOFromResponse, CAI_ExpresserWithFollowup::SpeakDispatchResponse, CBeam::RandomTargetname (72 total)
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByName(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        const char *szName,
        CBaseEntity *pSearchingEntity,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        IEntityFindFilter *pFilter)
{
  EntityInstanceByNameIter_t iter; // [rsp+10h] [rbp-58h] BYREF

  if ( szName == 0 )
    return 0;
  EntityInstanceByNameIter_t::EntityInstanceByNameIter_t(
    &iter,
    pStartEntity,
    szName,
    pSearchingEntity,
    pActivator,
    pCaller,
    pFilter,
    EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
  return EntityInstanceByNameIter_t::Next(&iter);
}


// CGameEntitySystem::FindEntityByName  (line 1519, @0x00000000020a49e0, libserver.so)  // inlines: CUtlSymbolLarge
// calls: EntityInstanceByNameIter_t::EntityInstanceByNameIter_t, EntityInstanceByNameIter_t::Next
// callers: CEnvClock::Activate, CMultiLightProxy::Activate, CGameEntitySystem::FindEntityByNameFast, CDecal::GetDecalEntityAndPosition, CBaseEntity::Activate, CBaseEntity::InputSetDamageFilter, CAmbientGeneric::Activate, CBaseEntity::SetParent, CBaseEntity::GetNextTarget, CFuncVPhysicsClip::Activate, CPointCommentaryNode::Activate, CBaseButton::Spawn (85 total)
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByName(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        string_t iszName,
        CBaseEntity *pSearchingEntity,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        IEntityFindFilter *pFilter)
{
  string_t entityName; // [rsp+10h] [rbp-60h] BYREF
  EntityInstanceByNameIter_t iter; // [rsp+20h] [rbp-50h] BYREF

  entityName.u.m_Id = *iszName.u.m_Id;
  EntityInstanceByNameIter_t::EntityInstanceByNameIter_t(
    &iter,
    pStartEntity,
    &entityName,
    pSearchingEntity,
    pActivator,
    pCaller,
    pFilter,
    EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
  return EntityInstanceByNameIter_t::Next(&iter);
}


// CGameEntitySystem::FindEntityByNameFast  (line 1531, @0x00000000020a4a20, libserver.so)  // inlines: CUtlSymbolLarge
// calls: CGameEntitySystem::FindEntityByName
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByNameFast(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        string_t iszName)
{
  string_t iszNamea; // [rsp+10h] [rbp-10h] BYREF

  iszNamea.u.m_Id = *iszName.u.m_Id;
  return CGameEntitySystem::FindEntityByName(this, pStartEntity, &iszNamea, 0, 0, 0, 0);
}


// CGameEntitySystem::FindEntityByModel  (line 1542, @0x00000000020a4a50, libserver.so)  // inlines: FStrEq, GetInstance, String, ToCStr, _V_strcmp
// calls: CBaseEntity::GetModelName, strcmp, DevWarning(char const*,...)
// callers: CScriptEntityIterator::FindByModel, CScriptEntityIterator::FindAllByModel, CGameEntitySystem::FindEntityByModelWithin
// strings: "NULL entity in global entity list!\n"
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByModel(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        const char *szModelName)
{
  CEntityIdentity *m_pNext; // rbx
  CBaseEntity *m_pInstance; // r12
  const char *v6; // rdi
  _QWORD v8[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( pStartEntity != 0 )
    m_pNext = pStartEntity->m_pEntity->m_pNext;
  else
    m_pNext = this->m_EntityList.m_pFirstActiveEntity;
  if ( m_pNext == 0 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      m_pInstance = m_pNext->m_pInstance;
      if ( m_pNext->m_pInstance != 0 )
        break;
      DevWarning("NULL entity in global entity list!\n");
      m_pNext = m_pNext->m_pNext;
      if ( m_pNext == 0 )
        return 0;
    }
    CBaseEntity::GetModelName(v8, m_pNext->m_pInstance);
    if ( v8[0] != 0 )
    {
      CBaseEntity::GetModelName(v8, m_pInstance);
      v6 = v8[0];
      if ( v8[0] == 0 )
        v6 = "";
      if ( szModelName == v6 || strcmp(v6, szModelName) == 0 )
        break;
    }
    m_pNext = m_pNext->m_pNext;
    if ( m_pNext == 0 )
      return 0;
  }
  return m_pInstance;
}


// CGameEntitySystem::FindEntityByModelWithin  (line 1582, @0x00000000020a4b30, libserver.so)  // inlines: LengthSqr, VectorSubtract, operator-
// calls: CBaseEntity::GetAbsOrigin, CGameEntitySystem::FindEntityByModel
// callers: CScriptEntityIterator::FindByModelWithin
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByModelWithin(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        const char *szModelName,
        const Vector *const vecSrc,
        float flRadius)
{
  CBaseEntity *v8; // rbx
  const Vector *AbsOrigin; // rax
  CBaseEntity *EntityByModel; // rax
  float flMaxDist2; // [rsp+0h] [rbp-2Ch]

  v8 = pStartEntity;
  flMaxDist2 = flRadius * flRadius;
  if ( (flRadius * flRadius) == 0.0 )
    return CGameEntitySystem::FindEntityByModel(this, pStartEntity, szModelName);
  do
  {
    EntityByModel = CGameEntitySystem::FindEntityByModel(this, v8, szModelName);
    v8 = EntityByModel;
    if ( EntityByModel == 0 )
      return 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByModel);
  }
  while ( flMaxDist2 <= ((((AbsOrigin->x - vecSrc->x) * (AbsOrigin->x - vecSrc->x))
                        + ((AbsOrigin->y - vecSrc->y) * (AbsOrigin->y - vecSrc->y)))
                       + ((AbsOrigin->z - vecSrc->z) * (AbsOrigin->z - vecSrc->z))) );
  return v8;
}


// CGameEntitySystem::FindEntityByTarget  (line 1615, @0x00000000020a4c00, libserver.so)  // inlines: FStrEq, GetInstance, IsNullString, IsValid, _V_strcmp, operator!
// calls: strcmp, DevWarning(char const*,...)
// callers: CScriptEntityIterator::FindByTarget, CScriptEntityIterator::FindAllByTarget, CMultiSource::Register
// strings: "NULL entity in global entity list!\n"
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByTarget(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        const char *szName)
{
  CEntityIdentity *m_pNext; // rbx
  CBaseEntity *m_pInstance; // r12
  const char *m_pAsString; // rdi

  if ( pStartEntity != 0 )
    m_pNext = pStartEntity->m_pEntity->m_pNext;
  else
    m_pNext = this->m_EntityList.m_pFirstActiveEntity;
  while ( 1 )
  {
    if ( m_pNext == 0 )
      return 0;
    m_pInstance = m_pNext->m_pInstance;
    if ( m_pNext->m_pInstance == 0 )
    {
      DevWarning("NULL entity in global entity list!\n");
      goto LABEL_7;
    }
    m_pAsString = m_pInstance->m_target.u.m_pAsString;
    if ( m_pAsString != 0 && (szName == m_pAsString || strcmp(m_pAsString, szName) == 0) )
      return m_pInstance;
LABEL_7:
    m_pNext = m_pNext->m_pNext;
  }
}


// CGameEntitySystem::FindEntityInSphere  (line 1655, @0x00000000020a4c90, libserver.so)  // inlines: GetInstance, IsBoundsDefinedInEntitySpace, VectorITransform, VectorSubtract, WorldToCollisionSpace, operator/=, operator=, operator==
// calls: VectorITransform, IsBoxIntersectingSphere, DevWarning(char const*,...)
// callers: CScriptEntityIterator::FindInSphere, CScriptEntityIterator::FindAllInSphere, CPhysExplosion::FindEntity
// strings: "NULL entity in global entity list!\n"
CBaseEntity *__fastcall CGameEntitySystem::FindEntityInSphere(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        const Vector *const vecCenter,
        float flRadius)
{
  CEntityIdentity *m_pNext; // r14
  CEntityInstance *m_pInstance; // r12
  int (**vptr_IHandleEntity)(...); // rbx
  float v8; // xmm0_4
  float *v9; // rax
  double v10; // xmm1_8
  const matrix3x4_t *v11; // rax
  float v12; // xmm5_4
  const Vector *v13; // r15
  const Vector *v14; // rax
  float *v16; // rax
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  float v19; // [rsp+8h] [rbp-48h]
  float v20; // [rsp+8h] [rbp-48h]
  Vector vecRelativeCenter; // [rsp+10h] [rbp-40h] BYREF

  if ( pStartEntity != 0 )
    m_pNext = pStartEntity->m_pEntity->m_pNext;
  else
    m_pNext = this->m_EntityList.m_pFirstActiveEntity;
  if ( m_pNext == 0 )
    return 0;
  while ( 1 )
  {
    m_pInstance = m_pNext->m_pInstance;
    if ( m_pNext->m_pInstance != 0 )
      break;
    DevWarning("NULL entity in global entity list!\n");
LABEL_11:
    m_pNext = m_pNext->m_pNext;
    if ( m_pNext == 0 )
      return 0;
  }
  vptr_IHandleEntity = m_pInstance[11]._vptr_IHandleEntity;
  if ( vptr_IHandleEntity == 0 )
    goto LABEL_11;
  v8 = (*(*vptr_IHandleEntity + 27))(m_pInstance[11]._vptr_IHandleEntity);
  if ( v8 == 0.0 )
  {
    vecRelativeCenter = vec3_origin;
  }
  else if ( (*(vptr_IHandleEntity + 83) & 0xFD) == 0
         || (v19 = v8,
             v9 = (*(*vptr_IHandleEntity + 5))(vptr_IHandleEntity),
             v8 = v19,
             *&v10 = LODWORD(vec3_angle.x),
             vec3_angle.x == *v9)
         && (*&v10 = LODWORD(vec3_angle.y), *&v10 == v9[1])
         && (*&v10 = LODWORD(vec3_angle.z), *&v10 == v9[2]) )
  {
    v20 = v8;
    v16 = (*(*vptr_IHandleEntity + 4))(vptr_IHandleEntity);
    v17 = (vecCenter->y - v16[1]) * (1.0 / v20);
    v18 = (vecCenter->z - v16[2]) * (1.0 / v20);
    vecRelativeCenter.x = (vecCenter->x - *v16) * (1.0 / v20);
    vecRelativeCenter.y = v17;
    vecRelativeCenter.z = v18;
  }
  else
  {
    v11 = (*(*vptr_IHandleEntity + 6))(vptr_IHandleEntity, COERCE_DOUBLE(LODWORD(v19)), v10);
    VectorITransform(&vecCenter->x, v11, &vecRelativeCenter.x);
    v12 = 1.0 / (v19 * v19);
    vecRelativeCenter.x = vecRelativeCenter.x * v12;
    vecRelativeCenter.z = v12 * vecRelativeCenter.z;
    vecRelativeCenter.y = vecRelativeCenter.y * v12;
  }
  v13 = (*(*m_pInstance[11]._vptr_IHandleEntity + 2))(m_pInstance[11]._vptr_IHandleEntity);
  v14 = (*(*m_pInstance[11]._vptr_IHandleEntity + 1))(m_pInstance[11]._vptr_IHandleEntity);
  if ( !IsBoxIntersectingSphere(v14, v13, &vecRelativeCenter, flRadius) )
    goto LABEL_11;
  return m_pInstance;
}


// CGameEntitySystem::FindEntityByNameNearest  (line 1697, @0x00000000020a4f00, libserver.so)  // inlines: LengthSqr, VectorSubtract, operator-
// calls: CGameEntitySystem::FindEntityByName, CBaseEntity::GetAbsOrigin
// callers: CScriptEntityIterator::FindByNameNearest, CGameEntitySystem::FindEntityGenericNearest
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByNameNearest(
        CGameEntitySystem *const this,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius,
        CBaseEntity *pSearchingEntity,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  CBaseEntity *v11; // r12
  CBaseEntity *EntityByName; // rax
  const Vector *AbsOrigin; // rax
  CBaseEntity *pEntity; // [rsp+10h] [rbp-58h]
  float flMaxDist2; // [rsp+2Ch] [rbp-3Ch]

  flMaxDist2 = flRadius * flRadius;
  if ( (flRadius * flRadius) == 0.0 )
    flMaxDist2 = 3221225500.0;
  v11 = 0;
  pEntity = 0;
  while ( 1 )
  {
    EntityByName = CGameEntitySystem::FindEntityByName(this, v11, szName, pSearchingEntity, pActivator, pCaller, 0);
    v11 = EntityByName;
    if ( EntityByName == 0 )
      break;
    AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByName);
    if ( flMaxDist2 > ((((AbsOrigin->x - vecSrc->x) * (AbsOrigin->x - vecSrc->x))
                      + ((AbsOrigin->y - vecSrc->y) * (AbsOrigin->y - vecSrc->y)))
                     + ((AbsOrigin->z - vecSrc->z) * (AbsOrigin->z - vecSrc->z))) )
    {
      flMaxDist2 = (((AbsOrigin->x - vecSrc->x) * (AbsOrigin->x - vecSrc->x))
                  + ((AbsOrigin->y - vecSrc->y) * (AbsOrigin->y - vecSrc->y)))
                 + ((AbsOrigin->z - vecSrc->z) * (AbsOrigin->z - vecSrc->z));
      pEntity = v11;
    }
  }
  return pEntity;
}


// CGameEntitySystem::FindEntityByNameWithin  (line 1738, @0x00000000020a5000, libserver.so)  // inlines: LengthSqr, VectorSubtract, operator-
// calls: CBaseEntity::GetAbsOrigin, CGameEntitySystem::FindEntityByName
// callers: CScriptEntityIterator::FindByNameWithin, CScriptEntityIterator::FindAllByNameWithin, CGameEntitySystem::FindEntityGenericWithin
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByNameWithin(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius,
        CBaseEntity *pSearchingEntity,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  CBaseEntity *v10; // r12
  const Vector *AbsOrigin; // rax
  CBaseEntity *EntityByName; // rax
  float flMaxDist2; // [rsp+Ch] [rbp-4Ch]

  v10 = pStartEntity;
  flMaxDist2 = flRadius * flRadius;
  if ( (flRadius * flRadius) == 0.0 )
    return CGameEntitySystem::FindEntityByName(this, pStartEntity, szName, pSearchingEntity, pActivator, pCaller, 0);
  do
  {
    EntityByName = CGameEntitySystem::FindEntityByName(this, v10, szName, pSearchingEntity, pActivator, pCaller, 0);
    v10 = EntityByName;
    if ( EntityByName == 0 )
      return 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByName);
  }
  while ( flMaxDist2 <= ((((AbsOrigin->x - vecSrc->x) * (AbsOrigin->x - vecSrc->x))
                        + ((AbsOrigin->y - vecSrc->y) * (AbsOrigin->y - vecSrc->y)))
                       + ((AbsOrigin->z - vecSrc->z) * (AbsOrigin->z - vecSrc->z))) );
  return v10;
}


// CGameEntitySystem::FindEntityByClassnameNearest  (line 1772, @0x00000000020a5100, libserver.so)  // inlines: LengthSqr, VectorSubtract, operator-
// calls: CGameEntitySystem::FindEntityByClassname, CBaseEntity::GetAbsOrigin
// callers: CScriptEntityIterator::FindByClassnameNearest, CGameEntitySystem::FindEntityGenericNearest, CDOTABaseGameMode::SpawnRunes
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByClassnameNearest(
        CGameEntitySystem *const this,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius)
{
  CBaseEntity *v7; // rbx
  CBaseEntity *v8; // r15
  CBaseEntity *EntityByClassname; // rax
  const Vector *AbsOrigin; // rax
  float flMaxDist2; // [rsp+0h] [rbp-3Ch]

  flMaxDist2 = flRadius * flRadius;
  if ( (flRadius * flRadius) == 0.0 )
    flMaxDist2 = 3221225500.0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(this, v7, szName);
    v7 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByClassname);
    if ( flMaxDist2 > ((((AbsOrigin->x - vecSrc->x) * (AbsOrigin->x - vecSrc->x))
                      + ((AbsOrigin->y - vecSrc->y) * (AbsOrigin->y - vecSrc->y)))
                     + ((AbsOrigin->z - vecSrc->z) * (AbsOrigin->z - vecSrc->z))) )
    {
      flMaxDist2 = (((AbsOrigin->x - vecSrc->x) * (AbsOrigin->x - vecSrc->x))
                  + ((AbsOrigin->y - vecSrc->y) * (AbsOrigin->y - vecSrc->y)))
                 + ((AbsOrigin->z - vecSrc->z) * (AbsOrigin->z - vecSrc->z));
      v8 = v7;
    }
  }
  return v8;
}


// CGameEntitySystem::FindEntityByClassnameNearestFast  (line 1801, @0x00000000020a51e0, libserver.so)  // inlines: CUtlSymbolLarge, LengthSqr, VectorSubtract, operator-
// calls: CGameEntitySystem::FindEntityByClassnameFast, CBaseEntity::GetAbsOrigin
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByClassnameNearestFast(
        CGameEntitySystem *const this,
        string_t iszName,
        const Vector *const vecSrc,
        float flRadius)
{
  CBaseEntity *v7; // r15
  const CBaseEntity *EntityByClassnameFast; // rax
  const Vector *AbsOrigin; // rax
  CBaseEntity *pEntity; // [rsp+0h] [rbp-58h]
  float flMaxDist2; // [rsp+Ch] [rbp-4Ch]
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  flMaxDist2 = flRadius * flRadius;
  if ( (flRadius * flRadius) == 0.0 )
    flMaxDist2 = 3221225500.0;
  pEntity = 0;
  v7 = 0;
  while ( 1 )
  {
    v13[0] = *iszName.u.m_Id;
    EntityByClassnameFast = CGameEntitySystem::FindEntityByClassnameFast(this, v7, v13);
    v7 = EntityByClassnameFast;
    if ( EntityByClassnameFast == 0 )
      break;
    AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByClassnameFast);
    if ( flMaxDist2 > ((((AbsOrigin->x - vecSrc->x) * (AbsOrigin->x - vecSrc->x))
                      + ((AbsOrigin->y - vecSrc->y) * (AbsOrigin->y - vecSrc->y)))
                     + ((AbsOrigin->z - vecSrc->z) * (AbsOrigin->z - vecSrc->z))) )
    {
      flMaxDist2 = (((AbsOrigin->x - vecSrc->x) * (AbsOrigin->x - vecSrc->x))
                  + ((AbsOrigin->y - vecSrc->y) * (AbsOrigin->y - vecSrc->y)))
                 + ((AbsOrigin->z - vecSrc->z) * (AbsOrigin->z - vecSrc->z));
      pEntity = v7;
    }
  }
  return pEntity;
}


// CGameEntitySystem::FindEntityByClassnameNearest2D  (line 1838, @0x00000000020a52c0, libserver.so)  // inlines: LengthSqr, Vector2DSubtract, operator-
// calls: CGameEntitySystem::FindEntityByClassname, CBaseEntity::GetAbsOrigin
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByClassnameNearest2D(
        CGameEntitySystem *const this,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius)
{
  CBaseEntity *v7; // rbx
  CBaseEntity *v8; // r15
  CBaseEntity *EntityByClassname; // rax
  const Vector *AbsOrigin; // rax
  float flMaxDist2; // [rsp+0h] [rbp-3Ch]

  flMaxDist2 = flRadius * flRadius;
  if ( (flRadius * flRadius) == 0.0 )
    flMaxDist2 = 3221225500.0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(this, v7, szName);
    v7 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByClassname);
    if ( flMaxDist2 > (((AbsOrigin->x - vecSrc->x) * (AbsOrigin->x - vecSrc->x))
                     + ((AbsOrigin->y - vecSrc->y) * (AbsOrigin->y - vecSrc->y))) )
    {
      flMaxDist2 = ((AbsOrigin->x - vecSrc->x) * (AbsOrigin->x - vecSrc->x))
                 + ((AbsOrigin->y - vecSrc->y) * (AbsOrigin->y - vecSrc->y));
      v8 = v7;
    }
  }
  return v8;
}


// CGameEntitySystem::FindEntityByClassnameWithin  (line 1876, @0x00000000020a5390, libserver.so)  // inlines: IsBoundsDefinedInEntitySpace, VectorITransform, VectorSubtract, WorldToCollisionSpace, operator/=, operator=, operator==
// calls: CGameEntitySystem::FindEntityByClassname, VectorITransform, IsBoxIntersectingSphere
// callers: CScriptEntityIterator::FindByClassnameWithin, CScriptEntityIterator::FindAllByClassnameWithin, CGameEntitySystem::FindEntityGenericWithin, CPhysExplosion::FindEntity, UTIL_FindEntityByClassnameNearest
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByClassnameWithin(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius)
{
  CBaseEntity *v5; // r15
  CBaseEntity *EntityByClassname; // rax
  CCollisionProperty *m_pCollision; // rbx
  float v10; // xmm0_4
  float *v11; // rax
  double v12; // xmm1_8
  const matrix3x4_t *v13; // rax
  float v14; // xmm7_4
  const Vector *v15; // r14
  const Vector *v16; // rax
  float *v18; // rax
  vec_t v19; // xmm2_4
  vec_t v20; // xmm1_4
  float v22; // [rsp+8h] [rbp-48h]
  float v23; // [rsp+8h] [rbp-48h]
  Vector vecRelativeCenter; // [rsp+10h] [rbp-40h] BYREF

  v5 = pStartEntity;
  if ( (flRadius * flRadius) == 0.0 )
    return CGameEntitySystem::FindEntityByClassname(this, pStartEntity, szName);
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(this, v5, szName);
    v5 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    m_pCollision = EntityByClassname->m_pCollision;
    if ( m_pCollision != 0 )
    {
      v10 = (*(m_pCollision->_vptr_ICollideable + 27))(EntityByClassname->m_pCollision);
      if ( v10 == 0.0 )
      {
        vecRelativeCenter = vec3_origin;
      }
      else if ( (m_pCollision->m_nSolidType.m_Value & 0xFD) == 0
             || (v22 = v10,
                 v11 = (*(m_pCollision->_vptr_ICollideable + 5))(m_pCollision),
                 v10 = v22,
                 *&v12 = LODWORD(vec3_angle.x),
                 vec3_angle.x == *v11)
             && (*&v12 = LODWORD(vec3_angle.y), *&v12 == v11[1])
             && (*&v12 = LODWORD(vec3_angle.z), *&v12 == v11[2]) )
      {
        v23 = v10;
        v18 = (*(m_pCollision->_vptr_ICollideable + 4))(m_pCollision);
        v19 = (vecSrc->y - v18[1]) * (1.0 / v23);
        v20 = (vecSrc->z - v18[2]) * (1.0 / v23);
        vecRelativeCenter.x = (vecSrc->x - *v18) * (1.0 / v23);
        vecRelativeCenter.y = v19;
        vecRelativeCenter.z = v20;
      }
      else
      {
        v13 = (*(m_pCollision->_vptr_ICollideable + 6))(m_pCollision, COERCE_DOUBLE(LODWORD(v22)), v12);
        VectorITransform(&vecSrc->x, v13, &vecRelativeCenter.x);
        v14 = 1.0 / (v22 * v22);
        vecRelativeCenter.x = vecRelativeCenter.x * v14;
        vecRelativeCenter.z = v14 * vecRelativeCenter.z;
        vecRelativeCenter.y = vecRelativeCenter.y * v14;
      }
      v15 = (*(v5->m_pCollision->_vptr_ICollideable + 2))(v5->m_pCollision);
      v16 = (*(v5->m_pCollision->_vptr_ICollideable + 1))(v5->m_pCollision);
      if ( IsBoxIntersectingSphere(v16, v15, &vecRelativeCenter, flRadius) )
        return v5;
    }
  }
  return 0;
}


// CGameEntitySystem::FindEntityInheritingFromWithin  (line 1907, @0x00000000020a5600, libserver.so)  // inlines: IsBoundsDefinedInEntitySpace, VectorITransform, VectorSubtract, WorldToCollisionSpace, operator/=, operator=, operator==
// calls: CEntitySystem::FindEntityInheritingFrom, VectorITransform, IsBoxIntersectingSphere
// callers: CPointPlayerMoveConstraint::InputTurnOn
CEntityInstance *__fastcall CGameEntitySystem::FindEntityInheritingFromWithin(
        CGameEntitySystem *const this,
        CEntityInstance *pStartEntity,
        const CSchemaClassBindingBase *pInheritsFrom,
        const Vector *const vecSrc,
        float flRadius)
{
  CEntityInstance *v5; // r15
  CEntityInstance *EntityInheritingFrom; // rax
  int (**vptr_IHandleEntity)(...); // r13
  float v11; // xmm0_4
  float *v12; // rax
  const matrix3x4_t *v13; // rax
  float v14; // xmm7_4
  const Vector *v15; // rax
  float *v17; // rax
  vec_t v18; // xmm2_4
  vec_t v19; // xmm1_4
  float v21; // [rsp+4h] [rbp-50h]
  const Vector *v22; // [rsp+4h] [rbp-50h]
  float v23; // [rsp+4h] [rbp-50h]
  Vector vecRelativeCenter; // [rsp+Ch] [rbp-48h] BYREF

  v5 = pStartEntity;
  if ( (flRadius * flRadius) == 0.0 )
    return CEntitySystem::FindEntityInheritingFrom(this, pStartEntity, pInheritsFrom);
  while ( 1 )
  {
    EntityInheritingFrom = CEntitySystem::FindEntityInheritingFrom(this, v5, pInheritsFrom);
    v5 = EntityInheritingFrom;
    if ( EntityInheritingFrom == 0 )
      break;
    vptr_IHandleEntity = EntityInheritingFrom[11]._vptr_IHandleEntity;
    if ( vptr_IHandleEntity != 0 )
    {
      v11 = (*(*vptr_IHandleEntity + 27))(EntityInheritingFrom[11]._vptr_IHandleEntity);
      if ( v11 == 0.0 )
      {
        vecRelativeCenter = vec3_origin;
      }
      else if ( (*(vptr_IHandleEntity + 83) & 0xFD) == 0
             || (v21 = v11,
                 v12 = (*(*vptr_IHandleEntity + 5))(vptr_IHandleEntity),
                 v11 = v21,
                 vec3_angle.x == *v12 && vec3_angle.y == v12[1] && vec3_angle.z == v12[2]) )
      {
        v23 = v11;
        v17 = (*(*vptr_IHandleEntity + 4))(vptr_IHandleEntity);
        v18 = (vecSrc->y - v17[1]) * (1.0 / v23);
        v19 = (vecSrc->z - v17[2]) * (1.0 / v23);
        vecRelativeCenter.x = (vecSrc->x - *v17) * (1.0 / v23);
        vecRelativeCenter.y = v18;
        vecRelativeCenter.z = v19;
      }
      else
      {
        v13 = (*(*vptr_IHandleEntity + 6))(vptr_IHandleEntity);
        VectorITransform(&vecSrc->x, v13, &vecRelativeCenter.x);
        v14 = 1.0 / (v21 * v21);
        vecRelativeCenter.x = vecRelativeCenter.x * v14;
        vecRelativeCenter.z = v14 * vecRelativeCenter.z;
        vecRelativeCenter.y = vecRelativeCenter.y * v14;
      }
      v22 = (*(*v5[11]._vptr_IHandleEntity + 2))(v5[11]._vptr_IHandleEntity);
      v15 = (*(*v5[11]._vptr_IHandleEntity + 1))(v5[11]._vptr_IHandleEntity);
      if ( IsBoxIntersectingSphere(v15, v22, &vecRelativeCenter, flRadius) )
        return v5;
    }
  }
  return 0;
}


// CGameEntitySystem::FindEntityByClassnameWithin  (line 1944, @0x00000000020a5860, libserver.so)  // inlines: WorldSpaceAABB
// calls: CGameEntitySystem::FindEntityByClassname, CCollisionProperty::CollisionAABBToWorldAABB, IsBoxIntersectingBox
CBaseEntity *__fastcall CGameEntitySystem::FindEntityByClassnameWithin(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        const char *szName,
        const Vector *const vecMins,
        const Vector *const vecMaxs)
{
  CBaseEntity *EntityByClassname; // rax
  const CCollisionProperty *m_pCollision; // rdi
  Vector entMins; // [rsp+10h] [rbp-50h] BYREF
  Vector entMaxs; // [rsp+20h] [rbp-40h] BYREF

  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(this, pStartEntity, szName);
    pStartEntity = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    m_pCollision = EntityByClassname->m_pCollision;
    if ( m_pCollision != 0 )
    {
      CCollisionProperty::CollisionAABBToWorldAABB(
        m_pCollision,
        &m_pCollision->m_vecMins.m_Value,
        &m_pCollision->m_vecMaxs.m_Value,
        &entMins,
        &entMaxs);
      if ( IsBoxIntersectingBox(vecMins, vecMaxs, &entMins, &entMaxs) )
        return pStartEntity;
    }
  }
  return 0;
}


// CGameEntitySystem::FindEntityGeneric  (line 1983, @0x00000000020a5910, libserver.so)  // inlines: GameRules
// calls: CGameEntitySystem::FindEntityByName, CGameEntitySystem::FindEntityByClassname
// callers: CParticleSystem::ReadControlPointEnts, CEntityDissolve::InputDissolve, CEnvEntityIgniter::InputIgnite, CLogicBranchList::Activate, PhysicsCommand, CTankTrainAI::FindTarget
CBaseEntity *__fastcall CGameEntitySystem::FindEntityGeneric(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        const char *szName,
        CBaseEntity *pSearchingEntity,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  CBaseEntity *result; // rax

  result = CGameEntitySystem::FindEntityByName(this, pStartEntity, szName, pSearchingEntity, pActivator, pCaller, 0);
  if ( result == 0 )
  {
    result = CGameEntitySystem::FindEntityByClassname(this, pStartEntity, szName);
    if ( result == 0 )
      return (*(g_pGameRules->_vptr_CGameRules + 153))(
               g_pGameRules,
               pStartEntity,
               szName,
               pSearchingEntity,
               pActivator,
               pCaller);
  }
  return result;
}


// CGameEntitySystem::FindEntityGenericWithin  (line 2015, @0x00000000020a59a0, libserver.so)  // inlines: GameRules
// calls: CGameEntitySystem::FindEntityByNameWithin, CGameEntitySystem::FindEntityByClassnameWithin
CBaseEntity *__fastcall CGameEntitySystem::FindEntityGenericWithin(
        CGameEntitySystem *const this,
        CBaseEntity *pStartEntity,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius,
        CBaseEntity *pSearchingEntity,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  CBaseEntity *result; // rax

  result = CGameEntitySystem::FindEntityByNameWithin(
             this,
             pStartEntity,
             szName,
             vecSrc,
             flRadius,
             pSearchingEntity,
             pActivator,
             pCaller);
  if ( result == 0 )
  {
    result = CGameEntitySystem::FindEntityByClassnameWithin(this, pStartEntity, szName, vecSrc, flRadius);
    if ( result == 0 )
      return (*(g_pGameRules->_vptr_CGameRules + 154))(
               g_pGameRules,
               pStartEntity,
               szName,
               vecSrc,
               pSearchingEntity,
               pActivator,
               flRadius,
               pCaller);
  }
  return result;
}


// CGameEntitySystem::FindEntityGenericNearest  (line 2046, @0x00000000020a5a60, libserver.so)  // inlines: GameRules
// calls: CGameEntitySystem::FindEntityByNameNearest, CGameEntitySystem::FindEntityByClassnameNearest
CBaseEntity *__fastcall CGameEntitySystem::FindEntityGenericNearest(
        CGameEntitySystem *const this,
        const char *szName,
        const Vector *const vecSrc,
        float flRadius,
        CBaseEntity *pSearchingEntity,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  CBaseEntity *result; // rax

  result = CGameEntitySystem::FindEntityByNameNearest(
             this,
             szName,
             vecSrc,
             flRadius,
             pSearchingEntity,
             pActivator,
             pCaller);
  if ( result == 0 )
  {
    result = CGameEntitySystem::FindEntityByClassnameNearest(this, szName, vecSrc, flRadius);
    if ( result == 0 )
      return (*(g_pGameRules->_vptr_CGameRules + 155))(
               g_pGameRules,
               szName,
               vecSrc,
               pSearchingEntity,
               pActivator,
               pCaller,
               flRadius);
  }
  return result;
}


// CGameEntitySystem::FindEntityClassNearestFacing  (line 2075, @0x00000000020a5b10, libserver.so)  // inlines: ClassMatches, DotProduct, FClassnameIs, GetInstance, IsPointSized, VectorSubtract, operator-
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CEntityIdentity::ClassMatches, DevWarning(char const*,...)
// callers: CBasePlayer::FindPickerEntityClass
// strings: "worldent", "soundent", "NULL entity in global entity list!\n"
CBaseEntity *__fastcall CGameEntitySystem::FindEntityClassNearestFacing(
        CGameEntitySystem *const this,
        const Vector *const origin,
        const Vector *const facing,
        float threshold,
        char *classname)
{
  CEntityIdentity *m_pFirstActiveEntity; // r15
  const CBaseEntity *m_pInstance; // r14
  CCollisionProperty *m_pCollision; // rax
  const Vector *AbsOrigin; // rax
  vec_t v11; // xmm0_4
  vec_t v12; // xmm2_4
  CBaseEntity *best_ent; // [rsp+10h] [rbp-50h]
  float v16; // [rsp+18h] [rbp-48h]
  Vector to_ent; // [rsp+20h] [rbp-40h] BYREF

  m_pFirstActiveEntity = this->m_EntityList.m_pFirstActiveEntity;
  if ( m_pFirstActiveEntity == 0 )
    return 0;
  best_ent = 0;
  do
  {
    m_pInstance = m_pFirstActiveEntity->m_pInstance;
    if ( m_pFirstActiveEntity->m_pInstance != 0 )
    {
      m_pCollision = m_pInstance->m_pCollision;
      if ( m_pCollision != 0 && m_pCollision->m_flRadius != 0.0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(m_pFirstActiveEntity->m_pInstance);
        v11 = AbsOrigin->z - origin->z;
        v12 = AbsOrigin->x - origin->x;
        to_ent.y = AbsOrigin->y - origin->y;
        to_ent.z = v11;
        to_ent.x = v12;
        VectorNormalize(&to_ent);
        if ( (((facing->x * to_ent.x) + (facing->y * to_ent.y)) + (facing->z * to_ent.z)) > threshold )
        {
          v16 = ((facing->x * to_ent.x) + (facing->y * to_ent.y)) + (facing->z * to_ent.z);
          if ( CEntityIdentity::ClassMatches(m_pInstance->m_pEntity, classname)
            && !CEntityIdentity::ClassMatches(m_pInstance->m_pEntity, "worldent")
            && !CEntityIdentity::ClassMatches(m_pInstance->m_pEntity, "soundent") )
          {
            best_ent = m_pInstance;
            threshold = v16;
          }
        }
      }
    }
    else
    {
      DevWarning("NULL entity in global entity list!\n");
    }
    m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
  }
  while ( m_pFirstActiveEntity != 0 );
  return best_ent;
}


// CGameEntitySystem::FindEntityInheritingFromNearestFacing  (line 2124, @0x00000000020a5c80, libserver.so)  // inlines: DotProduct, GetInstance, GetSingleInheritanceBaseClass, IsPointSized, SchemaSingleInheritanceDepth, SingleInheritsFromOrIs, VectorSubtract, operator-
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, DevWarning(char const*,...)
// callers: CBasePlayer::FindPickerEntityInheritingFrom
// strings: "NULL entity in global entity list!\n"
CBaseEntity *__fastcall CGameEntitySystem::FindEntityInheritingFromNearestFacing(
        CGameEntitySystem *const this,
        const Vector *const origin,
        const Vector *const facing,
        float threshold,
        const CSchemaClassBindingBase *pInheritsFrom)
{
  CEntityIdentity *m_pFirstActiveEntity; // r15
  const CBaseEntity *m_pInstance; // r14
  __int64 v10; // rax
  CSchemaClassInfo *m_pClassInfo_N; // rdx
  CSchemaClassInfo *v12; // rax
  CCollisionProperty *m_pCollision; // rax
  const Vector *AbsOrigin; // rax
  vec_t v16; // xmm0_4
  vec_t v17; // xmm2_4
  CBaseEntity *best_ent; // [rsp+18h] [rbp-48h]
  Vector to_ent; // [rsp+20h] [rbp-40h] BYREF

  m_pFirstActiveEntity = this->m_EntityList.m_pFirstActiveEntity;
  if ( m_pFirstActiveEntity != 0 )
  {
    best_ent = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        m_pInstance = m_pFirstActiveEntity->m_pInstance;
        if ( m_pFirstActiveEntity->m_pInstance != 0 )
          break;
        DevWarning("NULL entity in global entity list!\n");
        m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
        if ( m_pFirstActiveEntity == 0 )
          return best_ent;
      }
      v10 = (*m_pInstance->_vptr_IHandleEntity)(m_pFirstActiveEntity->m_pInstance);
      m_pClassInfo_N = pInheritsFrom->m_pClassInfo_N;
      v12 = *(v10 + 40);
      if ( v12 == 0 )
        goto LABEL_10;
      if ( v12 != m_pClassInfo_N )
      {
        while ( v12->m_BaseClasses.m_Data.m_nImplLength != 0 )
        {
          v12 = *(v12->m_BaseClasses.m_Data.m_pImplElements + 1);
          if ( v12 == 0 )
            break;
          if ( m_pClassInfo_N == v12 )
            goto LABEL_12;
        }
        goto LABEL_10;
      }
LABEL_12:
      m_pCollision = m_pInstance->m_pCollision;
      if ( m_pCollision == 0 )
        goto LABEL_10;
      if ( m_pCollision->m_flRadius != 0.0
        && (AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance),
            v16 = AbsOrigin->z - origin->z,
            v17 = AbsOrigin->x - origin->x,
            to_ent.y = AbsOrigin->y - origin->y,
            to_ent.z = v16,
            to_ent.x = v17,
            VectorNormalize(&to_ent),
            (((facing->x * to_ent.x) + (facing->y * to_ent.y)) + (facing->z * to_ent.z)) > threshold) )
      {
        m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
        best_ent = m_pInstance;
        threshold = ((facing->x * to_ent.x) + (facing->y * to_ent.y)) + (facing->z * to_ent.z);
        if ( m_pFirstActiveEntity == 0 )
          return best_ent;
      }
      else
      {
LABEL_10:
        m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
        if ( m_pFirstActiveEntity == 0 )
          return best_ent;
      }
    }
  }
  return 0;
}


// CGameEntitySystem::FindEntityNearestFacing  (line 2176, @0x00000000020a5e10, libserver.so)  // inlines: DotProduct, FStrEq, GetClassNameAsCStr, GetClassname, GetInstance, String, VectorSubtract, _V_strcmp, operator-
// calls: CBaseEntity::GetModel, VectorNormalize, DevWarning(char const*,...)
// callers: CBasePlayer::FindPickerEntity
// strings: "worldent", "soundent", "NULL entity in global entity list!\n"
CBaseEntity *__fastcall CGameEntitySystem::FindEntityNearestFacing(
        CGameEntitySystem *const this,
        const Vector *const origin,
        const Vector *const facing,
        float threshold)
{
  CEntityIdentity *m_pFirstActiveEntity; // r15
  const CBaseEntity *m_pInstance; // r14
  float v8; // xmm1_4
  vec_t v9; // xmm0_4
  vec_t v10; // xmm2_4
  float v11; // xmm0_4
  const char *m_pAsString; // r8
  CBaseEntity *best_ent; // [rsp+18h] [rbp-58h]
  Vector to_ent; // [rsp+20h] [rbp-50h] BYREF
  double v17; // [rsp+30h] [rbp-40h] BYREF
  float v18; // [rsp+38h] [rbp-38h]

  m_pFirstActiveEntity = this->m_EntityList.m_pFirstActiveEntity;
  if ( m_pFirstActiveEntity != 0 )
  {
    best_ent = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        m_pInstance = m_pFirstActiveEntity->m_pInstance;
        if ( m_pFirstActiveEntity->m_pInstance != 0 )
          break;
        DevWarning("NULL entity in global entity list!\n");
LABEL_3:
        m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
        if ( m_pFirstActiveEntity == 0 )
          return best_ent;
      }
      CBaseEntity::GetModel(&v17, m_pFirstActiveEntity->m_pInstance);
      if ( v17 == 0.0 )
        goto LABEL_3;
      if ( (m_pInstance->m_fEffects.m_Value & 0x20) != 0 )
        goto LABEL_3;
      v17 = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance);
      v18 = v8;
      v9 = *(&v17 + 1) - origin->y;
      v10 = *&v17 - origin->x;
      to_ent.z = v8 - origin->z;
      to_ent.y = v9;
      to_ent.x = v10;
      VectorNormalize(&to_ent);
      v11 = ((facing->x * to_ent.x) + (facing->y * to_ent.y)) + (facing->z * to_ent.z);
      if ( threshold >= v11 )
        goto LABEL_3;
      m_pAsString = m_pInstance->m_pEntity->m_designerName.u.m_pAsString;
      if ( m_pAsString != 0
        && (m_pAsString == "worldent"
         || strcmp(m_pInstance->m_pEntity->m_designerName.u.m_pAsString, "worldent") == 0
         || m_pAsString == "soundent"
         || strcmp(m_pInstance->m_pEntity->m_designerName.u.m_pAsString, "soundent") == 0) )
      {
        m_pInstance = best_ent;
        v11 = threshold;
      }
      m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
      best_ent = m_pInstance;
      threshold = v11;
      if ( m_pFirstActiveEntity == 0 )
        return best_ent;
    }
  }
  return 0;
}


// CGameEntitySystem::OnEntityParentChanged  (line 2225, @0x000000000209f230, libserver.so)
void __fastcall CGameEntitySystem::OnEntityParentChanged(
        CGameEntitySystem *const this,
        CEntityInstance *pEntity,
        CEntityInstance *pNewParent)
{
  int v4; // eax
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // r14
  IEntityListener *v9; // rdi

  v4 = *(&stru_1A0A0.r_offset + this) - 1;
  if ( v4 >= 0 )
  {
    v6 = 8LL * v4;
    v8 = 8 * (v4 - v4) - 8;
    do
    {
      v9 = this->m_entityListeners.m_Memory.m_pMemory[v6 / 8];
      v6 -= 8LL;
      (*(v9->_vptr_IEntityListener + 3))(v9, pEntity, pNewParent);
    }
    while ( v6 != v8 );
  }
}


// CGameEntitySystem::OnAddEntity  (line 2233, @0x00000000020a60b0, libserver.so)  // inlines: GetEntryIndex
// calls: CGameEntitySystem::NotifyCreateEntity
void __fastcall CGameEntitySystem::OnAddEntity(CGameEntitySystem *const this, CBaseEntity *pEnt, _WORD *handle)
{
  unsigned __int16 v4; // ax
  char v5; // al
  CBaseEntity *pBaseEnt; // [rsp+8h] [rbp-18h]

  if ( *handle != -1 )
  {
    v4 = *handle & 0x7FFF;
    if ( v4 <= 0x3FFFu )
    {
      ++this->m_iNetworkedEntCount;
      if ( this->m_iMaxNetworkedEntIndex < v4 )
        this->m_iMaxNetworkedEntIndex = v4;
      goto LABEL_5;
    }
  }
  if ( pEnt != 0 )
  {
    pBaseEnt = pEnt;
    v5 = (*(pEnt->_vptr_IHandleEntity + 75))(pEnt);
    pEnt = pBaseEnt;
    if ( v5 != 0 )
    {
      ++this->m_iNonNetworkedSavedEntCount;
LABEL_6:
      ++this->m_iNumEdicts;
      CGameEntitySystem::NotifyCreateEntity(this, pEnt);
      return;
    }
LABEL_5:
    if ( pEnt == 0 )
      return;
    goto LABEL_6;
  }
}


// CGameEntitySystem::OnRemoveEntity  (line 2271, @0x00000000020a6620, libserver.so)  // inlines: GetEntryIndex
// calls: CGameEntitySystem::NotifyRemoveEntity, CGameEntitySystem::RecomputeMaxNetworkedEntIndex
void __fastcall CGameEntitySystem::OnRemoveEntity(CGameEntitySystem *const this, CBaseEntity *pEnt, _WORD *handle)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rax
  CBaseEntity *pBaseEnta; // [rsp+8h] [rbp-18h]
  CBaseEntity *pBaseEnt; // [rsp+8h] [rbp-18h]

  if ( *handle != -1 )
  {
    v4 = *handle & 0x7FFF;
    if ( v4 <= 0x3FFFu )
    {
      --this->m_iNetworkedEntCount;
      if ( this->m_iMaxNetworkedEntIndex <= v4 )
      {
        pBaseEnt = pEnt;
        CGameEntitySystem::RecomputeMaxNetworkedEntIndex(this);
        pEnt = pBaseEnt;
      }
      goto LABEL_5;
    }
  }
  if ( pEnt != 0 )
  {
    pBaseEnta = pEnt;
    v5 = (*(pEnt->_vptr_IHandleEntity + 19))(pEnt);
    pEnt = pBaseEnta;
    if ( (v5 & 0x400) != 0 )
    {
      --this->m_iNonNetworkedSavedEntCount;
LABEL_6:
      --this->m_iNumEdicts;
      goto LABEL_7;
    }
LABEL_5:
    if ( pEnt == 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_7:
  if ( (pEnt->m_pEntity->m_flags & 4) != 0 )
    CGameEntitySystem::NotifyRemoveEntity(this, pEnt);
}


// CGameEntitySystem::CompareSpawnOrder  (line 2311, @0x00000000020d41b0, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, TempString, operator[]
// calls: CStringRegistry::GetStringID
// globals: g_pClassnameSpawnPriority, CEntityKeyValues::sm_EmptyVariant
bool __fastcall CGameEntitySystem::CompareSpawnOrder(
        const CGameEntitySystem::HierarchicalSpawnInfo_t *const info1,
        const CGameEntitySystem::HierarchicalSpawnInfo_t *const info2)
{
  bool result; // al
  const CEntityKeyValues *m_pKeyValues; // rcx
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v8; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v10; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rsi
  const CEntityKeyValues *v13; // rcx
  int v14; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v15; // r8
  __int64 v16; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v17; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rdx
  CEntityVariant *v19; // rax
  const char *v20; // r13
  int StringID; // r14d
  int v22; // edx

  result = info1->m_nDepth <= info2->m_nDepth;
  if ( info1->m_nDepth != info2->m_nDepth )
    return result;
  if ( g_pClassnameSpawnPriority == 0 )
    return info1->m_nOriginalSpawnOrder < info2->m_nOriginalSpawnOrder;
  m_pKeyValues = info1->m_spawnInfo.m_pKeyValues;
  m_nCount = m_pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_16:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_17;
  }
  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
  v8 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v8) == -971301790 )
      goto LABEL_12;
LABEL_9:
    if ( m_nCount <= ++v8 )
      goto LABEL_16;
  }
  m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v8] != -971301790 )
    goto LABEL_9;
LABEL_12:
  if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
    v10 = m_pKeyValues->m_keyValues.m_pElements;
  else
    v10 = 0;
  p_m_value = &v10[v8].m_value;
LABEL_17:
  m_uint64 = 0;
  if ( p_m_value->m_type == 30 )
    m_uint64 = p_m_value->m_uint64;
  v13 = info2->m_spawnInfo.m_pKeyValues;
  v14 = v13->m_keyHashes.m_nCount;
  if ( v14 <= 0 )
  {
LABEL_30:
    v19 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_31;
  }
  v15 = v13->m_keyHashes.m_nAllocated;
  v16 = 0;
  while ( 2 )
  {
    if ( v15 == 0 )
    {
      if ( *(4 * v16) == -971301790 )
        break;
      goto LABEL_24;
    }
    v17 = (&v13->m_keyHashes.m_nAllocAllocated + 1);
    if ( v15 > 9 )
      v17 = v13->m_keyHashes.m_pElements;
    if ( v17[v16] != -971301790 )
    {
LABEL_24:
      if ( v14 <= ++v16 )
        goto LABEL_30;
      continue;
    }
    break;
  }
  if ( v13->m_keyValues.m_nAllocated != 0 )
    v18 = v13->m_keyValues.m_pElements;
  else
    v18 = 0;
  v19 = &v18[v16].m_value;
LABEL_31:
  v20 = 0;
  if ( v19->m_type == 30 )
    v20 = v19->m_uint64;
  StringID = -1;
  if ( m_uint64 != 0 )
    StringID = CStringRegistry::GetStringID(g_pClassnameSpawnPriority, m_uint64);
  v22 = -1;
  if ( v20 != 0 )
    v22 = CStringRegistry::GetStringID(g_pClassnameSpawnPriority, v20);
  result = 0;
  if ( StringID >= v22 )
  {
    if ( StringID > v22 )
      return 1;
    return info1->m_nOriginalSpawnOrder < info2->m_nOriginalSpawnOrder;
  }
  return result;
}


// CGameEntitySystem::ComputeSpawnHierarchyDepth_r  (line 2353, @0x00000000020d50a0, libserver.so)  // inlines: Base, CEntityKeyValuesModifyScope, Element, ExtractParentName, FindKeyHash, GetValue, GetValueString, TempString, operator[], strchr, ~CEntityKeyValuesModifyScope
// calls: strchr, nexttoken, V_stricmp_fast, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::SetValue, Warning, CEntityKeyValuesModifyScope::Release, _Unwind_Resume, __stack_chk_fail
// callers: CGameEntitySystem::ComputeHierarchyInfo
// strings: "LEVEL DESIGN ERROR: Entity %s is parented to itself!\n"
// globals: CEntityKeyValues::sm_EmptyVariant
int __fastcall CGameEntitySystem::ComputeSpawnHierarchyDepth_r(
        CGameEntitySystem *const this,
        const CEntityKeyValues *pTestEntity,
        int nEntities,
        EntitySpawnInfo_t *pSpawnList)
{
  __int64 v5; // rax
  int m_nCount; // ebx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rdx
  CEntityVariant *p_m_value; // rdx
  CEntityVariant *v13; // rax
  EntitySpawnInfo_t *v14; // r15
  int result; // eax
  char *m_uint64; // r12
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v17; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v19; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rdx
  CEntityVariant *v21; // rax
  const char *v22; // rbx
  const CEntityKeyValues *m_pKeyValues; // rcx
  int v24; // edi
  __int16 v25; // si
  __int64 v26; // rax
  __int16 *v27; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v28; // rdx
  CEntityKeyValuesModifyScope_0 sg; // [rsp+10h] [rbp-150h] BYREF
  char pBuf[260]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v32; // [rsp+128h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  v5 = 0;
  if ( pTestEntity == 0 )
    return 1;
  m_nCount = pTestEntity->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_17:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_18;
  }
  m_nAllocated = pTestEntity->m_keyHashes.m_nAllocated;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v5) == 1166161001 )
      goto LABEL_10;
LABEL_7:
    if ( m_nCount <= ++v5 )
      goto LABEL_17;
  }
  m_pElements = (&pTestEntity->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pTestEntity->m_keyHashes.m_pElements;
  if ( m_pElements[v5] != 1166161001 )
    goto LABEL_7;
LABEL_10:
  if ( pTestEntity->m_keyValues.m_nAllocated != 0 )
    v11 = pTestEntity->m_keyValues.m_pElements;
  else
    v11 = 0;
  p_m_value = &v11[v5].m_value;
LABEL_18:
  result = 1;
  if ( p_m_value->m_type == 30 )
  {
    m_uint64 = p_m_value->m_uint64;
    if ( p_m_value->m_uint64 == 0 )
      return 1;
    if ( strchr(p_m_value->m_pszString, 44) != 0 )
    {
      nexttoken(pBuf, m_uint64, 44);
      m_nCount = pTestEntity->m_keyHashes.m_nCount;
      m_uint64 = pBuf;
    }
    if ( m_nCount > 0 )
    {
      v17 = pTestEntity->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( v17 != 0 )
        {
          v19 = (&pTestEntity->m_keyHashes.m_nAllocAllocated + 1);
          if ( v17 > 9 )
            v19 = pTestEntity->m_keyHashes.m_pElements;
          if ( v19[i] == 1094168427 )
          {
LABEL_30:
            if ( pTestEntity->m_keyValues.m_nAllocated != 0 )
              v20 = pTestEntity->m_keyValues.m_pElements;
            else
              v20 = 0;
            v21 = &v20[i].m_value;
            if ( v21->m_type == 30 )
              goto LABEL_33;
            goto LABEL_37;
          }
        }
        else if ( *(4 * i) == 1094168427 )
        {
          goto LABEL_30;
        }
      }
    }
    v21 = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
    {
LABEL_33:
      v22 = v21->m_uint64;
      if ( v21->m_uint64 != 0 && V_stricmp_fast(v21->m_uint64, m_uint64) == 0 )
      {
        sg.m_pKeyValues = 0;
        sg.m_pPrevAllocator = 0;
        CEntityKeyValuesModifyScope::BeginModify(&sg, pTestEntity);
        CEntityKeyValues::SetValue(pTestEntity, 1166161001, "");
        Warning("LEVEL DESIGN ERROR: Entity %s is parented to itself!\n", v22);
        CEntityKeyValuesModifyScope::Release(&sg);
        return 1;
      }
    }
LABEL_37:
    if ( nEntities <= 0 )
      return 1;
    v14 = pSpawnList;
LABEL_39:
    m_pKeyValues = v14->m_pKeyValues;
    v24 = m_pKeyValues->m_keyHashes.m_nCount;
    if ( v24 <= 0 )
    {
LABEL_13:
      v13 = &CEntityKeyValues::sm_EmptyVariant;
      if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
        goto LABEL_50;
      goto LABEL_14;
    }
    v25 = m_pKeyValues->m_keyHashes.m_nAllocated;
    v26 = 0;
    while ( 1 )
    {
      if ( v25 != 0 )
      {
        v27 = &m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1;
        if ( v25 > 9 )
          v27 = m_pKeyValues->m_keyHashes.m_pElements;
        if ( *&v27[2 * v26] == 1094168427 )
        {
LABEL_47:
          if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
            v28 = m_pKeyValues->m_keyValues.m_pElements;
          else
            v28 = 0;
          v13 = &v28[v26].m_value;
          if ( v13->m_type == 30 )
          {
LABEL_50:
            if ( v13->m_uint64 != 0 && V_stricmp_fast(v13->m_uint64, m_uint64) == 0 )
              return CGameEntitySystem::ComputeSpawnHierarchyDepth_r(this, v14->m_pKeyValues, nEntities, pSpawnList) + 1;
          }
LABEL_14:
          if ( ++v14 == &pSpawnList[(nEntities - 1) + 1] )
            return 1;
          goto LABEL_39;
        }
      }
      else if ( *(4 * v26) == 1094168427 )
      {
        goto LABEL_47;
      }
      if ( v24 <= ++v26 )
        goto LABEL_13;
    }
  }
  return result;
}


// CGameEntitySystem::ComputeHierarchyInfo  (line 2388, @0x00000000020d53e0, libserver.so)  // inlines: GetInstance
// calls: CGameEntitySystem::ComputeSpawnHierarchyDepth_r
// callers: CGameEntitySystem::SortEntities
void __fastcall CGameEntitySystem::ComputeHierarchyInfo(
        CGameEntitySystem *const this,
        int nEntities,
        EntitySpawnInfo_t *pSpawnList,
        CGameEntitySystem::HierarchicalSpawnInfo_t *pHierarchyInfo)
{
  int v4; // r15d
  EntitySpawnInfo_t *v5; // r14
  const CEntityKeyValues *m_pKeyValues; // rdx
  CEntityInstance *m_pInstance; // rax

  v4 = 0;
  v5 = pSpawnList;
  if ( nEntities > 0 )
  {
    do
    {
      if ( v5->m_pEntity != 0
        && (m_pInstance = v5->m_pEntity->m_pInstance) != 0
        && SLOBYTE(m_pInstance->m_pEntity->m_flags) >= 0 )
      {
        pHierarchyInfo->m_nDepth = CGameEntitySystem::ComputeSpawnHierarchyDepth_r(
                                     this,
                                     v5->m_pKeyValues,
                                     nEntities,
                                     pSpawnList);
      }
      else
      {
        pHierarchyInfo->m_nDepth = 1;
      }
      pHierarchyInfo->m_nOriginalSpawnOrder = v4++;
      ++v5;
      ++pHierarchyInfo;
      m_pKeyValues = v5[-1].m_pKeyValues;
      pHierarchyInfo[-1].m_spawnInfo.m_pEntity = v5[-1].m_pEntity;
      pHierarchyInfo[-1].m_spawnInfo.m_pKeyValues = m_pKeyValues;
    }
    while ( v4 != nEntities );
  }
}


// CGameEntitySystem::SortEntities  (line 2413, @0x00000000020d5480, libserver.so)  // inlines: __pop_heap<CGameEntitySystem::HierarchicalSpawnInfo_t*, bool (*)(const CGameEntitySystem::HierarchicalSpawnInfo_t&, const CGameEntitySystem::HierarchicalSpawnInfo_t&)>, make_heap<CGameEntitySystem::HierarchicalSpawnInfo_t*, bool (*)(const CGameEntitySystem::HierarchicalSpawnInfo_t&, const CGameEntitySystem::HierarchicalSpawnInfo_t&)>, sort_heap<CGameEntitySystem::HierarchicalSpawnInfo_t*, bool (*)(const CGameEntitySystem::HierarchicalSpawnInfo_t&, const CGameEntitySystem::HierarchicalSpawnInfo_t&)>
// calls: operator new [], CGameEntitySystem::ComputeHierarchyInfo, operator new, CStringRegistry::CStringRegistry, CStringRegistry::AddString, std::__adjust_heap<CGameEntitySystem::HierarchicalSpawnInfo_t*, long int, CGameEntitySystem::HierarchicalSpawnInfo_t, bool (*)(const CGameEntitySystem::HierarchicalSpawnInfo_t&, const CGameEntitySystem::HierarchicalSpawnInfo_t&)>, CStringRegistry::~CStringRegistry, operator delete, operator delete [], _Unwind_Resume
// callers: CGameEntitySystem::Spawn
// strings: "dota_base_game_mode", "func_wall", "scripted_sequence", "phys_hinge", "phys_ballsocket", "phys_slideconstraint" (12 total)
// globals: g_pClassnameSpawnPriority, CGameEntitySystem::CompareSpawnOrder(CGameEntitySystem::HierarchicalSpawnInfo_t const&,CGameEntitySystem::HierarchicalSpawnInfo_t const&)
void __fastcall CGameEntitySystem::SortEntities(
        CGameEntitySystem *const this,
        int nSpawnCount,
        EntitySpawnInfo_t *pSpawnEntities,
        int *pNumIslands,
        int *pEntityCountInIsland)
{
  signed __int64 v8; // r14
  CGameEntitySystem::HierarchicalSpawnInfo_t *v9; // rbx
  CStringRegistry *v10; // r13
  CGameEntitySystem::HierarchicalSpawnInfo_t *v11; // r15
  __int64 v12; // r13
  CGameEntitySystem::HierarchicalSpawnInfo_t *v13; // r14
  const CEntityKeyValues *m_pKeyValues; // rdx
  __int128 v15; // rdi
  const CEntityKeyValues *v16; // rcx
  CGameEntitySystem::HierarchicalSpawnInfo_t *v17; // rcx
  int v18; // edi
  EntitySpawnInfo_t *v19; // rsi
  int *v20; // r15
  const CEntityKeyValues *v21; // rdx
  int m_nDepth; // eax
  CStringRegistry *v23; // r12
  CGameEntitySystem::HierarchicalSpawnInfo_t __value; // [rsp+0h] [rbp-90h]
  CGameEntitySystem::HierarchicalSpawnInfo_t __valuea; // [rsp+0h] [rbp-90h]
  unsigned __int64 __len; // [rsp+38h] [rbp-58h]

  *pNumIslands = 0;
  if ( nSpawnCount > 0 )
  {
    v8 = 24LL * nSpawnCount;
    v9 = operator new[](v8);
    CGameEntitySystem::ComputeHierarchyInfo(this, nSpawnCount, pSpawnEntities, v9);
    v10 = operator new(8u);
    CStringRegistry::CStringRegistry(v10);
    g_pClassnameSpawnPriority = v10;
    CStringRegistry::AddString(v10, "dota_base_game_mode", 19);
    v11 = &v9[v8 / 0x18];
    CStringRegistry::AddString(g_pClassnameSpawnPriority, "func_wall", 10);
    CStringRegistry::AddString(g_pClassnameSpawnPriority, "scripted_sequence", 9);
    CStringRegistry::AddString(g_pClassnameSpawnPriority, "phys_hinge", 8);
    CStringRegistry::AddString(g_pClassnameSpawnPriority, "phys_ballsocket", 8);
    CStringRegistry::AddString(g_pClassnameSpawnPriority, "phys_slideconstraint", 8);
    CStringRegistry::AddString(g_pClassnameSpawnPriority, "phys_constraint", 8);
    CStringRegistry::AddString(g_pClassnameSpawnPriority, "phys_pulleyconstraint", 8);
    CStringRegistry::AddString(g_pClassnameSpawnPriority, "phys_lengthconstraint", 8);
    CStringRegistry::AddString(g_pClassnameSpawnPriority, "phys_ragdollconstraint", 8);
    CStringRegistry::AddString(g_pClassnameSpawnPriority, "info_mass_center", 8);
    CStringRegistry::AddString(g_pClassnameSpawnPriority, "prop_physics", 7);
    CStringRegistry::AddString(g_pClassnameSpawnPriority, "prop_ragdoll", 7);
    if ( v8 > 47 )
    {
      __len = 0xAAAAAAAAAAAAAAABLL * (v8 >> 3);
      v12 = (__len - 2) >> 1;
      v13 = &v9[v12];
      while ( 1 )
      {
        m_pKeyValues = v13->m_spawnInfo.m_pKeyValues;
        --v13;
        __value.m_spawnInfo.m_pKeyValues = m_pKeyValues;
        *&__value.m_nDepth = *&v13[1].m_nDepth;
        std::__adjust_heap<CGameEntitySystem::HierarchicalSpawnInfo_t *,long,CGameEntitySystem::HierarchicalSpawnInfo_t,bool (*)(CGameEntitySystem::HierarchicalSpawnInfo_t const&,CGameEntitySystem::HierarchicalSpawnInfo_t const&)>(
          v9,
          v12,
          __len,
          CGameEntitySystem::CompareSpawnOrder,
          __value);
        if ( v12 == 0 )
          break;
        --v12;
      }
      do
      {
        --v11;
        v15 = *&v11->m_nDepth;
        v16 = v11->m_spawnInfo.m_pKeyValues;
        *&v11->m_nDepth = *&v9->m_nDepth;
        v11->m_spawnInfo.m_pEntity = v9->m_spawnInfo.m_pEntity;
        v11->m_spawnInfo.m_pKeyValues = v9->m_spawnInfo.m_pKeyValues;
        *&__valuea.m_nDepth = v15;
        __valuea.m_spawnInfo.m_pKeyValues = v16;
        std::__adjust_heap<CGameEntitySystem::HierarchicalSpawnInfo_t *,long,CGameEntitySystem::HierarchicalSpawnInfo_t,bool (*)(CGameEntitySystem::HierarchicalSpawnInfo_t const&,CGameEntitySystem::HierarchicalSpawnInfo_t const&)>(
          v9,
          0,
          0xAAAAAAAAAAAAAAABLL * ((v11 - v9) >> 3),
          CGameEntitySystem::CompareSpawnOrder,
          __valuea);
      }
      while ( v11 - v9 > 47 );
    }
    v17 = v9;
    v18 = -1;
    v19 = pSpawnEntities;
    v20 = pEntityCountInIsland - 1;
    while ( 1 )
    {
      v21 = v17->m_spawnInfo.m_pKeyValues;
      v19->m_pEntity = v17->m_spawnInfo.m_pEntity;
      v19->m_pKeyValues = v21;
      m_nDepth = v17->m_nDepth;
      if ( v17->m_nDepth != v18 )
      {
        v20[1] = 0;
        ++v20;
        ++*pNumIslands;
      }
      ++*v20;
      ++v17;
      ++v19;
      if ( v17 == &v9[(nSpawnCount - 1) + 1] )
        break;
      v18 = m_nDepth;
    }
    v23 = g_pClassnameSpawnPriority;
    if ( g_pClassnameSpawnPriority != 0 )
    {
      CStringRegistry::~CStringRegistry(g_pClassnameSpawnPriority);
      operator delete(v23);
    }
    if ( v9 != 0 )
      operator delete[](v9);
    g_pClassnameSpawnPriority = 0;
  }
}


// CGameEntitySystem::ClearEntityDatabase  (line 2472, @0x00000000020f0690, libserver.so)
// calls: CEntitySystem::ClearEntityDatabase
void __fastcall CGameEntitySystem::ClearEntityDatabase(CGameEntitySystem *const this, ClearEntityDatabaseMode_t eMode)
{
  CEntitySystem::ClearEntityDatabase(this, eMode);
}


// CGameEntitySystem::GetSpawnGroupWorldId  (line 2478, @0x000000000209cf70, libserver.so)
// calls: CSpawnGroupMgrGameSystem::GetWorldGroupId
WorldGroupId_t __fastcall CGameEntitySystem::GetSpawnGroupWorldId(
        CGameEntitySystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  return CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, hSpawnGroup);
}


// CGameEntitySystem::Spawn  (line 2484, @0x00000000020f06a0, libserver.so)  // inlines: GetInstance, LeafCodeInfo_t
// calls: CGameEntitySystem::SortEntities, CBodyGameSystem::Spawn, CBodyGameSystem::SpawnDependencyIsland, CEntitySystem::Spawn, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/gameentit, "Spawn", "Memory trash in SortEntities.. overran the number of entity islands supported!\n"
void __fastcall CGameEntitySystem::Spawn(CGameEntitySystem *const this, int nCount, const EntitySpawnInfo_t *pInfo)
{
  const EntitySpawnInfo_t *v3; // r14
  __int64 v5; // r15
  int v6; // r12d
  int v7; // edi
  const EntitySpawnInfo_t *v8; // r8
  __int64 v9; // r9
  const CEntityKeyValues *m_pKeyValues; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int nNumIslands; // [rsp+1Ch] [rbp-94h] BYREF
  LeafCodeInfo_t v17; // [rsp+20h] [rbp-90h] BYREF
  int pEntityCountInIsland[28]; // [rsp+40h] [rbp-70h] BYREF

  v3 = pInfo;
  nNumIslands = 0;
  if ( nCount <= 1 )
    goto LABEL_17;
  CGameEntitySystem::SortEntities(this, nCount, pInfo, &nNumIslands, pEntityCountInIsland);
  if ( nNumIslands > 0x10 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v17.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/gameentitysystem.cpp";
      v17.m_szFunction = "Spawn";
      v17.m_nLine = 2494;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v17,
        "Memory trash in SortEntities.. overran the number of entity islands supported!\n");
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
    JUMPOUT(0x20F089F);
  }
  if ( nNumIslands == 0 )
  {
LABEL_17:
    nNumIslands = 1;
    pEntityCountInIsland[0] = nCount;
  }
  v5 = 0;
  CBodyGameSystem::Spawn(g_pBodyGameSystem, nCount, v3);
  if ( nNumIslands > 0 )
  {
    while ( 1 )
    {
      v6 = pEntityCountInIsland[v5];
      CBodyGameSystem::SpawnDependencyIsland(g_pBodyGameSystem, SpawnPhaseType_t::SPAWN_PHASE_PRE_SPAWN, v6, v3);
      CEntitySystem::Spawn(this, v6, v3);
      v7 = v6 - 1;
      if ( v6 - 1 >= 0 )
        break;
LABEL_12:
      if ( v6 > 0 )
        CBodyGameSystem::SpawnDependencyIsland(g_pBodyGameSystem, SpawnPhaseType_t::SPAWN_PHASE_POST_SPAWN, v6, v3);
      ++v5;
      v3 += v6;
      if ( v5 >= nNumIslands )
        return;
    }
    v8 = &v3[v7];
    while ( 1 )
    {
      if ( v8->m_pEntity != 0 && v8->m_pEntity->m_pInstance != 0 )
        goto LABEL_8;
      if ( v6 - 1 == v7 )
      {
        v6 = v7;
LABEL_8:
        --v7;
        --v8;
        if ( v7 == -1 )
          goto LABEL_12;
      }
      else
      {
        --v7;
        --v8;
        v9 = v6--;
        m_pKeyValues = v3[v9 - 1].m_pKeyValues;
        v8[1].m_pEntity = v3[v9 - 1].m_pEntity;
        v8[1].m_pKeyValues = m_pKeyValues;
        if ( v7 == -1 )
          goto LABEL_12;
      }
    }
  }
}


// CGameEntitySystem::Activate  (line 2547, @0x00000000020f08a0, libserver.so)  // inlines: GetComponent<CBodyComponent>, GetComponent<CHitboxComponent>, operator[]
// calls: CBodyComponent::Activate, CHitboxComponent::Activate, CEntitySystem::Activate
void __fastcall CGameEntitySystem::Activate(
        CGameEntitySystem *const this,
        int nCount,
        const EntityActivation_t *pActivates,
        ActivateType_t activateType)
{
  const EntityActivation_t *v7; // r15
  const EntityActivation_t *v8; // rbx
  CEntityInstance *m_pInstance; // rsi
  CEntityClass::ComponentOffsets_t *m_pMemory; // rax
  __int64 m_nBaseOffset; // rdx
  CBodyComponent *v12; // rdi
  __int64 v13; // rdi
  CHitboxComponent *v14; // rdi

  if ( nCount > 0 )
  {
    v7 = pActivates;
    v8 = &pActivates[(nCount - 1) + 1];
    while ( 1 )
    {
      m_pInstance = v7->m_pEntity->m_pInstance;
      if ( m_pInstance != 0 )
      {
        m_pMemory = v7->m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory;
        m_nBaseOffset = m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
        if ( m_nBaseOffset == 0xFFFF )
          goto LABEL_8;
        v12 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
        if ( v12 == 0 )
          goto LABEL_8;
        CBodyComponent::Activate(v12, m_pInstance, activateType);
        m_pInstance = v7->m_pEntity->m_pInstance;
        if ( m_pInstance != 0 )
          break;
      }
LABEL_11:
      if ( ++v7 == v8 )
        goto LABEL_12;
    }
    m_pMemory = v7->m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory;
LABEL_8:
    v13 = m_pMemory[CHitboxComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( v13 != 0xFFFF )
    {
      v14 = (m_pInstance + v13);
      if ( v14 != 0 )
        CHitboxComponent::Activate(v14, m_pInstance);
    }
    goto LABEL_11;
  }
LABEL_12:
  CEntitySystem::Activate(this, nCount, pActivates, activateType);
}


// CGameEntitySystem::PostDataUpdate  (line 2569, @0x00000000020f0970, libserver.so)
// calls: CBodyGameSystem::PostDataUpdate, CEntitySystem::PostDataUpdate
void __fastcall CGameEntitySystem::PostDataUpdate(
        CGameEntitySystem *const this,
        int nCount,
        const PostDataUpdateInfo_t *pInfo)
{
  CBodyGameSystem::PostDataUpdate(g_pBodyGameSystem, nCount, pInfo);
  CEntitySystem::PostDataUpdate(this, nCount, pInfo);
}


// CGameEntitySystem::OnSetDormant  (line 2580, @0x00000000020f09b0, libserver.so)
// calls: CEntitySystem::OnSetDormant, CBodyGameSystem::OnSetDormant
void __fastcall CGameEntitySystem::OnSetDormant(
        CGameEntitySystem *const this,
        int nCount,
        const EntityDormancyChange_t *pChanges,
        bool bNotifyAddedToPVS)
{
  if ( bNotifyAddedToPVS )
  {
    CBodyGameSystem::OnSetDormant(g_pBodyGameSystem, nCount, pChanges, 1);
    CEntitySystem::OnSetDormant(this, nCount, pChanges, 1);
  }
  else
  {
    CEntitySystem::OnSetDormant(this, nCount, pChanges, 0);
    CBodyGameSystem::OnSetDormant(g_pBodyGameSystem, nCount, pChanges, 0);
  }
}


// CGameEntitySystem::UpdateOnRemove  (line 2598, @0x00000000020f0a20, libserver.so)
// calls: CEntitySystem::UpdateOnRemove, CBodyGameSystem::UpdateOnRemove
void __fastcall CGameEntitySystem::UpdateOnRemove(
        CGameEntitySystem *const this,
        int nCount,
        const EntityDeletion_t *pDeletion)
{
  CEntitySystem::UpdateOnRemove(this, nCount, pDeletion);
  CBodyGameSystem::UpdateOnRemove(g_pBodyGameSystem, nCount, pDeletion);
}


// CGameEntitySystem::GetHighestEntityIndex  (line 2610, @0x00000000020a5fb0, libserver.so)
CEntityIndex __fastcall CGameEntitySystem::GetHighestEntityIndex(CGameEntitySystem *const this)
{
  return this->m_iMaxNetworkedEntIndex;
}


// CGameEntitySystem::RecomputeMaxNetworkedEntIndex  (line 2615, @0x00000000020a5fc0, libserver.so)  // inlines: IndexToIdentity, IsUsed, LookupEntityByIndex
// callers: CGameEntitySystem::OnRemoveEntity
void __fastcall CGameEntitySystem::RecomputeMaxNetworkedEntIndex(CGameEntitySystem *const this)
{
  int v1; // eax
  CEntityIdentity *v2; // rcx
  CEntityIdentity *v3; // rdx

  v1 = this->m_iMaxNetworkedEntIndex - 1;
  if ( v1 < 0 )
  {
LABEL_9:
    this->m_iMaxNetworkedEntIndex = -1;
  }
  else
  {
    while ( 1 )
    {
      if ( v1 <= 32766 && (v1 >> 9) <= 0x3F )
      {
        v2 = this->m_EntityList.m_pIdentityChunks[v1 >> 9];
        if ( v2 != 0 )
        {
          v3 = &v2[v1 & 0x1FF];
          if ( v3 != 0 && (v3->m_EHandle.m_Index & 0x7FFF) == v1 )
            break;
        }
      }
      if ( --v1 == -1 )
        goto LABEL_9;
    }
    this->m_iMaxNetworkedEntIndex = v1;
  }
}


// CGameEntitySystem::NotifyCreateEntity  (line 2639, @0x00000000020a6040, libserver.so)
// callers: CGameEntitySystem::OnAddEntity, CBaseEntity::AddedToEntityDatabase
void __fastcall CGameEntitySystem::NotifyCreateEntity(CGameEntitySystem *const this, CBaseEntity *pEnt)
{
  int v4; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  IEntityListener *v7; // rdi

  if ( pEnt != 0 )
  {
    v4 = *(&stru_1A0A0.r_offset + this) - 1;
    if ( v4 >= 0 )
    {
      v5 = 8LL * v4;
      v6 = 8 * (v4 - v4) - 8;
      do
      {
        v7 = this->m_entityListeners.m_Memory.m_pMemory[v5 / 8];
        v5 -= 8LL;
        v7->OnEntityCreated(pEnt);
      }
      while ( v5 != v6 );
    }
  }
}


// CGameEntitySystem::NotifySpawn  (line 2654, @0x00000000020a6150, libserver.so)
// callers: EntityPostSpawnDelegate
void __fastcall CGameEntitySystem::NotifySpawn(CGameEntitySystem *const this, CBaseEntity *pEnt)
{
  int v4; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  IEntityListener *v7; // rdi

  if ( pEnt != 0 )
  {
    v4 = *(&stru_1A0A0.r_offset + this) - 1;
    if ( v4 >= 0 )
    {
      v5 = 8LL * v4;
      v6 = 8 * (v4 - v4) - 8;
      do
      {
        v7 = this->m_entityListeners.m_Memory.m_pMemory[v5 / 8];
        v5 -= 8LL;
        (*(v7->_vptr_IEntityListener + 1))(v7, pEnt);
      }
      while ( v5 != v6 );
    }
  }
}


// CGameEntitySystem::NotifyRemoveEntity  (line 2669, @0x00000000020a65b0, libserver.so)
// callers: CGameEntitySystem::OnRemoveEntity, CBaseEntity::UpdateOnRemove
void __fastcall CGameEntitySystem::NotifyRemoveEntity(CGameEntitySystem *const this, CBaseEntity *pBaseEnt)
{
  int v4; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  IEntityListener *v7; // rdi

  if ( pBaseEnt != 0 )
  {
    v4 = *(&stru_1A0A0.r_offset + this) - 1;
    if ( v4 >= 0 )
    {
      v5 = 8LL * v4;
      v6 = 8 * (v4 - v4) - 8;
      do
      {
        v7 = this->m_entityListeners.m_Memory.m_pMemory[v5 / 8];
        v5 -= 8LL;
        (*(v7->_vptr_IEntityListener + 2))(v7, pBaseEnt);
      }
      while ( v5 != v6 );
    }
  }
}


// CGameEntitySystem::GetBaseEntity  (line 2692, @0x00000000020a66c0, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// callers: CDirtySpatialPartitionEntityList::UpdateDirtySpatialPartitionEntities, CRopeKeyframe::SetAttachmentPoint, CDOTA_Grinder::NextBuilding, CDOTA_Grinder::FrameUpdateBuildings
CBaseEntity *__fastcall CGameEntitySystem::GetBaseEntity(const CGameEntitySystem *const this, _DWORD *hEnt)
{
  int v2; // ecx
  unsigned __int16 v3; // dx
  int v4; // esi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  v2 = *hEnt >> 15;
  if ( *hEnt == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = *hEnt & 0x7FFF;
    v4 = v3;
  }
  v5 = (v2 << 15) | v3 & 0x7FFF;
  if ( (v5 + 2) > 1
    && (v6 = this->m_EntityList.m_pIdentityChunks[v4 >> 9]) != 0
    && (v7 = &v6[v4 & 0x1FF]) != 0
    && v5 == v7->m_EHandle.m_Index )
  {
    return v7->m_pInstance;
  }
  else
  {
    return 0;
  }
}


// CGameEntitySystem::GetBaseEntity  (line 2697, @0x00000000020a6760, libserver.so)  // inlines: GetInstance, IndexToIdentity, IsUsed, LookupEntityByIndex
// callers: CBaseAnimatingController::UpdateIKLocks, UTIL_Tracer, CDOTAGamerules::ClientMsg_SpecialAbility
CBaseEntity *__fastcall CGameEntitySystem::GetBaseEntity(const CGameEntitySystem *const this, CEntityIndex entnum)
{
  CBaseEntity *result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rdx
  __int64 v5; // [rsp-8h] [rbp-8h]

  result = 0;
  if ( entnum.m_Data <= 0x7FFE )
  {
    v3 = this->m_EntityList.m_pIdentityChunks[entnum.m_Data >> 9];
    if ( v3 != 0 )
    {
      v4 = &v3[entnum.m_Data & 0x1FF];
      if ( v4 != 0 )
      {
        *(&v5 - 8) = v4->m_EHandle.m_Index;
        if ( (*(&v5 - 2) & 0x7FFF) == entnum.m_Data )
          return v4->m_pInstance;
      }
    }
  }
  return result;
}


// FreeContainingEntity  (line 2712, @0x00000000020a67d0, libserver.so)  // inlines: UTIL_RemoveImmediate
// calls: CBaseEntity::PhysicsRemoveTouchedList, CBaseEntity::PhysicsRemoveGroundList, CEntitySystem::DestroyEntityImmediate
// callers: CSource2GameEntities::FreeContainingEntity, CSource2GameClients::ClientDisconnect
void __fastcall FreeContainingEntity(CBaseEntity *ent)
{
  if ( ent != 0 )
  {
    CBaseEntity::PhysicsRemoveTouchedList(ent);
    CBaseEntity::PhysicsRemoveGroundList(ent);
    CEntitySystem::DestroyEntityImmediate(g_pEntitySystem, ent);
  }
}


// CreateEntityByName  (line 2727, @0x00000000020a6820, libserver.so)
// calls: CEntitySystem::CreateEntity
// callers: CLoopModeGameToolHooks::OnToolSpawnEntity, CLoopModeGameToolHooks::OnToolRestartMap, CBaseEntity::CreateNoSpawn, CPointCommentaryNode::UpdateViewThink, CC_CreateFlashlight, CFuncLadderEndPoint::Validate, CGameWeaponManager::Spawn, CreateWeaponManager, CPathKeyFrame::InsertNewKey, CBasePlayer::CreateViewModel, CBasePlayer::CheatImpulseCommands, CBasePlayer::CreatePlayer (24 total)
CBaseEntity *__fastcall CreateEntityByName(const char *pClassName, CEntityIndex iForceEdictIndex)
{
  return CEntitySystem::CreateEntity(
           g_pEntitySystem,
           0xFFFFFFFF,
           pClassName,
           EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT,
           iForceEdictIndex,
           -1,
           0,
           0);
}


// CreateModelEntityByName  (line 2733, @0x00000000020a6860, libserver.so)
// calls: CEntitySystem::CreateEntity
CBaseModelEntity *__fastcall CreateModelEntityByName(const char *pClassName, CEntityIndex iForceEdictIndex)
{
  return CEntitySystem::CreateEntity(
           g_pEntitySystem,
           0xFFFFFFFF,
           pClassName,
           EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT,
           iForceEdictIndex,
           -1,
           0,
           0);
}


// UTIL_PrecacheOther  (line 2744, @0x00000000020d57f0, libserver.so)  // inlines: AddKeyValue<char const*>, AddRef, AddToTail, AddToTailGetPtr, Allocate, Base, CEntityKeyValuesModifyScope, CopyData, Element, EnsureCapacity, FindKeyHash, Free, GetCurrentEntityResourceManifest, LeafCodeInfo_t, Release, SetValue, V_strlen, memcpy, operator=, operator[], ~CEntityKeyValuesModifyScope
// calls: operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValuesModifyScope::Release, CEntityKeyValues::~CEntityKeyValues, operator delete, CEntityKeyValues::SetValue, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, strlen, CEntityVariantAllocator::Allocate, memcpy, Warning (17 total)
// callers: CDOTAGamerules::PrecacheGameModeResources, CDOTAGamerules::PrecacheResources
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "../../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow", "AddToTailGetPtr"
void __fastcall UTIL_PrecacheOther(const char *pClassName, const char *pModelName, IEntityResourceManifest *pManifest)
{
  CEntityKeyValues *v6; // rbx
  IEntityResourceManifest *m_pCurrentManifest; // r9
  CEntityKeyValues *v8; // rbx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v11; // cx
  __int64 v12; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v13; // rdx
  unsigned __int64 m_nAllocated; // rdx
  int v15; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v16; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rax
  uint16 m_flags; // ax
  void *v19; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int16 v24; // ax
  void *v25; // rax
  __int16 v26; // cx
  void *v27; // rcx
  unsigned __int64 v28; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  signed int v38; // [rsp+Ch] [rbp-A4h]
  __int64 v39; // [rsp+10h] [rbp-A0h]
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v40; // [rsp+18h] [rbp-98h]
  __int64 v41; // [rsp+18h] [rbp-98h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v42; // [rsp+18h] [rbp-98h]
  signed int v43; // [rsp+18h] [rbp-98h]
  CEntityKeyValues *pEntityKeys; // [rsp+28h] [rbp-88h] BYREF
  CEntityKeyValuesModifyScope_0 sg; // [rsp+30h] [rbp-80h] BYREF
  LeafCodeInfo_t v46; // [rsp+40h] [rbp-70h] BYREF
  LeafCodeInfo_t v47; // [rsp+60h] [rbp-50h] BYREF

  v6 = operator new(0x70u);
  CEntityKeyValues::CEntityKeyValues(v6);
  ++v6->m_nRefCount;
  pEntityKeys = v6;
  sg.m_pKeyValues = 0;
  sg.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&sg, v6);
  if ( v6->m_nQueuedForSpawnCount > 0 )
    goto LABEL_2;
  m_nCount = pEntityKeys->m_keyHashes.m_nCount;
  if ( pEntityKeys->m_keyHashes.m_nCount <= 0 )
  {
LABEL_18:
    if ( m_nCount == 0x7FFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_71;
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v36, v37, v34, v35) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_71:
        v46.m_szFile = "../../public/tier1/utlleanvector.h";
        v46.m_szFunction = "AddToTailGetPtr";
        v46.m_nLine = 557;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v46,
          "%s allocation count overflow",
          "AddToTailGetPtr");
      }
    }
    m_nAllocated = pEntityKeys->m_keyHashes.m_nAllocated;
    v15 = m_nCount + 1;
    if ( v15 > m_nAllocated )
    {
      if ( v15 > 9 )
      {
        if ( m_nCount == 0x7FFF )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_66;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v32, v33, v30, v31) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_66:
            v47.m_szFile = "../../public/tier1/utlleanvector.h";
            v47.m_szFunction = "EnsureCapacity";
            v47.m_nLine = 104;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v47,
              "%s allocation count overflow",
              "EnsureCapacity");
          }
        }
        v40 = pEntityKeys->m_keyHashes.m_nAllocated;
        while ( v15 > v40 )
        {
          if ( v40 > 16382 )
          {
            v40 = 0x7FFF;
          }
          else
          {
            v26 = 2 * v40;
            if ( 2 * v40 <= 7 )
              v26 = 8;
            v40 = v26;
          }
        }
      }
      else
      {
        v40 = m_nCount + 1;
      }
      if ( m_nAllocated > 9 )
      {
        v6->m_keyHashes.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                        g_pMemAlloc,
                                        pEntityKeys->m_keyHashes.m_pElements,
                                        4LL * v40);
        m_nCount = v6->m_keyHashes.m_nCount;
      }
      else if ( v40 > 9 )
      {
        v27 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v40);
        v28 = v6->m_keyHashes.m_nAllocated;
        if ( v28 != 0 )
        {
          m_pElements = (&v6->m_keyHashes.m_nAllocAllocated + 1);
          if ( v28 > 9 )
            m_pElements = v6->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        v6->m_keyHashes.m_pElements = memcpy(v27, m_pElements, 4LL * v6->m_keyHashes.m_nCount);
        m_nCount = v6->m_keyHashes.m_nCount;
      }
      v6->m_keyHashes.m_nAllocated = v40;
      m_nAllocated = v40;
    }
    v6->m_keyHashes.m_nCount = m_nCount + 1;
    if ( m_nAllocated != 0 )
    {
      v16 = (&v6->m_keyHashes.m_nAllocAllocated + 1);
      if ( m_nAllocated > 9 )
        v16 = v6->m_keyHashes.m_pElements;
    }
    else
    {
      v16 = 0;
    }
    v16[m_nCount] = -971301790;
    v41 = m_nCount;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v6->m_keyValues);
    if ( v6->m_keyValues.m_nAllocated != 0 )
      v17 = v6->m_keyValues.m_pElements;
    else
      v17 = 0;
    v39 = v41;
    v42 = &v17[v41];
    m_flags = v42->m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v42->m_value.m_flags = m_flags & 0xFFFE;
    v42->m_value.m_uint64 = 0;
    v42->m_value.m_type = 30;
    if ( pClassName != 0 )
    {
      v38 = strlen(pClassName) + 1;
      v19 = CEntityVariantAllocator::Allocate(v38);
      v42->m_value.m_uint64 = v19;
      memcpy(v19, pClassName, v38);
      v42->m_value.m_flags |= 1u;
    }
    if ( v6->m_keyValues.m_nAllocated != 0 )
      v20 = v6->m_keyValues.m_pElements;
    else
      v20 = 0;
    v20[v39].m_pAttributeName = 0;
  }
  else
  {
    v11 = pEntityKeys->m_keyHashes.m_nAllocated;
    v12 = 0;
    while ( 1 )
    {
      if ( v11 != 0 )
      {
        v13 = (&pEntityKeys->m_keyHashes.m_nAllocAllocated + 1);
        if ( v11 > 9 )
          v13 = pEntityKeys->m_keyHashes.m_pElements;
      }
      else
      {
        v13 = 0;
      }
      if ( v13[v12] == -971301790 )
        break;
      if ( m_nCount <= ++v12 )
        goto LABEL_18;
    }
    if ( pEntityKeys->m_keyValues.m_nAllocated != 0 )
    {
      v21 = pEntityKeys->m_keyValues.m_pElements;
      v22 = v12;
      v23 = &v21[v22];
      if ( v21[v22].m_pAttributeName != 0 )
      {
LABEL_39:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v21[v22].m_pAttributeName);
        goto LABEL_2;
      }
    }
    else
    {
      v22 = v12;
      v21 = 0;
      v23 = v22 * 24;
      if ( *(v22 * 24 + 16) != 0 )
        goto LABEL_39;
    }
    v24 = *(v23 + 10);
    if ( (v24 & 1) != 0 )
      *(v23 + 10) = v24 & 0xFFFE;
    *v23 = 0;
    *(v23 + 8) = 30;
    if ( pClassName != 0 )
    {
      v43 = strlen(pClassName) + 1;
      v25 = CEntityVariantAllocator::Allocate(v43);
      *v23 = v25;
      memcpy(v25, pClassName, v43);
      *(v23 + 10) |= 1u;
    }
  }
LABEL_2:
  if ( pModelName != 0 && *pModelName != 0 )
    CEntityKeyValues::SetValue(pEntityKeys, -926958586, pModelName);
  CEntityKeyValuesModifyScope::Release(&sg);
  m_pCurrentManifest = pManifest;
  if ( pManifest == 0 )
    m_pCurrentManifest = g_pEntitySystem->m_pCurrentManifest;
  (*(g_pEntitySystem->_vptr_IEntityResourceManifestBuilder + 1))(
    g_pEntitySystem,
    0xFFFFFFFFLL,
    1,
    &pEntityKeys,
    0,
    m_pCurrentManifest);
  v8 = pEntityKeys;
  if ( --pEntityKeys->m_nRefCount <= 0 )
  {
    CEntityKeyValues::~CEntityKeyValues(v8);
    operator delete(v8);
  }
  CEntityKeyValuesModifyScope::Release(&sg);
}


// UTIL_PrecacheOther  (line 2771, @0x00000000020a68a0, libserver.so)  // inlines: GetCurrentEntityResourceManifest
// callers: CDOTAGamerules::PrecacheResources, DOTA_PrecacheItemByNameSync, DOTA_PrecacheUnitByNameSync, DOTA_VScript_PrecacheUnitFromTableSync, DOTA_PrecacheAbilityByNameSync, CDOTA_BaseNPC_Hero::Precache
void __fastcall UTIL_PrecacheOther(const CEntityKeyValues *pKeyValues, IEntityResourceManifest *pManifest)
{
  IEntityResourceManifest *m_pCurrentManifest; // r9
  const CEntityKeyValues *pKeyValuesa; // [rsp+8h] [rbp-8h] BYREF

  m_pCurrentManifest = pManifest;
  pKeyValuesa = pKeyValues;
  if ( pManifest == 0 )
    m_pCurrentManifest = g_pEntitySystem->m_pCurrentManifest;
  (*(g_pEntitySystem->_vptr_IEntityResourceManifestBuilder + 1))(
    g_pEntitySystem,
    0xFFFFFFFFLL,
    1,
    &pKeyValuesa,
    0,
    m_pCurrentManifest);
}


// UTIL_PrecacheOther  (line 2776, @0x00000000020a68f0, libserver.so)
// callers: CEnvEntityIgniter::Precache, CFire::Precache, CBreakable::Precache, CBasePlayer::Precache, CPropHMDAvatar::Precache
void __fastcall UTIL_PrecacheOther(const char *szClassname, const CEntityPrecacheContext *pContext)
{
  (*(g_pEntitySystem->_vptr_IEntityResourceManifestBuilder + 5))(
    g_pEntitySystem,
    szClassname,
    pContext->m_pConfig,
    pContext->m_pManifest);
}


// UTIL_Remove  (line 2830, @0x00000000020a6920, libserver.so)
// calls: CEntitySystem::QueueDestroyEntity
// callers: ent_remove_all, ent_remove, Script_Remove, CGameGibManager::AddGibToLRU, CBaseModelEntity::SUB_FadeOut, CBreakableProp::ClearEnableMotionPosition, CBreakableProp::Break, CBaseProp::Spawn, CProjectedDecal::Spawn, CDecal::Spawn, ShutdownWorldEntity, CBaseVRHandAttachment::DropOnDeath (259 total)
void __fastcall UTIL_Remove(CEntityInstance *pBaseEnt)
{
  if ( pBaseEnt != 0 )
    CEntitySystem::QueueDestroyEntity(g_pEntitySystem, pBaseEnt);
}


// UTIL_RemoveImmediate  (line 2856, @0x00000000020a6950, libserver.so)
// calls: CEntitySystem::DestroyEntityImmediate
// callers: Script_RemoveImmediate, CWorldItem::Spawn, Test_SpawnRandomEntities, CDOTABaseGameMode::SpawnRunes, CDOTAGamerules::SpawnRune, CDOTA_UnitInventory::Think, CDOTA_UnitInventory::RemoveItem, CDOTA_UnitInventory::PickupItem, CDOTA_UnitInventory::AddItems, CDOTA_UnitInventory::MoveItem, CDOTA_BaseNPC::HandleRunePickup, CDOTA_NPCSpawner::ReleaseCreeps (14 total)
void __fastcall UTIL_RemoveImmediate(CEntityInstance *oldObj)
{
  CEntitySystem::DestroyEntityImmediate(g_pEntitySystem, oldObj);
}


// CRespawnEntitiesFilter::~CRespawnEntitiesFilter  (line 2872, @0x00000000020f2210, libserver.so)  // inlines: ~ISpawnGroupEntityFilter
void __fastcall CRespawnEntitiesFilter::~CRespawnEntitiesFilter(CRespawnEntitiesFilter *const this)
{
  this->_vptr_ISpawnGroupEntityFilter = off_3FCAF10;  // vptr: ISpawnGroupEntityFilter
}


// CRespawnEntitiesFilter::~CRespawnEntitiesFilter  (line 2872, @0x00000000020f4ce0, libserver.so)  // inlines: ~CRespawnEntitiesFilter, ~ISpawnGroupEntityFilter
// calls: operator delete
void __fastcall CRespawnEntitiesFilter::~CRespawnEntitiesFilter(CRespawnEntitiesFilter *const this)
{
  this->_vptr_ISpawnGroupEntityFilter = off_3FCAF10;  // vptr: ISpawnGroupEntityFilter
  operator delete(this);
}


// CRespawnEntitiesFilter::FilterSpawnGroupEntities  (line 2875, @0x00000000021146a0, libserver.so)  // inlines: AddToTail, Base, CopyConstruct<const CEntityKeyValues*>, Element, FindKeyHash, GetValue, GrowMemory, TempString, operator[]
// calls: CUtlMemory<const CEntityKeyValues*, int>::Grow
// globals: CEntityKeyValues::sm_EmptyVariant
// local variable allocation has failed, the output may be wrong!
void __fastcall CRespawnEntitiesFilter::FilterSpawnGroupEntities(
        CRespawnEntitiesFilter *const this,
        SpawnGroupHandle_t h,
        bool bIsPrecaching,
        const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pInKeyValues,
        CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *const outKeyValues)
{
  __int64 v5; // r9
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  const CEntityKeyValues *v10; // rbx
  int m_nCount; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v13; // rax
  CEntityVariant *v14; // rax
  const char *m_uint64; // rsi
  __int64 m_Size; // rax
  int v17; // edx
  const CEntityKeyValues **v18; // rax
  int v19; // [rsp+4h] [rbp-3Ch]
  CUtlVectorBase<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-38h]

  if ( pInKeyValues != 0 && pInKeyValues->m_Size > 0 )
  {
    v8 = 0;
    v9 = 8LL * (pInKeyValues->m_Size - 1) + 8;
    p_m_Memory = &outKeyValues->m_Memory;
    do
    {
      while ( 1 )
      {
        v10 = pInKeyValues->m_Memory.m_pMemory[v8 / 8];
        m_nCount = v10->m_keyHashes.m_nCount;
        if ( m_nCount <= 0 )
        {
LABEL_22:
          v14 = &CEntityKeyValues::sm_EmptyVariant;
          m_uint64 = "";
          if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
            goto LABEL_15;
LABEL_23:
          if ( asc_32DB004[2] != 0 )
            break;
          goto LABEL_24;
        }
        m_nAllocated = v10->m_keyHashes.m_nAllocated;
        v13 = 0;
        v5 = m_nAllocated;
        while ( m_nAllocated == 0 )
        {
          *&bIsPrecaching = 0;
          if ( *(4 * v13) == -971301790 )
            goto LABEL_12;
LABEL_9:
          if ( m_nCount <= ++v13 )
            goto LABEL_22;
        }
        *&bIsPrecaching = &v10->m_keyHashes.m_nAllocAllocated + 1;
        if ( m_nAllocated > 9 )
          *&bIsPrecaching = v10->m_keyHashes.m_pElements;
        if ( *(bIsPrecaching + 4 * v13) != -971301790 )
          goto LABEL_9;
LABEL_12:
        if ( v10->m_keyValues.m_nAllocated != 0 )
          *&bIsPrecaching = v10->m_keyValues.m_pElements;
        else
          *&bIsPrecaching = 0;
        v14 = (bIsPrecaching + 24 * v13);
        m_uint64 = "";
        if ( v14->m_type != 30 )
          goto LABEL_23;
LABEL_15:
        m_uint64 = v14->m_uint64;
        if ( *v14->m_pszString != 0 )
          break;
LABEL_24:
        v8 += 8LL;
        if ( v8 == v9 )
          return;
      }
      if ( (*(g_pGameConfiguration->ISource2ClientConfig::IAppSystem::_vptr_IAppSystem + 24))(
             g_pGameConfiguration,
             m_uint64,
             bIsPrecaching,
             pInKeyValues,
             outKeyValues,
             v5) != 0 )
        goto LABEL_24;
      m_Size = outKeyValues->m_Size;
      v17 = outKeyValues->m_Size;
      if ( m_Size == outKeyValues->m_Memory.m_nAllocationCount )
      {
        v19 = outKeyValues->m_Size;
        CUtlMemory<CEntityKeyValues const*,int>::Grow(p_m_Memory, 1);
        v17 = outKeyValues->m_Size;
        m_Size = v19;
      }
      outKeyValues->m_Size = v17 + 1;
      *&bIsPrecaching = outKeyValues->m_Memory.m_pMemory;
      v18 = (bIsPrecaching + 8 * m_Size);
      if ( v18 == 0 )
        goto LABEL_24;
      v8 += 8LL;
      *v18 = v10;
    }
    while ( v8 != v9 );
  }
}


// CRespawnAllEntitiesSystem::~CRespawnAllEntitiesSystem  (line 2898, @0x00000000020f5630, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CRespawnAllEntitiesSystem::~CRespawnAllEntitiesSystem(CRespawnAllEntitiesSystem *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CRespawnAllEntitiesSystem::~CRespawnAllEntitiesSystem  (line 2898, @0x00000000020f5650, libserver.so)  // inlines: ~CAutoGameSystem, ~CRespawnAllEntitiesSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CRespawnAllEntitiesSystem::~CRespawnAllEntitiesSystem(CRespawnAllEntitiesSystem *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CRespawnAllEntitiesSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 2900, @0x00000000020f14d0, libserver.so)
void __fastcall CRespawnAllEntitiesSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CRespawnAllEntitiesSystem *const this)
{
  ;
}


// CRespawnAllEntitiesSystem::DoesGameSystemReallocate  (line 2900, @0x00000000020f14e0, libserver.so)
// globals: CRespawnAllEntitiesSystem::sm_Factory
bool __fastcall CRespawnAllEntitiesSystem::DoesGameSystemReallocate(const CRespawnAllEntitiesSystem *const this)
{
  return (*(CRespawnAllEntitiesSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CRespawnAllEntitiesSystem::sm_Factory);
}


// CRespawnAllEntitiesSystem::SetGameSystemGlobalPtrs  (line 2900, @0x00000000020f1500, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CRespawnAllEntitiesSystem::sm_Factory
void __fastcall CRespawnAllEntitiesSystem::SetGameSystemGlobalPtrs(CRespawnAllEntitiesSystem *const this, void *pValue)
{
  if ( CRespawnAllEntitiesSystem::sm_Factory != 0 )
    (*(CRespawnAllEntitiesSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CRespawnAllEntitiesSystem::sm_Factory,
      pValue);
}


// CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink  (line 2909, @0x0000000002114820, libserver.so)  // inlines: CEntityIndex, CUtlMemory, CUtlVector, CUtlVectorBase, FirstEnt, GetClassNameAsCStr, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, Purge, RemoveAll, String, ToBasePlayer, entindex, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GlobalEntity_EnableStateUpdates, CGameEntitySystem::NextEnt, CEntityInstance::GetEntityIndex, CEntitySystem::QueueDestroyEntity, CGameEntitySystem::CleanupDeleteList, CSpawnGroupMgrGameSystem::GetSpawnGroups, CSpawnGroupMgrGameSystem::GetSpawnGroupWorldOffset, CGameEntitySystem::CreateSpawnGroupEntities, CSpawnGroupMgrGameSystem::GetSpawnGroupName, CSpawnGroupMgrGameSystem::GetWorldGroupId, ClientPutInServer, ClientActive (16 total)
// globals: g_pGameEntitySystem
// local variable allocation has failed, the output may be wrong!
void __fastcall CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink(
        CRespawnAllEntitiesSystem *const this,
        const EventServerPostEntityThink_t *const msg)
{
  CBaseEntity *Ent; // rbx
  const char *m_pAsString; // rsi
  CEntityIdentity *m_pEntity; // rax
  CBaseEntity *v5; // r12
  char v6; // al
  CBaseEntity *v7; // rdi
  __int64 v8; // r14
  int i; // r13d
  const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *v10; // r15
  const matrix3x4a_t *SpawnGroupWorldOffset; // rax
  SpawnGroupHandle_t v12; // ebx
  const char *SpawnGroupName; // r15
  WorldGroupId_t v14; // eax
  __int64 v15; // rax
  CBasePlayer *m_pInstance; // rdi
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rax
  char v19; // [rsp+1Bh] [rbp-5Dh]
  int32 m_Data; // [rsp+1Ch] [rbp-5Ch]
  int v21; // [rsp+20h] [rbp-58h] OVERLAPPED BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > groups; // [rsp+28h] [rbp-50h] BYREF

  if ( this->m_bRespawnAllEntities )
  {
    this->m_bRespawnAllEntities = 0;
    GlobalEntity_EnableStateUpdates(0);
    m_Data = -1;
    Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
    v19 = 0;
    if ( Ent != 0 )
    {
      while ( 1 )
      {
        v5 = CGameEntitySystem::NextEnt(g_pGameEntitySystem, Ent);
        if ( (*(Ent->_vptr_IHandleEntity + 140))(Ent) != 0 )
        {
          m_Data = CEntityInstance::GetEntityIndex(Ent).m_Data;
          v6 = (*(Ent->_vptr_IHandleEntity + 140))(Ent);
          v7 = 0;
          if ( v6 != 0 )
            v7 = Ent;
          v19 = (*(v7->_vptr_IHandleEntity + 391))(v7);
        }
        m_pAsString = "";
        m_pEntity = Ent->m_pEntity;
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
        if ( (*(g_pGameConfiguration->ISource2ClientConfig::IAppSystem::_vptr_IAppSystem + 24))(
               g_pGameConfiguration,
               m_pAsString) != 0 )
        {
          if ( v5 == 0 )
            break;
        }
        else
        {
          CEntitySystem::QueueDestroyEntity(g_pEntitySystem, Ent->m_pEntity);
          if ( v5 == 0 )
            break;
        }
        Ent = v5;
      }
    }
    CGameEntitySystem::CleanupDeleteList(g_pGameEntitySystem);
    GlobalEntity_EnableStateUpdates(1);
    v21 = 0;
    *&groups.m_Size = 0;
    groups.m_Memory.m_pMemory = 0;
    CSpawnGroupMgrGameSystem::GetSpawnGroups(g_pSpawnGroupMgr, &v21);
    if ( v21 > 0 )
    {
      v8 = 0;
      for ( i = 0; i < v21; ++i )
      {
        v12 = *(*&groups.m_Size + v8);
        SpawnGroupName = CSpawnGroupMgrGameSystem::GetSpawnGroupName(g_pSpawnGroupMgr, v12);
        v14.m_nHashCode = CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, v12).m_nHashCode;
        v15 = (*(*g_pWorldRendererMgr + 328LL))(g_pWorldRendererMgr, v14.m_nHashCode, SpawnGroupName);
        if ( v15 != 0 )
          v10 = (*(*v15 + 128LL))(v15, 0);
        else
          v10 = 0;
        SpawnGroupWorldOffset = CSpawnGroupMgrGameSystem::GetSpawnGroupWorldOffset(g_pSpawnGroupMgr, v12);
        CGameEntitySystem::CreateSpawnGroupEntities(
          g_pGameEntitySystem,
          v12,
          v10,
          SpawnGroupWorldOffset,
          "respawn",
          CreateSpawnGroupType_t::CREATE_SPAWN_GROUP_IMMEDIATELY,
          0,
          0);
        v8 += 4;
      }
    }
    if ( m_Data >= 0 )
    {
      ClientPutInServer(m_Data, &stru_32D9EEC.m_pResourceManifestPrerequisite, 0);
      ClientActive(m_Data, 0, v19);
      m_pInstance = 0;
      if ( m_Data <= 32766 )
      {
        v17 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[m_Data >> 9];
        if ( v17 != 0 )
        {
          v18 = &v17[m_Data & 0x1FF];
          if ( v18 != 0 && (v18->m_EHandle.m_Index & 0x7FFF) == m_Data )
            m_pInstance = v18->m_pInstance;
        }
      }
      SceneManager_ClientActive(m_pInstance);
    }
    v21 = 0;
    if ( (HIDWORD(groups.m_Memory.m_pMemory) & 0xC0000000) == 0 )
    {
      CUtlMemory<unsigned int,int>::Purge(&groups);
      if ( (HIDWORD(groups.m_Memory.m_pMemory) & 0xC0000000) == 0 )
        CUtlMemory<unsigned int,int>::Purge(&groups);
    }
  }
}


// CRespawnAllEntitiesSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 2986, @0x00000000020a6970, libserver.so)
void __cdecl CRespawnAllEntitiesSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// respawn_entities  (line 2993, @0x000000000209be80, libserver.so)
// globals: g_pRespawnAllEntitiesSystem
void __fastcall respawn_entities(const CCommandContext *const ctx, const CCommand *const args)
{
  g_pRespawnAllEntitiesSystem->m_bRespawnAllEntities = 1;
}


// report_entities  (line 2999, @0x00000000020dab30, libserver.so)  // inlines: AddEntityToList, CSortedEntityList, CUtlMemory, CUtlSortVector, CUtlVector, CUtlVectorBase, FirstEnt, Purge, RemoveAll, ~CSortedEntityList, ~CUtlMemory, ~CUtlSortVector, ~CUtlVector, ~CUtlVectorBase
// calls: CGameEntitySystem::NextEnt, CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > >::Insert, CSortedEntityList::ReportEntityList, CUtlMemory<CBaseEntity*, int>::Purge, _Unwind_Resume
// globals: g_pGameEntitySystem
void __fastcall report_entities(const CCommandContext *const ctx, const CCommand *const args)
{
  CBaseEntity *i; // rbx
  CBaseEntity *src; // [rsp+8h] [rbp-58h] BYREF
  CSortedEntityList list; // [rsp+10h] [rbp-50h] BYREF

  list.m_sortedList.m_Size = 0;
  memset(&list.m_sortedList.m_Memory, 0, 25);
  list.m_emptyCount = 0;
  for ( i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
        i != 0;
        i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, i) )
  {
    src = i;
    CUtlSortVector<CBaseEntity *,CSortedEntityList::CEntityReportLess,CUtlVector<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>>::Insert(
      &list.m_sortedList,
      &src);
  }
  CSortedEntityList::ReportEntityList(&list);
  list.m_sortedList.m_Size = 0;
  if ( (list.m_sortedList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CBaseEntity *,int>::Purge(&list.m_sortedList.m_Memory);
    if ( (list.m_sortedList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(&list.m_sortedList.m_Memory);
  }
}


// CEntity2NetworkClasses<ServerClass>::~CEntity2NetworkClasses  (line 3017, @0x0000000002114c90, libserver.so)  // inlines: Purge, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int, CUtlMap<int, Entity2Networkable_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CEntity2NetworkClasses<ServerClass>::~CEntity2NetworkClasses(
        CEntity2NetworkClasses<ServerClass> *const this)
{
  CUtlMap<int,Entity2Networkable_t,short unsigned int,bool (*)(int const&,int const&)> *p_m_NetworkedEntities; // rdi

  p_m_NetworkedEntities = &this->m_NetworkedEntities;
  *&p_m_NetworkedEntities[-1].m_Tree.m_Root = &off_3FF68D0;
  CUtlRBTree<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&p_m_NetworkedEntities->m_Tree);
  if ( (this->m_NetworkedEntities.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_NetworkedEntities.m_Tree.m_Elements);
}


// CEntity2NetworkClasses<ServerClass>::OnEntityCreated  (line 3033, @0x0000000002126dc0, libserver.so)  // inlines: CEntityHandle, Element, Entity2Networkable_t, Find, FindInsertionPosition, GetEHandle, GetEntryIndex, GetGameClass, GetSerialNumber, Init, Insert, InsertAt, IsNetworked, LeftChild, Node_t, RightChild, operator(), operator[]
// calls: CUtlRBTree<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int, CUtlMap<int, Entity2Networkable_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int, CUtlMap<int, Entity2Networkable_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int, CUtlMap<int, Entity2Networkable_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CEntityClass::GetGameClass
void __fastcall CEntity2NetworkClasses<ServerClass>::OnEntityCreated(
        CEntity2NetworkClasses<ServerClass> *const this,
        CEntityInstance *pEntity)
{
  CEntityIdentity *m_pEntity; // rax
  bool v5; // cl
  int v6; // ebx
  CUtlMap<int,Entity2Networkable_t,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t v7; // edx
  unsigned __int16 m_Root; // r12
  unsigned __int16 m_Right; // ax
  bool v10; // zf
  UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v12; // r15
  UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t>::Node_t,short unsigned int> *v13; // r12
  CEntityClass *m_pClass; // rdx
  ServerClass *m_pGameClass; // rax
  CEntityIdentity *v16; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  char v18; // cl
  CUtlMap<int,Entity2Networkable_t,short unsigned int,bool (*)(int const&,int const&)> *p_m_NetworkedEntities; // [rsp+8h] [rbp-A8h]
  bool isLeft; // [rsp+10h] [rbp-A0h]
  CUtlMap<int,Entity2Networkable_t,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t entityIndex; // [rsp+14h] [rbp-9Ch]
  CUtlMap<int,Entity2Networkable_t,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+30h] [rbp-80h] BYREF

  m_pEntity = pEntity->m_pEntity;
  if ( (m_pEntity->m_flags & 0x800) != 0 )
  {
    v5 = (m_pEntity->m_flags & 0x40) != 0;
  }
  else
  {
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      return;
    v5 = (m_pEntity->m_EHandle.m_Index & 0x7FFF) <= 0x3FFF;
  }
  if ( v5 )
  {
    v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    LOWORD(v7) = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      LOWORD(v7) = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v7 = v7;
    search.elem.m_nSerialNumber = -1;
    search.elem.m_pChangeAccessor = 0;
    search.elem.m_pnChangeFlags = 0;
    search.elem.m_nEntryIndex = -1;
    memset(&search.elem, 0, 36);
    if ( ((v6 << 15) | v7 & 0x7FFF) == 0xFFFFFFFF )
      v7 = 0x7FFF;
    *(&search.elem + 60) &= ~1u;
    entityIndex = v7;
    search.key = v7;
    p_m_NetworkedEntities = &this->m_NetworkedEntities;
    if ( CUtlRBTree<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &this->m_NetworkedEntities.m_Tree,
           &search) == 0xFFFF )
    {
      m_Root = this->m_NetworkedEntities.m_Tree.m_Root;
      *(&search.elem + 60) &= ~1u;
      search.elem.m_nSerialNumber = -1;
      search.elem.m_pChangeAccessor = 0;
      search.elem.m_pnChangeFlags = 0;
      search.elem.m_nEntryIndex = -1;
      memset(&search.elem, 0, 36);
      search.key = entityIndex;
      if ( m_Root != 0xFFFF )
      {
        while ( 1 )
        {
          v10 = !this->m_NetworkedEntities.m_Tree.m_LessFunc.m_LessFunc(
                   &search,
                   &this->m_NetworkedEntities.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
          m_pMemory = this->m_NetworkedEntities.m_Tree.m_Elements.m_pMemory;
          if ( v10 )
          {
            m_Right = m_pMemory[m_Root].m_Right;
            v18 = 0;
            if ( m_Right == 0xFFFF )
              goto LABEL_18;
          }
          else
          {
            m_Right = m_pMemory[m_Root].m_Left;
            v18 = 1;
            if ( m_Right == 0xFFFF )
              goto LABEL_18;
          }
          m_Root = m_Right;
        }
      }
      m_Root = -1;
      v18 = 0;
LABEL_18:
      isLeft = v18;
      v12 = CUtlRBTree<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
              &p_m_NetworkedEntities->m_Tree,
              &search);
      CUtlRBTree<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &p_m_NetworkedEntities->m_Tree,
        v12,
        m_Root,
        isLeft);
      ++this->m_NetworkedEntities.m_Tree.m_NumElements;
      v13 = &this->m_NetworkedEntities.m_Tree.m_Elements.m_pMemory[v12];
      v13->m_Data.elem.m_nEntryIndex = entityIndex;
      v13->m_Data.elem.m_pEntityInstance = pEntity;
      m_pClass = pEntity->m_pEntity->m_pClass;
      m_pGameClass = m_pClass->m_pGameClass;
      if ( m_pGameClass == 0 )
      {
        m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
        if ( m_pBaseClassInfo != 0 )
          m_pGameClass = CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
      }
      v13->m_Data.elem.u.m_pServerClass = m_pGameClass;
      v16 = pEntity->m_pEntity;
      v13->m_Data.elem.m_pEntity = v16;
      LODWORD(v16) = v16->m_hSpawnGroup;
      v13->m_Data.elem.m_nSerialNumber = v6 & 0x3FF;
      v13->m_Data.elem.m_SpawnGroupHandle = v16;
      v13->m_Data.elem.m_pChangeAccessor = &pEntity[3];
      v13->m_Data.elem.m_pnChangeFlags = &pEntity[2].m_worldGroupId.m_nHashCode;
      *(&v13->m_Data.elem + 60) = (*(pEntity->_vptr_IHandleEntity + 140))(pEntity) & 1
                                | *(&v13->m_Data.elem + 60) & 0xFE;
    }
  }
}


// CEntity2NetworkClasses<ServerClass>::OnEntityDeleted  (line 3070, @0x0000000002127880, libserver.so)  // inlines: CEntityHandle, Entity2Networkable_t, FreeNode, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Links, Node_t, Remove, RemoveAt, SetLeftChild, SetRightChild, operator[]
// calls: CUtlRBTree<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int, CUtlMap<int, Entity2Networkable_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int, CUtlMap<int, Entity2Networkable_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int>, short unsigned int> >::Unlink
void __fastcall CEntity2NetworkClasses<ServerClass>::OnEntityDeleted(
        CEntity2NetworkClasses<ServerClass> *const this,
        CEntityInstance *pEntity)
{
  CEntityIdentity *m_pEntity; // rax
  CUtlMap<int,Entity2Networkable_t,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t v4; // ecx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // r12
  __int64 v7; // rax
  CUtlMap<int,Entity2Networkable_t,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+10h] [rbp-70h] BYREF

  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity == 0 )
    goto LABEL_9;
  LOWORD(v4) = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    LOWORD(v4) = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  if ( ((((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF) == 0xFFFFFFFF )
LABEL_9:
    v4 = 0x7FFF;
  else
    v4 = v4;
  *(&search.elem + 60) &= ~1u;
  search.elem.m_nSerialNumber = -1;
  search.elem.m_pChangeAccessor = 0;
  search.elem.m_pnChangeFlags = 0;
  search.elem.m_nEntryIndex = -1;
  memset(&search.elem, 0, 36);
  search.key = v4;
  v5 = CUtlRBTree<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_NetworkedEntities.m_Tree,
         &search);
  v6 = v5;
  if ( v5 != 0xFFFF )
  {
    CUtlRBTree<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
      &this->m_NetworkedEntities.m_Tree,
      v5);
    v7 = v6;
    this->m_NetworkedEntities.m_Tree.m_Elements.m_pMemory[v7].m_Left = v6;
    this->m_NetworkedEntities.m_Tree.m_Elements.m_pMemory[v7].m_Right = this->m_NetworkedEntities.m_Tree.m_FirstFree;
    --this->m_NetworkedEntities.m_Tree.m_NumElements;
    this->m_NetworkedEntities.m_Tree.m_FirstFree = v6;
  }
}


// CEntity2NetworkClasses<ServerClass>::OnEntityParentChanged  (line 3076, @0x0000000002114d60, libserver.so)  // inlines: CEntityHandle, Element, Entity2Networkable_t, Find, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Node_t, operator[]
// calls: CUtlRBTree<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int, CUtlMap<int, Entity2Networkable_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int>, short unsigned int> >::Find
void __fastcall CEntity2NetworkClasses<ServerClass>::OnEntityParentChanged(
        CEntity2NetworkClasses<ServerClass> *const this,
        CEntityInstance *pEntity,
        CEntityInstance *pNewParent)
{
  CEntityIdentity *m_pEntity; // rax
  CUtlMap<int,Entity2Networkable_t,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t v6; // edx
  unsigned __int16 v7; // ax
  CUtlMap<int,Entity2Networkable_t,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+10h] [rbp-60h] BYREF

  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity == 0 )
    goto LABEL_9;
  LOWORD(v6) = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    LOWORD(v6) = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  if ( ((((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF) == 0xFFFFFFFF )
LABEL_9:
    v6 = 0x7FFF;
  else
    v6 = v6;
  *(&search.elem + 60) &= ~1u;
  search.elem.m_nSerialNumber = -1;
  search.elem.m_pChangeAccessor = 0;
  search.elem.m_pnChangeFlags = 0;
  search.elem.m_nEntryIndex = -1;
  memset(&search.elem, 0, 36);
  search.key = v6;
  v7 = CUtlRBTree<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_NetworkedEntities.m_Tree,
         &search);
  if ( v7 != 0xFFFF )
    this->m_NetworkedEntities.m_Tree.m_Elements.m_pMemory[v7].m_Data.elem.m_pParentEntity = pNewParent;
}


// GetEntity2Networkables  (line 3123, @0x00000000020a6980, libserver.so)
// callers: CSource2Server::GetEntity2Networkables
const CUtlMap<int,Entity2Networkable_t,short unsigned int,bool (*)(int const&,int const&)> *__cdecl GetEntity2Networkables()
{
  return &s_Entity2NetworkClasses.m_NetworkedEntities;
}


// GetEntity2Networkable  (line 3128, @0x00000000020d8f30, libserver.so)  // inlines: Element, Entity2Networkable_t, Find, GetEntity2Networkable, Node_t, operator[]
// calls: CUtlRBTree<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int, CUtlMap<int, Entity2Networkable_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CSource2Server::GetEntity2Networkable
bool __fastcall GetEntity2Networkable(CEntityIndex nEntryIndex, Entity2Networkable_t *const info)
{
  unsigned __int16 v3; // ax
  UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t>::Node_t,short unsigned int> *v4; // rax
  CUtlMap<int,Entity2Networkable_t,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+0h] [rbp-60h] BYREF

  search.key = nEntryIndex.m_Data;
  *(&search.elem + 60) &= ~1u;
  search.elem.m_nSerialNumber = -1;
  search.elem.m_pChangeAccessor = 0;
  search.elem.m_pnChangeFlags = 0;
  search.elem.m_nEntryIndex = -1;
  memset(&search.elem, 0, 36);
  v3 = CUtlRBTree<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &s_Entity2NetworkClasses.m_NetworkedEntities.m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  v4 = &s_Entity2NetworkClasses.m_NetworkedEntities.m_Tree.m_Elements.m_pMemory[v3];
  info->u.m_pServerClass = v4->m_Data.elem.u.m_pServerClass;
  info->m_pEntity = v4->m_Data.elem.m_pEntity;
  info->m_pEntityInstance = v4->m_Data.elem.m_pEntityInstance;
  info->m_pParentEntity = v4->m_Data.elem.m_pParentEntity;
  *&info->m_SpawnGroupHandle = *&v4->m_Data.elem.m_SpawnGroupHandle;
  info->m_pChangeAccessor = v4->m_Data.elem.m_pChangeAccessor;
  info->m_pnChangeFlags = v4->m_Data.elem.m_pnChangeFlags;
  info->m_nEntryIndex = v4->m_Data.elem.m_nEntryIndex;
  *(info + 60) = *(&v4->m_Data.elem + 60);
  return 1;
}


// GetEntity2ClassName  (line 3133, @0x00000000020a6990, libserver.so)  // inlines: GetClassNameAsCStr, GetInstance, IndexToIdentity, IsUsed, LookupEntityByIndex, String
const char *__fastcall GetEntity2ClassName(CEntityIndex nEntryIndex)
{
  CEntityIdentity *v1; // rdx
  CEntityIdentity *v2; // rax
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rdx
  const char *result; // rax
  __int64 v6; // [rsp-8h] [rbp-8h]

  if ( nEntryIndex.m_Data > 0x7FFE )
    return "";
  v1 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[nEntryIndex.m_Data >> 9];
  if ( v1 == 0 )
    return "";
  v2 = &v1[nEntryIndex.m_Data & 0x1FF];
  if ( v2 == 0 )
    return "";
  *(&v6 - 8) = v2->m_EHandle.m_Index;
  if ( nEntryIndex.m_Data != (*(&v6 - 2) & 0x7FFF) )
    return "";
  m_pInstance = v2->m_pInstance;
  if ( m_pInstance == 0 )
    return "";
  m_pEntity = m_pInstance->m_pEntity;
  result = "";
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    return m_pEntity->m_designerName.u.m_pAsString;
  return result;
}


// AddServerToClientClassMapping  (line 3213, @0x00000000020a6a30, libserver.so)
// callers: _GLOBAL__sub_I_base_clientui_ent.cpp, _GLOBAL__sub_I_point_clientui_world_panel.cpp, _GLOBAL__sub_I_point_clientui_world_text_panel.cpp, _GLOBAL__sub_I_point_clientui_dialog.cpp, _GLOBAL__sub_I_devtest_hierarchy_cpp_schema.gen_cpp, _GLOBAL__sub_I__unity_entities_01.cpp, _GLOBAL__sub_I__unity_source_files_02.cpp, _GLOBAL__sub_I__unity_source_files_04.cpp, _GLOBAL__sub_I__unity_base_01.cpp, _GLOBAL__sub_I__unity_base_02.cpp, _GLOBAL__sub_I__unity_base_03.cpp, _GLOBAL__sub_I__unity_base_04.cpp (49 total)
// globals: g_pServerToClientClassMapping
void __fastcall AddServerToClientClassMapping(ServerToClientMap_t *const map)
{
  ServerToClientMap_t *v1; // rax

  v1 = g_pServerToClientClassMapping;
  g_pServerToClientClassMapping = map;
  map->m_pNext = v1;
}


// CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses  (line 3227, @0x0000000002124ef0, libserver.so)  // inlines: AddToTail, BuildDictionaryFromEntityList, CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityClass*>, Element, EnsureCapacity, Find, FindInsertionPosition, First, FirstInorder, GetGameClass, GetNetworkSerializer, GetSingleInheritanceBaseClass, GrowMemory, Init, Insert, InsertAt, IsBaseEntity, LeftChild, Link, MemAlloc_StrDupFunc, Next, NextInorder, Purge, RemoveAll, ResetDbgInfo, RightChild, SchemaSingleInheritanceDepth, Schema_StaticBinding, ServerClass, SetCompareType, SetGameClass, SetLessFunc, SingleInheritsFromOrIs, memcpy, operator(), operator[], strcpy, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlDict<char const*, int>::Insert, CEntitySystem::IterClassesStart, CBaseEntity::Schema_VerifyBindingIsRegistered, CEntitySystem::IterClassesNext, CEntitySystem::IterClassesEnd, strlen, strcpy, CUtlRBTree<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent, CUtlDict<ServerClass*, int>::Purge, CUtlRBTree<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge (33 total)
// callers: CSource2EntitySystem::StaticInit
// strings: "EntitySystem - Entity Networking - start", "EntitySystem - Entity Networking - finish"
// globals: g_pServerToClientClassMapping, FastCaselessStringLessThan(char const* const&,char const* const&), g_pGameEntitySystem, ServerClass::sm_pServerClassHead
void __fastcall CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses(
        CEntity2NetworkClasses<ServerClass> *const this,
        ServerClass **ppHead,
        int nMaxNetworkableEntities)
{
  bool v4; // cc
  uint32 m_nGrowSize; // eax
  UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t>::Node_t,short unsigned int> *v6; // rsi
  ServerToClientMap_t *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  CSchemaClassInfo *v10; // rax
  CSchemaClassInfo *m_pClassInfo_N; // rdx
  ServerClass **m_ppClassList; // rax
  ServerClass *i; // r14
  const char *m_pNetworkName; // rbx
  size_t v15; // rax
  char *v16; // rax
  char *v17; // rax
  int v18; // r12d
  int m_Left; // eax
  bool v20; // bl
  int v21; // eax
  int Inorder; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,ServerClass*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v23; // rax
  __int64 v24; // rdx
  int v25; // esi
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v27; // rax
  __int64 v28; // rbx
  __int64 m_Size; // rbx
  CEntityClass **v30; // rax
  CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // rbx
  ServerClass *v32; // rax
  ServerClass *v33; // r12
  ServerClass *v34; // rax
  __int64 v35; // rbx
  int v36; // eax
  CEntityClass *ClassByName; // rax
  CUtlMap<char const*,ServerClass*,int,bool (*)(char const* const&,char const* const&)>::ElemType_t v38; // r12
  int v39; // r13d
  CEntityClass **v40; // r14
  __int64 v41; // rbx
  CEntityClass *v42; // r12
  _QWORD *m_pGameClass; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *m_pClass; // rdx
  CEntityClassInfo *v46; // rdx
  UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t>::Node_t,short unsigned int> *m_pMemory; // r12
  UtlRBTreeNode_t<CUtlMap<int,Entity2Networkable_t>::Node_t,short unsigned int> *v48; // rax
  CEntityClass *pClass; // [rsp+38h] [rbp-138h]
  EntityClassIter_t iter; // [rsp+48h] [rbp-128h] BYREF
  _QWORD v52[2]; // [rsp+50h] [rbp-120h] BYREF
  CUtlMap<char const*,ServerClass*,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+60h] [rbp-110h] BYREF
  CUtlVector<CEntityClass*,CUtlMemory<CEntityClass*,int> > entityClasses; // [rsp+70h] [rbp-100h] BYREF
  CUtlVector<CEntityClass*,CUtlMemory<CEntityClass*,int> > indirectlyMappedClasses; // [rsp+90h] [rbp-E0h] BYREF
  CUtlDict<char const*,int> clientToServerMap; // [rsp+B0h] [rbp-C0h] BYREF
  CUtlDict<ServerClass*,int> entries; // [rsp+E0h] [rbp-90h] BYREF
  CUtlDict<ServerClass*,int> v58; // [rsp+110h] [rbp-60h] BYREF

  v4 = nMaxNetworkableEntities <= this->m_NetworkedEntities.m_Tree.m_Elements.m_nAllocationCount;
  this->m_ppClassList = ppHead;
  if ( !v4 )
  {
    m_nGrowSize = this->m_NetworkedEntities.m_Tree.m_Elements.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_NetworkedEntities.m_Tree.m_Elements.m_pMemory;
        v48 = (**g_pMemAlloc)(g_pMemAlloc, 80LL * nMaxNetworkableEntities);
        this->m_NetworkedEntities.m_Tree.m_Elements.m_pMemory = v48;
        if ( m_pMemory != 0 )
          memcpy(v48, m_pMemory, 80LL * this->m_NetworkedEntities.m_Tree.m_Elements.m_nAllocationCount);
        this->m_NetworkedEntities.m_Tree.m_Elements.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v6 = this->m_NetworkedEntities.m_Tree.m_Elements.m_pMemory;
        if ( v6 != 0 )
          this->m_NetworkedEntities.m_Tree.m_Elements.m_pMemory = (*(*g_pMemAlloc + 8LL))(
                                                                    g_pMemAlloc,
                                                                    v6,
                                                                    80LL * nMaxNetworkableEntities);
        else
          this->m_NetworkedEntities.m_Tree.m_Elements.m_pMemory = (**g_pMemAlloc)(
                                                                    g_pMemAlloc,
                                                                    80LL * nMaxNetworkableEntities);
      }
      this->m_NetworkedEntities.m_Tree.m_Elements.m_nAllocationCount = nMaxNetworkableEntities;
    }
  }
  v7 = g_pServerToClientClassMapping;
  clientToServerMap.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  clientToServerMap.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  clientToServerMap.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  clientToServerMap.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  clientToServerMap.m_Elements.m_Tree.m_Root = -1;
  clientToServerMap.m_Elements.m_Tree.m_NumElements = 0;
  clientToServerMap.m_Elements.m_Tree.m_FirstFree = -1;
  clientToServerMap.m_Elements.m_Tree.m_LastAlloc.index = -1;
  for ( clientToServerMap.m_Elements.m_Tree.m_pElements = 0; v7 != 0; v7 = v7->m_pNext )
    CUtlDict<char const*,int>::Insert(&clientToServerMap, v7->m_pClient, &v7->m_pServer);
  entityClasses.m_Size = 0;
  entityClasses.m_Memory.m_pMemory = 0;
  entityClasses.m_Memory.m_nAllocationCount = 0;
  entityClasses.m_Memory.m_nGrowSize = 0;
  indirectlyMappedClasses.m_Size = 0;
  indirectlyMappedClasses.m_Memory.m_pMemory = 0;
  indirectlyMappedClasses.m_Memory.m_nAllocationCount = 0;
  indirectlyMappedClasses.m_Memory.m_nGrowSize = 0;
  for ( pClass = CEntitySystem::IterClassesStart(g_pEntitySystem, &iter);
        pClass != 0;
        pClass = CEntitySystem::IterClassesNext(g_pEntitySystem, &iter) )
  {
    v8 = (*(pClass->_vptr_CEntityClass + 7))(pClass);
    v9 = (*(*v8 + 8LL))(v8);
    CBaseEntity::Schema_VerifyBindingIsRegistered();
    v10 = *(v9 + 40);
    m_pClassInfo_N = CBaseEntity::s_pSchemaBinding->m_pClassInfo_N;
    if ( v10 != 0 )
    {
      if ( v10 != m_pClassInfo_N )
      {
        while ( v10->m_BaseClasses.m_Data.m_nImplLength != 0 )
        {
          v10 = *(v10->m_BaseClasses.m_Data.m_pImplElements + 1);
          if ( v10 == 0 )
            break;
          if ( m_pClassInfo_N == v10 )
            goto LABEL_35;
        }
        continue;
      }
LABEL_35:
      if ( pClass->m_pClassInfo->m_pszCPPClassname == 0 )
        goto LABEL_42;
      m_Root = clientToServerMap.m_Elements.m_Tree.m_Root;
      v52[0] = pClass->m_pClassInfo->m_pszCPPClassname;
      if ( clientToServerMap.m_Elements.m_Tree.m_Root == -1 )
        goto LABEL_42;
      v27 = clientToServerMap.m_Elements.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v28 = m_Root;
          if ( clientToServerMap.m_Elements.m_Tree.m_LessFunc.m_LessFunc(v52, &v27[v28].m_Data) == 0 )
            break;
          v27 = clientToServerMap.m_Elements.m_Tree.m_Elements.m_pMemory;
          m_Root = clientToServerMap.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Left;
          if ( m_Root == -1 )
            goto LABEL_42;
        }
        if ( clientToServerMap.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
               &clientToServerMap.m_Elements.m_Tree.m_Elements.m_pMemory[v28].m_Data,
               v52) == 0 )
          break;
        v27 = clientToServerMap.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = clientToServerMap.m_Elements.m_Tree.m_Elements.m_pMemory[v28].m_Right;
        if ( m_Root == -1 )
          goto LABEL_42;
      }
      if ( m_Root == -1 )
      {
LABEL_42:
        m_Size = indirectlyMappedClasses.m_Size;
        if ( indirectlyMappedClasses.m_Size == indirectlyMappedClasses.m_Memory.m_nAllocationCount )
          CUtlMemory<CEntityClass *,int>::Grow(&indirectlyMappedClasses.m_Memory, 1);
        ++indirectlyMappedClasses.m_Size;
        v30 = &indirectlyMappedClasses.m_Memory.m_pMemory[m_Size];
        if ( v30 == 0 )
          continue;
      }
      else
      {
        elem = clientToServerMap.m_Elements.m_Tree.m_Elements.m_pMemory[v28].m_Data.elem;
        v32 = operator new(0x38u);
        v32->m_pNetworkName = elem;
        v33 = v32;
        v32->m_ClassIDString.m_pString = 0;
        v32->m_pEntityClass = 0;
        v32->m_hSerializer = 0;
        v32->m_ClassID = -1;
        CUtlString::operator=(&v32->m_ClassIDString, "");
        v33->m_InstanceBaselineIndex = 0xFFFF;
        v34 = ServerClass::sm_pServerClassHead;
        v35 = entityClasses.m_Size;
        ServerClass::sm_pServerClassHead = v33;
        v33->m_pNetworkProceduralDataHelper = 0;
        v33->m_pNext = v34;
        if ( v35 == entityClasses.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CEntityClass *,int>::Grow(&entityClasses.m_Memory, 1);
          v36 = entityClasses.m_Size;
        }
        else
        {
          v36 = v35;
        }
        entityClasses.m_Size = v36 + 1;
        v30 = &entityClasses.m_Memory.m_pMemory[v35];
        if ( v30 == 0 )
          continue;
      }
      *v30 = pClass;
    }
  }
  CEntitySystem::IterClassesEnd(g_pEntitySystem, &iter);
  entries.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  entries.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  v58.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  entries.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  entries.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  entries.m_Elements.m_Tree.m_Root = -1;
  m_ppClassList = this->m_ppClassList;
  entries.m_Elements.m_Tree.m_NumElements = 0;
  entries.m_Elements.m_Tree.m_FirstFree = -1;
  entries.m_Elements.m_Tree.m_LastAlloc.index = -1;
  entries.m_Elements.m_Tree.m_pElements = 0;
  v58.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  v58.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  v58.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  v58.m_Elements.m_Tree.m_Root = -1;
  v58.m_Elements.m_Tree.m_NumElements = 0;
  v58.m_Elements.m_Tree.m_FirstFree = -1;
  v58.m_Elements.m_Tree.m_LastAlloc.index = -1;
  v58.m_Elements.m_Tree.m_pElements = 0;
  for ( i = *m_ppClassList; i != 0; i = i->m_pNext )
  {
    m_pNetworkName = i->m_pNetworkName;
    if ( i->m_pNetworkName != 0 )
    {
      v15 = strlen(i->m_pNetworkName);
      v16 = (**g_pMemAlloc)(g_pMemAlloc, v15 + 1);
      v17 = strcpy(v16, m_pNetworkName);
    }
    else
    {
      v17 = 0;
    }
    v18 = entries.m_Elements.m_Tree.m_Root;
    pCopyFrom.key = v17;
    pCopyFrom.elem = i;
    if ( entries.m_Elements.m_Tree.m_Root != -1 )
    {
      while ( 1 )
      {
        if ( entries.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
               &pCopyFrom,
               &entries.m_Elements.m_Tree.m_Elements.m_pMemory[v18].m_Data) != 0 )
        {
          m_Left = entries.m_Elements.m_Tree.m_Elements.m_pMemory[v18].m_Left;
          v20 = 1;
          if ( m_Left == -1 )
            goto LABEL_26;
        }
        else
        {
          m_Left = entries.m_Elements.m_Tree.m_Elements.m_pMemory[v18].m_Right;
          v20 = 0;
          if ( m_Left == -1 )
            goto LABEL_26;
        }
        v18 = m_Left;
      }
    }
    v20 = 0;
LABEL_26:
    v21 = CUtlRBTree<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
            &entries.m_Elements.m_Tree,
            &pCopyFrom);
    CUtlRBTree<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
      &entries.m_Elements.m_Tree,
      v21,
      v18,
      v20);
    ++entries.m_Elements.m_Tree.m_NumElements;
  }
  CUtlDict<ServerClass *,int>::Purge(&v58);
  CUtlRBTree<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&v58.m_Elements.m_Tree);
  if ( (v58.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&v58.m_Elements.m_Tree.m_Elements);
  CEntity2NetworkClasses<ServerClass>::BuildClassListAndAssignIds(this, &entries);
  COM_TimestampedLog("EntitySystem - Entity Networking - start");
  CEntitySystem::BuildEntityNetworking(
    g_pGameEntitySystem,
    NetworkSerializationMode_t::NET_SERIALIZATION_MODE_0,
    &entityClasses);
  COM_TimestampedLog("EntitySystem - Entity Networking - finish");
  Inorder = entries.m_Elements.m_Tree.m_Root;
  if ( entries.m_Elements.m_Tree.m_Root != -1 )
  {
    v23 = entries.m_Elements.m_Tree.m_Elements.m_pMemory;
    v24 = entries.m_Elements.m_Tree.m_Root;
    v25 = entries.m_Elements.m_Tree.m_Elements.m_pMemory[entries.m_Elements.m_Tree.m_Root].m_Left;
    if ( v25 != -1 )
    {
      while ( 1 )
      {
        v24 = v25;
        if ( entries.m_Elements.m_Tree.m_Elements.m_pMemory[v25].m_Left == -1 )
          break;
        v25 = entries.m_Elements.m_Tree.m_Elements.m_pMemory[v25].m_Left;
      }
      Inorder = v25;
    }
    while ( 1 )
    {
      v38 = v23[v24].m_Data.elem;
      if ( v38->m_hSerializer == 0 )
      {
        ClassByName = CEntitySystem::FindClassByName(g_pEntitySystem, v38->m_pNetworkName, 0);
        ClassByName->m_pGameClass = v38;
        v38->m_pEntityClass = ClassByName;
        v38->m_hSerializer = ClassByName->m_hNetworkSerializer;
      }
      Inorder = CUtlRBTree<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                  &entries.m_Elements.m_Tree,
                  Inorder);
      if ( Inorder == -1 )
        break;
      v23 = entries.m_Elements.m_Tree.m_Elements.m_pMemory;
      v24 = Inorder;
    }
  }
  v39 = indirectlyMappedClasses.m_Size;
  if ( indirectlyMappedClasses.m_Size > 0 )
  {
    v40 = indirectlyMappedClasses.m_Memory.m_pMemory;
    v41 = 0;
    do
    {
      v42 = v40[v41];
      m_pGameClass = v42->m_pGameClass;
      if ( m_pGameClass == 0 )
      {
        m_pBaseClassInfo = v42->m_pBaseClassInfo;
        if ( m_pBaseClassInfo != 0 )
        {
          m_pClass = m_pBaseClassInfo->m_pClass;
          m_pGameClass = m_pClass->m_pGameClass;
          if ( m_pGameClass == 0 )
          {
            v46 = m_pClass->m_pBaseClassInfo;
            if ( v46 != 0 )
              m_pGameClass = CEntityClass::GetGameClass(v46->m_pClass, 0);
          }
        }
      }
      ++v41;
      v42->m_hNetworkSerializer = m_pGameClass[4];
    }
    while ( v39 > v41 );
  }
  CGameEntitySystem::AddListenerEntity(g_pGameEntitySystem, this);
  CUtlDict<ServerClass *,int>::Purge(&entries);
  CUtlRBTree<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&entries.m_Elements.m_Tree);
  if ( (entries.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&entries.m_Elements.m_Tree.m_Elements);
  indirectlyMappedClasses.m_Size = 0;
  if ( (indirectlyMappedClasses.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityClass *,int>::Purge(&indirectlyMappedClasses.m_Memory);
    if ( (indirectlyMappedClasses.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityClass *,int>::Purge(&indirectlyMappedClasses.m_Memory);
  }
  entityClasses.m_Size = 0;
  if ( (entityClasses.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityClass *,int>::Purge(&entityClasses.m_Memory);
    if ( (entityClasses.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityClass *,int>::Purge(&entityClasses.m_Memory);
  }
  CUtlDict<char const*,int>::Purge(&clientToServerMap);
  CUtlRBTree<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&clientToServerMap.m_Elements.m_Tree);
  if ( (clientToServerMap.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&clientToServerMap.m_Elements.m_Tree.m_Elements);
}


// CEntity2NetworkClasses<ServerClass>::BuildClassListAndAssignIds  (line 3328, @0x00000000021171d0, libserver.so)  // inlines: Element, First, FirstInorder, LeftChild, Next, NextInorder, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, CUtlString::operator=, CUtlRBTree<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, __stack_chk_fail
// callers: CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses
void __fastcall CEntity2NetworkClasses<ServerClass>::BuildClassListAndAssignIds(
        CEntity2NetworkClasses<ServerClass> *const this,
        CUtlDict<ServerClass*,int> *const entries)
{
  int m_Root; // r14d
  UtlRBTreeNode_t<CUtlMap<char const*,ServerClass*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v5; // rsi
  UtlRBTreeNode_t<CUtlMap<char const*,ServerClass*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v6; // rdx
  int m_Left; // edi
  __int64 v8; // rdx
  __int64 v9; // rdx
  UtlRBTreeNode_t<CUtlMap<char const*,ServerClass*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v10; // r8
  int i; // r15d
  CUtlMap<char const*,ServerClass*,int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // rbx
  int Inorder; // eax
  ServerClass *first; // [rsp+10h] [rbp-160h]
  CFmtStrN<256,false> v16; // [rsp+20h] [rbp-150h] BYREF
  unsigned __int64 v17; // [rsp+138h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  m_Root = entries->m_Elements.m_Tree.m_Root;
  first = 0;
  if ( m_Root != -1 )
  {
    m_pMemory = entries->m_Elements.m_Tree.m_Elements.m_pMemory;
    v5 = m_Root;
    v6 = &m_pMemory[m_Root];
    m_Left = v6->m_Left;
    if ( v6->m_Left != -1 )
    {
      v8 = m_Left;
      do
        LODWORD(v8) = m_pMemory[v8].m_Left;
      while ( v8 != -1 );
      v9 = m_Left;
      do
      {
        v10 = &m_pMemory[v9];
        v9 = v10->m_Left;
      }
      while ( v9 != -1 );
      v6 = v10;
    }
    first = v6->m_Data.elem;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v5 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    for ( i = 0; ; ++i )
    {
      elem = m_pMemory[v5].m_Data.elem;
      elem->m_ClassID = i;
      CFmtStrN<256,false>::CFmtStrN(&v16, "%d", i);
      CUtlString::operator=(&elem->m_ClassIDString, v16.m_szBuf);
      Inorder = CUtlRBTree<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,ServerClass *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                  &entries->m_Elements.m_Tree,
                  m_Root);
      m_Root = Inorder;
      if ( Inorder == -1 )
        break;
      v5 = Inorder;
      elem->m_pNext = entries->m_Elements.m_Tree.m_Elements.m_pMemory[Inorder].m_Data.elem;
      m_pMemory = entries->m_Elements.m_Tree.m_Elements.m_pMemory;
    }
    elem->m_pNext = 0;
  }
  *this->m_ppClassList = first;
}


// CEntityIONotify::OnEntityIOOutput  (line 3371, @0x00000000020ce080, libserver.so)  // inlines: GetClassNameAsCStr, GetEntityNameAsCStr, String, ToCStr, curtime
// calls: V_sprintf_safe<512ul>, LoggingSystem_IsChannelEnabled, AddDebugHistoryLine, CBaseEntity::HasDebugBitsSet, CFmtStrN<256, false>::CFmtStrN, CBaseEntity::DrawOutputOverlay, LoggingSystem_Log, __stack_chk_fail, _Unwind_Resume
// strings: "Entity Output (%0.2f): \"%s\"[%s] -> \"%s\".%s(%s)%s\tActivator \"%s\"[%s]\n", " with %.1fs delay."
void __fastcall CEntityIONotify::OnEntityIOOutput(
        CEntityIONotify *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        EntityIOConnection_t *pConnection)
{
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r14
  float m_flDelay; // xmm0_4
  bool v9; // zf
  const char *v10; // r15
  CEntityIdentity *v11; // rax
  CGlobalVarsBase *v12; // r13
  double m_flCurrentTime; // xmm0_8
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  char *m_szBuf; // [rsp+20h] [rbp-380h]
  const char *v16; // [rsp+28h] [rbp-378h]
  const char *v17; // [rsp+30h] [rbp-370h]
  const char *v18; // [rsp+38h] [rbp-368h]
  const char *m_Id; // [rsp+40h] [rbp-360h]
  const char *v20; // [rsp+48h] [rbp-358h]
  CFmtStrN<256,false> v21; // [rsp+50h] [rbp-350h] BYREF
  char szBuffer[512]; // [rsp+160h] [rbp-240h] BYREF
  unsigned __int64 v23; // [rsp+368h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  if ( pActivator == 0 )
  {
    m_pAsString = "NULL";
    v18 = "NULL";
LABEL_5:
    m_flDelay = pConnection->m_flDelay;
    v9 = m_flDelay == 0.0;
    goto LABEL_6;
  }
  m_pEntity = pActivator->m_pEntity;
  m_pAsString = "";
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  v18 = "";
  if ( m_pEntity->m_name.u.m_Id == 0 )
    goto LABEL_5;
  m_flDelay = pConnection->m_flDelay;
  v9 = m_flDelay == 0.0;
  v18 = m_pEntity->m_name.u.m_pAsString;
LABEL_6:
  if ( v9 )
  {
    m_szBuf = "";
  }
  else
  {
    CFmtStrN<256,false>::CFmtStrN(&v21, " with %.1fs delay.", m_flDelay);
    m_szBuf = v21.m_szBuf;
  }
  v10 = "";
  if ( pConnection->m_valueOverride.u.m_Id != 0 )
    v10 = pConnection->m_valueOverride.u.m_pAsString;
  v20 = "";
  if ( pConnection->m_targetInput.u.m_Id != 0 )
    v20 = pConnection->m_targetInput.u.m_pAsString;
  m_Id = "";
  if ( pConnection->m_targetDesc.u.m_Id != 0 )
    m_Id = pConnection->m_targetDesc.u.m_Id;
  if ( pCaller == 0 )
  {
    v16 = "NULL";
    v17 = "NULL";
    goto LABEL_18;
  }
  v11 = pCaller->m_pEntity;
  v16 = "";
  if ( v11->m_designerName.u.m_Id != 0 )
    v16 = v11->m_designerName.u.m_pAsString;
  v17 = "";
  if ( v11->m_name.u.m_Id == 0 )
  {
LABEL_18:
    v12 = gpGlobalsBase;
    if ( gpGlobalsBase != 0 )
      goto LABEL_19;
LABEL_31:
    m_flCurrentTime = 0.0;
    goto LABEL_21;
  }
  v17 = v11->m_name.u.m_pAsString;
  v12 = gpGlobalsBase;
  if ( gpGlobalsBase == 0 )
    goto LABEL_31;
LABEL_19:
  if ( !v12->m_bEnableAssertions && !v12->m_bInSimulation )
  {
    m_pfnWarningFunc = v12->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  m_flCurrentTime = v12->m_flCurrentTime;
LABEL_21:
  V_sprintf_safe<512ul>(
    szBuffer,
    "Entity Output (%0.2f): \"%s\"[%s] -> \"%s\".%s(%s)%s\tActivator \"%s\"[%s]\n",
    m_flCurrentTime,
    v17,
    v16,
    m_Id,
    v20,
    v10,
    m_szBuf,
    v18,
    m_pAsString);
  if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 0) != 0 )
    LoggingSystem_Log(LOG_ENTITY_SYSTEM, 0, "%s", szBuffer);
  AddDebugHistoryLine(0, szBuffer);
  if ( pCaller != 0 && CBaseEntity::HasDebugBitsSet(pCaller, 0x10u) )
    CBaseEntity::DrawOutputOverlay(pCaller, pConnection);
}


// CEntityIONotify::OnEntityIOConnectionRemoved  (line 3403, @0x000000000209cf90, libserver.so)  // inlines: GetClassNameAsCStr, GetEntityNameAsCStr, String
// calls: V_snprintf, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, AddDebugHistoryLine, __stack_chk_fail
// strings: "Removing entity i/o connection: (%s,%s) -> (%s,%s)\n"
void __fastcall CEntityIONotify::OnEntityIOConnectionRemoved(
        CEntityIONotify *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        EntityIOConnection_t *pConnection)
{
  const char *m_pAsString; // rsi
  const char *m_Id; // r9
  CEntityIdentity *m_pEntity; // rax
  const char *v7; // r8
  const char *v8; // rcx
  char szBuffer[264]; // [rsp+10h] [rbp-120h] BYREF
  unsigned __int64 v10; // [rsp+118h] [rbp-18h]

  m_pAsString = "";
  v10 = __readfsqword(0x28u);
  if ( pConnection->m_targetInput.u.m_Id != 0 )
    m_pAsString = pConnection->m_targetInput.u.m_pAsString;
  m_Id = "";
  if ( pConnection->m_targetDesc.u.m_Id != 0 )
    m_Id = pConnection->m_targetDesc.u.m_Id;
  if ( pCaller != 0 )
  {
    m_pEntity = pCaller->m_pEntity;
    v7 = "";
    if ( m_pEntity->m_name.u.m_Id == 0 )
    {
      v8 = "";
      if ( m_pEntity->m_designerName.u.m_Id == 0 )
        goto LABEL_8;
      goto LABEL_11;
    }
    v8 = "";
    v7 = m_pEntity->m_name.u.m_pAsString;
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
LABEL_11:
      v8 = m_pEntity->m_designerName.u.m_pAsString;
  }
  else
  {
    v7 = "NULL";
    v8 = "NULL";
  }
LABEL_8:
  V_snprintf(szBuffer, 256, "Removing entity i/o connection: (%s,%s) -> (%s,%s)\n", v8, v7, m_Id, m_pAsString);
  if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 0) != 0 )
    LoggingSystem_Log(LOG_ENTITY_SYSTEM, 0, "%s", szBuffer);
  AddDebugHistoryLine(0, szBuffer);
}


// CEntityIONotify::OnEntityIOInput  (line 3416, @0x00000000020d21d0, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, AssignTo, AssignTo<CVariantDefaultAllocator>, CVariantBase, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, Free, GetBool, GetClassNameAsCStr, GetEntityNameAsCStr, GetInt, String, V_strlen, V_strncpy<unsigned int>, Vector, curtime, memcpy, operator=, ~CVariantBase
// calls: CBaseEntity::GetAbsOrigin, NDebugOverlay::Line, NDebugOverlay::Box, NDebugOverlay::Text, V_snprintf, V_sprintf_safe<512ul>, LoggingSystem_IsChannelEnabled, AddDebugHistoryLine, CBaseEntity::HasDebugBitsSet, VariantFieldTypeName, Warning, _V_strncpy (19 total)
// strings: "%g %g %g %g", "Entity Input  (%0.2f): \"%s\"[%s].%s(%s) <- Caller \"%s\"[%s] <- Activator \"%s\"[%s]\n", "No conversion from %s to string at the moment!\n", "true", "false", "(null)" (7 total)
// globals: jpt_20D23A0, jpt_20D28EC
void __fastcall CEntityIONotify::OnEntityIOInput(
        CEntityIONotify *const this,
        CEntityInstance *pTarget,
        const char *pInputName,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        const CVariant *const value,
        int nOutputID)
{
  const Vector *AbsOrigin; // rax
  const Vector *v13; // rax
  const Vector *v14; // rax
  const Vector *v15; // rax
  int16 m_type; // di
  CEntityIdentity *m_pEntity; // rdx
  const char *m_pAsString; // rax
  const char *v19; // r8
  CEntityIdentity *v20; // rdx
  const char *v21; // rsi
  const char *v22; // r9
  CEntityIdentity *v23; // rdi
  const char *v24; // rcx
  const char *v25; // rdx
  double m_flCurrentTime; // xmm0_8
  CGlobalVarsBase *v27; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // r11
  const char *v29; // rax
  uint64 m_uint; // rcx
  const char *v31; // rdx
  double m_float; // xmm0_8
  const char *m_uint64; // rsi
  int16 v34; // cx
  _DWORD *v35; // r13
  _DWORD *v36; // rax
  const char *v37; // r13
  unsigned int v38; // r15d
  _DWORD *v39; // r13
  _DWORD *v40; // rax
  _DWORD *v41; // r13
  _DWORD *v42; // rax
  uint64 v43; // rax
  const char *v44; // [rsp+30h] [rbp-490h]
  const char *v45; // [rsp+38h] [rbp-488h]
  const char *v46; // [rsp+40h] [rbp-480h]
  const char *v47; // [rsp+48h] [rbp-478h]
  Vector *v48; // [rsp+50h] [rbp-470h]
  Vector *target; // [rsp+58h] [rbp-468h]
  Vector *targeta; // [rsp+58h] [rbp-468h]
  Vector mins; // [rsp+60h] [rbp-460h] BYREF
  Vector maxs; // [rsp+70h] [rbp-450h] BYREF
  char szVariantAsString[512]; // [rsp+80h] [rbp-440h] BYREF
  char szBuffer[512]; // [rsp+280h] [rbp-240h] BYREF
  unsigned __int64 v55; // [rsp+488h] [rbp-38h]
  variant_t v56; // 0:rcx.8,8:r8d.4

  v55 = __readfsqword(0x28u);
  if ( ent_messages_draw.m_pParent->m_Value.m_nValue != 0 && pTarget != 0 )
  {
    if ( pCaller != 0 )
    {
      target = CBaseEntity::GetAbsOrigin(pTarget);
      AbsOrigin = CBaseEntity::GetAbsOrigin(pCaller);
      NDebugOverlay::Line(AbsOrigin, target, 255, 255, 255, 0, 3.0);
      maxs.x = 4.0;
      maxs.y = 4.0;
      maxs.z = 4.0;
      mins.x = -4.0;
      mins.y = -4.0;
      mins.z = -4.0;
      v13 = CBaseEntity::GetAbsOrigin(pCaller);
      NDebugOverlay::Box(v13, &mins, &maxs, 255, 0, 0, 0, 3.0);
    }
    v14 = CBaseEntity::GetAbsOrigin(pTarget);
    NDebugOverlay::Text(v14, pInputName, 0, 3.0);
    maxs.x = 4.0;
    maxs.y = 4.0;
    maxs.z = 4.0;
    mins.x = -4.0;
    mins.y = -4.0;
    mins.z = -4.0;
    v15 = CBaseEntity::GetAbsOrigin(pTarget);
    NDebugOverlay::Box(v15, &mins, &maxs, 0, 255, 0, 0, 3.0);
  }
  m_type = value->m_type;
  switch ( m_type )
  {
    case 0:
      goto LABEL_36;
    case 1:
      m_float = value->m_float;
      goto LABEL_45;
    case 3:
    case 39:
      V_snprintf(
        szVariantAsString,
        512,
        "%g %g %g",
        *value->m_pszString,
        *(value->m_uint64 + 4),
        *(value->m_uint64 + 8));
      if ( pActivator == 0 )
        goto LABEL_33;
      goto LABEL_9;
    case 4:
    case 27:
      V_snprintf(
        szVariantAsString,
        512,
        "%g %g %g %g",
        *value->m_pszString,
        *(value->m_uint64 + 4),
        *(value->m_uint64 + 8),
        *(value->m_uint64 + 12));
      break;
    case 5:
      m_uint = value->m_uint;
      v31 = "%d";
      goto LABEL_40;
    case 6:
      m_uint = "true";
      if ( value->m_char == 0 )
        m_uint = "false";
      v31 = "%s";
      goto LABEL_40;
    case 8:
      m_uint = value->m_char;
      v31 = "%c";
      goto LABEL_40;
    case 9:
      V_snprintf(
        szVariantAsString,
        512,
        "%d %d %d %d",
        value->m_int,
        BYTE1(value->m_int),
        BYTE2(value->m_int),
        HIBYTE(value->m_int));
      break;
    case 25:
      V_snprintf(szVariantAsString, 512, "%g %g", *value->m_pszString, *(value->m_uint64 + 4));
      break;
    case 26:
      m_uint = value->m_uint64;
      v31 = "%lld";
      goto LABEL_40;
    case 30:
      m_uint64 = "(null)";
      if ( value->m_uint64 != 0 )
        m_uint64 = value->m_uint64;
      _V_strncpy(szVariantAsString, m_uint64, 512);
      break;
    case 33:
      m_uint = value->m_uint64;
      v31 = "%llu";
      goto LABEL_40;
    case 34:
      m_float = value->m_float64;
LABEL_45:
      V_snprintf(szVariantAsString, 512, "%g", m_float);
      break;
    case 37:
      m_uint = value->m_uint;
      v31 = "%u";
LABEL_40:
      V_snprintf(szVariantAsString, 512, v31, m_uint);
      break;
    default:
      v29 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to string at the moment!\n", v29);
LABEL_36:
      szVariantAsString[0] = 0;
      break;
  }
  if ( pActivator != 0 )
  {
LABEL_9:
    m_pEntity = pActivator->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    v19 = "";
    if ( m_pEntity->m_name.u.m_Id != 0 )
      v19 = m_pEntity->m_name.u.m_pAsString;
    if ( pCaller != 0 )
      goto LABEL_14;
LABEL_34:
    v21 = "NULL";
    v22 = "NULL";
    goto LABEL_18;
  }
LABEL_33:
  m_pAsString = "NULL";
  v19 = "NULL";
  if ( pCaller == 0 )
    goto LABEL_34;
LABEL_14:
  v20 = pCaller->m_pEntity;
  v21 = "";
  if ( v20->m_designerName.u.m_Id != 0 )
    v21 = v20->m_designerName.u.m_pAsString;
  v22 = "";
  if ( v20->m_name.u.m_Id != 0 )
    v22 = v20->m_name.u.m_pAsString;
LABEL_18:
  v23 = pTarget->m_pEntity;
  v24 = "";
  if ( v23->m_designerName.u.m_Id != 0 )
    v24 = v23->m_designerName.u.m_pAsString;
  v25 = "";
  if ( v23->m_name.u.m_Id != 0 )
    v25 = v23->m_name.u.m_pAsString;
  m_flCurrentTime = 0.0;
  v27 = gpGlobalsBase;
  if ( gpGlobalsBase != 0 )
  {
    if ( !gpGlobalsBase->m_bEnableAssertions && !gpGlobalsBase->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobalsBase->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v44 = v21;
        v45 = m_pAsString;
        v46 = v25;
        v47 = v24;
        v48 = v22;
        targeta = v19;
        (m_pfnWarningFunc)(1, 0.0);
        v21 = v44;
        m_pAsString = v45;
        v25 = v46;
        v24 = v47;
        v22 = v48;
        v19 = targeta;
      }
    }
    m_flCurrentTime = v27->m_flCurrentTime;
  }
  V_sprintf_safe<512ul>(
    szBuffer,
    "Entity Input  (%0.2f): \"%s\"[%s].%s(%s) <- Caller \"%s\"[%s] <- Activator \"%s\"[%s]\n",
    m_flCurrentTime,
    v25,
    v24,
    pInputName,
    szVariantAsString,
    v22,
    v21,
    v19,
    m_pAsString);
  if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 0) != 0 )
    LoggingSystem_Log(LOG_ENTITY_SYSTEM, 0, "%s", szBuffer);
  AddDebugHistoryLine(0, szBuffer);
  if ( CBaseEntity::HasDebugBitsSet(pTarget, 0x10u) )
  {
    v34 = value->m_type;
    HIWORD(maxs.z) = 0;
    switch ( v34 )
    {
      case 3:
        v35 = value->m_uint64;
        *&maxs.x = 0;
        LOWORD(maxs.z) = 3;
        goto LABEL_58;
      case 4:
        v39 = value->m_uint64;
        *&maxs.x = 0;
        LOWORD(maxs.z) = 4;
        goto LABEL_64;
      case 25:
        v41 = value->m_uint64;
        LOWORD(maxs.z) = 25;
        *&maxs.x = 0;
        v42 = (**g_pMemAlloc)(g_pMemAlloc, 8);
        *&maxs.x = v42;
        *v42 = *v41;
        v42[1] = v41[1];
        HIWORD(maxs.z) |= 1u;
        break;
      case 27:
        v39 = value->m_uint64;
        *&maxs.x = 0;
        LOWORD(maxs.z) = 27;
LABEL_64:
        v40 = (**g_pMemAlloc)(g_pMemAlloc, 16);
        *&maxs.x = v40;
        *v40 = *v39;
        v40[1] = v39[1];
        v40[2] = v39[2];
        v40[3] = v39[3];
        HIWORD(maxs.z) |= 1u;
        break;
      case 30:
        v37 = value->m_uint64;
        *&maxs.x = 0;
        LOWORD(maxs.z) = 30;
        if ( v37 != 0 )
        {
          v38 = strlen(v37) + 1;
          *&maxs.x = (**g_pMemAlloc)(g_pMemAlloc, v38);
          memcpy(*&maxs.x, v37, v38);
          HIWORD(maxs.z) |= 1u;
        }
        break;
      case 39:
        v35 = value->m_uint64;
        *&maxs.x = 0;
        LOWORD(maxs.z) = 39;
LABEL_58:
        v36 = (**g_pMemAlloc)(g_pMemAlloc, 12);
        *&maxs.x = v36;
        *v36 = *v35;
        v36[1] = v35[1];
        v36[2] = v35[2];
        HIWORD(maxs.z) |= 1u;
        break;
      default:
        v43 = value->m_uint64;
        LOWORD(maxs.z) = v34;
        *&maxs.x = v43;
        break;
    }
    v56.m_uint64 = &maxs;
    CBaseEntity::DrawInputOverlay(pTarget, pInputName, pCaller, v56);
    if ( (BYTE2(maxs.z) & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&maxs.x);
  }
}


// CSource2EntitySystem::~CSource2EntitySystem  (line 3487, @0x00000000020f55e0, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CSource2EntitySystem::~CSource2EntitySystem(CSource2EntitySystem *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CSource2EntitySystem::~CSource2EntitySystem  (line 3487, @0x00000000020f5600, libserver.so)  // inlines: ~CAutoGameSystem, ~CSource2EntitySystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CSource2EntitySystem::~CSource2EntitySystem(CSource2EntitySystem *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CSource2EntitySystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 3489, @0x00000000020f1530, libserver.so)
void __fastcall CSource2EntitySystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CSource2EntitySystem *const this)
{
  ;
}


// CSource2EntitySystem::DoesGameSystemReallocate  (line 3489, @0x00000000020f1540, libserver.so)
// globals: CSource2EntitySystem::sm_Factory
bool __fastcall CSource2EntitySystem::DoesGameSystemReallocate(const CSource2EntitySystem *const this)
{
  return (*(CSource2EntitySystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CSource2EntitySystem::sm_Factory);
}


// CSource2EntitySystem::SetGameSystemGlobalPtrs  (line 3489, @0x00000000020f1560, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CSource2EntitySystem::sm_Factory
void __fastcall CSource2EntitySystem::SetGameSystemGlobalPtrs(CSource2EntitySystem *const this, void *pValue)
{
  if ( CSource2EntitySystem::sm_Factory != 0 )
    (*(CSource2EntitySystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CSource2EntitySystem::sm_Factory, pValue);
}


// CSource2EntitySystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 3506, @0x00000000020a6a50, libserver.so)
void __cdecl CSource2EntitySystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CSource2EntitySystem::CSource2EntitySystem  (line 3508, @0x00000000020a6a60, libserver.so)
void __fastcall CSource2EntitySystem::CSource2EntitySystem(CSource2EntitySystem *const this)
{
  this->_vptr_IGameSystem = off_3FF6950;  // vptr: CSource2EntitySystem
}


// CSource2EntitySystem::StaticInit  (line 3512, @0x00000000020ef860, libserver.so)  // inlines: Bind, CUtlDelegate, Convert<FastDelegate1<bool, void>, void (FastDelegate1<bool, void>::*)(bool)const, void (detail::GenericClass::*)()>, Convert<FastDelegate2<int, CEntityHandle*, void>, void (FastDelegate2<int, CEntityHandle*, void>::*)(int, CEntityHandle*)const, void (detail::GenericClass::*)()>, CreateEntitySystemOverride<CGameEntitySystem>, FastDelegate1, FastDelegate2, SetSaveRestore, UtlMakeDelegate<bool, void>, UtlMakeDelegate<int, CEntityHandle*, void>, bindmemfunc<FastDelegate1<bool, void>, void (FastDelegate1<bool, void>::*)(bool)const>, bindmemfunc<FastDelegate2<int, CEntityHandle*, void>, void (FastDelegate2<int, CEntityHandle*, void>::*)(int, CEntityHandle*)const>, bindstaticfunc<FastDelegate1<bool, void>, void (FastDelegate1<bool, void>::*)(bool)const>, bindstaticfunc<FastDelegate2<int, CEntityHandle*, void>, void (FastDelegate2<int, CEntityHandle*, void>::*)(int, CEntityHandle*)const>
// calls: AllocEntity2SaveRestore, CSpawnGroupEntityFilterRegistrar::RegisterSpawnGroupEntityFilters, CEntitySystem::EnableAutoDeletionExecution, CEntitySystem::InstallCreationWrapperCallbacks, CEntitySystem::InstallPostSpawnCallback, CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses, operator new, CGameEntitySystem::CGameEntitySystem, CEntitySystem::PostCreateEntitySystem, operator delete, _Unwind_Resume
// callers: CSource2ServerSerializers::Init, CGameSystemReallocatingFactory<CSource2EntitySystem, CSource2EntitySystem>::Init
// strings: "server_entities"
// globals: g_pGameEntitySystem, FastDelegate1<bool,void>::InvokeStaticFunction(bool), EntityCreationDelegate(bool), FastDelegate2<int,CEntityHandle *,void>::InvokeStaticFunction(int,CEntityHandle *), EntityPostSpawnDelegate(int,CEntityHandle *), ServerClass::sm_pServerClassHead, s_Entity2NetworkClasses, s_EntityIONotify
bool __cdecl CSource2EntitySystem::StaticInit()
{
  IEntity2SaveRestore *v1; // rbx
  void (__fastcall *v2)(IEntity2SaveRestore *, __int64); // r13
  __int64 v3; // rax
  CGameEntitySystem *v5; // rbx
  CreationWrapperDelegate_t v6; // [rsp+0h] [rbp-40h]
  PostSpawnDelegate_t v7; // [rsp+0h] [rbp-40h]

  if ( CEntitySystem::s_nInitCount++ <= 0 )
  {
    v5 = operator new(0x1A0C0u);
    CGameEntitySystem::CGameEntitySystem(v5);
    CEntitySystem::PostCreateEntitySystem(
      v5,
      "server_entities",
      EntitySystemType_t::ENTITY_SYSTEM_NO_POST_DATA_UPDATES,
      &s_EntityIONotify,
      NetworkSerializationMode_t::NET_SERIALIZATION_MODE_0,
      0);
  }
  g_pGameEntitySystem = g_pEntitySystem;
  v1 = AllocEntity2SaveRestore();
  v1->Init();
  *(&stru_1A0B8.r_offset + g_pGameEntitySystem) = v1;
  v2 = *(v1->_vptr_IEntity2SaveRestore + 16);
  v3 = (*(g_pGameConfiguration->ISource2ClientConfig::IAppSystem::_vptr_IAppSystem + 23))(g_pGameConfiguration);
  v2(v1, v3);
  CSpawnGroupEntityFilterRegistrar::RegisterSpawnGroupEntityFilters();
  CEntitySystem::EnableAutoDeletionExecution(g_pGameEntitySystem, 1);
  v6.m_Closure.m_pFunction.__delta = 0;
  v6.m_Closure.m_pFunction.__pfn = FastDelegate1<bool,void>::InvokeStaticFunction;
  v6.m_Closure.m_pthis = EntityCreationDelegate;
  CEntitySystem::InstallCreationWrapperCallbacks(g_pGameEntitySystem, v6);
  v7.m_Closure.m_pFunction.__delta = 0;
  v7.m_Closure.m_pFunction.__pfn = FastDelegate2<int,CEntityHandle *,void>::InvokeStaticFunction;
  v7.m_Closure.m_pthis = EntityPostSpawnDelegate;
  CEntitySystem::InstallPostSpawnCallback(g_pGameEntitySystem, v7);
  if ( g_pGameResourceService != 0 )
    (*(*g_pGameResourceService + 272LL))(g_pGameResourceService, g_pGameEntitySystem);
  CEntity2NetworkClasses<ServerClass>::InitEntity2NetworkClasses(
    &s_Entity2NetworkClasses,
    &ServerClass::sm_pServerClassHead,
    g_pEntitySystem->m_EntityList.m_nNetworkableEntityLimit);
  return 1;
}


// CSource2EntitySystem::StaticShutdown  (line 3552, @0x00000000020cda80, libserver.so)  // inlines: GetSaveRestore, RemoveListenerEntity, SetSaveRestore, ShutdownEntity2NetworkClasses, ~CUtlString, ~ServerClass
// calls: CUtlVectorBase<IEntityListener*, CUtlMemory<IEntityListener*, int> >::FindAndRemove, CUtlString::FreeMemoryBlock, operator delete, CEntitySystem::RemoveCreationWrapperCallbacks, CEntitySystem::RemovePostSpawnCallback, CEntitySystem::DestroyEntitySystem
// callers: CGameSystemReallocatingFactory<CSource2EntitySystem, CSource2EntitySystem>::Shutdown
// globals: g_pGameEntitySystem, s_Entity2NetworkClasses
void __cdecl CSource2EntitySystem::StaticShutdown()
{
  __int64 v0; // rbx
  ServerClass **m_ppClassList; // rax
  ServerClass *v2; // rbx
  ServerClass *m_pNext; // r12
  bool v4; // zf
  IEntityListener *src; // [rsp+8h] [rbp-18h] BYREF

  v0 = *(&stru_1A0B8.r_offset + g_pGameEntitySystem);
  *(&stru_1A0B8.r_offset + g_pGameEntitySystem) = 0;
  (*(*v0 + 8LL))(v0);
  (*(*v0 + 16LL))(v0);
  src = &s_Entity2NetworkClasses;
  CUtlVectorBase<IEntityListener *,CUtlMemory<IEntityListener *,int>>::FindAndRemove(
    (&stru_1A0A0 + g_pGameEntitySystem),
    &src);
  m_ppClassList = s_Entity2NetworkClasses.m_ppClassList;
  v2 = *s_Entity2NetworkClasses.m_ppClassList;
  if ( *s_Entity2NetworkClasses.m_ppClassList != 0 )
  {
    m_pNext = v2->m_pNext;
    if ( v2->m_ClassIDString.m_pString == 0 )
      goto LABEL_4;
    while ( 1 )
    {
      CUtlString::FreeMemoryBlock(&v2->m_ClassIDString);
LABEL_4:
      operator delete(v2);
      if ( m_pNext == 0 )
        break;
      while ( 1 )
      {
        v2 = m_pNext;
        v4 = m_pNext->m_ClassIDString.m_pString == 0;
        m_pNext = m_pNext->m_pNext;
        if ( !v4 )
          break;
        operator delete(v2);
        if ( m_pNext == 0 )
          goto LABEL_7;
      }
    }
LABEL_7:
    m_ppClassList = s_Entity2NetworkClasses.m_ppClassList;
  }
  *m_ppClassList = 0;
  (*(*g_pGameResourceService + 272LL))(g_pGameResourceService, 0);
  CEntitySystem::RemoveCreationWrapperCallbacks(g_pGameEntitySystem);
  CEntitySystem::RemovePostSpawnCallback(g_pGameEntitySystem);
  CEntitySystem::DestroyEntitySystem();
}


// CSource2ServerSerializers::~CSource2ServerSerializers  (line 3571, @0x00000000020fbb40, libserver.so)  // inlines: Purge, RemoveAll, ~CGameAppSystem, ~CTier2AppSystem, ~CTier3AppSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<ServerClass*, int>::Purge, CUtlMemory<ResourceManifestDesc_t*, int>::Purge
void __fastcall CSource2ServerSerializers::~CSource2ServerSerializers(CSource2ServerSerializers *const this)
{
  bool v2; // zf
  CUtlVectorBase<ServerClass*,CUtlMemory<ServerClass*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Classes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IAppSystem = &off_3FF6E10;
  this->m_Classes.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Classes.m_Memory;
    CUtlMemory<ServerClass *,int>::Purge(&this->m_Classes.m_Memory);
    if ( (this->m_Classes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ServerClass *,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_manualManifests.m_Size = 0;
  this->_vptr_IAppSystem = off_3FF6C90;  // vptr: CTier2AppSystem<ISource2ServerSerializers,0>
  if ( v2 )
  {
    CUtlMemory<ResourceManifestDesc_t *,int>::Purge(&this->m_manualManifests.m_Memory);
    if ( (this->m_manualManifests.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ResourceManifestDesc_t *,int>::Purge(&this->m_manualManifests.m_Memory);
  }
}


// CSource2ServerSerializers::GetDependencies  (line 3579, @0x00000000020f8a10, libserver.so)  // inlines: AppSystemInfo_t
// calls: __cxa_guard_acquire, __cxa_guard_release
// strings: "filesystem_stdio", "VFileSystem017", "schemasystem", "SchemaSystem_001", "vphysics2", "VPhysics2_Interface_001"
// globals: `guard variable for'CSource2ServerSerializers::GetDependencies(void)::s_pDependencies, CSource2ServerSerializers::GetDependencies(void)::s_pDependencies
const AppSystemInfo_t *__fastcall CSource2ServerSerializers::GetDependencies(CSource2ServerSerializers *const this)
{
  if ( `guard variable for'CSource2ServerSerializers::GetDependencies(void)::s_pDependencies != 0 )
    return CSource2ServerSerializers::GetDependencies(void)::s_pDependencies;
  if ( __cxa_guard_acquire(&`guard variable for'CSource2ServerSerializers::GetDependencies(void)::s_pDependencies) != 0 )
  {
    qword_4AFAD50 = 0;
    CSource2ServerSerializers::GetDependencies(void)::s_pDependencies[0].m_pModuleName = "filesystem_stdio";
    qword_4AFAD28 = "VFileSystem017";
    qword_4AFAD30 = "schemasystem";
    qword_4AFAD38 = "SchemaSystem_001";
    qword_4AFAD40 = "vphysics2";
    qword_4AFAD58 = 0;
    qword_4AFAD48 = "VPhysics2_Interface_001";
    __cxa_guard_release(&`guard variable for'CSource2ServerSerializers::GetDependencies(void)::s_pDependencies);
  }
  return CSource2ServerSerializers::GetDependencies(void)::s_pDependencies;
}


// CSource2ServerSerializers::Connect  (line 3605, @0x00000000020fbc80, libserver.so)  // inlines: Connect
// calls: ConnectTier1Libraries, ConnectTier2Libraries, ConnectGameInterfaces, CNetworkInitFuncRegistry::ExecuteNetworkInitFuncs, CNetworkVectorChangeCallbackInitFuncRegistry::ExecuteNetworkInitFuncs, CEntity2PostUnserializeHandlerRegistry::ExecuteHandlerInitFuncs
// strings: "FlattenedSerializersVersion001", "NetworkMessagesVersion001", "VFileSystem017"
bool __fastcall CSource2ServerSerializers::Connect(
        CSource2ServerSerializers *const this,
        CreateInterfaceFn appSystemFactory)
{
  CreateInterfaceFn v5; // [rsp+8h] [rbp-28h] BYREF
  CreateInterfaceFn v6; // [rsp+10h] [rbp-20h] BYREF
  CreateInterfaceFn pFactoryList; // [rsp+18h] [rbp-18h] BYREF

  v5 = appSystemFactory;
  v6 = appSystemFactory;
  pFactoryList = appSystemFactory;
  ConnectTier1Libraries(&pFactoryList, 1);
  ConnectTier2Libraries(&v6, 1);
  ++this->m_nAppSysTier2LibraryConnects;
  ConnectGameInterfaces(&v5, 1, GameInterfaceConnectionMode_t::GAME_INTERFACE_CONNECT_SERVER_ONLY);
  g_pFlattenedSerializers = appSystemFactory("FlattenedSerializersVersion001", 0);
  g_pNetworkMessages = appSystemFactory("NetworkMessagesVersion001", 0);
  g_pFullFileSystem = appSystemFactory("VFileSystem017", 0);
  (*(*g_pNetworkMessages + 216LL))(g_pNetworkMessages, 1);
  CNetworkInitFuncRegistry::ExecuteNetworkInitFuncs(NetworkSerializationMode_t::NET_SERIALIZATION_MODE_0);
  CNetworkVectorChangeCallbackInitFuncRegistry::ExecuteNetworkInitFuncs(NetworkSerializationMode_t::NET_SERIALIZATION_MODE_0);
  CEntity2PostUnserializeHandlerRegistry::ExecuteHandlerInitFuncs();
  return 1;
}


// CSource2ServerSerializers::Init  (line 3625, @0x0000000002125860, libserver.so)  // inlines: AddToTail, CopyConstruct<ServerClass*>, Element, GrowMemory, Init, Initialize, operator[]
// calls: CSource2EntitySystem::StaticInit, CUtlMemory<ServerClass*, int>::Grow, RegisterConfigValues, ConVar_Register
// globals: ServerClass::sm_pServerClassHead
InitReturnVal_t __fastcall CSource2ServerSerializers::Init(CSource2ServerSerializers *const this)
{
  InitReturnVal_t v1; // r12d
  ServerClass *i; // r12
  ServerClass **v4; // rax
  __int64 m_Size; // r13
  int v6; // eax

  v1 = InitReturnVal_t::INIT_FAILED;
  if ( CSource2EntitySystem::StaticInit() )
  {
    for ( i = ServerClass::sm_pServerClassHead; i != 0; i = i->m_pNext )
    {
      m_Size = this->m_Classes.m_Size;
      v6 = this->m_Classes.m_Size;
      if ( m_Size == this->m_Classes.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<ServerClass *,int>::Grow(&this->m_Classes.m_Memory, 1);
        v6 = this->m_Classes.m_Size;
      }
      this->m_Classes.m_Size = v6 + 1;
      v4 = &this->m_Classes.m_Memory.m_pMemory[m_Size];
      if ( v4 != 0 )
        *v4 = i;
    }
    if ( g_pConfigurationSystem != 0 )
      RegisterConfigValues();
    v1 = InitReturnVal_t::INIT_OK;
    if ( g_pCVar != 0 )
      ConVar_Register(0, 0);
  }
  return v1;
}


// CSource2ServerSerializers::GetSerializerCount  (line 3633, @0x00000000020f1590, libserver.so)
int __fastcall CSource2ServerSerializers::GetSerializerCount(const CSource2ServerSerializers *const this)
{
  return this->m_Classes.m_Size;
}


// CSource2ServerSerializers::GetSerializer  (line 3638, @0x00000000020fb380, libserver.so)  // inlines: V_strncpy<int>, operator[]
// calls: _V_strncpy
void __fastcall CSource2ServerSerializers::GetSerializer(
        const CSource2ServerSerializers *const this,
        int i,
        char *pName,
        int nameBufLen,
        FlattenedSerializerHandle_t *pSerializerHandle)
{
  ServerClass *v6; // rbx

  v6 = this->m_Classes.m_Memory.m_pMemory[i];
  _V_strncpy(pName, v6->m_pNetworkName, nameBufLen);
  *pSerializerHandle = v6->m_hSerializer;
}


// __CreateCSource2ServerSerializersISource2ServerSerializers_interface  (line 3650, @0x000000000209bea0, libserver.so)
// globals: g_Source2ServerSerializers
void *__cdecl __CreateCSource2ServerSerializersISource2ServerSerializers_interface()
{
  return &g_Source2ServerSerializers;
}


// EntityListCompletion  (line 3653, @0x00000000020ed660, libserver.so)  // inlines: AddToTail, CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlString>, Element, First, FirstInorder, GrowMemory, LeftChild, Next, NextInorder, Purge, RemoveAll, ResetDbgInfo, SetCompareType, SetLessFunc, V_strlen, _V_strstr, operator[], strstr, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: strstr, strlen, CUtlDict<bool, int>::Insert, CSpawnGroupMgrGameSystem::GetSpawnGroups, CSpawnGroupMgrGameSystem::GetSpawnGroupName, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CUtlRBTree<CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NextInorder, V_stristr_fast(char const*,char const*), CFmtStrN<256, false>::CFmtStrN, CUtlMemory<CUtlString, int>::Grow (19 total)
// globals: FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall EntityListCompletion(
        const char *partial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  const char *v4; // rdi
  const char *v5; // r15
  const char *v6; // rbx
  __int64 v7; // r12
  int i; // ebx
  const char *SpawnGroupName; // rax
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v12; // r12
  int m_Left; // ecx
  CUtlString *v14; // r12
  const char *v15; // rax
  __int64 v16; // r12
  __int64 m_Size; // r12
  int v18; // eax
  CUtlString v19[2]; // [rsp+30h] [rbp-1B0h] BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > groups; // [rsp+40h] [rbp-1A0h] BYREF
  CUtlDict<bool,int> sorted; // [rsp+60h] [rbp-180h] BYREF
  CFmtStrN<256,false> v22; // [rsp+90h] [rbp-150h] BYREF
  unsigned __int64 v23; // [rsp+1A8h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  if ( strstr(partial, "ents") != 0 && partial != 0 )
  {
    v4 = partial;
    v5 = 0;
    v6 = partial + 5;
    if ( strlen(v4) > 5 )
      v5 = v6;
  }
  else
  {
    v5 = 0;
  }
  LOBYTE(groups.m_Size) = 1;
  sorted.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  sorted.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  sorted.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  sorted.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  sorted.m_Elements.m_Tree.m_Root = -1;
  sorted.m_Elements.m_Tree.m_NumElements = 0;
  sorted.m_Elements.m_Tree.m_FirstFree = -1;
  sorted.m_Elements.m_Tree.m_LastAlloc.index = -1;
  sorted.m_Elements.m_Tree.m_pElements = 0;
  CUtlDict<bool,int>::Insert(&sorted, "all", &groups);
  groups.m_Size = 0;
  groups.m_Memory.m_pMemory = 0;
  groups.m_Memory.m_nAllocationCount = 0;
  groups.m_Memory.m_nGrowSize = 0;
  CSpawnGroupMgrGameSystem::GetSpawnGroups(g_pSpawnGroupMgr, &groups);
  v7 = 0;
  for ( i = 0; groups.m_Size > i; ++v7 )
  {
    SpawnGroupName = CSpawnGroupMgrGameSystem::GetSpawnGroupName(g_pSpawnGroupMgr, groups.m_Memory.m_pMemory[v7]);
    LOBYTE(v19[0].m_pString) = 1;
    CUtlDict<bool,int>::Insert(&sorted, SpawnGroupName, v19);
    ++i;
  }
  m_Root = sorted.m_Elements.m_Tree.m_Root;
  if ( sorted.m_Elements.m_Tree.m_Root != -1 )
  {
    m_pMemory = sorted.m_Elements.m_Tree.m_Elements.m_pMemory;
    v12 = sorted.m_Elements.m_Tree.m_Root;
    m_Left = sorted.m_Elements.m_Tree.m_Elements.m_pMemory[sorted.m_Elements.m_Tree.m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v12 = m_Left;
        if ( sorted.m_Elements.m_Tree.m_Elements.m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = sorted.m_Elements.m_Tree.m_Elements.m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      v16 = v12;
      if ( v5 != 0 )
      {
        if ( V_stristr_fast(m_pMemory[v16].m_Data.key, v5) == 0 )
          goto LABEL_17;
        m_pMemory = sorted.m_Elements.m_Tree.m_Elements.m_pMemory;
      }
      CFmtStrN<256,false>::CFmtStrN(&v22, "%s %s", "ents", m_pMemory[v16].m_Data.key);
      v19[0].m_pString = 0;
      CUtlString::Set(v19, v22.m_szBuf);
      m_Size = commands->m_Size;
      v18 = commands->m_Size;
      if ( m_Size == commands->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
        v18 = commands->m_Size;
      }
      commands->m_Size = v18 + 1;
      v14 = &commands->m_Memory.m_pMemory[m_Size];
      if ( v14 != 0 )
      {
        v14->m_pString = 0;
        v15 = CUtlString::Get(v19);
        CUtlString::Set(v14, v15);
      }
      if ( v19[0].m_pString != 0 )
        CUtlString::FreeMemoryBlock(v19);
LABEL_17:
      m_Root = CUtlRBTree<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NextInorder(
                 &sorted.m_Elements.m_Tree,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = sorted.m_Elements.m_Tree.m_Elements.m_pMemory;
      v12 = m_Root;
    }
  }
  groups.m_Size = 0;
  if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
    if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
  }
  CUtlDict<bool,int>::Purge(&sorted);
  CUtlRBTree<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&sorted.m_Elements.m_Tree);
  if ( (sorted.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,bool,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&sorted.m_Elements.m_Tree.m_Elements);
}


// EntityIndexLessFunc  (line 3682, @0x000000000209beb0, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init
bool __fastcall EntityIndexLessFunc(CBaseEntity *const *const lhs, CBaseEntity *const *const rhs)
{
  CEntityIdentity *m_pEntity; // rax
  unsigned __int16 v3; // cx
  int v4; // edi
  CEntityIdentity *v5; // rax
  unsigned __int16 v6; // cx

  m_pEntity = (*lhs)->m_pEntity;
  if ( m_pEntity == 0 )
    goto LABEL_10;
  v3 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  if ( ((((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF) == 0xFFFFFFFF )
  {
LABEL_10:
    v4 = 0x7FFF;
    v5 = (*rhs)->m_pEntity;
    if ( v5 == 0 )
      return v4 < 0x7FFF;
  }
  else
  {
    v4 = v3;
    v5 = (*rhs)->m_pEntity;
    if ( v5 == 0 )
      return v4 < 0x7FFF;
  }
  v6 = 0x7FFF;
  if ( v5->m_EHandle.m_Index != -1 )
    v6 = v5->m_EHandle.m_Index & 0x7FFF;
  if ( ((((v5->m_EHandle.m_Index >> 15) - (v5->m_flags & 1)) << 15) | v6 & 0x7FFF) != 0xFFFFFFFF )
    return v4 < v6;
  return v4 < 0x7FFF;
}


// ents  (line 3688, @0x00000000020e05e0, libserver.so)  // inlines: AddToHead, AddToTail, Arg, CEntityHandle, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, CopyConstruct<unsigned int>, Count, Element, FindInsertionPosition, First, FirstEnt, FirstInorder, GetClassNameAsCStr, GetEHandle, GetEntityNameAsCStr, GetEntryIndex, GetSerialNumber, GetSpawnGroupHandle, GrowMemory, Init, Insert, InsertAt, InsertBefore, IsIdxValid, IsValidIndex, LeftChild, Next, Purge, RemoveAll, ResetDbgInfo, RightChild, SetLeftChild, SetRightChild, String, operator==, operator[], ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CSpawnGroupMgrGameSystem::GetSpawnGroups, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector, CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ShiftElementsRight, CGameEntitySystem::NextEnt, CUtlRBTree<CBaseEntity*, short unsigned int, bool (*)(CBaseEntity* const&, CBaseEntity* const&), CUtlMemory<UtlRBTreeNode_t<CBaseEntity*, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CBaseEntity*, short unsigned int, bool (*)(CBaseEntity* const&, CBaseEntity* const&), CUtlMemory<UtlRBTreeNode_t<CBaseEntity*, short unsigned int>, short unsigned int> >::LinkToParent, CSpawnGroupMgrGameSystem::GetSpawnGroupName, Msg, CEntitySystem::GetActiveSpawnGroupHandle, CBaseEntity::GetPhysicalSpawnGroupHandle, CUtlRBTree<CBaseEntity*, short unsigned int, bool (*)(CBaseEntity* const&, CBaseEntity* const&), CUtlMemory<UtlRBTreeNode_t<CBaseEntity*, short unsigned int>, short unsigned int> >::NextInorder, CUtlMemory<UtlRBTreeNode_t<CBaseEntity*, short unsigned int>, short unsigned int>::Purge (19 total)
// strings: "-------------------------------\n", " ACTIVE GROUP", "%d ents in group %d/%s%s\n", "  %d == %s (currently in %d) %s\n", "-1"
// globals: g_pGameEntitySystem, EntityIndexLessFunc(CBaseEntity * const&,CBaseEntity * const&)
void __fastcall ents(const CCommandContext *const ctx, const CCommand *const args)
{
  int m_Size; // eax
  SpawnGroupHandle_t v4; // r14d
  CBaseEntity *j; // rax
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // eax
  unsigned __int16 m_Root; // r12
  unsigned __int16 m_Left; // ax
  bool v10; // bl
  unsigned __int16 v11; // ax
  const char *SpawnGroupName; // rbx
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  const char *v14; // r8
  unsigned __int16 v15; // bx
  UtlRBTreeNode_t<CBaseEntity*,short unsigned int> *m_pMemory; // rax
  __int64 v17; // rdx
  unsigned __int16 v18; // si
  const CBaseEntity *m_Data; // r12
  SpawnGroupHandle_t PhysicalSpawnGroupHandle; // eax
  CEntityIdentity *v21; // rdi
  const char *m_pAsString; // r8
  const char *v23; // rdx
  int v24; // r9d
  int v25; // esi
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v28; // rax
  UtlRBTreeNode_t<CBaseEntity*,short unsigned int> *v29; // rdi
  unsigned __int16 v30; // si
  __int64 v31; // rcx
  __int64 v32; // rax
  UtlRBTreeNode_t<CBaseEntity*,short unsigned int> *v33; // rdi
  const char *v34; // rbx
  SpawnGroupHandle_t SpawnGroupByName; // ebx
  __int64 v36; // [rsp+10h] [rbp-A0h]
  int i; // [rsp+1Ch] [rbp-94h]
  CBaseEntity *pEntity; // [rsp+20h] [rbp-90h] BYREF
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > groups; // [rsp+30h] [rbp-80h] BYREF
  CUtlRBTree<CBaseEntity*,short unsigned int,bool (*)(CBaseEntity* const&,CBaseEntity* const&),CUtlMemory<UtlRBTreeNode_t<CBaseEntity*,short unsigned int>,short unsigned int> > sorted; // [rsp+50h] [rbp-60h] BYREF

  groups.m_Size = 0;
  groups.m_Memory.m_pMemory = 0;
  groups.m_Memory.m_nAllocationCount = 0;
  groups.m_Memory.m_nGrowSize = 0;
  CSpawnGroupMgrGameSystem::GetSpawnGroups(g_pSpawnGroupMgr, &groups);
  CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::GrowVector(&groups, 1);
  CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int>>::ShiftElementsRight(&groups, 0, 1);
  if ( groups.m_Memory.m_pMemory != 0 )
    *groups.m_Memory.m_pMemory = 0;
  if ( args->m_nArgc != 2 )
    goto LABEL_4;
  v34 = args->m_ppArgv[1];
  if ( V_stricmp_fast(v34, "all") == 0 )
    goto LABEL_4;
  SpawnGroupByName = CSpawnGroupMgrGameSystem::FindSpawnGroupByName(g_pSpawnGroupMgr, v34);
  if ( SpawnGroupByName == 0 )
    goto LABEL_4;
  groups.m_Size = 0;
  m_Size = 1;
  if ( groups.m_Memory.m_nAllocationCount == 0 )
  {
    CUtlMemory<unsigned int,int>::Grow(&groups.m_Memory, 1);
    m_Size = groups.m_Size + 1;
  }
  groups.m_Size = m_Size;
  if ( groups.m_Memory.m_pMemory != 0 )
  {
    *groups.m_Memory.m_pMemory = SpawnGroupByName;
LABEL_4:
    m_Size = groups.m_Size;
  }
  if ( m_Size > 0 )
  {
    v36 = 0;
    for ( i = 0; groups.m_Size > i; ++i )
    {
      v4 = groups.m_Memory.m_pMemory[v36];
      sorted.m_Elements.m_pMemory = 0;
      sorted.m_LessFunc = EntityIndexLessFunc;
      sorted.m_Root = -1;
      sorted.m_NumElements = 0;
      sorted.m_FirstFree = -1;
      sorted.m_Elements.m_nAllocationCount = 0;
      sorted.m_Elements.m_nGrowSize = 0;
      sorted.m_LastAlloc.index = -1;
      sorted.m_pElements = 0;
      for ( j = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
            ;
            j = CGameEntitySystem::NextEnt(g_pGameEntitySystem, pEntity) )
      {
        pEntity = j;
        if ( j == 0 )
          break;
        m_pEntity = j->m_pEntity;
        if ( m_pEntity != 0 )
          m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
        else
          m_hSpawnGroup = 0;
        if ( v4 == m_hSpawnGroup )
        {
          m_Root = sorted.m_Root;
          if ( sorted.m_Root != 0xFFFF )
          {
            while ( 1 )
            {
              if ( sorted.m_LessFunc(&pEntity, &sorted.m_Elements.m_pMemory[m_Root].m_Data) != 0 )
              {
                m_Left = sorted.m_Elements.m_pMemory[m_Root].m_Left;
                v10 = 1;
                if ( m_Left == 0xFFFF )
                  goto LABEL_19;
              }
              else
              {
                m_Left = sorted.m_Elements.m_pMemory[m_Root].m_Right;
                v10 = 0;
                if ( m_Left == 0xFFFF )
                  goto LABEL_19;
              }
              m_Root = m_Left;
            }
          }
          v10 = 0;
LABEL_19:
          v11 = CUtlRBTree<CBaseEntity *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&),CUtlMemory<UtlRBTreeNode_t<CBaseEntity *,unsigned short>,unsigned short>>::NewNode(
                  &sorted,
                  &pEntity);
          CUtlRBTree<CBaseEntity *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&),CUtlMemory<UtlRBTreeNode_t<CBaseEntity *,unsigned short>,unsigned short>>::LinkToParent(
            &sorted,
            v11,
            m_Root,
            v10);
          ++sorted.m_NumElements;
        }
      }
      if ( sorted.m_NumElements != 0 )
      {
        if ( v4 != 0 )
          SpawnGroupName = CSpawnGroupMgrGameSystem::GetSpawnGroupName(g_pSpawnGroupMgr, v4);
        else
          SpawnGroupName = "-1";
        Msg("-------------------------------\n");
        ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
        v14 = " ACTIVE GROUP";
        if ( v4 != ActiveSpawnGroupHandle )
          v14 = "";
        Msg("%d ents in group %d/%s%s\n", sorted.m_NumElements, v4, SpawnGroupName, v14);
        v15 = sorted.m_Root;
        if ( sorted.m_Root != 0xFFFF )
        {
          m_pMemory = sorted.m_Elements.m_pMemory;
          v17 = sorted.m_Root;
          v18 = sorted.m_Elements.m_pMemory[sorted.m_Root].m_Left;
          if ( v18 != 0xFFFF )
          {
            while ( 1 )
            {
              v17 = v18;
              if ( sorted.m_Elements.m_pMemory[v18].m_Left == 0xFFFF )
                break;
              v18 = sorted.m_Elements.m_pMemory[v18].m_Left;
            }
            v15 = v18;
          }
          while ( 1 )
          {
            m_Data = m_pMemory[v17].m_Data;
            PhysicalSpawnGroupHandle = CBaseEntity::GetPhysicalSpawnGroupHandle(m_Data);
            v21 = m_Data->m_pEntity;
            m_pAsString = "";
            if ( v21->m_name.u.m_Id != 0 )
              m_pAsString = v21->m_name.u.m_pAsString;
            v23 = "";
            if ( v21->m_designerName.u.m_Id != 0 )
              v23 = v21->m_designerName.u.m_pAsString;
            v24 = (v21->m_EHandle.m_Index >> 15) - (v21->m_flags & 1);
            LOWORD(v25) = 0x7FFF;
            if ( v21->m_EHandle.m_Index != -1 )
              LOWORD(v25) = v21->m_EHandle.m_Index & 0x7FFF;
            v25 = v25;
            LOWORD(pEntity) = v25 | pEntity & 0x8000;
            LODWORD(pEntity) = (v24 << 15) | pEntity & 0x7FFF;
            if ( pEntity == -1 )
              v25 = 0x7FFF;
            Msg("  %d == %s (currently in %d) %s\n", v25, v23, PhysicalSpawnGroupHandle, m_pAsString);
            v15 = CUtlRBTree<CBaseEntity *,unsigned short,bool (*)(CBaseEntity * const&,CBaseEntity * const&),CUtlMemory<UtlRBTreeNode_t<CBaseEntity *,unsigned short>,unsigned short>>::NextInorder(
                    &sorted,
                    v15);
            if ( v15 == 0xFFFF )
              break;
            m_pMemory = sorted.m_Elements.m_pMemory;
            v17 = v15;
          }
        }
        index = sorted.m_LastAlloc.index;
        if ( sorted.m_LastAlloc.index != 0xFFFF )
        {
          m_nAllocationCount = sorted.m_Elements.m_nAllocationCount;
          v28 = 0;
          if ( sorted.m_Elements.m_nAllocationCount > 0 )
          {
            do
            {
              if ( v28 < m_nAllocationCount && v28 <= index )
              {
                v29 = &sorted.m_Elements.m_pMemory[v28];
                if ( v28 != v29->m_Left )
                {
                  v29->m_Right = sorted.m_FirstFree;
                  sorted.m_Elements.m_pMemory[v28].m_Left = v28;
                  index = sorted.m_LastAlloc.index;
                  sorted.m_FirstFree = v28;
                }
              }
              if ( v28 == index )
                break;
              m_nAllocationCount = sorted.m_Elements.m_nAllocationCount;
              if ( (v28 + 1) >= sorted.m_Elements.m_nAllocationCount )
                break;
              ++v28;
            }
            while ( v28 != 0xFFFF );
          }
          sorted.m_Root = -1;
          sorted.m_NumElements = 0;
        }
        sorted.m_FirstFree = -1;
        if ( (sorted.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
          goto LABEL_53;
        CUtlMemory<UtlRBTreeNode_t<CBaseEntity *,unsigned short>,unsigned short>::Purge(&sorted.m_Elements);
        sorted.m_LastAlloc.index = -1;
        if ( (sorted.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
          goto LABEL_53;
      }
      else
      {
        v30 = sorted.m_LastAlloc.index;
        if ( sorted.m_LastAlloc.index != 0xFFFF )
        {
          v31 = sorted.m_Elements.m_nAllocationCount;
          v32 = 0;
          if ( sorted.m_Elements.m_nAllocationCount > 0 )
          {
            do
            {
              if ( v32 < v31 && v32 <= v30 )
              {
                v33 = &sorted.m_Elements.m_pMemory[v32];
                if ( v32 != v33->m_Left )
                {
                  v33->m_Right = sorted.m_FirstFree;
                  sorted.m_Elements.m_pMemory[v32].m_Left = v32;
                  v30 = sorted.m_LastAlloc.index;
                  sorted.m_FirstFree = v32;
                }
              }
              if ( v30 == v32 )
                break;
              v31 = sorted.m_Elements.m_nAllocationCount;
              if ( (v32 + 1) >= sorted.m_Elements.m_nAllocationCount )
                break;
              ++v32;
            }
            while ( v32 != 0xFFFF );
          }
          sorted.m_Root = -1;
          sorted.m_NumElements = 0;
        }
        sorted.m_FirstFree = -1;
        if ( (sorted.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
          goto LABEL_53;
        CUtlMemory<UtlRBTreeNode_t<CBaseEntity *,unsigned short>,unsigned short>::Purge(&sorted.m_Elements);
        sorted.m_LastAlloc.index = -1;
        if ( (sorted.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
          goto LABEL_53;
      }
      CUtlMemory<UtlRBTreeNode_t<CBaseEntity *,unsigned short>,unsigned short>::Purge(&sorted.m_Elements);
LABEL_53:
      ++v36;
    }
  }
  groups.m_Size = 0;
  if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
    if ( (groups.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&groups.m_Memory);
  }
}


