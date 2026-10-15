// Reconstructed from DWARF by pahole; not original source.

// src/game/server/maprules.cpp:19
class CRuleEntity : public CBaseModelEntity {
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

public:

private:

	static datamap_t m_DataMap;

	string_t m_iszMaster;  // +0x480
	typedef CBaseModelEntity BaseClass;
	CRuleEntity(CRuleEntity &);
	CRuleEntity(CRuleEntity &);
	CRuleEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void SetMaster(string_t);
	bool CanFireForActivator(CBaseEntity *);
	virtual ~CRuleEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 1160
};

// src/game/server/maprules.cpp:71
class CRulePointEntity : public CRuleEntity {
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

public:

private:

	static datamap_t m_DataMap;

	int m_Score;  // +0x488
	typedef CRuleEntity BaseClass;
	CRulePointEntity(CRulePointEntity &);
	CRulePointEntity(CRulePointEntity &);
	CRulePointEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CRulePointEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// sizeof = 1168
};

// src/game/server/maprules.cpp:104
class CRuleBrushEntity : public CRuleEntity {
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

public:

private:

	static datamap_t m_DataMap;
	typedef CRuleEntity BaseClass;
	CRuleBrushEntity(CRuleBrushEntity &);
	CRuleBrushEntity(CRuleBrushEntity &);
	CRuleBrushEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CRuleBrushEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 1160
};

// src/game/server/maprules.cpp:132
class CGameScore : public CRulePointEntity {
public:

private:

	static datamap_t m_DataMap;
	typedef CRulePointEntity BaseClass;

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
	CGameScore(CGameScore &);
	CGameScore(CGameScore &);
	CGameScore();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	int Points();
	bool AllowNegativeScore();
	int AwardToTeam();
	void SetPoints(int);
	void InputApplyScore(inputdata_t &);
	virtual ~CGameScore();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[108] Use
	// sizeof = 1168
};

// src/game/server/maprules.cpp:210
class CGameEnd : public CRulePointEntity {
public:

private:

	static datamap_t m_DataMap;
	typedef CRulePointEntity BaseClass;

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
	CGameEnd(CGameEnd &);
	CGameEnd(CGameEnd &);
	CGameEnd();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputGameEnd(inputdata_t &);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual ~CGameEnd();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[108] Use
	// sizeof = 1168
};

// src/game/server/maprules.cpp:263
class CGameText : public CRulePointEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iszMessage;  // +0x490

	typedef CRulePointEntity BaseClass;

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
	CGameText(CGameText &);
	CGameText(CGameText &);
	CGameText();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	bool MessageToAll();
	void MessageSet(const char *);
	const char * MessageGet();
	void InputDisplay(inputdata_t &);
	void Display(CBaseEntity *);
	void InputSetText(inputdata_t &);
	void SetText(const char *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual ~CGameText();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// vtable[108] Use
	// sizeof = 1216
};

// src/game/server/maprules.cpp:374
class CGamePlayerZone : public CRuleBrushEntity {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnPlayerInZone;  // +0x488
	COutputEvent m_OnPlayerOutZone;  // +0x4a0
	COutputInt m_PlayersInCount;  // +0x4b8
	COutputInt m_PlayersOutCount;  // +0x4d8
	typedef CRuleBrushEntity BaseClass;

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
	CGamePlayerZone(CGamePlayerZone &);
	CGamePlayerZone(CGamePlayerZone &);
	CGamePlayerZone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	void InputCountPlayersInZone(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CGamePlayerZone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 1272
};

// src/game/server/maprules.cpp:462
class CGamePlayerEquip : public CRulePointEntity {
public:

private:

	static datamap_t m_DataMap;

	int m_weaponCount[32];  // +0x590
	typedef CRulePointEntity BaseClass;

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
	CGamePlayerEquip(CGamePlayerEquip &);
	CGamePlayerEquip(CGamePlayerEquip &);
	CGamePlayerEquip();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Touch(CBaseEntity *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	bool UseOnly();
	void EquipPlayer(CBaseEntity *);
	virtual ~CGamePlayerEquip();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[112] Touch
	// vtable[108] Use
	// sizeof = 1552
};

// src/game/server/maprules.cpp:550
class CGamePlayerTeam : public CRulePointEntity {
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
	CGamePlayerTeam(CGamePlayerTeam &);
	CGamePlayerTeam(CGamePlayerTeam &);
	CGamePlayerTeam();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	bool RemoveOnFire();
	bool ShouldKillPlayer();
	bool ShouldGibPlayer();
	const char * TargetTeamName(const char *, CBaseEntity *);
	virtual ~CGamePlayerTeam();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[108] Use
	// sizeof = 1168
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRuleEntity::~CRuleEntity  (line 19, @0x00000000022a9b90, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CRuleEntity::~CRuleEntity(CRuleEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CRuleEntity::~CRuleEntity  (line 19, @0x00000000022a9bb0, libserver.so)  // inlines: ~CRuleEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CRuleEntity::~CRuleEntity(CRuleEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CRuleEntity::GetEntityClass  (line 21, @0x00000000022a6120, libserver.so)
CEntityClass *__cdecl CRuleEntity::GetEntityClass()
{
  return g_pEntityCRuleEntityClass;
}


// CRuleEntity::Schema_DynamicBinding  (line 21, @0x00000000022a6130, libserver.so)
// globals: CRuleEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRuleEntity::Schema_DynamicBinding(const CRuleEntity *const this)
{
  return CRuleEntity::s_pSchemaBinding;
}


// CRuleEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 21, @0x00000000022a6140, libserver.so)
// globals: CRuleEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRuleEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRuleEntity::CEntityInstanceEntityClass *const this)
{
  return CRuleEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRuleEntity::CEntityInstanceEntityClass::DestructInstance  (line 21, @0x00000000022a6150, libserver.so)  // inlines: Destruct<CRuleEntity>
void __fastcall CRuleEntity::CEntityInstanceEntityClass::DestructInstance(
        CRuleEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRuleEntity::CEntityInstanceEntityClass::FreeInstance  (line 21, @0x00000000022a6170, libserver.so)
void __fastcall CRuleEntity::CEntityInstanceEntityClass::FreeInstance(
        CRuleEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRuleEntity::CEntityInstanceEntityClass::CanAllocate  (line 21, @0x00000000022a6190, libserver.so)
bool __fastcall CRuleEntity::CEntityInstanceEntityClass::CanAllocate(
        const CRuleEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRuleEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 21, @0x00000000022a61a0, libserver.so)
// globals: CRuleEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CRuleEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRuleEntity::CEntityInstanceEntityClass *const this)
{
  return CRuleEntity::s_pSchemaBinding;
}


// CRuleEntity::CEntityInstanceEntityClass::AllocateInstance  (line 21, @0x00000000022a8480, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRuleEntity::CEntityInstanceEntityClass::AllocateInstance(
        CRuleEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1160);
  memset(v1, 0, 0x488u);
  return v1;
}


// CRuleEntity::CEntityInstanceEntityClass::ConstructInstance  (line 21, @0x00000000022a8f80, libserver.so)  // inlines: CRuleEntity, CUtlSymbolLarge, Construct<CRuleEntity>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CRuleEntity::CEntityInstanceEntityClass::ConstructInstance(
        CRuleEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 144) = 0;
    *p = &off_4066090;
  }
  return p;
}


// CRuleEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x00000000022ab180, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRuleEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRuleEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CRuleEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x00000000022ab1a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRuleEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRuleEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRuleEntity::GetEntityClassInfo  (line 21, @0x00000000022b2ae0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CRuleBrushEntity::GetEntityClassInternal
// strings: "CRuleEntity", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo, CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CRuleEntity::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo != 0 )
    return &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo) == 0 )
    return &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo;
  if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
      "CBaseModelEntity",
      "basemodelentity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo,
    "CRuleEntity",
    0,
    0,
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo);
  return &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo;
}


// CRuleEntity::GetEntityClassInternal  (line 21, @0x00000000022b2ba0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CRuleEntity"
// globals: `guard variable for'CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass, CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass, __dso_handle, CRuleEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo, CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo
CEntityClass *__cdecl CRuleEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass);
    CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass._vptr_CEntityClass = off_4066010;
    __cxa_guard_release(&`guard variable for'CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass);
    __cxa_atexit(
      CRuleEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCRuleEntityClass != 0 )
    return &CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass;
  if ( `guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo,
      "CRuleEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo);
  }
  CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass.m_pClassInfo = &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo;
  CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass.m_pBaseClassInfo = CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCRuleEntityClass = &CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass;
  CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo.m_pClass = &CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass;
  CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCRuleEntityClass->m_pComponentOverrides = 0;
  return &CRuleEntity::GetEntityClassInternal(void)::g_EntityCRuleEntityClass;
}


// CRuleEntity::GetDataDescMap  (line 38, @0x0000000002283d60, libserver.so)
// globals: CRuleEntity::m_DataMap
datamap_t *__fastcall CRuleEntity::GetDataDescMap(CRuleEntity *const this)
{
  return &CRuleEntity::m_DataMap;
}


// CRuleEntity::AddDatadescMetadataKeys  (line 38, @0x0000000002295d30, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CRuleEntity::GetEntityClass(void)
void __fastcall CRuleEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CRuleEntity::GetEntityClass);
}


// CRuleEntity::GetBaseMap  (line 38, @0x0000000002295d50, libserver.so)
datamap_t *__cdecl CRuleEntity::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CRuleEntity>  (line 38, @0x0000000002295d60, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CRuleEntity"
// globals: `guard variable for'DataMapInit<CRuleEntity>(CRuleEntity *)::nameHolder, CRuleEntity::GetEntityClass(void), CRuleEntity::m_DataMap, DataMapInit<CRuleEntity>(CRuleEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRuleEntity>(CRuleEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRuleEntity>(CRuleEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRuleEntity>(CRuleEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CRuleEntity>(CRuleEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRuleEntity>(CRuleEntity *)::nameHolder.m_pszBase = "CRuleEntity";
    DataMapInit<CRuleEntity>(CRuleEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRuleEntity>(CRuleEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRuleEntity>(CRuleEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRuleEntity>(CRuleEntity *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRuleEntity>(CRuleEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRuleEntity>(CRuleEntity *)::nameHolder,
      &_dso_handle);
  }
  CRuleEntity::m_DataMap.dataNumFields = 1;
  CRuleEntity::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CRuleEntity::m_DataMap.dataDesc = &DataMapInit<CRuleEntity>(CRuleEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CRuleEntity::m_DataMap, CRuleEntity::GetEntityClass);
  return &CRuleEntity::m_DataMap;
}


// CRuleEntity::Spawn  (line 46, @0x0000000002284fd0, libserver.so)
// calls: CBaseEntity::Spawn, CBaseEntity::SetMoveType, CBaseEntity::AddEffects
// callers: CRulePointEntity::Spawn, CRuleBrushEntity::Spawn
void __fastcall CRuleEntity::Spawn(CRuleEntity *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseEntity::AddEffects(this, 32);
}


// CRuleEntity::CanFireForActivator  (line 55, @0x0000000002295e30, libserver.so)  // inlines: CUtlSymbolLarge, operator!=
// calls: UTIL_IsMasterTriggered
// callers: CGameEnd::Use, CGameScore::InputApplyScore, CGameScore::Use, CGameText::Display, CGamePlayerEquip::Touch, CGamePlayerTeam::Use, CGamePlayerZone::InputCountPlayersInZone
bool __fastcall CRuleEntity::CanFireForActivator(CRuleEntity *const this, CBaseEntity *pActivator)
{
  __int64 v2; // rbp
  UtlSymLargeId_t m_Id; // rdx
  bool result; // al
  _QWORD v5[3]; // [rsp-18h] [rbp-18h] BYREF

  m_Id = this->m_iszMaster.u.m_Id;
  result = 1;
  if ( m_Id != 0 )
  {
    v5[2] = v2;
    v5[0] = m_Id;
    return UTIL_IsMasterTriggered(v5, pActivator);
  }
  return result;
}


// CRulePointEntity::~CRulePointEntity  (line 71, @0x00000000022a9be0, libserver.so)  // inlines: ~CRuleEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CRulePointEntity::~CRulePointEntity(CRulePointEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CRulePointEntity::~CRulePointEntity  (line 71, @0x00000000022a9c00, libserver.so)  // inlines: ~CRuleEntity, ~CRulePointEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CRulePointEntity::~CRulePointEntity(CRulePointEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CRulePointEntity::GetEntityClass  (line 73, @0x00000000022a61b0, libserver.so)
CEntityClass *__cdecl CRulePointEntity::GetEntityClass()
{
  return g_pEntityCRulePointEntityClass;
}


// CRulePointEntity::Schema_DynamicBinding  (line 73, @0x00000000022a61c0, libserver.so)
// globals: CRulePointEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRulePointEntity::Schema_DynamicBinding(const CRulePointEntity *const this)
{
  return CRulePointEntity::s_pSchemaBinding;
}


// CRulePointEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 73, @0x00000000022a61d0, libserver.so)
// globals: CRulePointEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRulePointEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRulePointEntity::CEntityInstanceEntityClass *const this)
{
  return CRulePointEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRulePointEntity::CEntityInstanceEntityClass::DestructInstance  (line 73, @0x00000000022a61e0, libserver.so)  // inlines: Destruct<CRulePointEntity>
void __fastcall CRulePointEntity::CEntityInstanceEntityClass::DestructInstance(
        CRulePointEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRulePointEntity::CEntityInstanceEntityClass::FreeInstance  (line 73, @0x00000000022a6200, libserver.so)
void __fastcall CRulePointEntity::CEntityInstanceEntityClass::FreeInstance(
        CRulePointEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRulePointEntity::CEntityInstanceEntityClass::CanAllocate  (line 73, @0x00000000022a6220, libserver.so)
bool __fastcall CRulePointEntity::CEntityInstanceEntityClass::CanAllocate(
        const CRulePointEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRulePointEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 73, @0x00000000022a6230, libserver.so)
// globals: CRulePointEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CRulePointEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRulePointEntity::CEntityInstanceEntityClass *const this)
{
  return CRulePointEntity::s_pSchemaBinding;
}


// CRulePointEntity::CEntityInstanceEntityClass::AllocateInstance  (line 73, @0x00000000022a84c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRulePointEntity::CEntityInstanceEntityClass::AllocateInstance(
        CRulePointEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1168);
  memset(v1, 0, 0x490u);
  return v1;
}


// CRulePointEntity::CEntityInstanceEntityClass::ConstructInstance  (line 73, @0x00000000022a8fc0, libserver.so)  // inlines: CRuleEntity, CRulePointEntity, CUtlSymbolLarge, Construct<CRulePointEntity>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CRulePointEntity::CEntityInstanceEntityClass::ConstructInstance(
        CRulePointEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 144) = 0;
    *p = &off_40667D0;
  }
  return p;
}


// CRulePointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 73, @0x00000000022ab1d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRulePointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRulePointEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CRulePointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 73, @0x00000000022ab1f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRulePointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRulePointEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRulePointEntity::GetEntityClassInfo  (line 73, @0x00000000022b2ce0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CGameScore::GetEntityClassInternal, CGameText::GetEntityClassInternal, CGamePlayerEquip::GetEntityClassInternal, CGamePlayerTeam::GetEntityClassInternal
// strings: "CRulePointEntity", "CRuleEntity"
// globals: `guard variable for'CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo, CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo, `guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo, CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo
CEntityClassInfo *__cdecl CRulePointEntity::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo != 0 )
    return &CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo) == 0 )
    return &CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo;
  if ( `guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo,
      "CRuleEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo,
    "CRulePointEntity",
    0,
    0,
    &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo);
  return &CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo;
}


// CRulePointEntity::GetEntityClassInternal  (line 73, @0x00000000022b2da0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CRulePointEntity", "CRuleEntity"
// globals: `guard variable for'CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass, CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass, __dso_handle, CRulePointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo, CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo, `guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo, CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo
CEntityClass *__cdecl CRulePointEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass);
    CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass._vptr_CEntityClass = off_4066750;
    __cxa_guard_release(&`guard variable for'CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass);
    __cxa_atexit(
      CRulePointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCRulePointEntityClass != 0 )
    return &CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass;
  if ( `guard variable for'CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo,
        "CRuleEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo,
      "CRulePointEntity",
      0,
      0,
      &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo);
  }
  CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass.m_pClassInfo = &CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo;
  CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass.m_pBaseClassInfo = CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCRulePointEntityClass = &CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass;
  CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo.m_pClass = &CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass;
  CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCRulePointEntityClass->m_pComponentOverrides = 0;
  return &CRulePointEntity::GetEntityClassInternal(void)::g_EntityCRulePointEntityClass;
}


// CRulePointEntity::GetDataDescMap  (line 86, @0x0000000002283d70, libserver.so)
// globals: CRulePointEntity::m_DataMap
datamap_t *__fastcall CRulePointEntity::GetDataDescMap(CRulePointEntity *const this)
{
  return &CRulePointEntity::m_DataMap;
}


// CRulePointEntity::AddDatadescMetadataKeys  (line 86, @0x0000000002295f80, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CRulePointEntity::GetEntityClass(void)
void __fastcall CRulePointEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CRulePointEntity::GetEntityClass);
}


// CRulePointEntity::GetBaseMap  (line 86, @0x0000000002295fa0, libserver.so)
// globals: CRuleEntity::m_DataMap
datamap_t *__cdecl CRulePointEntity::GetBaseMap()
{
  return &CRuleEntity::m_DataMap;
}


// DataMapInit<CRulePointEntity>  (line 86, @0x0000000002295fb0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CRulePointEntity"
// globals: `guard variable for'DataMapInit<CRulePointEntity>(CRulePointEntity *)::nameHolder, CRuleEntity::m_DataMap, CRulePointEntity::GetEntityClass(void), CRulePointEntity::m_DataMap, DataMapInit<CRulePointEntity>(CRulePointEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRulePointEntity>(CRulePointEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRulePointEntity>(CRulePointEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRulePointEntity>(CRulePointEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CRulePointEntity>(CRulePointEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRulePointEntity>(CRulePointEntity *)::nameHolder.m_pszBase = "CRulePointEntity";
    DataMapInit<CRulePointEntity>(CRulePointEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRulePointEntity>(CRulePointEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRulePointEntity>(CRulePointEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRulePointEntity>(CRulePointEntity *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRulePointEntity>(CRulePointEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRulePointEntity>(CRulePointEntity *)::nameHolder,
      &_dso_handle);
  }
  CRulePointEntity::m_DataMap.dataNumFields = 1;
  CRulePointEntity::m_DataMap.baseMap = &CRuleEntity::m_DataMap;
  CRulePointEntity::m_DataMap.dataDesc = &DataMapInit<CRulePointEntity>(CRulePointEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CRulePointEntity::m_DataMap, CRulePointEntity::GetEntityClass);
  return &CRulePointEntity::m_DataMap;
}


// CRulePointEntity::Spawn  (line 93, @0x0000000002285000, libserver.so)  // inlines: CWeakHandle, FromUntypedHandleUnchecked, StaticInvalidHandle
// calls: CRuleEntity::Spawn, CBaseModelEntity::SetModel
// callers: CGameScore::Spawn, CGamePlayerEquip::Spawn, CGameText::Spawn
void __fastcall CRulePointEntity::Spawn(CRulePointEntity *const this, const CEntityKeyValues *pKeyValues)
{
  HModel hModel; // [rsp+0h] [rbp-20h] BYREF

  CRuleEntity::Spawn(this, pKeyValues);
  hModel.m_pBinding = 0;
  CBaseModelEntity::SetModel(this, &hModel);
  this->m_Score = 0;
}


// CRuleBrushEntity::~CRuleBrushEntity  (line 104, @0x00000000022a9dc0, libserver.so)  // inlines: ~CRuleEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CRuleBrushEntity::~CRuleBrushEntity(CRuleBrushEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CRuleBrushEntity::~CRuleBrushEntity  (line 104, @0x00000000022a9de0, libserver.so)  // inlines: ~CRuleBrushEntity, ~CRuleEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CRuleBrushEntity::~CRuleBrushEntity(CRuleBrushEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CRuleBrushEntity::GetEntityClass  (line 106, @0x00000000022a6240, libserver.so)
CEntityClass *__cdecl CRuleBrushEntity::GetEntityClass()
{
  return g_pEntityCRuleBrushEntityClass;
}


// CRuleBrushEntity::Schema_DynamicBinding  (line 106, @0x00000000022a6250, libserver.so)
// globals: CRuleBrushEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRuleBrushEntity::Schema_DynamicBinding(const CRuleBrushEntity *const this)
{
  return CRuleBrushEntity::s_pSchemaBinding;
}


// CRuleBrushEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 106, @0x00000000022a6260, libserver.so)
// globals: CRuleBrushEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRuleBrushEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRuleBrushEntity::CEntityInstanceEntityClass *const this)
{
  return CRuleBrushEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRuleBrushEntity::CEntityInstanceEntityClass::DestructInstance  (line 106, @0x00000000022a6270, libserver.so)  // inlines: Destruct<CRuleBrushEntity>
void __fastcall CRuleBrushEntity::CEntityInstanceEntityClass::DestructInstance(
        CRuleBrushEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRuleBrushEntity::CEntityInstanceEntityClass::FreeInstance  (line 106, @0x00000000022a6290, libserver.so)
void __fastcall CRuleBrushEntity::CEntityInstanceEntityClass::FreeInstance(
        CRuleBrushEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRuleBrushEntity::CEntityInstanceEntityClass::CanAllocate  (line 106, @0x00000000022a62b0, libserver.so)
bool __fastcall CRuleBrushEntity::CEntityInstanceEntityClass::CanAllocate(
        const CRuleBrushEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRuleBrushEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 106, @0x00000000022a62c0, libserver.so)
// globals: CRuleBrushEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CRuleBrushEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRuleBrushEntity::CEntityInstanceEntityClass *const this)
{
  return CRuleBrushEntity::s_pSchemaBinding;
}


// CRuleBrushEntity::CEntityInstanceEntityClass::AllocateInstance  (line 106, @0x00000000022a8500, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRuleBrushEntity::CEntityInstanceEntityClass::AllocateInstance(
        CRuleBrushEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1160);
  memset(v1, 0, 0x488u);
  return v1;
}


// CRuleBrushEntity::CEntityInstanceEntityClass::ConstructInstance  (line 106, @0x00000000022a9000, libserver.so)  // inlines: CRuleBrushEntity, CRuleEntity, CUtlSymbolLarge, Construct<CRuleBrushEntity>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CRuleBrushEntity::CEntityInstanceEntityClass::ConstructInstance(
        CRuleBrushEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 144) = 0;
    *p = &off_4066F10;
  }
  return p;
}


// CRuleBrushEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 106, @0x00000000022ab3b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRuleBrushEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRuleBrushEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CRuleBrushEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 106, @0x00000000022ab3d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRuleBrushEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRuleBrushEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRuleBrushEntity::GetEntityClassInfo  (line 106, @0x00000000022b2f30, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CGamePlayerZone::GetEntityClassInternal
// strings: "CRuleBrushEntity", "CRuleEntity"
// globals: `guard variable for'CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo, CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo, `guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo, CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo
CEntityClassInfo *__cdecl CRuleBrushEntity::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo != 0 )
    return &CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo) == 0 )
    return &CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo;
  if ( `guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo,
      "CRuleEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo,
    "CRuleBrushEntity",
    0,
    0,
    &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo);
  return &CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo;
}


// CRuleBrushEntity::GetEntityClassInternal  (line 106, @0x00000000022b2ff0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CRuleEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CRuleBrushEntity"
// globals: `guard variable for'CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass, CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass, __dso_handle, CRuleBrushEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo, CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo
CEntityClass *__cdecl CRuleBrushEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass);
    CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass._vptr_CEntityClass = off_4066E90;
    __cxa_guard_release(&`guard variable for'CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass);
    __cxa_atexit(
      CRuleBrushEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCRuleBrushEntityClass != 0 )
    return &CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass;
  if ( `guard variable for'CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo) != 0 )
  {
    EntityClassInfo = CRuleEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo,
      "CRuleBrushEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo);
  }
  CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass.m_pClassInfo = &CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo;
  CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass.m_pBaseClassInfo = CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCRuleBrushEntityClass = &CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass;
  CRuleBrushEntity::GetEntityClassInfo(void)::g_EntityCRuleBrushEntityClassInfo.m_pClass = &CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass;
  CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCRuleBrushEntityClass->m_pComponentOverrides = 0;
  return &CRuleBrushEntity::GetEntityClassInternal(void)::g_EntityCRuleBrushEntityClass;
}


// CRuleBrushEntity::GetDataDescMap  (line 114, @0x0000000002283d80, libserver.so)
// globals: CRuleBrushEntity::m_DataMap
datamap_t *__fastcall CRuleBrushEntity::GetDataDescMap(CRuleBrushEntity *const this)
{
  return &CRuleBrushEntity::m_DataMap;
}


// CRuleBrushEntity::AddDatadescMetadataKeys  (line 114, @0x0000000002296080, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CRuleBrushEntity::GetEntityClass(void)
void __fastcall CRuleBrushEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CRuleBrushEntity::GetEntityClass);
}


// CRuleBrushEntity::GetBaseMap  (line 114, @0x00000000022960a0, libserver.so)
// globals: CRuleEntity::m_DataMap
datamap_t *__cdecl CRuleBrushEntity::GetBaseMap()
{
  return &CRuleEntity::m_DataMap;
}


// DataMapInit<CRuleBrushEntity>  (line 114, @0x00000000022960b0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CRuleBrushEntity"
// globals: `guard variable for'DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::nameHolder, CRuleEntity::m_DataMap, CRuleBrushEntity::GetEntityClass(void), DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::dataDesc, CRuleBrushEntity::m_DataMap, DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::nameHolder.m_pszBase = "CRuleBrushEntity";
    DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::nameHolder,
      &_dso_handle);
  }
  CRuleBrushEntity::m_DataMap.dataNumFields = 1;
  CRuleBrushEntity::m_DataMap.baseMap = &CRuleEntity::m_DataMap;
  CRuleBrushEntity::m_DataMap.dataDesc = DataMapInit<CRuleBrushEntity>(CRuleBrushEntity *)::dataDesc;
  AddDatadescMetadataKeys(&CRuleBrushEntity::m_DataMap, CRuleBrushEntity::GetEntityClass);
  return &CRuleBrushEntity::m_DataMap;
}


// CRuleBrushEntity::Spawn  (line 117, @0x0000000002285070, libserver.so)
// calls: CBaseModelEntity::SetModelFromKeyValues, CRuleEntity::Spawn
void __fastcall CRuleBrushEntity::Spawn(CRuleBrushEntity *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CRuleEntity::Spawn(this, pKeyValues);
}


// CGameScore::~CGameScore  (line 132, @0x00000000022a9c30, libserver.so)  // inlines: ~CRuleEntity, ~CRulePointEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CGameScore::~CGameScore(CGameScore *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CGameScore::~CGameScore  (line 132, @0x00000000022a9c50, libserver.so)  // inlines: ~CGameScore, ~CRuleEntity, ~CRulePointEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CGameScore::~CGameScore(CGameScore *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CGameScore::GetEntityClass  (line 134, @0x00000000022a62d0, libserver.so)
CEntityClass *__cdecl CGameScore::GetEntityClass()
{
  return g_pEntityCGameScoreClass;
}


// CGameScore::Schema_DynamicBinding  (line 134, @0x00000000022a62e0, libserver.so)
// globals: CGameScore::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGameScore::Schema_DynamicBinding(const CGameScore *const this)
{
  return CGameScore::s_pSchemaBinding;
}


// CGameScore::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 134, @0x00000000022a62f0, libserver.so)
// globals: CGameScore::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGameScore::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGameScore::CEntityInstanceEntityClass *const this)
{
  return CGameScore::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGameScore::CEntityInstanceEntityClass::DestructInstance  (line 134, @0x00000000022a6300, libserver.so)  // inlines: Destruct<CGameScore>
void __fastcall CGameScore::CEntityInstanceEntityClass::DestructInstance(
        CGameScore::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGameScore::CEntityInstanceEntityClass::FreeInstance  (line 134, @0x00000000022a6320, libserver.so)
void __fastcall CGameScore::CEntityInstanceEntityClass::FreeInstance(
        CGameScore::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGameScore::CEntityInstanceEntityClass::CanAllocate  (line 134, @0x00000000022a6340, libserver.so)
bool __fastcall CGameScore::CEntityInstanceEntityClass::CanAllocate(
        const CGameScore::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGameScore::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 134, @0x00000000022a6350, libserver.so)
// globals: CGameScore::s_pSchemaBinding
const ISchemaBinding *__fastcall CGameScore::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGameScore::CEntityInstanceEntityClass *const this)
{
  return CGameScore::s_pSchemaBinding;
}


// CGameScore::CEntityInstanceEntityClass::AllocateInstance  (line 134, @0x00000000022a8540, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGameScore::CEntityInstanceEntityClass::AllocateInstance(
        CGameScore::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1168);
  memset(v1, 0, 0x490u);
  return v1;
}


// CGameScore::CEntityInstanceEntityClass::ConstructInstance  (line 134, @0x00000000022a9040, libserver.so)  // inlines: CGameScore, CRuleEntity, CRulePointEntity, CUtlSymbolLarge, Construct<CGameScore>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CGameScore::CEntityInstanceEntityClass::ConstructInstance(
        CGameScore::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 144) = 0;
    *p = &off_4067650;
  }
  return p;
}


// CGameScore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 134, @0x00000000022ab220, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGameScore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameScore::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CGameScore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 134, @0x00000000022ab240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGameScore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameScore::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGameScore::GetEntityClassInternal  (line 134, @0x00000000022b3130, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CRulePointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "game_score", "CGameScore"
// globals: `guard variable for'CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass, CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass, __dso_handle, CGameScore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGameScore::GetEntityClassInfo(void)::g_EntityCGameScoreClassInfo, CGameScore::GetEntityClassInfo(void)::g_EntityCGameScoreClassInfo
CEntityClass *__cdecl CGameScore::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass) != 0 )
  {
    CEntityClass::CEntityClass(&CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass);
    CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass._vptr_CEntityClass = off_40675D0;
    __cxa_guard_release(&`guard variable for'CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass);
    __cxa_atexit(
      CGameScore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass,
      &_dso_handle);
  }
  if ( g_pEntityCGameScoreClass != 0 )
    return &CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass;
  if ( `guard variable for'CGameScore::GetEntityClassInfo(void)::g_EntityCGameScoreClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGameScore::GetEntityClassInfo(void)::g_EntityCGameScoreClassInfo) != 0 )
  {
    EntityClassInfo = CRulePointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGameScore::GetEntityClassInfo(void)::g_EntityCGameScoreClassInfo,
      "CGameScore",
      "game_score",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGameScore::GetEntityClassInfo(void)::g_EntityCGameScoreClassInfo);
  }
  CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass.m_pClassInfo = &CGameScore::GetEntityClassInfo(void)::g_EntityCGameScoreClassInfo;
  CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass.m_pBaseClassInfo = CGameScore::GetEntityClassInfo(void)::g_EntityCGameScoreClassInfo.m_pBaseClassInfo;
  g_pEntityCGameScoreClass = &CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass;
  CGameScore::GetEntityClassInfo(void)::g_EntityCGameScoreClassInfo.m_pClass = &CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass;
  CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCGameScoreClass->m_pComponentOverrides = 0;
  return &CGameScore::GetEntityClassInternal(void)::g_EntityCGameScoreClass;
}


// CGameScore::GetDataDescMap  (line 152, @0x0000000002283d90, libserver.so)
// globals: CGameScore::m_DataMap
datamap_t *__fastcall CGameScore::GetDataDescMap(CGameScore *const this)
{
  return &CGameScore::m_DataMap;
}


// CGameScore::AddDatadescMetadataKeys  (line 152, @0x0000000002296180, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CGameScore::GetEntityClass(void)
void __fastcall CGameScore::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CGameScore::GetEntityClass);
}


// CGameScore::GetBaseMap  (line 152, @0x00000000022961a0, libserver.so)
// globals: CRulePointEntity::m_DataMap
datamap_t *__cdecl CGameScore::GetBaseMap()
{
  return &CRulePointEntity::m_DataMap;
}


// DataMapInit<CGameScore>  (line 152, @0x00000000022961b0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CGameScore"
// globals: `guard variable for'DataMapInit<CGameScore>(CGameScore *)::nameHolder, CRulePointEntity::m_DataMap, CGameScore::GetEntityClass(void), CGameScore::m_DataMap, DataMapInit<CGameScore>(CGameScore *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGameScore>(CGameScore *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CGameScore>(CGameScore *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGameScore>(CGameScore *)::nameHolder) != 0 )
  {
    DataMapInit<CGameScore>(CGameScore *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGameScore>(CGameScore *)::nameHolder.m_pszBase = "CGameScore";
    DataMapInit<CGameScore>(CGameScore *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGameScore>(CGameScore *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGameScore>(CGameScore *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGameScore>(CGameScore *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGameScore>(CGameScore *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGameScore>(CGameScore *)::nameHolder,
      &_dso_handle);
  }
  CGameScore::m_DataMap.dataNumFields = 1;
  CGameScore::m_DataMap.baseMap = &CRulePointEntity::m_DataMap;
  CGameScore::m_DataMap.dataDesc = &DataMapInit<CGameScore>(CGameScore *)::dataDesc[1];
  AddDatadescMetadataKeys(&CGameScore::m_DataMap, CGameScore::GetEntityClass);
  return &CGameScore::m_DataMap;
}


// CGameScore::Spawn  (line 157, @0x0000000002285040, libserver.so)  // inlines: SetPoints
// calls: CRulePointEntity::Spawn
void __fastcall CGameScore::Spawn(CGameScore *const this, const CEntityKeyValues *pKeyValues)
{
  int m_Score; // r12d

  m_Score = this->m_Score;
  CRulePointEntity::Spawn(this, pKeyValues);
  this->m_Score = m_Score;
}


// CGameScore::InputApplyScore  (line 164, @0x0000000002295e90, libserver.so)  // inlines: AllowNegativeScore, AwardToTeam
// calls: CRuleEntity::CanFireForActivator, CBaseEntity::AddPoints, CBaseEntity::AddPointsToTeam
void __fastcall CGameScore::InputApplyScore(CGameScore *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // rbx
  unsigned int m_Value; // edx

  pActivator = inputdata->pActivator;
  if ( inputdata->pActivator != 0
    && CRuleEntity::CanFireForActivator(this, inputdata->pActivator)
    && (*(pActivator->_vptr_IHandleEntity + 140))(pActivator) != 0 )
  {
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 2) != 0 )
      CBaseEntity::AddPointsToTeam(pActivator, this->m_Score, m_Value & 1);
    else
      CBaseEntity::AddPoints(pActivator, this->m_Score, m_Value & 1);
  }
}


// CGameScore::Use  (line 188, @0x0000000002295f10, libserver.so)  // inlines: AllowNegativeScore, AwardToTeam
// calls: CRuleEntity::CanFireForActivator, CBaseEntity::AddPoints, CBaseEntity::AddPointsToTeam
void __fastcall CGameScore::Use(
        CGameScore *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  unsigned int m_Value; // edx

  if ( CRuleEntity::CanFireForActivator(this, pActivator) && (*(pActivator->_vptr_IHandleEntity + 140))(pActivator) != 0 )
  {
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 2) != 0 )
      CBaseEntity::AddPointsToTeam(pActivator, this->m_Score, m_Value & 1);
    else
      CBaseEntity::AddPoints(pActivator, this->m_Score, m_Value & 1);
  }
}


// CGameEnd::~CGameEnd  (line 210, @0x00000000022a9c80, libserver.so)  // inlines: ~CRuleEntity, ~CRulePointEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CGameEnd::~CGameEnd(CGameEnd *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CGameEnd::~CGameEnd  (line 210, @0x00000000022a9ca0, libserver.so)  // inlines: ~CGameEnd, ~CRuleEntity, ~CRulePointEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CGameEnd::~CGameEnd(CGameEnd *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CGameEnd::GetEntityClass  (line 212, @0x00000000022a6360, libserver.so)
CEntityClass *__cdecl CGameEnd::GetEntityClass()
{
  return g_pEntityCGameEndClass;
}


// CGameEnd::Schema_DynamicBinding  (line 212, @0x00000000022a6370, libserver.so)
// globals: CGameEnd::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGameEnd::Schema_DynamicBinding(const CGameEnd *const this)
{
  return CGameEnd::s_pSchemaBinding;
}


// CGameEnd::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 212, @0x00000000022a6380, libserver.so)
// globals: CGameEnd::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGameEnd::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGameEnd::CEntityInstanceEntityClass *const this)
{
  return CGameEnd::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGameEnd::CEntityInstanceEntityClass::DestructInstance  (line 212, @0x00000000022a6390, libserver.so)  // inlines: Destruct<CGameEnd>
void __fastcall CGameEnd::CEntityInstanceEntityClass::DestructInstance(
        CGameEnd::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGameEnd::CEntityInstanceEntityClass::FreeInstance  (line 212, @0x00000000022a63b0, libserver.so)
void __fastcall CGameEnd::CEntityInstanceEntityClass::FreeInstance(
        CGameEnd::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGameEnd::CEntityInstanceEntityClass::CanAllocate  (line 212, @0x00000000022a63d0, libserver.so)
bool __fastcall CGameEnd::CEntityInstanceEntityClass::CanAllocate(
        const CGameEnd::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGameEnd::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 212, @0x00000000022a63e0, libserver.so)
// globals: CGameEnd::s_pSchemaBinding
const ISchemaBinding *__fastcall CGameEnd::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGameEnd::CEntityInstanceEntityClass *const this)
{
  return CGameEnd::s_pSchemaBinding;
}


// CGameEnd::CEntityInstanceEntityClass::AllocateInstance  (line 212, @0x00000000022a8580, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGameEnd::CEntityInstanceEntityClass::AllocateInstance(
        CGameEnd::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1168);
  memset(v1, 0, 0x490u);
  return v1;
}


// CGameEnd::CEntityInstanceEntityClass::ConstructInstance  (line 212, @0x00000000022a9080, libserver.so)  // inlines: CGameEnd, CRuleEntity, CRulePointEntity, CUtlSymbolLarge, Construct<CGameEnd>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CGameEnd::CEntityInstanceEntityClass::ConstructInstance(
        CGameEnd::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 144) = 0;
    *p = &off_4067D90;
  }
  return p;
}


// CGameEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 212, @0x00000000022ab270, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGameEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameEnd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CGameEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 212, @0x00000000022ab290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGameEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameEnd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGameEnd::GetEntityClassInternal  (line 212, @0x00000000022b3280, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "game_end", "CGameEnd", "CRulePointEntity", "CRuleEntity"
// globals: `guard variable for'CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass, CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass, __dso_handle, CGameEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGameEnd::GetEntityClassInfo(void)::g_EntityCGameEndClassInfo, CGameEnd::GetEntityClassInfo(void)::g_EntityCGameEndClassInfo, `guard variable for'CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo, CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo (10 total)
CEntityClass *__cdecl CGameEnd::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass) != 0 )
  {
    CEntityClass::CEntityClass(&CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass);
    CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass._vptr_CEntityClass = off_4067D10;
    __cxa_guard_release(&`guard variable for'CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass);
    __cxa_atexit(
      CGameEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass,
      &_dso_handle);
  }
  if ( g_pEntityCGameEndClass != 0 )
    return &CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass;
  if ( `guard variable for'CGameEnd::GetEntityClassInfo(void)::g_EntityCGameEndClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGameEnd::GetEntityClassInfo(void)::g_EntityCGameEndClassInfo) != 0 )
  {
    if ( `guard variable for'CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo) != 0 )
      {
        EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo,
          "CRuleEntity",
          0,
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo,
        "CRulePointEntity",
        0,
        0,
        &CRuleEntity::GetEntityClassInfo(void)::g_EntityCRuleEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGameEnd::GetEntityClassInfo(void)::g_EntityCGameEndClassInfo,
      "CGameEnd",
      "game_end",
      0,
      &CRulePointEntity::GetEntityClassInfo(void)::g_EntityCRulePointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGameEnd::GetEntityClassInfo(void)::g_EntityCGameEndClassInfo);
  }
  CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass.m_pClassInfo = &CGameEnd::GetEntityClassInfo(void)::g_EntityCGameEndClassInfo;
  CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass.m_pBaseClassInfo = CGameEnd::GetEntityClassInfo(void)::g_EntityCGameEndClassInfo.m_pBaseClassInfo;
  g_pEntityCGameEndClass = &CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass;
  CGameEnd::GetEntityClassInfo(void)::g_EntityCGameEndClassInfo.m_pClass = &CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass;
  CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCGameEndClass->m_pComponentOverrides = 0;
  return &CGameEnd::GetEntityClassInternal(void)::g_EntityCGameEndClass;
}


// CGameEnd::GetDataDescMap  (line 222, @0x0000000002283da0, libserver.so)
// globals: CGameEnd::m_DataMap
datamap_t *__fastcall CGameEnd::GetDataDescMap(CGameEnd *const this)
{
  return &CGameEnd::m_DataMap;
}


// CGameEnd::AddDatadescMetadataKeys  (line 222, @0x0000000002296280, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CGameEnd::GetEntityClass(void)
void __fastcall CGameEnd::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CGameEnd::GetEntityClass);
}


// CGameEnd::GetBaseMap  (line 222, @0x00000000022962a0, libserver.so)
// globals: CRulePointEntity::m_DataMap
datamap_t *__cdecl CGameEnd::GetBaseMap()
{
  return &CRulePointEntity::m_DataMap;
}


// DataMapInit<CGameEnd>  (line 222, @0x00000000022962b0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CGameEnd"
// globals: `guard variable for'DataMapInit<CGameEnd>(CGameEnd *)::nameHolder, CRulePointEntity::m_DataMap, CGameEnd::GetEntityClass(void), CGameEnd::m_DataMap, DataMapInit<CGameEnd>(CGameEnd *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGameEnd>(CGameEnd *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CGameEnd>(CGameEnd *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGameEnd>(CGameEnd *)::nameHolder) != 0 )
  {
    DataMapInit<CGameEnd>(CGameEnd *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGameEnd>(CGameEnd *)::nameHolder.m_pszBase = "CGameEnd";
    DataMapInit<CGameEnd>(CGameEnd *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGameEnd>(CGameEnd *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGameEnd>(CGameEnd *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGameEnd>(CGameEnd *)::nameHolder.m_nLenBase = 8;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGameEnd>(CGameEnd *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGameEnd>(CGameEnd *)::nameHolder,
      &_dso_handle);
  }
  CGameEnd::m_DataMap.dataNumFields = 1;
  CGameEnd::m_DataMap.baseMap = &CRulePointEntity::m_DataMap;
  CGameEnd::m_DataMap.dataDesc = &DataMapInit<CGameEnd>(CGameEnd *)::dataDesc[1];
  AddDatadescMetadataKeys(&CGameEnd::m_DataMap, CGameEnd::GetEntityClass);
  return &CGameEnd::m_DataMap;
}


// CGameEnd::InputGameEnd  (line 230, @0x0000000002283db0, libserver.so)
void __fastcall CGameEnd::InputGameEnd(CGameEnd *const this, inputdata_t *const inputdata)
{
  (*(g_pGameRules->_vptr_CGameRules + 128))(g_pGameRules, inputdata);
}


// CGameEnd::Use  (line 235, @0x0000000002295e60, libserver.so)
// calls: CRuleEntity::CanFireForActivator
void __fastcall CGameEnd::Use(
        CGameEnd *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  if ( CRuleEntity::CanFireForActivator(this, pActivator) )
    (*(g_pGameRules->_vptr_CGameRules + 128))(g_pGameRules);
}


// hudtextparms_t::AddDatadescMetadataKeys  (line 250, @0x0000000002296380, libserver.so)
void __fastcall hudtextparms_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// hudtextparms_t::GetBaseMap  (line 250, @0x0000000002296390, libserver.so)
datamap_t *__cdecl hudtextparms_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<hudtextparms_t>  (line 250, @0x00000000022963a0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "hudtextparms_t"
// globals: `guard variable for'DataMapInit<hudtextparms_t>(hudtextparms_t *)::nameHolder, hudtextparms_t::m_DataMap, DataMapInit<hudtextparms_t>(hudtextparms_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<hudtextparms_t>(hudtextparms_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<hudtextparms_t>(hudtextparms_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<hudtextparms_t>(hudtextparms_t *)::nameHolder) != 0 )
  {
    DataMapInit<hudtextparms_t>(hudtextparms_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<hudtextparms_t>(hudtextparms_t *)::nameHolder.m_pszBase = "hudtextparms_t";
    DataMapInit<hudtextparms_t>(hudtextparms_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<hudtextparms_t>(hudtextparms_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<hudtextparms_t>(hudtextparms_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<hudtextparms_t>(hudtextparms_t *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<hudtextparms_t>(hudtextparms_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<hudtextparms_t>(hudtextparms_t *)::nameHolder,
      &_dso_handle);
  }
  hudtextparms_t::m_DataMap.baseMap = 0;
  hudtextparms_t::m_DataMap.dataDesc = &DataMapInit<hudtextparms_t>(hudtextparms_t *)::dataDesc[1];
  hudtextparms_t::m_DataMap.dataNumFields = 10;
  return &hudtextparms_t::m_DataMap;
}


// CGameText::~CGameText  (line 263, @0x00000000022a9cd0, libserver.so)  // inlines: ~CRuleEntity, ~CRulePointEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CGameText::~CGameText(CGameText *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CGameText::~CGameText  (line 263, @0x00000000022a9cf0, libserver.so)  // inlines: ~CGameText, ~CRuleEntity, ~CRulePointEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CGameText::~CGameText(CGameText *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CGameText::GetEntityClass  (line 265, @0x00000000022a63f0, libserver.so)
CEntityClass *__cdecl CGameText::GetEntityClass()
{
  return g_pEntityCGameTextClass;
}


// CGameText::Schema_DynamicBinding  (line 265, @0x00000000022a6400, libserver.so)
// globals: CGameText::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGameText::Schema_DynamicBinding(const CGameText *const this)
{
  return CGameText::s_pSchemaBinding;
}


// CGameText::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 265, @0x00000000022a6410, libserver.so)
// globals: CGameText::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGameText::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGameText::CEntityInstanceEntityClass *const this)
{
  return CGameText::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGameText::CEntityInstanceEntityClass::DestructInstance  (line 265, @0x00000000022a6420, libserver.so)  // inlines: Destruct<CGameText>
void __fastcall CGameText::CEntityInstanceEntityClass::DestructInstance(
        CGameText::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGameText::CEntityInstanceEntityClass::FreeInstance  (line 265, @0x00000000022a6440, libserver.so)
void __fastcall CGameText::CEntityInstanceEntityClass::FreeInstance(
        CGameText::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGameText::CEntityInstanceEntityClass::CanAllocate  (line 265, @0x00000000022a6460, libserver.so)
bool __fastcall CGameText::CEntityInstanceEntityClass::CanAllocate(
        const CGameText::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGameText::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 265, @0x00000000022a6470, libserver.so)
// globals: CGameText::s_pSchemaBinding
const ISchemaBinding *__fastcall CGameText::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGameText::CEntityInstanceEntityClass *const this)
{
  return CGameText::s_pSchemaBinding;
}


// CGameText::CEntityInstanceEntityClass::AllocateInstance  (line 265, @0x00000000022a85c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGameText::CEntityInstanceEntityClass::AllocateInstance(
        CGameText::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1216);
  memset(v1, 0, 0x4C0u);
  return v1;
}


// CGameText::CEntityInstanceEntityClass::ConstructInstance  (line 265, @0x00000000022a90c0, libserver.so)  // inlines: CGameText, CRuleEntity, CRulePointEntity, CUtlSymbolLarge, Color, Construct<CGameText>, hudtextparms_t
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CGameText::CEntityInstanceEntityClass::ConstructInstance(
        CGameText::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 144) = 0;
    *p = &off_40684D0;
    *(p + 146) = 0;
    *(p + 294) = 0;
    *(p + 295) = 0;
  }
  return p;
}


// CGameText::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 265, @0x00000000022ab2c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGameText::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameText::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CGameText::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 265, @0x00000000022ab2e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGameText::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameText::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGameText::GetEntityClassInternal  (line 265, @0x00000000022b3450, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CRulePointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "game_text", "CGameText"
// globals: `guard variable for'CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass, CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass, __dso_handle, CGameText::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGameText::GetEntityClassInfo(void)::g_EntityCGameTextClassInfo, CGameText::GetEntityClassInfo(void)::g_EntityCGameTextClassInfo
CEntityClass *__cdecl CGameText::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass) != 0 )
  {
    CEntityClass::CEntityClass(&CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass);
    CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass._vptr_CEntityClass = off_4068450;
    __cxa_guard_release(&`guard variable for'CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass);
    __cxa_atexit(
      CGameText::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass,
      &_dso_handle);
  }
  if ( g_pEntityCGameTextClass != 0 )
    return &CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass;
  if ( `guard variable for'CGameText::GetEntityClassInfo(void)::g_EntityCGameTextClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGameText::GetEntityClassInfo(void)::g_EntityCGameTextClassInfo) != 0 )
  {
    EntityClassInfo = CRulePointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGameText::GetEntityClassInfo(void)::g_EntityCGameTextClassInfo,
      "CGameText",
      "game_text",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGameText::GetEntityClassInfo(void)::g_EntityCGameTextClassInfo);
  }
  CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass.m_pClassInfo = &CGameText::GetEntityClassInfo(void)::g_EntityCGameTextClassInfo;
  CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass.m_pBaseClassInfo = CGameText::GetEntityClassInfo(void)::g_EntityCGameTextClassInfo.m_pBaseClassInfo;
  g_pEntityCGameTextClass = &CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass;
  CGameText::GetEntityClassInfo(void)::g_EntityCGameTextClassInfo.m_pClass = &CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass;
  CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCGameTextClass->m_pComponentOverrides = 0;
  return &CGameText::GetEntityClassInternal(void)::g_EntityCGameTextClass;
}


// CGameText::Use  (line 284, @0x00000000022b35a0, libserver.so)
// calls: CGameText::Display
void __fastcall CGameText::Use(
        CGameText *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  CGameText::Display(this, pActivator);
}


// CGameText::GetDataDescMap  (line 297, @0x0000000002283dd0, libserver.so)
// globals: CGameText::m_DataMap
datamap_t *__fastcall CGameText::GetDataDescMap(CGameText *const this)
{
  return &CGameText::m_DataMap;
}


// CGameText::AddDatadescMetadataKeys  (line 297, @0x0000000002296460, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CGameText::GetEntityClass(void)
void __fastcall CGameText::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CGameText::GetEntityClass);
}


// CGameText::GetBaseMap  (line 297, @0x0000000002296480, libserver.so)
// globals: CRulePointEntity::m_DataMap
datamap_t *__cdecl CGameText::GetBaseMap()
{
  return &CRulePointEntity::m_DataMap;
}


// DataMapInit<CGameText>  (line 297, @0x0000000002296490, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CGameText"
// globals: `guard variable for'DataMapInit<CGameText>(CGameText *)::nameHolder, CRulePointEntity::m_DataMap, CGameText::GetEntityClass(void), CGameText::m_DataMap, DataMapInit<CGameText>(CGameText *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGameText>(CGameText *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CGameText>(CGameText *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGameText>(CGameText *)::nameHolder) != 0 )
  {
    DataMapInit<CGameText>(CGameText *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGameText>(CGameText *)::nameHolder.m_pszBase = "CGameText";
    DataMapInit<CGameText>(CGameText *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGameText>(CGameText *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGameText>(CGameText *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGameText>(CGameText *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGameText>(CGameText *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGameText>(CGameText *)::nameHolder,
      &_dso_handle);
  }
  CGameText::m_DataMap.dataNumFields = 4;
  CGameText::m_DataMap.baseMap = &CRulePointEntity::m_DataMap;
  CGameText::m_DataMap.dataDesc = &DataMapInit<CGameText>(CGameText *)::dataDesc[1];
  AddDatadescMetadataKeys(&CGameText::m_DataMap, CGameText::GetEntityClass);
  return &CGameText::m_DataMap;
}


// CGameText::Spawn  (line 311, @0x000000000228b4c0, libserver.so)  // inlines: AssignTo, Base, Color, Element, FindKeyHash, FromUint32, Get<Color>, GetValue, GetValue<Color>, SetRawColor, operator=, operator[]
// calls: CRulePointEntity::Spawn, CEntityKeyValues::HasValue, VariantFieldTypeName, Warning, V_StringToColor, __stack_chk_fail
// strings: "No free conversion of %s variant to Color right now\n"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CGameText::Spawn(CGameText *const this, const CEntityKeyValues *pKeyValues)
{
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rdx
  __int64 m_nAllocated; // rcx
  __int64 v6; // r8
  int m_nCount; // esi
  __int64 v8; // rax
  Color v9; // r13d
  CEntityVariant *p_m_value; // rax
  int16 m_type; // di
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  const char *v15; // rax
  int v16; // esi
  __int64 v17; // rax
  Color m_int; // ebx
  CEntityVariant *v19; // rax
  int16 v20; // di
  const char *v21; // rax
  Color v22; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  CRulePointEntity::Spawn(this, pKeyValues);
  if ( !CEntityKeyValues::HasValue(pKeyValues, 189329514) )
    goto LABEL_14;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_16:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    v9 = 0;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 9 )
      goto LABEL_13;
    goto LABEL_17;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v8 = 0;
  while ( m_nAllocated == 0 )
  {
    m_pElements = 0;
    if ( *(4 * v8) == 189329514 )
      goto LABEL_10;
LABEL_7:
    if ( m_nCount <= ++v8 )
      goto LABEL_16;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( *(&m_pElements->m_value.m_int + v8) != 189329514 )
    goto LABEL_7;
LABEL_10:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    m_pElements = pKeyValues->m_keyValues.m_pElements;
  else
    m_pElements = 0;
  v9 = 0;
  p_m_value = &m_pElements[v8].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 9 )
  {
LABEL_13:
    this->m_textParms.color1 = p_m_value->m_int;
    goto LABEL_14;
  }
LABEL_17:
  if ( m_type == 30 )
  {
    v22 = 0;
    V_StringToColor(&v22, p_m_value->m_uint64, m_pElements, m_nAllocated, v6);
    v9 = v22;
  }
  else
  {
    v15 = VariantFieldTypeName(m_type);
    Warning("No free conversion of %s variant to Color right now\n", v15);
  }
  this->m_textParms.color1 = v9;
LABEL_14:
  if ( !CEntityKeyValues::HasValue(pKeyValues, -1806419857) )
    return;
  v16 = pKeyValues->m_keyHashes.m_nCount;
  if ( v16 <= 0 )
  {
LABEL_33:
    v19 = &CEntityKeyValues::sm_EmptyVariant;
    m_int = 0;
    v20 = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( v20 == 9 )
      goto LABEL_31;
    goto LABEL_34;
  }
  v13 = pKeyValues->m_keyHashes.m_nAllocated;
  v17 = 0;
  while ( 2 )
  {
    if ( v13 == 0 )
    {
      v12 = 0;
      if ( *(4 * v17) == -1806419857 )
        break;
      goto LABEL_25;
    }
    v12 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v13 > 9 )
      v12 = pKeyValues->m_keyHashes.m_pElements;
    if ( *(&v12->m_value.m_int + v17) != -1806419857 )
    {
LABEL_25:
      if ( v16 <= ++v17 )
        goto LABEL_33;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v12 = pKeyValues->m_keyValues.m_pElements;
  else
    v12 = 0;
  m_int = 0;
  v19 = &v12[v17].m_value;
  v20 = v19->m_type;
  if ( v20 == 9 )
  {
LABEL_31:
    m_int = v19->m_int;
    goto LABEL_36;
  }
LABEL_34:
  if ( v20 == 30 )
  {
    v22 = 0;
    V_StringToColor(&v22, v19->m_uint64, v12, v13, v14);
    m_int = v22;
  }
  else
  {
    v21 = VariantFieldTypeName(v20);
    Warning("No free conversion of %s variant to Color right now\n", v21);
  }
LABEL_36:
  this->m_textParms.color2 = m_int;
}


// CGameText::InputDisplay  (line 329, @0x0000000002296680, libserver.so)
// calls: CGameText::Display
void __fastcall CGameText::InputDisplay(CGameText *const this, inputdata_t *const inputdata)
{
  CGameText::Display(this, inputdata->pActivator);
}


// CGameText::Display  (line 334, @0x0000000002296560, libserver.so)  // inlines: MessageGet, String, ToBasePlayer, ToCStr
// calls: CRuleEntity::CanFireForActivator, UTIL_HudMessage, UTIL_HudMessageAll, UTIL_GetLocalPlayer
// callers: CGameText::Use, CGameText::InputDisplay
void __fastcall CGameText::Display(CGameText *const this, CBaseEntity *pActivator)
{
  const char *v4; // r13
  char v5; // al
  CBasePlayer *v6; // rdi
  const char *v7; // rdx
  hudtextparms_t *p_m_textParms; // rsi
  const char *m_pAsString; // rsi
  CBasePlayer *LocalPlayer; // rax

  if ( CRuleEntity::CanFireForActivator(this, pActivator) )
  {
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
    {
      m_pAsString = "";
      if ( this->m_iszMessage.u.m_Id != 0 )
        m_pAsString = this->m_iszMessage.u.m_pAsString;
      UTIL_HudMessageAll(&this->m_textParms, m_pAsString);
    }
    else
    {
      if ( gpGlobals->maxClients == 1 )
      {
        LocalPlayer = UTIL_GetLocalPlayer();
        v7 = "";
        if ( this->m_iszMessage.u.m_Id != 0 )
          v7 = this->m_iszMessage.u.m_pAsString;
        p_m_textParms = &this->m_textParms;
        v6 = LocalPlayer;
        goto LABEL_10;
      }
      if ( pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 100))(pActivator) != 0 )
      {
        v4 = "";
        if ( this->m_iszMessage.u.m_Id != 0 )
          v4 = this->m_iszMessage.u.m_pAsString;
        v5 = (*(pActivator->_vptr_IHandleEntity + 140))(pActivator);
        v6 = 0;
        v7 = v4;
        p_m_textParms = &this->m_textParms;
        if ( v5 != 0 )
          v6 = pActivator;
LABEL_10:
        UTIL_HudMessage(v6, p_m_textParms, v7);
      }
    }
  }
}


// CGameText::InputSetText  (line 359, @0x000000000228b990, libserver.so)  // inlines: AssignTo, SetText, TempString, ToString, operator=
// calls: AllocPooledString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_228B9C1, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CGameText::InputSetText(CGameText *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8
  UtlSymLargeId_t v8[4]; // [rsp+10h] [rbp-20h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_15;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_15;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  AllocPooledString(v8, m_pszString);
  this->m_iszMessage.u.m_Id = v8[0];
}


// CGameText::SetText  (line 364, @0x0000000002296690, libserver.so)  // inlines: operator=
// calls: AllocPooledString
void __fastcall CGameText::SetText(CGameText *const this, const char *pszStr)
{
  UtlSymLargeId_t v3[4]; // [rsp+0h] [rbp-20h] BYREF

  AllocPooledString(v3, pszStr);
  this->m_iszMessage.u.m_Id = v3[0];
}


// CGamePlayerZone::~CGamePlayerZone  (line 374, @0x00000000022a9e10, libserver.so)  // inlines: ~CRuleBrushEntity, ~CRuleEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CGamePlayerZone::~CGamePlayerZone(CGamePlayerZone *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CGamePlayerZone::~CGamePlayerZone  (line 374, @0x00000000022a9e30, libserver.so)  // inlines: ~CGamePlayerZone, ~CRuleBrushEntity, ~CRuleEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CGamePlayerZone::~CGamePlayerZone(CGamePlayerZone *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CGamePlayerZone::GetEntityClass  (line 376, @0x00000000022a6480, libserver.so)
CEntityClass *__cdecl CGamePlayerZone::GetEntityClass()
{
  return g_pEntityCGamePlayerZoneClass;
}


// CGamePlayerZone::Schema_DynamicBinding  (line 376, @0x00000000022a6490, libserver.so)
// globals: CGamePlayerZone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGamePlayerZone::Schema_DynamicBinding(const CGamePlayerZone *const this)
{
  return CGamePlayerZone::s_pSchemaBinding;
}


// CGamePlayerZone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 376, @0x00000000022a64a0, libserver.so)
// globals: CGamePlayerZone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGamePlayerZone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGamePlayerZone::CEntityInstanceEntityClass *const this)
{
  return CGamePlayerZone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGamePlayerZone::CEntityInstanceEntityClass::DestructInstance  (line 376, @0x00000000022a64b0, libserver.so)  // inlines: Destruct<CGamePlayerZone>
void __fastcall CGamePlayerZone::CEntityInstanceEntityClass::DestructInstance(
        CGamePlayerZone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGamePlayerZone::CEntityInstanceEntityClass::FreeInstance  (line 376, @0x00000000022a64d0, libserver.so)
void __fastcall CGamePlayerZone::CEntityInstanceEntityClass::FreeInstance(
        CGamePlayerZone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGamePlayerZone::CEntityInstanceEntityClass::CanAllocate  (line 376, @0x00000000022a64f0, libserver.so)
bool __fastcall CGamePlayerZone::CEntityInstanceEntityClass::CanAllocate(
        const CGamePlayerZone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGamePlayerZone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 376, @0x00000000022a6500, libserver.so)
// globals: CGamePlayerZone::s_pSchemaBinding
const ISchemaBinding *__fastcall CGamePlayerZone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGamePlayerZone::CEntityInstanceEntityClass *const this)
{
  return CGamePlayerZone::s_pSchemaBinding;
}


// CGamePlayerZone::CEntityInstanceEntityClass::AllocateInstance  (line 376, @0x00000000022a8600, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGamePlayerZone::CEntityInstanceEntityClass::AllocateInstance(
        CGamePlayerZone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1272);
  memset(v1, 0, 0x4F8u);
  return v1;
}


// CGamePlayerZone::CEntityInstanceEntityClass::ConstructInstance  (line 376, @0x00000000022a9120, libserver.so)  // inlines: CEntityIOOutput, CEntityOutputTemplate, CGamePlayerZone, CRuleBrushEntity, CRuleEntity, CUtlSymbolLarge, Construct<CGamePlayerZone>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CGamePlayerZone::CEntityInstanceEntityClass::ConstructInstance(
        CGamePlayerZone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 144) = 0;
    *p = &off_4068C10;
    *(p + 145) = off_3F7C190;
    *(p + 148) = off_3F7C190;
    *(p + 151) = off_405CAB0;
    *(p + 155) = off_405CAB0;
  }
  return p;
}


// CGamePlayerZone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 376, @0x00000000022ab400, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGamePlayerZone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGamePlayerZone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CGamePlayerZone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 376, @0x00000000022ab420, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGamePlayerZone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGamePlayerZone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGamePlayerZone::GetEntityClassInternal  (line 376, @0x00000000022b35b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CRuleBrushEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "game_zone_player", "CGamePlayerZone"
// globals: `guard variable for'CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass, CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass, __dso_handle, CGamePlayerZone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGamePlayerZone::GetEntityClassInfo(void)::g_EntityCGamePlayerZoneClassInfo, CGamePlayerZone::GetEntityClassInfo(void)::g_EntityCGamePlayerZoneClassInfo
CEntityClass *__cdecl CGamePlayerZone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass);
    CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass._vptr_CEntityClass = off_4068B90;
    __cxa_guard_release(&`guard variable for'CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass);
    __cxa_atexit(
      CGamePlayerZone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass,
      &_dso_handle);
  }
  if ( g_pEntityCGamePlayerZoneClass != 0 )
    return &CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass;
  if ( `guard variable for'CGamePlayerZone::GetEntityClassInfo(void)::g_EntityCGamePlayerZoneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGamePlayerZone::GetEntityClassInfo(void)::g_EntityCGamePlayerZoneClassInfo) != 0 )
  {
    EntityClassInfo = CRuleBrushEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGamePlayerZone::GetEntityClassInfo(void)::g_EntityCGamePlayerZoneClassInfo,
      "CGamePlayerZone",
      "game_zone_player",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGamePlayerZone::GetEntityClassInfo(void)::g_EntityCGamePlayerZoneClassInfo);
  }
  CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass.m_pClassInfo = &CGamePlayerZone::GetEntityClassInfo(void)::g_EntityCGamePlayerZoneClassInfo;
  CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass.m_pBaseClassInfo = CGamePlayerZone::GetEntityClassInfo(void)::g_EntityCGamePlayerZoneClassInfo.m_pBaseClassInfo;
  g_pEntityCGamePlayerZoneClass = &CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass;
  CGamePlayerZone::GetEntityClassInfo(void)::g_EntityCGamePlayerZoneClassInfo.m_pClass = &CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass;
  CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCGamePlayerZoneClass->m_pComponentOverrides = 0;
  return &CGamePlayerZone::GetEntityClassInternal(void)::g_EntityCGamePlayerZoneClass;
}


// CGamePlayerZone::GetDataDescMap  (line 391, @0x0000000002283de0, libserver.so)
// globals: CGamePlayerZone::m_DataMap
datamap_t *__fastcall CGamePlayerZone::GetDataDescMap(CGamePlayerZone *const this)
{
  return &CGamePlayerZone::m_DataMap;
}


// CGamePlayerZone::AddDatadescMetadataKeys  (line 391, @0x00000000022966c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CGamePlayerZone::GetEntityClass(void)
void __fastcall CGamePlayerZone::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CGamePlayerZone::GetEntityClass);
}


// CGamePlayerZone::GetBaseMap  (line 391, @0x00000000022966e0, libserver.so)
// globals: CRuleBrushEntity::m_DataMap
datamap_t *__cdecl CGamePlayerZone::GetBaseMap()
{
  return &CRuleBrushEntity::m_DataMap;
}


// DataMapInit<CGamePlayerZone>  (line 391, @0x00000000022966f0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CGamePlayerZone"
// globals: `guard variable for'DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::nameHolder, `guard variable for'DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::dataDesc, CRuleBrushEntity::m_DataMap, CGamePlayerZone::GetEntityClass(void), CGamePlayerZone::m_DataMap, DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGamePlayerZone>(CGamePlayerZone *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::nameHolder) != 0 )
  {
    DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::nameHolder.m_pszBase = "CGamePlayerZone";
    DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::nameHolder,
      &_dso_handle);
  }
  CGamePlayerZone::m_DataMap.baseMap = &CRuleBrushEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::dataDesc) != 0 )
  {
    DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::dataDesc[2].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::dataDesc[3].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::dataDesc[4].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::dataDesc[5].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::dataDesc);
  }
  CGamePlayerZone::m_DataMap.dataNumFields = 5;
  CGamePlayerZone::m_DataMap.dataDesc = &DataMapInit<CGamePlayerZone>(CGamePlayerZone *)::dataDesc[1];
  AddDatadescMetadataKeys(&CGamePlayerZone::m_DataMap, CGamePlayerZone::GetEntityClass);
  return &CGamePlayerZone::m_DataMap;
}


// CGamePlayerZone::InputCountPlayersInZone  (line 410, @0x000000000229efa0, libserver.so)  // inlines: CGameTrace, CVariantBase, FireOutput, FireOutput<int>, Free, RnCollisionAttr_t, Set, ~CVariantBase
// calls: CRuleEntity::CanFireForActivator, CEntityIOOutput::FireOutputInternal, UTIL_PlayerByIndex, CGameTrace::Init, NAI_Hull::Maxs, NAI_Hull::Mins, CBaseEntity::GetAbsOrigin, UTIL_TraceModel, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CGamePlayerZone::InputCountPlayersInZone(CGamePlayerZone *const this, inputdata_t *const inputdata)
{
  int v3; // r12d
  CBasePlayer *v4; // rbx
  _BOOL4 v5; // r14d
  const Vector *v6; // r14
  const Vector *AbsOrigin; // rax
  CBaseEntity *pActivator; // rsi
  CBaseEntity *v9; // rsi
  vec_t playersOutCount; // [rsp+28h] [rbp-118h]
  vec_t playersInCount; // [rsp+2Ch] [rbp-114h]
  Vector *hullMax; // [rsp+38h] [rbp-108h]
  Vector *vecEnd; // [rsp+40h] [rbp-100h]
  CVariant v15; // [rsp+50h] [rbp-F0h] BYREF
  trace_t trace; // [rsp+60h] [rbp-E0h] BYREF

  if ( CRuleEntity::CanFireForActivator(this, inputdata->pActivator) )
  {
    if ( gpGlobals->maxClients > 0 )
    {
      v3 = 1;
      playersOutCount = 0.0;
      playersInCount = 0.0;
      while ( 1 )
      {
        v4 = UTIL_PlayerByIndex(v3);
        if ( v4 == 0 )
          goto LABEL_6;
        memset(&trace.m_ShapeAttributes, 0, 31);
        trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
        CGameTrace::Init(&trace);
        v5 = (v4->m_fFlags.m_Value & 2) != 0;
        hullMax = NAI_Hull::Maxs(v5);
        v6 = NAI_Hull::Mins(v5);
        vecEnd = CBaseEntity::GetAbsOrigin(v4);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
        UTIL_TraceModel(AbsOrigin, vecEnd, v6, hullMax, this, 4, &trace);
        if ( trace.startsolid )
        {
          v15.m_type = 0;
          ++LODWORD(playersInCount);
          v15.m_flags = 0;
          v15.m_uint64 = 0;
          CEntityIOOutput::FireOutputInternal(&this->m_OnPlayerInZone, v4, this, &v15, 0.0);
          if ( (v15.m_flags & 1) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v15.m_uint64);
          goto LABEL_6;
        }
        ++LODWORD(playersOutCount);
        v15.m_type = 0;
        v15.m_flags = 0;
        v15.m_uint64 = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnPlayerOutZone, v4, this, &v15, 0.0);
        if ( (v15.m_flags & 1) != 0 )
        {
          ++v3;
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v15.m_uint64);
          if ( gpGlobals->maxClients < v3 )
            goto LABEL_11;
        }
        else
        {
LABEL_6:
          if ( gpGlobals->maxClients < ++v3 )
            goto LABEL_11;
        }
      }
    }
    playersOutCount = 0.0;
    playersInCount = 0.0;
LABEL_11:
    LODWORD(trace.startpos.z) = 5;
    pActivator = inputdata->pActivator;
    *&this->m_PlayersInCount.m_Value = playersInCount;
    trace.startpos.x = playersInCount;
    CEntityIOOutput::FireOutputInternal(&this->m_PlayersInCount, pActivator, this, &trace, 0.0);
    if ( (BYTE2(trace.startpos.z) & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&trace.startpos.x);
    LODWORD(trace.startpos.z) = 5;
    v9 = inputdata->pActivator;
    *&this->m_PlayersOutCount.m_Value = playersOutCount;
    trace.startpos.x = playersOutCount;
    CEntityIOOutput::FireOutputInternal(&this->m_PlayersOutCount, v9, this, &trace, 0.0);
    if ( (BYTE2(trace.startpos.z) & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&trace.startpos.x);
  }
}


// CGamePlayerEquip::~CGamePlayerEquip  (line 462, @0x00000000022a9d20, libserver.so)  // inlines: ~CRuleEntity, ~CRulePointEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CGamePlayerEquip::~CGamePlayerEquip(CGamePlayerEquip *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CGamePlayerEquip::~CGamePlayerEquip  (line 462, @0x00000000022a9d40, libserver.so)  // inlines: ~CGamePlayerEquip, ~CRuleEntity, ~CRulePointEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CGamePlayerEquip::~CGamePlayerEquip(CGamePlayerEquip *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CGamePlayerEquip::GetEntityClass  (line 464, @0x00000000022a6510, libserver.so)
CEntityClass *__cdecl CGamePlayerEquip::GetEntityClass()
{
  return g_pEntityCGamePlayerEquipClass;
}


// CGamePlayerEquip::Schema_DynamicBinding  (line 464, @0x00000000022a6520, libserver.so)
// globals: CGamePlayerEquip::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGamePlayerEquip::Schema_DynamicBinding(const CGamePlayerEquip *const this)
{
  return CGamePlayerEquip::s_pSchemaBinding;
}


// CGamePlayerEquip::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 464, @0x00000000022a6530, libserver.so)
// globals: CGamePlayerEquip::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGamePlayerEquip::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGamePlayerEquip::CEntityInstanceEntityClass *const this)
{
  return CGamePlayerEquip::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGamePlayerEquip::CEntityInstanceEntityClass::DestructInstance  (line 464, @0x00000000022a6540, libserver.so)  // inlines: Destruct<CGamePlayerEquip>
void __fastcall CGamePlayerEquip::CEntityInstanceEntityClass::DestructInstance(
        CGamePlayerEquip::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGamePlayerEquip::CEntityInstanceEntityClass::FreeInstance  (line 464, @0x00000000022a6560, libserver.so)
void __fastcall CGamePlayerEquip::CEntityInstanceEntityClass::FreeInstance(
        CGamePlayerEquip::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGamePlayerEquip::CEntityInstanceEntityClass::CanAllocate  (line 464, @0x00000000022a6580, libserver.so)
bool __fastcall CGamePlayerEquip::CEntityInstanceEntityClass::CanAllocate(
        const CGamePlayerEquip::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGamePlayerEquip::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 464, @0x00000000022a6590, libserver.so)
// globals: CGamePlayerEquip::s_pSchemaBinding
const ISchemaBinding *__fastcall CGamePlayerEquip::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGamePlayerEquip::CEntityInstanceEntityClass *const this)
{
  return CGamePlayerEquip::s_pSchemaBinding;
}


// CGamePlayerEquip::CEntityInstanceEntityClass::AllocateInstance  (line 464, @0x00000000022a8640, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGamePlayerEquip::CEntityInstanceEntityClass::AllocateInstance(
        CGamePlayerEquip::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1552);
  memset(v1, 0, 0x610u);
  return v1;
}


// CGamePlayerEquip::CEntityInstanceEntityClass::ConstructInstance  (line 464, @0x00000000022aa230, libserver.so)  // inlines: CGamePlayerEquip, CRuleEntity, CRulePointEntity, CUtlSymbolLarge, Construct<CGamePlayerEquip>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CGamePlayerEquip::CEntityInstanceEntityClass::ConstructInstance(
        CGamePlayerEquip::CEntityInstanceEntityClass *const this,
        void *p)
{
  _QWORD *v3; // rdx

  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 144) = 0;
    *p = &off_4069350;
    v3 = p + 1168;
    do
      *v3++ = 0;
    while ( v3 != (p + 1424) );
  }
  return p;
}


// CGamePlayerEquip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 464, @0x00000000022ab310, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGamePlayerEquip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGamePlayerEquip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CGamePlayerEquip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 464, @0x00000000022ab330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGamePlayerEquip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGamePlayerEquip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGamePlayerEquip::GetEntityClassInternal  (line 464, @0x00000000022b3700, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CRulePointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "game_player_equip", "CGamePlayerEquip"
// globals: `guard variable for'CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass, CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass, __dso_handle, CGamePlayerEquip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGamePlayerEquip::GetEntityClassInfo(void)::g_EntityCGamePlayerEquipClassInfo, CGamePlayerEquip::GetEntityClassInfo(void)::g_EntityCGamePlayerEquipClassInfo
CEntityClass *__cdecl CGamePlayerEquip::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass) != 0 )
  {
    CEntityClass::CEntityClass(&CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass);
    CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass._vptr_CEntityClass = off_40692D0;
    __cxa_guard_release(&`guard variable for'CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass);
    __cxa_atexit(
      CGamePlayerEquip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass,
      &_dso_handle);
  }
  if ( g_pEntityCGamePlayerEquipClass != 0 )
    return &CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass;
  if ( `guard variable for'CGamePlayerEquip::GetEntityClassInfo(void)::g_EntityCGamePlayerEquipClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGamePlayerEquip::GetEntityClassInfo(void)::g_EntityCGamePlayerEquipClassInfo) != 0 )
  {
    EntityClassInfo = CRulePointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGamePlayerEquip::GetEntityClassInfo(void)::g_EntityCGamePlayerEquipClassInfo,
      "CGamePlayerEquip",
      "game_player_equip",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGamePlayerEquip::GetEntityClassInfo(void)::g_EntityCGamePlayerEquipClassInfo);
  }
  CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass.m_pClassInfo = &CGamePlayerEquip::GetEntityClassInfo(void)::g_EntityCGamePlayerEquipClassInfo;
  CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass.m_pBaseClassInfo = CGamePlayerEquip::GetEntityClassInfo(void)::g_EntityCGamePlayerEquipClassInfo.m_pBaseClassInfo;
  g_pEntityCGamePlayerEquipClass = &CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass;
  CGamePlayerEquip::GetEntityClassInfo(void)::g_EntityCGamePlayerEquipClassInfo.m_pClass = &CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass;
  CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCGamePlayerEquipClass->m_pComponentOverrides = 0;
  return &CGamePlayerEquip::GetEntityClassInternal(void)::g_EntityCGamePlayerEquipClass;
}


// CGamePlayerEquip::GetDataDescMap  (line 486, @0x0000000002283df0, libserver.so)
// globals: CGamePlayerEquip::m_DataMap
datamap_t *__fastcall CGamePlayerEquip::GetDataDescMap(CGamePlayerEquip *const this)
{
  return &CGamePlayerEquip::m_DataMap;
}


// CGamePlayerEquip::AddDatadescMetadataKeys  (line 486, @0x0000000002296820, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CGamePlayerEquip::GetEntityClass(void)
void __fastcall CGamePlayerEquip::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CGamePlayerEquip::GetEntityClass);
}


// CGamePlayerEquip::GetBaseMap  (line 486, @0x0000000002296840, libserver.so)
// globals: CRulePointEntity::m_DataMap
datamap_t *__cdecl CGamePlayerEquip::GetBaseMap()
{
  return &CRulePointEntity::m_DataMap;
}


// DataMapInit<CGamePlayerEquip>  (line 486, @0x0000000002296850, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CGamePlayerEquip"
// globals: `guard variable for'DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *)::nameHolder, CRulePointEntity::m_DataMap, CGamePlayerEquip::GetEntityClass(void), CGamePlayerEquip::m_DataMap, DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *)::nameHolder) != 0 )
  {
    DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *)::nameHolder.m_pszBase = "CGamePlayerEquip";
    DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *)::nameHolder,
      &_dso_handle);
  }
  CGamePlayerEquip::m_DataMap.dataNumFields = 2;
  CGamePlayerEquip::m_DataMap.baseMap = &CRulePointEntity::m_DataMap;
  CGamePlayerEquip::m_DataMap.dataDesc = &DataMapInit<CGamePlayerEquip>(CGamePlayerEquip *)::dataDesc[1];
  AddDatadescMetadataKeys(&CGamePlayerEquip::m_DataMap, CGamePlayerEquip::GetEntityClass);
  return &CGamePlayerEquip::m_DataMap;
}


// CGamePlayerEquip::Spawn  (line 493, @0x00000000022850a0, libserver.so)
// calls: CCollisionProperty::EnableTouchPersistsNotification, CRulePointEntity::Spawn
void __fastcall CGamePlayerEquip::Spawn(CGamePlayerEquip *const this, const CEntityKeyValues *pKeyValues)
{
  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  CRulePointEntity::Spawn(this, pKeyValues);
}


// CGamePlayerEquip::Touch  (line 499, @0x00000000022969e0, libserver.so)
// calls: CRuleEntity::CanFireForActivator, CGamePlayerEquip::EquipPlayer
void __fastcall CGamePlayerEquip::Touch(CGamePlayerEquip *const this, CBaseEntity *pOther)
{
  if ( CRuleEntity::CanFireForActivator(this, pOther) && (this->m_spawnflags.m_Value & 1) == 0 )
    CGamePlayerEquip::EquipPlayer(this, pOther);
}


// CGamePlayerEquip::EquipPlayer  (line 510, @0x0000000002296920, libserver.so)  // inlines: String, ToCStr
// callers: CGamePlayerEquip::Use, CGamePlayerEquip::Touch
void __fastcall CGamePlayerEquip::EquipPlayer(CGamePlayerEquip *const this, CBaseEntity *pEntity)
{
  __int64 i; // r12
  int j; // ebx
  const char *m_pAsString; // rsi

  if ( pEntity != 0 && (*(pEntity->_vptr_IHandleEntity + 140))(pEntity) != 0 )
  {
    for ( i = 0; i != 32; ++i )
    {
      if ( this->m_weaponNames[i].u.m_Id == 0 )
        break;
      for ( j = 0; this->m_weaponCount[i] > j; ++j )
      {
        m_pAsString = "";
        if ( this->m_weaponNames[i].u.m_Id != 0 )
          m_pAsString = this->m_weaponNames[i].u.m_pAsString;
        (*(pEntity->_vptr_IHandleEntity + 466))(pEntity, m_pAsString, 0, 1, 0, 0);
      }
    }
  }
}


// CGamePlayerEquip::Use  (line 534, @0x00000000022969d0, libserver.so)
// calls: CGamePlayerEquip::EquipPlayer
void __fastcall CGamePlayerEquip::Use(
        CGamePlayerEquip *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  CGamePlayerEquip::EquipPlayer(this, pActivator);
}


// CGamePlayerTeam::~CGamePlayerTeam  (line 550, @0x00000000022a9d70, libserver.so)  // inlines: ~CRuleEntity, ~CRulePointEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CGamePlayerTeam::~CGamePlayerTeam(CGamePlayerTeam *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CGamePlayerTeam::~CGamePlayerTeam  (line 550, @0x00000000022a9d90, libserver.so)  // inlines: ~CGamePlayerTeam, ~CRuleEntity, ~CRulePointEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CGamePlayerTeam::~CGamePlayerTeam(CGamePlayerTeam *const this)
{
  this->_vptr_IHandleEntity = &off_4066090;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CGamePlayerTeam::Schema_DynamicBinding  (line 552, @0x00000000022a65a0, libserver.so)
// globals: CGamePlayerTeam::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGamePlayerTeam::Schema_DynamicBinding(const CGamePlayerTeam *const this)
{
  return CGamePlayerTeam::s_pSchemaBinding;
}


// CGamePlayerTeam::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 552, @0x00000000022a65b0, libserver.so)
// globals: CGamePlayerTeam::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGamePlayerTeam::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGamePlayerTeam::CEntityInstanceEntityClass *const this)
{
  return CGamePlayerTeam::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGamePlayerTeam::CEntityInstanceEntityClass::DestructInstance  (line 552, @0x00000000022a65c0, libserver.so)  // inlines: Destruct<CGamePlayerTeam>
void __fastcall CGamePlayerTeam::CEntityInstanceEntityClass::DestructInstance(
        CGamePlayerTeam::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGamePlayerTeam::CEntityInstanceEntityClass::FreeInstance  (line 552, @0x00000000022a65e0, libserver.so)
void __fastcall CGamePlayerTeam::CEntityInstanceEntityClass::FreeInstance(
        CGamePlayerTeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGamePlayerTeam::CEntityInstanceEntityClass::CanAllocate  (line 552, @0x00000000022a6600, libserver.so)
bool __fastcall CGamePlayerTeam::CEntityInstanceEntityClass::CanAllocate(
        const CGamePlayerTeam::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGamePlayerTeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 552, @0x00000000022a6610, libserver.so)
// globals: CGamePlayerTeam::s_pSchemaBinding
const ISchemaBinding *__fastcall CGamePlayerTeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGamePlayerTeam::CEntityInstanceEntityClass *const this)
{
  return CGamePlayerTeam::s_pSchemaBinding;
}


// CGamePlayerTeam::CEntityInstanceEntityClass::AllocateInstance  (line 552, @0x00000000022a8680, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGamePlayerTeam::CEntityInstanceEntityClass::AllocateInstance(
        CGamePlayerTeam::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1168);
  memset(v1, 0, 0x490u);
  return v1;
}


// CGamePlayerTeam::CEntityInstanceEntityClass::ConstructInstance  (line 552, @0x00000000022a9190, libserver.so)  // inlines: CGamePlayerTeam, CRuleEntity, CRulePointEntity, CUtlSymbolLarge, Construct<CGamePlayerTeam>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CGamePlayerTeam::CEntityInstanceEntityClass::ConstructInstance(
        CGamePlayerTeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 144) = 0;
    *p = &off_4069A90;
  }
  return p;
}


// CGamePlayerTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 552, @0x00000000022ab360, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGamePlayerTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGamePlayerTeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CGamePlayerTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 552, @0x00000000022ab380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGamePlayerTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGamePlayerTeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGamePlayerTeam::GetEntityClassInternal  (line 552, @0x00000000022b3850, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CRulePointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "game_player_team", "CGamePlayerTeam"
// globals: `guard variable for'CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass, CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass, __dso_handle, CGamePlayerTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGamePlayerTeam::GetEntityClassInfo(void)::g_EntityCGamePlayerTeamClassInfo, CGamePlayerTeam::GetEntityClassInfo(void)::g_EntityCGamePlayerTeamClassInfo
CEntityClass *__cdecl CGamePlayerTeam::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass) != 0 )
  {
    CEntityClass::CEntityClass(&CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass);
    CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass._vptr_CEntityClass = off_4069A10;
    __cxa_guard_release(&`guard variable for'CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass);
    __cxa_atexit(
      CGamePlayerTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass,
      &_dso_handle);
  }
  if ( g_pEntityCGamePlayerTeamClass != 0 )
    return &CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass;
  if ( `guard variable for'CGamePlayerTeam::GetEntityClassInfo(void)::g_EntityCGamePlayerTeamClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGamePlayerTeam::GetEntityClassInfo(void)::g_EntityCGamePlayerTeamClassInfo) != 0 )
  {
    EntityClassInfo = CRulePointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGamePlayerTeam::GetEntityClassInfo(void)::g_EntityCGamePlayerTeamClassInfo,
      "CGamePlayerTeam",
      "game_player_team",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGamePlayerTeam::GetEntityClassInfo(void)::g_EntityCGamePlayerTeamClassInfo);
  }
  CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass.m_pClassInfo = &CGamePlayerTeam::GetEntityClassInfo(void)::g_EntityCGamePlayerTeamClassInfo;
  CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass.m_pBaseClassInfo = CGamePlayerTeam::GetEntityClassInfo(void)::g_EntityCGamePlayerTeamClassInfo.m_pBaseClassInfo;
  g_pEntityCGamePlayerTeamClass = &CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass;
  CGamePlayerTeam::GetEntityClassInfo(void)::g_EntityCGamePlayerTeamClassInfo.m_pClass = &CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass;
  CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCGamePlayerTeamClass->m_pComponentOverrides = 0;
  return &CGamePlayerTeam::GetEntityClassInternal(void)::g_EntityCGamePlayerTeamClass;
}


// CGamePlayerTeam::TargetTeamName  (line 567, @0x0000000002296a20, libserver.so)  // inlines: ClassMatches, FClassnameIs
// calls: CGameEntitySystem::FindEntityByName, CEntityIdentity::ClassMatches, CBaseEntity::TeamID
// callers: CGamePlayerTeam::Use
// strings: "game_team_master"
const char *__fastcall CGamePlayerTeam::TargetTeamName(
        CGamePlayerTeam *const this,
        const char *pszTargetName,
        CBaseEntity *pActivator)
{
  CBaseEntity *v6; // rbx
  CBaseEntity *EntityByName; // rax

  v6 = 0;
  while ( 1 )
  {
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v6, pszTargetName, this, pActivator, 0, 0);
    v6 = EntityByName;
    if ( EntityByName == 0 )
      break;
    if ( CEntityIdentity::ClassMatches(EntityByName->m_pEntity, "game_team_master") )
      return CBaseEntity::TeamID(v6);
  }
  return 0;
}


// CGamePlayerTeam::Use  (line 581, @0x0000000002296ac0, libserver.so)  // inlines: ShouldGibPlayer, ShouldKillPlayer, String, ToCStr
// calls: CRuleEntity::CanFireForActivator, CGamePlayerTeam::TargetTeamName, UTIL_Remove
void __fastcall CGamePlayerTeam::Use(
        CGamePlayerTeam *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  const char *m_pAsString; // rsi
  const char *v8; // rax

  if ( CRuleEntity::CanFireForActivator(this, pActivator) )
  {
    if ( (*(pActivator->_vptr_IHandleEntity + 140))(pActivator) != 0 )
    {
      m_pAsString = "";
      if ( this->m_target.u.m_Id != 0 )
        m_pAsString = this->m_target.u.m_pAsString;
      v8 = CGamePlayerTeam::TargetTeamName(this, m_pAsString, pActivator);
      if ( v8 != 0 )
        (*(g_pGameRules->_vptr_CGameRules + 121))(
          g_pGameRules,
          pActivator,
          v8,
          (this->m_spawnflags.m_Value & 2) != 0,
          (this->m_spawnflags.m_Value & 4) != 0);
    }
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
      UTIL_Remove(this);
  }
}


