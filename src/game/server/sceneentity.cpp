// Reconstructed from DWARF by pahole; not original source.

// src/game/server/sceneentity.cpp:157
class CChoreoStringPool : public IChoreoStringPool {
public:

	CChoreoStringPool(CChoreoStringPool &);
	CChoreoStringPool(const CChoreoStringPool &);
	CChoreoStringPool();
	virtual int FindOrAddString(const char *);
	virtual bool GetString(int, char *, int);

	// vtable[0] FindOrAddString
	// vtable[1] GetString
	// sizeof = 8
};

// src/game/server/sceneentity.cpp:208
class CSceneEntityAlias_logic_choreographed_scene : public CSceneEntity {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CSceneEntityAlias_logic_choreographed_scene(CSceneEntityAlias_logic_choreographed_scene &);
	CSceneEntityAlias_logic_choreographed_scene(CSceneEntityAlias_logic_choreographed_scene &);
	CSceneEntityAlias_logic_choreographed_scene();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CSceneEntityAlias_logic_choreographed_scene();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1592
};

// src/game/server/sceneentity.cpp:210
class C_CSceneEntity_MapInstall {
	C_CSceneEntity_MapInstall();

	// sizeof = 1
};

// src/game/server/sceneentity.cpp:3436
class CSceneFindMarkFilter : public IEntityFindFilter {
public:

private:

	EHANDLE m_hActor;  // +0x8
	EHANDLE m_hEntityFound;  // +0xc
	CSceneFindMarkFilter(CSceneFindMarkFilter &);
	CSceneFindMarkFilter(const CSceneFindMarkFilter &);
	CSceneFindMarkFilter();
	void SetActor(CBaseEntity *);
	virtual bool ShouldFindEntity(CEntityInstance *);
	CBaseEntity * GetFilterResult();

	// vtable[0] ShouldFindEntity
	// sizeof = 16
};

// src/game/server/sceneentity.cpp:4340
class CInstancedSceneEntity : public CSceneEntity {
public:

private:

	static datamap_t m_DataMap;

	EHANDLE m_hOwner;  // +0x634
	bool m_bHadOwner;  // +0x638

	float m_flPostSpeakDelay;  // +0x63c
	float m_flPreDelay;  // +0x640
	char m_szInstanceFilename[260];  // +0x644
	bool m_bIsBackground;  // +0x748
	typedef CSceneEntity BaseClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CInstancedSceneEntity(CInstancedSceneEntity &);
	CInstancedSceneEntity(CInstancedSceneEntity &);
	CInstancedSceneEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void StartPlayback();
	virtual void DoThink(float);
	virtual CBaseFlex * FindNamedActor(const char *);
	virtual CBaseEntity * FindNamedEntity(const char *);
	virtual float GetPostSpeakDelay();
	virtual void SetPostSpeakDelay(float);
	virtual float GetPreDelay();
	virtual void SetPreDelay(float);
	virtual void OnLoaded();
	virtual void DispatchStartMoveTo(CChoreoScene *, CBaseFlex *, CBaseEntity *, CChoreoEvent *);
	virtual void DispatchEndMoveTo(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchStartFace(CChoreoScene *, CBaseFlex *, CBaseEntity *, CChoreoEvent *);
	virtual void DispatchEndFace(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchStartSequence(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchEndSequence(CChoreoScene *, CBaseFlex *, CChoreoEvent *);
	virtual void DispatchPauseScene(CChoreoScene *, const char *);
	virtual void OnRestore();
	virtual float EstimateLength();
	bool PassThrough(CBaseFlex *);
	virtual ~CInstancedSceneEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[219] StartPlayback
	// vtable[213] DoThink
	// vtable[255] FindNamedActor
	// vtable[260] FindNamedEntity
	// vtable[252] GetPostSpeakDelay
	// vtable[261] SetPostSpeakDelay
	// vtable[262] GetPreDelay
	// vtable[263] SetPreDelay
	// vtable[211] OnLoaded
	// vtable[233] DispatchStartMoveTo
	// vtable[234] DispatchEndMoveTo
	// vtable[237] DispatchStartFace
	// vtable[238] DispatchEndFace
	// vtable[239] DispatchStartSequence
	// vtable[240] DispatchEndSequence
	// vtable[249] DispatchPauseScene
	// vtable[18] OnRestore
	// vtable[251] EstimateLength
	// sizeof = 1872
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// LocalScene_Printf  (line 105, @0x000000000238d220, libserver.so)  // inlines: curtime
// calls: V_vsnprintf, Scene_Printf, UTIL_VarArgs, AddDebugHistoryLine, __stack_chk_fail
// callers: CSceneEntity::DispatchStartInterrupt, CSceneEntity::CancelIfSceneInvolvesActor, CSceneEntity::InputCancelPlayback, CSceneEntity::InputScriptPlayerDeath, CSceneEntity::InputCancelAtNextInterrupt, CSceneEntity::ClearSceneEvents, StopScriptedScene, CSceneEntity::PauseThink, CSceneEntity::EndEvent, CSceneManager::RemoveActorFromScenes, CSceneEntity::OnSceneFinished, CSceneManager::PauseActorsScenes (16 total)
// strings: "(%0.2f) %s"
void LocalScene_Printf(const char *pFormat, ...)
{
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v2; // rbx
  char *v3; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  va_list marker; // [rsp+8h] [rbp-20E8h] BYREF
  char msg[8200]; // [rsp+20h] [rbp-20D0h] BYREF
  unsigned __int64 v7; // [rsp+2028h] [rbp-C8h]

  va_start(marker, pFormat);
  v7 = __readfsqword(0x28u);
  V_vsnprintf(msg, 0x2000, pFormat, marker);
  Scene_Printf("%s", msg);
  m_flCurrentTime = 0.0;
  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v2->m_flCurrentTime;
  }
  v3 = UTIL_VarArgs("(%0.2f) %s", m_flCurrentTime, msg);
  AddDebugHistoryLine(2, v3);
}


// CopySceneFileIntoMemory  (line 125, @0x00000000023887e0, libserver.so)
// calls: operator new [], operator delete []
// callers: CSceneEntity::LoadScene
bool __fastcall CopySceneFileIntoMemory(const char *pFilename, uint8 **ppOutBuffer, int *pOutSize)
{
  int v6; // eax
  unsigned int v7; // ebx
  bool result; // al
  uint8 *pBuffer; // [rsp+8h] [rbp-38h]

  *ppOutBuffer = 0;
  *pOutSize = 0;
  v6 = (*(*scenefilecache + 88LL))(scenefilecache, pFilename);
  v7 = v6;
  if ( v6 > 0 )
  {
    pBuffer = operator new[](v6);
    result = (*(*scenefilecache + 96LL))(scenefilecache, pFilename, pBuffer, v7);
    if ( result )
    {
      *ppOutBuffer = pBuffer;
      *pOutSize = v7;
      return result;
    }
    if ( pBuffer != 0 )
    {
      operator delete[](pBuffer);
      return 0;
    }
  }
  return 0;
}


// FreeSceneFileMemory  (line 149, @0x00000000023888a0, libserver.so)
// calls: operator delete []
void __fastcall FreeSceneFileMemory(uint8 *buffer)
{
  if ( buffer != 0 )
    operator delete[](buffer);
}


// CChoreoStringPool::FindOrAddString  (line 160, @0x00000000023a8de0, libserver.so)
int __fastcall CChoreoStringPool::FindOrAddString(CChoreoStringPool *const this, const char *pString)
{
  return -1;
}


// CChoreoStringPool::GetString  (line 167, @0x00000000023aa5f0, libserver.so)  // inlines: V_strncpy<int>
// calls: _V_strncpy
bool __fastcall CChoreoStringPool::GetString(CChoreoStringPool *const this, int stringId, char *buff, int buffSize)
{
  __int64 v6; // rax

  v6 = (*(*scenefilecache + 120LL))(scenefilecache, stringId);
  if ( v6 != 0 )
  {
    _V_strncpy(buff, v6, buffSize);
    return 1;
  }
  else
  {
    _V_strncpy(buff, "", buffSize);
    return 0;
  }
}


// GetSceneManager  (line 186, @0x00000000023888c0, libserver.so)
// globals: g_pSceneManager
CSceneManager *__cdecl GetSceneManager()
{
  return g_pSceneManager;
}


// SceneManager_ClientActive  (line 195, @0x000000000239abf0, libserver.so)  // inlines: GetSceneManager
// calls: CSceneManager::OnClientActive
// callers: CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink, CSource2GameClients::ClientActive
// globals: g_pSceneManager
void __fastcall SceneManager_ClientActive(CBasePlayer *player)
{
  if ( g_pSceneManager != 0 )
    CSceneManager::OnClientActive(g_pSceneManager, player);
}


// CSceneEntityAlias_logic_choreographed_scene::Schema_DynamicBinding  (line 208, @0x00000000023a8df0, libserver.so)
// globals: CSceneEntityAlias_logic_choreographed_scene::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSceneEntityAlias_logic_choreographed_scene::Schema_DynamicBinding(
        const CSceneEntityAlias_logic_choreographed_scene *const this)
{
  return CSceneEntityAlias_logic_choreographed_scene::s_pSchemaBinding;
}


// CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 208, @0x00000000023a8e00, libserver.so)
// globals: CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass *const this)
{
  return CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::DestructInstance  (line 208, @0x00000000023a8e10, libserver.so)  // inlines: Destruct<CSceneEntityAlias_logic_choreographed_scene>
void __fastcall CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::DestructInstance(
        CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::FreeInstance  (line 208, @0x00000000023a8e30, libserver.so)
void __fastcall CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::FreeInstance(
        CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::CanAllocate  (line 208, @0x00000000023a8e50, libserver.so)
bool __fastcall CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::CanAllocate(
        const CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 208, @0x00000000023a8e60, libserver.so)
// globals: CSceneEntityAlias_logic_choreographed_scene::s_pSchemaBinding
const ISchemaBinding *__fastcall CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass *const this)
{
  return CSceneEntityAlias_logic_choreographed_scene::s_pSchemaBinding;
}


// CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::AllocateInstance  (line 208, @0x00000000023aa830, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::AllocateInstance(
        CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1592);
  memset(v1, 0, 0x638u);
  return v1;
}


// CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 208, @0x00000000023aca20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 208, @0x00000000023aca40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::ConstructInstance  (line 208, @0x00000000023afbb0, libserver.so)  // inlines: CSceneEntityAlias_logic_choreographed_scene, Construct<CSceneEntityAlias_logic_choreographed_scene>
// calls: CSceneEntity::CSceneEntity
CEntityInstance *__fastcall CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::ConstructInstance(
        CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CSceneEntity::CSceneEntity(p);
    *p = &off_40A62D0;
    *(p + 97) = off_40A6B00;
  }
  return p;
}


// CSceneEntityAlias_logic_choreographed_scene::~CSceneEntityAlias_logic_choreographed_scene  (line 208, @0x00000000023afd90, libserver.so)
// calls: CSceneEntity::~CSceneEntity
void __fastcall CSceneEntityAlias_logic_choreographed_scene::~CSceneEntityAlias_logic_choreographed_scene(
        CSceneEntityAlias_logic_choreographed_scene *const this)
{
  this->_vptr_IHandleEntity = &off_40A62D0;
  this->_vptr_IChoreoEventCallback = off_40A6B00;
  CSceneEntity::~CSceneEntity(this);
}


// CSceneEntityAlias_logic_choreographed_scene::~CSceneEntityAlias_logic_choreographed_scene  (line 208, @0x00000000023afdc0, libserver.so)  // inlines: ~CSceneEntityAlias_logic_choreographed_scene
// calls: CSceneEntity::~CSceneEntity, CBaseEntity::operator delete
void __fastcall CSceneEntityAlias_logic_choreographed_scene::~CSceneEntityAlias_logic_choreographed_scene(
        CSceneEntityAlias_logic_choreographed_scene *const this)
{
  this->_vptr_IHandleEntity = &off_40A62D0;
  this->_vptr_IChoreoEventCallback = off_40A6B00;
  CSceneEntity::~CSceneEntity(this);
  CBaseEntity::operator delete(this);
}


// CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal  (line 208, @0x00000000023b4e60, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CSceneEntity>, CSceneEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "logic_choreographed_scene", "CSceneEntityAlias_logic_choreographed_scene"
// globals: `guard variable for'CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass, CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInfo(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClassInfo, CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInfo(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClassInfo
CEntityClass *__cdecl CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass) != 0 )
  {
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_designerName.u.m_Id = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass._vptr_CEntityClass = off_3F79390;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_ComponentOffsets.m_Size = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_AllHelpers.m_Size = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_classInputs.m_Size = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_classOutputs.m_Size = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_requiredEHandle.m_Index = -1;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_hNetworkSerializer = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_pBaseClassInfo = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_pClassInfo = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_flags = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_nAllHelpersFlags = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_pScriptClassDesc = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_pInputs = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_nInputCount = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_pOutputs = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_nOutputCount = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_pGameClass = 0;
    CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass._vptr_CEntityClass = off_40A6250;
    __cxa_guard_release(&`guard variable for'CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass);
    __cxa_atexit(
      CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass,
      &_dso_handle);
  }
  if ( g_pEntityCSceneEntityAlias_logic_choreographed_sceneClass != 0 )
    return &CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass;
  if ( `guard variable for'CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInfo(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInfo(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClassInfo) != 0 )
  {
    EntityClassInfo = CSceneEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInfo(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClassInfo,
      "CSceneEntityAlias_logic_choreographed_scene",
      "logic_choreographed_scene",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInfo(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClassInfo);
  }
  CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_pClassInfo = &CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInfo(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClassInfo;
  CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_pBaseClassInfo = CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInfo(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClassInfo.m_pBaseClassInfo;
  g_pEntityCSceneEntityAlias_logic_choreographed_sceneClass = &CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass;
  CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInfo(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClassInfo.m_pClass = &CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass;
  CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass.m_pScriptClassDesc = GetScriptDesc<CSceneEntity>(0);
  g_pEntityCSceneEntityAlias_logic_choreographed_sceneClass->m_pComponentOverrides = 0;
  return &CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal(void)::g_EntityCSceneEntityAlias_logic_choreographed_sceneClass;
}


// CSceneEntity::YouForgotToImplementOrDeclareServerClass  (line 210, @0x0000000002380980, libserver.so)
int __fastcall CSceneEntity::YouForgotToImplementOrDeclareServerClass(CSceneEntity *const this)
{
  return 0;
}


// CSceneEntity::GetServerClass  (line 210, @0x0000000002385e60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CSceneEntity::GetServerClass(CSceneEntity *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CSceneEntity::GetDataDescMap  (line 213, @0x0000000002380990, libserver.so)
// globals: CSceneEntity::m_DataMap
datamap_t *__fastcall CSceneEntity::GetDataDescMap(CSceneEntity *const this)
{
  return &CSceneEntity::m_DataMap;
}


// CSceneEntity::AddDatadescMetadataKeys  (line 213, @0x00000000023888d0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CSceneEntity::GetEntityClass(void)
void __fastcall CSceneEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CSceneEntity::GetEntityClass);
}


// CSceneEntity::GetBaseMap  (line 213, @0x00000000023888f0, libserver.so)
datamap_t *__cdecl CSceneEntity::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CSceneEntity>  (line 213, @0x0000000002388900, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>, CSceneEntity::NetworkVar_m_hActorList> >, GetDataOps<CUtlVector<CHandle<CBaseEntity> > >, GetDataOps<CUtlVector<CHandle<CSceneEntity> > >, GetDataOps<CUtlVector<CHandle<CSceneListManager> > >
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CSceneEntity"
// globals: `guard variable for'DataMapInit<CSceneEntity>(CSceneEntity *)::nameHolder, `guard variable for'DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc, CSceneEntity::GetEntityClass(void), CSceneEntity::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>>(CNetworkUt, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBas, CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>>(CNetworkUtlVectorBase<CHandle<, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>>(CUtlVector<CHandle<CS (15 total)
datamap_t *__fastcall DataMapInit<CSceneEntity>(CSceneEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSceneEntity>(CSceneEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSceneEntity>(CSceneEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CSceneEntity>(CSceneEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSceneEntity>(CSceneEntity *)::nameHolder.m_pszBase = "CSceneEntity";
    DataMapInit<CSceneEntity>(CSceneEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSceneEntity>(CSceneEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSceneEntity>(CSceneEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSceneEntity>(CSceneEntity *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSceneEntity>(CSceneEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSceneEntity>(CSceneEntity *)::nameHolder,
      &_dso_handle);
  }
  CSceneEntity::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>>(CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>>(CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>>(CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1> *)::ops = off_40AE6D0;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>>(CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1> *)::ops);
    }
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[38].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>>(CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1> *)::ops;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops = off_4008550;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops);
    }
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[39].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>>(CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>>(CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>>(CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>> *)::ops = off_40AE710;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>>(CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>> *)::ops);
    }
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[53].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>>(CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>> *)::ops;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>>(CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>>(CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>>(CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>> *)::ops = off_40AE750;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>>(CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>> *)::ops);
    }
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[54].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>>(CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>> *)::ops;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[69].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[70].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[71].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[72].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[73].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[74].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[75].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[76].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[77].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[78].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[79].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[80].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[81].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[82].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[83].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[84].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[85].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[86].pSaveRestoreOps = eventFuncs;
    DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[87].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc);
  }
  CSceneEntity::m_DataMap.dataNumFields = 87;
  CSceneEntity::m_DataMap.dataDesc = &DataMapInit<CSceneEntity>(CSceneEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CSceneEntity::m_DataMap, CSceneEntity::GetEntityClass);
  return &CSceneEntity::m_DataMap;
}


// GetScriptDesc<CSceneEntity>  (line 327, @0x00000000023a20e0, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Element, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CSceneEntity*, CSceneEntity, HSCRIPT__*, char const*>, ScriptDeduceFunctionSignature<CSceneEntity*, CSceneEntity, HSCRIPT__*>, ScriptDeduceFunctionSignature<CSceneEntity*, CSceneEntity, bool, char const*, char const*>, ScriptDeduceFunctionSignature<CSceneEntity*, CSceneEntity, bool>, ScriptDeduceFunctionSignature<CSceneEntity*, CSceneEntity, float>, ScriptDeduceFunctionSignature<CSceneEntity*, CSceneEntity, void, HSCRIPT__*>, ScriptDeduceFunctionSignature<CSceneEntity*, CSceneEntity, void, int>, ScriptDeduceFunctionSignature<CSceneEntity*, CSceneEntity, void>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, GetScriptDesc<CBaseEntity>, CUtlMemory<ScriptFunctionBinding_t, int>::Grow
// callers: CSceneEntity::GetScriptDesc, CSceneEntity::InitScriptDesc, CSceneEntity::GetClassScriptDesc, CSceneEntity::GetEntityClassInternal, CSceneEntityAlias_logic_choreographed_scene::GetEntityClassInternal, CInstancedSceneEntity::GetEntityClassInternal, CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::InitOptionalTables
// strings: "Choreographed scene which controls animation and/or dialog on one or more actors.", "CSceneEntity", "Returns length of this scene in seconds.", "EstimateLength", "If this scene is currently playing.", "If this scene is currently paused." (22 total)
// globals: g_pCSceneEntity_ScriptDesc, CMemberScriptBinding0<CSceneEntity *,float (CSceneEntity::*)(void),float>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariant, CMemberScriptBinding0<CSceneEntity *,bool (CSceneEntity::*)(void),bool>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantDe, CSceneEntity::IsPlayingBack(void), CSceneEntity::IsPaused(void), CMemberScriptBinding1<CSceneEntity *,void (CSceneEntity::*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVar, CSceneEntity::ScriptStartPlayback(HSCRIPT__ *), CMemberScriptBinding0<CSceneEntity *,void (CSceneEntity::*)(void),void>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantDe (18 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CSceneEntity>(CSceneEntity *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  ScriptClassDesc_t *Script; // rax
  IScriptInstanceHelper *pHelper; // rdx
  __int64 m_Size; // r12
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  char v11; // dl
  char v12; // di
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  char v18; // dl
  char v19; // di
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  char v25; // dl
  char v26; // di
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // rdx
  int v32; // eax
  char v33; // dl
  char v34; // di
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  char v40; // dl
  char v41; // di
  __int64 v42; // r12
  __int64 v43; // rax
  __int64 v44; // rcx
  char v45; // al
  __int64 v46; // rdx
  int v47; // eax
  char v48; // dl
  char v49; // di
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rcx
  char v53; // al
  __int64 v54; // rdx
  int v55; // eax
  char v56; // dl
  char v57; // di
  __int64 v58; // r12
  __int64 v59; // rax
  __int64 v60; // rcx
  char v61; // al
  __int64 v62; // rdx
  int v63; // eax
  char v64; // dl
  char v65; // di
  __int64 v66; // r12
  __int64 v67; // rax
  __int64 v68; // rcx
  char v69; // al
  char v70; // dl
  int v71; // eax
  char v72; // dl
  char v73; // di
  __int64 v74; // r12
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // eax
  int v78; // eax
  char v79; // dl
  char v80; // di

  result = g_pCSceneEntity_ScriptDesc;
  if ( g_pCSceneEntity_ScriptDesc == 0 )
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
    g_pCSceneEntity_ScriptDesc = v2;
    v2->m_pszDescription = "Choreographed scene which controls animation and/or dialog on one or more actors.";
    v2->m_pszScriptName = "CSceneEntity";
    v2->m_pszClassname = "CSceneEntity";
    Script = GetScriptDesc<CBaseEntity>(0);
    v2->m_pBaseDesc = Script;
    if ( Script != 0 )
    {
      while ( 1 )
      {
        pHelper = Script->pHelper;
        if ( pHelper != 0 )
          break;
        Script = Script->m_pBaseDesc;
        if ( Script == 0 )
          goto LABEL_7;
      }
      v2->pHelper = pHelper;
    }
LABEL_7:
    m_Size = v2->m_FunctionBindings.m_Size;
    v6 = v2->m_FunctionBindings.m_Size;
    if ( m_Size == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
      v6 = v2->m_FunctionBindings.m_Size;
    }
    v2->m_FunctionBindings.m_Size = v6 + 1;
    v7 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
    {
      *v7 = 0;
      *(v7 + 8) = 0;
      *(v7 + 16) = 0;
      *(v7 + 24) = 29;
      *(v7 + 25) = -1;
      *(v7 + 26) = 0;
      *(v7 + 40) = 0;
      v8 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v8 = 0;
    }
    *(v8 + 24) = 1;
    *(v8 + 16) = "Returns length of this scene in seconds.";
    *v8 = "EstimateLength";
    *(v8 + 8) = "EstimateLength";
    v9 = *(v8 + 26);
    *(v8 + 25) = 0;
    v10 = v9 - 1;
    if ( v10 >= 0 && *(v8 + v10 + 27) == 32 )
    {
      v11 = 1;
      do
      {
        --v10;
        v12 = v11;
        if ( v10 == -1 )
        {
          *(v8 + 25) = v11;
          goto LABEL_17;
        }
        ++v11;
      }
      while ( *(v8 + v10 + 27) == 32 );
      *(v8 + 25) = v12;
    }
LABEL_17:
    *(v8 + 56) = 2009;
    *(v8 + 48) = CMemberScriptBinding0<CSceneEntity *,float (CSceneEntity::*)(void),float>::Call;
    *(v8 + 64) = 1;
    v13 = v2->m_FunctionBindings.m_Size;
    if ( v13 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v14 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v13];
    if ( v14 != 0 )
    {
      *v14 = 0;
      *(v14 + 8) = 0;
      *(v14 + 16) = 0;
      *(v14 + 24) = 29;
      *(v14 + 25) = -1;
      *(v14 + 26) = 0;
      *(v14 + 40) = 0;
      v15 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v13];
    }
    else
    {
      v15 = 0;
    }
    *(v15 + 24) = 6;
    *(v15 + 16) = "If this scene is currently playing.";
    *v15 = "IsPlayingBack";
    *(v15 + 8) = "IsPlayingBack";
    v16 = *(v15 + 26);
    *(v15 + 25) = 0;
    v17 = v16 - 1;
    if ( v17 >= 0 && *(v15 + v17 + 27) == 32 )
    {
      v18 = 1;
      do
      {
        --v17;
        v19 = v18;
        if ( v17 == -1 )
        {
          *(v15 + 25) = v18;
          goto LABEL_27;
        }
        ++v18;
      }
      while ( *(v15 + v17 + 27) == 32 );
      *(v15 + 25) = v19;
    }
LABEL_27:
    *(v15 + 64) = 1;
    *(v15 + 48) = CMemberScriptBinding0<CSceneEntity *,bool (CSceneEntity::*)(void),bool>::Call;
    *(v15 + 56) = CSceneEntity::IsPlayingBack;
    v20 = v2->m_FunctionBindings.m_Size;
    if ( v20 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v21 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v20];
    if ( v21 != 0 )
    {
      *v21 = 0;
      *(v21 + 8) = 0;
      *(v21 + 16) = 0;
      *(v21 + 24) = 29;
      *(v21 + 25) = -1;
      *(v21 + 26) = 0;
      *(v21 + 40) = 0;
      v22 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v20];
    }
    else
    {
      v22 = 0;
    }
    *(v22 + 24) = 6;
    *(v22 + 16) = "If this scene is currently paused.";
    *v22 = "IsPaused";
    *(v22 + 8) = "IsPaused";
    v23 = *(v22 + 26);
    *(v22 + 25) = 0;
    v24 = v23 - 1;
    if ( v24 >= 0 && *(v22 + v24 + 27) == 32 )
    {
      v25 = 1;
      do
      {
        --v24;
        v26 = v25;
        if ( v24 == -1 )
        {
          *(v22 + 25) = v25;
          goto LABEL_37;
        }
        ++v25;
      }
      while ( *(v22 + v24 + 27) == 32 );
      *(v22 + 25) = v26;
    }
LABEL_37:
    *(v22 + 64) = 1;
    *(v22 + 48) = CMemberScriptBinding0<CSceneEntity *,bool (CSceneEntity::*)(void),bool>::Call;
    *(v22 + 56) = CSceneEntity::IsPaused;
    v27 = v2->m_FunctionBindings.m_Size;
    if ( v27 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v28 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v27];
    if ( v28 != 0 )
    {
      *v28 = 0;
      *(v28 + 8) = 0;
      *(v28 + 16) = 0;
      *(v28 + 24) = 29;
      *(v28 + 25) = -1;
      *(v28 + 26) = 0;
      *(v28 + 40) = 0;
      v29 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v27];
    }
    else
    {
      v29 = 0;
    }
    *(v29 + 24) = 0;
    *(v29 + 16) = "Start scene playback, takes activatorEntity as param";
    *v29 = "Start";
    *(v29 + 8) = "ScriptStartPlayback";
    v30 = *(v29 + 26);
    v31 = v30++;
    *(v29 + v31 + 27) = 31;
    *(v29 + 26) = v30;
    v32 = v30 - 1;
    *(v29 + 25) = 0;
    if ( v32 >= 0 && *(v29 + v32 + 27) == 32 )
    {
      v33 = 1;
      do
      {
        --v32;
        v34 = v33;
        if ( v32 == -1 )
        {
          *(v29 + 25) = v33;
          goto LABEL_47;
        }
        ++v33;
      }
      while ( *(v29 + v32 + 27) == 32 );
      *(v29 + 25) = v34;
    }
LABEL_47:
    *(v29 + 64) = 1;
    *(v29 + 48) = CMemberScriptBinding1<CSceneEntity *,void (CSceneEntity::*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call;
    *(v29 + 56) = CSceneEntity::ScriptStartPlayback;
    v35 = v2->m_FunctionBindings.m_Size;
    if ( v35 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v36 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v35];
    if ( v36 != 0 )
    {
      *v36 = 0;
      *(v36 + 8) = 0;
      *(v36 + 16) = 0;
      *(v36 + 24) = 29;
      *(v36 + 25) = -1;
      *(v36 + 26) = 0;
      *(v36 + 40) = 0;
      v37 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v35];
    }
    else
    {
      v37 = 0;
    }
    *(v37 + 24) = 0;
    *(v37 + 16) = "Cancel scene playback";
    *v37 = "Cancel";
    *(v37 + 8) = "ScriptCancelPlayback";
    v38 = *(v37 + 26);
    *(v37 + 25) = 0;
    v39 = v38 - 1;
    if ( v39 >= 0 && *(v37 + v39 + 27) == 32 )
    {
      v40 = 1;
      do
      {
        --v39;
        v41 = v40;
        if ( v39 == -1 )
        {
          *(v37 + 25) = v40;
          goto LABEL_57;
        }
        ++v40;
      }
      while ( *(v37 + v39 + 27) == 32 );
      *(v37 + 25) = v41;
    }
LABEL_57:
    *(v37 + 64) = 1;
    *(v37 + 48) = CMemberScriptBinding0<CSceneEntity *,void (CSceneEntity::*)(void),void>::Call;
    *(v37 + 56) = CSceneEntity::ScriptCancelPlayback;
    v42 = v2->m_FunctionBindings.m_Size;
    if ( v42 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v43 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v42];
    if ( v43 != 0 )
    {
      *v43 = 0;
      *(v43 + 8) = 0;
      *(v43 + 16) = 0;
      *(v43 + 24) = 29;
      *(v43 + 25) = -1;
      *(v43 + 26) = 0;
      *(v43 + 40) = 0;
      v44 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v42];
    }
    else
    {
      v44 = 0;
    }
    *(v44 + 24) = 0;
    *(v44 + 16) = "Adds a team (by index) to the broadcast list";
    *v44 = "AddBroadcastTeamTarget";
    *(v44 + 8) = "AddBroadcastTeamTarget";
    v45 = *(v44 + 26);
    v46 = v45++;
    *(v44 + v46 + 27) = 5;
    *(v44 + 26) = v45;
    v47 = v45 - 1;
    *(v44 + 25) = 0;
    if ( v47 >= 0 && *(v44 + v47 + 27) == 32 )
    {
      v48 = 1;
      do
      {
        --v47;
        v49 = v48;
        if ( v47 == -1 )
        {
          *(v44 + 25) = v48;
          goto LABEL_67;
        }
        ++v48;
      }
      while ( *(v44 + v47 + 27) == 32 );
      *(v44 + 25) = v49;
    }
LABEL_67:
    *(v44 + 64) = 1;
    *(v44 + 48) = CMemberScriptBinding1<CSceneEntity *,void (CSceneEntity::*)(int),void,int>::Call;
    *(v44 + 56) = CSceneEntity::AddBroadcastTeamTarget;
    v50 = v2->m_FunctionBindings.m_Size;
    if ( v50 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v51 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v50];
    if ( v51 != 0 )
    {
      *v51 = 0;
      *(v51 + 8) = 0;
      *(v51 + 16) = 0;
      *(v51 + 24) = 29;
      *(v51 + 25) = -1;
      *(v51 + 26) = 0;
      *(v51 + 40) = 0;
      v52 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v50];
    }
    else
    {
      v52 = 0;
    }
    *(v52 + 24) = 0;
    *(v52 + 16) = "Removes a team (by index) from the broadcast list";
    *v52 = "RemoveBroadcastTeamTarget";
    *(v52 + 8) = "RemoveBroadcastTeamTarget";
    v53 = *(v52 + 26);
    v54 = v53++;
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
          goto LABEL_77;
        }
        ++v56;
      }
      while ( *(v52 + v55 + 27) == 32 );
      *(v52 + 25) = v57;
    }
LABEL_77:
    *(v52 + 64) = 1;
    *(v52 + 48) = CMemberScriptBinding1<CSceneEntity *,void (CSceneEntity::*)(int),void,int>::Call;
    *(v52 + 56) = CSceneEntity::RemoveBroadcastTeamTarget;
    v58 = v2->m_FunctionBindings.m_Size;
    if ( v58 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v59 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v58];
    if ( v59 != 0 )
    {
      *v59 = 0;
      *(v59 + 8) = 0;
      *(v59 + 16) = 0;
      *(v59 + 24) = 29;
      *(v59 + 25) = -1;
      *(v59 + 26) = 0;
      *(v59 + 40) = 0;
      v60 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v58];
    }
    else
    {
      v60 = 0;
    }
    *(v60 + 24) = 31;
    *(v60 + 16) = "given an entity reference, such as !target, get actual entity from scene object";
    *v60 = "FindNamedEntity";
    *(v60 + 8) = "ScriptFindNamedEntity";
    v61 = *(v60 + 26);
    v62 = v61++;
    *(v60 + v62 + 27) = 30;
    *(v60 + 26) = v61;
    v63 = v61 - 1;
    *(v60 + 25) = 0;
    if ( v63 >= 0 && *(v60 + v63 + 27) == 32 )
    {
      v64 = 1;
      do
      {
        --v63;
        v65 = v64;
        if ( v63 == -1 )
        {
          *(v60 + 25) = v64;
          goto LABEL_87;
        }
        ++v64;
      }
      while ( *(v60 + v63 + 27) == 32 );
      *(v60 + 25) = v65;
    }
LABEL_87:
    *(v60 + 64) = 1;
    *(v60 + 48) = CMemberScriptBinding1<CSceneEntity *,HSCRIPT__ * (CSceneEntity::*)(char const*),HSCRIPT__ *,char const*>::Call;
    *(v60 + 56) = CSceneEntity::ScriptFindNamedEntity;
    v66 = v2->m_FunctionBindings.m_Size;
    if ( v66 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v67 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v66];
    if ( v67 != 0 )
    {
      *v67 = 0;
      *(v67 + 8) = 0;
      *(v67 + 16) = 0;
      *(v67 + 24) = 29;
      *(v67 + 25) = -1;
      *(v67 + 26) = 0;
      *(v67 + 40) = 0;
      v68 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v66];
    }
    else
    {
      v68 = 0;
    }
    *(v68 + 24) = 6;
    *(v68 + 16) = "given a dummy scene name and a vcd string, load the scene";
    *v68 = "LoadSceneFromString";
    *(v68 + 8) = "ScriptLoadSceneFromString";
    v69 = *(v68 + 26);
    *(v68 + v69 + 27) = 30;
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
          goto LABEL_97;
        }
        ++v72;
      }
      while ( *(v68 + v71 + 27) == 32 );
      *(v68 + 25) = v73;
    }
LABEL_97:
    *(v68 + 64) = 1;
    *(v68 + 48) = CMemberScriptBinding2<CSceneEntity *,bool (CSceneEntity::*)(char const*,char const*),bool,char const*,char const*>::Call;
    *(v68 + 56) = CSceneEntity::ScriptLoadSceneFromString;
    v74 = v2->m_FunctionBindings.m_Size;
    if ( v74 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v75 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v74];
    if ( v75 != 0 )
    {
      *v75 = 0;
      *(v75 + 8) = 0;
      *(v75 + 16) = 0;
      *(v75 + 24) = 29;
      *(v75 + 25) = -1;
      *(v75 + 26) = 0;
      *(v75 + 40) = 0;
      v76 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v74];
    }
    else
    {
      v76 = 0;
    }
    *(v76 + 24) = 31;
    *(v76 + 16) = "Get the camera";
    *v76 = "FindCamera";
    *(v76 + 8) = "ScriptFindCamera";
    v77 = *(v76 + 26);
    *(v76 + 25) = 0;
    v78 = v77 - 1;
    if ( v78 >= 0 && *(v76 + v78 + 27) == 32 )
    {
      v79 = 1;
      do
      {
        --v78;
        v80 = v79;
        if ( v78 == -1 )
        {
          *(v76 + 25) = v79;
          goto LABEL_107;
        }
        ++v79;
      }
      while ( *(v76 + v78 + 27) == 32 );
      *(v76 + 25) = v80;
    }
LABEL_107:
    *(v76 + 64) = 1;
    *(v76 + 48) = CMemberScriptBinding0<CSceneEntity *,HSCRIPT__ * (CSceneEntity::*)(void),HSCRIPT__ *>::Call;
    *(v76 + 56) = CSceneEntity::ScriptFindCamera;
    return v2;
  }
  return result;
}


// CSceneEntity::GetScriptDesc  (line 327, @0x00000000023a2cb0, libserver.so)
// calls: GetScriptDesc<CSceneEntity>
ScriptClassDesc_t *__fastcall CSceneEntity::GetScriptDesc(CSceneEntity *const this)
{
  return GetScriptDesc<CSceneEntity>(this);
}


// CSceneEntity::InitScriptDesc  (line 327, @0x00000000023a2cc0, libserver.so)
// calls: GetScriptDesc<CSceneEntity>
ScriptClassDesc_t *__cdecl CSceneEntity::InitScriptDesc()
{
  return GetScriptDesc<CSceneEntity>(0);
}


// CSceneEntity::GetClassScriptDesc  (line 327, @0x00000000023a2cd0, libserver.so)
// calls: GetScriptDesc<CSceneEntity>
ScriptClassDesc_t *__cdecl CSceneEntity::GetClassScriptDesc()
{
  return GetScriptDesc<CSceneEntity>(0);
}


// CSceneEntity::CSceneEntity  (line 343, @0x000000000239a2b0, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CHandle, CNetworkUtlVectorBase, CNetworkUtlVector_MemoryType, CNetworkVarBase, CPointEntity, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ClearInterrupt, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<short unsigned int>, Purge, RemoveAll, Set, SetCurrentTime, operator=, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CPointEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::CBaseEntity, CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >::~CUtlVectorBase, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CBaseEntity::~CBaseEntity, _Unwind_Resume, CUtlMemory<CHandle<CSceneListManager>, int>::Purge, CUtlMemory<CHandle<CBaseFlex>, int>::Purge
// callers: CSceneEntity::CEntityInstanceEntityClass::ConstructInstance, CSceneEntityAlias_logic_choreographed_scene::CEntityInstanceEntityClass::ConstructInstance, CInstancedSceneEntity::CEntityInstanceEntityClass::ConstructInstance
// strings: "snd_mixahead"
// globals: CSceneEntity::m_pcvSndMixahead
void __fastcall CSceneEntity::CSceneEntity(CSceneEntity *const this)
{
  bool v2; // zf

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_40A6B30;
  this->_vptr_IChoreoEventCallback = off_40A7360;
  this->m_iszTarget1.u.m_Id = 0;
  this->m_iszTarget2.u.m_Id = 0;
  this->m_iszTarget3.u.m_Id = 0;
  this->m_iszTarget4.u.m_Id = 0;
  this->m_iszTarget5.u.m_Id = 0;
  this->m_iszTarget6.u.m_Id = 0;
  this->m_iszTarget7.u.m_Id = 0;
  this->m_iszTarget8.u.m_Id = 0;
  this->m_hTarget1.m_Index = -1;
  this->m_hTarget2.m_Index = -1;
  this->m_hTarget3.m_Index = -1;
  this->m_hTarget4.m_Index = -1;
  this->m_hTarget5.m_Index = -1;
  this->m_hTarget6.m_Index = -1;
  this->m_hTarget7.m_Index = -1;
  this->m_hTarget8.m_Index = -1;
  this->m_bIsPlayingBack.m_Value = 0;
  this->m_bPaused.m_Value = 0;
  this->m_bMultiplayer.m_Value = 0;
  this->m_flForceClientTime.m_Value = 0.0;
  this->m_hActorList.m_Vector.m_Size = 0;
  this->m_hActorList.m_Vector.m_Memory.m_pMemory = 0;
  this->m_hActorList.m_Vector.m_Memory.m_nAllocationCount = 0;
  this->m_hActorList.m_Vector.m_Memory.m_nGrowSize = 0;
  this->m_hRemoveActorList.m_Size = 0;
  this->m_hRemoveActorList.m_Memory.m_pMemory = 0;
  this->m_hRemoveActorList.m_Memory.m_nAllocationCount = 0;
  this->m_hRemoveActorList.m_Memory.m_nGrowSize = 0;
  this->m_nSceneStringIndex.m_Value = 0;
  this->m_OnStart._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnCompletion._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnCanceled._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger1._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger2._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger3._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger4._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger5._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger6._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger7._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger8._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger9._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger10._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger11._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger12._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger13._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger14._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger15._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTrigger16._vptr_CEntityIOOutput = off_3F7C190;
  this->m_hNotifySceneCompletion.m_Size = 0;
  this->m_hNotifySceneCompletion.m_Memory.m_pMemory = 0;
  this->m_hNotifySceneCompletion.m_Memory.m_nAllocationCount = 0;
  this->m_hNotifySceneCompletion.m_Memory.m_nGrowSize = 0;
  this->m_hListManagers.m_Size = 0;
  this->m_hListManagers.m_Memory.m_pMemory = 0;
  this->m_hListManagers.m_Memory.m_nAllocationCount = 0;
  this->m_hListManagers.m_Memory.m_nGrowSize = 0;
  this->m_iszSoundName.u.m_Id = 0;
  this->m_hActor.m_Index = -1;
  this->m_hActivator.m_Index = -1;
  this->m_hCamera.m_Index = -1;
  this->m_bWaitingForActor = 0;
  this->m_bWaitingForInterrupt = 0;
  this->m_bInterruptedActorsScenes = 0;
  this->m_fPitch = 1.0;
  this->m_iszSceneFile.u.m_Id = 0;
  this->m_iszResumeSceneFile.u.m_Id = 0;
  v2 = CSceneEntity::m_pcvSndMixahead == 0;
  this->m_hWaitingForThisResumeScene.m_Index = -1;
  this->m_bWaitingForResumeScene = 0;
  this->m_flCurrentTime = 0.0;
  this->m_bCancelAtNextInterrupt = 0;
  this->m_bAutomated = 0;
  this->m_nAutomatedAction = 0;
  this->m_flAutomationDelay = 0.0;
  this->m_flAutomationTime = 0.0;
  this->m_bPausedViaInput = 0;
  this->m_nInterruptCount = 0;
  this->m_bInterrupted = 0;
  this->m_hInterruptScene.m_Index = -1;
  this->m_pScene = 0;
  this->m_bCompletedEarly = 0;
  this->m_BusyActor = 0;
  if ( v2 )
    CSceneEntity::m_pcvSndMixahead = (*(*g_pCVar + 144LL))(g_pCVar, "snd_mixahead");
}


// CSceneEntity::~CSceneEntity  (line 385, @0x000000000239a6c0, libserver.so)  // inlines: Purge, RemoveAll, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CPointEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<CHandle<CSceneListManager>, int>::Purge, CUtlMemory<CHandle<CBaseFlex>, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CHandle<CSceneEntity>, int>::Purge
// callers: CSceneEntity::~CSceneEntity, CSceneEntityAlias_logic_choreographed_scene::~CSceneEntityAlias_logic_choreographed_scene, CInstancedSceneEntity::~CInstancedSceneEntity
void __fastcall CSceneEntity::~CSceneEntity(CSceneEntity *const this)
{
  CRecipientFilter *m_pRecipientFilter; // rdi
  bool v3; // zf

  this->_vptr_IHandleEntity = &off_40A6B30;
  this->_vptr_IChoreoEventCallback = off_40A7360;
  m_pRecipientFilter = this->m_pRecipientFilter;
  if ( m_pRecipientFilter != 0 )
    (*(m_pRecipientFilter->_vptr_IRecipientFilter + 2))(m_pRecipientFilter);
  v3 = (this->m_hListManagers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_pRecipientFilter = 0;
  this->m_hListManagers.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CHandle<CSceneListManager>,int>::Purge(&this->m_hListManagers.m_Memory);
    if ( (this->m_hListManagers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CSceneListManager>,int>::Purge(&this->m_hListManagers.m_Memory);
  }
  CUtlVectorBase<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>::RemoveAll(&this->m_hNotifySceneCompletion);
  if ( (this->m_hNotifySceneCompletion.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CSceneEntity>,int>::Purge(&this->m_hNotifySceneCompletion.m_Memory);
    if ( (this->m_hNotifySceneCompletion.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CSceneEntity>,int>::Purge(&this->m_hNotifySceneCompletion.m_Memory);
  }
  v3 = (this->m_hRemoveActorList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hRemoveActorList.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hRemoveActorList.m_Memory);
    if ( (this->m_hRemoveActorList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hRemoveActorList.m_Memory);
  }
  v3 = (this->m_hActorList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hActorList.m_Vector.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CHandle<CBaseFlex>,int>::Purge(&this->m_hActorList.m_Vector.m_Memory);
    if ( (this->m_hActorList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseFlex>,int>::Purge(&this->m_hActorList.m_Vector.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CSceneEntity::~CSceneEntity  (line 385, @0x000000000239a840, libserver.so)
// calls: CSceneEntity::~CSceneEntity, CBaseEntity::operator delete
void __fastcall CSceneEntity::~CSceneEntity(CSceneEntity *const this)
{
  CSceneEntity::~CSceneEntity(this);
  CBaseEntity::operator delete(this);
}


// CSceneEntity::SetCurrentTime  (line 396, @0x00000000023833a0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CSceneEntity::DispatchProcessLoop, CSceneEntity::SetCurrentTime, CSceneEntity::DoThink, CSceneEntity::OnRestore, CSceneEntity::StartPlayback
void __fastcall CSceneEntity::SetCurrentTime(CSceneEntity *const this, float t, bool bForceClientSync)
{
  if ( t != this->m_flForceClientTime.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 908, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flForceClientTime.m_Value = t;
  }
}


// CSceneEntity::SetCurrentTime  (line 396, @0x0000000002388bf0, libserver.so)
// calls: CSceneEntity::SetCurrentTime
void __fastcall CSceneEntity::SetCurrentTime(CSceneEntity *const this, float a2, float t, bool bForceClientSync)
{
  this->m_flCurrentTime = a2;
  if ( bForceClientSync )
    CSceneEntity::SetCurrentTime(this, a2, bForceClientSync);
}


// CSceneEntity::UpdateOnRemove  (line 408, @0x000000000239e730, libserver.so)  // inlines: GetSceneManager
// calls: CSceneEntity::UnloadScene, CBaseEntity::UpdateOnRemove, CSceneManager::RemoveSceneEntity
// globals: g_pSceneManager
void __fastcall CSceneEntity::UpdateOnRemove(CSceneEntity *const this)
{
  CSceneEntity::UnloadScene(this);
  CBaseEntity::UpdateOnRemove(this);
  if ( g_pSceneManager != 0 )
    CSceneManager::RemoveSceneEntity(g_pSceneManager, this);
}


// CSceneEntity::GenerateSceneForSound  (line 425, @0x0000000002392d00, libserver.so)  // inlines: String, ToCStr
// calls: CBaseEntity::GetModelName, CBaseEntity::GetSoundDuration, operator new, CChoreoScene::CChoreoScene, CChoreoScene::AllocActor, CChoreoScene::AllocChannel, CChoreoScene::AllocEvent, CChoreoActor::SetName, CChoreoActor::SetActive, CChoreoChannel::SetName, CChoreoChannel::SetActor, CChoreoActor::AddChannel (25 total)
// callers: CSceneEntity::Activate
// strings: "!self", "CSceneEntity::GenerateSceneForSound:  Alloc of actor, channel, or event failed!!!\n", "CSceneEntity::GenerateSceneForSound:  Failed to allocated new scene!!!\n", "CSceneEntity::GenerateSceneForSound:  Couldn't determine duration of %s\n"
// globals: LocalScene_Printf(char const*,...)
CChoreoScene *__fastcall CSceneEntity::GenerateSceneForSound(
        CSceneEntity *const this,
        CBaseFlex *pFlexActor,
        const char *soundname)
{
  char *v4; // rsi
  CChoreoScene *v5; // rbx
  CChoreoActor *v6; // r13
  CChoreoChannel *v7; // r14
  CChoreoEvent *v8; // rax
  CChoreoEvent *v9; // r12
  const char *m_pAsString; // rsi
  float v11; // xmm1_4
  float v12; // xmm1_4
  char *actormodel; // [rsp+10h] [rbp-40h] BYREF

  if ( pFlexActor != 0 )
  {
    CBaseEntity::GetModelName(&actormodel, pFlexActor);
    v4 = "";
    if ( actormodel != 0 )
      v4 = actormodel;
  }
  else
  {
    v4 = 0;
  }
  if ( CBaseEntity::GetSoundDuration(soundname, v4) <= 0.0 )
  {
    Warning("CSceneEntity::GenerateSceneForSound:  Couldn't determine duration of %s\n", soundname);
    return 0;
  }
  else
  {
    v5 = operator new(0x170u);
    CChoreoScene::CChoreoScene(v5, &this->IChoreoEventCallback, LocalScene_Printf);
    if ( v5 != 0 )
    {
      v6 = CChoreoScene::AllocActor(v5);
      v7 = CChoreoScene::AllocChannel(v5);
      v8 = CChoreoScene::AllocEvent(v5);
      v9 = v8;
      if ( v6 != 0 && v7 != 0 && v8 != 0 )
      {
        CChoreoActor::SetName(v6, "!self");
        CChoreoActor::SetActive(v6, 1);
        m_pAsString = "";
        if ( this->m_iszSceneFile.u.m_Id != 0 )
          m_pAsString = this->m_iszSceneFile.u.m_pAsString;
        CChoreoChannel::SetName(v7, m_pAsString);
        CChoreoChannel::SetActor(v7, v6);
        CChoreoActor::AddChannel(v6, v7);
        CChoreoEvent::SetType(v9, SPEAK);
        CChoreoEvent::SetName(v9, soundname);
        CChoreoEvent::SetParameters(v9, soundname);
        CChoreoEvent::SetStartTime(v9, v11);
        CChoreoEvent::SetUsingRelativeTag(v9, 0, 0, 0);
        CChoreoEvent::SetEndTime(v9, v12);
        CChoreoEvent::SnapTimes(v9);
        CChoreoChannel::AddEvent(v7, v9);
        CChoreoEvent::SetChannel(v9, v7);
        CChoreoEvent::SetActor(v9, v6);
        return v5;
      }
      else
      {
        Warning("CSceneEntity::GenerateSceneForSound:  Alloc of actor, channel, or event failed!!!\n");
        (*(v5->_vptr_ICurveDataAccessor + 5))(v5);
        return 0;
      }
    }
    else
    {
      Warning("CSceneEntity::GenerateSceneForSound:  Failed to allocated new scene!!!\n");
      return 0;
    }
  }
}


// CSceneEntity::Activate  (line 491, @0x00000000023a3100, libserver.so)  // inlines: Get, GetInstance, GetSceneManager, String, ToCStr, operator CBaseFlex*
// calls: CBaseEntity::Activate, CSceneManager::AddSceneEntity, CEntityHandle::operator CEntityInstance*, CSceneEntity::GenerateSceneForSound
// globals: g_pSceneManager
void __fastcall CSceneEntity::Activate(CSceneEntity *const this, ActivateType_t activateType)
{
  const char *m_pAsString; // r13
  CBaseFlex *v5; // rax

  if ( this->m_bGenerated && this->m_pScene == 0 )
  {
    m_pAsString = "";
    if ( this->m_iszSoundName.u.m_Id != 0 )
      m_pAsString = this->m_iszSoundName.u.m_pAsString;
    v5 = CEntityHandle::operator CEntityInstance *(&this->m_hActor);
    this->m_pScene = CSceneEntity::GenerateSceneForSound(this, v5, m_pAsString);
  }
  CBaseEntity::Activate(this, activateType);
  if ( g_pSceneManager != 0 )
    CSceneManager::AddSceneEntity(g_pSceneManager, this);
}


// CSceneEntity::GetSoundSystemLatency  (line 510, @0x0000000002388c20, libserver.so)  // inlines: GetFloat
// globals: CSceneEntity::m_pcvSndMixahead
float __fastcall CSceneEntity::GetSoundSystemLatency(CSceneEntity *const this)
{
  if ( CSceneEntity::m_pcvSndMixahead != 0 )
    return CSceneEntity::m_pcvSndMixahead->m_pParent->m_Value.m_fValue;
  else
    return 0.1;
}


// CSceneEntity::PrecacheScene  (line 525, @0x0000000002398390, libserver.so)
// calls: CChoreoScene::IsSubScene, CChoreoScene::GetNumEvents, CChoreoScene::GetEvent, CChoreoEvent::GetType, CChoreoEvent::GetParameters, CChoreoEvent::GetCloseCaptionType, CChoreoEvent::GetNumSlaves, CChoreoEvent::GetPlaybackCloseCaptionToken, CChoreoEvent::GetSubScene, CSceneEntity::LoadScene, CChoreoScene::SetSubScene, CChoreoEvent::SetSubScene (13 total)
// callers: CSceneEntity::ScriptLoadSceneFromString
void __fastcall CSceneEntity::PrecacheScene(CSceneEntity *const this, CChoreoScene *scene)
{
  int v4; // ebx
  CChoreoEvent *Event; // rax
  CChoreoEvent *v6; // r12
  EventNameMap_t::EVENTTYPE Type; // eax
  const char *Parameters; // rax
  CChoreoScene *subscene; // [rsp+0h] [rbp-90h]
  IChoreoEventCallback *pCallback; // [rsp+8h] [rbp-88h]
  char tok[72]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp-38h]

  v4 = 0;
  v12 = __readfsqword(0x28u);
  pCallback = &this->IChoreoEventCallback;
  while ( v4 < CChoreoScene::GetNumEvents(scene) )
  {
    Event = CChoreoScene::GetEvent(scene, v4);
    v6 = Event;
    if ( Event != 0 )
    {
      Type = CChoreoEvent::GetType(Event);
      if ( Type == SPEAK )
      {
        CChoreoEvent::GetParameters(v6);
        if ( CChoreoEvent::GetCloseCaptionType(v6) == CC_MASTER && CChoreoEvent::GetNumSlaves(v6) > 0 )
          CChoreoEvent::GetPlaybackCloseCaptionToken(v6, tok, 64);
      }
      else if ( Type == SUBSCENE && !CChoreoScene::IsSubScene(scene) && CChoreoEvent::GetSubScene(v6) == 0 )
      {
        Parameters = CChoreoEvent::GetParameters(v6);
        subscene = CSceneEntity::LoadScene(Parameters, pCallback);
        CChoreoScene::SetSubScene(subscene, 1);
        CChoreoEvent::SetSubScene(v6, subscene);
        CSceneEntity::PrecacheScene(this, subscene);
      }
    }
    ++v4;
  }
}


// CSceneEntity::Precache  (line 587, @0x00000000023a88b0, libserver.so)  // inlines: Precache, String, ToCStr
// calls: CEntityInstance::Precache, PrecacheInstancedScene
void __fastcall CSceneEntity::Precache(CSceneEntity *const this, const CEntityPrecacheContext *pContext)
{
  const char *m_pAsString; // rdi

  CEntityInstance::Precache(this, pContext);
  if ( !this->m_bGenerated && this->m_iszSceneFile.u.m_Id != 0 )
  {
    if ( this->m_iszResumeSceneFile.u.m_Id == 0
      || (PrecacheInstancedScene(this->m_iszResumeSceneFile.u.m_pAsString, 0), this->m_iszSceneFile.u.m_Id != 0) )
    {
      m_pAsString = this->m_iszSceneFile.u.m_pAsString;
    }
    else
    {
      m_pAsString = "";
    }
    PrecacheInstancedScene(m_pAsString, 0);
  }
}


// CSceneEntity::GenerateSoundScene  (line 609, @0x0000000002388c50, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: MakeEntitySystemString
// callers: InstancedAutoGeneratedSoundScene
void __fastcall CSceneEntity::GenerateSoundScene(CSceneEntity *const this, CBaseFlex *pActor, const char *soundname)
{
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx
  UtlSymLargeId_t v8; // [rsp+0h] [rbp-20h]

  this->m_bGenerated = 1;
  MakeEntitySystemString(soundname);
  this->m_iszSoundName.u.m_Id = v8;
  if ( pActor != 0 && (m_pEntity = pActor->m_pEntity) != 0 )
  {
    v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v7 = 0x7FFF;
    else
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hActor.m_Index) = v7 | this->m_hActor.m_Index & 0x8000;
    this->m_hActor.m_Index = (v6 << 15) | this->m_hActor.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hActor.m_Index = -1;
  }
}


// CSceneEntity::HasUnplayedSpeech  (line 620, @0x0000000002388d10, libserver.so)
// calls: CChoreoScene::HasUnplayedSpeech
bool __fastcall CSceneEntity::HasUnplayedSpeech(CSceneEntity *const this)
{
  CChoreoScene *m_pScene; // rdi

  m_pScene = this->m_pScene;
  return m_pScene != 0 && CChoreoScene::HasUnplayedSpeech(m_pScene);
}


// CSceneEntity::HasFlexAnimation  (line 632, @0x0000000002388d40, libserver.so)
// calls: CChoreoScene::HasFlexAnimation
bool __fastcall CSceneEntity::HasFlexAnimation(CSceneEntity *const this)
{
  CChoreoScene *m_pScene; // rdi

  m_pScene = this->m_pScene;
  return m_pScene != 0 && CChoreoScene::HasFlexAnimation(m_pScene);
}


// CSceneEntity::SetBackground  (line 646, @0x0000000002388d70, libserver.so)
// calls: CChoreoScene::SetBackground
void __fastcall CSceneEntity::SetBackground(CSceneEntity *const this, bool bIsBackground)
{
  CChoreoScene *m_pScene; // rdi

  m_pScene = this->m_pScene;
  if ( m_pScene != 0 )
    CChoreoScene::SetBackground(m_pScene, bIsBackground);
}


// CSceneEntity::IsBackground  (line 659, @0x0000000002388da0, libserver.so)
// calls: CChoreoScene::IsBackground
bool __fastcall CSceneEntity::IsBackground(CSceneEntity *const this)
{
  CChoreoScene *m_pScene; // rdi

  m_pScene = this->m_pScene;
  return m_pScene != 0 && CChoreoScene::IsBackground(m_pScene);
}


// CSceneEntity::OnRestore  (line 671, @0x00000000023985f0, libserver.so)  // inlines: NetworkStateChanged, Set, SetChangeInfoSerialNumber, SetCurrentTime, SetRestoring, StateChanged, String, ToCStr, operator=<bool>, operator=<int>
// calls: CBaseEntity::OnRestore, CBaseFlex::StartChoreoScene, CChoreoScene::GetNumActors, CChoreoScene::ResetSimulation, CChoreoScene::SetTime, CSceneEntity::SetCurrentTime, CSceneEntity::LoadScene, CSceneEntity::ShouldNetwork
// callers: CInstancedSceneEntity::OnRestore
void __fastcall CSceneEntity::OnRestore(CSceneEntity *const this)
{
  float m_fPitch; // xmm0_4
  CChoreoScene *m_pScene; // rdi
  int i; // r12d
  __int64 v5; // rax
  CBaseFlex *v6; // r13
  float v7; // xmm2_4
  bool m_Value; // r12
  float v9; // xmm1_4
  bool v10; // si
  CChoreoScene *v11; // rax
  CChoreoScene *v12; // rax
  CEventRegister *m_pTimerEvent; // rax
  const char *m_pAsString; // rdi
  CChoreoScene *Scene; // rax
  const char *v16; // rdx
  unsigned __int16 v17; // r12

  CBaseEntity::OnRestore(this);
  m_fPitch = this->m_fPitch;
  if ( m_fPitch < 0.25 || m_fPitch > 2.5 )
    this->m_fPitch = 1.0;
  if ( this->m_bIsPlayingBack.m_Value )
  {
    m_pScene = this->m_pScene;
    if ( m_pScene == 0 )
    {
      m_pAsString = "";
      if ( this->m_iszSceneFile.u.m_Id != 0 )
        m_pAsString = this->m_iszSceneFile.u.m_pAsString;
      Scene = CSceneEntity::LoadScene(m_pAsString, &this->IChoreoEventCallback);
      this->m_pScene = Scene;
      if ( Scene == 0 )
      {
        this->m_bSceneMissing = 1;
        return;
      }
      (*(this->_vptr_IHandleEntity + 211))(this);
      if ( CSceneEntity::ShouldNetwork(this) )
      {
        v16 = "";
        if ( this->m_iszSceneFile.u.m_Id != 0 )
          v16 = this->m_iszSceneFile.u.m_pAsString;
        v17 = (*(g_pStringTableClientSideChoreoScenes->_vptr_INetworkStringTable + 8))(
                g_pStringTableClientSideChoreoScenes,
                1,
                v16,
                0xFFFFFFFFLL,
                0);
        if ( v17 != this->m_nSceneStringIndex.m_Value )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1016, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_nSceneStringIndex.m_Value = v17;
        }
      }
      (*(this->_vptr_IHandleEntity + 64))(this);
      m_pScene = this->m_pScene;
    }
    this->m_bSceneMissing = 0;
    for ( i = 0; i < CChoreoScene::GetNumActors(m_pScene); ++i )
    {
      v5 = (*(this->_vptr_IHandleEntity + 253))(this, i);
      v6 = v5;
      if ( v5 != 0 && (*(*v5 + 1176LL))(v5) != 0 )
        CBaseFlex::StartChoreoScene(v6, this->m_pScene);
      m_pScene = this->m_pScene;
    }
    m_Value = this->m_bPaused.m_Value;
    if ( m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 905, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bPaused.m_Value = 0;
    }
    CChoreoScene::ResetSimulation(this->m_pScene, 1, this->m_flCurrentTime, v7);
    CChoreoScene::SetTime(this->m_pScene, v9);
    CSceneEntity::SetCurrentTime(this, this->m_flCurrentTime, v10);
    v11 = this->m_pScene;
    this->m_bRestoring = 1;
    if ( v11 != 0 )
      *(v11 + 356) |= 0x10u;
    (*(this->_vptr_IHandleEntity + 213))(this, 0.001);
    v12 = this->m_pScene;
    this->m_bRestoring = 0;
    if ( v12 != 0 )
      *(v12 + 356) &= ~0x10u;
    if ( m_Value )
      (*(this->_vptr_IHandleEntity + 220))(this);
    m_pTimerEvent = this->m_NetworkTransmitComponent.m_pTimerEvent;
    if ( m_pTimerEvent != 0 && m_pTimerEvent->m_bRegistered )
    {
      this->m_NetworkTransmitComponent.m_bPendingStateChange = 1;
    }
    else
    {
      this->m_NetworkTransmitComponent.m_nStateFlags |= 3u;
      this->m_NetworkTransmitComponent.m_Accessor.m_iChangeInfoSerialNumber = 0;
    }
  }
}


// CSceneEntity::Spawn  (line 766, @0x0000000002381740, libserver.so)
// calls: CPointEntity::Spawn
void __fastcall CSceneEntity::Spawn(CSceneEntity *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
}


// CSceneEntity::PauseThink  (line 771, @0x000000000238d860, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, operator CEntityInstance*, operator!
// calls: LocalScene_Printf, CChoreoScene::CheckEventCompletion
// strings: "%s : Automatically resuming playback\n", "%s : Automatically canceling playback\n", "%s : Unknown action %i, automatically resuming playback\n", "%s : PauseThink canceling playback\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSceneEntity::PauseThink(CSceneEntity *const this)
{
  CChoreoScene *m_pScene; // rdi
  float m_flAutomationDelay; // xmm1_4
  float v4; // xmm0_4
  int m_nAutomatedAction; // edx
  const char *m_pAsString; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  bool v10; // zf
  const char *v11; // rsi

  m_pScene = this->m_pScene;
  if ( m_pScene == 0 || this->m_bInterrupted )
    return;
  if ( this->m_bPausedViaInput )
  {
    if ( !this->m_bWaitingForResumeScene )
      return;
    m_Index = this->m_hWaitingForThisResumeScene.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hWaitingForThisResumeScene.m_Index) >> 9)
                                                          & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[this->m_hWaitingForThisResumeScene.m_Index & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
          return;
      }
    }
    v10 = !this->m_bAutomated;
    this->m_bWaitingForResumeScene = 0;
    if ( !v10 )
      goto LABEL_5;
  }
  else if ( this->m_bAutomated )
  {
LABEL_5:
    m_flAutomationDelay = this->m_flAutomationDelay;
    v4 = this->m_flAutomationTime + gpGlobals->frametime;
    this->m_flAutomationTime = v4;
    if ( m_flAutomationDelay <= 0.0 || m_flAutomationDelay <= v4 )
    {
      m_nAutomatedAction = this->m_nAutomatedAction;
      m_pAsString = "";
      if ( m_nAutomatedAction != 1 )
      {
        if ( m_nAutomatedAction == 2 )
        {
          if ( this->m_iszSceneFile.u.m_Id != 0 )
            m_pAsString = this->m_iszSceneFile.u.m_pAsString;
          LocalScene_Printf("%s : Automatically resuming playback\n", m_pAsString);
          (*(this->_vptr_IHandleEntity + 221))(this);
          goto LABEL_16;
        }
        if ( this->m_iszSceneFile.u.m_Id != 0 )
          m_pAsString = this->m_iszSceneFile.u.m_pAsString;
        LocalScene_Printf("%s : Unknown action %i, automatically resuming playback\n", m_pAsString, m_nAutomatedAction);
        goto LABEL_26;
      }
      if ( this->m_iszSceneFile.u.m_Id != 0 )
        m_pAsString = this->m_iszSceneFile.u.m_pAsString;
      LocalScene_Printf("%s : Automatically canceling playback\n", m_pAsString);
      goto LABEL_15;
    }
    return;
  }
  if ( CChoreoScene::CheckEventCompletion(m_pScene) )
  {
    if ( this->m_nAutomatedAction != 1 )
    {
LABEL_26:
      (*(this->_vptr_IHandleEntity + 221))(this);
      goto LABEL_16;
    }
    v11 = "";
    if ( this->m_iszSceneFile.u.m_Id != 0 )
      v11 = this->m_iszSceneFile.u.m_pAsString;
    LocalScene_Printf("%s : PauseThink canceling playback\n", v11);
LABEL_15:
    (*(this->_vptr_IHandleEntity + 222))(this);
LABEL_16:
    this->m_bAutomated = 0;
    this->m_nAutomatedAction = 0;
    this->m_flAutomationTime = 0.0;
    this->m_flAutomationDelay = 0.0;
    this->m_bPausedViaInput = 0;
  }
}


// CSceneEntity::DispatchPauseScene  (line 866, @0x0000000002381cd0, libserver.so)  // inlines: atof
// calls: V_ParseToken, V_stricmp_fast, strtod, __stack_chk_fail
// callers: CSceneEntity::DispatchPauseScene
// strings: "automate", "Cancel"
void __fastcall CSceneEntity::DispatchPauseScene(CSceneEntity *const this, CChoreoScene *scene, const char *parameters)
{
  __int64 v5; // r13
  __int64 v6; // r13
  float v7; // xmm0_4
  char token[1032]; // [rsp+0h] [rbp-430h] BYREF
  unsigned __int64 v9; // [rsp+408h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  (*(this->_vptr_IHandleEntity + 220))(this, scene, parameters);
  this->m_bPausedViaInput = 0;
  this->m_bAutomated = 0;
  this->m_nAutomatedAction = 0;
  this->m_flAutomationDelay = 0.0;
  this->m_flAutomationTime = 0.0;
  v5 = V_ParseToken(scene, token, 1024, 0, 0);
  if ( V_stricmp_fast(token, "automate") == 0 )
  {
    v6 = V_ParseToken(v5, token, 1024, 0, 0);
    if ( V_stricmp_fast(token, "Cancel") != 0 )
    {
      if ( V_stricmp_fast(token, "Resume") != 0 )
      {
        if ( this->m_nAutomatedAction == 0 )
          return;
      }
      else
      {
        this->m_nAutomatedAction = 2;
      }
    }
    else
    {
      this->m_nAutomatedAction = 1;
    }
    V_ParseToken(v6, token, 1024, 0, 0);
    v7 = strtod(token, 0);
    this->m_flAutomationDelay = v7;
    if ( v7 > 0.0 )
    {
      this->m_bAutomated = 1;
      this->m_flAutomationTime = 0.0;
    }
  }
}


// CSceneEntity::DispatchPauseScene  (line 866, @0x0000000002381e50, libserver.so)
// calls: CSceneEntity::DispatchPauseScene
void __fastcall CSceneEntity::DispatchPauseScene(CSceneEntity *const this, CChoreoScene *scene, const char *parameters)
{
  if ( !this->m_bRestoring )
    CSceneEntity::DispatchPauseScene(this, parameters, parameters);
}


// CSceneEntity::DispatchProcessLoop  (line 919, @0x0000000002383400, libserver.so)  // inlines: SetCurrentTime, atof
// calls: CChoreoEvent::GetParameters, strtod, CChoreoEvent::GetLoopCount, CChoreoEvent::GetNumLoopsRemaining, CChoreoEvent::SetNumLoopsRemaining, CChoreoScene::LoopToTime, CSceneEntity::SetCurrentTime
void __fastcall CSceneEntity::DispatchProcessLoop(CSceneEntity *const this, CChoreoScene *scene, CChoreoEvent *event)
{
  const char *Parameters; // rax
  __m128d v7; // xmm0
  float v8; // r14d
  float v9; // xmm1_4
  int NumLoopsRemaining; // eax
  bool v11; // si

  if ( !this->m_bRestoring )
  {
    Parameters = CChoreoEvent::GetParameters(event);
    v7.m128d_f64[0] = strtod(Parameters, 0);
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_cvtpd_ps(_mm_movedup_pd(v7))));
    if ( CChoreoEvent::GetLoopCount(event) != -1 )
    {
      NumLoopsRemaining = CChoreoEvent::GetNumLoopsRemaining(event);
      if ( NumLoopsRemaining <= 0 )
        return;
      CChoreoEvent::SetNumLoopsRemaining(event, NumLoopsRemaining - 1);
    }
    CChoreoScene::LoopToTime(scene, v9);
    this->m_flCurrentTime = v8;
    CSceneEntity::SetCurrentTime(this, v8, v11);
  }
}


// CSceneEntity::DispatchStopPoint  (line 957, @0x000000000239dad0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, String, ToCStr, ~CVariantBase
// calls: Warning, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "Scene '%s' with two stop point events!\n"
void __fastcall CSceneEntity::DispatchStopPoint(CSceneEntity *const this, CChoreoScene *scene, const char *parameters)
{
  const char *m_pAsString; // rsi
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  if ( this->m_bCompletedEarly )
  {
    m_pAsString = "";
    if ( this->m_iszSceneFile.u.m_Id != 0 )
      m_pAsString = this->m_iszSceneFile.u.m_pAsString;
    Warning("Scene '%s' with two stop point events!\n", m_pAsString);
  }
  else
  {
    this->m_bCompletedEarly = 1;
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnCompletion, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
}


// CSceneEntity::IsInterruptable  (line 974, @0x0000000002388dd0, libserver.so)
bool __fastcall CSceneEntity::IsInterruptable(CSceneEntity *const this)
{
  return this->m_nInterruptCount > 0;
}


// CSceneEntity::DispatchStartInterrupt  (line 985, @0x000000000238d370, libserver.so)  // inlines: String, ToCStr
// calls: LocalScene_Printf
// strings: "%s : canceled via interrupt\n"
void __fastcall CSceneEntity::DispatchStartInterrupt(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  bool v4; // zf
  const char *m_pAsString; // rsi

  if ( !this->m_bRestoring )
  {
    if ( this->m_bCancelAtNextInterrupt )
    {
      v4 = this->m_iszSceneFile.u.m_Id == 0;
      this->m_bCancelAtNextInterrupt = 0;
      m_pAsString = "";
      if ( !v4 )
        m_pAsString = this->m_iszSceneFile.u.m_pAsString;
      LocalScene_Printf("%s : canceled via interrupt\n", m_pAsString);
      (*(this->_vptr_IHandleEntity + 222))(this);
    }
    else
    {
      ++this->m_nInterruptCount;
    }
  }
}


// CSceneEntity::DispatchEndInterrupt  (line 1009, @0x0000000002381c20, libserver.so)
void __fastcall CSceneEntity::DispatchEndInterrupt(CSceneEntity *const this, CChoreoScene *scene, CChoreoEvent *event)
{
  int v3; // eax

  if ( !this->m_bRestoring )
  {
    v3 = 0;
    if ( this->m_nInterruptCount - 1 >= 0 )
      v3 = this->m_nInterruptCount - 1;
    this->m_nInterruptCount = v3;
  }
}


// CSceneEntity::DispatchStartExpression  (line 1028, @0x0000000002381750, libserver.so)
// calls: CBaseFlex::AddSceneEvent
void __fastcall CSceneEntity::DispatchStartExpression(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  CBaseFlex::AddSceneEvent(actor, scene, event, 0, this);
}


// CSceneEntity::DispatchEndExpression  (line 1038, @0x0000000002381810, libserver.so)
// calls: CBaseFlex::RemoveSceneEvent
void __fastcall CSceneEntity::DispatchEndExpression(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  CBaseFlex::RemoveSceneEvent(actor, scene, event, 0, 0);
}


// CSceneEntity::DispatchStartFlexAnimation  (line 1048, @0x0000000002381770, libserver.so)
// calls: CBaseFlex::AddSceneEvent
void __fastcall CSceneEntity::DispatchStartFlexAnimation(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  CBaseFlex::AddSceneEvent(actor, scene, event, 0, this);
}


// CSceneEntity::DispatchEndFlexAnimation  (line 1058, @0x0000000002381830, libserver.so)
// calls: CBaseFlex::RemoveSceneEvent
void __fastcall CSceneEntity::DispatchEndFlexAnimation(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  CBaseFlex::RemoveSceneEvent(actor, scene, event, 0, 0);
}


// CSceneEntity::DispatchStartGesture  (line 1068, @0x00000000023818f0, libserver.so)
// calls: CChoreoEvent::GetName, V_stricmp_fast, CBaseFlex::AddSceneEvent
void __fastcall CSceneEntity::DispatchStartGesture(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  const char *Name; // rax

  Name = CChoreoEvent::GetName(event);
  if ( V_stricmp_fast(Name, "NULL") != 0 )
    CBaseFlex::AddSceneEvent(actor, scene, event, 0, this);
}


// CSceneEntity::DispatchEndGesture  (line 1083, @0x0000000002381e70, libserver.so)
// calls: CChoreoEvent::GetName, V_stricmp_fast, CBaseFlex::RemoveSceneEvent
void __fastcall CSceneEntity::DispatchEndGesture(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  const char *Name; // rax

  Name = CChoreoEvent::GetName(event);
  if ( V_stricmp_fast(Name, "NULL") != 0 )
    CBaseFlex::RemoveSceneEvent(actor, scene, event, this->m_bRestoring, 0);
}


// CSceneEntity::DispatchStartGeneric  (line 1097, @0x0000000002381950, libserver.so)
// calls: CChoreoEvent::GetParameters2, CBaseFlex::AddSceneEvent
void __fastcall CSceneEntity::DispatchStartGeneric(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  __int64 (__fastcall *v8)(CSceneEntity *const, const char *, _QWORD, _QWORD, _QWORD); // r15
  const char *Parameters2; // rax
  CBaseEntity *v10; // rax

  v8 = *(this->_vptr_IHandleEntity + 256);
  Parameters2 = CChoreoEvent::GetParameters2(event);
  v10 = v8(this, Parameters2, 0, 0, 0);
  CBaseFlex::AddSceneEvent(actor, scene, event, v10, this);
}


// CSceneEntity::DispatchEndGeneric  (line 1109, @0x0000000002381850, libserver.so)
// calls: CBaseFlex::RemoveSceneEvent
void __fastcall CSceneEntity::DispatchEndGeneric(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  CBaseFlex::RemoveSceneEvent(actor, scene, event, this->m_bRestoring, 0);
}


// CSceneEntity::DispatchStartLookAt  (line 1119, @0x0000000002381790, libserver.so)
// calls: CBaseFlex::AddSceneEvent
void __fastcall CSceneEntity::DispatchStartLookAt(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CBaseEntity *actor2,
        CChoreoEvent *event)
{
  CBaseFlex::AddSceneEvent(actor, scene, event, actor2, this);
}


// CSceneEntity::DispatchEndLookAt  (line 1125, @0x0000000002381870, libserver.so)
// calls: CBaseFlex::RemoveSceneEvent
void __fastcall CSceneEntity::DispatchEndLookAt(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  CBaseFlex::RemoveSceneEvent(actor, scene, event, this->m_bRestoring, 0);
}


// CSceneEntity::DispatchStartMoveTo  (line 1138, @0x00000000023817b0, libserver.so)
// calls: CBaseFlex::AddSceneEvent
void __fastcall CSceneEntity::DispatchStartMoveTo(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CBaseEntity *actor2,
        CChoreoEvent *event)
{
  CBaseFlex::AddSceneEvent(actor, scene, event, actor2, this);
}


// CSceneEntity::DispatchEndMoveTo  (line 1144, @0x0000000002381890, libserver.so)
// calls: CBaseFlex::RemoveSceneEvent
void __fastcall CSceneEntity::DispatchEndMoveTo(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  CBaseFlex::RemoveSceneEvent(actor, scene, event, this->m_bRestoring, 0);
}


// AttenuateCaption  (line 1156, @0x0000000002388df0, libserver.so)  // inlines: GetFloat, LengthSqr, VectorSubtract, operator-
// callers: CSceneEntity::DispatchStartSpeak
bool __fastcall AttenuateCaption(
        const char *token,
        const Vector *const listener,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const soundorigins)
{
  float m_fValue; // xmm6_4
  Vector *m_pMemory; // rax
  float v5; // xmm6_4
  __int64 v6; // rdx

  m_fValue = scene_maxcaptionradius.m_pParent->m_Value.m_fValue;
  if ( m_fValue > 0.0 && soundorigins->m_Size > 0 )
  {
    m_pMemory = soundorigins->m_Memory.m_pMemory;
    v5 = m_fValue * m_fValue;
    v6 = &m_pMemory[(soundorigins->m_Size - 1) + 1];
    while ( v5 < ((((m_pMemory->x - listener->x) * (m_pMemory->x - listener->x))
                 + ((m_pMemory->y - listener->y) * (m_pMemory->y - listener->y)))
                + ((m_pMemory->z - listener->z) * (m_pMemory->z - listener->z))) )
    {
      if ( ++m_pMemory == v6 )
        return 1;
    }
  }
  return 0;
}


// CSceneEntity::GetSoundNameForPlayer  (line 1194, @0x0000000002388e80, libserver.so)  // inlines: GetBool, GetInt, V_strncpy<long unsigned int>, entindex
// calls: CChoreoEvent::GetCloseCaptionType, CChoreoEvent::GetPlaybackCloseCaptionToken, CChoreoEvent::GetParameters, _V_strncpy, CEntityInstance::GetEntityIndex, V_atoi, __stack_chk_fail
// callers: CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList, CSceneEntity::DispatchStartSpeak
// strings: "english"
bool __fastcall CSceneEntity::GetSoundNameForPlayer(
        CSceneEntity *const this,
        CChoreoEvent *event,
        CBasePlayer *player,
        char *buf,
        size_t buflen)
{
  unsigned int v6; // r13d
  const char *Parameters; // rax
  __int64 (__fastcall *v10)(IVEngineServer2 *, _QWORD, const char *); // r15
  CEntityIndex v11; // eax
  _BYTE *v12; // rax
  bool result; // al
  bool validtoken; // [rsp+Bh] [rbp-85h]
  char ismasterevent; // [rsp+Ch] [rbp-84h]
  char tok[72]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-38h]

  v6 = buflen;
  tok[0] = 0;
  v17 = __readfsqword(0x28u);
  if ( CChoreoEvent::GetCloseCaptionType(event) == CC_SLAVE || CChoreoEvent::GetCloseCaptionType(event) == CC_DISABLED )
  {
    validtoken = 0;
    ismasterevent = 0;
  }
  else
  {
    ismasterevent = 1;
    validtoken = CChoreoEvent::GetPlaybackCloseCaptionToken(event, tok, 64);
  }
  Parameters = CChoreoEvent::GetParameters(event);
  _V_strncpy(buf, Parameters, v6);
  v10 = *(*engine + 384LL);
  v11.m_Data = CEntityInstance::GetEntityIndex(player).m_Data;
  v12 = v10(engine, v11.m_Data, "english");
  if ( v12 != 0 && *v12 != 0 && V_atoi(v12) != 1 || (result = 1, scene_forcecombined.m_pParent->m_Value.m_nValue != 0) )
  {
    result = 0;
    if ( ismasterevent != 0 )
    {
      result = 1;
      if ( validtoken )
      {
        _V_strncpy(buf, tok, v6);
        return 1;
      }
    }
  }
  return result;
}


// CSceneEntity::DispatchStartSpeak  (line 1271, @0x00000000023a6ab0, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CEntityIndex, CEventPosterBase, CNetMessagePB, CPASAttenuationFilter, CPASFilter, CReliableBroadcastRecipientFilter, CSingleUserRecipientFilter, CSosFieldData, CSosFieldDataFloat, CUserMessageCloseCaption_t, CUserMessagePB, CUtlMemory, CUtlVector, CUtlVectorBase, CanEmitCaption, ClearData, CopyData, EmitSound_t, Get, GetCaptionHash, GetDataPtr, GetViewEntity, Init, SetSoundEventParam, SetSoundName, SoundEventGuid_t, String, ToCStr, V_memcpy, V_strncat<long unsigned int>, V_strncpy<long unsigned int>, curtime, entindex, memcpy, set_duration, set_ent_index, set_from_player, set_has_ent_index, set_has_from_player, set_has_hash, set_hash, ~CBroadcastRecipientFilter, ~CPASAttenuationFilter, ~CPASFilter, ~CReliableBroadcastRecipientFilter, ~CSingleUserRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat, ~CUtlVector, ~EmitSound_t
// calls: CBaseEntity::GetModelName, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CChoreoEvent::GetStartTime, CChoreoEvent::GetSoundStartDelay, CChoreoEvent::GetParameters, CSceneManager::QueueRestoredSound, CRecipientFilter::~CRecipientFilter, CRecipientFilter::RemoveRecipientByPlayerIndex, CGlobalVarsBase::curtime, CChoreoScene::ShouldIgnorePhonemes (47 total)
// strings: "%s : actor %d: %s : %s emitting sound %s : gender '%s'\n", "_male", "_female"
// globals: g_pSceneManager, speechListIndex, speechListSounds, g_SoundEmitterSystem, g_CaptionRepeats
// local variable allocation has failed, the output may be wrong!
void __fastcall CSceneEntity::DispatchStartSpeak(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *choreoEvent,
        soundlevel_t iSoundlevel)
{
  const char *v7; // rax
  int v8; // xmm1_4
  float v9; // ebx
  float v10; // xmm1_4
  int v11; // r15d
  int v12; // r14d
  int32 v13; // r12d
  unsigned int v14; // ebx
  float m_flCurrentTime; // ebx
  const char *Parameters; // rax
  __m128i v17; // xmm5
  float v18; // xmm0_4
  float v19; // xmm1_4
  unsigned int v20; // ebx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  __int64 v22; // rax
  float v23; // xmm0_4
  const char *Filename; // rsi
  float m_fPitch; // xmm0_4
  int v26; // eax
  const char *v27; // r14
  CChoreoActor *v28; // rax
  const char *Name; // r12
  CEntityIndex v30; // eax
  const char *m_pAsString; // rsi
  CEntityIndex v32; // eax
  SndOpEventGuid_t v33; // r14
  double v34; // xmm0_8
  double v35; // xmm1_8
  float *p_pMem; // rax
  CEntityIndex v37; // eax
  CBasePlayer *v38; // r12
  int v39; // r14d
  CGlobalVars *v40; // r12
  __m128i v41; // xmm0
  float v42; // r13d
  __m128i v43; // xmm0
  char v44; // r14
  bool CaptionHash; // al
  CEntityIndex v46; // eax
  int v47; // ebx
  CEntityIndex v48; // eax
  CBasePlayer *v49; // rax
  CBasePlayer *v50; // r13
  const CBaseEntity *HandleEntity; // rax
  const Vector *AbsOrigin; // rax
  CSoundOpGameSystem *v53; // [rsp+8h] [rbp-708h]
  float flDelay; // [rsp+14h] [rbp-6FCh]
  const char *v56; // [rsp+20h] [rbp-6F0h]
  gender_t gender; // [rsp+3Bh] [rbp-6D5h]
  int v59; // [rsp+3Ch] [rbp-6D4h]
  float duration; // [rsp+50h] [rbp-6C0h]
  float durationa; // [rsp+50h] [rbp-6C0h]
  unsigned int hash; // [rsp+6Ch] [rbp-6A4h] BYREF
  __int128 CloseCaption_poster; // [rsp+70h] [rbp-6A0h] OVERLAPPED BYREF
  void *pMem; // [rsp+80h] [rbp-690h] BYREF
  int v67; // [rsp+88h] [rbp-688h]
  unsigned int v68; // [rsp+90h] [rbp-680h]
  float v69; // [rsp+94h] [rbp-67Ch]
  char v70; // [rsp+98h] [rbp-678h]
  int32 m_Data; // [rsp+9Ch] [rbp-674h]
  int v72; // [rsp+A0h] [rbp-670h]
  EmitSound_t es_0; // [rsp+B0h] [rbp-660h] BYREF
  CPASAttenuationFilter filter; // [rsp+110h] [rbp-600h] BYREF
  CRecipientFilter tok; // [rsp+250h] [rbp-4C0h] BYREF
  CRecipientFilter lowercase; // [rsp+390h] [rbp-380h] BYREF
  char lowercase_nogender[520]; // [rsp+4D0h] [rbp-240h] BYREF
  unsigned __int64 v78; // [rsp+6D8h] [rbp-38h]

  v78 = __readfsqword(0x28u);
  if ( actor != 0 )
  {
    CBaseEntity::GetModelName(&es_0, actor);
    v7 = "";
    if ( *&es_0.m_nChannel != 0 )
      v7 = *&es_0.m_nChannel;
    v56 = v7;
    gender = (*(*g_pHostUtils + 88LL))(g_pHostUtils, v7);
    *&es_0.m_nChannel = (*(actor->_vptr_IHandleEntity + 186))(actor);
    LODWORD(es_0.m_pSoundName) = v8;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &es_0);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    if ( iSoundlevel > soundlevel_t::SNDLVL_50dB )
    {
      v17 = _mm_cvtsi32_si128(0x41A00000u);
      *v17.m128i_i32 = *v17.m128i_i32 / (iSoundlevel - 50);
      v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
    }
    else
    {
      v9 = 4.0;
      if ( iSoundlevel == soundlevel_t::SNDLVL_NONE )
        v9 = 0.0;
    }
    *&es_0.m_nChannel = (*(actor->_vptr_IHandleEntity + 186))(actor);
    *&es_0.m_pSoundName = v10;
    CPASAttenuationFilter::Filter(&filter, &es_0, v9, v10);
    if ( this->m_pRecipientFilter != 0 )
    {
      v11 = (*(filter._vptr_IRecipientFilter + 5))(&filter) - 1;
      v12 = (*(this->m_pRecipientFilter->_vptr_IRecipientFilter + 5))(this->m_pRecipientFilter);
      if ( v11 >= 0 )
      {
        do
        {
          while ( 1 )
          {
            v13 = (*(filter._vptr_IRecipientFilter + 6))(&filter, v11);
            if ( v12 > 0 )
              break;
LABEL_20:
            CRecipientFilter::RemoveRecipientByPlayerIndex(&filter, v13);
            if ( --v11 == -1 )
              goto LABEL_14;
          }
          v14 = 0;
          while ( (*(this->m_pRecipientFilter->_vptr_IRecipientFilter + 6))(this->m_pRecipientFilter, v14) != v13 )
          {
            if ( ++v14 == v12 )
              goto LABEL_20;
          }
          --v11;
        }
        while ( v11 != -1 );
      }
    }
LABEL_14:
    m_flCurrentTime = this->m_flCurrentTime;
    duration = m_flCurrentTime - CChoreoEvent::GetStartTime(choreoEvent);
    if ( CChoreoEvent::GetSoundStartDelay(choreoEvent) == 0.0 )
      flDelay = 0.0;
    else
      flDelay = CChoreoEvent::GetSoundStartDelay(choreoEvent);
    if ( this->m_bRestoring )
    {
      Parameters = CChoreoEvent::GetParameters(choreoEvent);
      CSceneManager::QueueRestoredSound(g_pSceneManager, actor, Parameters, iSoundlevel, duration);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
      return;
    }
    v18 = CGlobalVarsBase::curtime(gpGlobals, 0);
    v19 = 0.0;
    es_0.m_pSoundName = 0;
    es_0.m_flVolume = 1.0;
    es_0.m_nFlags = 0;
    es_0.m_nPitch = 100;
    es_0.m_SoundLevel = iSoundlevel;
    es_0.m_pOrigin = 0;
    es_0.m_flSoundTime = 0.0;
    es_0.m_pflSoundDuration = 0;
    es_0.m_bEmitCloseCaption = 1;
    es_0.m_bWarnOnMissingCloseCaption = 0;
    es_0.m_bWarnOnDirectWaveReference = 0;
    es_0.m_nSpeakerEntity.m_Data = -1;
    es_0.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&es_0.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    es_0.m_nChannel = 2;
    if ( gpGlobals->maxClients == 1 )
      v19 = v18 - duration;
    es_0.m_flSoundTime = v19;
    if ( CChoreoScene::ShouldIgnorePhonemes(scene) )
      es_0.m_nFlags |= 0x100u;
    es_0.m_bEmitCloseCaption = 0;
    es_0.m_SpeakerGender = gender;
    CRecipientFilter::RemoveSplitScreenPlayers(&filter);
    v59 = (*(filter._vptr_IRecipientFilter + 5))(&filter);
    if ( v59 > 0 )
    {
      v20 = 0;
      while ( 1 )
      {
        v37.m_Data = (*(filter._vptr_IRecipientFilter + 6))(&filter, v20);
        v38 = UTIL_PlayerByIndex(v37);
        if ( v38 != 0 )
        {
          CRecipientFilter::CRecipientFilter(&tok);
          tok._vptr_IRecipientFilter = &off_3FCB0D0;
          CRecipientFilter::AddRecipient(&tok, v38);
          if ( CSceneEntity::GetSoundNameForPlayer(this, choreoEvent, v38, lowercase_nogender, 0x200u) )
            break;
LABEL_52:
          tok._vptr_IRecipientFilter = &off_3FCB0D0;
          CRecipientFilter::~CRecipientFilter(&tok);
        }
        if ( ++v20 == v59 )
          goto LABEL_64;
      }
      v39 = speechListIndex;
      es_0.m_pSoundName = lowercase_nogender;
      v40 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( gpGlobals->m_bEnableAssertions
          || gpGlobals->m_bInSimulation
          || (m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc) == 0 )
        {
          v22 = speechListIndex;
        }
        else
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v22 = speechListIndex;
        }
        v23 = v40->m_flCurrentTime;
      }
      else
      {
        v22 = speechListIndex;
        v23 = 0.0;
      }
      speechListSounds[v39].time = v23;
      _V_strncpy(speechListSounds[v22].name, lowercase_nogender, 512);
      if ( scene != 0 )
        Filename = CChoreoScene::GetFilename(scene);
      else
        Filename = "";
      _V_strncpy(speechListSounds[speechListIndex].sceneName, Filename, 128);
      m_fPitch = this->m_fPitch;
      v26 = 0;
      if ( speechListIndex + 1 <= 4 )
        v26 = speechListIndex + 1;
      speechListIndex = v26;
      if ( m_fPitch != 1.0 )
      {
        if ( es_0.m_nPitch != 0 )
          es_0.m_nPitch = (es_0.m_nPitch * m_fPitch);
        else
          es_0.m_nPitch = (m_fPitch * 100.0);
        es_0.m_nFlags |= 2u;
      }
      v27 = (*(*g_pHostUtils + 120LL))(g_pHostUtils, gender);
      v28 = CChoreoEvent::GetActor(choreoEvent);
      Name = CChoreoActor::GetName(v28);
      v30.m_Data = CEntityInstance::GetEntityIndex(actor).m_Data;
      m_pAsString = "";
      if ( this->m_iszSceneFile.u.m_Id != 0 )
        m_pAsString = this->m_iszSceneFile.u.m_pAsString;
      LocalScene_Printf(
        "%s : actor %d: %s : %s emitting sound %s : gender '%s'\n",
        m_pAsString,
        v30.m_Data,
        Name,
        v56,
        lowercase_nogender,
        v27);
      v32.m_Data = CEntityInstance::GetEntityIndex(actor).m_Data;
      v33 = CBaseEntity::EmitSound(&tok, v32, &es_0);
      if ( v33.m_nGuid.m_Data == 0 || flDelay == 0.0 )
      {
LABEL_51:
        CBaseFlex::AddSceneEvent(actor, scene, choreoEvent, 0, this);
        goto LABEL_52;
      }
      LOBYTE(CloseCaption_poster) = -1;
      DWORD2(CloseCaption_poster) = 0;
      pMem = 0;
      DWORD1(CloseCaption_poster) = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8, v34, v35, flDelay, 0.0);
      LOBYTE(CloseCaption_poster) = 8;
      if ( DWORD2(CloseCaption_poster) <= 3 )
      {
        DWORD2(CloseCaption_poster) = 4;
      }
      else if ( DWORD2(CloseCaption_poster) > 8 )
      {
        p_pMem = pMem;
        if ( pMem == 0 )
        {
LABEL_48:
          v53 = g_pSoundOpGameSystem;
          CRecipientFilter::CRecipientFilter(&lowercase);
          lowercase._vptr_IRecipientFilter = &off_3FB63F0;
          CRecipientFilter::AddAllPlayers(&lowercase);
          lowercase._vptr_IRecipientFilter = &off_3FCB130;
          CRecipientFilter::MakeReliable(&lowercase);
          CSoundOpGameSystem::SetSoundEventParam(v53, &lowercase, v33, "delay", &CloseCaption_poster, 0, 0);
          lowercase._vptr_IRecipientFilter = &off_3FB63F0;
          CRecipientFilter::~CRecipientFilter(&lowercase);
          if ( DWORD2(CloseCaption_poster) > 8 && pMem != 0 )
            operator delete[](pMem);
          goto LABEL_51;
        }
LABEL_47:
        *p_pMem = flDelay;
        goto LABEL_48;
      }
      p_pMem = &pMem;
      goto LABEL_47;
    }
LABEL_64:
    if ( CChoreoEvent::GetCloseCaptionType(choreoEvent) != CC_MASTER
      || !CChoreoEvent::GetPlaybackCloseCaptionToken(choreoEvent, &tok, 64) )
    {
      goto LABEL_66;
    }
    _V_strncpy(&lowercase, &tok, 256);
    V_strlower_fast(&lowercase);
    CBaseEntity::RemoveRecipientsIfNotCloseCaptioning(&filter);
    if ( !CChoreoEvent::IsSuppressingCaptionAttenuation(choreoEvent)
      && (*(filter._vptr_IRecipientFilter + 5))(&filter) > 0 )
    {
      v47 = (*(filter._vptr_IRecipientFilter + 5))(&filter) - 1;
      if ( v47 >= 0 )
      {
        do
        {
          v48.m_Data = (*(filter._vptr_IRecipientFilter + 6))(&filter, v47);
          v49 = UTIL_PlayerByIndex(v48);
          v50 = v49;
          if ( v49 != 0 )
          {
            *&CloseCaption_poster = *CBaseEntity::GetAbsOrigin(v49);
            if ( iSoundlevel != soundlevel_t::SNDLVL_NONE
              && AttenuateCaption(&lowercase, &CloseCaption_poster, &es_0.m_UtlVecSoundOrigin) )
            {
              HandleEntity = CEntityHandle::GetHandleEntity(&v50->m_hViewEntity.m_Value);
              if ( HandleEntity == 0
                || (AbsOrigin = CBaseEntity::GetAbsOrigin(HandleEntity),
                    AttenuateCaption(&lowercase, AbsOrigin, &es_0.m_UtlVecSoundOrigin)) )
              {
                CRecipientFilter::RemoveRecipient(&filter, v50);
              }
            }
          }
          --v47;
        }
        while ( v47 != -1 );
      }
    }
    if ( (*(filter._vptr_IRecipientFilter + 5))(&filter) <= 0 )
    {
LABEL_66:
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::~CUtlVectorBase(&es_0.m_UtlVecSoundOrigin);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
      return;
    }
    *v41.m128i_i32 = CChoreoEvent::GetLastSlaveEndTime(choreoEvent);
    v42 = COERCE_FLOAT(_mm_cvtsi128_si32(v41));
    *v43.m128i_i64 = (*(choreoEvent->_vptr_CChoreoObjectBase + 8))(choreoEvent);
    durationa = fmaxf(COERCE_FLOAT(_mm_cvtsi128_si32(v43)), v42 - CChoreoEvent::GetStartTime(choreoEvent));
    _V_strncpy(lowercase_nogender, &lowercase, 256);
    if ( gender == gender_t::GENDER_MALE )
    {
      _V_strncat(&lowercase, "_male", 256, 0xFFFFFFFFLL);
    }
    else
    {
      v44 = 0;
      if ( gender != gender_t::GENDER_FEMALE )
        goto LABEL_72;
      _V_strncat(&lowercase, "_female", 256, 0xFFFFFFFFLL);
    }
    v44 = 1;
LABEL_72:
    hash = 0;
    CaptionHash = CSoundEmitterSystem::GetCaptionHash(&g_SoundEmitterSystem, &lowercase, 1, &hash);
    if ( !CaptionHash && v44 != 0 )
      CaptionHash = CSoundEmitterSystem::GetCaptionHash(&g_SoundEmitterSystem, lowercase_nogender, 1, &hash);
    if ( CaptionHash && CCaptionRepeatMgr::CanEmitCaption(&g_CaptionRepeats, hash) )
    {
      *&CloseCaption_poster = &filter;
      CUserMessageCloseCaption::CUserMessageCloseCaption((&CloseCaption_poster + 8));
      v72 = 0;
      *(&CloseCaption_poster + 1) = off_40A4D10;
      v70 = 0;
      v68 = hash;
      v69 = durationa;
      v67 |= 7u;
      v46.m_Data = CEntityInstance::GetEntityIndex(actor).m_Data;
      v67 |= 8u;
      m_Data = v46.m_Data;
      CEventPosterBase<CUserMessageCloseCaption_t,255>::~CEventPosterBase(&CloseCaption_poster);
    }
    goto LABEL_66;
  }
}


// CSceneEntity::DispatchEndSpeak  (line 1519, @0x00000000023819c0, libserver.so)
// calls: CChoreoEvent::ShouldHardStopSpeakEvent, CBaseFlex::RemoveSceneEvent
void __fastcall CSceneEntity::DispatchEndSpeak(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  bool ShouldHardStopSpeakEvent; // al

  ShouldHardStopSpeakEvent = CChoreoEvent::ShouldHardStopSpeakEvent(event);
  CBaseFlex::RemoveSceneEvent(actor, scene, event, this->m_bRestoring, ShouldHardStopSpeakEvent);
}


// CSceneEntity::DispatchStartFace  (line 1537, @0x00000000023817d0, libserver.so)
// calls: CBaseFlex::AddSceneEvent
void __fastcall CSceneEntity::DispatchStartFace(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CBaseEntity *actor2,
        CChoreoEvent *event)
{
  CBaseFlex::AddSceneEvent(actor, scene, event, actor2, this);
}


// CSceneEntity::DispatchEndFace  (line 1549, @0x00000000023818b0, libserver.so)
// calls: CBaseFlex::RemoveSceneEvent
void __fastcall CSceneEntity::DispatchEndFace(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  CBaseFlex::RemoveSceneEvent(actor, scene, event, this->m_bRestoring, 0);
}


// CSceneEntity::DispatchStartSequence  (line 1560, @0x00000000023817f0, libserver.so)
// calls: CBaseFlex::AddSceneEvent
void __fastcall CSceneEntity::DispatchStartSequence(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  CBaseFlex::AddSceneEvent(actor, scene, event, 0, this);
}


// CSceneEntity::DispatchEndSequence  (line 1571, @0x00000000023818d0, libserver.so)
// calls: CBaseFlex::RemoveSceneEvent
void __fastcall CSceneEntity::DispatchEndSequence(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  CBaseFlex::RemoveSceneEvent(actor, scene, event, this->m_bRestoring, 0);
}


// CSceneEntity::DispatchStartPermitResponses  (line 1582, @0x0000000002383b90, libserver.so)  // inlines: curtime
// calls: CBaseFlex::SetPermitResponse
void __fastcall CSceneEntity::DispatchStartPermitResponses(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v7; // xmm0_4
  float v8; // xmm1_4
  CChoreoEvent *eventb; // [rsp+8h] [rbp-18h]
  float eventa; // [rsp+8h] [rbp-18h]

  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        eventb = event;
        (m_pfnWarningFunc)(1, scene);
        event = eventb;
      }
    }
    eventa = v5->m_flCurrentTime;
  }
  else
  {
    eventa = 0.0;
  }
  v7 = (*(event->_vptr_CChoreoObjectBase + 8))(event, scene);
  CBaseFlex::SetPermitResponse(actor, v7 + eventa, v8);
}


// CSceneEntity::DispatchEndPermitResponses  (line 1593, @0x0000000002381a10, libserver.so)
// calls: CBaseFlex::SetPermitResponse
void __fastcall CSceneEntity::DispatchEndPermitResponses(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  float v4; // xmm1_4

  CBaseFlex::SetPermitResponse(actor, 0.0, v4);
}


// CSceneEntity::EstimateLength  (line 1601, @0x000000000238ac10, libserver.so)  // inlines: String, ToCStr
// calls: CChoreoScene::FindStopTime, GetSceneDuration
// callers: CInstancedSceneEntity::EstimateLength
float __fastcall CSceneEntity::EstimateLength(CSceneEntity *const this)
{
  const char *m_pAsString; // rax

  if ( this->m_pScene != 0 )
    return CChoreoScene::FindStopTime(this->m_pScene);
  m_pAsString = "";
  if ( this->m_iszSceneFile.u.m_Id != 0 )
    m_pAsString = this->m_iszSceneFile.u.m_pAsString;
  return GetSceneDuration(m_pAsString);
}


// CSceneEntity::CancelIfSceneInvolvesActor  (line 1614, @0x000000000238d3e0, libserver.so)  // inlines: GetDebugName, String, ToCStr
// calls: CSceneEntity::InvolvesActor, CEntityIdentity::GetDebugName, LocalScene_Printf
// strings: "%s : canceled for '%s'\n"
void __fastcall CSceneEntity::CancelIfSceneInvolvesActor(CSceneEntity *const this, CBaseEntity *pActor)
{
  const char *DebugName; // rax
  const char *m_pAsString; // rsi

  if ( CSceneEntity::InvolvesActor(this, pActor) )
  {
    DebugName = CEntityIdentity::GetDebugName(pActor->m_pEntity);
    m_pAsString = "";
    if ( this->m_iszSceneFile.u.m_Id != 0 )
      m_pAsString = this->m_iszSceneFile.u.m_pAsString;
    LocalScene_Printf("%s : canceled for '%s'\n", m_pAsString, DebugName);
    (*(this->_vptr_IHandleEntity + 222))(this);
  }
}


// CSceneEntity::InvolvesActor  (line 1627, @0x0000000002388fd0, libserver.so)
// calls: CChoreoScene::GetNumActors
// callers: CSceneManager::IsInInterruptableScenes, CSceneManager::QueueActorsScenesToResume, CSceneManager::IsRunningScriptedScene, CSceneManager::IsRunningScriptedSceneAndNotPaused, CSceneManager::IsRunningScriptedSceneWithSpeech, CSceneManager::IsRunningScriptedSceneWithSpeechAndNotPaused, CSceneEntity::CancelIfSceneInvolvesActor, CSceneManager::RemoveActorFromScenes, CSceneManager::PauseActorsScenes, CSceneManager::ResumeActorsScenes
bool __fastcall CSceneEntity::InvolvesActor(CSceneEntity *const this, CBaseEntity *pActor)
{
  CChoreoScene *m_pScene; // rdi
  int i; // ebx
  CBaseEntity *v6; // rax

  m_pScene = this->m_pScene;
  if ( m_pScene != 0 )
  {
    for ( i = 0; i < CChoreoScene::GetNumActors(m_pScene); ++i )
    {
      v6 = (*(this->_vptr_IHandleEntity + 253))(this, i);
      if ( v6 != 0 && v6 == pActor )
        return 1;
      m_pScene = this->m_pScene;
    }
  }
  return 0;
}


// CSceneEntity::DoThink  (line 1648, @0x0000000002389e90, libserver.so)  // inlines: GetFloat, GetSoundSystemLatency, SetCurrentTime
// calls: CChoreoScene::SetSoundFileStartupLatency, CChoreoScene::Think, CChoreoScene::SimulationFinished, CChoreoScene::GetTime, CSceneEntity::SetCurrentTime, CSceneEntity::ClearSchedules
// globals: CSceneEntity::m_pcvSndMixahead
void __fastcall CSceneEntity::DoThink(CSceneEntity *const this, __m128i a2, float frametime)
{
  float v3; // r14d
  CChoreoScene *m_pScene; // rdi
  float m_fPitch; // xmm0_4
  float v7; // xmm1_4
  bool v8; // zf
  float v9; // xmm1_4
  CChoreoScene *v10; // rdi
  float Time; // xmm0_4
  bool v12; // si

  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(a2));
  (*(this->_vptr_IHandleEntity + 216))(this, *a2.m128i_i64, frametime);
  if ( *&this->m_bWaitingForActor != 0 )
    (*(this->_vptr_IHandleEntity + 219))(this);
  m_pScene = this->m_pScene;
  if ( m_pScene != 0 && this->m_bIsPlayingBack.m_Value )
  {
    m_fPitch = this->m_fPitch;
    v7 = 2.5;
    if ( m_fPitch <= 2.5 )
      v7 = fmaxf(0.25, m_fPitch);
    v8 = !this->m_bPaused.m_Value;
    this->m_fPitch = v7;
    if ( v8 )
    {
      this->m_flFrameTime = v3;
      CChoreoScene::SetSoundFileStartupLatency(m_pScene, v7);
      CChoreoScene::Think(this->m_pScene, v9);
      if ( this->m_bPaused.m_Value )
      {
        Time = CChoreoScene::GetTime(this->m_pScene);
        this->m_flCurrentTime = Time;
        CSceneEntity::SetCurrentTime(this, Time, v12);
      }
      else
      {
        v10 = this->m_pScene;
        this->m_flCurrentTime = (this->m_flFrameTime * this->m_fPitch) + this->m_flCurrentTime;
        if ( CChoreoScene::SimulationFinished(v10) )
        {
          (*(this->_vptr_IHandleEntity + 212))(this, 0, 1);
          CSceneEntity::ClearSchedules(this, this->m_pScene);
        }
      }
    }
    else
    {
      (*(this->_vptr_IHandleEntity + 214))(this);
    }
  }
}


// CSceneEntity::ScriptStartPlayback  (line 1706, @0x000000000238a6d0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, HScriptToEntity<CBaseEntity>, Set, ToEnt, operator=
// calls: CSceneEntity::ClearActivatorTargets, GetScriptDesc<CEntityInstance>
void __fastcall CSceneEntity::ScriptStartPlayback(CSceneEntity *const this, HSCRIPT pActivator)
{
  __int64 (__fastcall *v3)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx

  if ( !this->m_bIsPlayingBack.m_Value && !this->m_bWaitingForActor && !this->m_bWaitingForInterrupt )
  {
    CSceneEntity::ClearActivatorTargets(this);
    if ( pActivator != 0
      && (v3 = *(*g_pScriptVM + 208LL),
          Script = GetScriptDesc<CEntityInstance>(0),
          (v5 = v3(g_pScriptVM, pActivator, Script)) != 0)
      && (v6 = *(v5 + 8)) != 0 )
    {
      v7 = (*(v6 + 16) >> 15) - (*(v6 + 48) & 1);
      v8 = 0x7FFF;
      if ( *(v6 + 16) != -1 )
        v8 = *(v6 + 16) & 0x7FFF;
      LOWORD(this->m_hActivator.m_Index) = v8 | this->m_hActivator.m_Index & 0x8000;
      this->m_hActivator.m_Index = (v7 << 15) | this->m_hActivator.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hActivator.m_Index = -1;
    }
    (*(this->_vptr_IHandleEntity + 219))(this);
  }
}


// CSceneEntity::InputStartPlayback  (line 1724, @0x000000000238a7e0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CSceneEntity::ClearActivatorTargets
void __fastcall CSceneEntity::InputStartPlayback(CSceneEntity *const this, inputdata_t *const inputdata)
{
  CEntityIdentity *m_pEntity; // rdx
  int v4; // eax
  __int16 v5; // cx

  if ( !this->m_bIsPlayingBack.m_Value && !this->m_bWaitingForActor && !this->m_bWaitingForInterrupt )
  {
    CSceneEntity::ClearActivatorTargets(this);
    if ( inputdata->pActivator != 0 && (m_pEntity = inputdata->pActivator->m_pEntity) != 0 )
    {
      v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hActivator.m_Index) = v5 | this->m_hActivator.m_Index & 0x8000;
      this->m_hActivator.m_Index = (v4 << 15) | this->m_hActivator.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hActivator.m_Index = -1;
    }
    (*(this->_vptr_IHandleEntity + 219))(this);
  }
}


// CSceneEntity::InputPausePlayback  (line 1739, @0x00000000023809a0, libserver.so)
void __fastcall CSceneEntity::InputPausePlayback(CSceneEntity *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 220))(this, inputdata);
  this->m_bPausedViaInput = 1;
}


// CSceneEntity::InputResumePlayback  (line 1745, @0x00000000023809d0, libserver.so)
void __fastcall CSceneEntity::InputResumePlayback(CSceneEntity *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 221))(this, inputdata);
}


// CSceneEntity::ScriptCancelPlayback  (line 1750, @0x00000000023809f0, libserver.so)
void __fastcall CSceneEntity::ScriptCancelPlayback(CSceneEntity *const this)
{
  (*(this->_vptr_IHandleEntity + 222))(this);
}


// CSceneEntity::InputCancelPlayback  (line 1755, @0x000000000238d450, libserver.so)  // inlines: String, ToCStr
// calls: LocalScene_Printf
// strings: "%s : canceled via input\n"
void __fastcall CSceneEntity::InputCancelPlayback(CSceneEntity *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rsi

  m_pAsString = "";
  if ( this->m_iszSceneFile.u.m_Id != 0 )
    m_pAsString = this->m_iszSceneFile.u.m_pAsString;
  LocalScene_Printf("%s : canceled via input\n", m_pAsString);
  (*(this->_vptr_IHandleEntity + 222))(this);
}


// CSceneEntity::InputScriptPlayerDeath  (line 1761, @0x000000000238d4a0, libserver.so)  // inlines: String, ToCStr
// calls: LocalScene_Printf
// strings: "%s : canceled via player death\n"
void __fastcall CSceneEntity::InputScriptPlayerDeath(CSceneEntity *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rsi

  if ( this->m_iPlayerDeathBehavior == 1 )
  {
    m_pAsString = "";
    if ( this->m_iszSceneFile.u.m_Id != 0 )
      m_pAsString = this->m_iszSceneFile.u.m_pAsString;
    LocalScene_Printf("%s : canceled via player death\n", m_pAsString);
    (*(this->_vptr_IHandleEntity + 222))(this);
  }
}


// CSceneEntity::InputCancelAtNextInterrupt  (line 1771, @0x000000000238d510, libserver.so)  // inlines: String, ToCStr
// calls: LocalScene_Printf
// strings: "%s : canceled via input at interrupt point\n"
void __fastcall CSceneEntity::InputCancelAtNextInterrupt(CSceneEntity *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rsi

  if ( this->m_nInterruptCount <= 0 )
  {
    this->m_bCancelAtNextInterrupt = 1;
  }
  else
  {
    m_pAsString = "";
    if ( this->m_iszSceneFile.u.m_Id != 0 )
      m_pAsString = this->m_iszSceneFile.u.m_pAsString;
    LocalScene_Printf("%s : canceled via input at interrupt point\n", m_pAsString);
    (*(this->_vptr_IHandleEntity + 222))(this);
  }
}


// CSceneEntity::InputPitchShiftPlayback  (line 1785, @0x0000000002380a10, libserver.so)  // inlines: Float, operator float
void __fastcall CSceneEntity::InputPitchShiftPlayback(CSceneEntity *const this, inputdata_t *const inputdata)
{
  void (__fastcall *v2)(double); // rax

  v2 = *(this->_vptr_IHandleEntity + 223);
  if ( inputdata->value.m_type == 34 )
    v2(inputdata->value.m_float64);
  else
    v2(inputdata->value.m_float);
}


// CSceneEntity::InputTriggerEvent  (line 1790, @0x000000000239dcd0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Int, operator int, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: jpt_239DD0E
void __fastcall CSceneEntity::InputTriggerEvent(CSceneEntity *const this, inputdata_t *const inputdata)
{
  int16 m_type; // dx
  int m_float; // edx
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    m_float = inputdata->value.m_float;
  }
  else if ( m_type == 34 )
  {
    m_float = inputdata->value.m_float64;
  }
  else
  {
    m_float = inputdata->value.m_int;
  }
  switch ( m_float )
  {
    case 1:
      value.m_flags = 0;
      value.m_type = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger1, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 2:
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger2, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 3:
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger3, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 4:
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger4, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 5:
      value.m_flags = 0;
      value.m_type = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger5, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 6:
      value.m_flags = 0;
      value.m_type = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger6, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 7:
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger7, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 8:
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger8, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 9:
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger9, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 10:
      value.m_flags = 0;
      value.m_type = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger10, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 11:
      value.m_flags = 0;
      value.m_type = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger11, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 12:
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger12, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 13:
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger13, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 14:
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger14, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_39;
      break;
    case 15:
      value.m_flags = 0;
      value.m_type = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger15, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      break;
    case 16:
      value.m_flags = 0;
      value.m_type = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger16, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
LABEL_39:
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      break;
    default:
      return;
  }
}


// CSceneEntity::InputInterjectResponse  (line 1861, @0x0000000002380a40, libserver.so)
void __fastcall CSceneEntity::InputInterjectResponse(CSceneEntity *const this, inputdata_t *const inputdata)
{
  ;
}


// CSceneEntity::InputStopWaitingForActor  (line 1962, @0x0000000002380a50, libserver.so)
void __fastcall CSceneEntity::InputStopWaitingForActor(CSceneEntity *const this, inputdata_t *const inputdata)
{
  if ( !this->m_bIsPlayingBack.m_Value )
    this->m_bWaitingForActor = 0;
}


// CSceneEntity::CheckActors  (line 1975, @0x000000000239bbb0, libserver.so)  // inlines: FStrEq, GetSceneManager, IsInInterruptableScenes, PauseActorsScriptedScenes, RemoveActorFromScriptedScenes, _V_strcmp
// calls: CChoreoScene::GetNumActors, CChoreoScene::GetActor, CChoreoActor::GetName, CSceneManager::IsInInterruptableScenes, CSceneManager::PauseActorsScenes, CBaseFlex::StartChoreoScene, CChoreoScene::GetNumEvents, CChoreoScene::GetEvent, CChoreoEvent::GetActor, CSceneManager::RemoveActorFromScenes
// callers: CSceneEntity::StartPlayback
// strings: "Gambler"
// globals: g_pSceneManager
bool __fastcall CSceneEntity::CheckActors(CSceneEntity *const this)
{
  CChoreoScene *m_pScene; // rdi
  unsigned int v3; // r12d
  __int64 v4; // rax
  CBaseFlex *v5; // r13
  __int64 v6; // rax
  char v7; // r14
  CChoreoActor *Actor; // rax
  CChoreoActor *v9; // r13
  char *Name; // rax
  CBaseFlex *v12; // rax
  CBaseFlex *v13; // r14
  int NumEvents; // r14d
  int v15; // r15d
  CChoreoEvent *Event; // rax
  int numActors; // [rsp+Ch] [rbp-34h]

  m_pScene = this->m_pScene;
  if ( m_pScene == 0 )
    return 0;
  numActors = CChoreoScene::GetNumActors(m_pScene);
  if ( numActors <= 0 )
    return 1;
  v3 = 0;
  while ( 1 )
  {
    v4 = (*(this->_vptr_IHandleEntity + 253))(this, v3);
    v5 = v4;
    if ( v4 == 0 || (*(*v4 + 1176LL))(v4) == 0 )
      goto LABEL_21;
    v6 = (*(v5->_vptr_IHandleEntity + 147))(v5);
    v7 = (*(*v6 + 1112LL))(v6);
    if ( v7 == 0 )
      break;
    if ( (this->m_BusyActor - 2) <= 1 )
    {
      v12 = (*(v5->_vptr_IHandleEntity + 147))(v5);
      v13 = v12;
      if ( v12 != 0 && (g_pSceneManager == 0 || !CSceneManager::IsInInterruptableScenes(g_pSceneManager, v12)) )
      {
        this->m_bWaitingForInterrupt = 1;
        return 0;
      }
      if ( this->m_BusyActor == 3 )
      {
        if ( g_pSceneManager != 0 )
          CSceneManager::RemoveActorFromScenes(g_pSceneManager, v13, 0, 0, 0);
      }
      else
      {
        if ( g_pSceneManager != 0 )
          CSceneManager::PauseActorsScenes(g_pSceneManager, v13, 0);
        this->m_bInterruptedActorsScenes = 1;
      }
    }
    CBaseFlex::StartChoreoScene(v5, this->m_pScene);
LABEL_21:
    if ( ++v3 == numActors )
      return 1;
  }
  if ( numActors == 1 )
    return 0;
  Actor = CChoreoScene::GetActor(this->m_pScene, v3);
  v9 = Actor;
  if ( Actor == 0 )
    return v7;
  Name = CChoreoActor::GetName(Actor);
  if ( Name != "Gambler" && strcmp(Name, "Gambler") != 0 )
    return v7;
  NumEvents = CChoreoScene::GetNumEvents(this->m_pScene);
  if ( NumEvents <= 0 )
    goto LABEL_21;
  v15 = 0;
  while ( 1 )
  {
    Event = CChoreoScene::GetEvent(this->m_pScene, v15);
    if ( v9 == CChoreoEvent::GetActor(Event) )
      return 0;
    if ( ++v15 == NumEvents )
      goto LABEL_21;
  }
}


// CSceneEntity::PrefetchAnimBlocks  (line 2098, @0x0000000002389050, libserver.so)
void __fastcall CSceneEntity::PrefetchAnimBlocks(CSceneEntity *const this, CChoreoScene *scene)
{
  ;
}


// CSceneEntity::OnLoaded  (line 2202, @0x00000000023835e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// callers: CInstancedSceneEntity::OnLoaded
void __fastcall CSceneEntity::OnLoaded(CSceneEntity *const this)
{
  bool v2; // r12

  v2 = gpGlobals->maxClients > 1;
  if ( v2 != this->m_bMultiplayer.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 906, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bMultiplayer.m_Value = v2;
  }
}


// CSceneEntity::StartPlayback  (line 2210, @0x00000000023a5c20, libserver.so)  // inlines: CUtlMemory, CUtlRBTree, First, GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsIdxValid, IsValid, IsValidIndex, LeftChild, LookupEntity, NetworkStateChanged, Next, Purge, RemoveAll, ResetDbgInfo, Set, SetChangeInfoSerialNumber, SetCurrentTime, SetLeftChild, SetRightChild, StateChanged, String, ToCStr, operator bool, operator=<bool>, operator=<int>, operator==, operator[], ~CUtlMemory, ~CUtlRBTree
// calls: CSceneEntity::CheckActors, CSceneEntity::SetCurrentTime, CChoreoScene::ResetSimulation, CSceneEntity::ClearSceneEvents, CEntityIOOutput::FireOutput, CUtlSymbolTable::CUtlSymbolTable, CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList, CSceneEntity::PrefetchSpeakEventSounds, CSceneListManager::SceneStarted, CSceneEntity::LoadScene, CSceneEntity::ShouldNetwork, CUtlSymbolTable::~CUtlSymbolTable (16 total)
// callers: CInstancedSceneEntity::StartPlayback
// strings: "%s missing from scenes.image\n"
// globals: CSceneEntity::SpeakEventSoundLessFunc(CSceneEntity::SpeakEventSound_t const&,CSceneEntity::SpeakEventSound_t const&), CEntityHandle::gm_pEntityList
void __fastcall CSceneEntity::StartPlayback(CSceneEntity *const this)
{
  bool v2; // si
  bool m_Value; // zf
  CEventRegister *m_pTimerEvent; // rax
  float v5; // xmm2_4
  CChoreoScene *m_pScene; // rsi
  int m_Size; // eax
  unsigned __int64 v8; // rbx
  __int64 v9; // r13
  CHandle<CSceneListManager> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  IChoreoEventCallback *v15; // rsi
  const char *m_pAsString; // rdi
  CChoreoScene *Scene; // rax
  const char *v18; // rdx
  unsigned __int16 v19; // bx
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v22; // rax
  UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t,short unsigned int> *v23; // rdi
  const char *v24; // rsi
  CUtlRBTree<CSceneEntity::SpeakEventSound_t,short unsigned int,bool (*)(const CSceneEntity::SpeakEventSound_t&,const CSceneEntity::SpeakEventSound_t&),CUtlMemory<UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t,short unsigned int>,short unsigned int> > soundnames; // [rsp+0h] [rbp-B0h] BYREF
  CUtlSymbolTable prefetchSoundSymbolTable; // [rsp+30h] [rbp-80h] BYREF

  if ( this->m_pScene != 0 )
  {
LABEL_2:
    if ( !this->m_bIsPlayingBack.m_Value && CSceneEntity::CheckActors(this) )
    {
      m_Value = this->m_bIsPlayingBack.m_Value;
      this->m_bCompletedEarly = 0;
      this->m_bWaitingForActor = 0;
      this->m_bWaitingForInterrupt = 0;
      if ( !m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 904, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_bIsPlayingBack.m_Value = 1;
      }
      m_pTimerEvent = this->m_NetworkTransmitComponent.m_pTimerEvent;
      if ( m_pTimerEvent != 0 && m_pTimerEvent->m_bRegistered )
      {
        this->m_NetworkTransmitComponent.m_bPendingStateChange = 1;
      }
      else
      {
        this->m_NetworkTransmitComponent.m_nStateFlags |= 3u;
        this->m_NetworkTransmitComponent.m_Accessor.m_iChangeInfoSerialNumber = 0;
      }
      if ( this->m_bPaused.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 905, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_bPaused.m_Value = 0;
      }
      this->m_flCurrentTime = 0.0;
      CSceneEntity::SetCurrentTime(this, 0.0, v2);
      CChoreoScene::ResetSimulation(this->m_pScene, 1, 0.0, v5);
      (*(this->_vptr_IHandleEntity + 215))(this);
      CSceneEntity::ClearSceneEvents(this, this->m_pScene, 0);
      CEntityIOOutput::FireOutput(&this->m_OnStart, this, this, 0.0);
      CUtlSymbolTable::CUtlSymbolTable(&prefetchSoundSymbolTable, 0, 16, 0);
      soundnames.m_LessFunc = CSceneEntity::SpeakEventSoundLessFunc;
      m_pScene = this->m_pScene;
      soundnames.m_Root = -1;
      soundnames.m_NumElements = 0;
      soundnames.m_FirstFree = -1;
      soundnames.m_Elements.m_pMemory = 0;
      soundnames.m_Elements.m_nAllocationCount = 0;
      soundnames.m_Elements.m_nGrowSize = 0;
      soundnames.m_LastAlloc.index = -1;
      soundnames.m_pElements = 0;
      CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList(this, m_pScene, &prefetchSoundSymbolTable, &soundnames, 0.0);
      CSceneEntity::PrefetchSpeakEventSounds(this, &prefetchSoundSymbolTable, &soundnames);
      m_Size = this->m_hListManagers.m_Size;
      if ( m_Size > 0 )
      {
        v8 = 0;
        v9 = 4LL * (m_Size - 1) + 4;
        do
        {
          v10 = &this->m_hListManagers.m_Memory.m_pMemory[v8 / 4];
          m_Index = v10->m_Index;
          if ( v10->m_Index + 2 > 1 )
          {
            v12 = v10->m_Index;
            v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
            if ( v13 != 0 )
            {
              v14 = &v13[v12 & 0x1FF];
              if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
                CSceneListManager::SceneStarted(v14->m_pInstance, this);
            }
          }
          v8 += 4LL;
        }
        while ( v8 != v9 );
      }
      index = soundnames.m_LastAlloc.index;
      if ( soundnames.m_LastAlloc.index != 0xFFFF )
      {
        m_nAllocationCount = soundnames.m_Elements.m_nAllocationCount;
        v22 = 0;
        if ( soundnames.m_Elements.m_nAllocationCount > 0 )
        {
          do
          {
            if ( v22 < m_nAllocationCount && v22 <= index )
            {
              v23 = &soundnames.m_Elements.m_pMemory[v22];
              if ( v22 != v23->m_Left )
              {
                v23->m_Right = soundnames.m_FirstFree;
                soundnames.m_Elements.m_pMemory[v22].m_Left = v22;
                index = soundnames.m_LastAlloc.index;
                soundnames.m_FirstFree = v22;
              }
            }
            if ( v22 == index )
              break;
            m_nAllocationCount = soundnames.m_Elements.m_nAllocationCount;
            if ( (v22 + 1) >= soundnames.m_Elements.m_nAllocationCount )
              break;
            ++v22;
          }
          while ( v22 != 0xFFFF );
        }
        soundnames.m_Root = -1;
        soundnames.m_NumElements = 0;
      }
      soundnames.m_FirstFree = -1;
      if ( (soundnames.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
      {
        soundnames.m_LastAlloc.index = -1;
      }
      else
      {
        CUtlMemory<UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t,unsigned short>,unsigned short>::Purge(&soundnames.m_Elements);
        soundnames.m_LastAlloc.index = -1;
        if ( (soundnames.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t,unsigned short>,unsigned short>::Purge(&soundnames.m_Elements);
      }
      CUtlSymbolTable::~CUtlSymbolTable(&prefetchSoundSymbolTable);
    }
    return;
  }
  if ( this->m_bSceneMissing )
    return;
  v15 = &this->IChoreoEventCallback;
  m_pAsString = "";
  if ( this->m_iszSceneFile.u.m_Id != 0 )
    m_pAsString = this->m_iszSceneFile.u.m_pAsString;
  Scene = CSceneEntity::LoadScene(m_pAsString, v15);
  this->m_pScene = Scene;
  if ( Scene != 0 )
  {
    (*(this->_vptr_IHandleEntity + 211))(this);
    if ( CSceneEntity::ShouldNetwork(this) )
    {
      v18 = "";
      if ( this->m_iszSceneFile.u.m_Id != 0 )
        v18 = this->m_iszSceneFile.u.m_pAsString;
      v19 = (*(g_pStringTableClientSideChoreoScenes->_vptr_INetworkStringTable + 8))(
              g_pStringTableClientSideChoreoScenes,
              1,
              v18,
              0xFFFFFFFFLL,
              0);
      if ( v19 != this->m_nSceneStringIndex.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1016, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_nSceneStringIndex.m_Value = v19;
      }
    }
    (*(this->_vptr_IHandleEntity + 64))(this);
    goto LABEL_2;
  }
  v24 = "";
  if ( this->m_iszSceneFile.u.m_Id != 0 )
    v24 = this->m_iszSceneFile.u.m_pAsString;
  DevMsg("%s missing from scenes.image\n", v24);
  this->m_bSceneMissing = 1;
}


// CSceneEntity::SpeakEventSoundLessFunc  (line 2283, @0x0000000002380a70, libserver.so)
bool __fastcall CSceneEntity::SpeakEventSoundLessFunc(
        const CSceneEntity::SpeakEventSound_t *const lhs,
        const CSceneEntity::SpeakEventSound_t *const rhs)
{
  return rhs->m_flStartTime > lhs->m_flStartTime;
}


// CSceneEntity::PrefetchSpeakEventSounds  (line 2291, @0x000000000239a1f0, libserver.so)  // inlines: CUtlSymbol, Element, FirstInorder, LeftChild, operator[]
// calls: CUtlSymbolTable::String, CUtlRBTree<CSceneEntity::SpeakEventSound_t, short unsigned int, bool (*)(const CSceneEntity::SpeakEventSound_t&, const CSceneEntity::SpeakEventSound_t&), CUtlMemory<UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CSceneEntity::StartPlayback
void __fastcall CSceneEntity::PrefetchSpeakEventSounds(
        CSceneEntity *const this,
        CUtlSymbolTable *const table,
        CUtlRBTree<CSceneEntity::SpeakEventSound_t,short unsigned int,bool (*)(const CSceneEntity::SpeakEventSound_t&,const CSceneEntity::SpeakEventSound_t&),CUtlMemory<UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t,short unsigned int>,short unsigned int> > *const soundnames)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t,short unsigned int> *m_pMemory; // rdx
  unsigned __int16 m_Left; // cx
  CUtlSymbol id; // [rsp+0h] [rbp-30h] BYREF

  m_Root = soundnames->m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = soundnames->m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    while ( 1 )
    {
      id.m_Id = m_pMemory[m_Root].m_Data.m_Symbol.m_Id;
      CUtlSymbolTable::String(table, &id);
      m_Root = CUtlRBTree<CSceneEntity::SpeakEventSound_t,unsigned short,bool (*)(CSceneEntity::SpeakEventSound_t const&,CSceneEntity::SpeakEventSound_t const&),CUtlMemory<UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t,unsigned short>,unsigned short>>::NextInorder(
                 soundnames,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = soundnames->m_Elements.m_pMemory;
    }
  }
}


// CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList  (line 2308, @0x00000000023a5910, libserver.so)  // inlines: CUtlSymbol, Element, FindInsertionPosition, Insert, InsertAt, LeftChild, RightChild, SpeakEventSound_t, V_strncpy<long unsigned int>, operator=, operator[]
// calls: CChoreoScene::IsSubScene, CChoreoScene::GetNumEvents, CChoreoScene::GetEvent, CChoreoEvent::GetType, CChoreoEvent::GetParameters, _V_strncpy, CChoreoEvent::GetCloseCaptionType, CUtlSymbolTable::AddString, CChoreoEvent::GetStartTime, CUtlRBTree<CSceneEntity::SpeakEventSound_t, short unsigned int, bool (*)(const CSceneEntity::SpeakEventSound_t&, const CSceneEntity::SpeakEventSound_t&), CUtlMemory<UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CSceneEntity::SpeakEventSound_t, short unsigned int, bool (*)(const CSceneEntity::SpeakEventSound_t&, const CSceneEntity::SpeakEventSound_t&), CUtlMemory<UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t, short unsigned int>, short unsigned int> >::LinkToParent, CChoreoEvent::GetSubScene (19 total)
// callers: CSceneEntity::StartPlayback
void __fastcall CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CUtlSymbolTable *const table,
        CUtlRBTree<CSceneEntity::SpeakEventSound_t,short unsigned int,bool (*)(const CSceneEntity::SpeakEventSound_t&,const CSceneEntity::SpeakEventSound_t&),CUtlMemory<UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t,short unsigned int>,short unsigned int> > *const soundnames,
        float timeOffset)
{
  int v6; // r13d
  CChoreoEvent *Event; // rax
  CChoreoEvent *v9; // r12
  EventNameMap_t::EVENTTYPE Type; // eax
  const char *v11; // rax
  float v12; // xmm0_4
  unsigned __int16 m_Root; // r12
  unsigned __int16 m_Right; // ax
  char v15; // cl
  bool v16; // zf
  UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v18; // ax
  const char *Parameters; // rax
  CChoreoScene *v20; // r15
  float StartTime; // xmm0_4
  CBasePlayer *LocalPlayer; // rax
  IChoreoEventCallback *pCallback; // [rsp+8h] [rbp-D8h]
  bool isLeft; // [rsp+20h] [rbp-C0h]
  UtlSymId_t v28; // [rsp+40h] [rbp-A0h]
  CSceneEntity::SpeakEventSound_t ses; // [rsp+50h] [rbp-90h] BYREF
  char soundname[72]; // [rsp+60h] [rbp-80h] BYREF
  unsigned __int64 v31; // [rsp+A8h] [rbp-38h]

  v6 = 0;
  v31 = __readfsqword(0x28u);
  pCallback = &this->IChoreoEventCallback;
  while ( v6 < CChoreoScene::GetNumEvents(scene) )
  {
    Event = CChoreoScene::GetEvent(scene, v6);
    v9 = Event;
    if ( Event == 0 )
      goto LABEL_4;
    Type = CChoreoEvent::GetType(Event);
    if ( Type != SPEAK )
    {
      if ( Type == SUBSCENE && !CChoreoScene::IsSubScene(scene) && CChoreoEvent::GetSubScene(v9) == 0 )
      {
        Parameters = CChoreoEvent::GetParameters(v9);
        v20 = CSceneEntity::LoadScene(Parameters, pCallback);
        CChoreoScene::SetSubScene(v20, 1);
        CChoreoEvent::SetSubScene(v9, v20);
        StartTime = CChoreoEvent::GetStartTime(v9);
        CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList(this, v20, table, soundnames, StartTime);
      }
      goto LABEL_4;
    }
    v11 = CChoreoEvent::GetParameters(v9);
    _V_strncpy(soundname, v11, 64);
    if ( CChoreoEvent::GetCloseCaptionType(v9) != CC_MASTER )
    {
      if ( gpGlobals->maxClients == 1 )
        goto LABEL_21;
    }
    else
    {
      CChoreoEvent::GetPlaybackCloseCaptionToken(v9, soundname, 64);
      if ( gpGlobals->maxClients == 1 )
      {
LABEL_21:
        LocalPlayer = UTIL_GetLocalPlayer();
        if ( LocalPlayer != 0 && !CSceneEntity::GetSoundNameForPlayer(this, v9, LocalPlayer, soundname, 0x40u) )
          goto LABEL_4;
      }
    }
    ses.m_Symbol.m_Id = -1;
    CUtlSymbolTable::AddString(table, soundname);
    ses.m_Symbol.m_Id = v28;
    v12 = CChoreoEvent::GetStartTime(v9);
    m_Root = soundnames->m_Root;
    ses.m_flStartTime = v12 + timeOffset;
    if ( m_Root != 0xFFFF )
    {
      while ( 1 )
      {
        v16 = soundnames->m_LessFunc(&ses, &soundnames->m_Elements.m_pMemory[m_Root].m_Data) == 0;
        m_pMemory = soundnames->m_Elements.m_pMemory;
        if ( v16 )
        {
          m_Right = m_pMemory[m_Root].m_Right;
          v15 = 0;
          if ( m_Right == 0xFFFF )
            goto LABEL_16;
        }
        else
        {
          m_Right = m_pMemory[m_Root].m_Left;
          v15 = 1;
          if ( m_Right == 0xFFFF )
            goto LABEL_16;
        }
        m_Root = m_Right;
      }
    }
    m_Root = -1;
    v15 = 0;
LABEL_16:
    isLeft = v15;
    v18 = CUtlRBTree<CSceneEntity::SpeakEventSound_t,unsigned short,bool (*)(CSceneEntity::SpeakEventSound_t const&,CSceneEntity::SpeakEventSound_t const&),CUtlMemory<UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t,unsigned short>,unsigned short>>::NewNode(
            soundnames,
            &ses);
    CUtlRBTree<CSceneEntity::SpeakEventSound_t,unsigned short,bool (*)(CSceneEntity::SpeakEventSound_t const&,CSceneEntity::SpeakEventSound_t const&),CUtlMemory<UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t,unsigned short>,unsigned short>>::LinkToParent(
      soundnames,
      v18,
      m_Root,
      isLeft);
    ++soundnames->m_NumElements;
LABEL_4:
    ++v6;
  }
}


// CSceneEntity::PausePlayback  (line 2391, @0x0000000002383730, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CSceneEntity::PausePlayback(CSceneEntity *const this)
{
  if ( this->m_bIsPlayingBack.m_Value && !this->m_bPaused.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 905, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bPaused.m_Value = 1;
  }
}


// CSceneEntity::ResumePlayback  (line 2405, @0x0000000002383780, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// calls: CChoreoScene::ResumeSimulation
void __fastcall CSceneEntity::ResumePlayback(CSceneEntity *const this)
{
  CChoreoScene *m_pScene; // rdi

  if ( this->m_bIsPlayingBack.m_Value && this->m_bPaused.m_Value )
  {
    m_pScene = this->m_pScene;
    if ( m_pScene != 0 )
    {
      CChoreoScene::ResumeSimulation(m_pScene);
      if ( this->m_bPaused.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 905, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_bPaused.m_Value = 0;
      }
      this->m_bPausedViaInput = 0;
    }
  }
}


// CSceneEntity::CancelPlayback  (line 2433, @0x000000000239db90, libserver.so)  // inlines: CVariantBase, FireOutput, Free, NetworkStateChanged, Set, String, ToCStr, operator=<bool>, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, LocalScene_Printf, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "%s : %8.2f:  canceled\n"
void __fastcall CSceneEntity::CancelPlayback(CSceneEntity *const this)
{
  bool v2; // zf
  const char *m_pAsString; // rsi
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  if ( this->m_bIsPlayingBack.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 904, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v2 = !this->m_bPaused.m_Value;
    this->m_bIsPlayingBack.m_Value = 0;
    if ( !v2 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 905, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bPaused.m_Value = 0;
    }
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnCanceled, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    m_pAsString = "";
    if ( this->m_iszSceneFile.u.m_Id != 0 )
      m_pAsString = this->m_iszSceneFile.u.m_pAsString;
    LocalScene_Printf("%s : %8.2f:  canceled\n", m_pAsString, this->m_flCurrentTime);
    (*(this->_vptr_IHandleEntity + 212))(this, 1, 0);
  }
}


// CSceneEntity::PitchShiftPlayback  (line 2448, @0x0000000002398990, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, entindex, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CChoreoScene::GetNumActors, CChoreoScene::GetPlayingSoundName, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, _Unwind_Resume, __stack_chk_fail, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
void __fastcall CSceneEntity::PitchShiftPlayback(CSceneEntity *const this, float a2, float fPitch)
{
  CChoreoScene *m_pScene; // rdi
  int i; // ebx
  const CEntityInstance *v6; // r13
  int v7; // xmm1_4
  double v8; // xmm0_8
  float v9; // xmm1_4
  CEntityIndex v10; // eax
  float fPitcha; // [rsp+14h] [rbp-2DCh]
  EmitSound_t params; // [rsp+20h] [rbp-2D0h] BYREF
  char szBuff[256]; // [rsp+80h] [rbp-270h] BYREF
  CPASAttenuationFilter filter; // [rsp+180h] [rbp-170h] BYREF
  unsigned __int64 v15; // [rsp+2B8h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( a2 > 2.5 )
    fPitcha = 2.5;
  else
    fPitcha = fmaxf(0.25, a2);
  m_pScene = this->m_pScene;
  this->m_fPitch = fPitcha;
  if ( m_pScene != 0 )
  {
    for ( i = 0; i < CChoreoScene::GetNumActors(m_pScene); ++i )
    {
      v6 = (*(this->_vptr_IHandleEntity + 253))(this, i);
      if ( v6 != 0 && CChoreoScene::GetPlayingSoundName(this->m_pScene, szBuff, 256) )
      {
        *&params.m_nChannel = (*(v6->_vptr_IHandleEntity + 186))(v6);
        LODWORD(params.m_pSoundName) = v7;
        CRecipientFilter::CRecipientFilter(&filter);
        filter._vptr_IRecipientFilter = &off_3FCB190;
        CRecipientFilter::AddRecipientsByPAS(&filter, &params);
        filter._vptr_IRecipientFilter = &off_3FECD70;
        v8 = (*(v6->_vptr_IHandleEntity + 186))(v6);
        *&params.m_pSoundName = v9;
        *&params.m_nChannel = v8;
        CPASAttenuationFilter::Filter(&filter, &params, 0.80000001, v9);
        params.m_nChannel = 0;
        params.m_flVolume = 1.0;
        params.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
        params.m_pOrigin = 0;
        params.m_flSoundTime = 0.0;
        params.m_pflSoundDuration = 0;
        params.m_bEmitCloseCaption = 1;
        params.m_bWarnOnMissingCloseCaption = 0;
        params.m_bWarnOnDirectWaveReference = 0;
        params.m_nSpeakerEntity.m_Data = -1;
        params.m_UtlVecSoundOrigin.m_Size = 0;
        memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
        params.m_pSoundName = szBuff;
        params.m_nPitch = (100.0 * fPitcha);
        params.m_nFlags = 2;
        v10.m_Data = CEntityInstance::GetEntityIndex(v6).m_Data;
        CBaseEntity::EmitSound(&filter, v10, &params);
        params.m_UtlVecSoundOrigin.m_Size = 0;
        if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
          if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
        }
        filter._vptr_IRecipientFilter = &off_3FCB190;
        CRecipientFilter::~CRecipientFilter(&filter);
      }
      m_pScene = this->m_pScene;
    }
  }
}


// CSceneEntity::QueueResumePlayback  (line 2489, @0x0000000002392b10, libserver.so)  // inlines: String, ToCStr
// calls: V_stristr_fast(char const*,char const*), InstancedScriptedScene
void __fastcall CSceneEntity::QueueResumePlayback(CSceneEntity *const this)
{
  const char *m_pAsString; // rsi

  if ( this->m_iszResumeSceneFile.u.m_Id == 0 || V_stristr_fast(this->m_iszResumeSceneFile.u.m_pAsString, ".vcd") == 0 )
    goto LABEL_8;
  m_pAsString = "";
  if ( this->m_iszResumeSceneFile.u.m_Id != 0 )
    m_pAsString = this->m_iszResumeSceneFile.u.m_pAsString;
  if ( InstancedScriptedScene(0, m_pAsString, &this->m_hWaitingForThisResumeScene, 0.0, 0, 0, 0, 0) != 0.0 )
    this->m_bWaitingForResumeScene = 1;
  else
LABEL_8:
    (*(this->_vptr_IHandleEntity + 221))(this);
}


// CSceneEntity::ValidScene  (line 2546, @0x0000000002389060, libserver.so)
bool __fastcall CSceneEntity::ValidScene(const CSceneEntity *const this)
{
  return this->m_pScene != 0;
}


// CSceneEntity::DispatchStartSubScene  (line 2557, @0x0000000002381c80, libserver.so)
// calls: CChoreoScene::IsSubScene, CChoreoEvent::GetSubScene, CChoreoScene::ResetSimulation
void __fastcall CSceneEntity::DispatchStartSubScene(
        CSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *pActor,
        CChoreoEvent *event)
{
  CChoreoScene *SubScene; // rax
  float v6; // xmm2_4

  if ( !CChoreoScene::IsSubScene(scene) )
  {
    SubScene = CChoreoEvent::GetSubScene(event);
    if ( SubScene != 0 )
      CChoreoScene::ResetSimulation(SubScene, 1, 0.0, v6);
  }
}


// CSceneEntity::StartEvent  (line 2584, @0x000000000239ce20, libserver.so)  // inlines: CUtlSymbolLarge, CVariantBase, Call<HSCRIPT__*, char const*, float>, CopyData, EntityToHScript, Free, Get, GetEntityName, GetPrivateScriptScope, GetPublicScriptScope, GetVM, LookupFunction, SetColor, String, ToCStr, ToHScript, V_strlen, V_strncmp<int>, atoi, operator HSCRIPT, operator=, ~CUtlString, ~CVariantBase
// calls: CChoreoEvent::GetName, V_stricmp_fast, CChoreoEvent::GetType, CChoreoEvent::NameForType, CChoreoEvent::GetDescription, CUtlString::Get, LocalScene_Printf, CUtlString::FreeMemoryBlock, CChoreoEvent::GetActor, CChoreoActor::GetName, Warning, CChoreoEvent::GetParameters (29 total)
// strings: "%s : %8.2f:  ignored %s [%s]\n", "CSceneEntity %s unable to find actor named \"%s\"\n", "%s : %8.2f:  start %s [%s]\n", "debugtext", "CSceneEntity %s unable to find a camera (point_viewcontrol) in this map!\n", "CSceneEntity::SCRIPT event - unable to find entity named '%s' in this map!\n" (7 total)
// globals: jpt_239D03C, jpt_239D505
void __fastcall CSceneEntity::StartEvent(
        CSceneEntity *const this,
        float currenttime,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  const char *Name; // rax
  EventNameMap_t::EVENTTYPE Type; // eax
  const char *v9; // r14
  const char *v10; // rax
  const char *m_pAsString; // rsi
  CChoreoActor *Actor; // r12
  CSceneEntity *v13; // r15
  const char *v14; // rax
  const char *v15; // rsi
  EventNameMap_t::EVENTTYPE v16; // eax
  const char *v17; // rax
  const char *v18; // rsi
  const char *v19; // r15
  CBaseEntity *EntityByName; // rax
  CBaseEntity *v21; // r8
  HSCRIPT m_hScope; // rdx
  __int64 v23; // rbx
  CBaseEntity *v24; // r8
  HSCRIPT v25; // r15
  IScriptVM *v26; // r13
  CVariantBase<CVariantDefaultAllocator> *v27; // rax
  CVariantBase<CVariantDefaultAllocator> *p_tTextParam; // r13
  void (__fastcall *v29)(CSceneEntity *const, CChoreoScene *, const char *); // r12
  const char *v30; // rax
  __int64 (__fastcall *v31)(CSceneEntity *const, const char *, CSceneEntity *, _QWORD, _QWORD); // r12
  const char *Parameters; // rax
  __int64 v33; // rax
  const char *Parameters3; // rax
  __int64 (__fastcall *v35)(CSceneEntity *const, const char *, CSceneEntity *, _QWORD, __int64, const char *); // r12
  const char *v36; // rax
  __int64 v37; // rax
  const char *Parameters2; // rax
  __int64 v39; // r8
  const char *v40; // rax
  __int64 (__fastcall *v41)(CSceneEntity *const, const char *, CSceneEntity *, _QWORD, _QWORD); // r12
  const char *v42; // rax
  __int64 v43; // rax
  const char *v44; // rax
  const char *v45; // rax
  const char *v46; // rax
  __int64 (__fastcall *v47)(CSceneEntity *const, const char *, CSceneEntity *, _QWORD, _QWORD); // r14
  const char *v48; // rax
  CBaseEntity *v49; // r14
  __int64 (__fastcall *v50)(CSceneEntity *const, const char *, CSceneEntity *, _QWORD, _QWORD); // r12
  const char *v51; // rax
  CBaseEntity *v52; // r15
  CTriggerCamera *v53; // rax
  const char *v54; // rsi
  float v55; // xmm1_4
  __int64 (__fastcall *v56)(CSceneEntity *const, const char *, CSceneEntity *, _QWORD, __int64); // r12
  const char *v57; // rax
  CBaseEntity *pEntity; // [rsp+10h] [rbp-B0h]
  CBaseEntity *pEntitya; // [rsp+10h] [rbp-B0h]
  int duration; // [rsp+1Ch] [rbp-A4h]
  const char *pszShotType; // [rsp+20h] [rbp-A0h]
  const char *pszShotTypea; // [rsp+20h] [rbp-A0h]
  const char *pszShotTypeb; // [rsp+20h] [rbp-A0h]
  const char *pszFunctionNamea; // [rsp+28h] [rbp-98h]
  const char *pszFunctionNameb; // [rsp+28h] [rbp-98h]
  const char *pszFunctionNamed; // [rsp+28h] [rbp-98h]
  float pszFunctionNamec; // [rsp+28h] [rbp-98h]
  CVariantBase<CVariantDefaultAllocator> v69; // [rsp+30h] [rbp-90h] BYREF
  const char *v70; // [rsp+40h] [rbp-80h]
  __int16 v71; // [rsp+48h] [rbp-78h]
  __int16 v72; // [rsp+4Ah] [rbp-76h]
  CVariantBase<CVariantDefaultAllocator> v73; // [rsp+50h] [rbp-70h] BYREF
  hudtextparms_t tTextParam; // [rsp+60h] [rbp-60h] BYREF
  unsigned __int64 v75; // [rsp+88h] [rbp-38h]

  v75 = __readfsqword(0x28u);
  Name = CChoreoEvent::GetName(event);
  if ( V_stricmp_fast(Name, "NULL") == 0 )
  {
    Type = CChoreoEvent::GetType(event);
    v9 = CChoreoEvent::NameForType(Type);
    CChoreoEvent::GetDescription(event);
    v10 = CUtlString::Get(&v69);
    m_pAsString = "";
    if ( this->m_iszSceneFile.u.m_Id != 0 )
      m_pAsString = this->m_iszSceneFile.u.m_pAsString;
    LocalScene_Printf("%s : %8.2f:  ignored %s [%s]\n", m_pAsString, currenttime, v10, v9);
    if ( v69.m_uint64 != 0 )
      CUtlString::FreeMemoryBlock(&v69);
    return;
  }
  Actor = CChoreoEvent::GetActor(event);
  if ( Actor == 0 || CChoreoEvent::GetType(event) == SCRIPT || CChoreoEvent::GetType(event) == CAMERA )
  {
    v13 = 0;
  }
  else
  {
    v13 = (*(this->_vptr_IHandleEntity + 254))(this, Actor);
    if ( v13 == 0 )
    {
      v14 = CChoreoActor::GetName(Actor);
LABEL_12:
      v15 = "";
      if ( this->m_pEntity->m_name.u.m_Id != 0 )
        v15 = this->m_pEntity->m_name.u.m_pAsString;
      Warning("CSceneEntity %s unable to find actor named \"%s\"\n", v15, v14);
      return;
    }
  }
  v16 = CChoreoEvent::GetType(event);
  pszShotType = CChoreoEvent::NameForType(v16);
  CChoreoEvent::GetDescription(event);
  v17 = CUtlString::Get(&v69);
  v18 = "";
  if ( this->m_iszSceneFile.u.m_Id != 0 )
    v18 = this->m_iszSceneFile.u.m_pAsString;
  LocalScene_Printf("%s : %8.2f:  start %s [%s]\n", v18, currenttime, v17, pszShotType);
  if ( v69.m_uint64 != 0 )
    CUtlString::FreeMemoryBlock(&v69);
  switch ( CChoreoEvent::GetType(event) )
  {
    case SECTION:
      if ( !this->m_bMultiplayer.m_Value )
      {
        v29 = *(this->_vptr_IHandleEntity + 249);
        goto LABEL_38;
      }
      break;
    case EXPRESSION:
      if ( v13 != 0 && !this->m_bMultiplayer.m_Value )
        (*(this->_vptr_IHandleEntity + 225))(this, scene, v13, event);
      break;
    case LOOKAT:
      if ( v13 != 0 && !this->m_bMultiplayer.m_Value )
      {
        v31 = *(this->_vptr_IHandleEntity + 256);
        Parameters = CChoreoEvent::GetParameters(event);
        v33 = v31(this, Parameters, v13, 0, 0);
        if ( v33 == 0 )
          goto LABEL_111;
        (*(this->_vptr_IHandleEntity + 231))(this, scene, v13, v33, event);
      }
      break;
    case MOVETO:
      if ( !CChoreoEvent::HasEndTime(event) )
      {
        CChoreoEvent::GetStartTime(event);
        CChoreoEvent::SetEndTime(event, v55);
      }
      if ( v13 != 0 && !this->m_bMultiplayer.m_Value )
      {
        if ( CChoreoEvent::GetParameters3(event) != 0
          && (Parameters3 = CChoreoEvent::GetParameters3(event)) != 0
          && strlen(Parameters3) > 0 )
        {
          v35 = *(this->_vptr_IHandleEntity + 257);
          pszFunctionNamed = CChoreoEvent::GetParameters3(event);
          v36 = CChoreoEvent::GetParameters(event);
          v37 = v35(this, v36, v13, 0, 1, pszFunctionNamed);
        }
        else
        {
          v56 = *(this->_vptr_IHandleEntity + 256);
          v57 = CChoreoEvent::GetParameters(event);
          v37 = v56(this, v57, v13, 0, 1);
        }
        if ( v37 == 0 )
          goto LABEL_111;
        (*(this->_vptr_IHandleEntity + 233))(this, scene, v13, v37, event);
      }
      break;
    case SPEAK:
      if ( v13 != 0 )
      {
        Parameters2 = CChoreoEvent::GetParameters2(event);
        v39 = 80;
        if ( Parameters2 != 0 )
        {
          v40 = CChoreoEvent::GetParameters2(event);
          v39 = strtol(v40, 0, 10);
        }
        (*(this->_vptr_IHandleEntity + 235))(this, scene, v13, event, v39);
      }
      break;
    case GESTURE:
      if ( v13 != 0 )
        (*(this->_vptr_IHandleEntity + 229))(this, scene, v13, event);
      break;
    case SEQUENCE:
      if ( v13 != 0 )
        (*(this->_vptr_IHandleEntity + 239))(this, scene, v13, event);
      break;
    case FACE:
      if ( v13 != 0 && !this->m_bMultiplayer.m_Value )
      {
        v41 = *(this->_vptr_IHandleEntity + 256);
        v42 = CChoreoEvent::GetParameters(event);
        v43 = v41(this, v42, v13, 0, 0);
        if ( v43 == 0 )
        {
LABEL_111:
          v14 = CChoreoEvent::GetParameters(event);
          goto LABEL_12;
        }
        (*(this->_vptr_IHandleEntity + 237))(this, scene, v13, v43, event);
      }
      break;
    case FIRETRIGGER:
      if ( !this->m_bRestoring )
      {
        if ( v13 == 0 )
          v13 = this;
        v44 = CChoreoEvent::GetParameters(event);
        switch ( strtol(v44, 0, 10) )
        {
          case 1u:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger1, v13, this, 0.0);
            break;
          case 2u:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger2, v13, this, 0.0);
            break;
          case 3u:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger3, v13, this, 0.0);
            break;
          case 4u:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger4, v13, this, 0.0);
            break;
          case 5u:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger5, v13, this, 0.0);
            break;
          case 6u:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger6, v13, this, 0.0);
            break;
          case 7u:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger7, v13, this, 0.0);
            break;
          case 8u:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger8, v13, this, 0.0);
            break;
          case 9u:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger9, v13, this, 0.0);
            break;
          case 0xAu:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger10, v13, this, 0.0);
            break;
          case 0xBu:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger11, v13, this, 0.0);
            break;
          case 0xCu:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger12, v13, this, 0.0);
            break;
          case 0xDu:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger13, v13, this, 0.0);
            break;
          case 0xEu:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger14, v13, this, 0.0);
            break;
          case 0xFu:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger15, v13, this, 0.0);
            break;
          case 0x10u:
            CEntityIOOutput::FireOutput(&this->m_OnTrigger16, v13, this, 0.0);
            break;
          default:
            return;
        }
      }
      break;
    case FLEXANIMATION:
      if ( v13 != 0 && !this->m_bMultiplayer.m_Value )
        (*(this->_vptr_IHandleEntity + 227))(this, scene, v13, event);
      break;
    case SUBSCENE:
      if ( v13 != 0 && !this->m_bMultiplayer.m_Value )
        (*(this->_vptr_IHandleEntity + 241))(this, scene, v13, event);
      break;
    case LOOP:
      (*(this->_vptr_IHandleEntity + 248))(this, scene, event);
      break;
    case INTERRUPT:
      if ( !this->m_bMultiplayer.m_Value )
        (*(this->_vptr_IHandleEntity + 242))(this, scene, event);
      break;
    case STOPPOINT:
      if ( !this->m_bMultiplayer.m_Value )
      {
        v29 = *(this->_vptr_IHandleEntity + 250);
LABEL_38:
        v30 = CChoreoEvent::GetParameters(event);
        v29(this, scene, v30);
      }
      break;
    case PERMIT_RESPONSES:
      if ( !this->m_bMultiplayer.m_Value )
        (*(this->_vptr_IHandleEntity + 246))(this, scene, v13, event);
      break;
    case GENERIC:
      if ( CChoreoEvent::GetParameters(event) == 0
        || (v45 = CChoreoEvent::GetParameters(event), _V_strncmp(v45, "debugtext", 9) != 0) )
      {
        if ( v13 != 0 )
          (*(this->_vptr_IHandleEntity + 244))(this, scene, v13, event);
      }
      else
      {
        v46 = CChoreoEvent::GetParameters(event);
        tTextParam.x = -1.0;
        tTextParam.y = 0.64999998;
        tTextParam.effect = 0;
        tTextParam.color1._color[0] = -1;
        tTextParam.color1._color[1] = -86;
        tTextParam.color1._color[2] = 0;
        tTextParam.color1._color[3] = -1;
        tTextParam.color2._color[0] = -1;
        tTextParam.color2._color[1] = -86;
        tTextParam.color2._color[2] = 0;
        tTextParam.color2._color[3] = -1;
        tTextParam.fadeinTime = 0.0;
        tTextParam.fadeoutTime = 0.0;
        tTextParam.holdTime = 3.0999999;
        tTextParam.fxTime = 0.0;
        tTextParam.channel = 1;
        UTIL_HudMessageAll(&tTextParam, v46 + 10);
      }
      break;
    case CAMERA:
      pszShotTypeb = CChoreoEvent::GetParameters(event);
      v47 = *(this->_vptr_IHandleEntity + 256);
      v48 = CChoreoEvent::GetParameters2(event);
      v49 = v47(this, v48, v13, 0, 0);
      v50 = *(this->_vptr_IHandleEntity + 256);
      v51 = CChoreoEvent::GetParameters3(event);
      v52 = v50(this, v51, v13, 0, 0);
      pszFunctionNamec = (*(event->_vptr_CChoreoObjectBase + 8))(event);
      v53 = (*(this->_vptr_IHandleEntity + 258))(this);
      if ( v53 != 0 )
      {
        CTriggerCamera::StartCameraShot(v53, pszShotTypeb, this, v49, v52, pszFunctionNamec);
      }
      else
      {
        v54 = "";
        if ( this->m_pEntity->m_name.u.m_Id != 0 )
          v54 = this->m_pEntity->m_name.u.m_pAsString;
        Warning(
          "CSceneEntity %s unable to find a camera (point_viewcontrol) in this map!\n",
          v54,
          COERCE_DOUBLE(LODWORD(pszFunctionNamec)));
      }
      break;
    case SCRIPT:
      v19 = CChoreoEvent::GetParameters(event);
      pszFunctionNamea = CChoreoEvent::GetParameters2(event);
      pszShotTypea = CChoreoEvent::GetParameters3(event);
      duration = (*(event->_vptr_CChoreoObjectBase + 8))(event);
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v19, this, 0, 0, 0);
      v21 = EntityByName;
      if ( EntityByName != 0 )
      {
        m_hScope = EntityByName->m_hPrivateScope.m_hScope;
        if ( m_hScope == 0 )
        {
          pEntitya = EntityByName;
          CEntityInstance::ValidatePrivateScriptScope(EntityByName);
          v21 = pEntitya;
          m_hScope = pEntitya->m_hPrivateScope.m_hScope;
        }
        pEntity = v21;
        v23 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, pszFunctionNamea, m_hScope, 0);
        if ( v23 != 0 )
        {
          v24 = pEntity;
          if ( this->m_pEntity->m_hPublicScope.m_hScope == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(this, 0);
            v24 = pEntity;
          }
          v25 = this->m_pEntity->m_hPublicScope.m_hScope;
          v26 = g_pScriptVM;
          pszFunctionNameb = v24->m_hPrivateScope.m_hScope;
          v27 = &v69;
          do
          {
            v27->m_uint64 = 0;
            v27->m_type = 0;
            ++v27;
            v27[-1].m_flags = 0;
          }
          while ( v27 != &tTextParam );
          CVariantBase<CVariantDefaultAllocator>::Free(&v69);
          v69.m_uint64 = v25;
          v69.m_type = 31;
          if ( (v72 & 1) != 0 )
          {
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v70);
            v72 &= ~1u;
          }
          v71 = 30;
          v70 = pszShotTypea;
          CVariantBase<CVariantDefaultAllocator>::Free(&v73);
          v73.m_type = 1;
          v73.m_int = duration;
          (*(*v26 + 160LL))(v26, v23, &v69, 3, 0, pszFunctionNameb, 1);
          p_tTextParam = &tTextParam;
          do
          {
            --p_tTextParam;
            if ( (p_tTextParam->m_flags & 1) != 0 )
            {
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p_tTextParam->m_uint64);
              p_tTextParam->m_flags &= ~1u;
            }
            p_tTextParam->m_uint64 = 0;
            p_tTextParam->m_type = 0;
          }
          while ( p_tTextParam != &v69 );
          (*(*g_pScriptVM + 152LL))(g_pScriptVM, v23);
        }
        else
        {
          Warning(
            "CSceneEntity::SCRIPT event - '%s' entity has no script function '%s' defined!\n",
            v19,
            pszFunctionNamea);
        }
      }
      else
      {
        Warning("CSceneEntity::SCRIPT event - unable to find entity named '%s' in this map!\n", v19);
      }
      break;
    default:
      return;
  }
}


// CSceneEntity::EndEvent  (line 2945, @0x000000000238dab0, libserver.so)  // inlines: String, ToCStr, V_strncmp<int>, ~CUtlString
// calls: CChoreoEvent::GetName, V_stricmp_fast, CChoreoEvent::GetActor, CChoreoEvent::GetType, CChoreoEvent::NameForType, CChoreoEvent::GetDescription, CUtlString::Get, LocalScene_Printf, CUtlString::FreeMemoryBlock, CChoreoEvent::GetParameters, _V_strncmp, CChoreoEvent::GetSubScene (14 total)
// strings: "%s : %8.2f:  finish %s [%s]\n", "debugtext"
// globals: jpt_238DBAF
void __fastcall CSceneEntity::EndEvent(
        CSceneEntity *const this,
        float currenttime,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  const char *Name; // rax
  __int64 v8; // r15
  CChoreoActor *Actor; // rax
  EventNameMap_t::EVENTTYPE Type; // eax
  const char *v11; // rax
  const char *m_pAsString; // rsi
  const char *Parameters; // rax
  CChoreoScene *SubScene; // rax
  float v15; // xmm2_4
  const char *v16; // [rsp+0h] [rbp-50h]
  CUtlString v18; // [rsp+10h] [rbp-40h] BYREF

  Name = CChoreoEvent::GetName(event);
  if ( V_stricmp_fast(Name, "NULL") != 0 )
  {
    v8 = 0;
    Actor = CChoreoEvent::GetActor(event);
    if ( Actor != 0 )
      v8 = (*(this->_vptr_IHandleEntity + 254))(this, Actor);
    Type = CChoreoEvent::GetType(event);
    v16 = CChoreoEvent::NameForType(Type);
    CChoreoEvent::GetDescription(event);
    v11 = CUtlString::Get(&v18);
    m_pAsString = "";
    if ( this->m_iszSceneFile.u.m_Id != 0 )
      m_pAsString = this->m_iszSceneFile.u.m_pAsString;
    LocalScene_Printf("%s : %8.2f:  finish %s [%s]\n", m_pAsString, currenttime, v11, v16);
    if ( v18.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v18);
    switch ( CChoreoEvent::GetType(event) )
    {
      case EXPRESSION:
        if ( v8 != 0 && !this->m_bMultiplayer.m_Value )
          (*(this->_vptr_IHandleEntity + 226))(this, scene, v8, event);
        break;
      case LOOKAT:
        if ( v8 != 0 && !this->m_bMultiplayer.m_Value )
          (*(this->_vptr_IHandleEntity + 232))(this, scene, v8, event);
        break;
      case MOVETO:
        if ( v8 != 0 && !this->m_bMultiplayer.m_Value )
          (*(this->_vptr_IHandleEntity + 234))(this, scene, v8, event);
        break;
      case SPEAK:
        if ( v8 != 0 )
          (*(this->_vptr_IHandleEntity + 236))(this, scene, v8, event);
        break;
      case GESTURE:
        if ( v8 != 0 )
          (*(this->_vptr_IHandleEntity + 230))(this, scene, v8, event);
        break;
      case SEQUENCE:
        if ( v8 != 0 )
          (*(this->_vptr_IHandleEntity + 240))(this, scene, v8, event);
        break;
      case FACE:
        if ( v8 != 0 && !this->m_bMultiplayer.m_Value )
          (*(this->_vptr_IHandleEntity + 238))(this, scene, v8, event);
        break;
      case FLEXANIMATION:
        if ( v8 != 0 && !this->m_bMultiplayer.m_Value )
          (*(this->_vptr_IHandleEntity + 228))(this, scene, v8, event);
        break;
      case SUBSCENE:
        if ( !this->m_bMultiplayer.m_Value )
        {
          SubScene = CChoreoEvent::GetSubScene(event);
          if ( SubScene != 0 )
            CChoreoScene::ResetSimulation(SubScene, 1, 0.0, v15);
        }
        break;
      case INTERRUPT:
        if ( !this->m_bMultiplayer.m_Value )
          (*(this->_vptr_IHandleEntity + 243))(this, scene, event);
        break;
      case PERMIT_RESPONSES:
        if ( !this->m_bMultiplayer.m_Value )
          (*(this->_vptr_IHandleEntity + 247))(this, scene, v8, event);
        break;
      case GENERIC:
        if ( CChoreoEvent::GetParameters(event) == 0
          || (Parameters = CChoreoEvent::GetParameters(event), _V_strncmp(Parameters, "debugtext", 9) != 0) )
        {
          if ( v8 != 0 )
            (*(this->_vptr_IHandleEntity + 245))(this, scene, v8, event);
        }
        break;
      default:
        return;
    }
  }
}


// MissingSceneWarning  (line 3100, @0x0000000002389080, libserver.so)
// calls: __cxa_guard_acquire, CUtlSymbolTable::Find, CUtlSymbolTable::CUtlSymbolTable, __cxa_guard_release, __cxa_atexit, CUtlSymbolTable::AddString, Warning, __cxa_guard_abort, _Unwind_Resume
// callers: CSceneEntity::LoadScene
// strings: "Scene '%s' missing!\n"
// globals: `guard variable for'MissingSceneWarning(char const*)::missing, MissingSceneWarning(char const*)::missing, __dso_handle
void __fastcall MissingSceneWarning(const char *scenename)
{
  __int16 v2; // [rsp+10h] [rbp-20h]

  if ( `guard variable for'MissingSceneWarning(char const*)::missing == 0
    && __cxa_guard_acquire(&`guard variable for'MissingSceneWarning(char const*)::missing) != 0 )
  {
    CUtlSymbolTable::CUtlSymbolTable(&MissingSceneWarning(char const*)::missing, 0, 16, 0);
    __cxa_guard_release(&`guard variable for'MissingSceneWarning(char const*)::missing);
    __cxa_atexit(CUtlSymbolTable::~CUtlSymbolTable, &MissingSceneWarning(char const*)::missing, &_dso_handle);
  }
  CUtlSymbolTable::Find(&MissingSceneWarning(char const*)::missing, scenename);
  if ( v2 == -1 )
  {
    CUtlSymbolTable::AddString(&MissingSceneWarning(char const*)::missing, scenename);
    Warning("Scene '%s' missing!\n", scenename);
  }
}


// CSceneEntity::ShouldNetwork  (line 3113, @0x0000000002389160, libserver.so)
// calls: CChoreoScene::HasEventsOfType
// callers: CSceneEntity::UpdateTransmitState, CSceneEntity::OnRestore, CSceneEntity::StartPlayback
bool __fastcall CSceneEntity::ShouldNetwork(const CSceneEntity *const this)
{
  bool v2; // zf
  CChoreoScene *m_pScene; // rdi

  v2 = !this->m_bMultiplayer.m_Value;
  m_pScene = this->m_pScene;
  if ( !v2 )
    return m_pScene != 0
        && (CChoreoScene::HasEventsOfType(m_pScene, FLEXANIMATION)
         || CChoreoScene::HasEventsOfType(this->m_pScene, EXPRESSION)
         || CChoreoScene::HasEventsOfType(this->m_pScene, GESTURE)
         || CChoreoScene::HasEventsOfType(this->m_pScene, SEQUENCE));
  if ( m_pScene == 0 )
    return 0;
  return CChoreoScene::HasEventsOfType(m_pScene, FLEXANIMATION)
      || CChoreoScene::HasEventsOfType(this->m_pScene, EXPRESSION);
}


// CSceneEntity::LoadScene  (line 3139, @0x0000000002398200, libserver.so)  // inlines: FreeSceneFileMemory, V_SetExtension<long unsigned int>, V_strncpy<long unsigned int>, ~CUtlBuffer, ~CUtlMemory
// calls: DevMsg, _V_strncpy, _V_SetExtension, V_FixSlashes, CopySceneFileIntoMemory, operator new, CChoreoScene::CChoreoScene, CUtlBuffer::CUtlBuffer, CChoreoScene::RestoreFromBinaryBuffer, operator delete [], CUtlMemory<unsigned char, int>::Purge, Warning (16 total)
// callers: CSceneEntity::PrecacheScene, BlockingLoadScene, CSceneEntity::OnRestore, CSceneCache::Rebuild, CSceneEntity::BuildSortedSpeakEventSoundsPrefetchList, CSceneEntity::StartPlayback
// strings: "Blocking load of scene from '%s'\n", "CSceneEntity::LoadScene: Unable to load binary scene '%s'\n"
// globals: LocalScene_Printf(char const*,...), g_ChoreoStringPool
CChoreoScene *__fastcall CSceneEntity::LoadScene(const char *filename, IChoreoEventCallback *pCallback)
{
  CChoreoScene *v4; // r12
  int (**vptr_ICurveDataAccessor)(...); // rax
  CChoreoScene *v7; // rdi
  int fileSize; // [rsp+4h] [rbp-18Ch] BYREF
  uint8 *pBuffer; // [rsp+8h] [rbp-188h] BYREF
  CUtlBuffer buf; // [rsp+10h] [rbp-180h] BYREF
  char loadfile[264]; // [rsp+60h] [rbp-130h] BYREF
  unsigned __int64 v12; // [rsp+168h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  DevMsg(2, "Blocking load of scene from '%s'\n", filename);
  _V_strncpy(loadfile, filename, 260);
  _V_SetExtension(loadfile, ".vcd", 260);
  V_FixSlashes(loadfile, 47);
  if ( CopySceneFileIntoMemory(loadfile, &pBuffer, &fileSize) )
  {
    v4 = operator new(0x170u);
    CChoreoScene::CChoreoScene(v4, pCallback, LocalScene_Printf);
    CUtlBuffer::CUtlBuffer(&buf, pBuffer, fileSize, 8);
    if ( !CChoreoScene::RestoreFromBinaryBuffer(v4, &buf, loadfile, &g_ChoreoStringPool) )
    {
      Warning("CSceneEntity::LoadScene: Unable to load binary scene '%s'\n", loadfile);
      if ( v4 != 0 )
      {
        vptr_ICurveDataAccessor = v4->_vptr_ICurveDataAccessor;
        v7 = v4;
        v4 = 0;
        vptr_ICurveDataAccessor[5](v7);
      }
    }
    if ( pBuffer != 0 )
      operator delete[](pBuffer);
    CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
    return v4;
  }
  else
  {
    MissingSceneWarning(loadfile);
    return 0;
  }
}


// BlockingLoadScene  (line 3170, @0x00000000023985e0, libserver.so)
// calls: CSceneEntity::LoadScene
CChoreoScene *__fastcall BlockingLoadScene(const char *filename)
{
  return CSceneEntity::LoadScene(filename, 0);
}


// CSceneEntity::ScriptLoadSceneFromString  (line 3180, @0x00000000023984e0, libserver.so)
// calls: operator new, CChoreoScene::CChoreoScene, CSceneTokenProcessor::CSceneTokenProcessor, CChoreoScene::ParseFromBuffer, Warning, CSceneEntity::PrecacheScene, CSceneEntity::UnloadScene, __stack_chk_fail, operator delete, _Unwind_Resume
// strings: "CSceneEntity::LoadSceneFromString: Unable to parse scene data '%s'\n"
// globals: LocalScene_Printf(char const*,...)
bool __fastcall CSceneEntity::ScriptLoadSceneFromString(
        CSceneEntity *const this,
        const char *pszFilename,
        const char *pszData)
{
  CChoreoScene *v6; // rbx
  bool v7; // r13
  CSceneTokenProcessor processor; // [rsp+0h] [rbp-550h] BYREF
  unsigned __int64 v10; // [rsp+518h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  v6 = operator new(0x170u);
  CChoreoScene::CChoreoScene(v6, &this->IChoreoEventCallback, LocalScene_Printf);
  CSceneTokenProcessor::CSceneTokenProcessor(&processor, pszData);
  v7 = CChoreoScene::ParseFromBuffer(v6, pszFilename, &processor);
  if ( v7 )
  {
    CSceneEntity::PrecacheScene(this, v6);
    if ( v6 != 0 )
    {
      CSceneEntity::UnloadScene(this);
      this->m_pScene = v6;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    Warning("CSceneEntity::LoadSceneFromString: Unable to parse scene data '%s'\n", pszFilename);
    if ( v6 != 0 )
      (*(v6->_vptr_ICurveDataAccessor + 5))(v6);
  }
  return v7;
}


// CSceneEntity::UnloadScene  (line 3215, @0x000000000238d6b0, libserver.so)  // inlines: NetworkStateChanged, Purge, RemoveAll
// calls: CSceneEntity::ClearSceneEvents, CBaseFlex::RemoveChoreoScene, CChoreoScene::GetNumActors, CUtlMemory<CHandle<CBaseFlex>, int>::Purge
// callers: CSceneEntity::ScriptLoadSceneFromString, CSceneEntity::UpdateOnRemove
void __fastcall CSceneEntity::UnloadScene(CSceneEntity *const this)
{
  CChoreoScene *m_pScene; // rsi
  int v3; // r12d
  CBaseFlex *v4; // rax
  bool v5; // zf
  int m_Size; // r12d
  CChoreoScene *v7; // rdi

  m_pScene = this->m_pScene;
  if ( m_pScene == 0 )
    goto LABEL_12;
  v3 = 0;
  CSceneEntity::ClearSceneEvents(this, m_pScene, 0);
  while ( v3 < CChoreoScene::GetNumActors(this->m_pScene) )
  {
    v4 = (*(this->_vptr_IHandleEntity + 253))(this, v3);
    if ( v4 != 0 )
      CBaseFlex::RemoveChoreoScene(v4, this->m_pScene, 0);
    ++v3;
  }
  v5 = (this->m_hActorList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  m_Size = this->m_hActorList.m_Vector.m_Size;
  this->m_hActorList.m_Vector.m_Size = 0;
  if ( !v5 )
  {
    if ( m_Size <= 0 )
      goto LABEL_10;
    goto LABEL_9;
  }
  CUtlMemory<CHandle<CBaseFlex>,int>::Purge(&this->m_hActorList.m_Vector.m_Memory);
  if ( m_Size > 0 )
LABEL_9:
    (*(this->_vptr_IHandleEntity + 22))(this, 952, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
LABEL_10:
  v7 = this->m_pScene;
  if ( v7 != 0 )
    (*(v7->_vptr_ICurveDataAccessor + 5))(v7);
LABEL_12:
  this->m_pScene = 0;
}


// CSceneEntity::ProcessEvent  (line 3247, @0x0000000002381ee0, libserver.so)
// calls: CChoreoEvent::GetType, CChoreoEvent::GetSubScene, CChoreoScene::SimulationFinished, CChoreoScene::Think
void __fastcall CSceneEntity::ProcessEvent(
        CSceneEntity *const this,
        float currenttime,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  CChoreoScene *SubScene; // rax
  CChoreoScene *v6; // rbx
  float v7; // xmm1_4

  if ( CChoreoEvent::GetType(event) == SUBSCENE )
  {
    SubScene = CChoreoEvent::GetSubScene(event);
    v6 = SubScene;
    if ( SubScene != 0 && !CChoreoScene::SimulationFinished(SubScene) )
      CChoreoScene::Think(v6, v7);
  }
}


// CSceneEntity::CheckEvent  (line 3281, @0x0000000002382060, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName
// calls: CChoreoEvent::GetType, CChoreoEvent::GetActor, CBaseFlex::CheckSceneEvent, CChoreoActor::GetName, Warning
// strings: "CSceneEntity %s unable to find actor \"%s\"\n"
bool __fastcall CSceneEntity::CheckEvent(
        CSceneEntity *const this,
        float currenttime,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  CChoreoActor *Actor; // r14
  CBaseFlex *v9; // rax
  const char *Name; // rax
  const char *m_pAsString; // rsi

  if ( CChoreoEvent::GetType(event) == SUBSCENE )
    return 1;
  Actor = CChoreoEvent::GetActor(event);
  if ( Actor == 0 )
    return 1;
  v9 = (*(this->_vptr_IHandleEntity + 254))(this, Actor);
  if ( v9 == 0 )
  {
    Name = CChoreoActor::GetName(Actor);
    m_pAsString = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
    Warning("CSceneEntity %s unable to find actor \"%s\"\n", m_pAsString, Name);
    return 1;
  }
  return CBaseFlex::CheckSceneEvent(v9, COERCE_DOUBLE(LODWORD(currenttime)), scene, event);
}


// CSceneEntity::FindNamedActor  (line 3320, @0x00000000023a8260, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, IsValidIndex, LookupEntity, NetworkStateChanged, Set, SetChangeInfoSerialNumber, SetCount, StateChanged, V_memcmp, operator CBaseFlex*, operator CEntityInstance*, operator=, operator[]
// calls: CChoreoScene::GetActor, CChoreoActor::GetName, memcmp, CChoreoScene::GetNumActors, CChoreoScene::GetFilename, DevWarning(char const*,...), CUtlVectorBase<CHandle<CBaseFlex>, CNetworkUtlVector_MemoryType<CHandle<CBaseFlex>, -1> >::SetCount
// strings: "Scene %s has %d actors, but scene entity only has %d actors\n"
// globals: CEntityHandle::gm_pEntityList
CBaseFlex *__fastcall CSceneEntity::FindNamedActor(CSceneEntity *const this, int index)
{
  int m_Size; // r13d
  CHandle<CBaseFlex> *v5; // rax
  uint32 m_Index; // ecx
  __int16 v7; // dx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CChoreoActor *Actor; // rax
  __int64 (__fastcall *v11)(CSceneEntity *const, const char *); // r15
  const char *Name; // rax
  __int64 v13; // rax
  CBaseFlex *v14; // r15
  __int64 v15; // rdx
  __int16 v16; // ax
  CEventRegister *v17; // rax
  CBaseFlex *result; // rax
  int v19; // r12d
  const char *Filename; // rax
  int NumActors; // eax
  CEventRegister *m_pTimerEvent; // rax
  CBaseFlex *m_pInstance; // r15
  char v24; // dl
  uint32 s2[16]; // [rsp+0h] [rbp-40h] BYREF

  m_Size = this->m_hActorList.m_Vector.m_Size;
  if ( m_Size == 0 )
  {
    NumActors = CChoreoScene::GetNumActors(this->m_pScene);
    CUtlVectorBase<CHandle<CBaseFlex>,CNetworkUtlVector_MemoryType<CHandle<CBaseFlex>,-1>>::SetCount(
      &this->m_hActorList.m_Vector,
      NumActors);
    (*(this->_vptr_IHandleEntity + 22))(this, 952, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_pTimerEvent = this->m_NetworkTransmitComponent.m_pTimerEvent;
    if ( m_pTimerEvent != 0 && m_pTimerEvent->m_bRegistered )
    {
      this->m_NetworkTransmitComponent.m_bPendingStateChange = 1;
      m_Size = this->m_hActorList.m_Vector.m_Size;
    }
    else
    {
      m_Size = this->m_hActorList.m_Vector.m_Size;
      this->m_NetworkTransmitComponent.m_nStateFlags |= 3u;
      this->m_NetworkTransmitComponent.m_Accessor.m_iChangeInfoSerialNumber = 0;
    }
  }
  if ( index < 0 || index >= m_Size )
  {
    v19 = CChoreoScene::GetNumActors(this->m_pScene);
    Filename = CChoreoScene::GetFilename(this->m_pScene);
    DevWarning("Scene %s has %d actors, but scene entity only has %d actors\n", Filename, v19, m_Size);
    return 0;
  }
  v5 = &this->m_hActorList.m_Vector.m_Memory.m_pMemory[index];
  m_Index = v5->m_Index;
  if ( v5->m_Index + 2 > 1 )
  {
    v7 = v5->m_Index;
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[v7 & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
      {
        m_pInstance = v9->m_pInstance;
        if ( v9->m_pInstance != 0 )
        {
          v24 = (*(m_pInstance->_vptr_IHandleEntity + 139))(m_pInstance);
          result = m_pInstance;
          if ( v24 != 0 )
            return result;
        }
      }
    }
  }
  Actor = CChoreoScene::GetActor(this->m_pScene, index);
  if ( Actor == 0 )
    return 0;
  v11 = *(this->_vptr_IHandleEntity + 255);
  Name = CChoreoActor::GetName(Actor);
  v13 = v11(this, Name);
  v14 = v13;
  if ( v13 == 0 )
    return 0;
  v15 = *(v13 + 8);
  s2[0] = -1;
  if ( v15 != 0 )
  {
    v16 = 0x7FFF;
    if ( *(v15 + 16) != -1 )
      v16 = *(v15 + 16) & 0x7FFF;
    s2[0] = (((*(v15 + 16) >> 15) - (*(v15 + 48) & 1)) << 15) | v16 & 0x7FFF;
  }
  if ( memcmp(&this->m_hActorList.m_Vector.m_Memory.m_pMemory[index], s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 952, index, 0xFFFFFFFFLL);
    this->m_hActorList.m_Vector.m_Memory.m_pMemory[index].m_Index = s2[0];
  }
  v17 = this->m_NetworkTransmitComponent.m_pTimerEvent;
  if ( v17 != 0 && v17->m_bRegistered )
  {
    this->m_NetworkTransmitComponent.m_bPendingStateChange = 1;
    return v14;
  }
  else
  {
    this->m_NetworkTransmitComponent.m_nStateFlags |= 3u;
    this->m_NetworkTransmitComponent.m_Accessor.m_iChangeInfoSerialNumber = 0;
    return v14;
  }
}


// CSceneEntity::FindNamedActor  (line 3362, @0x0000000002381a20, libserver.so)
// calls: CChoreoScene::FindActorIndex
CBaseFlex *__fastcall CSceneEntity::FindNamedActor(CSceneEntity *const this, CChoreoActor *pChoreoActor)
{
  int ActorIndex; // eax

  ActorIndex = CChoreoScene::FindActorIndex(this->m_pScene, pChoreoActor);
  if ( ActorIndex < 0 )
    return 0;
  else
    return (*(this->_vptr_IHandleEntity + 253))(this, ActorIndex);
}


// CSceneEntity::FindNamedActor  (line 3379, @0x00000000023814c0, libserver.so)
// calls: __dynamic_cast
// callers: CInstancedSceneEntity::FindNamedActor
CBaseFlex *__fastcall CSceneEntity::FindNamedActor(CSceneEntity *const this, const char *name)
{
  const void *v2; // rax

  v2 = (*(this->_vptr_IHandleEntity + 256))(this, name, 0, 1, 0);
  if ( v2 != 0 )
    return __dynamic_cast(v2, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseFlex, 0);
  else
    return 0;
}


// CSceneEntity::FindNamedTarget  (line 3404, @0x0000000002389270, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetInstance, String, ToCStr, operator CBaseEntity*, strchr
// calls: V_stricmp_fast, strchr, CGameEntitySystem::FindEntityByName, __dynamic_cast, CEntityHandle::operator CEntityInstance*
// callers: CSceneEntity::FindNamedEntity
// strings: "!activator"
CBaseEntity *__fastcall CSceneEntity::FindNamedTarget(CSceneEntity *const this, string_t iszTarget, bool bBaseFlexOnly)
{
  const char *v6; // rdi
  UtlSymLargeId_t v7; // r14
  UtlSymLargeId_t v8; // rdi
  CBaseEntity *v9; // r15
  CBaseEntity *EntityByName; // rax
  string_t v12; // [rsp+10h] [rbp-40h] BYREF

  v6 = "";
  if ( *iszTarget.u.m_Id != 0 )
    v6 = *iszTarget.u.m_pAsString;
  if ( V_stricmp_fast(v6, "!activator") == 0 )
    return CEntityHandle::operator CEntityInstance *(&this->m_hActivator);
  v7 = *iszTarget.u.m_Id;
  if ( *iszTarget.u.m_Id != 0 && strchr(*iszTarget.u.m_pAsString, 42) != 0 )
  {
    v8 = v7;
    v9 = 0;
    while ( 1 )
    {
      v12.u.m_Id = v8;
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v9, &v12, this, 0, 0, 0);
      v9 = EntityByName;
      if ( EntityByName == 0 )
        break;
      if ( !bBaseFlexOnly || __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseFlex, 0) != 0 )
        return v9;
      v8 = *iszTarget.u.m_Id;
    }
    return 0;
  }
  else
  {
    v12.u.m_Id = v7;
    return CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &v12, this, 0, 0, 0);
  }
}


// CSceneFindMarkFilter::ShouldFindEntity  (line 3444, @0x00000000023acca0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LengthSqr, LookupEntity, Ray_t, RnCollisionAttr_t, Set, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, WorldAlignMaxs, WorldAlignMins, operator CBaseEntity*, operator CEntityInstance*, operator!, operator*=, operator->, operator=
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CSceneFindMarkFilter::ShouldFindEntity(CSceneFindMarkFilter *const this, CEntityInstance *pEntity)
{
  bool result; // al
  uint32 m_Index; // edx
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  const CBaseEntity *m_pInstance; // r15
  const Vector *AbsOrigin; // rax
  uint32 v17; // edx
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  unsigned int v21; // eax
  __int64 v22; // rsi
  CEntityIdentity *v23; // rcx
  CEntityIdentity *v24; // rcx
  CCollisionProperty *m_pCollision; // rdi
  __int64 v26; // rax
  const Vector *v27; // r12
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rdi
  const Vector *v32; // rax
  float v33; // xmm0_4
  float v34; // xmm0_4
  float v35; // xmm0_4
  CEntityIdentity *v36; // rdx
  int v37; // eax
  __int16 v38; // cx
  float v39; // [rsp+4h] [rbp-17Ch]
  float v40; // [rsp+4h] [rbp-17Ch]
  float v41; // [rsp+8h] [rbp-178h]
  float v42; // [rsp+8h] [rbp-178h]
  float v43; // [rsp+Ch] [rbp-174h]
  float v44; // [rsp+Ch] [rbp-174h]
  CTraceFilterSimple v45; // [rsp+10h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-130h] BYREF
  trace_t tr; // [rsp+A0h] [rbp-E0h] BYREF

  result = 1;
  m_Index = this->m_hActor.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(this->m_hActor.m_Index);
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[m_Index_low & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
      {
        if ( pEntity == 0 )
          return 0;
        v9 = this->m_hEntityFound.m_Index;
        if ( v9 + 2 <= 1
          || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntityFound.m_Index) >> 9) & 0x3F]) == 0
          || (v11 = &v10[this->m_hEntityFound.m_Index & 0x1FF]) == 0
          || v9 != v11->m_EHandle.m_Index
          || v11->m_pInstance == 0 )
        {
          m_pEntity = pEntity->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v14 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hEntityFound.m_Index) = v14 | this->m_hEntityFound.m_Index & 0x8000;
            this->m_hEntityFound.m_Index = (v13 << 15) | this->m_hEntityFound.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hEntityFound.m_Index = -1;
          }
        }
        m_pInstance = 0;
        memset(&tr.m_ShapeAttributes, 0, 31);
        tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
        CGameTrace::Init(&tr);
        AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
        v17 = this->m_hActor.m_Index;
        x = AbsOrigin->x;
        y = AbsOrigin->y;
        z = AbsOrigin->z;
        v21 = v17 + 2;
        v22 = CEntityHandle::gm_pEntityList;
        if ( v17 + 2 > 1 )
        {
          v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActor.m_Index) >> 9) & 0x3F];
          if ( v23 != 0 )
          {
            v24 = &v23[this->m_hActor.m_Index & 0x1FF];
            if ( v24 != 0 && v17 == v24->m_EHandle.m_Index )
              m_pInstance = v24->m_pInstance;
          }
        }
        m_pCollision = m_pInstance->m_pCollision;
        if ( m_pCollision != 0 )
        {
          v39 = y;
          v41 = z;
          v43 = x;
          v26 = (*(m_pCollision->_vptr_ICollideable + 2))(m_pCollision, CEntityHandle::gm_pEntityList);
          v17 = this->m_hActor.m_Index;
          v22 = CEntityHandle::gm_pEntityList;
          v27 = v26;
          x = v43;
          z = v41;
          y = v39;
          v21 = v17 + 2;
        }
        else
        {
          v27 = &vec3_origin;
        }
        v28 = 0;
        if ( v21 > 1 )
        {
          v29 = *(v22 + 8 * ((LOWORD(this->m_hActor.m_Index) >> 9) & 0x3F) + 8);
          if ( v29 != 0 )
          {
            v22 = 120LL * (this->m_hActor.m_Index & 0x1FF);
            v30 = (v22 + v29);
            if ( v30 != 0 && v17 == *(v30 + 4) )
              v28 = *v30;
          }
        }
        v31 = *(v28 + 528);
        if ( v31 != 0 )
        {
          v40 = y;
          v42 = z;
          v44 = x;
          v32 = (*(*v31 + 8LL))(v31, v22);
          x = v44;
          z = v42;
          y = v40;
        }
        else
        {
          v32 = &vec3_origin;
        }
        ray.m_Start.w = 0.0;
        ray.m_Delta.w = 0.0;
        ray.m_Delta.x = x - x;
        ray.m_Delta.y = y - y;
        ray.m_Delta.z = z - z;
        ray.m_StartOffset.w = 0.0;
        ray.m_Extents.w = 0.0;
        ray.m_flRadius = 0.0;
        ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                       + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
        ray.m_Extents.x = v27->x - v32->x;
        ray.m_Extents.y = v27->y - v32->y;
        v33 = v27->z - v32->z;
        ray.m_Extents.x = ray.m_Extents.x * 0.5;
        ray.m_Extents.y = ray.m_Extents.y * 0.5;
        ray.m_Extents.z = v33 * 0.5;
        ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
                     + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
        ray.m_StartOffset.x = v32->x + v27->x;
        ray.m_StartOffset.y = v32->y + v27->y;
        v34 = v32->z;
        ray.m_Start.x = x + (ray.m_StartOffset.x * 0.5);
        v35 = (v34 + v27->z) * 0.5;
        ray.m_Start.y = y + (ray.m_StartOffset.y * 0.5);
        ray.m_Start.z = z + v35;
        ray.m_StartOffset.x = -(ray.m_StartOffset.x * 0.5);
        ray.m_StartOffset.y = -(ray.m_StartOffset.y * 0.5);
        ray.m_StartOffset.z = -v35;
        CTraceFilterSimple::CTraceFilterSimple(&v45, m_pInstance, 4, 0);
        v45.m_attr.m_nInteractsWith |= 0x87001uLL;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v45, &tr);
        if ( tr.startsolid )
        {
          return 0;
        }
        else
        {
          v36 = pEntity->m_pEntity;
          if ( v36 != 0 )
          {
            v37 = (v36->m_EHandle.m_Index >> 15) - (v36->m_flags & 1);
            if ( v36->m_EHandle.m_Index == -1 )
              v38 = 0x7FFF;
            else
              v38 = v36->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hEntityFound.m_Index) = v38 | this->m_hEntityFound.m_Index & 0x8000;
            this->m_hEntityFound.m_Index = (v37 << 15) | this->m_hEntityFound.m_Index & 0x7FFF;
            return 1;
          }
          else
          {
            this->m_hEntityFound.m_Index = -1;
            return 1;
          }
        }
      }
    }
  }
  return result;
}


// CSceneEntity::ScriptFindNamedEntity  (line 3581, @0x0000000002383580, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CSceneEntity::ScriptFindNamedEntity(CSceneEntity *const this, const char *name)
{
  CEntityInstance *v2; // rax
  CEntityInstance *v4; // [rsp+8h] [rbp-8h]

  v2 = (*(this->_vptr_IHandleEntity + 256))(this, name, 0, 0, 0);
  if ( v2 == 0 )
    return 0;
  if ( v2->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return v2->m_pEntity->m_hPublicScope.m_hScope;
  v4 = v2;
  CEntityInstance::CreatePublicScriptScope(v2, 0);
  return v4->m_pEntity->m_hPublicScope.m_hScope;
}


// CSceneEntity::ScriptFindCamera  (line 3586, @0x0000000002383520, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CSceneEntity::ScriptFindCamera(CSceneEntity *const this)
{
  CEntityInstance *v1; // rax
  CEntityInstance *v3; // [rsp+8h] [rbp-8h]

  v1 = (*(this->_vptr_IHandleEntity + 258))(this);
  if ( v1 == 0 )
    return 0;
  if ( v1->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return v1->m_pEntity->m_hPublicScope.m_hScope;
  v3 = v1;
  CEntityInstance::CreatePublicScriptScope(v1, 0);
  return v3->m_pEntity->m_hPublicScope.m_hScope;
}


// CSceneEntity::FindNamedEntity  (line 3595, @0x00000000023893d0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlSymbolLarge, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFilterResult, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetActor, operator CBaseEntity*, operator CEntityInstance*, operator=, operator==<CBaseEntity>
// calls: V_stricmp_fast, CSceneEntity::FindNamedTarget, UTIL_GetLocalPlayer, CEntityHandle::operator CEntityInstance*, operator new, CGameEntitySystem::FindEntityByName, RandomInt
// callers: CInstancedSceneEntity::FindNamedEntity
// strings: "!player", "!target1", "!target2", "!target3", "!target4", "!target5" (9 total)
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CSceneEntity::FindNamedEntity(
        CSceneEntity *const this,
        const char *name,
        CBaseEntity *pActor,
        bool bBaseFlexOnly,
        bool bUseClear)
{
  CBaseEntity *result; // rax
  uint32 m_Index; // eax
  unsigned __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  __int64 v14; // rsi
  CEntityIdentity *v15; // rcx
  CBaseEntity *NamedTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v18; // eax
  __int16 v19; // cx
  CConcreteEntityList *v20; // rsi
  CEntityIdentity *v21; // rsi
  CEntityIdentity *v22; // rdx
  EHANDLE *p_m_hTarget6; // rbx
  CBaseEntity *v24; // rax
  CEntityIdentity *v25; // rdx
  int v26; // eax
  __int16 v27; // cx
  CBaseEntity *v28; // rax
  CEntityIdentity *v29; // rdx
  int v30; // eax
  __int16 v31; // cx
  CBaseEntity *v32; // rax
  CEntityIdentity *v33; // rdx
  int v34; // eax
  __int16 v35; // cx
  CBaseEntity *v36; // rax
  CEntityIdentity *v37; // rdx
  int v38; // eax
  __int16 v39; // cx
  CBaseEntity *v40; // rax
  CEntityIdentity *v41; // rdx
  int v42; // eax
  __int16 v43; // cx
  CBaseEntity *v44; // rax
  CEntityIdentity *v45; // rdx
  int v46; // eax
  __int16 v47; // cx
  CBaseEntity *v48; // rax
  CEntityIdentity *v49; // rdx
  int v50; // eax
  __int16 v51; // cx
  CEntityHandle *v52; // rax
  CEntityIdentity *v53; // rcx
  int v54; // edx
  __int16 v55; // si
  __int64 v56; // r15
  int v57; // r13d
  CBaseEntity *entityList[32]; // [rsp+10h] [rbp-130h] BYREF

  if ( V_stricmp_fast(name, "Player") == 0 || V_stricmp_fast(name, "!player") == 0 )
  {
    if ( gpGlobals->maxClients == 1 )
      return UTIL_GetLocalPlayer();
    return 0;
  }
  if ( V_stricmp_fast(name, "!target1") == 0 )
  {
    m_Index = this->m_hTarget1.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v12 = this->m_hTarget1.m_Index;
      v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v12 >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = v12 & 0x1FF;
        v15 = &v13[v14];
        if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index && v15->m_pInstance != 0 )
        {
          v22 = &v13[v14];
          goto LABEL_18;
        }
      }
    }
    entityList[0] = this->m_iszTarget1.u.m_Id;
    NamedTarget = CSceneEntity::FindNamedTarget(this, entityList, bBaseFlexOnly);
    if ( NamedTarget != 0 && (m_pEntity = NamedTarget->m_pEntity) != 0 )
    {
      v18 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v19 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v20 = CEntityHandle::gm_pEntityList;
      LOWORD(this->m_hTarget1.m_Index) = v19 | this->m_hTarget1.m_Index & 0x8000;
      m_Index = (v18 << 15) | this->m_hTarget1.m_Index & 0x7FFF;
      this->m_hTarget1.m_Index = m_Index;
      if ( m_Index + 2 > 1 )
      {
        v21 = v20->m_pIdentityChunks[(LOWORD(this->m_hTarget1.m_Index) >> 9) & 0x3F];
        if ( v21 != 0 )
        {
          v22 = &v21[this->m_hTarget1.m_Index & 0x1FF];
          if ( v22 != 0 )
          {
LABEL_18:
            if ( m_Index == v22->m_EHandle.m_Index )
              return v22->m_pInstance;
          }
        }
      }
    }
    else
    {
      this->m_hTarget1.m_Index = -1;
    }
    return 0;
  }
  if ( V_stricmp_fast(name, "!target2") != 0 )
  {
    if ( V_stricmp_fast(name, "!target3") != 0 )
    {
      if ( V_stricmp_fast(name, "!target4") != 0 )
      {
        if ( V_stricmp_fast(name, "!target5") != 0 )
        {
          if ( V_stricmp_fast(name, "!target6") == 0 )
          {
            p_m_hTarget6 = &this->m_hTarget6;
            if ( CEntityHandle::operator CEntityInstance *(&this->m_hTarget6) == 0 )
            {
              entityList[0] = this->m_iszTarget6.u.m_Id;
              v40 = CSceneEntity::FindNamedTarget(this, entityList, bBaseFlexOnly);
              if ( v40 != 0 && (v41 = v40->m_pEntity) != 0 )
              {
                v42 = (v41->m_EHandle.m_Index >> 15) - (v41->m_flags & 1);
                if ( v41->m_EHandle.m_Index == -1 )
                  v43 = 0x7FFF;
                else
                  v43 = v41->m_EHandle.m_Index & 0x7FFF;
                LOWORD(this->m_hTarget6.m_Index) = v43 | this->m_hTarget6.m_Index & 0x8000;
                this->m_hTarget6.m_Index = (v42 << 15) | this->m_hTarget6.m_Index & 0x7FFF;
              }
              else
              {
                this->m_hTarget6.m_Index = -1;
              }
            }
            return CEntityHandle::operator CEntityInstance *(p_m_hTarget6);
          }
          if ( V_stricmp_fast(name, "!target7") == 0 )
          {
            p_m_hTarget6 = &this->m_hTarget7;
            if ( CEntityHandle::operator CEntityInstance *(&this->m_hTarget7) == 0 )
            {
              entityList[0] = this->m_iszTarget7.u.m_Id;
              v44 = CSceneEntity::FindNamedTarget(this, entityList, bBaseFlexOnly);
              if ( v44 != 0 && (v45 = v44->m_pEntity) != 0 )
              {
                v46 = (v45->m_EHandle.m_Index >> 15) - (v45->m_flags & 1);
                if ( v45->m_EHandle.m_Index == -1 )
                  v47 = 0x7FFF;
                else
                  v47 = v45->m_EHandle.m_Index & 0x7FFF;
                LOWORD(this->m_hTarget7.m_Index) = v47 | this->m_hTarget7.m_Index & 0x8000;
                this->m_hTarget7.m_Index = (v46 << 15) | this->m_hTarget7.m_Index & 0x7FFF;
              }
              else
              {
                this->m_hTarget7.m_Index = -1;
              }
            }
            return CEntityHandle::operator CEntityInstance *(p_m_hTarget6);
          }
          if ( V_stricmp_fast(name, "!target8") == 0 )
          {
            p_m_hTarget6 = &this->m_hTarget8;
            if ( CEntityHandle::operator CEntityInstance *(&this->m_hTarget8) == 0 )
            {
              entityList[0] = this->m_iszTarget8.u.m_Id;
              v48 = CSceneEntity::FindNamedTarget(this, entityList, bBaseFlexOnly);
              if ( v48 != 0 && (v49 = v48->m_pEntity) != 0 )
              {
                v50 = (v49->m_EHandle.m_Index >> 15) - (v49->m_flags & 1);
                if ( v49->m_EHandle.m_Index == -1 )
                  v51 = 0x7FFF;
                else
                  v51 = v49->m_EHandle.m_Index & 0x7FFF;
                LOWORD(this->m_hTarget8.m_Index) = v51 | this->m_hTarget8.m_Index & 0x8000;
                this->m_hTarget8.m_Index = (v50 << 15) | this->m_hTarget8.m_Index & 0x7FFF;
              }
              else
              {
                this->m_hTarget8.m_Index = -1;
              }
            }
            return CEntityHandle::operator CEntityInstance *(p_m_hTarget6);
          }
          if ( pActor != 0 && (*(pActor->_vptr_IHandleEntity + 144))(pActor) != 0 )
          {
            if ( !bUseClear )
              return 0;
            v52 = operator new(0x10u);
            *&v52->m_Index = &off_40A7390;
            v52[2].m_Index = -1;
            v52[3].m_Index = -1;
            v53 = pActor->m_pEntity;
            if ( v53 != 0 )
            {
              v54 = (v53->m_EHandle.m_Index >> 15) - (v53->m_flags & 1);
              if ( v53->m_EHandle.m_Index == -1 )
                v55 = 0x7FFF;
              else
                v55 = v53->m_EHandle.m_Index & 0x7FFF;
              LOWORD(v52[2].m_Index) = v55 | v52[2].m_Index & 0x8000;
              v52[2].m_Index = (v54 << 15) | v52[2].m_Index & 0x7FFF;
            }
            return CEntityHandle::operator CEntityInstance *(v52 + 3);
          }
          else
          {
            v56 = 0;
            result = 0;
            while ( 1 )
            {
              v57 = v56;
              result = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, result, name, this, pActor, 0, 0);
              if ( result == 0 )
                break;
              entityList[v56++] = result;
              if ( v56 == 32 )
              {
                v57 = 32;
                return entityList[RandomInt(0, (v57 - 1))];
              }
            }
            if ( v56 == 0 )
              return result;
            return entityList[RandomInt(0, (v57 - 1))];
          }
        }
        p_m_hTarget6 = &this->m_hTarget5;
        result = CEntityHandle::operator CEntityInstance *(&this->m_hTarget5);
        if ( result != 0 )
          return result;
        entityList[0] = this->m_iszTarget5.u.m_Id;
        v36 = CSceneEntity::FindNamedTarget(this, entityList, bBaseFlexOnly);
        if ( v36 != 0 && (v37 = v36->m_pEntity) != 0 )
        {
          v38 = (v37->m_EHandle.m_Index >> 15) - (v37->m_flags & 1);
          if ( v37->m_EHandle.m_Index == -1 )
            v39 = 0x7FFF;
          else
            v39 = v37->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hTarget5.m_Index) = v39 | this->m_hTarget5.m_Index & 0x8000;
          this->m_hTarget5.m_Index = (v38 << 15) | this->m_hTarget5.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hTarget5.m_Index = -1;
        }
      }
      else
      {
        p_m_hTarget6 = &this->m_hTarget4;
        result = CEntityHandle::operator CEntityInstance *(&this->m_hTarget4);
        if ( result != 0 )
          return result;
        entityList[0] = this->m_iszTarget4.u.m_Id;
        v32 = CSceneEntity::FindNamedTarget(this, entityList, bBaseFlexOnly);
        if ( v32 != 0 && (v33 = v32->m_pEntity) != 0 )
        {
          v34 = (v33->m_EHandle.m_Index >> 15) - (v33->m_flags & 1);
          if ( v33->m_EHandle.m_Index == -1 )
            v35 = 0x7FFF;
          else
            v35 = v33->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hTarget4.m_Index) = v35 | this->m_hTarget4.m_Index & 0x8000;
          this->m_hTarget4.m_Index = (v34 << 15) | this->m_hTarget4.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hTarget4.m_Index = -1;
        }
      }
      return CEntityHandle::operator CEntityInstance *(p_m_hTarget6);
    }
    p_m_hTarget6 = &this->m_hTarget3;
    result = CEntityHandle::operator CEntityInstance *(&this->m_hTarget3);
    if ( result == 0 )
    {
      entityList[0] = this->m_iszTarget3.u.m_Id;
      v28 = CSceneEntity::FindNamedTarget(this, entityList, bBaseFlexOnly);
      if ( v28 != 0 && (v29 = v28->m_pEntity) != 0 )
      {
        v30 = (v29->m_EHandle.m_Index >> 15) - (v29->m_flags & 1);
        v31 = 0x7FFF;
        if ( v29->m_EHandle.m_Index != -1 )
          v31 = v29->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hTarget3.m_Index) = v31 | this->m_hTarget3.m_Index & 0x8000;
        this->m_hTarget3.m_Index = (v30 << 15) | this->m_hTarget3.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hTarget3.m_Index = -1;
      }
      return CEntityHandle::operator CEntityInstance *(p_m_hTarget6);
    }
  }
  else
  {
    p_m_hTarget6 = &this->m_hTarget2;
    result = CEntityHandle::operator CEntityInstance *(&this->m_hTarget2);
    if ( result == 0 )
    {
      entityList[0] = this->m_iszTarget2.u.m_Id;
      v24 = CSceneEntity::FindNamedTarget(this, entityList, bBaseFlexOnly);
      if ( v24 != 0 && (v25 = v24->m_pEntity) != 0 )
      {
        v26 = (v25->m_EHandle.m_Index >> 15) - (v25->m_flags & 1);
        v27 = 0x7FFF;
        if ( v25->m_EHandle.m_Index != -1 )
          v27 = v25->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hTarget2.m_Index) = v27 | this->m_hTarget2.m_Index & 0x8000;
        this->m_hTarget2.m_Index = (v26 << 15) | this->m_hTarget2.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hTarget2.m_Index = -1;
      }
      return CEntityHandle::operator CEntityInstance *(p_m_hTarget6);
    }
  }
  return result;
}


// CSceneEntity::FindNamedEntityClosest  (line 3727, @0x0000000002384520, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, operator CBaseEntity*, operator CEntityInstance*
// calls: V_stricmp_fast, UTIL_GetLocalPlayer, CGameEntitySystem::FindEntityByName, RandomInt
// strings: "!activator", "!player", "!target1", "!target2", "!target3", "!target4" (9 total)
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CSceneEntity::FindNamedEntityClosest(
        CSceneEntity *const this,
        const char *name,
        CBaseEntity *pActor,
        bool bBaseFlexOnly,
        bool bUseClear,
        const char *pszSecondary)
{
  const char *m_pAsString; // r12
  uint32 m_Index; // edx
  CBaseEntity *result; // rax
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  unsigned int v13; // ebx
  CBaseEntity *EntityByName; // r15

  m_pAsString = name;
  if ( V_stricmp_fast(name, "!activator") == 0 )
  {
    m_Index = this->m_hActivator.m_Index;
    result = 0;
    if ( m_Index + 2 > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[this->m_hActivator.m_Index & 0x1FF];
        if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
          return v12->m_pInstance;
      }
    }
    return result;
  }
  if ( V_stricmp_fast(m_pAsString, "Player") == 0 || V_stricmp_fast(m_pAsString, "!player") == 0 )
  {
    if ( gpGlobals->maxClients == 1 )
      return UTIL_GetLocalPlayer();
    else
      return 0;
  }
  if ( V_stricmp_fast(m_pAsString, "!target1") != 0 )
  {
    if ( V_stricmp_fast(m_pAsString, "!target2") != 0 )
    {
      if ( V_stricmp_fast(m_pAsString, "!target3") != 0 )
      {
        if ( V_stricmp_fast(m_pAsString, "!target4") != 0 )
        {
          if ( V_stricmp_fast(m_pAsString, "!target5") != 0 )
          {
            if ( V_stricmp_fast(m_pAsString, "!target6") != 0 )
            {
              if ( V_stricmp_fast(m_pAsString, "!target7") == 0 )
              {
                if ( this->m_iszTarget7.u.m_Id == 0 )
                  goto LABEL_15;
                m_pAsString = this->m_iszTarget7.u.m_pAsString;
              }
            }
            else
            {
              if ( this->m_iszTarget6.u.m_Id == 0 )
                goto LABEL_15;
              m_pAsString = this->m_iszTarget6.u.m_pAsString;
            }
          }
          else
          {
            if ( this->m_iszTarget5.u.m_Id == 0 )
              goto LABEL_15;
            m_pAsString = this->m_iszTarget5.u.m_pAsString;
          }
        }
        else
        {
          if ( this->m_iszTarget4.u.m_Id == 0 )
            goto LABEL_15;
          m_pAsString = this->m_iszTarget4.u.m_pAsString;
        }
      }
      else
      {
        if ( this->m_iszTarget3.u.m_Id == 0 )
          goto LABEL_15;
        m_pAsString = this->m_iszTarget3.u.m_pAsString;
      }
    }
    else
    {
      if ( this->m_iszTarget2.u.m_Id == 0 )
        goto LABEL_15;
      m_pAsString = this->m_iszTarget2.u.m_pAsString;
    }
  }
  else
  {
    if ( this->m_iszTarget1.u.m_Id == 0 )
    {
LABEL_15:
      m_pAsString = "";
      goto LABEL_16;
    }
    m_pAsString = this->m_iszTarget1.u.m_pAsString;
  }
LABEL_16:
  v13 = 0;
  EntityByName = 0;
  do
  {
    EntityByName = CGameEntitySystem::FindEntityByName(
                     g_pGameEntitySystem,
                     EntityByName,
                     m_pAsString,
                     this,
                     pActor,
                     0,
                     0);
    if ( EntityByName != 0 )
      RandomInt(0, v13);
    ++v13;
  }
  while ( v13 != 32 );
  return 0;
}


// CSceneEntity::FindCamera  (line 3829, @0x0000000002383cd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CGameEntitySystem::FindEntityByClassname, __dynamic_cast
// strings: "point_viewcontrol"
// globals: CEntityHandle::gm_pEntityList
CTriggerCamera *__fastcall CSceneEntity::FindCamera(CSceneEntity *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CTriggerCamera *result; // rax
  CTriggerCamera *EntityByClassname; // [rsp+8h] [rbp-18h]

  m_Index = this->m_hCamera.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCamera.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hCamera.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || v4->m_pInstance == 0
    || (result = __dynamic_cast(v4->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CTriggerCamera, 0)) == 0 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, "point_viewcontrol");
    (*(this->_vptr_IHandleEntity + 259))(this, EntityByClassname);
    return EntityByClassname;
  }
  return result;
}


// CSceneEntity::SetCamera  (line 3845, @0x0000000002380a90, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
void __fastcall CSceneEntity::SetCamera(CSceneEntity *const this, CTriggerCamera *pCamera)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  if ( pCamera != 0 && (m_pEntity = pCamera->m_pEntity) != 0 )
  {
    v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v4 = 0x7FFF;
    else
      v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hCamera.m_Index) = v4 | this->m_hCamera.m_Index & 0x8000;
    this->m_hCamera.m_Index = (v3 << 15) | this->m_hCamera.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hCamera.m_Index = -1;
  }
}


// CSceneEntity::ClearSceneEvents  (line 3853, @0x000000000238d580, libserver.so)  // inlines: String, ToCStr
// calls: LocalScene_Printf, CBaseFlex::ClearSceneEvents, CChoreoScene::GetNumActors, CChoreoScene::GetNumEvents, CChoreoScene::GetEvent, CChoreoEvent::GetType, CChoreoScene::IsSubScene, CChoreoEvent::GetSubScene
// callers: CSceneEntity::UnloadScene, CSceneEntity::OnSceneFinished, CSceneEntity::StartPlayback
// strings: "%s : %8.2f:  clearing events\n"
void __fastcall CSceneEntity::ClearSceneEvents(CSceneEntity *const this, CChoreoScene *scene, bool canceled)
{
  const char *m_pAsString; // rsi
  int v7; // ebx
  CBaseFlex *v8; // rax
  int v9; // ebx
  bool v10; // r15
  CChoreoEvent *Event; // rax
  CChoreoEvent *v12; // r14
  CChoreoScene *SubScene; // rax

  if ( this->m_pScene != 0 )
  {
    m_pAsString = "";
    if ( this->m_iszSceneFile.u.m_Id != 0 )
      m_pAsString = this->m_iszSceneFile.u.m_pAsString;
    v7 = 0;
    LocalScene_Printf("%s : %8.2f:  clearing events\n", m_pAsString, this->m_flCurrentTime);
    while ( v7 < CChoreoScene::GetNumActors(this->m_pScene) )
    {
      v8 = (*(this->_vptr_IHandleEntity + 253))(this, v7);
      if ( v8 != 0 )
        CBaseFlex::ClearSceneEvents(v8, scene, canceled);
      ++v7;
    }
    v9 = 0;
    v10 = canceled;
    while ( v9 < CChoreoScene::GetNumEvents(scene) )
    {
      Event = CChoreoScene::GetEvent(scene, v9);
      v12 = Event;
      if ( Event != 0 && CChoreoEvent::GetType(Event) == SUBSCENE && !CChoreoScene::IsSubScene(scene) )
      {
        SubScene = CChoreoEvent::GetSubScene(v12);
        if ( SubScene != 0 )
          CSceneEntity::ClearSceneEvents(this, SubScene, v10);
      }
      ++v9;
    }
  }
}


// CSceneEntity::ClearSchedules  (line 3904, @0x0000000002389e00, libserver.so)
// calls: CChoreoScene::GetNumEvents, CChoreoScene::GetEvent, CChoreoEvent::GetType, CChoreoScene::IsSubScene, CChoreoEvent::GetSubScene
// callers: CSceneEntity::DoThink
void __fastcall CSceneEntity::ClearSchedules(CSceneEntity *const this, CChoreoScene *scene)
{
  int i; // ebx
  CChoreoEvent *Event; // rax
  CChoreoEvent *v6; // r12
  CChoreoScene *SubScene; // rax

  if ( this->m_pScene != 0 )
  {
    for ( i = 0; i < CChoreoScene::GetNumEvents(scene); ++i )
    {
      Event = CChoreoScene::GetEvent(scene, i);
      v6 = Event;
      if ( Event != 0 && CChoreoEvent::GetType(Event) == SUBSCENE && !CChoreoScene::IsSubScene(scene) )
      {
        SubScene = CChoreoEvent::GetSubScene(v6);
        if ( SubScene != 0 )
          CSceneEntity::ClearSchedules(this, SubScene);
      }
    }
  }
}


// CSceneEntity::InterruptThisScene  (line 3943, @0x00000000023a32a0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CSceneEntity::RequestCompletionNotification
bool __fastcall CSceneEntity::InterruptThisScene(CSceneEntity *const this, CSceneEntity *otherScene)
{
  bool result; // al
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx

  result = 0;
  if ( this->m_nInterruptCount > 0 && !this->m_bInterrupted )
  {
    this->m_bInterrupted = 1;
    if ( otherScene != 0 && (m_pEntity = otherScene->m_pEntity) != 0 )
    {
      v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hInterruptScene.m_Index) = v6 | this->m_hInterruptScene.m_Index & 0x8000;
      this->m_hInterruptScene.m_Index = (v5 << 15) | this->m_hInterruptScene.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hInterruptScene.m_Index = -1;
    }
    CSceneEntity::RequestCompletionNotification(otherScene, this);
    (*(this->_vptr_IHandleEntity + 220))(this);
    return 1;
  }
  return result;
}


// CSceneEntity::CheckInterruptCompletion  (line 3995, @0x0000000002383f90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator!=<CSceneEntity>, operator=
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSceneEntity::CheckInterruptCompletion(CSceneEntity *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v2; // rsi
  CEntityIdentity *v3; // rdx
  __int64 v4; // rcx
  CEntityIdentity *v5; // rdx
  int (**vptr_IHandleEntity)(...); // rax

  if ( this->m_bInterrupted )
  {
    m_Index = this->m_hInterruptScene.m_Index;
    v2 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hInterruptScene.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = this->m_hInterruptScene.m_Index & 0x1FF, v2 = (8 * v4), (v5 = &v3[v4]) == 0)
      || m_Index != v5->m_EHandle.m_Index
      || v5->m_pInstance == 0
      || this->m_bInterruptSceneFinished )
    {
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      this->m_bInterrupted = 0;
      this->m_hInterruptScene.m_Index = -1;
      vptr_IHandleEntity[221](this, v2);
    }
  }
}


// CSceneEntity::ClearInterrupt  (line 4016, @0x0000000002380b10, libserver.so)  // inlines: Set, operator=
void __fastcall CSceneEntity::ClearInterrupt(CSceneEntity *const this)
{
  this->m_bInterrupted = 0;
  this->m_nInterruptCount = 0;
  this->m_hInterruptScene.m_Index = -1;
}


// CSceneEntity::RequestCompletionNotification  (line 4027, @0x00000000023a31b0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CSceneEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator=, operator[]
// calls: CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >::Find, CUtlMemory<CHandle<CSceneEntity>, int>::Grow
// callers: CSceneEntity::InterruptThisScene
void __fastcall CSceneEntity::RequestCompletionNotification(CSceneEntity *const this, CSceneEntity *notify)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  __int64 m_Size; // r12
  int v6; // eax
  CHandle<CSceneEntity> *v7; // rax
  CHandle<CSceneEntity> h; // [rsp+0h] [rbp-20h] BYREF

  h.m_Index = -1;
  if ( notify != 0 )
  {
    m_pEntity = notify->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      h.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  if ( CUtlVectorBase<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>::Find(
         &this->m_hNotifySceneCompletion,
         &h) == -1 )
  {
    m_Size = this->m_hNotifySceneCompletion.m_Size;
    v6 = this->m_hNotifySceneCompletion.m_Size;
    if ( m_Size == this->m_hNotifySceneCompletion.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CSceneEntity>,int>::Grow(&this->m_hNotifySceneCompletion.m_Memory, 1);
      v6 = this->m_hNotifySceneCompletion.m_Size;
    }
    this->m_hNotifySceneCompletion.m_Size = v6 + 1;
    v7 = &this->m_hNotifySceneCompletion.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      v7->m_Index = h.m_Index;
  }
}


// CSceneEntity::NotifyOfCompletion  (line 4042, @0x0000000002380b40, libserver.so)
void __fastcall CSceneEntity::NotifyOfCompletion(CSceneEntity *const this, CSceneEntity *interruptor)
{
  int (**vptr_IHandleEntity)(...); // rax

  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_bInterruptSceneFinished = 1;
  vptr_IHandleEntity[216](this, interruptor);
}


// CSceneEntity::AddListManager  (line 4054, @0x00000000023a3360, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CSceneListManager> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator=, operator[]
// calls: CUtlVectorBase<CHandle<CSceneListManager>, CUtlMemory<CHandle<CSceneListManager>, int> >::Find, CUtlMemory<CHandle<CSceneListManager>, int>::Grow
// callers: CSceneListManager::Activate
void __fastcall CSceneEntity::AddListManager(CSceneEntity *const this, CSceneListManager *pManager)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  __int64 m_Size; // r12
  int v6; // eax
  CHandle<CSceneListManager> *v7; // rax
  CHandle<CSceneListManager> h; // [rsp+0h] [rbp-20h] BYREF

  h.m_Index = -1;
  if ( pManager != 0 )
  {
    m_pEntity = pManager->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      h.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  if ( CUtlVectorBase<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>::Find(
         &this->m_hListManagers,
         &h) == -1 )
  {
    m_Size = this->m_hListManagers.m_Size;
    v6 = this->m_hListManagers.m_Size;
    if ( m_Size == this->m_hListManagers.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CSceneListManager>,int>::Grow(&this->m_hListManagers.m_Memory, 1);
      v6 = this->m_hListManagers.m_Size;
    }
    this->m_hListManagers.m_Size = v6 + 1;
    v7 = &this->m_hListManagers.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      v7->m_Index = h.m_Index;
  }
}


// CSceneEntity::ClearActivatorTargets  (line 4068, @0x000000000238a030, libserver.so)  // inlines: NetworkStateChanged, Purge, RemoveAll, Set, SetChangeInfoSerialNumber, StateChanged, String, ToCStr, operator=
// calls: V_stricmp_fast, CUtlMemory<CHandle<CBaseFlex>, int>::Purge
// callers: CSceneEntity::ScriptStartPlayback, CSceneEntity::InputStartPlayback
// strings: "!activator"
void __fastcall CSceneEntity::ClearActivatorTargets(CSceneEntity *const this)
{
  bool v2; // zf
  const char *m_pAsString; // rdi
  const char *v4; // rdi
  const char *v5; // rdi
  const char *v6; // rdi
  const char *v7; // rdi
  const char *v8; // rdi
  const char *v9; // rdi
  const char *v10; // rdi
  int v11; // r12d
  CEventRegister *v12; // rax
  int v13; // r12d
  CEventRegister *v14; // rax
  int v15; // r12d
  CEventRegister *v16; // rax
  int v17; // r12d
  CEventRegister *v18; // rax
  int v19; // r12d
  CEventRegister *v20; // rax
  int v21; // r12d
  CEventRegister *v22; // rax
  int v23; // r12d
  CEventRegister *v24; // rax
  int m_Size; // r12d
  CEventRegister *m_pTimerEvent; // rax

  v2 = this->m_iszTarget1.u.m_Id == 0;
  m_pAsString = "";
  if ( !v2 )
    m_pAsString = this->m_iszTarget1.u.m_pAsString;
  if ( V_stricmp_fast(m_pAsString, "!activator") == 0 )
  {
    v2 = (this->m_hActorList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_Size = this->m_hActorList.m_Vector.m_Size;
    this->m_hActorList.m_Vector.m_Size = 0;
    if ( v2 )
    {
      CUtlMemory<CHandle<CBaseFlex>,int>::Purge(&this->m_hActorList.m_Vector.m_Memory);
      if ( m_Size <= 0 )
      {
LABEL_78:
        m_pTimerEvent = this->m_NetworkTransmitComponent.m_pTimerEvent;
        if ( m_pTimerEvent != 0 && m_pTimerEvent->m_bRegistered )
        {
          this->m_NetworkTransmitComponent.m_bPendingStateChange = 1;
        }
        else
        {
          this->m_NetworkTransmitComponent.m_nStateFlags |= 3u;
          this->m_NetworkTransmitComponent.m_Accessor.m_iChangeInfoSerialNumber = 0;
        }
        this->m_hTarget1.m_Index = -1;
        goto LABEL_4;
      }
    }
    else if ( m_Size <= 0 )
    {
      goto LABEL_78;
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 952, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    goto LABEL_78;
  }
LABEL_4:
  v4 = "";
  if ( this->m_iszTarget2.u.m_Id != 0 )
    v4 = this->m_iszTarget2.u.m_pAsString;
  if ( V_stricmp_fast(v4, "!activator") == 0 )
  {
    v2 = (this->m_hActorList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v23 = this->m_hActorList.m_Vector.m_Size;
    this->m_hActorList.m_Vector.m_Size = 0;
    if ( v2 )
    {
      CUtlMemory<CHandle<CBaseFlex>,int>::Purge(&this->m_hActorList.m_Vector.m_Memory);
      if ( v23 <= 0 )
      {
LABEL_71:
        v24 = this->m_NetworkTransmitComponent.m_pTimerEvent;
        if ( v24 != 0 && v24->m_bRegistered )
        {
          this->m_NetworkTransmitComponent.m_bPendingStateChange = 1;
        }
        else
        {
          this->m_NetworkTransmitComponent.m_nStateFlags |= 3u;
          this->m_NetworkTransmitComponent.m_Accessor.m_iChangeInfoSerialNumber = 0;
        }
        this->m_hTarget2.m_Index = -1;
        goto LABEL_7;
      }
    }
    else if ( v23 <= 0 )
    {
      goto LABEL_71;
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 952, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    goto LABEL_71;
  }
LABEL_7:
  v5 = "";
  if ( this->m_iszTarget3.u.m_Id != 0 )
    v5 = this->m_iszTarget3.u.m_pAsString;
  if ( V_stricmp_fast(v5, "!activator") == 0 )
  {
    v2 = (this->m_hActorList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v21 = this->m_hActorList.m_Vector.m_Size;
    this->m_hActorList.m_Vector.m_Size = 0;
    if ( v2 )
    {
      CUtlMemory<CHandle<CBaseFlex>,int>::Purge(&this->m_hActorList.m_Vector.m_Memory);
      if ( v21 <= 0 )
      {
LABEL_64:
        v22 = this->m_NetworkTransmitComponent.m_pTimerEvent;
        if ( v22 != 0 && v22->m_bRegistered )
        {
          this->m_NetworkTransmitComponent.m_bPendingStateChange = 1;
        }
        else
        {
          this->m_NetworkTransmitComponent.m_nStateFlags |= 3u;
          this->m_NetworkTransmitComponent.m_Accessor.m_iChangeInfoSerialNumber = 0;
        }
        this->m_hTarget3.m_Index = -1;
        goto LABEL_10;
      }
    }
    else if ( v21 <= 0 )
    {
      goto LABEL_64;
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 952, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    goto LABEL_64;
  }
LABEL_10:
  v6 = "";
  if ( this->m_iszTarget4.u.m_Id != 0 )
    v6 = this->m_iszTarget4.u.m_pAsString;
  if ( V_stricmp_fast(v6, "!activator") == 0 )
  {
    v2 = (this->m_hActorList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v19 = this->m_hActorList.m_Vector.m_Size;
    this->m_hActorList.m_Vector.m_Size = 0;
    if ( v2 )
    {
      CUtlMemory<CHandle<CBaseFlex>,int>::Purge(&this->m_hActorList.m_Vector.m_Memory);
      if ( v19 <= 0 )
      {
LABEL_57:
        v20 = this->m_NetworkTransmitComponent.m_pTimerEvent;
        if ( v20 != 0 && v20->m_bRegistered )
        {
          this->m_NetworkTransmitComponent.m_bPendingStateChange = 1;
        }
        else
        {
          this->m_NetworkTransmitComponent.m_nStateFlags |= 3u;
          this->m_NetworkTransmitComponent.m_Accessor.m_iChangeInfoSerialNumber = 0;
        }
        this->m_hTarget4.m_Index = -1;
        goto LABEL_13;
      }
    }
    else if ( v19 <= 0 )
    {
      goto LABEL_57;
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 952, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    goto LABEL_57;
  }
LABEL_13:
  v7 = "";
  if ( this->m_iszTarget5.u.m_Id != 0 )
    v7 = this->m_iszTarget5.u.m_pAsString;
  if ( V_stricmp_fast(v7, "!activator") == 0 )
  {
    v2 = (this->m_hActorList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v17 = this->m_hActorList.m_Vector.m_Size;
    this->m_hActorList.m_Vector.m_Size = 0;
    if ( v2 )
    {
      CUtlMemory<CHandle<CBaseFlex>,int>::Purge(&this->m_hActorList.m_Vector.m_Memory);
      if ( v17 <= 0 )
      {
LABEL_50:
        v18 = this->m_NetworkTransmitComponent.m_pTimerEvent;
        if ( v18 != 0 && v18->m_bRegistered )
        {
          this->m_NetworkTransmitComponent.m_bPendingStateChange = 1;
        }
        else
        {
          this->m_NetworkTransmitComponent.m_nStateFlags |= 3u;
          this->m_NetworkTransmitComponent.m_Accessor.m_iChangeInfoSerialNumber = 0;
        }
        this->m_hTarget5.m_Index = -1;
        goto LABEL_16;
      }
    }
    else if ( v17 <= 0 )
    {
      goto LABEL_50;
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 952, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    goto LABEL_50;
  }
LABEL_16:
  v8 = "";
  if ( this->m_iszTarget6.u.m_Id != 0 )
    v8 = this->m_iszTarget6.u.m_pAsString;
  if ( V_stricmp_fast(v8, "!activator") == 0 )
  {
    v2 = (this->m_hActorList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v15 = this->m_hActorList.m_Vector.m_Size;
    this->m_hActorList.m_Vector.m_Size = 0;
    if ( v2 )
    {
      CUtlMemory<CHandle<CBaseFlex>,int>::Purge(&this->m_hActorList.m_Vector.m_Memory);
      if ( v15 <= 0 )
      {
LABEL_43:
        v16 = this->m_NetworkTransmitComponent.m_pTimerEvent;
        if ( v16 != 0 && v16->m_bRegistered )
        {
          this->m_NetworkTransmitComponent.m_bPendingStateChange = 1;
        }
        else
        {
          this->m_NetworkTransmitComponent.m_nStateFlags |= 3u;
          this->m_NetworkTransmitComponent.m_Accessor.m_iChangeInfoSerialNumber = 0;
        }
        this->m_hTarget6.m_Index = -1;
        goto LABEL_19;
      }
    }
    else if ( v15 <= 0 )
    {
      goto LABEL_43;
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 952, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    goto LABEL_43;
  }
LABEL_19:
  v9 = "";
  if ( this->m_iszTarget7.u.m_Id != 0 )
    v9 = this->m_iszTarget7.u.m_pAsString;
  if ( V_stricmp_fast(v9, "!activator") == 0 )
  {
    v2 = (this->m_hActorList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v13 = this->m_hActorList.m_Vector.m_Size;
    this->m_hActorList.m_Vector.m_Size = 0;
    if ( v2 )
    {
      CUtlMemory<CHandle<CBaseFlex>,int>::Purge(&this->m_hActorList.m_Vector.m_Memory);
      if ( v13 <= 0 )
      {
LABEL_36:
        v14 = this->m_NetworkTransmitComponent.m_pTimerEvent;
        if ( v14 != 0 && v14->m_bRegistered )
        {
          this->m_NetworkTransmitComponent.m_bPendingStateChange = 1;
        }
        else
        {
          this->m_NetworkTransmitComponent.m_nStateFlags |= 3u;
          this->m_NetworkTransmitComponent.m_Accessor.m_iChangeInfoSerialNumber = 0;
        }
        this->m_hTarget7.m_Index = -1;
        goto LABEL_22;
      }
    }
    else if ( v13 <= 0 )
    {
      goto LABEL_36;
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 952, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    goto LABEL_36;
  }
LABEL_22:
  v10 = "";
  if ( this->m_iszTarget8.u.m_Id != 0 )
    v10 = this->m_iszTarget8.u.m_pAsString;
  if ( V_stricmp_fast(v10, "!activator") == 0 )
  {
    v2 = (this->m_hActorList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v11 = this->m_hActorList.m_Vector.m_Size;
    this->m_hActorList.m_Vector.m_Size = 0;
    if ( v2 )
      CUtlMemory<CHandle<CBaseFlex>,int>::Purge(&this->m_hActorList.m_Vector.m_Memory);
    if ( v11 > 0 )
      (*(this->_vptr_IHandleEntity + 22))(this, 952, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v12 = this->m_NetworkTransmitComponent.m_pTimerEvent;
    if ( v12 != 0 && v12->m_bRegistered )
    {
      this->m_NetworkTransmitComponent.m_bPendingStateChange = 1;
    }
    else
    {
      this->m_NetworkTransmitComponent.m_nStateFlags |= 3u;
      this->m_NetworkTransmitComponent.m_Accessor.m_iChangeInfoSerialNumber = 0;
    }
    this->m_hTarget8.m_Index = -1;
  }
}


// CSceneEntity::OnSceneFinished  (line 4131, @0x000000000239b6b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetSceneManager, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, QueueActorsScriptedScenesToResume, Set, SetCurrentTime, String, ToCStr, operator CEntityInstance*, operator=<bool>, operator[]
// calls: LocalScene_Printf, CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >::RemoveAll, CChoreoScene::ResetSimulation, __dynamic_cast, CSceneEntity::ClearSceneEvents, CBaseFlex::RemoveChoreoScene, CSceneManager::QueueActorsScenesToResume, CChoreoScene::GetNumActors, CEntityIOOutput::FireOutput
// strings: "%s : %8.2f:  finished\n"
// globals: CEntityHandle::gm_pEntityList, g_pSceneManager
void __fastcall CSceneEntity::OnSceneFinished(CSceneEntity *const this, bool canceled, bool fireoutput)
{
  const char *m_pAsString; // rsi
  int m_Size; // eax
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  CHandle<CSceneEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  float v15; // xmm2_4
  const void *v16; // rax
  const void *v17; // r12
  void *v18; // rax
  __int64 v19; // rax
  int v20; // r12d
  CBaseFlex *v21; // rax
  CBaseFlex *v22; // r13
  _QWORD **v23; // rax

  if ( this->m_pScene != 0 )
  {
    m_pAsString = "";
    if ( this->m_iszSceneFile.u.m_Id != 0 )
      m_pAsString = this->m_iszSceneFile.u.m_pAsString;
    LocalScene_Printf("%s : %8.2f:  finished\n", m_pAsString, this->m_flCurrentTime);
    m_Size = this->m_hNotifySceneCompletion.m_Size;
    if ( m_Size > 0 )
    {
      v8 = 0;
      v9 = 4LL * (m_Size - 1) + 4;
      do
      {
        while ( 1 )
        {
          v10 = &this->m_hNotifySceneCompletion.m_Memory.m_pMemory[v8 / 4];
          m_Index = v10->m_Index;
          if ( v10->m_Index + 2 > 1 )
          {
            v12 = v10->m_Index;
            v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
            if ( v13 != 0 )
            {
              v14 = &v13[v12 & 0x1FF];
              if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index && v14->m_pInstance != 0 )
                break;
            }
          }
          v8 += 4LL;
          if ( v8 == v9 )
            goto LABEL_13;
        }
        v8 += 4LL;
        (*(v14->m_pInstance->_vptr_IHandleEntity + 218))(v14->m_pInstance, this);
      }
      while ( v8 != v9 );
    }
LABEL_13:
    CUtlVectorBase<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>::RemoveAll(&this->m_hNotifySceneCompletion);
    CChoreoScene::ResetSimulation(this->m_pScene, 1, 0.0, v15);
    if ( this->m_bIsPlayingBack.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 904, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bIsPlayingBack.m_Value = 0;
    }
    if ( this->m_bPaused.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 905, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bPaused.m_Value = 0;
    }
    this->m_flCurrentTime = 0.0;
    (*(this->_vptr_IHandleEntity + 215))(this);
    if ( fireoutput && !this->m_bCompletedEarly )
      CEntityIOOutput::FireOutput(&this->m_OnCompletion, this, this, 0.0);
    v16 = (*(this->_vptr_IHandleEntity + 253))(this, 0);
    v17 = v16;
    if ( v16 != 0 )
    {
      v18 = __dynamic_cast(v16, &`typeinfo for'CBaseFlex, &`typeinfo for'CBaseMultiplayerPlayer, 0);
      if ( v18 != 0 )
      {
        v19 = (*(*v18 + 4176LL))(v18);
        (*(*v19 + 32LL))(v19);
      }
      else
      {
        v23 = __dynamic_cast(v17, &`typeinfo for'CBaseFlex, &`typeinfo for'CFlexExpresser, 0);
        if ( v23 != 0 )
          (*(*v23[1201] + 32LL))(v23[1201]);
      }
    }
    v20 = 0;
    CSceneEntity::ClearSceneEvents(this, this->m_pScene, canceled);
    while ( v20 < CChoreoScene::GetNumActors(this->m_pScene) )
    {
      v21 = (*(this->_vptr_IHandleEntity + 253))(this, v20);
      v22 = v21;
      if ( v21 != 0 )
      {
        CBaseFlex::RemoveChoreoScene(v21, this->m_pScene, canceled);
        if ( this->m_bInterruptedActorsScenes && g_pSceneManager != 0 )
          CSceneManager::QueueActorsScenesToResume(g_pSceneManager, v22, 0);
      }
      ++v20;
    }
  }
}


// CSceneEntity::UpdateTransmitState  (line 4213, @0x0000000002389220, libserver.so)
// calls: CSceneEntity::ShouldNetwork, CBaseEntity::SetTransmitState
int __fastcall CSceneEntity::UpdateTransmitState(CSceneEntity *const this)
{
  bool ShouldNetwork; // al
  int v3; // esi

  ShouldNetwork = CSceneEntity::ShouldNetwork(this);
  v3 = 8;
  if ( ShouldNetwork && (v3 = 0, this->m_pRecipientFilter == 0) )
    return CBaseEntity::SetTransmitState(this, 4);
  else
    return CBaseEntity::SetTransmitState(this, v3);
}


// CSceneEntity::ShouldTransmit  (line 4231, @0x00000000023839c0, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// calls: CPointEntity::ShouldTransmit, CBasePlayer::IsSplitScreenUserOnEntity
int __fastcall CSceneEntity::ShouldTransmit(CSceneEntity *const this, const CGameCheckTransmitInfo *pInfo)
{
  int ShouldTransmit; // eax
  CRecipientFilter *m_pRecipientFilter; // rdi
  int v6; // r14d
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rsi
  CGameEntitySystem *v10; // rdx
  CEntityIdentity *v11; // rcx
  __int64 v12; // rdx
  CBasePlayer *vptr_IEntityResourceManifestBuilder; // rdi

  ShouldTransmit = CPointEntity::ShouldTransmit(this, pInfo);
  m_pRecipientFilter = this->m_pRecipientFilter;
  v6 = ShouldTransmit;
  if ( m_pRecipientFilter == 0 )
    return v6;
  v7 = 0;
  if ( ShouldTransmit != 8 && (*(m_pRecipientFilter->_vptr_IRecipientFilter + 5))(m_pRecipientFilter) > 0 )
  {
    while ( 1 )
    {
      v8 = (*(this->m_pRecipientFilter->_vptr_IRecipientFilter + 6))(this->m_pRecipientFilter, v7);
      v10 = g_pGameEntitySystem;
      if ( v8 <= 0x7FFE )
      {
        v11 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
        if ( v11 != 0 )
        {
          v12 = v8 & 0x1FF;
          v9 = 8 * v12;
          v10 = &v11[v12];
          if ( v10 != 0 )
          {
            v9 = *&v10->m_EntityList.m_Lock.gap0;
            if ( (*&v10->m_EntityList.m_Lock.gap0 & 0x7FFF) == v8 )
            {
              vptr_IEntityResourceManifestBuilder = v10->_vptr_IEntityResourceManifestBuilder;
              if ( v10->_vptr_IEntityResourceManifestBuilder != 0
                && (pInfo->m_pRecipientPlayer == vptr_IEntityResourceManifestBuilder
                 || CBasePlayer::IsSplitScreenUserOnEntity(
                      vptr_IEntityResourceManifestBuilder,
                      pInfo->m_pInfo->m_nClientEntityIndex)) )
              {
                break;
              }
            }
          }
        }
      }
      if ( ++v7 >= (*(this->m_pRecipientFilter->_vptr_IRecipientFilter + 5))(this->m_pRecipientFilter, v9, v10) )
        return 8;
    }
    return v6;
  }
  return 8;
}


// CSceneEntity::SetRecipientFilter  (line 4265, @0x000000000238a8b0, libserver.so)
// calls: operator new, CRecipientFilter::CRecipientFilter, CRecipientFilter::CopyFrom, operator delete, _Unwind_Resume
// callers: InstancedScriptedScene, CSceneEntity::AddBroadcastTeamTarget, CSceneEntity::RemoveBroadcastTeamTarget
void __fastcall CSceneEntity::SetRecipientFilter(CSceneEntity *const this, IRecipientFilter *filter)
{
  CRecipientFilter *v4; // rbx

  if ( filter != 0 )
  {
    v4 = operator new(0x138u);
    CRecipientFilter::CRecipientFilter(v4);
    this->m_pRecipientFilter = v4;
    CRecipientFilter::CopyFrom(v4, filter);
  }
}


// CSceneEntity::DrawDebugTextOverlays  (line 4278, @0x0000000002381340, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "Playing back: %s", "yes - via input", "Paused: %s"
int __fastcall CSceneEntity::DrawDebugTextOverlays(
        CSceneEntity *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r13
  int v6; // r12d
  const char *v7; // rcx
  const char *v8; // rcx
  int nOffset; // [rsp+Ch] [rbp-244h]
  char tempstr[520]; // [rsp+10h] [rbp-240h] BYREF
  unsigned __int64 v12; // [rsp+218h] [rbp-38h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v12 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    v7 = "yes";
    if ( !this->m_bIsPlayingBack.m_Value )
      v7 = "no";
    V_snprintf(tempstr, 512, "Playing back: %s", v7);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    v8 = "no";
    nOffset = v6 + 1;
    if ( this->m_bPaused.m_Value )
    {
      v8 = "yes - via input";
      if ( !this->m_bPausedViaInput )
        v8 = "yes";
    }
    v6 += 2;
    V_snprintf(tempstr, 512, "Paused: %s", v8);
    CBaseEntity::EntityText(this, nOffset, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CSceneEntity::AddBroadcastTeamTarget  (line 4300, @0x00000000023a8980, libserver.so)
// calls: GetGlobalTeam, CRecipientFilter::AddRecipientsByTeam, CRecipientFilter::CRecipientFilter, CSceneEntity::SetRecipientFilter, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall CSceneEntity::AddBroadcastTeamTarget(CSceneEntity *const this, int nTeamIndex)
{
  CTeam *GlobalTeam; // rax
  CRecipientFilter filter; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v6; // [rsp+138h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  if ( this->m_pRecipientFilter == 0 )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    CSceneEntity::SetRecipientFilter(this, &filter);
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  GlobalTeam = GetGlobalTeam(nTeamIndex);
  if ( GlobalTeam != 0 )
    CRecipientFilter::AddRecipientsByTeam(this->m_pRecipientFilter, GlobalTeam);
}


// CSceneEntity::RemoveBroadcastTeamTarget  (line 4319, @0x00000000023a8a30, libserver.so)
// calls: GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::CRecipientFilter, CSceneEntity::SetRecipientFilter, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall CSceneEntity::RemoveBroadcastTeamTarget(CSceneEntity *const this, int nTeamIndex)
{
  CTeam *GlobalTeam; // rax
  CRecipientFilter filter; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v6; // [rsp+138h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  if ( this->m_pRecipientFilter == 0 )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    CSceneEntity::SetRecipientFilter(this, &filter);
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  GlobalTeam = GetGlobalTeam(nTeamIndex);
  if ( GlobalTeam != 0 )
    CRecipientFilter::RemoveRecipientsByTeam(this->m_pRecipientFilter, GlobalTeam);
}


// CInstancedSceneEntity::~CInstancedSceneEntity  (line 4340, @0x00000000023afe00, libserver.so)
// calls: CSceneEntity::~CSceneEntity
void __fastcall CInstancedSceneEntity::~CInstancedSceneEntity(CInstancedSceneEntity *const this)
{
  this->_vptr_IHandleEntity = &off_40A7430;
  this->_vptr_IChoreoEventCallback = off_40A7C80;
  CSceneEntity::~CSceneEntity(this);
}


// CInstancedSceneEntity::~CInstancedSceneEntity  (line 4340, @0x00000000023afe30, libserver.so)  // inlines: ~CInstancedSceneEntity
// calls: CSceneEntity::~CSceneEntity, CBaseEntity::operator delete
void __fastcall CInstancedSceneEntity::~CInstancedSceneEntity(CInstancedSceneEntity *const this)
{
  this->_vptr_IHandleEntity = &off_40A7430;
  this->_vptr_IChoreoEventCallback = off_40A7C80;
  CSceneEntity::~CSceneEntity(this);
  CBaseEntity::operator delete(this);
}


// CInstancedSceneEntity::GetEntityClass  (line 4342, @0x00000000023a8e70, libserver.so)
CEntityClass *__cdecl CInstancedSceneEntity::GetEntityClass()
{
  return g_pEntityCInstancedSceneEntityClass;
}


// CInstancedSceneEntity::Schema_DynamicBinding  (line 4342, @0x00000000023a8e80, libserver.so)
// globals: CInstancedSceneEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInstancedSceneEntity::Schema_DynamicBinding(
        const CInstancedSceneEntity *const this)
{
  return CInstancedSceneEntity::s_pSchemaBinding;
}


// CInstancedSceneEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 4342, @0x00000000023a8e90, libserver.so)
// globals: CInstancedSceneEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInstancedSceneEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInstancedSceneEntity::CEntityInstanceEntityClass *const this)
{
  return CInstancedSceneEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInstancedSceneEntity::CEntityInstanceEntityClass::DestructInstance  (line 4342, @0x00000000023a8ea0, libserver.so)  // inlines: Destruct<CInstancedSceneEntity>
void __fastcall CInstancedSceneEntity::CEntityInstanceEntityClass::DestructInstance(
        CInstancedSceneEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInstancedSceneEntity::CEntityInstanceEntityClass::FreeInstance  (line 4342, @0x00000000023a8ec0, libserver.so)
void __fastcall CInstancedSceneEntity::CEntityInstanceEntityClass::FreeInstance(
        CInstancedSceneEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInstancedSceneEntity::CEntityInstanceEntityClass::CanAllocate  (line 4342, @0x00000000023a8ee0, libserver.so)
bool __fastcall CInstancedSceneEntity::CEntityInstanceEntityClass::CanAllocate(
        const CInstancedSceneEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInstancedSceneEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 4342, @0x00000000023a8ef0, libserver.so)
// globals: CInstancedSceneEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CInstancedSceneEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInstancedSceneEntity::CEntityInstanceEntityClass *const this)
{
  return CInstancedSceneEntity::s_pSchemaBinding;
}


// CInstancedSceneEntity::CEntityInstanceEntityClass::AllocateInstance  (line 4342, @0x00000000023aa870, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInstancedSceneEntity::CEntityInstanceEntityClass::AllocateInstance(
        CInstancedSceneEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1872);
  memset(v1, 0, 0x750u);
  return v1;
}


// CInstancedSceneEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4342, @0x00000000023aca70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInstancedSceneEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInstancedSceneEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInstancedSceneEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 4342, @0x00000000023aca90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInstancedSceneEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInstancedSceneEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInstancedSceneEntity::CEntityInstanceEntityClass::ConstructInstance  (line 4342, @0x00000000023afbf0, libserver.so)  // inlines: CEntityHandle, CHandle, CInstancedSceneEntity, Construct<CInstancedSceneEntity>
// calls: CSceneEntity::CSceneEntity
CEntityInstance *__fastcall CInstancedSceneEntity::CEntityInstanceEntityClass::ConstructInstance(
        CInstancedSceneEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CSceneEntity::CSceneEntity(p);
    *(p + 397) = -1;
    *p = &off_40A7430;
    *(p + 97) = off_40A7C80;
  }
  return p;
}


// CInstancedSceneEntity::GetEntityClassInternal  (line 4342, @0x00000000023b51b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CSceneEntity>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "instanced_scripted_scene", "CInstancedSceneEntity", "CSceneEntity", "CPointEntity"
// globals: `guard variable for'CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass, CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInstancedSceneEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInstancedSceneEntity::GetEntityClassInfo(void)::g_EntityCInstancedSceneEntityClassInfo, CInstancedSceneEntity::GetEntityClassInfo(void)::g_EntityCInstancedSceneEntityClassInfo, `guard variable for'CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo (11 total)
CEntityClass *__cdecl CInstancedSceneEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass) != 0 )
  {
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_designerName.u.m_Id = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass._vptr_CEntityClass = off_3F79390;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_ComponentOffsets.m_Size = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_AllHelpers.m_Size = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_classInputs.m_Size = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_classOutputs.m_Size = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_requiredEHandle.m_Index = -1;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_hNetworkSerializer = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_pBaseClassInfo = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_pClassInfo = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_flags = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_nAllHelpersFlags = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_pScriptClassDesc = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_pInputs = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_nInputCount = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_pOutputs = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_nOutputCount = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_pGameClass = 0;
    CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass._vptr_CEntityClass = off_40A73B0;
    __cxa_guard_release(&`guard variable for'CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass);
    __cxa_atexit(
      CInstancedSceneEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCInstancedSceneEntityClass != 0 )
    return &CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass;
  if ( `guard variable for'CInstancedSceneEntity::GetEntityClassInfo(void)::g_EntityCInstancedSceneEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInstancedSceneEntity::GetEntityClassInfo(void)::g_EntityCInstancedSceneEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo) != 0 )
      {
        EntityClassInfo = CBaseEntity::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo,
          "CPointEntity",
          0,
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo,
        "CSceneEntity",
        "scripted_scene",
        0,
        &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInstancedSceneEntity::GetEntityClassInfo(void)::g_EntityCInstancedSceneEntityClassInfo,
      "CInstancedSceneEntity",
      "instanced_scripted_scene",
      0,
      &CSceneEntity::GetEntityClassInfo(void)::g_EntityCSceneEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInstancedSceneEntity::GetEntityClassInfo(void)::g_EntityCInstancedSceneEntityClassInfo);
  }
  CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_pClassInfo = &CInstancedSceneEntity::GetEntityClassInfo(void)::g_EntityCInstancedSceneEntityClassInfo;
  CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_pBaseClassInfo = CInstancedSceneEntity::GetEntityClassInfo(void)::g_EntityCInstancedSceneEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCInstancedSceneEntityClass = &CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass;
  CInstancedSceneEntity::GetEntityClassInfo(void)::g_EntityCInstancedSceneEntityClassInfo.m_pClass = &CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass;
  CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass.m_pScriptClassDesc = GetScriptDesc<CSceneEntity>(0);
  g_pEntityCInstancedSceneEntityClass->m_pComponentOverrides = 0;
  return &CInstancedSceneEntity::GetEntityClassInternal(void)::g_EntityCInstancedSceneEntityClass;
}


// CInstancedSceneEntity::GetPostSpeakDelay  (line 4356, @0x00000000023a8f00, libserver.so)
float __fastcall CInstancedSceneEntity::GetPostSpeakDelay(CInstancedSceneEntity *const this)
{
  return this->m_flPostSpeakDelay;
}


// CInstancedSceneEntity::SetPostSpeakDelay  (line 4357, @0x00000000023a8f10, libserver.so)
void __fastcall CInstancedSceneEntity::SetPostSpeakDelay(CInstancedSceneEntity *const this, float a2, float flDelay)
{
  this->m_flPostSpeakDelay = a2;
}


// CInstancedSceneEntity::GetPreDelay  (line 4358, @0x00000000023a8f20, libserver.so)
float __fastcall CInstancedSceneEntity::GetPreDelay(CInstancedSceneEntity *const this)
{
  return this->m_flPreDelay;
}


// CInstancedSceneEntity::SetPreDelay  (line 4359, @0x00000000023a8f30, libserver.so)
void __fastcall CInstancedSceneEntity::SetPreDelay(CInstancedSceneEntity *const this, float a2, float flDelay)
{
  this->m_flPreDelay = a2;
}


// CInstancedSceneEntity::DispatchStartMoveTo  (line 4363, @0x00000000023a8f40, libserver.so)
void __fastcall CInstancedSceneEntity::DispatchStartMoveTo(
        CInstancedSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CBaseEntity *actor2,
        CChoreoEvent *event)
{
  ;
}


// CInstancedSceneEntity::DispatchEndMoveTo  (line 4368, @0x00000000023a8f50, libserver.so)
void __fastcall CInstancedSceneEntity::DispatchEndMoveTo(
        CInstancedSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  ;
}


// CInstancedSceneEntity::DispatchStartFace  (line 4373, @0x00000000023a8f60, libserver.so)
void __fastcall CInstancedSceneEntity::DispatchStartFace(
        CInstancedSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CBaseEntity *actor2,
        CChoreoEvent *event)
{
  ;
}


// CInstancedSceneEntity::DispatchEndFace  (line 4378, @0x00000000023a8f70, libserver.so)
void __fastcall CInstancedSceneEntity::DispatchEndFace(
        CInstancedSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  ;
}


// CInstancedSceneEntity::DispatchStartSequence  (line 4384, @0x00000000023a8f80, libserver.so)
void __fastcall CInstancedSceneEntity::DispatchStartSequence(
        CInstancedSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  ;
}


// CInstancedSceneEntity::DispatchEndSequence  (line 4385, @0x00000000023a8f90, libserver.so)
void __fastcall CInstancedSceneEntity::DispatchEndSequence(
        CInstancedSceneEntity *const this,
        CChoreoScene *scene,
        CBaseFlex *actor,
        CChoreoEvent *event)
{
  ;
}


// CInstancedSceneEntity::DispatchPauseScene  (line 4386, @0x00000000023a8fa0, libserver.so)
void __fastcall CInstancedSceneEntity::DispatchPauseScene(
        CInstancedSceneEntity *const this,
        CChoreoScene *scene,
        const char *parameters)
{
  ;
}


// CInstancedSceneEntity::GetDataDescMap  (line 4400, @0x0000000002380b60, libserver.so)
// globals: CInstancedSceneEntity::m_DataMap
datamap_t *__fastcall CInstancedSceneEntity::GetDataDescMap(CInstancedSceneEntity *const this)
{
  return &CInstancedSceneEntity::m_DataMap;
}


// CInstancedSceneEntity::AddDatadescMetadataKeys  (line 4400, @0x000000000238a920, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CInstancedSceneEntity::GetEntityClass(void)
void __fastcall CInstancedSceneEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CInstancedSceneEntity::GetEntityClass);
}


// CInstancedSceneEntity::GetBaseMap  (line 4400, @0x000000000238a940, libserver.so)
// globals: CSceneEntity::m_DataMap
datamap_t *__cdecl CInstancedSceneEntity::GetBaseMap()
{
  return &CSceneEntity::m_DataMap;
}


// DataMapInit<CInstancedSceneEntity>  (line 4400, @0x000000000238a950, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CInstancedSceneEntity"
// globals: `guard variable for'DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *)::nameHolder, CSceneEntity::m_DataMap, CInstancedSceneEntity::GetEntityClass(void), CInstancedSceneEntity::m_DataMap, DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *)::nameHolder.m_pszBase = "CInstancedSceneEntity";
    DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *)::nameHolder.m_nLenBase = 21;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *)::nameHolder,
      &_dso_handle);
  }
  CInstancedSceneEntity::m_DataMap.dataNumFields = 6;
  CInstancedSceneEntity::m_DataMap.baseMap = &CSceneEntity::m_DataMap;
  CInstancedSceneEntity::m_DataMap.dataDesc = &DataMapInit<CInstancedSceneEntity>(CInstancedSceneEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CInstancedSceneEntity::m_DataMap, CInstancedSceneEntity::GetEntityClass);
  return &CInstancedSceneEntity::m_DataMap;
}


// SceneNameAutocomplete  (line 4411, @0x00000000023a0e50, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, FileFindHandle_t, GrowMemory, V_ExtractFilePath<long unsigned int>, V_FileBase<long unsigned int>, V_strlen, V_strnicmp_fast<int>, operator[], ~CUtlString, ~FileFindHandle_t
// calls: V_snprintf, _V_ExtractFilePath, strlen, _V_FileBase, _V_strnicmp_fast, CFmtStrN<64, false>::CFmtStrN, CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, _Unwind_Resume, __stack_chk_fail
// strings: "%sjunk", "scenes/%s%s*.*", "%s %s%s", "%s %s%s/", "scene_playvcd"
void __fastcall SceneNameAutocomplete(
        const char *partial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  const char *v3; // rbx
  char *v4; // rdx
  int v5; // ecx
  unsigned int v6; // eax
  const char *v7; // rdi
  _BYTE *i; // rax
  char v9; // al
  const char *v10; // rsi
  __int64 m_Size; // r15
  int v12; // eax
  CUtlString *v13; // r15
  const char *v14; // rax
  unsigned int v15; // [rsp+24h] [rbp-5CCh]
  const char *partiala; // [rsp+28h] [rbp-5C8h]
  CUtlString v17[2]; // [rsp+30h] [rbp-5C0h] BYREF
  FileFindHandle_t findHandle; // [rsp+40h] [rbp-5B0h] BYREF
  CFmtStrN<64,false> cmd; // [rsp+50h] [rbp-5A0h] BYREF
  char txtFilenameNoExtension[260]; // [rsp+A0h] [rbp-550h] BYREF
  char dirName[512]; // [rsp+1B0h] [rbp-440h] BYREF
  char path[520]; // [rsp+3B0h] [rbp-240h] BYREF
  unsigned __int64 v23; // [rsp+5B8h] [rbp-38h]

  v3 = partial + 14;
  v23 = __readfsqword(0x28u);
  V_snprintf(dirName, 512, "%sjunk", partial + 14);
  _V_ExtractFilePath(dirName, dirName, 512);
  v4 = dirName;
  do
  {
    v5 = *v4;
    v4 += 4;
    v6 = ~v5 & (v5 - 16843009) & 0x80808080;
  }
  while ( v6 == 0 );
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
  {
    LOBYTE(v6) = (~v5 & (v5 - 16843009) & 0x80808080) >> 16;
    LODWORD(v4) = v4 + 2;
  }
  v7 = &v3[v4 - (__CFADD__(v6, v6) + 3) - dirName];
  partiala = v7;
  if ( v7 != 0 )
    v15 = strlen(v7);
  else
    v15 = 0;
  V_snprintf(path, 512, "scenes/%s%s*.*", dirName, partiala);
  findHandle.m_pFileSystem = 0;
  findHandle.m_nFindDataIndex = 0;
  for ( i = (*(filesystem->_vptr_IAppSystem + 41))(filesystem, path, "MOD", &findHandle);
        i != 0;
        i = (*(filesystem->_vptr_IAppSystem + 38))(filesystem, &findHandle) )
  {
    if ( *i != 46 )
    {
      _V_FileBase(i, txtFilenameNoExtension, 260);
      if ( _V_strnicmp_fast(txtFilenameNoExtension, partiala, v15) == 0 )
      {
        v9 = (*(filesystem->_vptr_IAppSystem + 39))(filesystem, &findHandle);
        v10 = "%s %s%s/";
        if ( v9 == 0 )
          v10 = "%s %s%s";
        CFmtStrN<64,false>::CFmtStrN(&cmd, v10, "scene_playvcd", dirName, txtFilenameNoExtension);
        v17[0].m_pString = 0;
        CUtlString::Set(v17, cmd.m_szBuf);
        m_Size = commands->m_Size;
        v12 = commands->m_Size;
        if ( m_Size == commands->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
          v12 = commands->m_Size;
        }
        commands->m_Size = v12 + 1;
        v13 = &commands->m_Memory.m_pMemory[m_Size];
        if ( v13 != 0 )
        {
          v13->m_pString = 0;
          v14 = CUtlString::Get(v17);
          CUtlString::Set(v13, v14);
        }
        if ( v17[0].m_pString != 0 )
          CUtlString::FreeMemoryBlock(v17);
      }
    }
  }
  (*(filesystem->_vptr_IAppSystem + 40))(filesystem, &findHandle);
  if ( findHandle.m_pFileSystem != 0 )
    (*(findHandle.m_pFileSystem->_vptr_IAppSystem + 40))(findHandle.m_pFileSystem, &findHandle);
}


// scene_playvcd  (line 4457, @0x0000000002392bc0, libserver.so)  // inlines: Arg, operator[]
// calls: V_snprintf, InstancedScriptedScene, __stack_chk_fail
// strings: "scenes/%s.vcd"
void __fastcall scene_playvcd(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rcx
  char vcdPath[520]; // [rsp+10h] [rbp-220h] BYREF
  unsigned __int64 v4; // [rsp+218h] [rbp-18h]

  v2 = "";
  v4 = __readfsqword(0x28u);
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  V_snprintf(vcdPath, 512, "scenes/%s.vcd", v2);
  InstancedScriptedScene(0, vcdPath, 0, 0.0, 0, 0, 0, 0);
}


// InstancedScriptedScene  (line 4471, @0x0000000002392860, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, Set, SetBackground, SetBreakOnNonIdle, V_strncpy<long unsigned int>, operator=, operator=<bool>
// calls: CBaseEntity::CreateNoSpawn, CBaseEntity::GenderExpandString, MakeEntitySystemString, DispatchSpawn, CChoreoScene::SetBackground, CSceneEntity::SetRecipientFilter, CRR_Response::GetPreDelay, CRR_Response::ShouldBreakOnNonIdle, _V_strncpy
// callers: CBaseFlex::PlayScene, CBaseFlex::ScriptPlayScene, CBaseEntity::DispatchResponse, CSceneEntity::QueueResumePlayback, scene_playvcd
// strings: "instanced_scripted_scene"
float __fastcall InstancedScriptedScene(
        CBaseFlex *pActor,
        const char *pszScene,
        EHANDLE *phSceneEnt,
        float flPostDelay,
        bool bIsBackground,
        AI_Response *response,
        bool bMultiplayer,
        IRecipientFilter *filter)
{
  CBaseEntity *NoSpawn; // r15
  char *v13; // rax
  double v14; // xmm0_8
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  bool v18; // zf
  bool v19; // r14
  CChoreoScene *m_pMemory; // rdi
  CEntityIdentity *v21; // rdx
  int v22; // eax
  __int16 v23; // cx
  unsigned int v28; // [rsp+1Ch] [rbp-44h]
  CEntityIdentity *v29; // [rsp+20h] [rbp-40h]

  NoSpawn = CBaseEntity::CreateNoSpawn("instanced_scripted_scene", &vec3_origin, &vec3_angle, 0);
  v13 = &NoSpawn[2].m_CBodyComponent + 4;
  if ( pActor == 0 )
  {
    _V_strncpy(v13, pszScene, 260);
    MakeEntitySystemString(&NoSpawn[2].m_CBodyComponent + 4);
    *&v14 = LODWORD(flPostDelay);
    NoSpawn[1].m_pEntity = v29;
    goto LABEL_23;
  }
  CBaseEntity::GenderExpandString(pActor, pszScene, v13, 260);
  MakeEntitySystemString(&NoSpawn[2].m_CBodyComponent + 4);
  *&v14 = LODWORD(flPostDelay);
  NoSpawn[1].m_pEntity = v29;
  m_pEntity = pActor->m_pEntity;
  if ( m_pEntity == 0 )
  {
LABEL_23:
    *(&NoSpawn[2].m_worldGroupId + 1) = -1;
    goto LABEL_6;
  }
  v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v17 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  *(&NoSpawn[2].m_worldGroupId + 2) = v17 | *(&NoSpawn[2].m_worldGroupId + 1) & 0x8000;
  *(&NoSpawn[2].m_worldGroupId + 1) = (v16 << 15) | *(&NoSpawn[2].m_worldGroupId + 1) & 0x7FFF;
LABEL_6:
  v18 = pActor == 0;
  v19 = bMultiplayer;
  LOBYTE(NoSpawn[2].m_CScriptComponent) = !v18;
  if ( BYTE2(NoSpawn[1].m_NetworkTransmitComponent.m_nStateFlags) != bMultiplayer )
  {
    v28 = LODWORD(v14);
    (*(NoSpawn->_vptr_IHandleEntity + 22))(NoSpawn, 906, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v14 = v28;
    BYTE2(NoSpawn[1].m_NetworkTransmitComponent.m_nStateFlags) = v19;
  }
  (*(NoSpawn->_vptr_IHandleEntity + 261))(NoSpawn, v14);
  DispatchSpawn(NoSpawn, 0);
  m_pMemory = NoSpawn[1].m_ResponseContexts.m_Memory.m_pMemory;
  LOBYTE(NoSpawn[2].m_pfnMoveDone.__delta) = bIsBackground;
  if ( m_pMemory != 0 )
    CChoreoScene::SetBackground(m_pMemory, bIsBackground);
  CSceneEntity::SetRecipientFilter(NoSpawn, filter);
  if ( response != 0 )
  {
    if ( CRR_Response::GetPreDelay(response) != 0.0 )
      (*(NoSpawn->_vptr_IHandleEntity + 263))(NoSpawn);
    (*(NoSpawn->_vptr_IHandleEntity + 219))(NoSpawn);
    LOBYTE(NoSpawn[1].m_aThinkFunctions.m_Memory.m_nGrowSize) = CRR_Response::ShouldBreakOnNonIdle(response);
  }
  else
  {
    (*(NoSpawn->_vptr_IHandleEntity + 219))(NoSpawn);
  }
  if ( phSceneEnt != 0 )
  {
    v21 = NoSpawn->m_pEntity;
    if ( v21 != 0 )
    {
      v22 = (v21->m_EHandle.m_Index >> 15) - (v21->m_flags & 1);
      if ( v21->m_EHandle.m_Index == -1 )
        v23 = 0x7FFF;
      else
        v23 = v21->m_EHandle.m_Index & 0x7FFF;
      LOWORD(phSceneEnt->m_Index) = v23 | phSceneEnt->m_Index & 0x8000;
      phSceneEnt->m_Index = (v22 << 15) | phSceneEnt->m_Index & 0x7FFF;
    }
    else
    {
      phSceneEnt->m_Index = -1;
    }
  }
  return (*(NoSpawn->_vptr_IHandleEntity + 251))(NoSpawn);
}


// InstancedAutoGeneratedSoundScene  (line 4535, @0x000000000238aa20, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, V_strncpy<long unsigned int>, operator=
// calls: CBaseEntity::CreateNoSpawn, UTIL_VarArgs, _V_strncpy, MakeEntitySystemString, CSceneEntity::GenerateSoundScene, DispatchSpawn, Warning
// callers: CBaseFlex::PlayAutoGeneratedSoundScene
// strings: "instanced_scripted_scene", "AutoGenerated(%s)", "InstancedAutoGeneratedSoundScene:  Expecting non-NULL pActor for sound %s\n"
float __fastcall InstancedAutoGeneratedSoundScene(CBaseFlex *pActor, const char *soundname, EHANDLE *phSceneEnt)
{
  CBaseEntity *NoSpawn; // rbx
  char *v7; // rax
  CEntityIdentity *m_pEntity; // rax
  int v9; // edx
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  int v12; // eax
  __int16 v13; // cx
  CEntityIdentity *v15; // [rsp+0h] [rbp-40h]

  if ( pActor != 0 )
  {
    NoSpawn = CBaseEntity::CreateNoSpawn("instanced_scripted_scene", &vec3_origin, &vec3_angle, 0);
    v7 = UTIL_VarArgs("AutoGenerated(%s)", soundname);
    _V_strncpy(&NoSpawn[2].m_CBodyComponent + 4, v7, 260);
    MakeEntitySystemString(&NoSpawn[2].m_CBodyComponent + 4);
    NoSpawn[1].m_pEntity = v15;
    m_pEntity = pActor->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      *(&NoSpawn[2].m_worldGroupId + 2) = v10 | *(&NoSpawn[2].m_worldGroupId + 1) & 0x8000;
      *(&NoSpawn[2].m_worldGroupId + 1) = (v9 << 15) | *(&NoSpawn[2].m_worldGroupId + 1) & 0x7FFF;
    }
    else
    {
      *(&NoSpawn[2].m_worldGroupId + 1) = -1;
    }
    LOBYTE(NoSpawn[2].m_CScriptComponent) = 1;
    CSceneEntity::GenerateSoundScene(NoSpawn, pActor, soundname);
    DispatchSpawn(NoSpawn, 0);
    (*(NoSpawn->_vptr_IHandleEntity + 219))(NoSpawn);
    if ( phSceneEnt != 0 )
    {
      v11 = NoSpawn->m_pEntity;
      if ( v11 != 0 )
      {
        v12 = (v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1);
        v13 = 0x7FFF;
        if ( v11->m_EHandle.m_Index != -1 )
          v13 = v11->m_EHandle.m_Index & 0x7FFF;
        LOWORD(phSceneEnt->m_Index) = v13 | phSceneEnt->m_Index & 0x8000;
        phSceneEnt->m_Index = (v12 << 15) | phSceneEnt->m_Index & 0x7FFF;
      }
      else
      {
        phSceneEnt->m_Index = -1;
      }
    }
    return (*(NoSpawn->_vptr_IHandleEntity + 251))(NoSpawn);
  }
  else
  {
    Warning("InstancedAutoGeneratedSoundScene:  Expecting non-NULL pActor for sound %s\n", soundname);
    return 0.0;
  }
}


// StopScriptedScene  (line 4567, @0x000000000238d7a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, operator CBaseEntity*, operator CEntityInstance*
// calls: __dynamic_cast, LocalScene_Printf
// strings: "%s : stop scripted scene\n"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CSceneEntity
void __fastcall StopScriptedScene(CBaseFlex *pActor, _WORD *hSceneEnt)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  const char **v4; // rax
  const char **v5; // rbx
  const char *v6; // rsi

  if ( (*hSceneEnt + 2) > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hSceneEnt >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[*hSceneEnt & 0x1FF];
      if ( v3 != 0 && *hSceneEnt == v3->m_EHandle.m_Index && v3->m_pInstance != 0 )
      {
        v4 = __dynamic_cast(v3->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CSceneEntity, 0);
        v5 = v4;
        if ( v4 != 0 )
        {
          v6 = "";
          if ( v4[98] != 0 )
            v6 = v4[98];
          LocalScene_Printf("%s : stop scripted scene\n", v6);
          (*(*v5 + 222))(v5);
        }
      }
    }
  }
}


// GetSceneDuration  (line 4584, @0x000000000238abd0, libserver.so)
// callers: CAI_Expresser::IsValidResponse, CAI_Expresser::GetResponseDuration, CSceneEntity::EstimateLength
float __fastcall GetSceneDuration(const char *pszScene)
{
  char v1; // al
  float result; // xmm0_4
  SceneCachedData_t cachedData; // [rsp+0h] [rbp-10h] BYREF

  v1 = (*(*scenefilecache + 104LL))(scenefilecache, pszScene, &cachedData);
  result = 0.0;
  if ( v1 != 0 )
    return cachedData.msecs * 0.001;
  return result;
}


// GetSceneSpeechCount  (line 4602, @0x000000000238ac90, libserver.so)
int __fastcall GetSceneSpeechCount(const char *pszScene)
{
  char v1; // al
  int v2; // edx
  SceneCachedData_t cachedData; // [rsp+0h] [rbp-10h] BYREF

  v1 = (*(*scenefilecache + 104LL))(scenefilecache, pszScene, &cachedData);
  v2 = 0;
  if ( v1 != 0 )
    return cachedData.numSounds;
  return v2;
}


// CInstancedSceneEntity::StartPlayback  (line 4640, @0x00000000023a6130, libserver.so)
// calls: CSceneEntity::StartPlayback
void __fastcall CInstancedSceneEntity::StartPlayback(CInstancedSceneEntity *const this)
{
  if ( (*(this->_vptr_IHandleEntity + 262))(this) == 0.0 )
    CSceneEntity::StartPlayback(this);
}


// CInstancedSceneEntity::DoThink  (line 4654, @0x0000000002385eb0, libserver.so)  // inlines: Get, GetFloat, GetInstance, GetSoundSystemLatency, SetCurrentTime, operator==<CBaseEntity>
// calls: UTIL_Remove, CEntityHandle::operator CEntityInstance*, CChoreoScene::SetSoundFileStartupLatency, CChoreoScene::Think, CChoreoScene::SimulationFinished
// globals: CSceneEntity::m_pcvSndMixahead
void __fastcall CInstancedSceneEntity::DoThink(CInstancedSceneEntity *const this, double a2, float frametime)
{
  float m_flPreDelay; // xmm1_4
  int (**vptr_IHandleEntity)(...); // rax
  CChoreoScene *m_pScene; // r12
  float m_fPitch; // xmm1_4
  float v8; // xmm0_4
  bool v9; // zf
  float v10; // xmm1_4
  CChoreoScene *v11; // rdi
  float dt; // [rsp+Ch] [rbp-14h]

  dt = *&a2;
  (*(this->_vptr_IHandleEntity + 216))(this, a2, frametime);
  m_flPreDelay = this->m_flPreDelay;
  if ( m_flPreDelay <= 0.0
    || (vptr_IHandleEntity = this->_vptr_IHandleEntity,
        this->m_flPreDelay = fmaxf(0.0, m_flPreDelay - dt),
        vptr_IHandleEntity[219](this),
        this->m_bIsPlayingBack.m_Value) )
  {
    m_pScene = this->m_pScene;
    if ( m_pScene != 0
      && this->m_bIsPlayingBack.m_Value
      && (!this->m_bHadOwner || CEntityHandle::operator CEntityInstance *(&this->m_hOwner) != 0) )
    {
      m_fPitch = this->m_fPitch;
      v8 = 2.5;
      if ( m_fPitch <= 2.5 )
        v8 = fmaxf(0.25, m_fPitch);
      v9 = !this->m_bPaused.m_Value;
      this->m_fPitch = v8;
      if ( v9 )
      {
        CChoreoScene::SetSoundFileStartupLatency(m_pScene, m_fPitch);
        CChoreoScene::Think(this->m_pScene, v10);
        v11 = this->m_pScene;
        this->m_flCurrentTime = (dt * this->m_fPitch) + this->m_flCurrentTime;
        if ( CChoreoScene::SimulationFinished(v11) )
        {
          (*(this->_vptr_IHandleEntity + 212))(this, 0, 0);
          UTIL_Remove(this);
        }
      }
      else
      {
        (*(this->_vptr_IHandleEntity + 214))(this);
      }
    }
    else
    {
      UTIL_Remove(this);
    }
  }
}


// CInstancedSceneEntity::FindNamedActor  (line 4705, @0x0000000002384470, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!=<CBaseEntity>
// calls: CChoreoScene::GetNumActors, V_stricmp_fast, CSceneEntity::FindNamedActor
// strings: "!self"
// globals: CEntityHandle::gm_pEntityList
CBaseFlex *__fastcall CInstancedSceneEntity::FindNamedActor(CInstancedSceneEntity *const this, const char *name)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CBaseFlex *result; // rax

  if ( CChoreoScene::GetNumActors(this->m_pScene) != 1 && V_stricmp_fast(name, "!self") != 0 )
    return CSceneEntity::FindNamedActor(this, name);
  m_Index = this->m_hOwner.m_Index;
  if ( m_Index + 2 <= 1 )
    return CSceneEntity::FindNamedActor(this, name);
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOwner.m_Index) >> 9) & 0x3F];
  if ( v5 == 0 )
    return CSceneEntity::FindNamedActor(this, name);
  v6 = &v5[this->m_hOwner.m_Index & 0x1FF];
  if ( v6 == 0 )
    return CSceneEntity::FindNamedActor(this, name);
  if ( m_Index != v6->m_EHandle.m_Index )
    return CSceneEntity::FindNamedActor(this, name);
  if ( v6->m_pInstance == 0 )
    return CSceneEntity::FindNamedActor(this, name);
  result = (*(v6->m_pInstance->_vptr_IHandleEntity + 147))(v6->m_pInstance);
  if ( result == 0 )
    return CSceneEntity::FindNamedActor(this, name);
  return result;
}


// CInstancedSceneEntity::FindNamedEntity  (line 4727, @0x0000000002389d10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>
// calls: CSceneEntity::FindNamedEntity
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CInstancedSceneEntity::FindNamedEntity(CInstancedSceneEntity *const this, const char *name)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CBaseEntity *result; // rax
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  m_Index = this->m_hOwner.m_Index;
  if ( m_Index + 2 <= 1 )
    return CSceneEntity::FindNamedEntity(this, name, 0, 0, 0);
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOwner.m_Index) >> 9) & 0x3F];
  if ( v5 == 0 )
    return CSceneEntity::FindNamedEntity(this, name, 0, 0, 0);
  v6 = &v5[this->m_hOwner.m_Index & 0x1FF];
  if ( v6 == 0 )
    return CSceneEntity::FindNamedEntity(this, name, 0, 0, 0);
  if ( m_Index != v6->m_EHandle.m_Index )
    return CSceneEntity::FindNamedEntity(this, name, 0, 0, 0);
  if ( v6->m_pInstance == 0 )
    return CSceneEntity::FindNamedEntity(this, name, 0, 0, 0);
  if ( (*(v6->m_pInstance->_vptr_IHandleEntity + 147))(v6->m_pInstance) == 0 )
    return CSceneEntity::FindNamedEntity(this, name, 0, 0, 0);
  v8 = this->m_hOwner.m_Index;
  if ( v8 + 2 <= 1 )
    return CSceneEntity::FindNamedEntity(this, name, 0, 0, 0);
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOwner.m_Index) >> 9) & 0x3F];
  if ( v9 == 0 )
    return CSceneEntity::FindNamedEntity(this, name, 0, 0, 0);
  v10 = &v9[this->m_hOwner.m_Index & 0x1FF];
  if ( v10 == 0 )
    return CSceneEntity::FindNamedEntity(this, name, 0, 0, 0);
  if ( v8 != v10->m_EHandle.m_Index )
    return CSceneEntity::FindNamedEntity(this, name, 0, 0, 0);
  result = v10->m_pInstance;
  if ( v10->m_pInstance == 0 )
    return CSceneEntity::FindNamedEntity(this, name, 0, 0, 0);
  return result;
}


// CInstancedSceneEntity::PassThrough  (line 4761, @0x000000000238acc0, libserver.so)
bool __fastcall CInstancedSceneEntity::PassThrough(CInstancedSceneEntity *const this, CBaseFlex *actor)
{
  return 0;
}


// CInstancedSceneEntity::OnRestore  (line 4798, @0x00000000023988e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!
// calls: UTIL_Remove, CChoreoScene::SetBackground, CSceneEntity::OnRestore
// globals: CEntityHandle::gm_pEntityList
void __fastcall CInstancedSceneEntity::OnRestore(CInstancedSceneEntity *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CChoreoScene *m_pScene; // rdi

  if ( !this->m_bHadOwner
    || (m_Index = this->m_hOwner.m_Index) + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOwner.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hOwner.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0 )
  {
    m_pScene = this->m_pScene;
    if ( m_pScene != 0 )
      CChoreoScene::SetBackground(m_pScene, this->m_bIsBackground);
    CSceneEntity::OnRestore(this);
  }
  else
  {
    UTIL_Remove(this);
  }
}


// CInstancedSceneEntity::EstimateLength  (line 4817, @0x000000000238ac60, libserver.so)
// calls: CSceneEntity::EstimateLength
float __fastcall CInstancedSceneEntity::EstimateLength(CInstancedSceneEntity *const this)
{
  float v3; // [rsp+Ch] [rbp-14h]

  v3 = CSceneEntity::EstimateLength(this);
  return (*(this->_vptr_IHandleEntity + 262))(this) + v3;
}


// CInstancedSceneEntity::OnLoaded  (line 4823, @0x0000000002383630, libserver.so)  // inlines: SetBackground
// calls: CSceneEntity::OnLoaded, CChoreoScene::SetBackground
void __fastcall CInstancedSceneEntity::OnLoaded(CInstancedSceneEntity *const this)
{
  CChoreoScene *m_pScene; // rdi

  CSceneEntity::OnLoaded(this);
  m_pScene = this->m_pScene;
  if ( m_pScene != 0 )
    CChoreoScene::SetBackground(m_pScene, this->m_bIsBackground);
}


// CSceneManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 4832, @0x000000000238acd0, libserver.so)
void __cdecl CSceneManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CSceneManager::FrameUpdatePreEntityThink  (line 4837, @0x000000000239e510, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >::Remove
// globals: g_bClientFlex, CEntityHandle::gm_pEntityList
void __fastcall CSceneManager::FrameUpdatePreEntityThink(
        CSceneManager *const this,
        const EventServerPreEntityThink_t *const msg)
{
  int m_Size; // r14d
  int v4; // ebx
  char v5; // r12
  CHandle<CSceneEntity> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  int v11; // eax
  int v12; // r14d
  __int64 v13; // rbx
  CHandle<CSceneEntity> *v14; // rdx
  uint32 v15; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx

  m_Size = this->m_ActiveScenes.m_Size;
  g_bClientFlex = scene_clientflex.m_pParent->m_Value.m_nValue != 0;
  v4 = 0;
  v5 = 0;
  if ( m_Size <= 0 )
    return;
  do
  {
    while ( 1 )
    {
      v6 = &this->m_ActiveScenes.m_Memory.m_pMemory[v4];
      m_Index = v6->m_Index;
      if ( v6->m_Index + 2 > 1 )
      {
        v8 = v6->m_Index;
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[v8 & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
            break;
        }
      }
      v5 = 1;
LABEL_4:
      if ( m_Size <= ++v4 )
        goto LABEL_12;
    }
    (*(v10->m_pInstance->_vptr_IHandleEntity + 213))(v10->m_pInstance, gpGlobals->frametime);
    v11 = this->m_ActiveScenes.m_Size;
    if ( v11 >= m_Size )
      goto LABEL_4;
    m_Size = this->m_ActiveScenes.m_Size;
  }
  while ( v11 > v4 );
LABEL_12:
  if ( v5 != 0 )
  {
    v12 = m_Size - 1;
    if ( v12 >= 0 )
    {
      v13 = v12;
      do
      {
        v14 = &this->m_ActiveScenes.m_Memory.m_pMemory[v13];
        v15 = v14->m_Index;
        if ( v14->m_Index + 2 <= 1
          || (v16 = v14->m_Index,
              (v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F]) == 0)
          || (v18 = &v17[v16 & 0x1FF]) == 0
          || v15 != v18->m_EHandle.m_Index
          || v18->m_pInstance == 0 )
        {
          CUtlVectorBase<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>::Remove(
            &this->m_ActiveScenes,
            v12);
        }
        --v12;
        --v13;
      }
      while ( v12 != -1 );
    }
  }
}


// CSceneManager::ClearAllScenes  (line 4886, @0x000000000239a2a0, libserver.so)
// calls: CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >::RemoveAll
void __fastcall CSceneManager::ClearAllScenes(CSceneManager *const this)
{
  CUtlVectorBase<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>::RemoveAll(&this->m_ActiveScenes);
}


// CSceneManager::AddSceneEntity  (line 4895, @0x00000000023a3030, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CSceneEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator=, operator[]
// calls: CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >::Find, CUtlMemory<CHandle<CSceneEntity>, int>::Grow
// callers: CSceneEntity::Activate
void __fastcall CSceneManager::AddSceneEntity(CSceneManager *const this, CSceneEntity *scene)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  __int64 m_Size; // r12
  int v6; // eax
  CHandle<CSceneEntity> *v7; // rax
  CHandle<CSceneEntity> h; // [rsp+0h] [rbp-20h] BYREF

  h.m_Index = -1;
  if ( scene != 0 )
  {
    m_pEntity = scene->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      h.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  if ( CUtlVectorBase<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>::Find(&this->m_ActiveScenes, &h) == -1 )
  {
    m_Size = this->m_ActiveScenes.m_Size;
    v6 = this->m_ActiveScenes.m_Size;
    if ( m_Size == this->m_ActiveScenes.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CSceneEntity>,int>::Grow(&this->m_ActiveScenes.m_Memory, 1);
      v6 = this->m_ActiveScenes.m_Size;
    }
    this->m_ActiveScenes.m_Size = v6 + 1;
    v7 = &this->m_ActiveScenes.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      v7->m_Index = h.m_Index;
  }
}


// CSceneManager::RemoveSceneEntity  (line 4914, @0x000000000239e6a0, libserver.so)  // inlines: CEntityHandle, CHandle, FindAndRemove, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >::Find, CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >::Remove
// callers: CSceneEntity::UpdateOnRemove
void __fastcall CSceneManager::RemoveSceneEntity(CSceneManager *const this, CSceneEntity *scene)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int> > *p_m_ActiveScenes; // rbx
  int v5; // eax
  CHandle<CSceneEntity> h; // [rsp+0h] [rbp-20h] BYREF

  h.m_Index = -1;
  if ( scene != 0 )
  {
    m_pEntity = scene->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      h.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  p_m_ActiveScenes = &this->m_ActiveScenes;
  v5 = CUtlVectorBase<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>::Find(&this->m_ActiveScenes, &h);
  if ( v5 != -1 )
    CUtlVectorBase<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>::Remove(p_m_ActiveScenes, v5);
}


// CSceneManager::OnClientActive  (line 4931, @0x000000000239a860, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, SoundEventGuid_t, curtime, entindex, operator CEntityInstance*, operator->, operator==<CBaseFlex>, operator[], ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CUtlVectorBase<CSceneManager::CRestoreSceneSound, CUtlMemory<CSceneManager::CRestoreSceneSound, int> >::RemoveAll, CUtlMemory<Vector, int>::Purge, _Unwind_Resume, __stack_chk_fail, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: SceneManager_ClientActive
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSceneManager::OnClientActive(CSceneManager *const this, CBasePlayer *player)
{
  int m_Size; // eax
  unsigned __int64 v4; // r12
  CSceneManager::CRestoreSceneSound *v5; // rbx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r14
  int v9; // xmm1_4
  double v10; // xmm0_8
  float v11; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v13; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CEntityInstance *v15; // rax
  CEntityIndex v16; // eax
  __int64 v17; // [rsp+18h] [rbp-1D8h]
  EmitSound_t es_0; // [rsp+20h] [rbp-1D0h] BYREF
  CPASAttenuationFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v20; // [rsp+1B8h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  m_Size = this->m_QueuedSceneSounds.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v17 = 140 * ((m_Size - 1) + 1LL);
    do
    {
      while ( 1 )
      {
        v5 = &this->m_QueuedSceneSounds.m_Memory.m_pMemory[v4 / 0x8C];
        if ( v5->actor.m_Index + 2 > 1 )
        {
          v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->actor.m_Index) >> 9) & 0x3F];
          if ( v6 != 0 )
          {
            v7 = &v6[v5->actor.m_Index & 0x1FF];
            if ( v7 != 0 && v5->actor.m_Index == v7->m_EHandle.m_Index )
            {
              m_pInstance = v7->m_pInstance;
              if ( v7->m_pInstance != 0 && fabs(1000.0 * v5->time_in_past) <= 4096.0 )
                break;
            }
          }
        }
        v4 += 140LL;
        if ( v4 == v17 )
          goto LABEL_18;
      }
      *&es_0.m_nChannel = (*(m_pInstance->_vptr_IHandleEntity + 186))(v7->m_pInstance);
      LODWORD(es_0.m_pSoundName) = v9;
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &es_0);
      filter._vptr_IRecipientFilter = &off_3FECD70;
      v10 = (*(m_pInstance->_vptr_IHandleEntity + 186))(m_pInstance);
      *&es_0.m_pSoundName = v11;
      *&es_0.m_nChannel = v10;
      CPASAttenuationFilter::Filter(&filter, &es_0, 0.80000001, v11);
      m_flCurrentTime = 0.0;
      es_0.m_flVolume = 1.0;
      es_0.m_nFlags = 0;
      es_0.m_nPitch = 100;
      es_0.m_pOrigin = 0;
      es_0.m_flSoundTime = 0.0;
      es_0.m_pflSoundDuration = 0;
      es_0.m_bEmitCloseCaption = 1;
      es_0.m_bWarnOnMissingCloseCaption = 0;
      es_0.m_bWarnOnDirectWaveReference = 0;
      es_0.m_nSpeakerEntity.m_Data = -1;
      es_0.m_UtlVecSoundOrigin.m_Size = 0;
      memset(&es_0.m_UtlVecSoundOrigin.m_Memory, 0, 21);
      es_0.m_nChannel = 2;
      es_0.m_pSoundName = v5->soundname;
      es_0.m_SoundLevel = v5->soundlevel;
      v13 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        m_flCurrentTime = v13->m_flCurrentTime;
      }
      es_0.m_flSoundTime = m_flCurrentTime - v5->time_in_past;
      v15 = CEntityHandle::operator CEntityInstance *(&v5->actor);
      v16.m_Data = CEntityInstance::GetEntityIndex(v15).m_Data;
      CBaseEntity::EmitSound(&filter, v16, &es_0);
      es_0.m_UtlVecSoundOrigin.m_Size = 0;
      if ( (es_0.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<Vector,int>::Purge(&es_0.m_UtlVecSoundOrigin.m_Memory);
        if ( (es_0.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<Vector,int>::Purge(&es_0.m_UtlVecSoundOrigin.m_Memory);
      }
      v4 += 140LL;
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
    while ( v4 != v17 );
  }
LABEL_18:
  CUtlVectorBase<CSceneManager::CRestoreSceneSound,CUtlMemory<CSceneManager::CRestoreSceneSound,int>>::RemoveAll(&this->m_QueuedSceneSounds);
}


// CSceneManager::RemoveActorFromScenes  (line 4971, @0x000000000238de80, libserver.so)  // inlines: Get, GetDebugName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, _V_strcmp, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CSceneEntity::InvolvesActor, strcmp, CEntityIdentity::GetDebugName, LocalScene_Printf
// callers: RemoveActorFromScriptedScenes, CSceneEntity::CheckActors
// strings: "%s : removed for '%s'\n"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CInstancedSceneEntity, `typeinfo for'CSceneEntity
void __fastcall CSceneManager::RemoveActorFromScenes(
        CSceneManager *const this,
        CBaseFlex *pActor,
        bool bInstancedOnly,
        bool bNonIdleOnly,
        const char *pszThisSceneOnly)
{
  int m_Size; // eax
  unsigned __int64 v8; // r15
  __int64 v9; // r12
  CHandle<CSceneEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CSceneEntity *m_pInstance; // r13
  const char *m_pAsString; // rsi
  char *DebugName; // rdx
  const char *v18; // rsi

  m_Size = this->m_ActiveScenes.m_Size;
  if ( m_Size > 0 )
  {
    v8 = 0;
    v9 = 4LL * (m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        v10 = &this->m_ActiveScenes.m_Memory.m_pMemory[v8 / 4];
        m_Index = v10->m_Index;
        if ( v10->m_Index + 2 > 1 )
        {
          v12 = v10->m_Index;
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[v12 & 0x1FF];
            if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( v14->m_pInstance != 0
                && (!bInstancedOnly
                 || __dynamic_cast(m_pInstance, &`typeinfo for'CSceneEntity, &`typeinfo for'CInstancedSceneEntity, 0) != 0)
                && (!bNonIdleOnly || m_pInstance->m_bBreakOnNonIdle)
                && CSceneEntity::InvolvesActor(m_pInstance, pActor) )
              {
                if ( pszThisSceneOnly == 0 || *pszThisSceneOnly == 0 )
                  break;
                m_pAsString = "";
                if ( m_pInstance->m_iszSceneFile.u.m_Id != 0 )
                  m_pAsString = m_pInstance->m_iszSceneFile.u.m_pAsString;
                if ( strcmp(pszThisSceneOnly, m_pAsString) == 0 )
                  break;
              }
            }
          }
        }
        v8 += 4LL;
        if ( v8 == v9 )
          return;
      }
      DebugName = "NULL";
      if ( pActor != 0 )
        DebugName = CEntityIdentity::GetDebugName(pActor->m_pEntity);
      v18 = "";
      if ( m_pInstance->m_iszSceneFile.u.m_Id != 0 )
        v18 = m_pInstance->m_iszSceneFile.u.m_pAsString;
      v8 += 4LL;
      LocalScene_Printf("%s : removed for '%s'\n", v18, DebugName);
      (*(m_pInstance->_vptr_IHandleEntity + 222))(m_pInstance);
    }
    while ( v8 != v9 );
  }
}


// CSceneManager::PauseActorsScenes  (line 5010, @0x000000000239b9c0, libserver.so)  // inlines: CVariantBase, Free, Get, GetDebugName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, operator CEntityInstance*, operator[], ~CVariantBase
// calls: __dynamic_cast, CSceneEntity::InvolvesActor, CEntityIdentity::GetDebugName, LocalScene_Printf, CEntityInstance::AcceptInput, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: PauseActorsScriptedScenes, CSceneEntity::CheckActors
// strings: "Pausing actor %s scripted scene: %s\n"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CInstancedSceneEntity, `typeinfo for'CSceneEntity
void __fastcall CSceneManager::PauseActorsScenes(CSceneManager *const this, CBaseFlex *pActor, bool bInstancedOnly)
{
  int m_Size; // eax
  unsigned __int64 v7; // rbx
  CHandle<CSceneEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CSceneEntity *m_pInstance; // r12
  const char *m_pAsString; // rdx
  const char *DebugName; // rax
  const char *v16; // [rsp+10h] [rbp-50h]
  __int64 v17; // [rsp+18h] [rbp-48h]
  variant_t emptyVariant; // [rsp+20h] [rbp-40h] BYREF

  m_Size = this->m_ActiveScenes.m_Size;
  if ( m_Size > 0 )
  {
    v7 = 0;
    v17 = 4LL * (m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        v8 = &this->m_ActiveScenes.m_Memory.m_pMemory[v7 / 4];
        m_Index = v8->m_Index;
        if ( v8->m_Index + 2 > 1 )
        {
          v10 = v8->m_Index;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0
                && (!bInstancedOnly
                 || __dynamic_cast(m_pInstance, &`typeinfo for'CSceneEntity, &`typeinfo for'CInstancedSceneEntity, 0) != 0)
                && CSceneEntity::InvolvesActor(m_pInstance, pActor)
                && m_pInstance->m_bIsPlayingBack.m_Value )
              {
                m_pAsString = "";
                if ( m_pInstance->m_iszSceneFile.u.m_Id != 0 )
                  m_pAsString = m_pInstance->m_iszSceneFile.u.m_pAsString;
                v16 = m_pAsString;
                DebugName = CEntityIdentity::GetDebugName(pActor->m_pEntity);
                LocalScene_Printf("Pausing actor %s scripted scene: %s\n", DebugName, v16);
                emptyVariant.m_type = 0;
                emptyVariant.m_flags = 0;
                emptyVariant.m_uint64 = 0;
                CEntityInstance::AcceptInput(m_pInstance, "Pause", m_pInstance, m_pInstance, &emptyVariant, 0);
                if ( (emptyVariant.m_flags & 1) != 0 )
                  break;
              }
            }
          }
        }
        v7 += 4LL;
        if ( v7 == v17 )
          return;
      }
      v7 += 4LL;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
    }
    while ( v7 != v17 );
  }
}


// CSceneManager::IsInInterruptableScenes  (line 5041, @0x000000000238ace0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsBackground, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: CChoreoScene::IsBackground, CSceneEntity::InvolvesActor
// callers: IsInInterruptableScenes, CSceneEntity::CheckActors
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CSceneManager::IsInInterruptableScenes(CSceneManager *const this, CBaseFlex *pActor)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  CHandle<CSceneEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CSceneEntity *m_pInstance; // r15
  const CChoreoScene *m_pScene; // rdi

  m_Size = this->m_ActiveScenes.m_Size;
  if ( m_Size <= 0 )
    return 1;
  v5 = 0;
  v6 = 4LL * (m_Size - 1) + 4;
  while ( 1 )
  {
    v7 = &this->m_ActiveScenes.m_Memory.m_pMemory[v5 / 4];
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
          if ( v11->m_pInstance != 0 )
          {
            m_pScene = m_pInstance->m_pScene;
            if ( (m_pScene == 0 || !CChoreoScene::IsBackground(m_pScene))
              && CSceneEntity::InvolvesActor(m_pInstance, pActor)
              && m_pInstance->m_bIsPlayingBack.m_Value
              && m_pInstance->m_nInterruptCount <= 0 )
            {
              break;
            }
          }
        }
      }
    }
    v5 += 4LL;
    if ( v5 == v6 )
      return 1;
  }
  return 0;
}


// CSceneManager::ResumeActorsScenes  (line 5067, @0x000000000239bdd0, libserver.so)  // inlines: CVariantBase, Free, Get, GetDebugName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, operator CEntityInstance*, operator[], ~CVariantBase
// calls: __dynamic_cast, CSceneEntity::InvolvesActor, CEntityIdentity::GetDebugName, LocalScene_Printf, CEntityInstance::AcceptInput, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: ResumeActorsScriptedScenes
// strings: "Resuming actor %s scripted scene: %s\n"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CInstancedSceneEntity, `typeinfo for'CSceneEntity
void __fastcall CSceneManager::ResumeActorsScenes(CSceneManager *const this, CBaseFlex *pActor, bool bInstancedOnly)
{
  int m_Size; // eax
  unsigned __int64 v7; // rbx
  CHandle<CSceneEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CSceneEntity *m_pInstance; // r12
  const char *m_pAsString; // rdx
  const char *DebugName; // rax
  const char *v16; // [rsp+10h] [rbp-50h]
  __int64 v17; // [rsp+18h] [rbp-48h]
  variant_t emptyVariant; // [rsp+20h] [rbp-40h] BYREF

  m_Size = this->m_ActiveScenes.m_Size;
  if ( m_Size > 0 )
  {
    v7 = 0;
    v17 = 4LL * (m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        v8 = &this->m_ActiveScenes.m_Memory.m_pMemory[v7 / 4];
        m_Index = v8->m_Index;
        if ( v8->m_Index + 2 > 1 )
        {
          v10 = v8->m_Index;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0
                && (!bInstancedOnly
                 || __dynamic_cast(m_pInstance, &`typeinfo for'CSceneEntity, &`typeinfo for'CInstancedSceneEntity, 0) != 0)
                && CSceneEntity::InvolvesActor(m_pInstance, pActor)
                && m_pInstance->m_bIsPlayingBack.m_Value )
              {
                m_pAsString = "";
                if ( m_pInstance->m_iszSceneFile.u.m_Id != 0 )
                  m_pAsString = m_pInstance->m_iszSceneFile.u.m_pAsString;
                v16 = m_pAsString;
                DebugName = CEntityIdentity::GetDebugName(pActor->m_pEntity);
                LocalScene_Printf("Resuming actor %s scripted scene: %s\n", DebugName, v16);
                emptyVariant.m_type = 0;
                emptyVariant.m_flags = 0;
                emptyVariant.m_uint64 = 0;
                CEntityInstance::AcceptInput(m_pInstance, "Resume", m_pInstance, m_pInstance, &emptyVariant, 0);
                if ( (emptyVariant.m_flags & 1) != 0 )
                  break;
              }
            }
          }
        }
        v7 += 4LL;
        if ( v7 == v17 )
          return;
      }
      v7 += 4LL;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
    }
    while ( v7 != v17 );
  }
}


// CSceneManager::QueueActorsScenesToResume  (line 5098, @0x000000000238adf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CSceneEntity::InvolvesActor
// callers: QueueActorsScriptedScenesToResume, CSceneEntity::OnSceneFinished
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CInstancedSceneEntity, `typeinfo for'CSceneEntity
void __fastcall CSceneManager::QueueActorsScenesToResume(
        CSceneManager *const this,
        CBaseFlex *pActor,
        bool bInstancedOnly)
{
  int m_Size; // eax
  unsigned __int64 v6; // r15
  __int64 v7; // r13
  CHandle<CSceneEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CSceneEntity *m_pInstance; // rbx

  m_Size = this->m_ActiveScenes.m_Size;
  if ( m_Size > 0 )
  {
    v6 = 0;
    v7 = 4LL * (m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        v8 = &this->m_ActiveScenes.m_Memory.m_pMemory[v6 / 4];
        m_Index = v8->m_Index;
        if ( v8->m_Index + 2 > 1 )
        {
          v10 = v8->m_Index;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0
                && (!bInstancedOnly
                 || __dynamic_cast(m_pInstance, &`typeinfo for'CSceneEntity, &`typeinfo for'CInstancedSceneEntity, 0) != 0)
                && CSceneEntity::InvolvesActor(m_pInstance, pActor)
                && m_pInstance->m_bIsPlayingBack.m_Value
                && m_pInstance->m_bPaused.m_Value )
              {
                break;
              }
            }
          }
        }
        v6 += 4LL;
        if ( v6 == v7 )
          return;
      }
      v6 += 4LL;
      (*(m_pInstance->_vptr_IHandleEntity + 224))(m_pInstance);
    }
    while ( v6 != v7 );
  }
}


// CSceneManager::IsRunningScriptedScene  (line 5126, @0x000000000238af20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CSceneEntity::InvolvesActor
// callers: IsRunningScriptedScene
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CInstancedSceneEntity, `typeinfo for'CSceneEntity
bool __fastcall CSceneManager::IsRunningScriptedScene(
        CSceneManager *const this,
        CBaseFlex *pActor,
        bool bIgnoreInstancedScenes)
{
  int m_Size; // eax
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  CHandle<CSceneEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CSceneEntity *m_pInstance; // r14
  bool result; // al

  m_Size = this->m_ActiveScenes.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v6 = 0;
  v7 = 4LL * (m_Size - 1) + 4;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = &this->m_ActiveScenes.m_Memory.m_pMemory[v6 / 4];
      m_Index = v8->m_Index;
      if ( v8->m_Index + 2 > 1 )
      {
        v10 = v8->m_Index;
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[v10 & 0x1FF];
          if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
          {
            m_pInstance = v12->m_pInstance;
            if ( v12->m_pInstance != 0
              && m_pInstance->m_bIsPlayingBack.m_Value
              && (!bIgnoreInstancedScenes
               || __dynamic_cast(m_pInstance, &`typeinfo for'CSceneEntity, &`typeinfo for'CInstancedSceneEntity, 0) == 0) )
            {
              break;
            }
          }
        }
      }
      v6 += 4LL;
      if ( v6 == v7 )
        return 0;
    }
    result = CSceneEntity::InvolvesActor(m_pInstance, pActor);
    if ( result )
      break;
    v6 += 4LL;
    if ( v6 == v7 )
      return 0;
  }
  return result;
}


// CSceneManager::IsRunningScriptedSceneAndNotPaused  (line 5148, @0x000000000238b020, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CSceneEntity::InvolvesActor
// callers: IsRunningScriptedSceneAndNotPaused
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CInstancedSceneEntity, `typeinfo for'CSceneEntity
bool __fastcall CSceneManager::IsRunningScriptedSceneAndNotPaused(
        CSceneManager *const this,
        CBaseFlex *pActor,
        bool bIgnoreInstancedScenes)
{
  int m_Size; // eax
  unsigned __int64 v6; // rbx
  __int64 v7; // r15
  CHandle<CSceneEntity> *v8; // rcx
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CSceneEntity *m_pInstance; // r13
  bool result; // al

  m_Size = this->m_ActiveScenes.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v6 = 0;
  v7 = 4LL * (m_Size - 1) + 4;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = &this->m_ActiveScenes.m_Memory.m_pMemory[v6 / 4];
      m_Index = v8->m_Index;
      if ( v8->m_Index + 2 > 1 )
      {
        m_Index_low = LOWORD(v8->m_Index);
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[m_Index_low & 0x1FF];
          if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
          {
            m_pInstance = v12->m_pInstance;
            if ( v12->m_pInstance != 0
              && m_pInstance->m_bIsPlayingBack.m_Value
              && !m_pInstance->m_bPaused.m_Value
              && (!bIgnoreInstancedScenes
               || __dynamic_cast(m_pInstance, &`typeinfo for'CSceneEntity, &`typeinfo for'CInstancedSceneEntity, 0) == 0) )
            {
              break;
            }
          }
        }
      }
      v6 += 4LL;
      if ( v6 == v7 )
        return 0;
    }
    result = CSceneEntity::InvolvesActor(m_pInstance, pActor);
    if ( result )
      break;
    v6 += 4LL;
    if ( v6 == v7 )
      return 0;
  }
  return result;
}


// CSceneManager::IsRunningScriptedSceneWithSpeech  (line 5176, @0x000000000238b130, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, HasUnplayedSpeech, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CSceneEntity::InvolvesActor, CChoreoScene::HasUnplayedSpeech
// callers: IsRunningScriptedSceneWithSpeech
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CInstancedSceneEntity, `typeinfo for'CSceneEntity
bool __fastcall CSceneManager::IsRunningScriptedSceneWithSpeech(
        CSceneManager *const this,
        CBaseFlex *pActor,
        bool bIgnoreInstancedScenes)
{
  int m_Size; // eax
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  CHandle<CSceneEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CSceneEntity *m_pInstance; // r14
  const CChoreoScene *m_pScene; // rdi
  bool result; // al

  m_Size = this->m_ActiveScenes.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v6 = 0;
  v7 = 4LL * (m_Size - 1) + 4;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = &this->m_ActiveScenes.m_Memory.m_pMemory[v6 / 4];
      m_Index = v8->m_Index;
      if ( v8->m_Index + 2 > 1 )
      {
        v10 = v8->m_Index;
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[v10 & 0x1FF];
          if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
          {
            m_pInstance = v12->m_pInstance;
            if ( v12->m_pInstance != 0
              && m_pInstance->m_bIsPlayingBack.m_Value
              && (!bIgnoreInstancedScenes
               || __dynamic_cast(m_pInstance, &`typeinfo for'CSceneEntity, &`typeinfo for'CInstancedSceneEntity, 0) == 0)
              && CSceneEntity::InvolvesActor(m_pInstance, pActor) )
            {
              m_pScene = m_pInstance->m_pScene;
              if ( m_pScene != 0 )
                break;
            }
          }
        }
      }
      v6 += 4LL;
      if ( v6 == v7 )
        return 0;
    }
    result = CChoreoScene::HasUnplayedSpeech(m_pScene);
    if ( result )
      break;
    v6 += 4LL;
    if ( v6 == v7 )
      return 0;
  }
  return result;
}


// CSceneManager::IsRunningScriptedSceneWithSpeechAndNotPaused  (line 5200, @0x000000000238b260, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, HasUnplayedSpeech, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CSceneEntity::InvolvesActor, CChoreoScene::HasUnplayedSpeech
// callers: IsRunningScriptedSceneWithSpeechAndNotPaused
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CInstancedSceneEntity, `typeinfo for'CSceneEntity
bool __fastcall CSceneManager::IsRunningScriptedSceneWithSpeechAndNotPaused(
        CSceneManager *const this,
        CBaseFlex *pActor,
        bool bIgnoreInstancedScenes)
{
  int m_Size; // eax
  unsigned __int64 v6; // rbx
  __int64 v7; // r15
  CHandle<CSceneEntity> *v8; // rcx
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CSceneEntity *m_pInstance; // r13
  const CChoreoScene *m_pScene; // rdi
  bool result; // al

  m_Size = this->m_ActiveScenes.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v6 = 0;
  v7 = 4LL * (m_Size - 1) + 4;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = &this->m_ActiveScenes.m_Memory.m_pMemory[v6 / 4];
      m_Index = v8->m_Index;
      if ( v8->m_Index + 2 > 1 )
      {
        m_Index_low = LOWORD(v8->m_Index);
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[m_Index_low & 0x1FF];
          if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
          {
            m_pInstance = v12->m_pInstance;
            if ( v12->m_pInstance != 0
              && m_pInstance->m_bIsPlayingBack.m_Value
              && !m_pInstance->m_bPaused.m_Value
              && (!bIgnoreInstancedScenes
               || __dynamic_cast(m_pInstance, &`typeinfo for'CSceneEntity, &`typeinfo for'CInstancedSceneEntity, 0) == 0)
              && CSceneEntity::InvolvesActor(m_pInstance, pActor) )
            {
              m_pScene = m_pInstance->m_pScene;
              if ( m_pScene != 0 )
                break;
            }
          }
        }
      }
      v6 += 4LL;
      if ( v6 == v7 )
        return 0;
    }
    result = CChoreoScene::HasUnplayedSpeech(m_pScene);
    if ( result )
      break;
    v6 += 4LL;
    if ( v6 == v7 )
      return 0;
  }
  return result;
}


// CSceneManager::QueueRestoredSound  (line 5232, @0x00000000023a37c0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CRestoreSceneSound, CopyConstruct<CSceneManager::CRestoreSceneSound>, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, V_strncpy<long unsigned int>, operator=, operator[]
// calls: _V_strncpy, CUtlMemory<CSceneManager::CRestoreSceneSound, int>::Grow, __stack_chk_fail
// callers: CSceneEntity::DispatchStartSpeak
void __fastcall CSceneManager::QueueRestoredSound(
        CSceneManager *const this,
        CBaseFlex *actor,
        const char *soundname,
        soundlevel_t soundlevel,
        float time_in_past)
{
  CEntityIdentity *m_pEntity; // rdi
  __int16 v8; // r8
  int m_Size; // r12d
  int v10; // eax
  CSceneManager::CRestoreSceneSound *v11; // rax
  int v13; // [rsp+10h] [rbp-B0h]
  _QWORD v14[16]; // [rsp+14h] [rbp-ACh] BYREF
  soundlevel_t soundlevela; // [rsp+94h] [rbp-2Ch]
  float v16; // [rsp+98h] [rbp-28h]
  unsigned __int64 v17; // [rsp+A8h] [rbp-18h]

  LOBYTE(v14[0]) = 0;
  v17 = __readfsqword(0x28u);
  v13 = -1;
  soundlevela = soundlevel_t::SNDLVL_NORM;
  v16 = 0.0;
  if ( actor != 0 )
  {
    m_pEntity = actor->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v13 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
    }
  }
  _V_strncpy(v14, soundname, 128);
  soundlevela = soundlevel;
  m_Size = this->m_QueuedSceneSounds.m_Size;
  v16 = time_in_past;
  v10 = m_Size;
  if ( m_Size == this->m_QueuedSceneSounds.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CSceneManager::CRestoreSceneSound,int>::Grow(&this->m_QueuedSceneSounds.m_Memory, 1);
    v10 = this->m_QueuedSceneSounds.m_Size;
  }
  this->m_QueuedSceneSounds.m_Size = v10 + 1;
  v11 = &this->m_QueuedSceneSounds.m_Memory.m_pMemory[m_Size];
  if ( v11 != 0 )
  {
    v11->actor.m_Index = v13;
    qmemcpy(v11->soundname, v14, sizeof(v11->soundname));
    v11->soundlevel = soundlevela;
    v11->time_in_past = v16;
  }
}


// RemoveActorFromScriptedScenes  (line 5246, @0x000000000238e020, libserver.so)  // inlines: GetSceneManager
// calls: CSceneManager::RemoveActorFromScenes
// callers: CAI_Expresser::SpeakDispatchResponse
// globals: g_pSceneManager
void __fastcall RemoveActorFromScriptedScenes(
        CBaseFlex *pActor,
        bool instancedscenesonly,
        bool nonidlescenesonly,
        const char *pszThisSceneOnly)
{
  if ( g_pSceneManager != 0 )
    CSceneManager::RemoveActorFromScenes(
      g_pSceneManager,
      pActor,
      instancedscenesonly,
      nonidlescenesonly,
      pszThisSceneOnly);
}


// PauseActorsScriptedScenes  (line 5256, @0x000000000239bb80, libserver.so)  // inlines: GetSceneManager
// calls: CSceneManager::PauseActorsScenes
// globals: g_pSceneManager
void __fastcall PauseActorsScriptedScenes(CBaseFlex *pActor, bool instancedscenesonly)
{
  if ( g_pSceneManager != 0 )
    CSceneManager::PauseActorsScenes(g_pSceneManager, pActor, instancedscenesonly);
}


// IsInInterruptableScenes  (line 5266, @0x000000000238b390, libserver.so)  // inlines: GetSceneManager
// calls: CSceneManager::IsInInterruptableScenes
// globals: g_pSceneManager
bool __fastcall IsInInterruptableScenes(CBaseFlex *pActor)
{
  return g_pSceneManager != 0 && CSceneManager::IsInInterruptableScenes(g_pSceneManager, pActor);
}


// ResumeActorsScriptedScenes  (line 5277, @0x000000000239bf80, libserver.so)  // inlines: GetSceneManager
// calls: CSceneManager::ResumeActorsScenes
// globals: g_pSceneManager
void __fastcall ResumeActorsScriptedScenes(CBaseFlex *pActor, bool instancedscenesonly)
{
  if ( g_pSceneManager != 0 )
    CSceneManager::ResumeActorsScenes(g_pSceneManager, pActor, instancedscenesonly);
}


// QueueActorsScriptedScenesToResume  (line 5287, @0x000000000238b3c0, libserver.so)  // inlines: GetSceneManager
// calls: CSceneManager::QueueActorsScenesToResume
// globals: g_pSceneManager
void __fastcall QueueActorsScriptedScenesToResume(CBaseFlex *pActor, bool instancedscenesonly)
{
  if ( g_pSceneManager != 0 )
    CSceneManager::QueueActorsScenesToResume(g_pSceneManager, pActor, instancedscenesonly);
}


// IsRunningScriptedScene  (line 5297, @0x000000000238b3f0, libserver.so)  // inlines: GetSceneManager
// calls: CSceneManager::IsRunningScriptedScene
// callers: CAI_Expresser::SpeakDispatchResponse
// globals: g_pSceneManager
bool __fastcall IsRunningScriptedScene(CBaseFlex *pActor, bool bIgnoreInstancedScenes)
{
  return g_pSceneManager != 0 && CSceneManager::IsRunningScriptedScene(g_pSceneManager, pActor, bIgnoreInstancedScenes);
}


// IsRunningScriptedSceneAndNotPaused  (line 5306, @0x000000000238b420, libserver.so)  // inlines: GetSceneManager
// calls: CSceneManager::IsRunningScriptedSceneAndNotPaused
// globals: g_pSceneManager
bool __fastcall IsRunningScriptedSceneAndNotPaused(CBaseFlex *pActor, bool bIgnoreInstancedScenes)
{
  return g_pSceneManager != 0
      && CSceneManager::IsRunningScriptedSceneAndNotPaused(g_pSceneManager, pActor, bIgnoreInstancedScenes);
}


// IsRunningScriptedSceneWithSpeech  (line 5317, @0x000000000238b450, libserver.so)  // inlines: GetSceneManager
// calls: CSceneManager::IsRunningScriptedSceneWithSpeech
// globals: g_pSceneManager
bool __fastcall IsRunningScriptedSceneWithSpeech(CBaseFlex *pActor, bool bIgnoreInstancedScenes)
{
  return g_pSceneManager != 0
      && CSceneManager::IsRunningScriptedSceneWithSpeech(g_pSceneManager, pActor, bIgnoreInstancedScenes);
}


// IsRunningScriptedSceneWithSpeechAndNotPaused  (line 5326, @0x000000000238b480, libserver.so)  // inlines: GetSceneManager
// calls: CSceneManager::IsRunningScriptedSceneWithSpeechAndNotPaused
// globals: g_pSceneManager
bool __fastcall IsRunningScriptedSceneWithSpeechAndNotPaused(CBaseFlex *pActor, bool bIgnoreInstancedScenes)
{
  return g_pSceneManager != 0
      && CSceneManager::IsRunningScriptedSceneWithSpeechAndNotPaused(g_pSceneManager, pActor, bIgnoreInstancedScenes);
}


// CSceneListManager::GetDataDescMap  (line 5339, @0x0000000002380b70, libserver.so)
// globals: CSceneListManager::m_DataMap
datamap_t *__fastcall CSceneListManager::GetDataDescMap(CSceneListManager *const this)
{
  return &CSceneListManager::m_DataMap;
}


// CSceneListManager::AddDatadescMetadataKeys  (line 5339, @0x000000000238b4b0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CSceneListManager::GetEntityClass(void)
void __fastcall CSceneListManager::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CSceneListManager::GetEntityClass);
}


// CSceneListManager::GetBaseMap  (line 5339, @0x000000000238b4d0, libserver.so)
datamap_t *__cdecl CSceneListManager::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CSceneListManager>  (line 5339, @0x000000000238b4e0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<CHandle<CSceneListManager> > >
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CSceneListManager"
// globals: `guard variable for'DataMapInit<CSceneListManager>(CSceneListManager *)::nameHolder, `guard variable for'DataMapInit<CSceneListManager>(CSceneListManager *)::dataDesc, CSceneListManager::GetEntityClass(void), CSceneListManager::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>>(CUtlVector<, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>>(CUtlVector<CHandle<CSceneListMa, DataMapInit<CSceneListManager>(CSceneListManager *)::nameHolder, __dso_handle (9 total)
datamap_t *__fastcall DataMapInit<CSceneListManager>(CSceneListManager *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSceneListManager>(CSceneListManager *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSceneListManager>(CSceneListManager *)::nameHolder) != 0 )
  {
    DataMapInit<CSceneListManager>(CSceneListManager *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSceneListManager>(CSceneListManager *)::nameHolder.m_pszBase = "CSceneListManager";
    DataMapInit<CSceneListManager>(CSceneListManager *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSceneListManager>(CSceneListManager *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSceneListManager>(CSceneListManager *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSceneListManager>(CSceneListManager *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSceneListManager>(CSceneListManager *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSceneListManager>(CSceneListManager *)::nameHolder,
      &_dso_handle);
  }
  CSceneListManager::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CSceneListManager>(CSceneListManager *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSceneListManager>(CSceneListManager *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>>(CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>>(CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>>(CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>> *)::ops = off_40AE750;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>>(CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>> *)::ops);
    }
    DataMapInit<CSceneListManager>(CSceneListManager *)::dataDesc[1].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>>(CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>> *)::ops;
    DataMapInit<CSceneListManager>(CSceneListManager *)::dataDesc[2].fieldSize = 16;
    DataMapInit<CSceneListManager>(CSceneListManager *)::dataDesc[3].fieldSize = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSceneListManager>(CSceneListManager *)::dataDesc);
  }
  CSceneListManager::m_DataMap.dataNumFields = 4;
  CSceneListManager::m_DataMap.dataDesc = &DataMapInit<CSceneListManager>(CSceneListManager *)::dataDesc[1];
  AddDatadescMetadataKeys(&CSceneListManager::m_DataMap, CSceneListManager::GetEntityClass);
  return &CSceneListManager::m_DataMap;
}


// CSceneListManager::Activate  (line 5353, @0x00000000023a3540, libserver.so)  // inlines: Get, GetClassNameAsCStr, GetClassname, GetDebugName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, String, ToCStr, operator CEntityInstance*, operator bool, operator=
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, CEntityIdentity::GetDebugName, Warning, __dynamic_cast, CSceneEntity::AddListManager, CSceneListManager::AddListManager
// strings: "%s(%s) could not find scene %d, named %s\n", "%s(%s) found an entity that wasn't a logic_choreographed_scene or logic_scene_list_manage
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CSceneEntity, `typeinfo for'CSceneListManager
void __fastcall CSceneListManager::Activate(CSceneListManager *const this, ActivateType_t activateType)
{
  CHandle<CBaseEntity> *m_hScenes; // rbx
  CSceneListManager *v4; // r12
  int i; // r13d
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *v7; // rdx
  int v8; // eax
  __int16 v9; // cx
  int v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const char *m_pAsString; // r8
  CEntityIdentity *m_pEntity; // rdi
  const char *v15; // r15
  const char *DebugName; // rax
  CEntityInstance *m_pInstance; // r15
  CSceneEntity *v18; // rax
  CSceneListManager *v19; // rax
  const char *v20; // r8
  CEntityIdentity *v21; // rdi
  const char *v22; // r15
  const char *v23; // rax
  const char *v24; // [rsp+8h] [rbp-38h]
  const char *v25; // [rsp+8h] [rbp-38h]

  CBaseEntity::Activate(this, activateType);
  if ( gpGlobals->eLoadType != MapLoadType_t::MapLoad_LoadGame )
  {
    m_hScenes = this->m_hScenes;
    v4 = this;
    for ( i = 0; i != 16; ++i )
    {
      if ( v4->m_iszScenes[0].u.m_Id != 0 )
      {
        EntityByName = CGameEntitySystem::FindEntityByName(
                         g_pGameEntitySystem,
                         0,
                         v4->m_iszScenes[0].u.m_pAsString,
                         this,
                         0,
                         0,
                         0);
        if ( EntityByName == 0 || (v7 = EntityByName->m_pEntity) == 0 )
        {
          m_hScenes->m_Index = -1;
LABEL_12:
          m_pAsString = "";
          if ( v4->m_iszScenes[0].u.m_Id != 0 )
            m_pAsString = v4->m_iszScenes[0].u.m_pAsString;
          m_pEntity = this->m_pEntity;
          v15 = "";
          if ( m_pEntity->m_designerName.u.m_Id != 0 )
            v15 = m_pEntity->m_designerName.u.m_pAsString;
          v24 = m_pAsString;
          DebugName = CEntityIdentity::GetDebugName(m_pEntity);
          Warning("%s(%s) could not find scene %d, named %s\n", DebugName, v15, i, v24);
          goto LABEL_17;
        }
        v8 = (v7->m_EHandle.m_Index >> 15) - (v7->m_flags & 1);
        v9 = 0x7FFF;
        if ( v7->m_EHandle.m_Index != -1 )
          v9 = v7->m_EHandle.m_Index & 0x7FFF;
        LOWORD(m_hScenes->m_Index) = v9 | m_hScenes->m_Index & 0x8000;
        v10 = (v8 << 15) | m_hScenes->m_Index & 0x7FFF;
        m_hScenes->m_Index = v10;
        if ( (v10 + 2) <= 1 )
          goto LABEL_12;
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_hScenes->m_Index) >> 9) & 0x3F];
        if ( v11 == 0 )
          goto LABEL_12;
        v12 = &v11[m_hScenes->m_Index & 0x1FF];
        if ( v12 == 0 || v10 != v12->m_EHandle.m_Index )
          goto LABEL_12;
        m_pInstance = v12->m_pInstance;
        if ( v12->m_pInstance == 0 )
          goto LABEL_25;
        v18 = __dynamic_cast(v12->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CSceneEntity, 0);
        if ( v18 != 0 )
        {
          CSceneEntity::AddListManager(v18, this);
        }
        else
        {
          v19 = __dynamic_cast(m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CSceneListManager, 0);
          if ( v19 == 0 )
          {
LABEL_25:
            v20 = "";
            if ( v4->m_iszScenes[0].u.m_Id != 0 )
              v20 = v4->m_iszScenes[0].u.m_pAsString;
            v21 = this->m_pEntity;
            v22 = "";
            if ( v21->m_designerName.u.m_Id != 0 )
              v22 = v21->m_designerName.u.m_pAsString;
            v25 = v20;
            v23 = CEntityIdentity::GetDebugName(v21);
            Warning(
              "%s(%s) found an entity that wasn't a logic_choreographed_scene or logic_scene_list_manager in slot %d, named %s\n",
              v23,
              v22,
              i,
              v25);
            m_hScenes->m_Index = -1;
            goto LABEL_17;
          }
          CSceneListManager::AddListManager(v19, this);
        }
      }
LABEL_17:
      v4 = (v4 + 8);
      ++m_hScenes;
    }
  }
}


// CSceneListManager::SceneStarted  (line 5399, @0x000000000238b7d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator bool, operator!, operator[]
// calls: CSceneListManager::RemoveScene
// callers: CSceneEntity::StartPlayback
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSceneListManager::SceneStarted(CSceneListManager *const this, CBaseEntity *pSceneOrManager)
{
  bool v4; // r13
  int v5; // r12d
  CHandle<CBaseEntity> *v6; // rbx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  int m_Size; // eax
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  CHandle<CSceneListManager> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx

  v4 = 0;
  v5 = 15;
  v6 = &this->m_hScenes[15];
  do
  {
    while ( 1 )
    {
      if ( v6->m_Index + 2 > 1 )
      {
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
        if ( v7 == 0 )
          goto LABEL_2;
        v8 = &v7[v6->m_Index & 0x1FF];
        if ( v8 == 0 || v6->m_Index != v8->m_EHandle.m_Index || v8->m_pInstance == 0 )
          goto LABEL_2;
        if ( !v4 )
          break;
        CSceneListManager::RemoveScene(this, v5);
      }
LABEL_2:
      --v5;
      --v6;
      if ( v5 == -1 )
        goto LABEL_10;
    }
    v4 = pSceneOrManager == v8->m_pInstance;
    --v5;
    --v6;
  }
  while ( v5 != -1 );
LABEL_10:
  if ( v4 )
  {
    m_Size = this->m_hListManagers.m_Size;
    if ( m_Size > 0 )
    {
      v10 = 0;
      v11 = 4LL * (m_Size - 1) + 4;
      do
      {
        v12 = &this->m_hListManagers.m_Memory.m_pMemory[v10 / 4];
        m_Index = v12->m_Index;
        if ( v12->m_Index + 2 > 1 )
        {
          v14 = v12->m_Index;
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[v14 & 0x1FF];
            if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
              CSceneListManager::SceneStarted(v16->m_pInstance, this);
          }
        }
        v10 += 4LL;
      }
      while ( v10 != v11 );
    }
  }
}


// CSceneListManager::AddListManager  (line 5435, @0x00000000023a3450, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CSceneListManager> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator=, operator[]
// calls: CUtlVectorBase<CHandle<CSceneListManager>, CUtlMemory<CHandle<CSceneListManager>, int> >::Find, CUtlMemory<CHandle<CSceneListManager>, int>::Grow
// callers: CSceneListManager::Activate
void __fastcall CSceneListManager::AddListManager(CSceneListManager *const this, CSceneListManager *pManager)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  __int64 m_Size; // r12
  int v6; // eax
  CHandle<CSceneListManager> *v7; // rax
  CHandle<CSceneListManager> h; // [rsp+0h] [rbp-20h] BYREF

  h.m_Index = -1;
  if ( pManager != 0 )
  {
    m_pEntity = pManager->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      h.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  if ( CUtlVectorBase<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>::Find(
         &this->m_hListManagers,
         &h) == -1 )
  {
    m_Size = this->m_hListManagers.m_Size;
    v6 = this->m_hListManagers.m_Size;
    if ( m_Size == this->m_hListManagers.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CSceneListManager>,int>::Grow(&this->m_hListManagers.m_Memory, 1);
      v6 = this->m_hListManagers.m_Size;
    }
    this->m_hListManagers.m_Size = v6 + 1;
    v7 = &this->m_hListManagers.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      v7->m_Index = h.m_Index;
  }
}


// CSceneListManager::InputShutdown  (line 5449, @0x000000000238b7c0, libserver.so)
// calls: CSceneListManager::ShutdownList
void __fastcall CSceneListManager::InputShutdown(CSceneListManager *const this, inputdata_t *const inputdata)
{
  CSceneListManager::ShutdownList(this);
}


// CSceneListManager::ShutdownList  (line 5457, @0x000000000238b720, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool
// calls: CSceneListManager::RemoveScene, UTIL_Remove
// callers: CSceneListManager::RemoveScene, CSceneListManager::InputShutdown
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSceneListManager::ShutdownList(CSceneListManager *const this)
{
  int v2; // r12d
  CHandle<CBaseEntity> *m_hScenes; // rbx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  v2 = 0;
  m_hScenes = this->m_hScenes;
  do
  {
    if ( m_hScenes->m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_hScenes->m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[m_hScenes->m_Index & 0x1FF];
        if ( v5 != 0 && m_hScenes->m_Index == v5->m_EHandle.m_Index )
          CSceneListManager::RemoveScene(this, v2);
      }
    }
    ++v2;
    ++m_hScenes;
  }
  while ( v2 != 16 );
  UTIL_Remove(this);
}


// CSceneListManager::RemoveScene  (line 5473, @0x000000000238b660, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: __dynamic_cast, UTIL_Remove, CSceneListManager::ShutdownList
// callers: CSceneListManager::ShutdownList, CSceneListManager::SceneStarted
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CSceneEntity, `typeinfo for'CSceneListManager
void __fastcall CSceneListManager::RemoveScene(CSceneListManager *const this, int iIndex)
{
  CHandle<CBaseEntity> *v2; // rdx
  uint32 m_Index; // eax
  __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r12
  CEntityInstance *v8; // rax
  CSceneListManager *v9; // rax

  v2 = &this->m_hScenes[iIndex];
  m_Index = v2->m_Index;
  if ( v2->m_Index + 2 > 1 )
  {
    v4 = v2->m_Index;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v2->m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v4 & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 )
        {
          v8 = __dynamic_cast(v6->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CSceneEntity, 0);
          if ( v8 != 0 )
          {
            UTIL_Remove(v8);
          }
          else
          {
            v9 = __dynamic_cast(m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CSceneListManager, 0);
            if ( v9 != 0 )
              CSceneListManager::ShutdownList(v9);
          }
        }
      }
    }
  }
}


// ReloadSceneFromDisk  (line 5491, @0x000000000238b930, libserver.so)
void __fastcall ReloadSceneFromDisk(CBaseEntity *ent)
{
  ;
}


// GetSceneFilename  (line 5504, @0x000000000238b940, libserver.so)  // inlines: String, ToCStr
// calls: __dynamic_cast
// globals: `typeinfo for'CSceneEntity
const char *__fastcall GetSceneFilename(CBaseEntity *ent)
{
  void *v1; // rax

  if ( ent != 0
    && (v1 = __dynamic_cast(ent, &`typeinfo for'CBaseEntity, &`typeinfo for'CSceneEntity, 0)) != 0
    && *(v1 + 98) != 0 )
  {
    return *(v1 + 98);
  }
  else
  {
    return "";
  }
}


// GetRecentNPCSpeech  (line 5520, @0x000000000238b9a0, libserver.so)
// calls: memcpy
// callers: CSource2GameClients::GetBugReportInfo, ListRecentNPCSpeech
// globals: speechListIndex, speechListSounds
int __fastcall GetRecentNPCSpeech(recentNPCSpeech_t *speech)
{
  recentNPCSpeech_t *v1; // rax
  int i; // edx
  int v3; // ebx
  int v4; // r12d
  int v5; // r13d
  recentNPCSpeech_t *v6; // rsi
  __int64 v7; // rdi

  v1 = speech;
  for ( i = 5; i != 0; --i )
  {
    v1->time = 0.0;
    ++v1;
    v1[-1].name[0] = 0;
    v1[-1].sceneName[0] = 0;
  }
  v3 = speechListIndex;
  v4 = 5;
  v5 = 0;
  do
  {
    v6 = &speechListSounds[v3];
    if ( v6->name[0] != 0 )
    {
      v7 = v5++;
      memcpy(&speech[v7], v6, sizeof(recentNPCSpeech_t));
    }
    if ( ++v3 >= 5 )
      v3 = 0;
    --v4;
  }
  while ( v4 != 0 );
  return v5;
}


// ListRecentNPCSpeech  (line 5562, @0x000000000238ba50, libserver.so)  // inlines: curtime
// calls: GetRecentNPCSpeech, Msg
// strings: "   time: %6.3f   sound name: %s   scene: %s\n"
void __fastcall ListRecentNPCSpeech(const CCommandContext *const ctx, const CCommand *const args)
{
  int RecentNPCSpeech; // r13d
  unsigned __int64 v3; // xmm0_8
  char *name; // rbx
  float v5; // xmm0_4
  char *v6; // rsi
  char *v7; // rdx
  CGlobalVars *v8; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // xmm0_8
  recentNPCSpeech_t speech[5]; // [rsp+0h] [rbp-CC0h] BYREF

  RecentNPCSpeech = GetRecentNPCSpeech(speech);
  v3 = Msg("Recent NPC speech:\n").m128_u64[0];
  if ( RecentNPCSpeech > 0 )
  {
    name = speech[0].name;
    do
    {
      v5 = *(name - 1);
      v6 = name;
      v7 = name + 512;
      name += 644;
      v3 = Msg("   time: %6.3f   sound name: %s   scene: %s\n", v6, v7, v5).m128_u64[0];
    }
    while ( name != speech[(RecentNPCSpeech - 1) + 1].name );
  }
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, *&v3);
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  Msg("Current time: %6.3f\n", m_flCurrentTime);
}


// scene_flush  (line 5580, @0x0000000002381270, libserver.so)
// calls: Msg
// strings: "Reloading\n", "   done\n"
void __fastcall scene_flush(const CCommandContext *const ctx, const CCommand *const args)
{
  double v2; // xmm0_8

  *&v2 = Msg("Reloading\n", args).m128_u64[0];
  (*(*scenefilecache + 128LL))(scenefilecache, v2);
  Msg("   done\n");
}


