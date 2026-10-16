// Reconstructed from DWARF by pahole; not original source.

// src/game/server/markup_volume.cpp:21
class CMarkupVolumeTagged_Group : public CMarkupVolumeTagged {
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
	CMarkupVolumeTagged_Group(CMarkupVolumeTagged_Group &);
	CMarkupVolumeTagged_Group(CMarkupVolumeTagged_Group &);
	CMarkupVolumeTagged_Group();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CMarkupVolumeTagged_Group();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1208
};

// src/game/server/markup_volume.cpp:22
class CMarkupVolumeTagged_Nav : public CMarkupVolumeTagged {
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
	CMarkupVolumeTagged_Nav(CMarkupVolumeTagged_Nav &);
	CMarkupVolumeTagged_Nav(CMarkupVolumeTagged_Nav &);
	CMarkupVolumeTagged_Nav();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CMarkupVolumeTagged_Nav();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1208
};

// src/game/server/markup_volume.cpp:23
class CMarkupVolumeTagged_NavL4D : public CMarkupVolumeTagged {
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
	CMarkupVolumeTagged_NavL4D(CMarkupVolumeTagged_NavL4D &);
	CMarkupVolumeTagged_NavL4D(CMarkupVolumeTagged_NavL4D &);
	CMarkupVolumeTagged_NavL4D();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CMarkupVolumeTagged_NavL4D();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1208
};

// src/game/server/markup_volume.cpp:24
class CMarkupVolumeTagged_NavHLVR : public CMarkupVolumeTagged {
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
	CMarkupVolumeTagged_NavHLVR(CMarkupVolumeTagged_NavHLVR &);
	CMarkupVolumeTagged_NavHLVR(CMarkupVolumeTagged_NavHLVR &);
	CMarkupVolumeTagged_NavHLVR();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CMarkupVolumeTagged_NavHLVR();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1208
};

// src/game/server/markup_volume.cpp:46
class CMarkupManager : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct MarkupGroup_t {
		const CMarkupVolumeTagged * m_pGroupEntity;  // +0x8
		MarkupGroup_t(const char *);
		~MarkupGroup_t();

		// sizeof = 40
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*, DefaultHashFunctor<char const*>, DefaultEqualFunctor<char const*>, short unsigned int, undefined_t> CMarkupGroupTable;

private:

	CMarkupGroupTable m_MarkupGroups;  // +0x18
	int m_NumLoadedSpawnGroups;  // +0x78
	typedef CAutoGameSystem BaseClass;

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CMarkupManager *);
	CMarkupManager();
	virtual void SpawnGroupPrecache(const EventSpawnGroupPrecache_t &);
	virtual void PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t &);
	void OnSpawnMarkupEntity(CMarkupVolumeTagged *);
	void OnRemoveMarkupEntity(CMarkupVolumeTagged *);
	bool IsEntityInGroup(const CMarkupVolumeTagged *, const CMarkupVolumeTagged *);
	const CUtlVector<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> > & GetAllMarkupEntities();
	void SpewGroups();
	void GroupDebugToggle(bool, const CCommand &);

private:

	MarkupGroup_t * FindOrCreateMarkupGroup(const char *, bool);
	MarkupGroup_t * FindMarkupGroup(const char *);
	MarkupGroup_t * RegisterMarkupGroupEntity(CMarkupVolumeTagged *);
	void UnregisterMarkupGroupEntity(const CMarkupVolumeTagged *);
	void AddToMarkupGroup(MarkupGroup_t *, CMarkupVolumeTagged *, bool);
	void AddToMarkupGroup(const char *, CMarkupVolumeTagged *, bool);
	void RemoveFromMarkupGroup(const char *, CMarkupVolumeTagged *);
	void AddMarkupEntityToGroups(CMarkupVolumeTagged *);
	void AddMarkupEntitiesToGroup(MarkupGroup_t *);
	void DoAutomaticGrouping(MarkupGroup_t *, CMarkupVolumeTagged *);
	bool DoMarkupVolumesOverlap(const CMarkupVolume *, const CMarkupVolume *);
	virtual ~CMarkupManager();
	void ForEachGroup<CMarkupManager::PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t&)::__lambda11>(const __lambda11 &);
	void ForEachGroup<CMarkupManager::SpewGroups()::__lambda12>(const __lambda12 &);
	void ForEachGroup<CMarkupManager::AddMarkupEntityToGroups(CMarkupVolumeTagged*)::__lambda16>(const __lambda16 &);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[12] SpawnGroupPrecache
	// vtable[17] PostSpawnGroupUnload
	// sizeof = 128
};

// src/game/server/markup_volume.cpp:545
struct MarkupSearchQuery_t {
	const CMarkupVolumeTagged * m_pGroup;  // +0x28
	MarkupSearchQuery_t(MarkupSearchType, const Vector &);
	MarkupSearchQuery_t(MarkupSearchType, const Extent &);
	MarkupSearchQuery_t(MarkupSearchType, const char *);
	MarkupSearchQuery_t(MarkupSearchType, const CMarkupVolumeTagged *);
	MarkupSearchQuery_t(const MarkupSearchQuery_t &);
	~MarkupSearchQuery_t();

	// sizeof = 48
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CMarkupVolumeTagged_Group::Schema_DynamicBinding  (line 21, @0x00000000022a6640, libserver.so)
// globals: CMarkupVolumeTagged_Group::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMarkupVolumeTagged_Group::Schema_DynamicBinding(
        const CMarkupVolumeTagged_Group *const this)
{
  return CMarkupVolumeTagged_Group::s_pSchemaBinding;
}


// CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 21, @0x00000000022a6650, libserver.so)
// globals: CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMarkupVolumeTagged_Group::CEntityInstanceEntityClass *const this)
{
  return CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::DestructInstance  (line 21, @0x00000000022a6660, libserver.so)  // inlines: Destruct<CMarkupVolumeTagged_Group>
void __fastcall CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::DestructInstance(
        CMarkupVolumeTagged_Group::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::FreeInstance  (line 21, @0x00000000022a6680, libserver.so)
void __fastcall CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::FreeInstance(
        CMarkupVolumeTagged_Group::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::CanAllocate  (line 21, @0x00000000022a66a0, libserver.so)
bool __fastcall CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::CanAllocate(
        const CMarkupVolumeTagged_Group::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 21, @0x00000000022a66b0, libserver.so)
// globals: CMarkupVolumeTagged_Group::s_pSchemaBinding
const ISchemaBinding *__fastcall CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMarkupVolumeTagged_Group::CEntityInstanceEntityClass *const this)
{
  return CMarkupVolumeTagged_Group::s_pSchemaBinding;
}


// CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::AllocateInstance  (line 21, @0x00000000022a86c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::AllocateInstance(
        CMarkupVolumeTagged_Group::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1208);
  memset(v1, 0, 0x4B8u);
  return v1;
}


// CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x00000000022ab450, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMarkupVolumeTagged_Group::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x00000000022ab470, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMarkupVolumeTagged_Group::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMarkupVolumeTagged_Group::~CMarkupVolumeTagged_Group  (line 21, @0x00000000022ab840, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CMarkupVolume, ~CMarkupVolumeTagged, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CUtlMemory<char*, int>::Purge
void __fastcall CMarkupVolumeTagged_Group::~CMarkupVolumeTagged_Group(CMarkupVolumeTagged_Group *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  char *v4; // rsi
  bool v5; // zf
  __int64 v6; // r13
  int v7; // r12d
  char *v8; // rsi

  this->_vptr_IHandleEntity = &off_406C990;
  if ( this->m_Tags.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = this->m_Tags.m_Memory.m_pMemory[v2++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4);
    }
    while ( v3 < this->m_Tags.m_Size );
  }
  v5 = (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Tags.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
    if ( (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
  }
  if ( this->m_GroupNames.m_Size > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v7;
      v8 = this->m_GroupNames.m_Memory.m_pMemory[v6++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
    }
    while ( v7 < this->m_GroupNames.m_Size );
  }
  v5 = (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_GroupNames.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
    if ( (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_406D210;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CMarkupVolumeTagged_Group::~CMarkupVolumeTagged_Group  (line 21, @0x00000000022ac120, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CMarkupVolume, ~CMarkupVolumeTagged, ~CMarkupVolumeTagged_Group, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<char*, int>::Purge
void __fastcall CMarkupVolumeTagged_Group::~CMarkupVolumeTagged_Group(CMarkupVolumeTagged_Group *const this)
{
  int m_Size; // r12d
  __int64 v3; // r13
  int v4; // r12d
  char *v5; // rsi
  bool v6; // zf
  __int64 v7; // r13
  int v8; // r12d
  char *v9; // rsi

  m_Size = this->m_Tags.m_Size;
  this->_vptr_IHandleEntity = &off_406C990;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      ++v4;
      v5 = this->m_Tags.m_Memory.m_pMemory[v3++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
    }
    while ( v4 < this->m_Tags.m_Size );
  }
  v6 = (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Tags.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
    if ( (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
  }
  if ( this->m_GroupNames.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = this->m_GroupNames.m_Memory.m_pMemory[v7++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9);
    }
    while ( v8 < this->m_GroupNames.m_Size );
  }
  v6 = (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_GroupNames.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
    if ( (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_406D210;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CMarkupVolumeTagged_Group::GetEntityClassInternal  (line 21, @0x00000000022b3df0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CMarkupVolumeTagged::InitScriptDesc, CMarkupVolumeTagged::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "markup_group", "CMarkupVolumeTagged_Group"
// globals: `guard variable for'CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass, CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass, __dso_handle, CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMarkupVolumeTagged_Group::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_GroupClassInfo, CMarkupVolumeTagged_Group::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_GroupClassInfo
CEntityClass *__cdecl CMarkupVolumeTagged_Group::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass) != 0 )
  {
    CEntityClass::CEntityClass(&CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass);
    CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass._vptr_CEntityClass = off_406AC90;
    __cxa_guard_release(&`guard variable for'CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass);
    __cxa_atexit(
      CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass,
      &_dso_handle);
  }
  if ( g_pEntityCMarkupVolumeTagged_GroupClass != 0 )
    return &CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass;
  if ( `guard variable for'CMarkupVolumeTagged_Group::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_GroupClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMarkupVolumeTagged_Group::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_GroupClassInfo) != 0 )
  {
    EntityClassInfo = CMarkupVolumeTagged::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMarkupVolumeTagged_Group::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_GroupClassInfo,
      "CMarkupVolumeTagged_Group",
      "markup_group",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMarkupVolumeTagged_Group::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_GroupClassInfo);
  }
  CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass.m_pClassInfo = &CMarkupVolumeTagged_Group::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_GroupClassInfo;
  CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass.m_pBaseClassInfo = CMarkupVolumeTagged_Group::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_GroupClassInfo.m_pBaseClassInfo;
  g_pEntityCMarkupVolumeTagged_GroupClass = &CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass;
  CMarkupVolumeTagged_Group::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_GroupClassInfo.m_pClass = &CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass;
  CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass.m_pScriptClassDesc = CMarkupVolumeTagged::InitScriptDesc();
  g_pEntityCMarkupVolumeTagged_GroupClass->m_pComponentOverrides = 0;
  return &CMarkupVolumeTagged_Group::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_GroupClass;
}


// CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::ConstructInstance  (line 21, @0x00000000022b4330, libserver.so)  // inlines: CMarkupVolumeTagged_Group, Construct<CMarkupVolumeTagged_Group>
// calls: CMarkupVolumeTagged::CMarkupVolumeTagged
CEntityInstance *__fastcall CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::ConstructInstance(
        CMarkupVolumeTagged_Group::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CMarkupVolumeTagged::CMarkupVolumeTagged(p);
    *p = &off_406AD10;
  }
  return p;
}


// CMarkupVolumeTagged_Nav::Schema_DynamicBinding  (line 22, @0x00000000022a66c0, libserver.so)
// globals: CMarkupVolumeTagged_Nav::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMarkupVolumeTagged_Nav::Schema_DynamicBinding(
        const CMarkupVolumeTagged_Nav *const this)
{
  return CMarkupVolumeTagged_Nav::s_pSchemaBinding;
}


// CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 22, @0x00000000022a66d0, libserver.so)
// globals: CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass *const this)
{
  return CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::DestructInstance  (line 22, @0x00000000022a66e0, libserver.so)  // inlines: Destruct<CMarkupVolumeTagged_Nav>
void __fastcall CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::DestructInstance(
        CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::FreeInstance  (line 22, @0x00000000022a6700, libserver.so)
void __fastcall CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::FreeInstance(
        CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::CanAllocate  (line 22, @0x00000000022a6720, libserver.so)
bool __fastcall CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::CanAllocate(
        const CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 22, @0x00000000022a6730, libserver.so)
// globals: CMarkupVolumeTagged_Nav::s_pSchemaBinding
const ISchemaBinding *__fastcall CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass *const this)
{
  return CMarkupVolumeTagged_Nav::s_pSchemaBinding;
}


// CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::AllocateInstance  (line 22, @0x00000000022a8700, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::AllocateInstance(
        CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1208);
  memset(v1, 0, 0x4B8u);
  return v1;
}


// CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x00000000022ab4a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x00000000022ab4c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMarkupVolumeTagged_Nav::~CMarkupVolumeTagged_Nav  (line 22, @0x00000000022abc00, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CMarkupVolume, ~CMarkupVolumeTagged, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CUtlMemory<char*, int>::Purge
void __fastcall CMarkupVolumeTagged_Nav::~CMarkupVolumeTagged_Nav(CMarkupVolumeTagged_Nav *const this)
{
  int m_Size; // edx
  __int64 v3; // r13
  int v4; // r12d
  char *v5; // rsi
  bool v6; // zf
  __int64 v7; // r13
  int v8; // r12d
  char *v9; // rsi

  m_Size = this->m_Tags.m_Size;
  this->_vptr_IHandleEntity = &off_406C990;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      ++v4;
      v5 = this->m_Tags.m_Memory.m_pMemory[v3++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
    }
    while ( v4 < this->m_Tags.m_Size );
  }
  v6 = (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Tags.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
    if ( (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
  }
  if ( this->m_GroupNames.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = this->m_GroupNames.m_Memory.m_pMemory[v7++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9);
    }
    while ( v8 < this->m_GroupNames.m_Size );
  }
  v6 = (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_GroupNames.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
    if ( (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_406D210;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CMarkupVolumeTagged_Nav::~CMarkupVolumeTagged_Nav  (line 22, @0x00000000022ac270, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CMarkupVolume, ~CMarkupVolumeTagged, ~CMarkupVolumeTagged_Nav, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<char*, int>::Purge
void __fastcall CMarkupVolumeTagged_Nav::~CMarkupVolumeTagged_Nav(CMarkupVolumeTagged_Nav *const this)
{
  int m_Size; // r14d
  __int64 v3; // r13
  int v4; // r12d
  char *v5; // rsi
  bool v6; // zf
  __int64 v7; // r13
  int v8; // r12d
  char *v9; // rsi

  m_Size = this->m_Tags.m_Size;
  this->_vptr_IHandleEntity = &off_406C990;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      ++v4;
      v5 = this->m_Tags.m_Memory.m_pMemory[v3++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
    }
    while ( v4 < this->m_Tags.m_Size );
  }
  v6 = (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Tags.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
    if ( (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
  }
  if ( this->m_GroupNames.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = this->m_GroupNames.m_Memory.m_pMemory[v7++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9);
    }
    while ( v8 < this->m_GroupNames.m_Size );
  }
  v6 = (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_GroupNames.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
    if ( (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_406D210;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CMarkupVolumeTagged_Nav::GetEntityClassInternal  (line 22, @0x00000000022b3f40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CMarkupVolumeTagged::InitScriptDesc, CMarkupVolumeTagged::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "func_nav_markup", "CMarkupVolumeTagged_Nav"
// globals: `guard variable for'CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass, CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass, __dso_handle, CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMarkupVolumeTagged_Nav::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavClassInfo, CMarkupVolumeTagged_Nav::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavClassInfo
CEntityClass *__cdecl CMarkupVolumeTagged_Nav::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass) != 0 )
  {
    CEntityClass::CEntityClass(&CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass);
    CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass._vptr_CEntityClass = off_406B3D0;
    __cxa_guard_release(&`guard variable for'CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass);
    __cxa_atexit(
      CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass,
      &_dso_handle);
  }
  if ( g_pEntityCMarkupVolumeTagged_NavClass != 0 )
    return &CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass;
  if ( `guard variable for'CMarkupVolumeTagged_Nav::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMarkupVolumeTagged_Nav::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavClassInfo) != 0 )
  {
    EntityClassInfo = CMarkupVolumeTagged::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMarkupVolumeTagged_Nav::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavClassInfo,
      "CMarkupVolumeTagged_Nav",
      "func_nav_markup",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMarkupVolumeTagged_Nav::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavClassInfo);
  }
  CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass.m_pClassInfo = &CMarkupVolumeTagged_Nav::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavClassInfo;
  CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass.m_pBaseClassInfo = CMarkupVolumeTagged_Nav::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavClassInfo.m_pBaseClassInfo;
  g_pEntityCMarkupVolumeTagged_NavClass = &CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass;
  CMarkupVolumeTagged_Nav::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavClassInfo.m_pClass = &CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass;
  CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass.m_pScriptClassDesc = CMarkupVolumeTagged::InitScriptDesc();
  g_pEntityCMarkupVolumeTagged_NavClass->m_pComponentOverrides = 0;
  return &CMarkupVolumeTagged_Nav::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavClass;
}


// CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::ConstructInstance  (line 22, @0x00000000022b4360, libserver.so)  // inlines: CMarkupVolumeTagged_Nav, Construct<CMarkupVolumeTagged_Nav>
// calls: CMarkupVolumeTagged::CMarkupVolumeTagged
CEntityInstance *__fastcall CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::ConstructInstance(
        CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CMarkupVolumeTagged::CMarkupVolumeTagged(p);
    *p = &off_406B450;
  }
  return p;
}


// CMarkupVolumeTagged_NavL4D::Schema_DynamicBinding  (line 23, @0x00000000022a6740, libserver.so)
// globals: CMarkupVolumeTagged_NavL4D::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMarkupVolumeTagged_NavL4D::Schema_DynamicBinding(
        const CMarkupVolumeTagged_NavL4D *const this)
{
  return CMarkupVolumeTagged_NavL4D::s_pSchemaBinding;
}


// CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 23, @0x00000000022a6750, libserver.so)
// globals: CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass *const this)
{
  return CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::DestructInstance  (line 23, @0x00000000022a6760, libserver.so)  // inlines: Destruct<CMarkupVolumeTagged_NavL4D>
void __fastcall CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::DestructInstance(
        CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::FreeInstance  (line 23, @0x00000000022a6780, libserver.so)
void __fastcall CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::FreeInstance(
        CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::CanAllocate  (line 23, @0x00000000022a67a0, libserver.so)
bool __fastcall CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::CanAllocate(
        const CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 23, @0x00000000022a67b0, libserver.so)
// globals: CMarkupVolumeTagged_NavL4D::s_pSchemaBinding
const ISchemaBinding *__fastcall CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass *const this)
{
  return CMarkupVolumeTagged_NavL4D::s_pSchemaBinding;
}


// CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::AllocateInstance  (line 23, @0x00000000022a8740, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::AllocateInstance(
        CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1208);
  memset(v1, 0, 0x4B8u);
  return v1;
}


// CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x00000000022ab4f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x00000000022ab510, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMarkupVolumeTagged_NavL4D::~CMarkupVolumeTagged_NavL4D  (line 23, @0x00000000022ab980, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CMarkupVolume, ~CMarkupVolumeTagged, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CUtlMemory<char*, int>::Purge
void __fastcall CMarkupVolumeTagged_NavL4D::~CMarkupVolumeTagged_NavL4D(CMarkupVolumeTagged_NavL4D *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  char *v4; // rsi
  bool v5; // zf
  __int64 v6; // r13
  int v7; // r12d
  char *v8; // rsi

  this->_vptr_IHandleEntity = &off_406C990;
  if ( this->m_Tags.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = this->m_Tags.m_Memory.m_pMemory[v2++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4);
    }
    while ( v3 < this->m_Tags.m_Size );
  }
  v5 = (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Tags.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
    if ( (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
  }
  if ( this->m_GroupNames.m_Size > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v7;
      v8 = this->m_GroupNames.m_Memory.m_pMemory[v6++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
    }
    while ( v7 < this->m_GroupNames.m_Size );
  }
  v5 = (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_GroupNames.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
    if ( (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_406D210;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CMarkupVolumeTagged_NavL4D::~CMarkupVolumeTagged_NavL4D  (line 23, @0x00000000022abfd0, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CMarkupVolume, ~CMarkupVolumeTagged, ~CMarkupVolumeTagged_NavL4D, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<char*, int>::Purge
void __fastcall CMarkupVolumeTagged_NavL4D::~CMarkupVolumeTagged_NavL4D(CMarkupVolumeTagged_NavL4D *const this)
{
  int m_Size; // r10d
  __int64 v3; // r13
  int v4; // r12d
  char *v5; // rsi
  bool v6; // zf
  __int64 v7; // r13
  int v8; // r12d
  char *v9; // rsi

  m_Size = this->m_Tags.m_Size;
  this->_vptr_IHandleEntity = &off_406C990;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      ++v4;
      v5 = this->m_Tags.m_Memory.m_pMemory[v3++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
    }
    while ( v4 < this->m_Tags.m_Size );
  }
  v6 = (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Tags.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
    if ( (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
  }
  if ( this->m_GroupNames.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = this->m_GroupNames.m_Memory.m_pMemory[v7++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9);
    }
    while ( v8 < this->m_GroupNames.m_Size );
  }
  v6 = (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_GroupNames.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
    if ( (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_406D210;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CMarkupVolumeTagged_NavL4D::GetEntityClassInternal  (line 23, @0x00000000022b4090, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CMarkupVolumeTagged::InitScriptDesc, CMarkupVolumeTagged::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "func_l4d_nav_markup", "CMarkupVolumeTagged_NavL4D"
// globals: `guard variable for'CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass, CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass, __dso_handle, CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMarkupVolumeTagged_NavL4D::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavL4DClassInfo, CMarkupVolumeTagged_NavL4D::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavL4DClassInfo
CEntityClass *__cdecl CMarkupVolumeTagged_NavL4D::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass) != 0 )
  {
    CEntityClass::CEntityClass(&CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass);
    CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass._vptr_CEntityClass = off_406BB10;
    __cxa_guard_release(&`guard variable for'CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass);
    __cxa_atexit(
      CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass,
      &_dso_handle);
  }
  if ( g_pEntityCMarkupVolumeTagged_NavL4DClass != 0 )
    return &CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass;
  if ( `guard variable for'CMarkupVolumeTagged_NavL4D::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavL4DClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMarkupVolumeTagged_NavL4D::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavL4DClassInfo) != 0 )
  {
    EntityClassInfo = CMarkupVolumeTagged::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMarkupVolumeTagged_NavL4D::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavL4DClassInfo,
      "CMarkupVolumeTagged_NavL4D",
      "func_l4d_nav_markup",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMarkupVolumeTagged_NavL4D::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavL4DClassInfo);
  }
  CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass.m_pClassInfo = &CMarkupVolumeTagged_NavL4D::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavL4DClassInfo;
  CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass.m_pBaseClassInfo = CMarkupVolumeTagged_NavL4D::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavL4DClassInfo.m_pBaseClassInfo;
  g_pEntityCMarkupVolumeTagged_NavL4DClass = &CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass;
  CMarkupVolumeTagged_NavL4D::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavL4DClassInfo.m_pClass = &CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass;
  CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass.m_pScriptClassDesc = CMarkupVolumeTagged::InitScriptDesc();
  g_pEntityCMarkupVolumeTagged_NavL4DClass->m_pComponentOverrides = 0;
  return &CMarkupVolumeTagged_NavL4D::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavL4DClass;
}


// CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::ConstructInstance  (line 23, @0x00000000022b4390, libserver.so)  // inlines: CMarkupVolumeTagged_NavL4D, Construct<CMarkupVolumeTagged_NavL4D>
// calls: CMarkupVolumeTagged::CMarkupVolumeTagged
CEntityInstance *__fastcall CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::ConstructInstance(
        CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CMarkupVolumeTagged::CMarkupVolumeTagged(p);
    *p = &off_406BB90;
  }
  return p;
}


// CMarkupVolumeTagged_NavHLVR::Schema_DynamicBinding  (line 24, @0x00000000022a67c0, libserver.so)
// globals: CMarkupVolumeTagged_NavHLVR::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMarkupVolumeTagged_NavHLVR::Schema_DynamicBinding(
        const CMarkupVolumeTagged_NavHLVR *const this)
{
  return CMarkupVolumeTagged_NavHLVR::s_pSchemaBinding;
}


// CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 24, @0x00000000022a67d0, libserver.so)
// globals: CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass *const this)
{
  return CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::DestructInstance  (line 24, @0x00000000022a67e0, libserver.so)  // inlines: Destruct<CMarkupVolumeTagged_NavHLVR>
void __fastcall CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::DestructInstance(
        CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::FreeInstance  (line 24, @0x00000000022a6800, libserver.so)
void __fastcall CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::FreeInstance(
        CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::CanAllocate  (line 24, @0x00000000022a6820, libserver.so)
bool __fastcall CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::CanAllocate(
        const CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 24, @0x00000000022a6830, libserver.so)
// globals: CMarkupVolumeTagged_NavHLVR::s_pSchemaBinding
const ISchemaBinding *__fastcall CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass *const this)
{
  return CMarkupVolumeTagged_NavHLVR::s_pSchemaBinding;
}


// CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::AllocateInstance  (line 24, @0x00000000022a8780, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::AllocateInstance(
        CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1208);
  memset(v1, 0, 0x4B8u);
  return v1;
}


// CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x00000000022ab540, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x00000000022ab560, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMarkupVolumeTagged_NavHLVR::~CMarkupVolumeTagged_NavHLVR  (line 24, @0x00000000022ab700, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CMarkupVolume, ~CMarkupVolumeTagged, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CUtlMemory<char*, int>::Purge
void __fastcall CMarkupVolumeTagged_NavHLVR::~CMarkupVolumeTagged_NavHLVR(CMarkupVolumeTagged_NavHLVR *const this)
{
  int m_Size; // r13d
  __int64 v3; // r13
  int v4; // r12d
  char *v5; // rsi
  bool v6; // zf
  __int64 v7; // r13
  int v8; // r12d
  char *v9; // rsi

  m_Size = this->m_Tags.m_Size;
  this->_vptr_IHandleEntity = &off_406C990;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      ++v4;
      v5 = this->m_Tags.m_Memory.m_pMemory[v3++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
    }
    while ( v4 < this->m_Tags.m_Size );
  }
  v6 = (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Tags.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
    if ( (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
  }
  if ( this->m_GroupNames.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = this->m_GroupNames.m_Memory.m_pMemory[v7++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9);
    }
    while ( v8 < this->m_GroupNames.m_Size );
  }
  v6 = (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_GroupNames.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
    if ( (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_406D210;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CMarkupVolumeTagged_NavHLVR::~CMarkupVolumeTagged_NavHLVR  (line 24, @0x00000000022abe80, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CMarkupVolume, ~CMarkupVolumeTagged, ~CMarkupVolumeTagged_NavHLVR, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<char*, int>::Purge
void __fastcall CMarkupVolumeTagged_NavHLVR::~CMarkupVolumeTagged_NavHLVR(CMarkupVolumeTagged_NavHLVR *const this)
{
  int m_Size; // r8d
  __int64 v3; // r13
  int v4; // r12d
  char *v5; // rsi
  bool v6; // zf
  __int64 v7; // r13
  int v8; // r12d
  char *v9; // rsi

  m_Size = this->m_Tags.m_Size;
  this->_vptr_IHandleEntity = &off_406C990;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      ++v4;
      v5 = this->m_Tags.m_Memory.m_pMemory[v3++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
    }
    while ( v4 < this->m_Tags.m_Size );
  }
  v6 = (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Tags.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
    if ( (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
  }
  if ( this->m_GroupNames.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = this->m_GroupNames.m_Memory.m_pMemory[v7++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9);
    }
    while ( v8 < this->m_GroupNames.m_Size );
  }
  v6 = (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_GroupNames.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
    if ( (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_406D210;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal  (line 24, @0x00000000022b41e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CMarkupVolumeTagged::InitScriptDesc, CMarkupVolumeTagged::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "func_hlvr_nav_markup", "CMarkupVolumeTagged_NavHLVR"
// globals: `guard variable for'CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass, CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass, __dso_handle, CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMarkupVolumeTagged_NavHLVR::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavHLVRClassInfo, CMarkupVolumeTagged_NavHLVR::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavHLVRClassInfo
CEntityClass *__cdecl CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass) != 0 )
  {
    CEntityClass::CEntityClass(&CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass);
    CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass._vptr_CEntityClass = off_406C250;
    __cxa_guard_release(&`guard variable for'CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass);
    __cxa_atexit(
      CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass,
      &_dso_handle);
  }
  if ( g_pEntityCMarkupVolumeTagged_NavHLVRClass != 0 )
    return &CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass;
  if ( `guard variable for'CMarkupVolumeTagged_NavHLVR::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavHLVRClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMarkupVolumeTagged_NavHLVR::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavHLVRClassInfo) != 0 )
  {
    EntityClassInfo = CMarkupVolumeTagged::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMarkupVolumeTagged_NavHLVR::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavHLVRClassInfo,
      "CMarkupVolumeTagged_NavHLVR",
      "func_hlvr_nav_markup",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMarkupVolumeTagged_NavHLVR::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavHLVRClassInfo);
  }
  CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass.m_pClassInfo = &CMarkupVolumeTagged_NavHLVR::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavHLVRClassInfo;
  CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass.m_pBaseClassInfo = CMarkupVolumeTagged_NavHLVR::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavHLVRClassInfo.m_pBaseClassInfo;
  g_pEntityCMarkupVolumeTagged_NavHLVRClass = &CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass;
  CMarkupVolumeTagged_NavHLVR::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTagged_NavHLVRClassInfo.m_pClass = &CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass;
  CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass.m_pScriptClassDesc = CMarkupVolumeTagged::InitScriptDesc();
  g_pEntityCMarkupVolumeTagged_NavHLVRClass->m_pComponentOverrides = 0;
  return &CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTagged_NavHLVRClass;
}


// CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::ConstructInstance  (line 24, @0x00000000022b43c0, libserver.so)  // inlines: CMarkupVolumeTagged_NavHLVR, Construct<CMarkupVolumeTagged_NavHLVR>
// calls: CMarkupVolumeTagged::CMarkupVolumeTagged
CEntityInstance *__fastcall CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::ConstructInstance(
        CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CMarkupVolumeTagged::CMarkupVolumeTagged(p);
    *p = &off_406C2D0;
  }
  return p;
}


// CMarkupVolume::GetDataDescMap  (line 26, @0x0000000002283e00, libserver.so)
// globals: CMarkupVolume::m_DataMap
datamap_t *__fastcall CMarkupVolume::GetDataDescMap(CMarkupVolume *const this)
{
  return &CMarkupVolume::m_DataMap;
}


// CMarkupVolume::AddDatadescMetadataKeys  (line 26, @0x0000000002297a70, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CMarkupVolume::GetEntityClass(void)
void __fastcall CMarkupVolume::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CMarkupVolume::GetEntityClass);
}


// CMarkupVolume::GetBaseMap  (line 26, @0x0000000002297a90, libserver.so)
datamap_t *__cdecl CMarkupVolume::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CMarkupVolume>  (line 26, @0x0000000002297aa0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CMarkupVolume"
// globals: `guard variable for'DataMapInit<CMarkupVolume>(CMarkupVolume *)::nameHolder, CMarkupVolume::GetEntityClass(void), CMarkupVolume::m_DataMap, DataMapInit<CMarkupVolume>(CMarkupVolume *)::dataDesc, DataMapInit<CMarkupVolume>(CMarkupVolume *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CMarkupVolume>(CMarkupVolume *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CMarkupVolume>(CMarkupVolume *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMarkupVolume>(CMarkupVolume *)::nameHolder) != 0 )
  {
    DataMapInit<CMarkupVolume>(CMarkupVolume *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMarkupVolume>(CMarkupVolume *)::nameHolder.m_pszBase = "CMarkupVolume";
    DataMapInit<CMarkupVolume>(CMarkupVolume *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMarkupVolume>(CMarkupVolume *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMarkupVolume>(CMarkupVolume *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMarkupVolume>(CMarkupVolume *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMarkupVolume>(CMarkupVolume *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMarkupVolume>(CMarkupVolume *)::nameHolder,
      &_dso_handle);
  }
  CMarkupVolume::m_DataMap.dataNumFields = 1;
  CMarkupVolume::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CMarkupVolume::m_DataMap.dataDesc = DataMapInit<CMarkupVolume>(CMarkupVolume *)::dataDesc;
  AddDatadescMetadataKeys(&CMarkupVolume::m_DataMap, CMarkupVolume::GetEntityClass);
  return &CMarkupVolume::m_DataMap;
}


// CMarkupVolumeTagged::GetDataDescMap  (line 29, @0x0000000002283e10, libserver.so)
// globals: CMarkupVolumeTagged::m_DataMap
datamap_t *__fastcall CMarkupVolumeTagged::GetDataDescMap(CMarkupVolumeTagged *const this)
{
  return &CMarkupVolumeTagged::m_DataMap;
}


// CMarkupVolumeTagged::AddDatadescMetadataKeys  (line 29, @0x0000000002297b70, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CMarkupVolumeTagged::GetEntityClass(void)
void __fastcall CMarkupVolumeTagged::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CMarkupVolumeTagged::GetEntityClass);
}


// CMarkupVolumeTagged::GetBaseMap  (line 29, @0x0000000002297b90, libserver.so)
// globals: CMarkupVolume::m_DataMap
datamap_t *__cdecl CMarkupVolumeTagged::GetBaseMap()
{
  return &CMarkupVolume::m_DataMap;
}


// DataMapInit<CMarkupVolumeTagged>  (line 29, @0x0000000002297ba0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlStringList>
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CMarkupVolumeTagged"
// globals: `guard variable for'DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::nameHolder, `guard variable for'DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::dataDesc, CMarkupVolume::m_DataMap, CMarkupVolumeTagged::GetEntityClass(void), CMarkupVolumeTagged::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<53>::GetDataOps<CUtlStringList>(CUtlStringList *)::ops, CUtlVectorDataopsInstantiator<53>::GetDataOps<CUtlStringList>(CUtlStringList *)::ops, DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::nameHolder (10 total)
datamap_t *__fastcall DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::nameHolder) != 0 )
  {
    DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::nameHolder.m_pszBase = "CMarkupVolumeTagged";
    DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::nameHolder,
      &_dso_handle);
  }
  CMarkupVolumeTagged::m_DataMap.baseMap = &CMarkupVolume::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<53>::GetDataOps<CUtlStringList>(CUtlStringList *)::ops != 0 )
    {
      DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::dataDesc[4].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<53>::GetDataOps<CUtlStringList>(CUtlStringList *)::ops;
    }
    else
    {
      if ( __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<53>::GetDataOps<CUtlStringList>(CUtlStringList *)::ops) != 0 )
      {
        CUtlVectorDataopsInstantiator<53>::GetDataOps<CUtlStringList>(CUtlStringList *)::ops = off_4071B50;
        __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<53>::GetDataOps<CUtlStringList>(CUtlStringList *)::ops);
      }
      DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::dataDesc[4].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<53>::GetDataOps<CUtlStringList>(CUtlStringList *)::ops;
      if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<53>::GetDataOps<CUtlStringList>(CUtlStringList *)::ops == 0
        && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<53>::GetDataOps<CUtlStringList>(CUtlStringList *)::ops) != 0 )
      {
        CUtlVectorDataopsInstantiator<53>::GetDataOps<CUtlStringList>(CUtlStringList *)::ops = off_4071B50;
        __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<53>::GetDataOps<CUtlStringList>(CUtlStringList *)::ops);
      }
    }
    DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::dataDesc[5].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<53>::GetDataOps<CUtlStringList>(CUtlStringList *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::dataDesc);
  }
  CMarkupVolumeTagged::m_DataMap.dataNumFields = 7;
  CMarkupVolumeTagged::m_DataMap.dataDesc = &DataMapInit<CMarkupVolumeTagged>(CMarkupVolumeTagged *)::dataDesc[1];
  AddDatadescMetadataKeys(&CMarkupVolumeTagged::m_DataMap, CMarkupVolumeTagged::GetEntityClass);
  return &CMarkupVolumeTagged::m_DataMap;
}


// CMarkupManager::~CMarkupManager  (line 46, @0x00000000022b5d50, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CCustomLinkedList, ~CUtlHashtable, ~CUtlMemory, ~CUtlStableHashtable, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlLinkedList<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int> >::~CUtlLinkedList, CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int>::Purge, IGameSystem::~IGameSystem, CUtlMemory<CMarkupVolumeTagged*, int>::Purge
void __fastcall CMarkupManager::~CMarkupManager(CMarkupManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CMarkupVolumeTagged*,CUtlMemory<CMarkupVolumeTagged*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_AllMarkupEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_406D050;  // vptr: CMarkupManager
  this->m_AllMarkupEntities.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_AllMarkupEntities.m_Memory;
    CUtlMemory<CMarkupVolumeTagged *,int>::Purge(&this->m_AllMarkupEntities.m_Memory);
    if ( (this->m_AllMarkupEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CMarkupVolumeTagged *,int>::Purge(p_m_Memory);
  }
  CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short>,unsigned short>>::~CUtlLinkedList(&this->m_MarkupGroups.m_data);
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::RemoveAll(&this->m_MarkupGroups.m_table);
  if ( (this->m_MarkupGroups.m_table.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>::Purge(&this->m_MarkupGroups.m_table.m_table);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CMarkupManager::~CMarkupManager  (line 46, @0x00000000022b5e60, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CCustomLinkedList, ~CMarkupManager, ~CUtlHashtable, ~CUtlMemory, ~CUtlStableHashtable, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlLinkedList<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int> >::~CUtlLinkedList, CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int>::Purge, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CMarkupVolumeTagged*, int>::Purge
void __fastcall CMarkupManager::~CMarkupManager(CMarkupManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CMarkupVolumeTagged*,CUtlMemory<CMarkupVolumeTagged*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_AllMarkupEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_406D050;  // vptr: CMarkupManager
  this->m_AllMarkupEntities.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_AllMarkupEntities.m_Memory;
    CUtlMemory<CMarkupVolumeTagged *,int>::Purge(&this->m_AllMarkupEntities.m_Memory);
    if ( (this->m_AllMarkupEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CMarkupVolumeTagged *,int>::Purge(p_m_Memory);
  }
  CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short>,unsigned short>>::~CUtlLinkedList(&this->m_MarkupGroups.m_data);
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::RemoveAll(&this->m_MarkupGroups.m_table);
  if ( (this->m_MarkupGroups.m_table.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>::Purge(&this->m_MarkupGroups.m_table.m_table);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CMarkupManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 48, @0x00000000022a6840, libserver.so)
void __fastcall CMarkupManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CMarkupManager *const this)
{
  ;
}


// CMarkupManager::DoesGameSystemReallocate  (line 48, @0x00000000022a6850, libserver.so)
// globals: CMarkupManager::sm_Factory
bool __fastcall CMarkupManager::DoesGameSystemReallocate(const CMarkupManager *const this)
{
  return (*(CMarkupManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CMarkupManager::sm_Factory);
}


// CMarkupManager::SetGameSystemGlobalPtrs  (line 48, @0x00000000022a6870, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CMarkupManager::sm_Factory
void __fastcall CMarkupManager::SetGameSystemGlobalPtrs(CMarkupManager *const this, void *pValue)
{
  if ( CMarkupManager::sm_Factory != 0 )
    (*(CMarkupManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CMarkupManager::sm_Factory, pValue);
}


// CMarkupManager::SpawnGroupPrecache  (line 62, @0x00000000022a68a0, libserver.so)
void __fastcall CMarkupManager::SpawnGroupPrecache(
        CMarkupManager *const this,
        const EventSpawnGroupPrecache_t *const msg)
{
  ++this->m_NumLoadedSpawnGroups;
}


// CMarkupManager::PostSpawnGroupUnload  (line 68, @0x00000000022b5bc0, libserver.so)  // inlines: ExtendInvalidHandle, FirstHandle, ForEachGroup<CMarkupManager::PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t&)::__lambda11>, NextHandle, Purge, RemoveAll, ResetDbgInfo, operator(), operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~MarkupGroup_t
// calls: CUtlString::FreeMemoryBlock, operator delete, CUtlMemory<CMarkupVolumeTagged*, int>::Purge, CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int>::Purge, CUtlLinkedList<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int>::Purge
void __fastcall CMarkupManager::PostSpawnGroupUnload(
        CMarkupManager *const this,
        const EventPostSpawnGroupUnload_t *const msg)
{
  int v3; // eax
  bool v4; // zf
  __int64 v5; // rax
  UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int> *m_pMemory; // rcx
  UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int> *v7; // rax
  __int64 v8; // r13
  CMarkupManager::MarkupGroup_t *m_value; // rbx
  CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int>,short unsigned int> >::ListElem_t *v10; // rax

  v3 = this->m_NumLoadedSpawnGroups - 1;
  v4 = this->m_NumLoadedSpawnGroups == 1;
  this->m_NumLoadedSpawnGroups = v3;
  if ( v3 < 0 || v4 )
  {
    v5 = this->m_MarkupGroups.m_data.m_Head | -(this->m_MarkupGroups.m_data.m_Head == 0xFFFF);
    if ( v5 != -1 )
    {
      m_pMemory = this->m_MarkupGroups.m_data.m_Memory.m_pMemory;
      do
      {
        v8 = v5;
        v7 = &m_pMemory[v5];
        m_value = v7->m_Element.m_value;
        if ( m_value != 0 )
        {
          v4 = (m_value->m_Members.m_Memory.m_nGrowSize & 0xC0000000) == 0;
          m_value->m_Members.m_Size = 0;
          if ( v4 )
          {
            CUtlMemory<CMarkupVolumeTagged *,int>::Purge(&m_value->m_Members.m_Memory);
            if ( (m_value->m_Members.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CMarkupVolumeTagged *,int>::Purge(&m_value->m_Members.m_Memory);
          }
          if ( m_value->m_GroupName.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&m_value->m_GroupName);
          operator delete(m_value);
          m_pMemory = this->m_MarkupGroups.m_data.m_Memory.m_pMemory;
          v7 = &m_pMemory[v8];
        }
        v5 = v7->m_Next | -(v7->m_Next == 0xFFFF);
      }
      while ( v5 != -1 );
    }
    CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::RemoveAll(&this->m_MarkupGroups.m_table);
    if ( (this->m_MarkupGroups.m_table.m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>::Purge(&this->m_MarkupGroups.m_table.m_table);
    CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short>,unsigned short>>::RemoveAll(&this->m_MarkupGroups.m_data);
    if ( (this->m_MarkupGroups.m_data.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short>,unsigned short>::Purge(&this->m_MarkupGroups.m_data.m_Memory);
    v10 = this->m_MarkupGroups.m_data.m_Memory.m_pMemory;
    this->m_MarkupGroups.m_data.m_FirstFree = -1;
    this->m_MarkupGroups.m_data.m_NumAlloced = 0;
    this->m_MarkupGroups.m_data.m_LastAlloc.index = -1;
    this->m_MarkupGroups.m_data.m_pElements = v10;
  }
}


// CMarkupManager::FindOrCreateMarkupGroup  (line 189, @0x00000000022b6fc0, libserver.so)  // inlines: AddToTailUnconstructed, CUtlKeyValuePair, CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<CUtlKeyValuePair<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, Construct<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, char const*, CMarkupManager::MarkupGroup_t*>, DoFind<char const*>, DoInsert<char const*, CMarkupManager::MarkupGroup_t*>, DoInsertNoCheck<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex>, DoLookup<char const*>, Element, Find, Get, Insert, IsIdxValid, IsInList, LinkBefore, LinkToTail, MarkupGroup_t, Unlink, operator char const*, operator(), operator[]
// calls: operator new, CUtlString::Set, CUtlString::Get, CUtlLinkedList<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int> >::AllocInternal, CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoInsertUnconstructed, CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoLookup<char const*>, operator delete, _Unwind_Resume
// callers: CMarkupVolumeTagged::Search, markup_group_ent_bbox, CMarkupVolumeTagged::UpdateOnRemove, CMarkupVolumeTagged::Activate
CMarkupManager::MarkupGroup_t *__fastcall CMarkupManager::FindOrCreateMarkupGroup(
        CMarkupManager *const this,
        const char *pGroupName,
        bool bCreateIfAbsent)
{
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> >::handle_t *v3; // rcx
  unsigned int v5; // edx
  int v8; // eax
  unsigned int v9; // r8d
  CMarkupManager::MarkupGroup_t *m_value; // r12
  CUtlString *v12; // rax
  unsigned int v13; // r15d
  const char *v14; // rax
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> >::handle_t *v15; // rcx
  int v16; // edx
  const char *v17; // r14
  unsigned int v18; // edi
  unsigned __int16 v19; // cx
  __int64 v20; // rax
  UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int> *m_pMemory; // r8
  unsigned __int64 v22; // rsi
  UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int> *v23; // rdx
  __int64 m_Previous; // rdi
  __int64 m_Next; // rdi
  UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int> *v26; // rsi
  __int64 m_Tail; // rdx
  const char **v28; // rax
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t> *v29; // rax
  int v30; // eax
  unsigned __int16 v31; // [rsp+Ch] [rbp-34h]

  v5 = -1164533299;
  v8 = *pGroupName;
  if ( v8 != 0 )
  {
    v3 = pGroupName;
    v9 = -2128831035;
    do
    {
      v3 = (v3 + 1);
      v9 = 16777619 * (v9 ^ v8);
      v8 = *v3;
    }
    while ( v8 != 0 );
    v5 = (v9 ^ (v9 << 17)) + (v9 >> 21);
  }
  m_value = 0;
  if ( (this->m_MarkupGroups.m_table.m_nUsed == 0
     || (v30 = CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::DoLookup<char const*>(
                 &this->m_MarkupGroups.m_table,
                 pGroupName,
                 v5,
                 v3)) == -1
     || (m_value = this->m_MarkupGroups.m_data.m_Memory.m_pMemory[this->m_MarkupGroups.m_table.m_table.m_pMemory[v30].data[0]].m_Element.m_value) == 0)
    && bCreateIfAbsent )
  {
    v12 = operator new(0x28u);
    v12->m_pString = 0;
    m_value = v12;
    CUtlString::Set(v12, pGroupName);
    m_value->m_pGroupEntity = 0;
    v13 = -1164533299;
    m_value->m_Members.m_Size = 0;
    m_value->m_Members.m_Memory.m_pMemory = 0;
    m_value->m_Members.m_Memory.m_nAllocationCount = 0;
    m_value->m_Members.m_Memory.m_nGrowSize = 0;
    v14 = CUtlString::Get(&m_value->m_GroupName);
    v16 = *v14;
    v17 = v14;
    if ( v16 != 0 )
    {
      v15 = v14;
      v18 = -2128831035;
      do
      {
        v15 = (v15 + 1);
        v18 = 16777619 * (v18 ^ v16);
        v16 = *v15;
      }
      while ( v16 != 0 );
      v13 = (v18 ^ (v18 << 17)) + (v18 >> 21);
    }
    if ( this->m_MarkupGroups.m_table.m_nUsed == 0
      || CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::DoLookup<char const*>(
           &this->m_MarkupGroups.m_table,
           v14,
           v13,
           v15) == -1 )
    {
      v19 = CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short>,unsigned short>>::AllocInternal(
              &this->m_MarkupGroups.m_data,
              0);
      v20 = &stru_17FFE8;
      if ( v19 != 0xFFFF )
      {
        if ( v19 >= this->m_MarkupGroups.m_data.m_Memory.m_nAllocationCount
          || v19 > this->m_MarkupGroups.m_data.m_LastAlloc.index )
        {
          v20 = 24LL * v19;
          v26 = (this->m_MarkupGroups.m_data.m_Memory.m_pMemory + v20);
        }
        else
        {
          m_pMemory = this->m_MarkupGroups.m_data.m_Memory.m_pMemory;
          v22 = v19;
          v20 = v22 * 24;
          v23 = &m_pMemory[v22];
          m_Previous = m_pMemory[v22].m_Previous;
          if ( v19 == m_Previous )
          {
            v26 = &m_pMemory[v22];
          }
          else
          {
            if ( m_Previous == 0xFFFF )
              this->m_MarkupGroups.m_data.m_Head = v23->m_Next;
            else
              m_pMemory[m_Previous].m_Next = v23->m_Next;
            m_Next = v23->m_Next;
            if ( m_Next == 0xFFFF )
              this->m_MarkupGroups.m_data.m_Tail = v23->m_Previous;
            else
              this->m_MarkupGroups.m_data.m_Memory.m_pMemory[m_Next].m_Previous = v23->m_Previous;
            v23->m_Next = v19;
            v23->m_Previous = v19;
            --this->m_MarkupGroups.m_data.m_ElementCount;
            v26 = &this->m_MarkupGroups.m_data.m_Memory.m_pMemory[v22];
          }
        }
        v26->m_Next = -1;
        m_Tail = this->m_MarkupGroups.m_data.m_Tail;
        v26->m_Previous = m_Tail;
        this->m_MarkupGroups.m_data.m_Tail = v19;
        if ( m_Tail == 0xFFFF )
          this->m_MarkupGroups.m_data.m_Head = v19;
        else
          this->m_MarkupGroups.m_data.m_Memory.m_pMemory[m_Tail].m_Next = v19;
        ++this->m_MarkupGroups.m_data.m_ElementCount;
      }
      v28 = (&this->m_MarkupGroups.m_data.m_Memory.m_pMemory->m_Element.m_key + v20);
      if ( v28 != 0 )
      {
        *v28 = v17;
        v28[1] = m_value;
      }
      v31 = v19;
      v29 = &this->m_MarkupGroups.m_table.m_table.m_pMemory[CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::DoInsertUnconstructed(
                                                              &this->m_MarkupGroups.m_table,
                                                              v13,
                                                              1)];
      if ( v29 != -2LL )
        v29->data[0] = v31;
    }
  }
  return m_value;
}


// CMarkupManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 313, @0x0000000002297d60, libserver.so)
void __cdecl CMarkupManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// markup_group_spew  (line 315, @0x0000000002287f10, libserver.so)  // inlines: ExtendInvalidHandle, FirstHandle, ForEach<CMarkupManager::SpewGroups()::__lambda13>, ForEachGroup<CMarkupManager::SpewGroups()::__lambda12>, GetClassNameAsCStr, GetEntityNameAsCStr, NextHandle, SpewGroups, String, operator(), operator[]
// calls: Msg, CUtlString::Get, CEntityInstance::GetEntityIndex
// strings: "Markup groups:\n", " - Markup group '%s' (%d members)\n", "  o [%5d] '%s' (%s) [group entity]\n", "  + [%5d] '%s' (%s)\n", "Markup entities not in any group:\n", "  o [no group entity]\n"
// globals: g_pMarkupManager
void __fastcall markup_group_spew(const CCommandContext *const ctx, const CCommand *const args)
{
  CMarkupManager *v2; // rbx
  unsigned __int64 v3; // xmm0_8
  __int64 v4; // rax
  UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int> *m_pMemory; // rdx
  __int64 v6; // rax
  CMarkupManager::MarkupGroup_t *m_value; // r14
  int m_Size; // ebx
  const char *v9; // rax
  double v10; // xmm0_8
  const CEntityInstance *m_pGroupEntity; // rdi
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r12
  const char *v14; // rbx
  CEntityIndex v15; // eax
  __int64 v16; // r12
  int i; // ebx
  const char *v18; // r13
  const CEntityInstance *v19; // rdi
  CEntityIdentity *v20; // rax
  const char *v21; // r15
  CEntityIndex v22; // eax
  __int64 v23; // r12
  int v24; // ebx
  CMarkupVolumeTagged *v25; // rdi
  CEntityIdentity *v26; // rax
  const char *v27; // r15
  const char *v28; // r14
  CEntityIndex v29; // eax
  __int64 v30; // [rsp+0h] [rbp-40h]
  CMarkupManager *v31; // [rsp+8h] [rbp-38h]

  v2 = g_pMarkupManager;
  v31 = g_pMarkupManager;
  if ( g_pMarkupManager != 0 )
  {
    v3 = Msg("Markup groups:\n", args).m128_u64[0];
    v4 = v2->m_MarkupGroups.m_data.m_Head | -(v2->m_MarkupGroups.m_data.m_Head == 0xFFFF);
    if ( v4 != -1 )
    {
      m_pMemory = v31->m_MarkupGroups.m_data.m_Memory.m_pMemory;
      do
      {
        v6 = v4;
        m_value = m_pMemory[v6].m_Element.m_value;
        v30 = v6 * 24;
        m_Size = m_value->m_Members.m_Size;
        v9 = CUtlString::Get(&m_value->m_GroupName);
        *&v10 = Msg(" - Markup group '%s' (%d members)\n", v9, m_Size).m128_u64[0];
        m_pGroupEntity = m_value->m_pGroupEntity;
        if ( m_pGroupEntity != 0 )
        {
          m_pEntity = m_pGroupEntity->m_pEntity;
          m_pAsString = "";
          if ( m_pEntity->m_designerName.u.m_Id != 0 )
            m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
          v14 = "";
          if ( m_pEntity->m_name.u.m_Id != 0 )
            v14 = m_pEntity->m_name.u.m_pAsString;
          v15.m_Data = CEntityInstance::GetEntityIndex(m_pGroupEntity).m_Data;
          v3 = Msg("  o [%5d] '%s' (%s) [group entity]\n", v15.m_Data, v14, m_pAsString).m128_u64[0];
        }
        else
        {
          v3 = Msg("  o [no group entity]\n", v10).m128_u64[0];
        }
        v16 = 0;
        for ( i = 0; i < m_value->m_Members.m_Size; v3 = Msg("  + [%5d] '%s' (%s)\n", v22.m_Data, v21, v18).m128_u64[0] )
        {
          v18 = "";
          v19 = m_value->m_Members.m_Memory.m_pMemory[v16];
          v20 = v19->m_pEntity;
          if ( v20->m_designerName.u.m_Id != 0 )
            v18 = v20->m_designerName.u.m_pAsString;
          v21 = "";
          if ( v20->m_name.u.m_Id != 0 )
            v21 = v20->m_name.u.m_pAsString;
          v22.m_Data = CEntityInstance::GetEntityIndex(v19).m_Data;
          ++i;
          ++v16;
        }
        m_pMemory = v31->m_MarkupGroups.m_data.m_Memory.m_pMemory;
        v4 = *(&m_pMemory->m_Next + v30) | -(*(&m_pMemory->m_Next + v30) == 0xFFFF);
      }
      while ( v4 != -1 );
    }
    v23 = 0;
    v24 = 0;
    Msg("Markup entities not in any group:\n", *&v3);
    if ( v31->m_AllMarkupEntities.m_Size > 0 )
    {
      do
      {
        v25 = v31->m_AllMarkupEntities.m_Memory.m_pMemory[v23];
        if ( !v25->m_bIsInGroup )
        {
          v26 = v25->m_pEntity;
          v27 = "";
          if ( v26->m_designerName.u.m_Id != 0 )
            v27 = v26->m_designerName.u.m_pAsString;
          v28 = "";
          if ( v26->m_name.u.m_Id != 0 )
            v28 = v26->m_name.u.m_pAsString;
          v29.m_Data = CEntityInstance::GetEntityIndex(v25).m_Data;
          Msg("  + [%5d] '%s' (%s)\n", v29.m_Data, v28, v27);
        }
        ++v24;
        ++v23;
      }
      while ( v24 < v31->m_AllMarkupEntities.m_Size );
    }
  }
}


// markup_group_ent_text  (line 316, @0x00000000022a40d0, libserver.so)  // inlines: Arg, DoFind<char const*>, DoLookup<char const*>, Element, Find, FindMarkupGroup, FindOrCreateMarkupGroup, ForEach<CMarkupManager::GroupDebugToggle(bool, const CCommand&)::__lambda14>, Get, GroupDebugToggle, operator(), operator[]
// calls: Warning, CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoLookup<char const*>, CBaseEntity::ToggleDebugBits
// strings: "markup_group_ent_text", "Usage: %s <markup_group name>", "Cannot find markup_group named '%s'\n"
// globals: g_pMarkupManager
void __fastcall markup_group_ent_text(const CCommandContext *const ctx, const CCommand *const args)
{
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> >::handle_t *v2; // rcx
  CMarkupManager *v3; // rbx
  const char *v4; // r12
  unsigned int v5; // edx
  int v6; // eax
  const char *v7; // rdx
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // eax
  CMarkupManager::MarkupGroup_t *m_value; // r13
  __int64 v12; // r12
  int i; // ebx
  CBaseEntity *v14; // rdi

  v3 = g_pMarkupManager;
  if ( args->m_nArgc == 2 )
  {
    v4 = args->m_ppArgv[1];
    v5 = -1164533299;
    v6 = *v4;
    if ( v6 != 0 )
    {
      v7 = args->m_ppArgv[1];
      v8 = -2128831035;
      do
      {
        ++v7;
        v8 = 16777619 * (v8 ^ v6);
        v6 = *v7;
      }
      while ( v6 != 0 );
      v9 = v8 ^ (v8 << 17);
      v2 = (v8 >> 21);
      v5 = v9 + v2;
    }
    if ( g_pMarkupManager->m_MarkupGroups.m_table.m_nUsed != 0
      && (v10 = CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::DoLookup<char const*>(
                  &g_pMarkupManager->m_MarkupGroups.m_table,
                  args->m_ppArgv[1],
                  v5,
                  v2)) != -1
      && (m_value = v3->m_MarkupGroups.m_data.m_Memory.m_pMemory[v3->m_MarkupGroups.m_table.m_table.m_pMemory[v10].data[0]].m_Element.m_value) != 0 )
    {
      v12 = 0;
      for ( i = 0; i < m_value->m_Members.m_Size; ++i )
      {
        v14 = m_value->m_Members.m_Memory.m_pMemory[v12++];
        CBaseEntity::ToggleDebugBits(v14, 1u);
      }
    }
    else
    {
      Warning("Cannot find markup_group named '%s'\n", v4);
    }
  }
  else
  {
    Warning("Usage: %s <markup_group name>", "markup_group_ent_text");
  }
}


// markup_group_ent_bbox  (line 317, @0x00000000022a3600, libserver.so)  // inlines: Arg, FindMarkupGroup, ForEach<CMarkupManager::GroupDebugToggle(bool, const CCommand&)::__lambda14>, GroupDebugToggle, operator()
// calls: Warning, CMarkupManager::FindOrCreateMarkupGroup, CBaseEntity::ToggleDebugBits
// strings: "markup_group_ent_bbox", "Usage: %s <markup_group name>", "Cannot find markup_group named '%s'\n"
// globals: g_pMarkupManager
void __fastcall markup_group_ent_bbox(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CMarkupManager::MarkupGroup_t *MarkupGroup; // rax
  CMarkupManager::MarkupGroup_t *v4; // r13
  __int64 v5; // r12
  int v6; // ebx
  CBaseEntity *v7; // rdi

  if ( args->m_nArgc == 2 )
  {
    v2 = args->m_ppArgv[1];
    MarkupGroup = CMarkupManager::FindOrCreateMarkupGroup(g_pMarkupManager, v2, 0);
    v4 = MarkupGroup;
    if ( MarkupGroup != 0 )
    {
      v5 = 0;
      v6 = 0;
      if ( MarkupGroup->m_Members.m_Size > 0 )
      {
        do
        {
          ++v6;
          v7 = v4->m_Members.m_Memory.m_pMemory[v5++];
          CBaseEntity::ToggleDebugBits(v7, 4u);
        }
        while ( v6 < v4->m_Members.m_Size );
      }
    }
    else
    {
      Warning("Cannot find markup_group named '%s'\n", v2);
    }
  }
  else
  {
    Warning("Usage: %s <markup_group name>", "markup_group_ent_bbox");
  }
}


// CMarkupVolume::Precache  (line 323, @0x00000000022a42c0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CMarkupVolume::Precache(CMarkupVolume *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 1);
}


// CMarkupVolume::Spawn  (line 330, @0x000000000228d710, libserver.so)  // inlines: AssignTo, Base, CCollisionAttributeWriter, CNetworkVarBase, Compare, Element, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, FindKeyHash, GetComponent<CRenderComponent>, GetForModify, GetValue, GetValue<Vector>, GetValueString, NetworkStateChanged, Release, Set, SetCollisionGroup, VPhysicsCollisionAttribute_t, operator=, operator[], ~CCollisionAttributeWriter
// calls: CBaseEntity::Spawn, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::GetModel, CCollisionProperty::SetupPhysicsFromUnscaledModel, CRenderComponent::SetRenderingEnabled, CCollisionProperty::SetupPhysicsFromUnscaledOBB, VariantFieldTypeName, Warning, V_sscanf, VPhysicsCollisionAttribute_t::Compare, _Unwind_Resume
// callers: CMarkupVolumeTagged::Spawn
// strings: "No free conversion of %s variant to Vector right now\n"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CMarkupVolume::Spawn(CMarkupVolume *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13
  unsigned __int64 m_Value; // rax
  unsigned __int64 v6; // rax
  int m_nCount; // ecx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v9; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rdx
  CEntityVariant *p_m_value; // rax
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  CRenderComponent *v15; // rdi
  __int64 m_nBaseOffset; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v17; // si
  __int64 v18; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v19; // rdx
  vec_t **v20; // rdi
  int16 v21; // ax
  vec_t z; // xmm0_4
  vec_t y; // xmm2_4
  vec_t x; // xmm1_4
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v25; // si
  __int64 v26; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v27; // rdx
  CCollisionProperty *m_pCollisionProp; // rbx
  vec_t **v29; // rdi
  int16 v30; // ax
  vec_t v31; // xmm0_4
  vec_t v32; // xmm2_4
  vec_t v33; // xmm1_4
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v34; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v35; // rdx
  const char *v36; // rax
  const char *v37; // rax
  Vector vBoundMins; // [rsp+0h] [rbp-80h] BYREF
  Vector vBoundMaxs; // [rsp+10h] [rbp-70h] BYREF
  CCollisionAttributeWriter<RnCollisionAttr_t> writer; // [rsp+20h] [rbp-60h] BYREF

  p_m_Collision = &this->m_Collision;
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  writer.m_pCollisionProp = p_m_Collision;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  if ( m_Value != 0 )
    writer.m_OriginalState.m_nInteractsAs.m_Value = m_Value;
  v6 = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
  if ( v6 != 0 )
  {
    writer.m_OriginalState.m_nInteractsWith.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
    v6 = writer.m_OriginalState.m_nInteractsExclude.m_Value;
  }
  if ( this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value != v6 )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nInteractsExclude.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value;
  }
  if ( writer.m_OriginalState.m_nEntityId.m_Value != this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nEntityId.m_Value = this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value;
  }
  if ( writer.m_OriginalState.m_nHierarchyId.m_Value != this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nHierarchyId.m_Value = this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value;
  }
  if ( writer.m_OriginalState.m_nCollisionGroup.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nCollisionGroup.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value;
  }
  if ( writer.m_OriginalState.m_nCollisionFunctionMask.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      39,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nCollisionFunctionMask.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  }
  writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value = 1;
  (*(this->m_Collision._vptr_ICollideable + 16))(p_m_Collision);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_33:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_26;
    goto LABEL_34;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v9 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v9) == -926958586 )
      goto LABEL_23;
LABEL_20:
    if ( m_nCount <= ++v9 )
      goto LABEL_33;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v9] != -926958586 )
    goto LABEL_20;
LABEL_23:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v11 = pKeyValues->m_keyValues.m_pElements;
  else
    v11 = 0;
  p_m_value = &v11[v9].m_value;
  if ( p_m_value->m_type == 30 )
  {
LABEL_26:
    if ( p_m_value->m_uint64 != 0 )
    {
      CBaseEntity::GetModel(&vBoundMaxs, this);
      CCollisionProperty::SetupPhysicsFromUnscaledModel(
        p_m_Collision,
        VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
        1,
        0);
      goto LABEL_28;
    }
  }
LABEL_34:
  if ( m_nCount <= 0 )
  {
LABEL_42:
    v20 = &CEntityKeyValues::sm_EmptyVariant;
  }
  else
  {
    v17 = pKeyValues->m_keyHashes.m_nAllocated;
    v18 = 0;
    while ( 1 )
    {
      if ( v17 != 0 )
      {
        v19 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v17 > 9 )
          v19 = pKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v19 = 0;
      }
      if ( v19[v18] == -1307688131 )
        break;
      if ( m_nCount <= ++v18 )
        goto LABEL_42;
    }
    if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
      v35 = pKeyValues->m_keyValues.m_pElements;
    else
      v35 = 0;
    v20 = &v35[v18];
  }
  v21 = *(v20 + 4);
  switch ( v21 )
  {
    case 0:
LABEL_44:
      z = -1.0;
      y = -1.0;
      x = -1.0;
      break;
    case 30:
      if ( V_sscanf(*v20, "%g %g %g", &vBoundMins, &vBoundMins.y, &vBoundMins.z) != 3 )
        goto LABEL_87;
      z = vBoundMins.z;
      y = vBoundMins.y;
      x = vBoundMins.x;
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      break;
    case 39:
    case 3:
      x = **v20;
      y = (*v20)[1];
      z = (*v20)[2];
      break;
    default:
      v37 = VariantFieldTypeName(v21);
      Warning("No free conversion of %s variant to Vector right now\n", v37);
LABEL_87:
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      goto LABEL_44;
  }
  vBoundMins.x = x;
  vBoundMins.y = y;
  vBoundMins.z = z;
  if ( m_nCount <= 0 )
  {
LABEL_67:
    v29 = &CEntityKeyValues::sm_EmptyVariant;
  }
  else
  {
    v25 = pKeyValues->m_keyHashes.m_nAllocated;
    v26 = 0;
    while ( 1 )
    {
      if ( v25 != 0 )
      {
        v27 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v25 > 9 )
          v27 = pKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v27 = 0;
      }
      if ( v27[v26] == 361620063 )
        break;
      if ( m_nCount <= ++v26 )
        goto LABEL_67;
    }
    if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
      v34 = pKeyValues->m_keyValues.m_pElements;
    else
      v34 = 0;
    v29 = &v34[v26];
  }
  v30 = *(v29 + 4);
  if ( v30 != 0 )
  {
    if ( v30 == 30 )
    {
      if ( V_sscanf(*v29, "%g %g %g", &vBoundMaxs, &vBoundMaxs.y, &vBoundMaxs.z) != 3 )
        goto LABEL_69;
      v33 = vBoundMaxs.x;
      v31 = vBoundMaxs.z;
      v32 = vBoundMaxs.y;
    }
    else
    {
      if ( v30 != 39 && v30 != 3 )
      {
        v36 = VariantFieldTypeName(v30);
        Warning("No free conversion of %s variant to Vector right now\n", v36);
        goto LABEL_69;
      }
      v32 = (*v29)[1];
      v31 = (*v29)[2];
      v33 = **v29;
    }
  }
  else
  {
LABEL_69:
    v31 = 1.0;
    v32 = 1.0;
    v33 = 1.0;
  }
  vBoundMaxs.x = v33;
  vBoundMaxs.y = v32;
  vBoundMaxs.z = v31;
  CCollisionProperty::SetupPhysicsFromUnscaledOBB(
    p_m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    1,
    &vBoundMins,
    &vBoundMaxs);
LABEL_28:
  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    v15 = 0;
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CRenderComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
      v15 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  else
  {
    v15 = 0;
  }
  CRenderComponent::SetRenderingEnabled(v15, 0);
  if ( !writer.m_bReleased )
  {
    m_pCollisionProp = writer.m_pCollisionProp;
    writer.m_bReleased = 1;
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
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
  }
}


// CMarkupVolume::GetOBBBounds  (line 368, @0x0000000002297d70, libserver.so)  // inlines: operator=
// calls: CBaseEntity::EntityToWorldTransform
// callers: CMarkupVolume::OverlapsMarkupVolume, CNavVolumeMarkupVolume::ParamsChanged, CNavGenerator::BeginGeneration
void __fastcall CMarkupVolume::GetOBBBounds(
        const CMarkupVolume *const this,
        Vector *pMins,
        Vector *pMaxs,
        matrix3x4_t *pMat)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r15

  p_m_Collision = &this->m_Collision;
  *pMins = *(*(this->m_Collision._vptr_ICollideable + 1))(&this->m_Collision);
  *pMaxs = *(*(this->m_Collision._vptr_ICollideable + 2))(p_m_Collision);
  *pMat = *CBaseEntity::EntityToWorldTransform(this);
}


// CMarkupVolume::ContainsPoint  (line 377, @0x0000000002298150, libserver.so)  // inlines: Extent, operator=
// calls: CMarkupVolume::OverlapsExtent
bool __fastcall CMarkupVolume::ContainsPoint(const CMarkupVolume *const this, const Vector *const vPos)
{
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  Extent box; // [rsp+0h] [rbp-20h] BYREF

  y = vPos->y;
  z = vPos->z;
  box.lo.x = vPos->x;
  box.lo.y = y;
  box.lo.z = z;
  box.hi = box.lo;
  return CMarkupVolume::OverlapsExtent(this, &box);
}


// CMarkupVolume::OverlapsExtent  (line 383, @0x0000000002297e40, libserver.so)  // inlines: CGameTrace, Center, Init, LengthSqr, Ray_t, RnCollisionAttr_t, VectorAdd, VectorAligned, VectorDivide, VectorSubtract, operator*=, operator+, operator-, operator/
// calls: CGameTrace::Init, CGamePhysicsQueryInterface::ClipRayToEntity
// callers: CMarkupVolume::ContainsPoint, CMarkupVolumeTagged::Search, CNavVolumeMarkupVolume::OverlapsExtent
bool __fastcall CMarkupVolume::OverlapsExtent(const CMarkupVolume *const this, const Extent *const box)
{
  float x; // xmm12_4
  float y; // xmm10_4
  float z; // xmm8_4
  float v6; // xmm11_4
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm11_4
  float v10; // xmm9_4
  float v11; // xmm12_4
  float v12; // xmm10_4
  float v13; // xmm8_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v18; // [rsp-1Ch] [rbp-134h]
  float v19; // [rsp-14h] [rbp-12Ch]
  float v20; // [rsp-Ch] [rbp-124h]
  float v21; // [rsp-8h] [rbp-120h]
  Ray_t ray; // [rsp+0h] [rbp-118h] BYREF
  trace_t tr; // [rsp+50h] [rbp-C8h] BYREF

  x = box->lo.x;
  ray.m_Start.w = 0.0;
  y = box->lo.y;
  ray.m_Delta.w = 0.0;
  z = box->lo.z;
  v6 = box->hi.x;
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  v7 = box->hi.z;
  v8 = box->hi.y;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  memset(&tr.m_ShapeAttributes, 0, 31);
  v18 = (x + v6) * 0.5;
  v20 = (z + v7) * 0.5;
  v19 = (y + v8) * 0.5;
  v21 = v7 - v20;
  CGameTrace::Init(&tr);
  v9 = v6 - v18;
  ray.m_Delta.x = v18 - v18;
  v10 = v8 - v19;
  ray.m_Delta.y = v19 - v19;
  v11 = x - v18;
  ray.m_Delta.z = v20 - v20;
  v12 = y - v19;
  ray.m_flRadius = 0.0;
  v13 = z - v20;
  ray.m_Extents.y = (v10 - v12) * 0.5;
  ray.m_Extents.x = (v9 - v11) * 0.5;
  ray.m_Extents.z = (v21 - v13) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v14 = (v11 + v9) * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  v15 = (v12 + v10) * 0.5;
  v16 = (v13 + v21) * 0.5;
  ray.m_Start.x = v18 + v14;
  ray.m_StartOffset.x = -v14;
  ray.m_StartOffset.y = -v15;
  ray.m_StartOffset.z = -v16;
  ray.m_Start.y = v19 + v15;
  ray.m_Start.z = v20 + v16;
  CGamePhysicsQueryInterface::ClipRayToEntity(g_pPhysicsQuery, &ray, 0xFFFFFFFFFFFFFFFFLL, &this->CBaseModelEntity, &tr);
  return tr.startsolid;
}


// CMarkupVolume::OverlapsMarkupVolume  (line 399, @0x0000000002298190, libserver.so)
// calls: CMarkupVolume::GetOBBBounds, GenerateAABBHull
// callers: CMarkupVolumeTagged::Activate
bool __fastcall CMarkupVolume::OverlapsMarkupVolume(const CMarkupVolume *const this, const CMarkupVolume *pOther)
{
  Vector thisMin; // [rsp+20h] [rbp-190h] BYREF
  Vector thisMax; // [rsp+30h] [rbp-180h] BYREF
  Vector otherMin; // [rsp+40h] [rbp-170h] BYREF
  Vector otherMax; // [rsp+50h] [rbp-160h] BYREF
  matrix3x4_t thisMat; // [rsp+60h] [rbp-150h] BYREF
  matrix3x4_t otherMat; // [rsp+90h] [rbp-120h] BYREF
  Vector thisHull[8]; // [rsp+C0h] [rbp-F0h] BYREF
  Vector otherHull[8]; // [rsp+120h] [rbp-90h] BYREF

  CMarkupVolume::GetOBBBounds(this, &thisMin, &thisMax, &thisMat);
  CMarkupVolume::GetOBBBounds(pOther, &otherMin, &otherMax, &otherMat);
  GenerateAABBHull(&thisMin, &thisMax, &vec3_origin, thisHull);
  GenerateAABBHull(&otherMin, &otherMax, &vec3_origin, otherHull);
  return (*(g_pVPhysics2->_vptr_IAppSystem + 58))(g_pVPhysics2, &thisMat, thisHull, 8, &otherMat, otherHull, 8) <= 0.0;
}


// CMarkupVolumeTagged::CMarkupVolumeTagged  (line 422, @0x00000000022982a0, libserver.so)  // inlines: CMarkupVolume, CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase
// calls: CBaseModelEntity::CBaseModelEntity
// callers: CMarkupVolumeTagged::CEntityInstanceEntityClass::ConstructInstance, CMarkupVolumeTagged_Group::CEntityInstanceEntityClass::ConstructInstance, CMarkupVolumeTagged_Nav::CEntityInstanceEntityClass::ConstructInstance, CMarkupVolumeTagged_NavL4D::CEntityInstanceEntityClass::ConstructInstance, CMarkupVolumeTagged_NavHLVR::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CMarkupVolumeTagged::CMarkupVolumeTagged(CMarkupVolumeTagged *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->m_GroupNames.m_Size = 0;
  this->_vptr_IHandleEntity = &off_406C990;
  this->m_GroupNames.m_Memory.m_pMemory = 0;
  this->m_GroupNames.m_Memory.m_nAllocationCount = 0;
  this->m_GroupNames.m_Memory.m_nGrowSize = 0;
  this->m_Tags.m_Size = 0;
  this->m_Tags.m_Memory.m_pMemory = 0;
  this->m_Tags.m_Memory.m_nAllocationCount = 0;
  this->m_Tags.m_Memory.m_nGrowSize = 0;
  this->m_bIsGroup = 0;
  this->m_bGroupByPrefab = 0;
  this->m_bGroupByVolume = 0;
  this->m_bIsInGroup = 0;
}


// CMarkupVolumeTagged::Spawn  (line 432, @0x000000000228dd60, libserver.so)  // inlines: Base, CUtlString, Element, FindKeyHash, GetValue, GetValueString, IsEmpty, MakeEntityKeyId, MakeStringToken, PurgeAndDeleteElements, RemoveAll, SplitString, TempString, operator char const*, operator[], ~CUtlString
// calls: CMarkupVolume::Spawn, MurmurHash2LowerCase, CEntityKeyValues::GetValueString, CSplitString::CSplitString, CUtlString::Append, CUtlString::Get, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CSplitString::~CSplitString, CUtlString::FreeMemoryBlock, RegisterStringToken, _Unwind_Resume
// strings: "tagFieldNames", "groupnames"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CMarkupVolumeTagged::Spawn(CMarkupVolumeTagged *const this, const CEntityKeyValues *pKeyValues)
{
  uint32 v3; // r12d
  const char *ValueString; // rax
  __int64 v5; // r13
  int i; // r12d
  uint32 v7; // edi
  char *v8; // r14
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v11; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // r14
  __int64 v16; // r13
  int v17; // r12d
  const char *v18; // rax
  uint32 v19; // r12d
  const char *v20; // rax
  uint32 v22; // [rsp+1Ch] [rbp-64h]
  CUtlString allTags; // [rsp+20h] [rbp-60h] BYREF
  CSplitString tagFieldNames; // [rsp+30h] [rbp-50h] BYREF

  CMarkupVolume::Spawn(this, pKeyValues);
  allTags.m_pString = 0;
  v3 = MurmurHash2LowerCase("tagFieldNames", 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
    RegisterStringToken(v3, "tagFieldNames", 0, 1);
  ValueString = CEntityKeyValues::GetValueString(pKeyValues, v3, "");
  CSplitString::CSplitString(&tagFieldNames, ValueString, ",");
  if ( tagFieldNames.m_Size > 0 )
  {
    v5 = 0;
    for ( i = 0; tagFieldNames.m_Size > i; ++i )
    {
      while ( 1 )
      {
        v7 = 0;
        v8 = tagFieldNames.m_Memory.m_pMemory[v5];
        if ( v8 != 0 && *v8 != 0 )
        {
          v22 = MurmurHash2LowerCase(tagFieldNames.m_Memory.m_pMemory[v5], 0x31415926u);
          if ( g_bUpdateStringTokenDatabase )
            RegisterStringToken(v22, v8, 0, 1);
          v7 = v22;
        }
        m_nCount = pKeyValues->m_keyHashes.m_nCount;
        if ( m_nCount <= 0 )
        {
LABEL_31:
          p_m_value = &CEntityKeyValues::sm_EmptyVariant;
          if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
            break;
          goto LABEL_32;
        }
        m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
        v11 = 0;
        while ( m_nAllocated == 0 )
        {
          if ( v7 == *(4 * v11) )
            goto LABEL_15;
LABEL_12:
          if ( m_nCount <= ++v11 )
            goto LABEL_31;
        }
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( v7 != m_pElements[v11] )
          goto LABEL_12;
LABEL_15:
        v13 = pKeyValues->m_keyValues.m_nAllocated != 0 ? pKeyValues->m_keyValues.m_pElements : 0LL;
        p_m_value = &v13[v11].m_value;
        if ( p_m_value->m_type == 30 )
          break;
LABEL_32:
        ++i;
        ++v5;
        if ( tagFieldNames.m_Size <= i )
          goto LABEL_23;
      }
      m_uint64 = p_m_value->m_uint64;
      if ( p_m_value->m_uint64 == 0 )
        goto LABEL_32;
      if ( allTags.m_pString != 0 && *allTags.m_pString != 0 )
        CUtlString::Append(&allTags, ",");
      CUtlString::Append(&allTags, m_uint64);
      ++v5;
    }
  }
LABEL_23:
  if ( this->m_Tags.m_Size > 0 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_Tags.m_Memory.m_pMemory[v16]);
      ++v17;
      ++v16;
    }
    while ( v17 < this->m_Tags.m_Size );
  }
  this->m_Tags.m_Size = 0;
  v18 = CUtlString::Get(&allTags);
  V_SplitString(v18, ",", &this->m_Tags);
  v19 = MurmurHash2LowerCase("groupnames", 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
    RegisterStringToken(v19, "groupnames", 0, 1);
  v20 = CEntityKeyValues::GetValueString(pKeyValues, v19, "");
  V_SplitString(v20, ",", &this->m_GroupNames);
  CSplitString::~CSplitString(&tagFieldNames);
  if ( allTags.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&allTags);
}


// CMarkupVolumeTagged::Activate  (line 478, @0x00000000022a3860, libserver.so)  // inlines: AddMarkupEntitiesToGroup, AddMarkupEntityToGroups, AddToMarkupGroup, AddToTail, AddToTailUnconstructed, CUtlKeyValuePair, CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Construct<CUtlKeyValuePair<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, Construct<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, char const*, CMarkupManager::MarkupGroup_t*>, CopyAndAddToTail, CopyConstruct<CMarkupVolumeTagged*>, CopyConstruct<char*>, DoAutomaticGrouping, DoFind<char const*>, DoInsert<char const*, CMarkupManager::MarkupGroup_t*>, DoInsertNoCheck<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex>, DoLookup<char const*>, DoMarkupVolumesOverlap, Element, ExtendInvalidHandle, Find, FindOrCreateMarkupGroup, FirstHandle, ForEach<CMarkupManager::AddMarkupEntitiesToGroup(CMarkupManager::MarkupGroup_t*)::__lambda17>, ForEach<CMarkupManager::AddMarkupEntityToGroups(CMarkupVolumeTagged*)::__lambda15>, ForEachGroup<CMarkupManager::AddMarkupEntityToGroups(CMarkupVolumeTagged*)::__lambda16>, Get, GetClassNameAsCStr, GetEntityNameAsCStr, GrowMemory, HasElement, Insert, IsIdxValid, IsInList, LinkBefore, LinkToTail, MarkupGroup_t, NextHandle, OnSpawnMarkupEntity, RegisterMarkupGroupEntity, String, Unlink, V_memcpy, V_strlen, memcpy, operator char const*, operator(), operator[]
// calls: CBaseModelEntity::Activate, operator new, CUtlString::Set, CUtlString::Get, CUtlLinkedList<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short unsigned int> >::AllocInternal, CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoInsertUnconstructed, CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoLookup<char const*>, CUtlVectorBase<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> >::Find, CMarkupVolume::OverlapsMarkupVolume, strlen, memcpy, V_stricmp_fast (17 total)
// strings: "markup_group"
// globals: g_pMarkupManager
void __fastcall CMarkupVolumeTagged::Activate(CMarkupVolumeTagged *const this, ActivateType_t activateType)
{
  CMarkupManager *v3; // rbx
  __int64 m_Size; // r12
  int v5; // eax
  CMarkupVolumeTagged **v6; // rax
  __int64 v7; // r15
  int i; // r14d
  unsigned int v9; // edx
  char *v10; // r8
  int v11; // eax
  char *v12; // rdx
  unsigned int v13; // ecx
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> >::handle_t *m_nUsed; // rcx
  CUtlString *v15; // rax
  CMarkupManager::MarkupGroup_t *m_value; // r12
  const char *v17; // rax
  __int64 v18; // rcx
  const char *v19; // r8
  const char *v20; // rcx
  unsigned int v21; // edi
  int v22; // eax
  unsigned __int16 v23; // r9
  __int64 v24; // rax
  UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int> *v25; // rsi
  __int64 m_Tail; // rdx
  char **v27; // rax
  __int64 v28; // rax
  int v29; // eax
  bool v30; // zf
  __int64 v31; // rax
  UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int> *v32; // rcx
  __int64 v33; // r15
  UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int> *v34; // rdx
  CMarkupManager::MarkupGroup_t *v35; // r14
  const CMarkupVolumeTagged *m_pGroupEntity; // rdi
  __int64 v37; // rdx
  CMarkupVolumeTagged *v38; // rax
  int v39; // ecx
  CMarkupVolumeTagged **v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  CMarkupVolumeTagged *v43; // rax
  int v44; // ecx
  CMarkupVolumeTagged **v45; // rdx
  const char *v46; // rax
  CMarkupVolumeTagged *v47; // r14
  void *v48; // r8
  size_t v49; // rdx
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> > *v50; // rcx
  CMarkupVolumeTagged **v51; // rax
  __int64 v52; // rdx
  CMarkupVolumeTagged **v53; // r8
  int v54; // eax
  char **v55; // rax
  const char *m_pAsString; // rax
  UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int> *m_pMemory; // r10
  __int64 v58; // rsi
  UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int> *v59; // rdx
  __int64 m_Previous; // rdi
  __int64 m_Next; // rdi
  CEntityIdentity *m_pEntity; // rax
  const char *v63; // rsi
  __int64 v64; // r15
  CMarkupManager::MarkupGroup_t *MarkupGroup; // rax
  CMarkupVolumeTagged *v66; // rdi
  int v67; // r13d
  CMarkupManager *v68; // r14
  CMarkupManager::MarkupGroup_t *j; // rbx
  CMarkupVolumeTagged **v70; // rdx
  CMarkupVolumeTagged *v71; // r12
  int v72; // edx
  int v73; // eax
  CMarkupVolumeTagged **v74; // rax
  const char *v75; // rax
  CMarkupVolumeTagged *v76; // r12
  __int64 v77; // rdx
  int v78; // eax
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> > **v79; // rax
  __int64 v80; // rax
  int v81; // [rsp+Ch] [rbp-84h]
  CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t*>,short unsigned int>,short unsigned int> > *v82; // [rsp+18h] [rbp-78h]
  int v83; // [rsp+18h] [rbp-78h]
  unsigned int h; // [rsp+20h] [rbp-70h]
  int hb; // [rsp+20h] [rbp-70h]
  CUtlMemory<CMarkupVolumeTagged*,int> *ha; // [rsp+20h] [rbp-70h]
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> > *p_m_table; // [rsp+28h] [rbp-68h]
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> > *v88; // [rsp+28h] [rbp-68h]
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> > *v89; // [rsp+28h] [rbp-68h]
  int v90; // [rsp+28h] [rbp-68h]
  char *pValuec; // [rsp+30h] [rbp-60h]
  char *pValue; // [rsp+30h] [rbp-60h]
  unsigned __int16 pValuea; // [rsp+30h] [rbp-60h]
  char *pValued; // [rsp+30h] [rbp-60h]
  char *pValuee; // [rsp+30h] [rbp-60h]
  int pValuef; // [rsp+30h] [rbp-60h]
  int pValueh; // [rsp+30h] [rbp-60h]
  char *pValueb; // [rsp+30h] [rbp-60h]
  int pValueg; // [rsp+30h] [rbp-60h]
  int srca; // [rsp+38h] [rbp-58h]
  CMarkupVolumeTagged **src; // [rsp+38h] [rbp-58h]
  CMarkupVolumeTagged *v102; // [rsp+48h] [rbp-48h] BYREF
  CMarkupVolumeTagged *v103; // [rsp+50h] [rbp-40h] BYREF
  CMarkupVolumeTagged *v104; // [rsp+58h] [rbp-38h] BYREF

  CBaseModelEntity::Activate(this, activateType);
  v3 = g_pMarkupManager;
  m_Size = g_pMarkupManager->m_AllMarkupEntities.m_Size;
  v5 = g_pMarkupManager->m_AllMarkupEntities.m_Size;
  if ( m_Size == g_pMarkupManager->m_AllMarkupEntities.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CMarkupVolumeTagged *,int>::Grow(&g_pMarkupManager->m_AllMarkupEntities.m_Memory, 1);
    v5 = v3->m_AllMarkupEntities.m_Size;
  }
  v3->m_AllMarkupEntities.m_Size = v5 + 1;
  v6 = &v3->m_AllMarkupEntities.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = this;
  v7 = 0;
  p_m_table = &v3->m_MarkupGroups.m_table;
  for ( i = 0; i < this->m_GroupNames.m_Size; ++v7 )
  {
    v9 = -1164533299;
    v10 = this->m_GroupNames.m_Memory.m_pMemory[v7];
    v11 = *v10;
    if ( v11 != 0 )
    {
      v12 = this->m_GroupNames.m_Memory.m_pMemory[v7];
      v13 = -2128831035;
      do
      {
        ++v12;
        v13 = 16777619 * (v13 ^ v11);
        v11 = *v12;
      }
      while ( v11 != 0 );
      v9 = (v13 ^ (v13 << 17)) + (v13 >> 21);
    }
    m_nUsed = v3->m_MarkupGroups.m_table.m_nUsed;
    if ( m_nUsed == 0
      || (pValued = this->m_GroupNames.m_Memory.m_pMemory[v7],
          v29 = CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::DoLookup<char const*>(
                  p_m_table,
                  pValued,
                  v9,
                  m_nUsed),
          v10 = pValued,
          v29 == -1)
      || (m_value = v3->m_MarkupGroups.m_data.m_Memory.m_pMemory[v3->m_MarkupGroups.m_table.m_table.m_pMemory[v29].data[0]].m_Element.m_value) == 0 )
    {
      pValuec = v10;
      v15 = operator new(0x28u);
      v15->m_pString = 0;
      m_value = v15;
      CUtlString::Set(v15, pValuec);
      m_value->m_pGroupEntity = 0;
      m_value->m_Members.m_Size = 0;
      m_value->m_Members.m_Memory.m_pMemory = 0;
      m_value->m_Members.m_Memory.m_nAllocationCount = 0;
      m_value->m_Members.m_Memory.m_nGrowSize = 0;
      v17 = CUtlString::Get(&m_value->m_GroupName);
      v18 = 3130433997LL;
      v19 = v17;
      if ( *v17 != 0 )
      {
        v20 = v17;
        v21 = -2128831035;
        v22 = *v17;
        do
        {
          ++v20;
          v21 = 16777619 * (v21 ^ v22);
          v22 = *v20;
        }
        while ( v22 != 0 );
        v18 = (v21 ^ (v21 << 17)) + (v21 >> 21);
      }
      if ( v3->m_MarkupGroups.m_table.m_nUsed == 0
        || (hb = v18,
            pValuee = v19,
            v41 = CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::DoLookup<char const*>(
                    p_m_table,
                    v19,
                    v18,
                    v18),
            v19 = pValuee,
            LODWORD(v18) = hb,
            v41 == -1) )
      {
        h = v18;
        pValue = v19;
        v23 = CUtlLinkedList<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*,CMarkupManager::MarkupGroup_t *>,unsigned short>,unsigned short>>::AllocInternal(
                &v3->m_MarkupGroups.m_data,
                0);
        v24 = &stru_17FFE8;
        if ( v23 != 0xFFFF )
        {
          if ( v23 >= v3->m_MarkupGroups.m_data.m_Memory.m_nAllocationCount
            || v23 > v3->m_MarkupGroups.m_data.m_LastAlloc.index )
          {
            v24 = 24LL * v23;
            v25 = (v3->m_MarkupGroups.m_data.m_Memory.m_pMemory + v24);
          }
          else
          {
            m_pMemory = v3->m_MarkupGroups.m_data.m_Memory.m_pMemory;
            v58 = v23;
            v24 = v58 * 24;
            v59 = &m_pMemory[v58];
            m_Previous = m_pMemory[v58].m_Previous;
            if ( v23 == m_Previous )
            {
              v25 = &m_pMemory[v58];
            }
            else
            {
              if ( m_Previous == 0xFFFF )
                v3->m_MarkupGroups.m_data.m_Head = v59->m_Next;
              else
                m_pMemory[m_Previous].m_Next = v59->m_Next;
              m_Next = v59->m_Next;
              if ( m_Next == 0xFFFF )
                v3->m_MarkupGroups.m_data.m_Tail = v59->m_Previous;
              else
                v3->m_MarkupGroups.m_data.m_Memory.m_pMemory[m_Next].m_Previous = v59->m_Previous;
              v59->m_Next = v23;
              v59->m_Previous = v23;
              --v3->m_MarkupGroups.m_data.m_ElementCount;
              v25 = &v3->m_MarkupGroups.m_data.m_Memory.m_pMemory[v58];
            }
          }
          v25->m_Next = -1;
          m_Tail = v3->m_MarkupGroups.m_data.m_Tail;
          v25->m_Previous = m_Tail;
          v3->m_MarkupGroups.m_data.m_Tail = v23;
          if ( m_Tail == 0xFFFF )
            v3->m_MarkupGroups.m_data.m_Head = v23;
          else
            v3->m_MarkupGroups.m_data.m_Memory.m_pMemory[m_Tail].m_Next = v23;
          ++v3->m_MarkupGroups.m_data.m_ElementCount;
        }
        v27 = (v3->m_MarkupGroups.m_data.m_Memory.m_pMemory + v24);
        if ( v27 != 0 )
        {
          *v27 = pValue;
          v27[1] = m_value;
        }
        pValuea = v23;
        v28 = &v3->m_MarkupGroups.m_table.m_table.m_pMemory[CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::DoInsertUnconstructed(
                                                              p_m_table,
                                                              h,
                                                              1)];
        if ( v28 != -2 )
          *(v28 + 2) = pValuea;
      }
    }
    v30 = this == m_value->m_pGroupEntity;
    v102 = this;
    if ( !v30
      && CUtlVectorBase<CMarkupVolumeTagged *,CUtlMemory<CMarkupVolumeTagged *,int>>::Find(&m_value->m_Members, &v102) < 0 )
    {
      v37 = m_value->m_Members.m_Size;
      if ( v37 == m_value->m_Members.m_Memory.m_nAllocationCount )
      {
        pValueh = m_value->m_Members.m_Size;
        CUtlMemory<CMarkupVolumeTagged *,int>::Grow(&m_value->m_Members.m_Memory, 1);
        v39 = m_value->m_Members.m_Size;
        v38 = v102;
        v37 = pValueh;
      }
      else
      {
        v38 = this;
        v39 = m_value->m_Members.m_Size;
      }
      m_value->m_Members.m_Size = v39 + 1;
      v40 = &m_value->m_Members.m_Memory.m_pMemory[v37];
      if ( v40 != 0 )
      {
        *v40 = v38;
        v38 = v102;
      }
      v38->m_bIsInGroup = 1;
    }
    ++i;
  }
  v31 = v3->m_MarkupGroups.m_data.m_Head | -(v3->m_MarkupGroups.m_data.m_Head == 0xFFFF);
  if ( v31 != -1 )
  {
    v32 = v3->m_MarkupGroups.m_data.m_Memory.m_pMemory;
    do
    {
      v33 = v31;
      v34 = &v32[v31];
      v35 = v34->m_Element.m_value;
      m_pGroupEntity = v35->m_pGroupEntity;
      if ( m_pGroupEntity != 0
        && (!this->m_bIsGroup || m_pGroupEntity->m_bGroupOtherGroups)
        && m_pGroupEntity->m_bGroupByVolume )
      {
        if ( CMarkupVolume::OverlapsMarkupVolume(m_pGroupEntity, this) )
        {
          v30 = this == v35->m_pGroupEntity;
          v103 = this;
          if ( !v30
            && CUtlVectorBase<CMarkupVolumeTagged *,CUtlMemory<CMarkupVolumeTagged *,int>>::Find(&v35->m_Members, &v103) < 0 )
          {
            v42 = v35->m_Members.m_Size;
            if ( v42 == v35->m_Members.m_Memory.m_nAllocationCount )
            {
              srca = v35->m_Members.m_Size;
              CUtlMemory<CMarkupVolumeTagged *,int>::Grow(&v35->m_Members.m_Memory, 1);
              v44 = v35->m_Members.m_Size;
              v43 = v103;
              v42 = srca;
            }
            else
            {
              v43 = this;
              v44 = v35->m_Members.m_Size;
            }
            v35->m_Members.m_Size = v44 + 1;
            v45 = &v35->m_Members.m_Memory.m_pMemory[v42];
            if ( v45 != 0 )
            {
              *v45 = v43;
              v43 = v103;
            }
            v43->m_bIsInGroup = 1;
            v46 = CUtlString::Get(&v35->m_GroupName);
            v47 = v103;
            if ( v46 != 0 )
            {
              v88 = v46;
              pValuef = strlen(v46) + 1;
              v48 = (**g_pMemAlloc)(g_pMemAlloc, pValuef);
              v49 = pValuef;
              v50 = v88;
              if ( pValuef < 0 )
                __debugbreak();
            }
            else
            {
              v80 = (**g_pMemAlloc)(g_pMemAlloc, 1);
              v49 = 1;
              v50 = 0;
              v48 = v80;
            }
            v51 = memcpy(v48, v50, v49);
            v52 = v47->m_GroupNames.m_Size;
            v53 = v51;
            v54 = v47->m_GroupNames.m_Size;
            if ( v52 == v47->m_GroupNames.m_Memory.m_nAllocationCount )
            {
              pValueg = v47->m_GroupNames.m_Size;
              src = v53;
              CUtlMemory<char *,int>::Grow(&v47->m_GroupNames.m_Memory, 1);
              v54 = v47->m_GroupNames.m_Size;
              v52 = pValueg;
              v53 = src;
            }
            v47->m_GroupNames.m_Size = v54 + 1;
            v55 = &v47->m_GroupNames.m_Memory.m_pMemory[v52];
            if ( v55 != 0 )
              *v55 = v53;
          }
        }
        v32 = v3->m_MarkupGroups.m_data.m_Memory.m_pMemory;
        v34 = &v32[v33];
      }
      v31 = v34->m_Next | -(v34->m_Next == 0xFFFF);
    }
    while ( v31 != -1 );
  }
  m_pAsString = this->m_pEntity->m_designerName.u.m_pAsString;
  if ( m_pAsString == 0 )
    m_pAsString = "";
  if ( V_stricmp_fast(m_pAsString, "markup_group") == 0 )
  {
    m_pEntity = this->m_pEntity;
    this->m_bIsGroup = 1;
    v63 = "";
    if ( m_pEntity->m_name.u.m_Id != 0 )
      v63 = m_pEntity->m_name.u.m_pAsString;
    v64 = 0;
    MarkupGroup = CMarkupManager::FindOrCreateMarkupGroup(v3, v63, 1);
    v66 = this;
    MarkupGroup->m_pGroupEntity = this;
    v67 = 0;
    if ( v3->m_AllMarkupEntities.m_Size > 0 )
    {
      pValueb = &MarkupGroup->m_Members;
      ha = &MarkupGroup->m_Members.m_Memory;
      v68 = v3;
      for ( j = MarkupGroup; ; v66 = j->m_pGroupEntity )
      {
        v70 = v68->m_AllMarkupEntities.m_Memory.m_pMemory;
        v71 = v70[v64];
        if ( v66 != 0
          && (!v71->m_bIsGroup || v66->m_bGroupOtherGroups)
          && v66->m_bGroupByVolume
          && CMarkupVolume::OverlapsMarkupVolume(v66, v70[v64]) )
        {
          v30 = v71 == j->m_pGroupEntity;
          v104 = v71;
          if ( !v30
            && CUtlVectorBase<CMarkupVolumeTagged *,CUtlMemory<CMarkupVolumeTagged *,int>>::Find(pValueb, &v104) < 0 )
          {
            v72 = j->m_Members.m_Size;
            if ( v72 == j->m_Members.m_Memory.m_nAllocationCount )
            {
              v90 = j->m_Members.m_Size;
              CUtlMemory<CMarkupVolumeTagged *,int>::Grow(ha, 1);
              v73 = j->m_Members.m_Size;
              v71 = v104;
              v72 = v90;
            }
            else
            {
              v73 = j->m_Members.m_Size;
            }
            j->m_Members.m_Size = v73 + 1;
            v74 = &j->m_Members.m_Memory.m_pMemory[v72];
            if ( v74 != 0 )
            {
              *v74 = v71;
              v71 = v104;
            }
            v71->m_bIsInGroup = 1;
            v75 = CUtlString::Get(&j->m_GroupName);
            v76 = v104;
            v82 = v75;
            if ( v75 != 0 )
            {
              v81 = strlen(v75) + 1;
              v89 = (**g_pMemAlloc)(g_pMemAlloc, v81);
              if ( v81 < 0 )
                __debugbreak();
              memcpy(v89, v82, v81);
            }
            else
            {
              v89 = (**g_pMemAlloc)(g_pMemAlloc, 1);
              memcpy(v89, 0, 1u);
            }
            v77 = v76->m_GroupNames.m_Size;
            v78 = v76->m_GroupNames.m_Size;
            if ( v77 == v76->m_GroupNames.m_Memory.m_nAllocationCount )
            {
              v83 = v76->m_GroupNames.m_Size;
              CUtlMemory<char *,int>::Grow(&v76->m_GroupNames.m_Memory, 1);
              v78 = v76->m_GroupNames.m_Size;
              v77 = v83;
            }
            v76->m_GroupNames.m_Size = v78 + 1;
            v79 = &v76->m_GroupNames.m_Memory.m_pMemory[v77];
            if ( v79 != 0 )
              *v79 = v89;
          }
        }
        ++v67;
        ++v64;
        if ( v67 >= v68->m_AllMarkupEntities.m_Size )
          break;
      }
    }
  }
}


// CMarkupVolumeTagged::UpdateOnRemove  (line 487, @0x00000000022a36b0, libserver.so)  // inlines: DoFind<char const*>, DoLookup<char const*>, Element, Find, FindMarkupGroup, FindOrCreateMarkupGroup, Get, GetClassNameAsCStr, GetEntityNameAsCStr, OnRemoveMarkupEntity, Purge, RemoveAll, RemoveFromMarkupGroup, String, UnregisterMarkupGroupEntity, operator(), operator[]
// calls: V_stricmp_fast, CUtlMemory<char*, int>::Purge, CUtlVectorBase<CMarkupVolumeTagged*, CUtlMemory<CMarkupVolumeTagged*, int> >::FindAndFastRemove, CBaseModelEntity::UpdateOnRemove, CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoLookup<char const*>, CMarkupManager::FindOrCreateMarkupGroup
// strings: "markup_group"
// globals: g_pMarkupManager
void __fastcall CMarkupVolumeTagged::UpdateOnRemove(CMarkupVolumeTagged *const this)
{
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdi
  CMarkupManager *v3; // r12
  CMarkupVolumeTagged *v4; // r14
  __int64 v5; // r13
  int v6; // r15d
  unsigned int v7; // edx
  const char *v8; // rsi
  int v9; // eax
  const char *v10; // rdx
  unsigned int v11; // edi
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> >::handle_t *m_nUsed; // rcx
  bool v13; // zf
  int v14; // eax
  CMarkupManager::MarkupGroup_t *m_value; // rdi
  const char *v16; // rsi
  CEntityIdentity *v17; // rax
  CMarkupManager::MarkupGroup_t *MarkupGroup; // rax
  CMarkupVolumeTagged *src; // [rsp+10h] [rbp-40h] BYREF
  CMarkupVolumeTagged *v21; // [rsp+18h] [rbp-38h] BYREF

  m_pEntity = this->m_pEntity;
  src = this;
  m_pAsString = "";
  v3 = g_pMarkupManager;
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  if ( V_stricmp_fast(m_pAsString, "markup_group") == 0 )
  {
    v16 = "";
    v17 = src->m_pEntity;
    if ( v17->m_name.u.m_Id != 0 )
      v16 = v17->m_name.u.m_pAsString;
    MarkupGroup = CMarkupManager::FindOrCreateMarkupGroup(v3, v16, 0);
    if ( MarkupGroup != 0 && src == MarkupGroup->m_pGroupEntity )
      MarkupGroup->m_pGroupEntity = 0;
  }
  v4 = src;
  if ( src->m_GroupNames.m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = -1164533299;
      v8 = v4->m_GroupNames.m_Memory.m_pMemory[v5];
      v21 = v4;
      v9 = *v8;
      if ( v9 != 0 )
      {
        v10 = v8;
        v11 = -2128831035;
        do
        {
          ++v10;
          v11 = 16777619 * (v11 ^ v9);
          v9 = *v10;
        }
        while ( v9 != 0 );
        v7 = (v11 ^ (v11 << 17)) + (v11 >> 21);
      }
      m_nUsed = v3->m_MarkupGroups.m_table.m_nUsed;
      if ( m_nUsed != 0 )
      {
        v14 = CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::DoLookup<char const*>(
                &v3->m_MarkupGroups.m_table,
                v8,
                v7,
                m_nUsed);
        if ( v14 != -1 )
        {
          m_value = v3->m_MarkupGroups.m_data.m_Memory.m_pMemory[v3->m_MarkupGroups.m_table.m_table.m_pMemory[v14].data[0]].m_Element.m_value;
          if ( m_value != 0 )
          {
            CUtlVectorBase<CMarkupVolumeTagged *,CUtlMemory<CMarkupVolumeTagged *,int>>::FindAndFastRemove(
              &m_value->m_Members,
              &v21);
            v4 = src;
          }
        }
      }
      ++v6;
      ++v5;
    }
    while ( v6 < v4->m_GroupNames.m_Size );
  }
  v13 = (v4->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  v4->m_GroupNames.m_Size = 0;
  if ( v13 )
    CUtlMemory<char *,int>::Purge(&v4->m_GroupNames.m_Memory);
  CUtlVectorBase<CMarkupVolumeTagged *,CUtlMemory<CMarkupVolumeTagged *,int>>::FindAndFastRemove(
    &v3->m_AllMarkupEntities,
    &src);
  CBaseModelEntity::UpdateOnRemove(this);
}


// CMarkupVolumeTagged::DrawDebugTextOverlays  (line 494, @0x0000000002287dd0, libserver.so)  // inlines: CUtlString, operator char const*, ~CUtlString
// calls: CBaseEntity::DrawDebugTextOverlays, CUtlString::Set, CUtlString::operator+=, CUtlString::Get, CBaseEntity::EntityText, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "Markup Tags: "
int __fastcall CMarkupVolumeTagged::DrawDebugTextOverlays(
        CMarkupVolumeTagged *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v4; // r12
  char v5; // bl
  const char *v6; // rsi
  __int64 v7; // r12
  int v8; // ebx
  const char *v9; // rax
  int offset; // [rsp+Ch] [rbp-44h]
  CUtlString tagString; // [rsp+10h] [rbp-40h] BYREF

  v4 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  offset = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v4 & 0x4000) != 0 && this->m_Tags.m_Size != 0 )
  {
    tagString.m_pString = 0;
    CUtlString::Set(&tagString, "Markup Tags: ");
    if ( this->m_Tags.m_Size > 0 )
    {
      v6 = "";
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        CUtlString::operator+=(&tagString, v6);
        CUtlString::operator+=(&tagString, this->m_Tags.m_Memory.m_pMemory[v7]);
        if ( this->m_Tags.m_Size <= ++v8 )
          break;
        v6 = "";
        if ( v8 != 0 )
          v6 = ", ";
        ++v7;
      }
    }
    v9 = CUtlString::Get(&tagString);
    CBaseEntity::EntityText(this, offset, v9, 0.0, 255, 255, 255, 255);
    if ( tagString.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&tagString);
    ++offset;
  }
  return offset;
}


// CMarkupVolumeTagged::HasTag  (line 511, @0x0000000002298330, libserver.so)
// calls: V_stricmp_fast
// callers: CMarkupVolumeTagged::Search, CNavGenerator::BeginGeneration
bool __fastcall CMarkupVolumeTagged::HasTag(const CMarkupVolumeTagged *const this, const char *pTagName)
{
  __int64 v4; // rbx

  if ( pTagName == 0 || *pTagName == 0 || this->m_Tags.m_Size <= 0 )
    return 0;
  v4 = 0;
  while ( V_stricmp_fast(pTagName, this->m_Tags.m_Memory.m_pMemory[v4]) != 0 )
  {
    if ( this->m_Tags.m_Size <= ++v4 )
      return 0;
  }
  return 1;
}


// CMarkupVolumeTagged::Search  (line 558, @0x00000000022a19f0, libserver.so)  // inlines: AddToTail, CopyConstruct<CMarkupVolumeTagged*>, Element, FindMarkupGroup, GetClassNameAsCStr, GetEntityNameAsCStr, GrowMemory, IsEntityInGroup, RemoveAll, Search_Match, Search_MatchList, String, operator char const*, operator[]
// calls: CMarkupVolume::OverlapsExtent, CUtlString::Get, CMarkupVolumeTagged::HasTag, V_stricmp_fast, CMarkupManager::FindOrCreateMarkupGroup, CUtlMemory<CMarkupVolumeTagged*, int>::Grow
// callers: CMarkupVolumeTagged::Search_HasTag, CMarkupVolumeTagged::Search_HasClass, CMarkupVolumeTagged::Search_OverlapsPoint, CMarkupVolumeTagged::Search_OverlapsExtent, CMarkupVolumeTagged::Search_OverlapsPoint_HasTag, CMarkupVolumeTagged::Search_OverlapsExtent_HasTag, CMarkupVolumeTagged::Search_General
// globals: g_pMarkupManager
void __fastcall CMarkupVolumeTagged::Search(
        CUtlVector<CMarkupVolumeTagged*,CUtlMemory<CMarkupVolumeTagged*,int> > *pResults,
        const CUtlVector<MarkupSearchQuery_t,CUtlMemory<MarkupSearchQuery_t,int> > *pIncludeList,
        const CUtlVector<MarkupSearchQuery_t,CUtlMemory<MarkupSearchQuery_t,int> > *pExcludeList)
{
  const CMarkupVolumeTagged *v5; // r14
  __int64 v6; // r13
  int v7; // r12d
  bool v8; // al
  MarkupSearchQuery_t *v9; // rdi
  int v10; // eax
  const char *v11; // rax
  CEntityIdentity *v12; // rax
  const char *v13; // rsi
  const char *v14; // rax
  const CMarkupVolumeTagged *v15; // rax
  CEntityIdentity *v16; // rax
  const char *v17; // rsi
  CMarkupManager::MarkupGroup_t *v18; // rax
  int v19; // edx
  CMarkupVolumeTagged **v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // r13
  int v24; // r12d
  bool HasTag; // al
  MarkupSearchQuery_t *v26; // rdi
  int m_Type; // eax
  const char *v28; // rax
  const CMarkupVolumeTagged *m_pGroup; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  CMarkupManager::MarkupGroup_t *MarkupGroup; // rax
  int v33; // edx
  CMarkupVolumeTagged **m_pMemory; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rdx
  CEntityIdentity *v37; // rax
  const char *v38; // rsi
  const char *v39; // rax
  int m_Size; // r12d
  int v41; // edx
  CMarkupVolumeTagged **v42; // rax
  CUtlVectorBase<CMarkupVolumeTagged*,CUtlMemory<CMarkupVolumeTagged*,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-60h]
  __int64 v45; // [rsp+10h] [rbp-50h]
  int i; // [rsp+1Ch] [rbp-44h]
  CMarkupManager *v47; // [rsp+20h] [rbp-40h]
  const char *v48; // [rsp+28h] [rbp-38h]
  const char *v49; // [rsp+28h] [rbp-38h]

  pResults->m_Size = 0;
  p_m_Memory = &pResults->m_Memory;
  v45 = 0;
  i = 0;
  v47 = g_pMarkupManager;
  if ( g_pMarkupManager->m_AllMarkupEntities.m_Size <= 0 )
    return;
  do
  {
    v5 = v47->m_AllMarkupEntities.m_Memory.m_pMemory[v45];
    if ( pIncludeList == 0 || pIncludeList->m_Size <= 0 )
    {
LABEL_29:
      if ( pExcludeList == 0 || pExcludeList->m_Size <= 0 )
      {
LABEL_54:
        m_Size = pResults->m_Size;
        v41 = pResults->m_Size;
        if ( pResults->m_Size == pResults->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CMarkupVolumeTagged *,int>::Grow(p_m_Memory, 1);
          v41 = pResults->m_Size;
        }
        pResults->m_Size = v41 + 1;
        v42 = &pResults->m_Memory.m_pMemory[m_Size];
        if ( v42 != 0 )
          *v42 = v5;
        goto LABEL_14;
      }
      v23 = 0;
      v24 = 0;
      while ( 1 )
      {
        v26 = &pExcludeList->m_Memory.m_pMemory[v23];
        m_Type = v26->m_Type;
        if ( v26->m_Type == MarkupSearchType::MARKUP_SEARCH_HAS_CLASS )
          break;
        if ( m_Type > 1 )
        {
          if ( m_Type == 2 )
          {
            m_pGroup = v26->m_pGroup;
            if ( m_pGroup != 0 && v5 != 0 )
            {
              m_pEntity = m_pGroup->m_pEntity;
              m_pAsString = "";
              if ( m_pEntity->m_name.u.m_Id != 0 )
                m_pAsString = m_pEntity->m_name.u.m_pAsString;
              MarkupGroup = CMarkupManager::FindOrCreateMarkupGroup(g_pMarkupManager, m_pAsString, 0);
              if ( MarkupGroup != 0 )
              {
                v33 = MarkupGroup->m_Members.m_Size;
                if ( v33 > 0 )
                {
                  m_pMemory = MarkupGroup->m_Members.m_Memory.m_pMemory;
                  if ( v5 == *m_pMemory )
                    goto LABEL_14;
                  v35 = m_pMemory + 1;
                  v36 = &v35[v33 - 1];
                  while ( v35 != v36 )
                  {
                    if ( v5 == *v35++ )
                      goto LABEL_14;
                  }
                }
              }
            }
          }
          else if ( m_Type == 3 )
          {
            HasTag = CMarkupVolume::OverlapsExtent(v5, &v26->m_TestVolume);
            goto LABEL_35;
          }
        }
        else if ( m_Type == 0 )
        {
          v28 = CUtlString::Get(&v26->m_TestString);
          HasTag = CMarkupVolumeTagged::HasTag(v5, v28);
          goto LABEL_35;
        }
LABEL_36:
        ++v24;
        ++v23;
        if ( v24 >= pExcludeList->m_Size )
          goto LABEL_54;
      }
      v37 = v5->m_pEntity;
      v38 = "";
      if ( v37->m_designerName.u.m_Id != 0 )
        v38 = v37->m_designerName.u.m_pAsString;
      v49 = v38;
      v39 = CUtlString::Get(&v26->m_TestString);
      HasTag = V_stricmp_fast(v39, v49) == 0;
LABEL_35:
      if ( HasTag )
        goto LABEL_14;
      goto LABEL_36;
    }
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v9 = &pIncludeList->m_Memory.m_pMemory[v6];
      v10 = v9->m_Type;
      if ( v9->m_Type == MarkupSearchType::MARKUP_SEARCH_HAS_CLASS )
      {
        v12 = v5->m_pEntity;
        v13 = "";
        if ( v12->m_designerName.u.m_Id != 0 )
          v13 = v12->m_designerName.u.m_pAsString;
        v48 = v13;
        v14 = CUtlString::Get(&v9->m_TestString);
        v8 = V_stricmp_fast(v14, v48) == 0;
        goto LABEL_8;
      }
      if ( v10 <= 1 )
      {
        if ( v10 != 0 )
          goto LABEL_14;
        v11 = CUtlString::Get(&v9->m_TestString);
        if ( !CMarkupVolumeTagged::HasTag(v5, v11) )
          goto LABEL_14;
        goto LABEL_9;
      }
      if ( v10 != 2 )
      {
        if ( v10 != 3 )
          goto LABEL_14;
        v8 = CMarkupVolume::OverlapsExtent(v5, &v9->m_TestVolume);
LABEL_8:
        if ( !v8 )
          goto LABEL_14;
        goto LABEL_9;
      }
      v15 = v9->m_pGroup;
      if ( v15 == 0 || v5 == 0 )
        goto LABEL_14;
      v16 = v15->m_pEntity;
      v17 = "";
      if ( v16->m_name.u.m_Id != 0 )
        v17 = v16->m_name.u.m_pAsString;
      v18 = CMarkupManager::FindOrCreateMarkupGroup(g_pMarkupManager, v17, 0);
      if ( v18 == 0 )
        goto LABEL_14;
      v19 = v18->m_Members.m_Size;
      if ( v19 <= 0 )
        goto LABEL_14;
      v20 = v18->m_Members.m_Memory.m_pMemory;
      if ( v5 != *v20 )
        break;
LABEL_9:
      ++v7;
      ++v6;
      if ( v7 >= pIncludeList->m_Size )
        goto LABEL_29;
    }
    v21 = v20 + 1;
    v22 = &v21[v19 - 1];
    while ( v21 != v22 )
    {
      if ( v5 == *v21++ )
        goto LABEL_9;
    }
LABEL_14:
    ++i;
    ++v45;
  }
  while ( v47->m_AllMarkupEntities.m_Size > i );
}


// CMarkupVolumeTagged::Search_HasTag  (line 616, @0x00000000022a1d70, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<MarkupSearchQuery_t>, Destruct<MarkupSearchQuery_t>, Element, Extent, GrowMemory, Init, MarkupSearchQuery_t, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~MarkupSearchQuery_t
// calls: CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CMarkupVolumeTagged::Search, CUtlMemory<MarkupSearchQuery_t, int>::Purge, CUtlMemory<MarkupSearchQuery_t, int>::Grow, CUtlVectorBase<MarkupSearchQuery_t, CUtlMemory<MarkupSearchQuery_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavEntityInterface::ApplyMarkup
void __fastcall CMarkupVolumeTagged::Search_HasTag(
        CUtlVector<CMarkupVolumeTagged*,CUtlMemory<CMarkupVolumeTagged*,int> > *pResults,
        const char *pTag)
{
  MarkupSearchQuery_t *m_pMemory; // rbx
  unsigned __int64 v4; // rax
  const char *v5; // rax
  int m_Size; // ebx
  __int64 i; // r12
  CUtlVector<MarkupSearchQuery_t,CUtlMemory<MarkupSearchQuery_t,int> > includeList; // [rsp+0h] [rbp-80h] BYREF
  MarkupSearchType v9; // [rsp+20h] [rbp-60h]
  __int64 v10; // [rsp+24h] [rbp-5Ch]
  unsigned __int64 v11; // [rsp+2Ch] [rbp-54h]
  unsigned __int64 v12; // [rsp+34h] [rbp-4Ch]
  CUtlString v13; // [rsp+40h] [rbp-40h] BYREF
  const CMarkupVolumeTagged *v14; // [rsp+48h] [rbp-38h]

  includeList.m_Size = 0;
  includeList.m_Memory.m_pMemory = 0;
  includeList.m_Memory.m_nAllocationCount = 0;
  includeList.m_Memory.m_nGrowSize = 0;
  v9 = MarkupSearchType::MARKUP_SEARCH_HAS_TAG;
  v10 = 0x7F7FFFFF7F7FFFFFLL;
  v11 = 0xFF7FFFFF7F7FFFFFLL;
  v12 = 0xFF7FFFFFFF7FFFFFLL;
  v13.m_pString = 0;
  CUtlString::Set(&v13, pTag);
  v14 = 0;
  CUtlMemory<MarkupSearchQuery_t,int>::Grow(&includeList.m_Memory, 1);
  ++includeList.m_Size;
  m_pMemory = includeList.m_Memory.m_pMemory;
  if ( includeList.m_Memory.m_pMemory != 0 )
  {
    includeList.m_Memory.m_pMemory->m_Type = v9;
    *&m_pMemory->m_TestVolume.lo.x = v10;
    *&m_pMemory->m_TestVolume.lo.z = v11;
    v4 = v12;
    m_pMemory->m_TestString.m_pString = 0;
    *&m_pMemory->m_TestVolume.hi.y = v4;
    v5 = CUtlString::Get(&v13);
    CUtlString::Set(&m_pMemory->m_TestString, v5);
    m_pMemory->m_pGroup = v14;
  }
  if ( v13.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v13);
  CMarkupVolumeTagged::Search(pResults, &includeList, 0);
  m_Size = includeList.m_Size;
  for ( i = 48LL * includeList.m_Size - 48; --m_Size >= 0; i -= 48 )
  {
    if ( *(&includeList.m_Memory.m_pMemory->m_TestString.m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock((&includeList.m_Memory.m_pMemory->m_TestString + i));
  }
  includeList.m_Size = 0;
  if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
    if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
  }
}


// CMarkupVolumeTagged::Search_HasClass  (line 623, @0x00000000022a1f40, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<MarkupSearchQuery_t>, Destruct<MarkupSearchQuery_t>, Element, Extent, GrowMemory, Init, MarkupSearchQuery_t, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~MarkupSearchQuery_t
// calls: CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CMarkupVolumeTagged::Search, CUtlMemory<MarkupSearchQuery_t, int>::Purge, CUtlMemory<MarkupSearchQuery_t, int>::Grow, CUtlVectorBase<MarkupSearchQuery_t, CUtlMemory<MarkupSearchQuery_t, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CMarkupVolumeTagged::Search_HasClass(
        CUtlVector<CMarkupVolumeTagged*,CUtlMemory<CMarkupVolumeTagged*,int> > *pResults,
        const char *pDesignerName)
{
  MarkupSearchQuery_t *m_pMemory; // rbx
  unsigned __int64 v4; // rax
  const char *v5; // rax
  int m_Size; // ebx
  __int64 i; // r12
  CUtlVector<MarkupSearchQuery_t,CUtlMemory<MarkupSearchQuery_t,int> > includeList; // [rsp+0h] [rbp-80h] BYREF
  MarkupSearchType v9; // [rsp+20h] [rbp-60h]
  __int64 v10; // [rsp+24h] [rbp-5Ch]
  unsigned __int64 v11; // [rsp+2Ch] [rbp-54h]
  unsigned __int64 v12; // [rsp+34h] [rbp-4Ch]
  CUtlString v13; // [rsp+40h] [rbp-40h] BYREF
  const CMarkupVolumeTagged *v14; // [rsp+48h] [rbp-38h]

  includeList.m_Size = 0;
  includeList.m_Memory.m_pMemory = 0;
  includeList.m_Memory.m_nAllocationCount = 0;
  includeList.m_Memory.m_nGrowSize = 0;
  v9 = MarkupSearchType::MARKUP_SEARCH_HAS_CLASS;
  v10 = 0x7F7FFFFF7F7FFFFFLL;
  v11 = 0xFF7FFFFF7F7FFFFFLL;
  v12 = 0xFF7FFFFFFF7FFFFFLL;
  v13.m_pString = 0;
  CUtlString::Set(&v13, pDesignerName);
  v14 = 0;
  CUtlMemory<MarkupSearchQuery_t,int>::Grow(&includeList.m_Memory, 1);
  ++includeList.m_Size;
  m_pMemory = includeList.m_Memory.m_pMemory;
  if ( includeList.m_Memory.m_pMemory != 0 )
  {
    includeList.m_Memory.m_pMemory->m_Type = v9;
    *&m_pMemory->m_TestVolume.lo.x = v10;
    *&m_pMemory->m_TestVolume.lo.z = v11;
    v4 = v12;
    m_pMemory->m_TestString.m_pString = 0;
    *&m_pMemory->m_TestVolume.hi.y = v4;
    v5 = CUtlString::Get(&v13);
    CUtlString::Set(&m_pMemory->m_TestString, v5);
    m_pMemory->m_pGroup = v14;
  }
  if ( v13.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v13);
  CMarkupVolumeTagged::Search(pResults, &includeList, 0);
  m_Size = includeList.m_Size;
  for ( i = 48LL * includeList.m_Size - 48; --m_Size >= 0; i -= 48 )
  {
    if ( *(&includeList.m_Memory.m_pMemory->m_TestString.m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock((&includeList.m_Memory.m_pMemory->m_TestString + i));
  }
  includeList.m_Size = 0;
  if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
    if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
  }
}


// CMarkupVolumeTagged::Search_OverlapsPoint  (line 630, @0x00000000022a2110, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<MarkupSearchQuery_t>, Destruct<MarkupSearchQuery_t>, Element, Extent, GrowMemory, MarkupSearchQuery_t, Purge, RemoveAll, operator=, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~MarkupSearchQuery_t
// calls: CUtlMemory<MarkupSearchQuery_t, int>::Grow, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CMarkupVolumeTagged::Search, CUtlMemory<MarkupSearchQuery_t, int>::Purge, CUtlVectorBase<MarkupSearchQuery_t, CUtlMemory<MarkupSearchQuery_t, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CMarkupVolumeTagged::Search_OverlapsPoint(
        CUtlVector<CMarkupVolumeTagged*,CUtlMemory<CMarkupVolumeTagged*,int> > *pResults,
        const Vector *const pos)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  MarkupSearchQuery_t *m_pMemory; // rbx
  unsigned __int64 v7; // rax
  const char *v8; // rax
  int m_Size; // ebx
  __int64 i; // r12
  CUtlVector<MarkupSearchQuery_t,CUtlMemory<MarkupSearchQuery_t,int> > includeList; // [rsp+0h] [rbp-70h] BYREF
  MarkupSearchType v12; // [rsp+20h] [rbp-50h]
  unsigned __int64 v13; // [rsp+24h] [rbp-4Ch]
  unsigned __int64 v14; // [rsp+2Ch] [rbp-44h]
  unsigned __int64 v15; // [rsp+34h] [rbp-3Ch]
  CUtlString v16; // [rsp+40h] [rbp-30h] BYREF
  const CMarkupVolumeTagged *v17; // [rsp+48h] [rbp-28h]

  includeList.m_Size = 0;
  x = pos->x;
  includeList.m_Memory.m_pMemory = 0;
  y = pos->y;
  includeList.m_Memory.m_nAllocationCount = 0;
  z = pos->z;
  includeList.m_Memory.m_nGrowSize = 0;
  v12 = MarkupSearchType::MARKUP_SEARCH_OVERLAPS;
  v13 = __PAIR64__(LODWORD(y), LODWORD(x));
  v14 = __PAIR64__(LODWORD(x), LODWORD(z));
  v15 = __PAIR64__(LODWORD(z), LODWORD(y));
  v16.m_pString = 0;
  v17 = 0;
  CUtlMemory<MarkupSearchQuery_t,int>::Grow(&includeList.m_Memory, 1);
  m_pMemory = includeList.m_Memory.m_pMemory;
  includeList.m_Size = 1;
  if ( includeList.m_Memory.m_pMemory != 0 )
  {
    includeList.m_Memory.m_pMemory->m_Type = v12;
    *&m_pMemory->m_TestVolume.lo.x = v13;
    *&m_pMemory->m_TestVolume.lo.z = v14;
    v7 = v15;
    m_pMemory->m_TestString.m_pString = 0;
    *&m_pMemory->m_TestVolume.hi.y = v7;
    v8 = CUtlString::Get(&v16);
    CUtlString::Set(&m_pMemory->m_TestString, v8);
    m_pMemory->m_pGroup = v17;
  }
  if ( v16.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v16);
  CMarkupVolumeTagged::Search(pResults, &includeList, 0);
  m_Size = includeList.m_Size;
  for ( i = 48LL * includeList.m_Size - 48; --m_Size >= 0; i -= 48 )
  {
    if ( *(&includeList.m_Memory.m_pMemory->m_TestString.m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock((&includeList.m_Memory.m_pMemory->m_TestString + i));
  }
  includeList.m_Size = 0;
  if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
    if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
  }
}


// CMarkupVolumeTagged::Search_OverlapsExtent  (line 637, @0x00000000022a22c0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<MarkupSearchQuery_t>, Destruct<MarkupSearchQuery_t>, Element, GrowMemory, MarkupSearchQuery_t, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~MarkupSearchQuery_t
// calls: CUtlMemory<MarkupSearchQuery_t, int>::Grow, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, CMarkupVolumeTagged::Search, CUtlMemory<MarkupSearchQuery_t, int>::Purge, CUtlVectorBase<MarkupSearchQuery_t, CUtlMemory<MarkupSearchQuery_t, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CMarkupVolumeTagged::Search_OverlapsExtent(
        CUtlVector<CMarkupVolumeTagged*,CUtlMemory<CMarkupVolumeTagged*,int> > *pResults,
        const Extent *const box)
{
  __int64 v3; // rax
  __int64 v4; // rax
  MarkupSearchQuery_t *m_pMemory; // rbx
  __int64 v6; // rax
  const char *v7; // rax
  int m_Size; // ebx
  __int64 i; // r12
  CUtlVector<MarkupSearchQuery_t,CUtlMemory<MarkupSearchQuery_t,int> > includeList; // [rsp+0h] [rbp-70h] BYREF
  MarkupSearchType v11; // [rsp+20h] [rbp-50h]
  __int64 v12; // [rsp+24h] [rbp-4Ch]
  __int64 v13; // [rsp+2Ch] [rbp-44h]
  __int64 v14; // [rsp+34h] [rbp-3Ch]
  CUtlString v15; // [rsp+40h] [rbp-30h] BYREF
  const CMarkupVolumeTagged *v16; // [rsp+48h] [rbp-28h]

  includeList.m_Size = 0;
  v3 = *&box->lo.x;
  includeList.m_Memory.m_pMemory = 0;
  includeList.m_Memory.m_nAllocationCount = 0;
  includeList.m_Memory.m_nGrowSize = 0;
  v11 = MarkupSearchType::MARKUP_SEARCH_OVERLAPS;
  v12 = v3;
  v4 = *&box->lo.z;
  v15.m_pString = 0;
  v16 = 0;
  v13 = v4;
  v14 = *&box->hi.y;
  CUtlMemory<MarkupSearchQuery_t,int>::Grow(&includeList.m_Memory, 1);
  m_pMemory = includeList.m_Memory.m_pMemory;
  includeList.m_Size = 1;
  if ( includeList.m_Memory.m_pMemory != 0 )
  {
    includeList.m_Memory.m_pMemory->m_Type = v11;
    *&m_pMemory->m_TestVolume.lo.x = v12;
    *&m_pMemory->m_TestVolume.lo.z = v13;
    v6 = v14;
    m_pMemory->m_TestString.m_pString = 0;
    *&m_pMemory->m_TestVolume.hi.y = v6;
    v7 = CUtlString::Get(&v15);
    CUtlString::Set(&m_pMemory->m_TestString, v7);
    m_pMemory->m_pGroup = v16;
  }
  if ( v15.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v15);
  CMarkupVolumeTagged::Search(pResults, &includeList, 0);
  m_Size = includeList.m_Size;
  for ( i = 48LL * includeList.m_Size - 48; --m_Size >= 0; i -= 48 )
  {
    if ( *(&includeList.m_Memory.m_pMemory->m_TestString.m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock((&includeList.m_Memory.m_pMemory->m_TestString + i));
  }
  includeList.m_Size = 0;
  if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
    if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
  }
}


// CMarkupVolumeTagged::Search_OverlapsPoint_HasTag  (line 644, @0x00000000022a2450, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<MarkupSearchQuery_t>, Destruct<MarkupSearchQuery_t>, Element, Extent, GrowMemory, Init, MarkupSearchQuery_t, Purge, RemoveAll, operator=, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~MarkupSearchQuery_t
// calls: CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CMarkupVolumeTagged::Search, CUtlMemory<MarkupSearchQuery_t, int>::Purge, CUtlMemory<MarkupSearchQuery_t, int>::Grow, CUtlVectorBase<MarkupSearchQuery_t, CUtlMemory<MarkupSearchQuery_t, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CMarkupVolumeTagged::Search_OverlapsPoint_HasTag(
        CUtlVector<CMarkupVolumeTagged*,CUtlMemory<CMarkupVolumeTagged*,int> > *pResults,
        const Vector *const pos,
        const char *pTag)
{
  MarkupSearchQuery_t *m_pMemory; // rbx
  unsigned __int64 v6; // rax
  const char *v7; // rax
  __int64 m_Size; // rbx
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  int v12; // eax
  MarkupSearchQuery_t *v13; // rbx
  unsigned __int64 v14; // rax
  const char *v15; // rax
  int v16; // ebx
  __int64 i; // r12
  CUtlVector<MarkupSearchQuery_t,CUtlMemory<MarkupSearchQuery_t,int> > includeList; // [rsp+10h] [rbp-80h] BYREF
  MarkupSearchType v19; // [rsp+30h] [rbp-60h]
  unsigned __int64 v20; // [rsp+34h] [rbp-5Ch]
  unsigned __int64 v21; // [rsp+3Ch] [rbp-54h]
  unsigned __int64 v22; // [rsp+44h] [rbp-4Ch]
  CUtlString v23; // [rsp+50h] [rbp-40h] BYREF
  const CMarkupVolumeTagged *v24; // [rsp+58h] [rbp-38h]

  includeList.m_Memory.m_pMemory = 0;
  includeList.m_Memory.m_nAllocationCount = 0;
  includeList.m_Memory.m_nGrowSize = 0;
  v19 = MarkupSearchType::MARKUP_SEARCH_HAS_TAG;
  v20 = 0x7F7FFFFF7F7FFFFFLL;
  v21 = 0xFF7FFFFF7F7FFFFFLL;
  v22 = 0xFF7FFFFFFF7FFFFFLL;
  v23.m_pString = 0;
  CUtlString::Set(&v23, pTag);
  v24 = 0;
  CUtlMemory<MarkupSearchQuery_t,int>::Grow(&includeList.m_Memory, 1);
  includeList.m_Size = 1;
  m_pMemory = includeList.m_Memory.m_pMemory;
  if ( includeList.m_Memory.m_pMemory != 0 )
  {
    includeList.m_Memory.m_pMemory->m_Type = v19;
    *&m_pMemory->m_TestVolume.lo.x = v20;
    *&m_pMemory->m_TestVolume.lo.z = v21;
    v6 = v22;
    m_pMemory->m_TestString.m_pString = 0;
    *&m_pMemory->m_TestVolume.hi.y = v6;
    v7 = CUtlString::Get(&v23);
    CUtlString::Set(&m_pMemory->m_TestString, v7);
    m_pMemory->m_pGroup = v24;
  }
  if ( v23.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v23);
  m_Size = includeList.m_Size;
  v19 = MarkupSearchType::MARKUP_SEARCH_OVERLAPS;
  x = pos->x;
  v23.m_pString = 0;
  y = pos->y;
  v24 = 0;
  z = pos->z;
  v20 = __PAIR64__(LODWORD(y), LODWORD(x));
  v12 = includeList.m_Size;
  v21 = __PAIR64__(LODWORD(x), LODWORD(z));
  v22 = __PAIR64__(LODWORD(z), LODWORD(y));
  if ( includeList.m_Size == includeList.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<MarkupSearchQuery_t,int>::Grow(&includeList.m_Memory, 1);
    v12 = includeList.m_Size;
  }
  includeList.m_Size = v12 + 1;
  v13 = &includeList.m_Memory.m_pMemory[m_Size];
  if ( v13 != 0 )
  {
    v13->m_Type = v19;
    *&v13->m_TestVolume.lo.x = v20;
    *&v13->m_TestVolume.lo.z = v21;
    v14 = v22;
    v13->m_TestString.m_pString = 0;
    *&v13->m_TestVolume.hi.y = v14;
    v15 = CUtlString::Get(&v23);
    CUtlString::Set(&v13->m_TestString, v15);
    v13->m_pGroup = v24;
  }
  if ( v23.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v23);
  CMarkupVolumeTagged::Search(pResults, &includeList, 0);
  v16 = includeList.m_Size;
  for ( i = 48LL * includeList.m_Size - 48; --v16 >= 0; i -= 48 )
  {
    if ( *(&includeList.m_Memory.m_pMemory->m_TestString.m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock((&includeList.m_Memory.m_pMemory->m_TestString + i));
  }
  includeList.m_Size = 0;
  if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
    if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
  }
}


// CMarkupVolumeTagged::Search_OverlapsExtent_HasTag  (line 652, @0x00000000022a2740, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<MarkupSearchQuery_t>, Destruct<MarkupSearchQuery_t>, Element, Extent, GrowMemory, Init, MarkupSearchQuery_t, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~MarkupSearchQuery_t
// calls: CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CMarkupVolumeTagged::Search, CUtlMemory<MarkupSearchQuery_t, int>::Purge, CUtlMemory<MarkupSearchQuery_t, int>::Grow, CUtlVectorBase<MarkupSearchQuery_t, CUtlMemory<MarkupSearchQuery_t, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CMarkupVolumeTagged::Search_OverlapsExtent_HasTag(
        CUtlVector<CMarkupVolumeTagged*,CUtlMemory<CMarkupVolumeTagged*,int> > *pResults,
        const Extent *const box,
        const char *pTag)
{
  MarkupSearchQuery_t *m_pMemory; // rbx
  unsigned __int64 v6; // rax
  const char *v7; // rax
  __int64 v8; // rax
  __int64 m_Size; // rbx
  int v10; // eax
  MarkupSearchQuery_t *v11; // rbx
  unsigned __int64 v12; // rax
  const char *v13; // rax
  int v14; // ebx
  __int64 i; // r12
  CUtlVector<MarkupSearchQuery_t,CUtlMemory<MarkupSearchQuery_t,int> > includeList; // [rsp+10h] [rbp-80h] BYREF
  MarkupSearchType v17; // [rsp+30h] [rbp-60h]
  __int64 v18; // [rsp+34h] [rbp-5Ch]
  unsigned __int64 v19; // [rsp+3Ch] [rbp-54h]
  unsigned __int64 v20; // [rsp+44h] [rbp-4Ch]
  CUtlString v21; // [rsp+50h] [rbp-40h] BYREF
  const CMarkupVolumeTagged *v22; // [rsp+58h] [rbp-38h]

  includeList.m_Memory.m_pMemory = 0;
  includeList.m_Memory.m_nAllocationCount = 0;
  includeList.m_Memory.m_nGrowSize = 0;
  v17 = MarkupSearchType::MARKUP_SEARCH_HAS_TAG;
  v18 = 0x7F7FFFFF7F7FFFFFLL;
  v19 = 0xFF7FFFFF7F7FFFFFLL;
  v20 = 0xFF7FFFFFFF7FFFFFLL;
  v21.m_pString = 0;
  CUtlString::Set(&v21, pTag);
  v22 = 0;
  CUtlMemory<MarkupSearchQuery_t,int>::Grow(&includeList.m_Memory, 1);
  includeList.m_Size = 1;
  m_pMemory = includeList.m_Memory.m_pMemory;
  if ( includeList.m_Memory.m_pMemory != 0 )
  {
    includeList.m_Memory.m_pMemory->m_Type = v17;
    *&m_pMemory->m_TestVolume.lo.x = v18;
    *&m_pMemory->m_TestVolume.lo.z = v19;
    v6 = v20;
    m_pMemory->m_TestString.m_pString = 0;
    *&m_pMemory->m_TestVolume.hi.y = v6;
    v7 = CUtlString::Get(&v21);
    CUtlString::Set(&m_pMemory->m_TestString, v7);
    m_pMemory->m_pGroup = v22;
  }
  if ( v21.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v21);
  v8 = *&box->lo.x;
  v17 = MarkupSearchType::MARKUP_SEARCH_OVERLAPS;
  m_Size = includeList.m_Size;
  v21.m_pString = 0;
  v22 = 0;
  v18 = v8;
  v19 = *&box->lo.z;
  v20 = *&box->hi.y;
  v10 = includeList.m_Size;
  if ( includeList.m_Size == includeList.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<MarkupSearchQuery_t,int>::Grow(&includeList.m_Memory, 1);
    v10 = includeList.m_Size;
  }
  includeList.m_Size = v10 + 1;
  v11 = &includeList.m_Memory.m_pMemory[m_Size];
  if ( v11 != 0 )
  {
    v11->m_Type = v17;
    *&v11->m_TestVolume.lo.x = v18;
    *&v11->m_TestVolume.lo.z = v19;
    v12 = v20;
    v11->m_TestString.m_pString = 0;
    *&v11->m_TestVolume.hi.y = v12;
    v13 = CUtlString::Get(&v21);
    CUtlString::Set(&v11->m_TestString, v13);
    v11->m_pGroup = v22;
  }
  if ( v21.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v21);
  CMarkupVolumeTagged::Search(pResults, &includeList, 0);
  v14 = includeList.m_Size;
  for ( i = 48LL * includeList.m_Size - 48; --v14 >= 0; i -= 48 )
  {
    if ( *(&includeList.m_Memory.m_pMemory->m_TestString.m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock((&includeList.m_Memory.m_pMemory->m_TestString + i));
  }
  includeList.m_Size = 0;
  if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
    if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
  }
}


// CMarkupVolumeTagged::Search_General  (line 661, @0x00000000022a2a10, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CopyConstruct<MarkupSearchQuery_t>, Destruct<MarkupSearchQuery_t>, Element, Extent, GrowMemory, Init, IsEmpty, MarkupSearchQuery_t, Purge, RemoveAll, operator char const*, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~MarkupSearchQuery_t
// calls: CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlMemory<MarkupSearchQuery_t, int>::Grow, CUtlVectorBase<MarkupSearchQuery_t, CUtlMemory<MarkupSearchQuery_t, int> >::AddToTail, CMarkupVolumeTagged::Search, CUtlMemory<MarkupSearchQuery_t, int>::Purge, CUtlVectorBase<MarkupSearchQuery_t, CUtlMemory<MarkupSearchQuery_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CMarkupVolumeTagged::Script_Search
void __fastcall CMarkupVolumeTagged::Search_General(
        CUtlVector<CMarkupVolumeTagged*,CUtlMemory<CMarkupVolumeTagged*,int> > *pResults,
        const CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const tags,
        const char *pszDesignerName,
        const CMarkupVolumeTagged *pGroup)
{
  __int64 v5; // r13
  int i; // r12d
  MarkupSearchQuery_t *v7; // rbx
  __int64 v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  __int64 m_Size; // rbx
  int v12; // eax
  int v13; // ebx
  __int64 j; // r12
  const char *v15; // rax
  CUtlString designerName; // [rsp+40h] [rbp-C0h] BYREF
  CUtlVector<MarkupSearchQuery_t,CUtlMemory<MarkupSearchQuery_t,int> > includeList; // [rsp+50h] [rbp-B0h] BYREF
  MarkupSearchQuery_t v20; // [rsp+70h] [rbp-90h] BYREF
  MarkupSearchQuery_t src; // [rsp+A0h] [rbp-60h] BYREF

  designerName.m_pString = 0;
  CUtlString::Set(&designerName, pszDesignerName);
  includeList.m_Size = 0;
  includeList.m_Memory.m_pMemory = 0;
  includeList.m_Memory.m_nAllocationCount = 0;
  includeList.m_Memory.m_nGrowSize = 0;
  if ( designerName.m_pString != 0 && *designerName.m_pString != 0 )
  {
    v15 = CUtlString::Get(&designerName);
    v20.m_TestVolume.hi.x = -3.4028235e38;
    v20.m_Type = MarkupSearchType::MARKUP_SEARCH_HAS_CLASS;
    v20.m_TestVolume.lo.x = 3.4028235e38;
    v20.m_TestVolume.lo.y = 3.4028235e38;
    v20.m_TestVolume.lo.z = 3.4028235e38;
    v20.m_TestVolume.hi.y = -3.4028235e38;
    v20.m_TestVolume.hi.z = -3.4028235e38;
    v20.m_TestString.m_pString = 0;
    CUtlString::Set(&v20.m_TestString, v15);
    v20.m_pGroup = 0;
    CUtlVectorBase<MarkupSearchQuery_t,CUtlMemory<MarkupSearchQuery_t,int>>::AddToTail(&includeList, &v20);
    if ( v20.m_TestString.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&v20.m_TestString);
  }
  v5 = 0;
  for ( i = 0; tags->m_Size > i; ++v5 )
  {
    v10 = CUtlString::Get(&tags->m_Memory.m_pMemory[v5]);
    src.m_Type = MarkupSearchType::MARKUP_SEARCH_HAS_TAG;
    src.m_TestVolume.lo.x = 3.4028235e38;
    src.m_TestVolume.lo.y = 3.4028235e38;
    src.m_TestVolume.lo.z = 3.4028235e38;
    src.m_TestVolume.hi.x = -3.4028235e38;
    src.m_TestVolume.hi.y = -3.4028235e38;
    src.m_TestVolume.hi.z = -3.4028235e38;
    src.m_TestString.m_pString = 0;
    CUtlString::Set(&src.m_TestString, v10);
    m_Size = includeList.m_Size;
    src.m_pGroup = 0;
    v12 = includeList.m_Size;
    if ( includeList.m_Size == includeList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<MarkupSearchQuery_t,int>::Grow(&includeList.m_Memory, 1);
      v12 = includeList.m_Size;
    }
    includeList.m_Size = v12 + 1;
    v7 = &includeList.m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
    {
      v7->m_Type = src.m_Type;
      *&v7->m_TestVolume.lo.x = *&src.m_TestVolume.lo.x;
      *&v7->m_TestVolume.lo.z = *&src.m_TestVolume.lo.z;
      v8 = *&src.m_TestVolume.hi.y;
      v7->m_TestString.m_pString = 0;
      *&v7->m_TestVolume.hi.y = v8;
      v9 = CUtlString::Get(&src.m_TestString);
      CUtlString::Set(&v7->m_TestString, v9);
      v7->m_pGroup = src.m_pGroup;
    }
    if ( src.m_TestString.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&src.m_TestString);
    ++i;
  }
  if ( pGroup != 0 )
  {
    src.m_Type = MarkupSearchType::MARKUP_SEARCH_IN_GROUP;
    src.m_TestVolume.lo.x = 3.4028235e38;
    src.m_TestVolume.lo.y = 3.4028235e38;
    src.m_TestVolume.lo.z = 3.4028235e38;
    src.m_TestVolume.hi.x = -3.4028235e38;
    src.m_TestVolume.hi.y = -3.4028235e38;
    src.m_TestVolume.hi.z = -3.4028235e38;
    src.m_TestString.m_pString = 0;
    src.m_pGroup = pGroup;
    CUtlVectorBase<MarkupSearchQuery_t,CUtlMemory<MarkupSearchQuery_t,int>>::AddToTail(&includeList, &src);
    if ( src.m_TestString.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&src.m_TestString);
  }
  CMarkupVolumeTagged::Search(pResults, &includeList, 0);
  v13 = includeList.m_Size;
  for ( j = 48LL * includeList.m_Size - 48; --v13 >= 0; j -= 48 )
  {
    if ( *(&includeList.m_Memory.m_pMemory->m_TestString.m_pString + j) != 0 )
      CUtlString::FreeMemoryBlock((&includeList.m_Memory.m_pMemory->m_TestString + j));
  }
  includeList.m_Size = 0;
  if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
    if ( (includeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<MarkupSearchQuery_t,int>::Purge(&includeList.m_Memory);
  }
  if ( designerName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&designerName);
}


// CMarkupVolumeTagged::Script_Search  (line 675, @0x00000000022a2e70, libserver.so)  // inlines: AddToTail, AssignTo, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CVariantBase, Construct<CUtlString>, Destruct<CUtlString>, Element, EntityToHScript, Free, Get, Get<HSCRIPT__*>, GetPublicScriptScope, GrowMemory, HScriptToEntity<CBaseEntity>, Purge, RemoveAll, TempString, ToEnt, ToHScript, ToString, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CUtlString::Set, V_snprintf, VariantFieldTypeName, Warning, CUtlMemory<CUtlString, int>::Grow, GetScriptDesc<CEntityInstance>, CMarkupVolumeTagged::Search_General, CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<CMarkupVolumeTagged*, int>::Purge (13 total)
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "false", "true", "No free conversion of %s variant to HSCRIPT right now\n"
// globals: jpt_22A2FB5, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CMarkupVolumeTagged::Script_Search(
        __int128 scriptTags,
        const char *pszDesignerName,
        ScriptVariant_t scriptGroup)
{
  __int64 *v3; // r13
  __int64 v4; // rsi
  int v5; // r14d
  unsigned int i; // ebx
  const char *m_uint64; // rsi
  __int64 v8; // rsi
  int m_Size; // eax
  __int64 v10; // r12
  const char *v11; // rax
  double m_float; // xmm0_8
  const char *v13; // rcx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(IScriptVM *, __int64, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  const CMarkupVolumeTagged *v17; // rcx
  __int64 v18; // r13
  int j; // r12d
  __int64 v20; // rax
  void (__fastcall *v21)(IScriptVM *, uint64, __int64 *); // r14
  __int64 v22; // rbx
  IScriptVM *v23; // rdi
  uint64 v24; // rdx
  int v25; // ebx
  __int64 k; // r12
  const char *v28; // rax
  uint64 scriptGroupa; // [rsp+20h] [rbp-B0h]
  __int64 scriptGroup_8; // [rsp+28h] [rbp-A8h]
  ScriptVariant_t scriptResults; // [rsp+40h] [rbp-90h] BYREF
  __int64 v33; // [rsp+50h] [rbp-80h] BYREF
  __int16 v34; // [rsp+58h] [rbp-78h]
  __int16 v35; // [rsp+5Ah] [rbp-76h]
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > tags; // [rsp+60h] [rbp-70h] BYREF
  ScriptVariant_t scriptTag; // [rsp+80h] [rbp-50h] BYREF
  int v38; // [rsp+90h] [rbp-40h]
  int v39; // [rsp+94h] [rbp-3Ch]

  v3 = *(&scriptTags + 1);
  scriptGroup_8 = scriptTags;
  tags.m_Size = 0;
  tags.m_Memory.m_pMemory = 0;
  v4 = **(&scriptTags + 1);
  tags.m_Memory.m_nAllocationCount = 0;
  tags.m_Memory.m_nGrowSize = 0;
  scriptGroupa = scriptGroup.m_uint64;
  v5 = (*(*g_pScriptVM + 376LL))(g_pScriptVM, v4, pszDesignerName, scriptGroup.m_uint64, *&scriptGroup.m_type);
  if ( v5 > 0 )
  {
    for ( i = 0; i != v5; ++i )
    {
      scriptTag.m_type = 0;
      scriptTag.m_flags = 0;
      v8 = *v3;
      scriptTag.m_uint64 = 0;
      if ( (*(*g_pScriptVM + 320LL))(g_pScriptVM, v8, i, &scriptTag) != 0 )
      {
        m_Size = tags.m_Size;
        if ( tags.m_Size == tags.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&tags.m_Memory, 1);
          m_Size = tags.m_Size;
        }
        v10 = tags.m_Size;
        tags.m_Size = m_Size + 1;
        if ( &tags.m_Memory.m_pMemory[v10] != 0 )
          tags.m_Memory.m_pMemory[v10].m_pString = 0;
        if ( scriptTag.m_type == 30 )
        {
          m_uint64 = scriptTag.m_uint64;
        }
        else
        {
          switch ( scriptTag.m_type )
          {
            case 0:
              goto LABEL_19;
            case 1:
              m_float = scriptTag.m_float;
              goto LABEL_21;
            case 3:
            case 0x27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *scriptTag.m_pszString,
                *(scriptTag.m_uint64 + 4),
                *(scriptTag.m_uint64 + 8));
              break;
            case 4:
            case 0x1B:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *scriptTag.m_pszString,
                *(scriptTag.m_uint64 + 4),
                *(scriptTag.m_uint64 + 8),
                *(scriptTag.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d",
                scriptTag.m_int);
              break;
            case 6:
              v13 = "true";
              if ( scriptTag.m_char == 0 )
                v13 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v13);
              break;
            case 8:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%c",
                scriptTag.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                scriptTag.m_char,
                BYTE1(scriptTag.m_int),
                BYTE2(scriptTag.m_uint),
                HIBYTE(scriptTag.m_float));
              break;
            case 0x19:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *scriptTag.m_pszString,
                *(scriptTag.m_uint64 + 4));
              break;
            case 0x1A:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%lld",
                scriptTag.m_uint64);
              break;
            case 0x21:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%llu",
                scriptTag.m_uint64);
              break;
            case 0x22:
              m_float = scriptTag.m_float64;
LABEL_21:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
              break;
            case 0x25:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%u",
                scriptTag.m_int);
              break;
            default:
              v11 = VariantFieldTypeName(scriptTag.m_type);
              Warning("No conversion from %s to string at the moment!\n", v11);
LABEL_19:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        CUtlString::Set(&tags.m_Memory.m_pMemory[v10], m_uint64);
      }
      if ( (scriptTag.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, scriptTag.m_uint64);
    }
  }
  if ( *(scriptGroupa + 8) != 0 && (v14 = *scriptGroupa, *scriptGroupa != 0) )
  {
    v15 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v17 = v15(g_pScriptVM, v14, Script);
  }
  else
  {
    v17 = 0;
  }
  scriptTag.m_int = 0;
  *&scriptTag.m_type = 0;
  v38 = 0;
  v39 = 0;
  CMarkupVolumeTagged::Search_General(&scriptTag, &tags, pszDesignerName, v17);
  scriptResults.m_type = 0;
  scriptResults.m_flags = 0;
  scriptResults.m_uint64 = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, &scriptResults);
  v18 = 0;
  for ( j = 0; scriptTag.m_int > j; v18 += 8 )
  {
    v23 = g_pScriptVM;
    v21 = *(*g_pScriptVM + 384LL);
    v22 = *(*&scriptTag.m_type + v18);
    if ( v22 != 0 )
    {
      v20 = *(*(v22 + 8) + 40LL);
      if ( v20 == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(*(*&scriptTag.m_type + v18), 0);
        v23 = g_pScriptVM;
        v20 = *(*(v22 + 8) + 40LL);
      }
    }
    else
    {
      v20 = 0;
    }
    v34 = 31;
    v35 = 0;
    v33 = v20;
    v21(v23, scriptResults.m_uint64, &v33);
    if ( (v35 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v33);
    ++j;
  }
  v24 = scriptResults.m_uint64;
  if ( scriptResults.m_type == 0 )
    goto LABEL_57;
  if ( scriptResults.m_type != 31 )
  {
    v28 = VariantFieldTypeName(scriptResults.m_type);
    Warning("No free conversion of %s variant to HSCRIPT right now\n", v28);
LABEL_57:
    v24 = 0;
  }
  *(scriptGroup_8 + 8) = 31;
  *(scriptGroup_8 + 10) = 0;
  *scriptGroup_8 = v24;
  CVariantBase<CVariantDefaultAllocator>::Free(&scriptResults);
  scriptTag.m_int = 0;
  if ( (v39 & 0xC0000000) == 0 )
  {
    CUtlMemory<CMarkupVolumeTagged *,int>::Purge(&scriptTag.m_type);
    if ( (v39 & 0xC0000000) == 0 )
      CUtlMemory<CMarkupVolumeTagged *,int>::Purge(&scriptTag.m_type);
  }
  v25 = tags.m_Size;
  for ( k = 8LL * tags.m_Size - 8; --v25 >= 0; k -= 8 )
  {
    if ( *(&tags.m_Memory.m_pMemory->m_pString + k) != 0 )
      CUtlString::FreeMemoryBlock((tags.m_Memory.m_pMemory + k));
  }
  tags.m_Size = 0;
  if ( (tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&tags.m_Memory);
    if ( (tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&tags.m_Memory);
  }
  return scriptGroup_8;
}


