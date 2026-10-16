// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_perseverance.cpp:27
class CDOTA_Item_Recipe_Perseverance : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Perseverance(CDOTA_Item_Recipe_Perseverance &);
	CDOTA_Item_Recipe_Perseverance(CDOTA_Item_Recipe_Perseverance &);
	CDOTA_Item_Recipe_Perseverance();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Perseverance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_perseverance.cpp:38
class CDOTA_Item_Perseverance : public CDOTA_Item {
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
	CDOTA_Item_Perseverance(CDOTA_Item_Perseverance &);
	CDOTA_Item_Perseverance(CDOTA_Item_Perseverance &);
	CDOTA_Item_Perseverance();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Perseverance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_perseverance.cpp:50
class CDOTA_Modifier_Item_Perseverance : public CDOTA_Buff_Item {
public:

private:

	int bonus_health_regen;  // +0xba8
	int bonus_mana_regen;  // +0xbac
	int bonus_damage;  // +0xbb0
	CDOTA_Modifier_Item_Perseverance();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Perseverance();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Perseverance::~CDOTA_Item_Recipe_Perseverance  (line 27, @0x0000000002dd8190, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Perseverance::~CDOTA_Item_Recipe_Perseverance(
        CDOTA_Item_Recipe_Perseverance *const this)
{
  this->_vptr_IHandleEntity = &off_47374B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Perseverance::~CDOTA_Item_Recipe_Perseverance  (line 27, @0x0000000002dd81b0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Perseverance
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Perseverance::~CDOTA_Item_Recipe_Perseverance(
        CDOTA_Item_Recipe_Perseverance *const this)
{
  this->_vptr_IHandleEntity = &off_47374B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Perseverance::Schema_DynamicBinding  (line 29, @0x0000000002dd4700, libserver.so)
// globals: CDOTA_Item_Recipe_Perseverance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Perseverance::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Perseverance *const this)
{
  return CDOTA_Item_Recipe_Perseverance::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002dd4710, libserver.so)
// globals: CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002dd4720, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Perseverance>
void __fastcall CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002dd4740, libserver.so)
void __fastcall CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002dd4760, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002dd4770, libserver.so)
// globals: CDOTA_Item_Recipe_Perseverance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Perseverance::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002dd6070, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002dd7130, libserver.so)  // inlines: CDOTA_Item_Recipe_Perseverance, Construct<CDOTA_Item_Recipe_Perseverance>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47374B0;
  }
  return p;
}


// CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dda0c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dda0e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal  (line 29, @0x0000000002de2030, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_recipe_pers", "CDOTA_Item_Recipe_Perseverance"
// globals: `guard variable for'CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass, CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass, __dso_handle, CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClassInfo, CDOTA_Item_Recipe_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass);
    CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass._vptr_CEntityClass = off_4737430;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Perseverance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_PerseveranceClass != 0 )
    return &CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClassInfo,
      "CDOTA_Item_Recipe_Perseverance",
      "item_recipe_pers",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClassInfo);
  }
  CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass.m_pClassInfo = &CDOTA_Item_Recipe_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClassInfo;
  CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_PerseveranceClass = &CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass;
  CDOTA_Item_Recipe_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClassInfo.m_pClass = &CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass;
  CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_PerseveranceClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PerseveranceClass;
}


// CDOTA_Item_Perseverance::~CDOTA_Item_Perseverance  (line 38, @0x0000000002dd81e0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Perseverance::~CDOTA_Item_Perseverance(CDOTA_Item_Perseverance *const this)
{
  this->_vptr_IHandleEntity = &off_47380B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Perseverance::~CDOTA_Item_Perseverance  (line 38, @0x0000000002dd8200, libserver.so)  // inlines: ~CDOTA_Item_Perseverance
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Perseverance::~CDOTA_Item_Perseverance(CDOTA_Item_Perseverance *const this)
{
  this->_vptr_IHandleEntity = &off_47380B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Perseverance::Schema_DynamicBinding  (line 40, @0x0000000002dd4780, libserver.so)
// globals: CDOTA_Item_Perseverance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Perseverance::Schema_DynamicBinding(
        const CDOTA_Item_Perseverance *const this)
{
  return CDOTA_Item_Perseverance::s_pSchemaBinding;
}


// CDOTA_Item_Perseverance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002dd4790, libserver.so)
// globals: CDOTA_Item_Perseverance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Perseverance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Perseverance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Perseverance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Perseverance::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002dd47a0, libserver.so)  // inlines: Destruct<CDOTA_Item_Perseverance>
void __fastcall CDOTA_Item_Perseverance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Perseverance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Perseverance::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002dd47c0, libserver.so)
void __fastcall CDOTA_Item_Perseverance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Perseverance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Perseverance::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002dd47e0, libserver.so)
bool __fastcall CDOTA_Item_Perseverance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Perseverance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Perseverance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002dd47f0, libserver.so)
// globals: CDOTA_Item_Perseverance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Perseverance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Perseverance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Perseverance::s_pSchemaBinding;
}


// CDOTA_Item_Perseverance::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002dd60b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Perseverance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Perseverance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Perseverance::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002dd7160, libserver.so)  // inlines: CDOTA_Item_Perseverance, Construct<CDOTA_Item_Perseverance>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Perseverance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Perseverance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47380B0;
  }
  return p;
}


// CDOTA_Item_Perseverance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002dda110, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Perseverance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Perseverance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Perseverance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002dda130, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Perseverance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Perseverance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Perseverance::GetEntityClassInternal  (line 40, @0x0000000002de2180, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_pers", "CDOTA_Item_Perseverance"
// globals: `guard variable for'CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass, CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass, __dso_handle, CDOTA_Item_Perseverance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PerseveranceClassInfo, CDOTA_Item_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PerseveranceClassInfo
CEntityClass *__cdecl CDOTA_Item_Perseverance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass);
    CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass._vptr_CEntityClass = off_4738030;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass);
    __cxa_atexit(
      CDOTA_Item_Perseverance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_PerseveranceClass != 0 )
    return &CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass;
  if ( `guard variable for'CDOTA_Item_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PerseveranceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PerseveranceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PerseveranceClassInfo,
      "CDOTA_Item_Perseverance",
      "item_pers",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PerseveranceClassInfo);
  }
  CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass.m_pClassInfo = &CDOTA_Item_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PerseveranceClassInfo;
  CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass.m_pBaseClassInfo = CDOTA_Item_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PerseveranceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_PerseveranceClass = &CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass;
  CDOTA_Item_Perseverance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PerseveranceClassInfo.m_pClass = &CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass;
  CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_PerseveranceClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Perseverance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PerseveranceClass;
}


// CDOTA_Item_Perseverance::GetIntrinsicModifierName  (line 42, @0x0000000002dd4800, libserver.so)
// strings: "modifier_item_perseverance"
const char *__fastcall CDOTA_Item_Perseverance::GetIntrinsicModifierName(CDOTA_Item_Perseverance *const this)
{
  return "modifier_item_perseverance";
}


// CDOTA_Modifier_Item_Perseverance::~CDOTA_Modifier_Item_Perseverance  (line 50, @0x0000000002dd64d0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Perseverance::~CDOTA_Modifier_Item_Perseverance(
        CDOTA_Modifier_Item_Perseverance *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Perseverance::~CDOTA_Modifier_Item_Perseverance  (line 50, @0x0000000002dd64f0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Perseverance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Perseverance::~CDOTA_Modifier_Item_Perseverance(
        CDOTA_Modifier_Item_Perseverance *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Perseverance::DeclareFunctions  (line 70, @0x0000000002dc74b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Perseverance::GetModifierPercentageManaRegen(CModifierParams const&), CDOTA_Modifier_Item_Perseverance::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_Perseverance::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Perseverance::DeclareFunctions(CDOTA_Modifier_Item_Perseverance *const this)
{
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_Perseverance::GetModifierPercentageManaRegen;
  this->m_Functions[54].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Perseverance::GetModifierConstantHealthRegen;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Perseverance::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_Perseverance::GetModifierPercentageManaRegen  (line 77, @0x0000000002dc7510, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Perseverance::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_Perseverance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Perseverance::GetModifierConstantHealthRegen  (line 82, @0x0000000002dc7530, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Perseverance::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Perseverance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Perseverance::GetModifierPreAttack_BonusDamage  (line 87, @0x0000000002dc7550, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Perseverance::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Perseverance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Perseverance::OnCreated  (line 92, @0x0000000002dd1070, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_health_regen", "bonus_mana_regen"
void __fastcall CDOTA_Modifier_Item_Perseverance::OnCreated(
        CDOTA_Modifier_Item_Perseverance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_health_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_mana_regen = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_health_regen = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_mana_regen", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_damage", -1, 0);
    return;
  }
LABEL_7:
  this->bonus_damage = 0;
}


