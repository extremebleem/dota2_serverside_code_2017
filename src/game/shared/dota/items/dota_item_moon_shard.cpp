// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_moon_shard.cpp:27
class CDOTA_Item_Recipe_Moonshard : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Moonshard(CDOTA_Item_Recipe_Moonshard &);
	CDOTA_Item_Recipe_Moonshard(CDOTA_Item_Recipe_Moonshard &);
	CDOTA_Item_Recipe_Moonshard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Moonshard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_moon_shard.cpp:38
class CDOTA_Item_Moonshard : public CDOTA_Item {
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
	CDOTA_Item_Moonshard(CDOTA_Item_Moonshard &);
	CDOTA_Item_Moonshard(CDOTA_Item_Moonshard &);
	CDOTA_Item_Moonshard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Item_Moonshard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_moon_shard.cpp:50
class C_CDOTA_Item_Moonshard_MapInstall {
	C_CDOTA_Item_Moonshard_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_moon_shard.cpp:117
class CDOTA_Modifier_Item_Moonshard : public CDOTA_Buff_Item {
public:

private:

	int bonus_attack_speed;  // +0xba8
	int bonus_night_vision;  // +0xbac
	CDOTA_Modifier_Item_Moonshard();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetBonusNightVisionUnique(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Moonshard();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Moonshard::~CDOTA_Item_Recipe_Moonshard  (line 27, @0x0000000002dd7ba0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Moonshard::~CDOTA_Item_Recipe_Moonshard(CDOTA_Item_Recipe_Moonshard *const this)
{
  this->_vptr_IHandleEntity = &off_4720690;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Moonshard::~CDOTA_Item_Recipe_Moonshard  (line 27, @0x0000000002dd7bc0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Moonshard
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Moonshard::~CDOTA_Item_Recipe_Moonshard(CDOTA_Item_Recipe_Moonshard *const this)
{
  this->_vptr_IHandleEntity = &off_4720690;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Moonshard::Schema_DynamicBinding  (line 29, @0x0000000002dd38f0, libserver.so)
// globals: CDOTA_Item_Recipe_Moonshard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Moonshard::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Moonshard *const this)
{
  return CDOTA_Item_Recipe_Moonshard::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002dd3900, libserver.so)
// globals: CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002dd3910, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Moonshard>
void __fastcall CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002dd3930, libserver.so)
void __fastcall CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002dd3950, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002dd3960, libserver.so)
// globals: CDOTA_Item_Recipe_Moonshard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Moonshard::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002dd5a70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002dd6d40, libserver.so)  // inlines: CDOTA_Item_Recipe_Moonshard, Construct<CDOTA_Item_Recipe_Moonshard>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4720690;
  }
  return p;
}


// CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dd9ad0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dd9af0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal  (line 29, @0x0000000002dde270, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_recipe_moon_shard", "CDOTA_Item_Recipe_Moonshard"
// globals: `guard variable for'CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass, CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass, __dso_handle, CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MoonshardClassInfo, CDOTA_Item_Recipe_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MoonshardClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass);
    CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass._vptr_CEntityClass = off_4720610;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Moonshard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_MoonshardClass != 0 )
    return &CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MoonshardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MoonshardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MoonshardClassInfo,
      "CDOTA_Item_Recipe_Moonshard",
      "item_recipe_moon_shard",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MoonshardClassInfo);
  }
  CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass.m_pClassInfo = &CDOTA_Item_Recipe_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MoonshardClassInfo;
  CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MoonshardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_MoonshardClass = &CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass;
  CDOTA_Item_Recipe_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MoonshardClassInfo.m_pClass = &CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass;
  CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_MoonshardClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MoonshardClass;
}


// CDOTA_Item_Moonshard::~CDOTA_Item_Moonshard  (line 38, @0x0000000002dd7bf0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Moonshard::~CDOTA_Item_Moonshard(CDOTA_Item_Moonshard *const this)
{
  this->_vptr_IHandleEntity = &off_4721290;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Moonshard::~CDOTA_Item_Moonshard  (line 38, @0x0000000002dd7c10, libserver.so)  // inlines: ~CDOTA_Item_Moonshard
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Moonshard::~CDOTA_Item_Moonshard(CDOTA_Item_Moonshard *const this)
{
  this->_vptr_IHandleEntity = &off_4721290;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Moonshard::Schema_DynamicBinding  (line 40, @0x0000000002dd3970, libserver.so)
// globals: CDOTA_Item_Moonshard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Moonshard::Schema_DynamicBinding(
        const CDOTA_Item_Moonshard *const this)
{
  return CDOTA_Item_Moonshard::s_pSchemaBinding;
}


// CDOTA_Item_Moonshard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002dd3980, libserver.so)
// globals: CDOTA_Item_Moonshard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Moonshard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Moonshard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Moonshard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Moonshard::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002dd3990, libserver.so)  // inlines: Destruct<CDOTA_Item_Moonshard>
void __fastcall CDOTA_Item_Moonshard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Moonshard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Moonshard::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002dd39b0, libserver.so)
void __fastcall CDOTA_Item_Moonshard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Moonshard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Moonshard::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002dd39d0, libserver.so)
bool __fastcall CDOTA_Item_Moonshard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Moonshard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Moonshard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002dd39e0, libserver.so)
// globals: CDOTA_Item_Moonshard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Moonshard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Moonshard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Moonshard::s_pSchemaBinding;
}


// CDOTA_Item_Moonshard::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002dd5ab0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Moonshard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Moonshard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Moonshard::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002dd6d70, libserver.so)  // inlines: CDOTA_Item_Moonshard, Construct<CDOTA_Item_Moonshard>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Moonshard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Moonshard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4721290;
  }
  return p;
}


// CDOTA_Item_Moonshard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002dd9b20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Moonshard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Moonshard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Moonshard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002dd9b40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Moonshard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Moonshard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Moonshard::GetEntityClassInternal  (line 40, @0x0000000002dde3c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "CDOTA_Item_Moonshard"
// globals: `guard variable for'CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass, CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass, __dso_handle, CDOTA_Item_Moonshard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MoonshardClassInfo, CDOTA_Item_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MoonshardClassInfo
CEntityClass *__cdecl CDOTA_Item_Moonshard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass);
    CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass._vptr_CEntityClass = off_4721210;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass);
    __cxa_atexit(
      CDOTA_Item_Moonshard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_MoonshardClass != 0 )
    return &CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass;
  if ( `guard variable for'CDOTA_Item_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MoonshardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MoonshardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MoonshardClassInfo,
      "CDOTA_Item_Moonshard",
      "item_moon_shard",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MoonshardClassInfo);
  }
  CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass.m_pClassInfo = &CDOTA_Item_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MoonshardClassInfo;
  CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass.m_pBaseClassInfo = CDOTA_Item_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MoonshardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_MoonshardClass = &CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass;
  CDOTA_Item_Moonshard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MoonshardClassInfo.m_pClass = &CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass;
  CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_MoonshardClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Moonshard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MoonshardClass;
}


// CDOTA_Item_Moonshard::GetIntrinsicModifierName  (line 43, @0x0000000002dd39f0, libserver.so)
// strings: "modifier_item_moon_shard"
const char *__fastcall CDOTA_Item_Moonshard::GetIntrinsicModifierName(CDOTA_Item_Moonshard *const this)
{
  return "modifier_item_moon_shard";
}


// CDOTA_Item_Moonshard::YouForgotToImplementOrDeclareServerClass  (line 50, @0x0000000002dc6dd0, libserver.so)
int __fastcall CDOTA_Item_Moonshard::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Moonshard *const this)
{
  return 0;
}


// CDOTA_Item_Moonshard::GetServerClass  (line 50, @0x0000000002dca8a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Moonshard::GetServerClass(CDOTA_Item_Moonshard *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Item_Moonshard::CastFilterResult  (line 59, @0x0000000002dc9a30, libserver.so)  // inlines: GetModifier_Constant_First, IsConsideredHero, IsListeningToEvent, IsTempestDouble
// calls: CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Item_Moonshard::CastFilterResult(CDOTA_Item_Moonshard *const this, CDOTA_BaseNPC *pTarget)
{
  int result; // eax
  int v5; // edx
  CDOTA_BaseNPC *Caster; // rax
  __int64 v7; // rdx
  __int64 v8; // rax

  if ( (pTarget->m_iUnitType & 3) == 0 || (*(pTarget->_vptr_IHandleEntity + 480))(pTarget) == 0 )
    return 4;
  v5 = (*(pTarget->_vptr_IHandleEntity + 414))(pTarget);
  result = 23;
  if ( v5 == this->m_iPlayerOwnerID.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v7 = Caster->m_ModifierManager.m_buffsForModifiers[166];
    if ( v7 != 0xFF
      && Caster->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v7].m_Size > 0
      && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
           &Caster->m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
           &CModifierParams::s_Default) == 1.0 )
    {
      return 10;
    }
    v8 = pTarget->m_ModifierManager.m_buffsForModifiers[166];
    if ( v8 != 0xFF
      && pTarget->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v8].m_Size > 0
      && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
           &pTarget->m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
           &CModifierParams::s_Default) == 1.0 )
    {
      return 10;
    }
    if ( pTarget->m_bIsIllusion.m_Value )
      return 10;
    else
      return CDOTABaseAbility::CastFilterResult(this, pTarget);
  }
  return result;
}


// CDOTA_Item_Moonshard::GetCustomCastError  (line 75, @0x0000000002dc7920, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_ally"
const char *__fastcall CDOTA_Item_Moonshard::GetCustomCastError(
        CDOTA_Item_Moonshard *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  const char *v4; // rdx

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = "#dota_hud_error_cant_cast_on_ally";
  if ( Caster == pTarget )
    return "";
  return v4;
}


// CDOTA_Item_Moonshard::OnSpellStart  (line 85, @0x0000000002dd0390, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CDOTA_Item::RemoveItem, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_moon_shard_consumed", "consumed_bonus", "Item.MoonShard.Consume"
void __fastcall CDOTA_Item_Moonshard::OnSpellStart(CDOTA_Item_Moonshard *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  int LevelSpecialValue; // r14d
  float v5; // xmm1_4
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && (*(CursorTarget->_vptr_IHandleEntity + 414))(CursorTarget) == this->m_iPlayerOwnerID.m_Value
    && CDOTA_BaseNPC::FindModifierByName(v3, "modifier_item_moon_shard_consumed", 0) == 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "consumed_bonus", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_item_moon_shard_consumed");
    KeyValues::SetFloat(&kv, "duration", v5);
    KeyValues::SetInt(&kv, "consumed_bonus", LevelSpecialValue);
    CDOTA_BaseNPC::AddNewModifier(v3, v3, this, "modifier_item_moon_shard_consumed", &kv, 0);
    DOTA_EmitSound(1, "Item.MoonShard.Consume", v3);
    CDOTA_Item::RemoveItem(this);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Item_Moonshard::~CDOTA_Modifier_Item_Moonshard  (line 117, @0x0000000002dd67a0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Moonshard::~CDOTA_Modifier_Item_Moonshard(
        CDOTA_Modifier_Item_Moonshard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Moonshard::~CDOTA_Modifier_Item_Moonshard  (line 117, @0x0000000002dd67c0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Moonshard
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Moonshard::~CDOTA_Modifier_Item_Moonshard(
        CDOTA_Modifier_Item_Moonshard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Moonshard::DeclareFunctions  (line 134, @0x0000000002dc6de0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Moonshard::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_Moonshard::GetBonusNightVisionUnique(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Moonshard::DeclareFunctions(CDOTA_Modifier_Item_Moonshard *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Moonshard::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[98].__delta = 0;
  this->m_Functions[98].__pfn = CDOTA_Modifier_Item_Moonshard::GetBonusNightVisionUnique;
}


// CDOTA_Modifier_Item_Moonshard::GetModifierAttackSpeedBonus_Constant  (line 140, @0x0000000002dc6e20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Moonshard::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Moonshard *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Moonshard::GetBonusNightVisionUnique  (line 147, @0x0000000002dc6e40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Moonshard::GetBonusNightVisionUnique(
        CDOTA_Modifier_Item_Moonshard *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_night_vision;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Moonshard::OnCreated  (line 152, @0x0000000002dd0bc0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_night_vision"
void __fastcall CDOTA_Modifier_Item_Moonshard::OnCreated(CDOTA_Modifier_Item_Moonshard *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_night_vision = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_night_vision", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_night_vision = 0;
}


// CDOTA_Modifier_Item_Moonshard_Consumed::AddCustomTransmiterData  (line 165, @0x0000000002dc79e0, libserver.so)  // inlines: set_damage, set_has_damage
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Item_Moonshard_Consumed::AddCustomTransmiterData(
        CDOTA_Modifier_Item_Moonshard_Consumed *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int consumed_bonus; // eax

  consumed_bonus = this->consumed_bonus;
  *(entry + 4) |= 0x1000000u;
  *(entry + 35) = consumed_bonus;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_Item_Moonshard_Consumed::DeclareFunctions  (line 179, @0x0000000002dc6e60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Moonshard_Consumed::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Moonshard_Consumed::DeclareFunctions(
        CDOTA_Modifier_Item_Moonshard_Consumed *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Moonshard_Consumed::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Item_Moonshard_Consumed::GetModifierAttackSpeedBonus_Constant  (line 184, @0x0000000002dc8100, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Moonshard_Consumed::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Moonshard_Consumed *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
    return 1uLL;
  *v3.m128i_i32 = this->consumed_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Moonshard_Consumed::OnCreated  (line 193, @0x0000000002dc78f0, libserver.so)
// calls: KeyValues::GetInt
// strings: "consumed_bonus"
void __fastcall CDOTA_Modifier_Item_Moonshard_Consumed::OnCreated(
        CDOTA_Modifier_Item_Moonshard_Consumed *const this,
        KeyValues *pKV)
{
  this->consumed_bonus = KeyValues::GetInt(pKV, "consumed_bonus", 0);
}


// CDOTA_Modifier_Item_Moonshard_Consumed::AllowIllusionDuplicate  (line 203, @0x0000000002dc6e80, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Moonshard_Consumed::AllowIllusionDuplicate(
        CDOTA_Modifier_Item_Moonshard_Consumed *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Moonshard_Consumed::DuplicateForIllusion  (line 208, @0x0000000002dc7a00, libserver.so)
// calls: CDOTA_Buff::GetName, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_Buff::GetClass, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "consumed_bonus"
CDOTA_Buff *__fastcall CDOTA_Modifier_Item_Moonshard_Consumed::DuplicateForIllusion(
        CDOTA_Modifier_Item_Moonshard_Consumed *const this,
        CDOTA_BaseNPC *pIllusion)
{
  const char *Name; // rax
  float v5; // xmm1_4
  const char *Class; // r14
  CDOTABaseAbility *Ability; // rax
  CDOTA_Buff *v8; // rbx
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  Name = CDOTA_Buff::GetName(this);
  KeyValues::KeyValues(&kv, Name);
  (*(this->_vptr_CDOTA_Buff + 31))(this);
  KeyValues::SetFloat(&kv, "duration", v5);
  KeyValues::SetInt(&kv, "consumed_bonus", this->consumed_bonus);
  Class = CDOTA_Buff::GetClass(this);
  Ability = CDOTA_Buff::GetAbility(this);
  v8 = CDOTA_BaseNPC::AddNewModifier(pIllusion, pIllusion, Ability, Class, &kv, 0);
  KeyValues::~KeyValues(&kv);
  return v8;
}


