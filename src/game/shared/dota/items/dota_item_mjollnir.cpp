// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_mjollnir.cpp:28
class CDOTA_Item_Recipe_Mjollnir : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Mjollnir(CDOTA_Item_Recipe_Mjollnir &);
	CDOTA_Item_Recipe_Mjollnir(CDOTA_Item_Recipe_Mjollnir &);
	CDOTA_Item_Recipe_Mjollnir();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Mjollnir();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_mjollnir.cpp:40
class CDOTA_Item_Mjollnir : public CDOTA_Item {
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
	CDOTA_Item_Mjollnir(CDOTA_Item_Mjollnir &);
	CDOTA_Item_Mjollnir(CDOTA_Item_Mjollnir &);
	CDOTA_Item_Mjollnir();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Mjollnir();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_mjollnir.cpp:77
class CDOTA_Modifier_MjollnirChain : public CDOTA_Buff {
public:

private:

	int chain_radius;  // +0xba8
	int chain_strikes;  // +0xbac
	int chain_damage;  // +0xbb0
	float chain_delay;  // +0xbb4
	int m_iCurJumpCount;  // +0xbb8
	CDOTA_Modifier_MjollnirChain();
	virtual bool IsHidden();
	virtual int GetAttributes();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_MjollnirChain();

	// vtable[11] IsHidden
	// vtable[7] GetAttributes
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3040
};

// src/game/shared/dota/items/dota_item_mjollnir.cpp:202
class CDOTA_Modifier_Item_Mjollnir : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_attack_speed;  // +0xbac
	int chain_chance;  // +0xbb0
	int chain_strikes;  // +0xbb4
	int chain_damage;  // +0xbb8
	int chain_radius;  // +0xbbc
	float chain_cooldown;  // +0xbc0

	CDOTA_Modifier_Item_Mjollnir();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Mjollnir();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3064
};

// src/game/shared/dota/items/dota_item_mjollnir.cpp:346
class CDOTA_Modifier_Item_Mjollnir_Static : public CDOTA_Buff {
public:

private:

	int static_chance;  // +0xbb0
	int static_strikes;  // +0xbb4
	int static_damage;  // +0xbb8
	int static_primary_radius;  // +0xbbc
	int static_seconary_radius;  // +0xbc0
	int static_radius;  // +0xbc4
	float static_cooldown;  // +0xbc8

	CDOTA_Modifier_Item_Mjollnir_Static();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Mjollnir_Static();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// sizeof = 3048
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Mjollnir::~CDOTA_Item_Recipe_Mjollnir  (line 28, @0x0000000002dd7a60, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Mjollnir::~CDOTA_Item_Recipe_Mjollnir(CDOTA_Item_Recipe_Mjollnir *const this)
{
  this->_vptr_IHandleEntity = &off_471C510;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Mjollnir::~CDOTA_Item_Recipe_Mjollnir  (line 28, @0x0000000002dd7a80, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Mjollnir
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Mjollnir::~CDOTA_Item_Recipe_Mjollnir(CDOTA_Item_Recipe_Mjollnir *const this)
{
  this->_vptr_IHandleEntity = &off_471C510;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Mjollnir::Schema_DynamicBinding  (line 30, @0x0000000002dd3660, libserver.so)
// globals: CDOTA_Item_Recipe_Mjollnir::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Mjollnir::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Mjollnir *const this)
{
  return CDOTA_Item_Recipe_Mjollnir::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002dd3670, libserver.so)
// globals: CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002dd3680, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Mjollnir>
void __fastcall CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002dd36a0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002dd36c0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002dd36d0, libserver.so)
// globals: CDOTA_Item_Recipe_Mjollnir::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Mjollnir::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002dd5970, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002dd6c80, libserver.so)  // inlines: CDOTA_Item_Recipe_Mjollnir, Construct<CDOTA_Item_Recipe_Mjollnir>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_471C510;
  }
  return p;
}


// CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002dd9990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002dd99b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal  (line 30, @0x0000000002ddd8b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_recipe_mjollnir", "CDOTA_Item_Recipe_Mjollnir"
// globals: `guard variable for'CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass, CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass, __dso_handle, CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MjollnirClassInfo, CDOTA_Item_Recipe_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MjollnirClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass);
    CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass._vptr_CEntityClass = off_471C490;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Mjollnir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_MjollnirClass != 0 )
    return &CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MjollnirClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MjollnirClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MjollnirClassInfo,
      "CDOTA_Item_Recipe_Mjollnir",
      "item_recipe_mjollnir",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MjollnirClassInfo);
  }
  CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass.m_pClassInfo = &CDOTA_Item_Recipe_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MjollnirClassInfo;
  CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MjollnirClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_MjollnirClass = &CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass;
  CDOTA_Item_Recipe_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MjollnirClassInfo.m_pClass = &CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass;
  CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_MjollnirClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MjollnirClass;
}


// CDOTA_Item_Mjollnir::~CDOTA_Item_Mjollnir  (line 40, @0x0000000002dd7ab0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Mjollnir::~CDOTA_Item_Mjollnir(CDOTA_Item_Mjollnir *const this)
{
  this->_vptr_IHandleEntity = &off_471D110;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Mjollnir::~CDOTA_Item_Mjollnir  (line 40, @0x0000000002dd7ad0, libserver.so)  // inlines: ~CDOTA_Item_Mjollnir
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Mjollnir::~CDOTA_Item_Mjollnir(CDOTA_Item_Mjollnir *const this)
{
  this->_vptr_IHandleEntity = &off_471D110;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Mjollnir::Schema_DynamicBinding  (line 42, @0x0000000002dd36e0, libserver.so)
// globals: CDOTA_Item_Mjollnir::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Mjollnir::Schema_DynamicBinding(
        const CDOTA_Item_Mjollnir *const this)
{
  return CDOTA_Item_Mjollnir::s_pSchemaBinding;
}


// CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002dd36f0, libserver.so)
// globals: CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Mjollnir::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x0000000002dd3700, libserver.so)  // inlines: Destruct<CDOTA_Item_Mjollnir>
void __fastcall CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Mjollnir::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x0000000002dd3720, libserver.so)
void __fastcall CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Mjollnir::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x0000000002dd3740, libserver.so)
bool __fastcall CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Mjollnir::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x0000000002dd3750, libserver.so)
// globals: CDOTA_Item_Mjollnir::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Mjollnir::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Mjollnir::s_pSchemaBinding;
}


// CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x0000000002dd59b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Mjollnir::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x0000000002dd6cb0, libserver.so)  // inlines: CDOTA_Item_Mjollnir, Construct<CDOTA_Item_Mjollnir>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Mjollnir::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_471D110;
  }
  return p;
}


// CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002dd99e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Mjollnir::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002dd9a00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Mjollnir::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Mjollnir::GetEntityClassInternal  (line 42, @0x0000000002ddda00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "CDOTA_Item_Mjollnir"
// globals: `guard variable for'CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass, CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass, __dso_handle, CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MjollnirClassInfo, CDOTA_Item_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MjollnirClassInfo
CEntityClass *__cdecl CDOTA_Item_Mjollnir::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass);
    CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass._vptr_CEntityClass = off_471D090;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass);
    __cxa_atexit(
      CDOTA_Item_Mjollnir::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_MjollnirClass != 0 )
    return &CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass;
  if ( `guard variable for'CDOTA_Item_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MjollnirClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MjollnirClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MjollnirClassInfo,
      "CDOTA_Item_Mjollnir",
      "item_mjollnir",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MjollnirClassInfo);
  }
  CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass.m_pClassInfo = &CDOTA_Item_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MjollnirClassInfo;
  CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass.m_pBaseClassInfo = CDOTA_Item_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MjollnirClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_MjollnirClass = &CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass;
  CDOTA_Item_Mjollnir::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MjollnirClassInfo.m_pClass = &CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass;
  CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_MjollnirClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Mjollnir::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MjollnirClass;
}


// CDOTA_Item_Mjollnir::GetIntrinsicModifierName  (line 45, @0x0000000002dd3760, libserver.so)
// strings: "modifier_item_mjollnir"
const char *__fastcall CDOTA_Item_Mjollnir::GetIntrinsicModifierName(CDOTA_Item_Mjollnir *const this)
{
  return "modifier_item_mjollnir";
}


// CDOTA_Item_Mjollnir::OnSpellStart  (line 52, @0x0000000002dd16e0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "static_duration", "modifier_item_mjollnir_static", "DOTA_Item.Mjollnir.Activate"
void __fastcall CDOTA_Item_Mjollnir::OnSpellStart(CDOTA_Item_Mjollnir *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "static_duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_item_mjollnir_static");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_item_mjollnir_static", &kv, 0);
    DOTA_EmitSound(10, "DOTA_Item.Mjollnir.Activate", v3);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_MjollnirChain::~CDOTA_Modifier_MjollnirChain  (line 77, @0x0000000002de39b0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_MjollnirChain::~CDOTA_Modifier_MjollnirChain(CDOTA_Modifier_MjollnirChain *const this)
{
  this->_vptr_CDOTA_Buff = &off_471DCD0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory),
        (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_MjollnirChain::~CDOTA_Modifier_MjollnirChain  (line 77, @0x0000000002de3a20, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_MjollnirChain, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_MjollnirChain::~CDOTA_Modifier_MjollnirChain(CDOTA_Modifier_MjollnirChain *const this)
{
  this->_vptr_CDOTA_Buff = &off_471DCD0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MjollnirChain::IsHidden  (line 82, @0x0000000002dd3770, libserver.so)
bool __fastcall CDOTA_Modifier_MjollnirChain::IsHidden(CDOTA_Modifier_MjollnirChain *const this)
{
  return 1;
}


// CDOTA_Modifier_MjollnirChain::GetAttributes  (line 83, @0x0000000002dd7310, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_MjollnirChain::GetAttributes(CDOTA_Modifier_MjollnirChain *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_MjollnirChain::IsPurgable  (line 84, @0x0000000002dd3780, libserver.so)
bool __fastcall CDOTA_Modifier_MjollnirChain::IsPurgable(CDOTA_Modifier_MjollnirChain *const this)
{
  return 0;
}


// CDOTA_Modifier_MjollnirChain::OnCreated  (line 105, @0x0000000002dd3000, libserver.so)  // inlines: AddToTail, AssignTo, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, DotaRetrieveAbilityValue<float>, Element, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, GrowMemory, InState, IsInvulnerable, Set, ToDOTABaseNPC, VectorAdd, operator+, operator=, operator[]
// calls: KeyValues::GetPtr, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::GetCaster, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt (17 total)
// strings: "chain_radius", "chain_strikes", "chain_damage", "chain_delay", "particles/items_fx/chain_lightning.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_MjollnirChain::OnCreated(CDOTA_Modifier_MjollnirChain *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Ptr; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rdi
  CDOTABaseAbility *v9; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v11; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  float v19; // xmm1_4
  CEntityIdentity *m_pEntity; // rax
  __int16 v21; // cx
  __int64 m_Size; // r12
  int v23; // eax
  CHandle<CBaseEntity> *v24; // rax
  float flDamage; // [rsp+Ch] [rbp-44h]
  int v26; // [rsp+10h] [rbp-40h]
  double v27; // [rsp+20h] [rbp-30h]
  float v28; // [rsp+28h] [rbp-28h]

  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  v4 = Ptr;
  if ( Ptr == 0 || !Ptr->m_bIsDOTANPC || Ptr->m_bIsWaitingToSpawn.m_Value || (Ptr->m_nUnitState64.m_Value & 0x100) != 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(Ability, &this->chain_radius, "chain_radius");
    v6 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v6, &this->chain_strikes, "chain_strikes");
    v7 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v7, &this->chain_damage, "chain_damage");
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      this->chain_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "chain_delay", -1, 0);
    else
      this->chain_delay = 0.0;
    this->m_iCurJumpCount = 1;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
    flDamage = this->chain_damage;
    v9 = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, v4, v9, flDamage, 2, 0);
    v11 = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v11) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/items_fx/chain_lightning.vpcf",
                     2,
                     0,
                     0,
                     v11);
    v13 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
    v28 = AbsOrigin->z + 100.0;
    *(&v27 + 1) = AbsOrigin->y + 0.0;
    *&v27 = AbsOrigin->x + 0.0;
    v15 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v15, v11, 0, v27, v28);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v16, v11, 1, v4, 5, "attach_hitloc", vec3_invalid, 1);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleFoWProperties(v17, v11, 0, 1, 50.0);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v18, v11);
    v26 = -1;
    this->m_vCurTargetLoc = *CBaseEntity::GetAbsOrigin(v4);
    m_pEntity = v4->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v21 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v26 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v21 & 0x7FFF;
    }
    m_Size = this->m_hHitEntities.m_Size;
    v23 = this->m_hHitEntities.m_Size;
    if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
      v23 = this->m_hHitEntities.m_Size;
    }
    this->m_hHitEntities.m_Size = v23 + 1;
    v24 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
    if ( v24 != 0 )
      v24->m_Index = v26;
    CDOTA_Buff::StartIntervalThink(this, this->chain_delay, v19);
  }
}


// CDOTA_Modifier_MjollnirChain::OnIntervalThink  (line 141, @0x0000000002dd2bd0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleFoWProperties (20 total)
// strings: "particles/items_fx/chain_lightning.vpcf", "attach_hitloc", "Item.Maelstrom.Chain_Lightning.Jump"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_MjollnirChain::OnIntervalThink(CDOTA_Modifier_MjollnirChain *const this)
{
  __m128i v1; // xmm3
  float v3; // r15d
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v5; // rax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  __m128i v12; // xmm4
  float v13; // r14d
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  float v18; // xmm0_4
  CHandle<CBaseEntity> v19; // xmm1_4
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CEntityIdentity *v24; // rax
  __int16 v25; // cx
  __int64 m_Size; // r12
  int v27; // eax
  CHandle<CBaseEntity> *v28; // rax
  char v29; // r12
  int v30; // [rsp+20h] [rbp-70h]
  CHandle<CBaseEntity> src[2]; // [rsp+30h] [rbp-60h] BYREF
  float v32; // [rsp+38h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-50h] BYREF

  if ( this->m_iCurJumpCount >= this->chain_strikes )
    goto LABEL_2;
  *v1.m128i_i32 = this->chain_radius;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v5->m_iTeamNum.m_Value, &this->m_vCurTargetLoc, Caster, v3, &hEntities, 2, 19, 384, 1, 0);
  while ( 1 )
  {
    if ( hEntities.m_Size <= 0 )
    {
      v29 = 0;
      goto LABEL_27;
    }
    if ( hEntities.m_Memory.m_pMemory->m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hEntities.m_Memory.m_pMemory->m_Index >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[hEntities.m_Memory.m_pMemory->m_Index & 0x1FF];
        if ( v7 != 0 && hEntities.m_Memory.m_pMemory->m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            src[0].m_Index = -1;
            m_pEntity = m_pInstance->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              v11 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(src[0].m_Index) = v11 | src[0].m_Index & 0x8000;
              src[0].m_Index = (v10 << 15) | src[0].m_Index & 0x7FFF;
            }
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &this->m_hHitEntities,
                   src) < 0 )
              break;
          }
        }
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hEntities, 0);
  }
  *v12.m128i_i32 = this->chain_damage;
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  Ability = CDOTA_Buff::GetAbility(this);
  v15 = CDOTA_Buff::GetCaster(this);
  ApplyDamage(v15, m_pInstance, Ability, v13, 2, 0);
  v16 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v16) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/items_fx/chain_lightning.vpcf",
                   2,
                   0,
                   0,
                   v16);
  v18 = this->m_vCurTargetLoc.z + 100.0;
  *&v19.m_Index = this->m_vCurTargetLoc.x + 0.0;
  *&src[1].m_Index = this->m_vCurTargetLoc.y + 0.0;
  v32 = v18;
  src[0] = v19;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v20, v16, 0, *&src[0].m_Index, v32);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v21, v16, 1, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v22, v16, 0, 1, 50.0);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v23, v16);
  CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Item.Maelstrom.Chain_Lightning.Jump", 0.0, 0, 0);
  v30 = -1;
  this->m_vCurTargetLoc = *CBaseEntity::GetAbsOrigin(m_pInstance);
  v24 = m_pInstance->m_pEntity;
  if ( v24 != 0 )
  {
    v25 = 0x7FFF;
    if ( v24->m_EHandle.m_Index != -1 )
      v25 = v24->m_EHandle.m_Index & 0x7FFF;
    v30 = (((v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1)) << 15) | v25 & 0x7FFF;
  }
  m_Size = this->m_hHitEntities.m_Size;
  v27 = this->m_hHitEntities.m_Size;
  if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
    v27 = this->m_hHitEntities.m_Size;
  }
  this->m_hHitEntities.m_Size = v27 + 1;
  v28 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
  if ( v28 != 0 )
    v28->m_Index = v30;
  ++this->m_iCurJumpCount;
  v29 = 1;
LABEL_27:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
  if ( v29 == 0 )
LABEL_2:
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Item_Mjollnir::~CDOTA_Modifier_Item_Mjollnir  (line 202, @0x0000000002dd9850, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Buff_Item, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Item_Mjollnir::~CDOTA_Modifier_Item_Mjollnir(CDOTA_Modifier_Item_Mjollnir *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_471DFF0;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_InFlightAttackRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory);
    if ( (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Mjollnir::~CDOTA_Modifier_Item_Mjollnir  (line 202, @0x0000000002dd98c0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Mjollnir, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Item_Mjollnir::~CDOTA_Modifier_Item_Mjollnir(CDOTA_Modifier_Item_Mjollnir *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_471DFF0;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_InFlightAttackRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory);
    if ( (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Mjollnir::OnCreated  (line 238, @0x0000000002dd2890, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "chain_chance", "chain_strikes", "chain_damage", "chain_radius", "chain_cooldown"
void __fastcall CDOTA_Modifier_Item_Mjollnir::OnCreated(CDOTA_Modifier_Item_Mjollnir *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_attack_speed", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->bonus_attack_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->chain_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "chain_chance", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->chain_chance = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->chain_strikes = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "chain_strikes", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_12:
  this->chain_strikes = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->chain_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "chain_damage", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->chain_radius = 0;
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
    goto LABEL_15;
  }
LABEL_13:
  this->chain_damage = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->chain_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "chain_radius", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_8:
    this->chain_cooldown = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "chain_cooldown", -1, 0);
    return;
  }
LABEL_15:
  this->chain_cooldown = 0.0;
}


// CDOTA_Modifier_Item_Mjollnir::DeclareFunctions  (line 252, @0x0000000002dc6c40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Mjollnir::OnAttack(CModifierParams const&), CDOTA_Modifier_Item_Mjollnir::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Item_Mjollnir::OnAttackFail(CModifierParams const&), CDOTA_Modifier_Item_Mjollnir::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Mjollnir::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Mjollnir::DeclareFunctions(CDOTA_Modifier_Item_Mjollnir *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Item_Mjollnir::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Item_Mjollnir::OnAttackLanded;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Item_Mjollnir::OnAttackFail;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Mjollnir::GetModifierPreAttack_BonusDamage;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Mjollnir::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Item_Mjollnir::GetModifierPreAttack_BonusDamage  (line 263, @0x0000000002dc6cd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Mjollnir::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Mjollnir *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Mjollnir::GetModifierAttackSpeedBonus_Constant  (line 270, @0x0000000002dc6cf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Mjollnir::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Mjollnir *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Mjollnir::OnAttack  (line 277, @0x0000000002dd3340, libserver.so)  // inlines: AddToTail, Attacker, AttackerNPC, CopyConstruct<short int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CUtlMemory<short int, int>::Grow
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Mjollnir::OnAttack(
        CDOTA_Modifier_Item_Mjollnir *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  uint32 v10; // edx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CEntityInstance *v13; // rdx
  int m_Id; // eax
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  __int64 m_Size; // rbx
  int v19; // edx
  __int16 *v20; // rdx
  CDOTA_AttackRecord *pAttackRecord; // [rsp+8h] [rbp-18h]

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance )
  {
    v10 = params->htarget.m_Index;
    if ( v10 + 2 <= 1
      || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v12 = &v11[params->htarget.m_Index & 0x1FF]) == 0
      || v10 != v12->m_EHandle.m_Index
      || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
      || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
    {
      v13 = 0;
    }
    if ( Parent != 0
      && Parent->m_bIsDOTANPC
      && v13 != 0
      && !Parent->m_bIsIllusion.m_Value
      && HIBYTE(v13[7].m_CScriptComponent) != Parent->m_iTeamNum.m_Value )
    {
      m_Id = v13[43].m_iszPrivateVScripts.u.m_Id;
      if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 && !params->bChainLightningConsidered )
      {
        params->bChainLightningConsidered = 1;
        iRecord = params->iRecord;
        AttackRecordsManager = GetAttackRecordsManager();
        RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
        m_Size = this->m_InFlightAttackRecords.m_Size;
        v19 = this->m_InFlightAttackRecords.m_Size;
        if ( m_Size == this->m_InFlightAttackRecords.m_Memory.m_nAllocationCount )
        {
          pAttackRecord = RecordByIndex;
          CUtlMemory<short,int>::Grow(&this->m_InFlightAttackRecords.m_Memory, 1);
          v19 = this->m_InFlightAttackRecords.m_Size;
          RecordByIndex = pAttackRecord;
        }
        this->m_InFlightAttackRecords.m_Size = v19 + 1;
        v20 = &this->m_InFlightAttackRecords.m_Memory.m_pMemory[m_Size];
        if ( v20 != 0 )
          *v20 = RecordByIndex->m_iRecord;
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Mjollnir::OnAttackLanded  (line 302, @0x0000000002dcf830, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, Set, Start, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=<float>
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CountdownTimer::Now, RollPseudoRandomPercentage, KeyValues::KeyValues, KeyValues::SetPtr, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_mjollnir_chain"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Mjollnir::OnAttackLanded(
        CDOTA_Modifier_Item_Mjollnir *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *v13; // r13
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *v17; // rbx
  int m_Id; // eax
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Caster; // rax
  float v25; // [rsp+8h] [rbp-48h]
  float chain_cooldown; // [rsp+Ch] [rbp-44h]
  float v27; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-28h]

  v29 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance
    && CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord) )
  {
    v10 = params->htarget.m_Index;
    if ( v10 + 2 <= 1
      || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v12 = &v11[params->htarget.m_Index & 0x1FF]) == 0
      || v10 != v12->m_EHandle.m_Index
      || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
      || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
    {
      v13 = 0;
    }
    v14 = params->hattacker.m_Index;
    if ( v14 + 2 > 1 )
    {
      v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v15 != 0 )
      {
        v16 = &v15[params->hattacker.m_Index & 0x1FF];
        if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
        {
          v17 = v16->m_pInstance;
          if ( v16->m_pInstance != 0
            && v17->m_bIsDOTANPC
            && v13 != 0
            && !v17->m_bIsIllusion.m_Value
            && HIBYTE(v13[7].m_CScriptComponent) != v17->m_iTeamNum.m_Value )
          {
            m_Id = v13[43].m_iszPrivateVScripts.u.m_Id;
            if ( (m_Id & 0x10) == 0
              && (m_Id & 0x193) != 0
              && CountdownTimer::Now(&this->m_ChainTimer) >= this->m_ChainTimer.m_timestamp.m_Value )
            {
              v19 = CDOTA_Buff::GetParent(this);
              if ( RollPseudoRandomPercentage(
                     this->chain_chance,
                     DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR,
                     v19) )
              {
                chain_cooldown = this->chain_cooldown;
                v20 = CountdownTimer::Now(&this->m_ChainTimer);
                v21 = chain_cooldown;
                v22 = v20 + chain_cooldown;
                if ( v22 != this->m_ChainTimer.m_timestamp.m_Value )
                {
                  v25 = v22;
                  (*(this->m_ChainTimer._vptr_CountdownTimer + 2))(&this->m_ChainTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  v21 = chain_cooldown;
                  this->m_ChainTimer.m_timestamp.m_Value = v25;
                }
                if ( v21 != this->m_ChainTimer.m_duration.m_Value )
                {
                  v27 = v21;
                  (*(this->m_ChainTimer._vptr_CountdownTimer + 2))(&this->m_ChainTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  this->m_ChainTimer.m_duration.m_Value = v27;
                }
                KeyValues::KeyValues(&kv, "modifier_mjollnir_chain");
                KeyValues::SetPtr(&kv, "target", v13);
                Ability = CDOTA_Buff::GetAbility(this);
                Caster = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(v17, Caster, Ability, "modifier_mjollnir_chain", &kv, 0);
                KeyValues::~KeyValues(&kv);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Mjollnir::OnAttackFail  (line 331, @0x0000000002dcfb90, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Mjollnir::OnAttackFail(
        CDOTA_Modifier_Item_Mjollnir *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance )
    CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord);
  return 1uLL;
}


// CDOTA_Modifier_Item_Mjollnir_Static::~CDOTA_Modifier_Item_Mjollnir_Static  (line 346, @0x0000000002dd6bb0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Mjollnir_Static::~CDOTA_Modifier_Item_Mjollnir_Static(
        CDOTA_Modifier_Item_Mjollnir_Static *const this)
{
  this->_vptr_CDOTA_Buff = &off_471E310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Mjollnir_Static::~CDOTA_Modifier_Item_Mjollnir_Static  (line 346, @0x0000000002dd6bd0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Mjollnir_Static
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Mjollnir_Static::~CDOTA_Modifier_Item_Mjollnir_Static(
        CDOTA_Modifier_Item_Mjollnir_Static *const this)
{
  this->_vptr_CDOTA_Buff = &off_471E310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Mjollnir_Static::OnCreated  (line 376, @0x0000000002dd2aa0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, DOTA_EmitSound
// strings: "static_chance", "static_strikes", "static_damage", "static_primary_radius", "static_seconary_radius", "static_radius" (8 total)
void __fastcall CDOTA_Modifier_Item_Mjollnir_Static::OnCreated(
        CDOTA_Modifier_Item_Mjollnir_Static *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->static_chance, "static_chance");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->static_strikes, "static_strikes");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->static_damage, "static_damage");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->static_primary_radius, "static_primary_radius");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->static_seconary_radius, "static_seconary_radius");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->static_radius, "static_radius");
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
    this->static_cooldown = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "static_cooldown", -1, 0);
  else
    this->static_cooldown = 0.0;
  Parent = CDOTA_Buff::GetParent(this);
  this->m_nMjollnirLoop = DOTA_EmitSound(8, "DOTA_Item.Mjollnir.Loop", Parent);
}


// CDOTA_Modifier_Item_Mjollnir_Static::OnDestroy  (line 401, @0x0000000002dcaf20, libserver.so)
// calls: CSoundOpGameSystem::StopSoundEvent, CDOTA_Buff::GetParent, DOTA_EmitSound
// strings: "DOTA_Item.Mjollnir.DeActivate"
void __fastcall CDOTA_Modifier_Item_Mjollnir_Static::OnDestroy(CDOTA_Modifier_Item_Mjollnir_Static *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nMjollnirLoop);
  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "DOTA_Item.Mjollnir.DeActivate", Parent);
}


// CDOTA_Modifier_Item_Mjollnir_Static::DeclareFunctions  (line 411, @0x0000000002dc6d10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Mjollnir_Static::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Mjollnir_Static::DeclareFunctions(CDOTA_Modifier_Item_Mjollnir_Static *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_Item_Mjollnir_Static::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Item_Mjollnir_Static::OnTakeDamage  (line 418, @0x0000000002dcf0d0, libserver.so)  // inlines: AttackerNPC, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsElapsed, IsValid, Length2D, LookupEntity, NetworkStateChanged, RandomVector, Set, Start, ToDOTABaseNPC, Unit, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=<float>, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CountdownTimer::Now, RollPseudoRandomPercentage, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, RandomInt, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle (20 total)
// strings: "particles/items_fx/chain_lightning.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Mjollnir_Static::OnTakeDamage(
        CDOTA_Modifier_Item_Mjollnir_Static *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  float fDamage; // r14d
  CDOTA_BaseNPC *Parent; // rax
  unsigned __int8 m_Value; // r13
  int static_radius; // r13d
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v15; // rax
  __m128i v16; // xmm0
  double v17; // xmm1_8
  double v18; // xmm2_8
  double v19; // xmm3_8
  double v20; // xmm4_8
  double v21; // xmm6_8
  __m128i v22; // xmm5
  float v23; // r13d
  int static_strikes; // r13d
  int m_Size; // esi
  int v26; // r12d
  CHandle<CBaseEntity> *v27; // rax
  uint32 v28; // ecx
  __int16 v29; // dx
  CEntityIdentity *v30; // rax
  CEntityIdentity *v31; // rax
  CEntityInstance *v32; // r15
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC *v34; // r15
  CDOTA_ParticleManager *v35; // rax
  int Particle; // eax
  CHandle<CBaseEntity> *v37; // r14
  int v38; // r15d
  CEntityIdentity *v39; // rdx
  CEntityIdentity *v40; // rdx
  CDOTA_ParticleManager *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  vec_t v43; // xmm2_4
  CDOTA_ParticleManager *v44; // rax
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  const Vector *v47; // r12
  CDOTA_BaseNPC *v48; // rax
  const Vector *v49; // rax
  __m128i v50; // xmm6
  float v51; // r12d
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v54; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v56; // rax
  CDOTA_BaseNPC *v57; // r13
  CDOTA_ParticleManager *v58; // rax
  vec_t v59; // xmm2_4
  CDOTA_ParticleManager *v60; // rax
  CDOTA_ParticleManager *v61; // rax
  CDOTA_ParticleManager *v62; // rax
  CDOTA_BaseNPC *pAttacker; // [rsp+20h] [rbp-90h]
  CDOTABaseAbility *pInflictor; // [rsp+28h] [rbp-88h]
  float flDamage; // [rsp+30h] [rbp-80h]
  float flDamageb; // [rsp+30h] [rbp-80h]
  const CBaseAnimating *flDamagea; // [rsp+30h] [rbp-80h]
  CDOTA_BaseNPC *flDamagec; // [rsp+30h] [rbp-80h]
  Vector v69; // [rsp+40h] [rbp-70h] BYREF
  Vector vecLightning; // [rsp+50h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+60h] [rbp-50h] BYREF

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hunit.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    fDamage = params->fDamage;
    if ( CountdownTimer::Now(&this->m_StaticTimer) >= this->m_StaticTimer.m_timestamp.m_Value && fDamage > 5.0 )
    {
      Parent = CDOTA_Buff::GetParent(this);
      if ( RollPseudoRandomPercentage(
             this->static_chance,
             DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR_STATIC,
             Parent) )
      {
        pAttacker = CEntityHandle::operator CEntityInstance *(&params->hattacker);
        if ( pAttacker != 0 && pAttacker->m_bIsDOTANPC )
        {
          m_Value = pAttacker->m_iTeamNum.m_Value;
          if ( m_Value != CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
          {
            entities.m_Size = 0;
            entities.m_Memory.m_pMemory = 0;
            static_radius = this->static_radius;
            entities.m_Memory.m_nAllocationCount = 0;
            entities.m_Memory.m_nGrowSize = 0;
            v13 = CDOTA_Buff::GetParent(this);
            AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
            v15 = CDOTA_Buff::GetParent(this);
            FindUnitsInRadius(v15->m_iTeamNum.m_Value, AbsOrigin, pAttacker, static_radius, &entities, 2, 19, 384, 0, 0);
            flDamage = this->static_cooldown;
            *v16.m128i_i32 = CountdownTimer::Now(&this->m_StaticTimer);
            v22 = v16;
            *v22.m128i_i32 = *v16.m128i_i32 + flDamage;
            v23 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
            if ( (*v16.m128i_i32 + flDamage) != this->m_StaticTimer.m_timestamp.m_Value )
            {
              (*(this->m_StaticTimer._vptr_CountdownTimer + 2))(&this->m_StaticTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              this->m_StaticTimer.m_timestamp.m_Value = v23;
            }
            if ( flDamage != this->m_StaticTimer.m_duration.m_Value )
            {
              (*(this->m_StaticTimer._vptr_CountdownTimer + 2))(
                &this->m_StaticTimer,
                8,
                0xFFFFFFFFLL,
                0xFFFFFFFFLL,
                *v16.m128i_i64,
                v17,
                v18,
                v19,
                v20,
                *v22.m128i_i64,
                v21,
                flDamage);
              this->m_StaticTimer.m_duration.m_Value = flDamage;
            }
            if ( (pAttacker->m_iUnitType & 0x10) == 0 )
            {
              v47 = CBaseEntity::GetAbsOrigin(pAttacker);
              v48 = CDOTA_Buff::GetParent(this);
              v49 = CBaseEntity::GetAbsOrigin(v48);
              if ( this->static_radius > fsqrt(
                                           ((v49->x - v47->x) * (v49->x - v47->x))
                                         + ((v49->y - v47->y) * (v49->y - v47->y))) )
              {
                *v50.m128i_i32 = this->static_damage;
                v51 = COERCE_FLOAT(_mm_cvtsi128_si32(v50));
                Ability = CDOTA_Buff::GetAbility(this);
                Caster = CDOTA_Buff::GetCaster(this);
                ApplyDamage(Caster, pAttacker, Ability, v51, 2, 0);
                v54 = CDOTA_Buff::GetCaster(this);
                ParticleManager = GetParticleManager();
                LODWORD(v54) = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 "particles/items_fx/chain_lightning.vpcf",
                                 2,
                                 0,
                                 0,
                                 v54);
                v56 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(
                  v56,
                  v54,
                  0,
                  pAttacker,
                  5,
                  "attach_hitloc",
                  vec3_invalid,
                  1);
                v57 = CDOTA_Buff::GetParent(this);
                v58 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v58, v54, 1, v57, 5, "attach_hitloc", vec3_invalid, 1);
                Vector::Random(&v69, 1.2, v59);
                vecLightning = v69;
                v60 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v60, v54, 2, *&vecLightning.x, vecLightning.z);
                v61 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleFoWProperties(v61, v54, 0, 1, 50.0);
                v62 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v62, v54);
              }
            }
            static_strikes = this->static_strikes;
            if ( static_strikes > 0 )
            {
              m_Size = entities.m_Size;
              if ( entities.m_Size > 0 )
              {
                while ( 1 )
                {
                  v26 = RandomInt(0, (m_Size - 1));
                  v27 = &entities.m_Memory.m_pMemory[v26];
                  v28 = v27->m_Index;
                  if ( v27->m_Index + 2 <= 1 )
                    break;
                  v29 = v27->m_Index;
                  v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v27->m_Index) >> 9) & 0x3F];
                  if ( v30 == 0 )
                    break;
                  v31 = &v30[v29 & 0x1FF];
                  if ( v31 == 0 )
                    break;
                  if ( v28 != v31->m_EHandle.m_Index )
                    break;
                  v32 = v31->m_pInstance;
                  if ( v31->m_pInstance == 0 || BYTE3(v32[7]._vptr_IHandleEntity) == 0 )
                    break;
                  if ( (v32[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 && pAttacker != v32 )
                    goto LABEL_28;
LABEL_34:
                  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&entities, v26);
                  if ( static_strikes > 0 )
                  {
                    m_Size = entities.m_Size;
                    if ( entities.m_Size > 0 )
                      continue;
                  }
                  goto LABEL_35;
                }
                v32 = 0;
LABEL_28:
                flDamageb = this->static_damage;
                pInflictor = CDOTA_Buff::GetAbility(this);
                v33 = CDOTA_Buff::GetCaster(this);
                ApplyDamage(v33, v32, pInflictor, flDamageb, 2, 0);
                v34 = CDOTA_Buff::GetCaster(this);
                v35 = GetParticleManager();
                Particle = CDOTA_ParticleManager::CreateParticle(
                             v35,
                             "particles/items_fx/chain_lightning.vpcf",
                             2,
                             0,
                             0,
                             v34);
                v37 = &entities.m_Memory.m_pMemory[v26];
                v38 = Particle;
                flDamagea = 0;
                if ( v37->m_Index + 2 > 1 )
                {
                  v39 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v37->m_Index) >> 9) & 0x3F];
                  if ( v39 != 0 )
                  {
                    v40 = &v39[v37->m_Index & 0x1FF];
                    if ( v40 != 0 && v37->m_Index == v40->m_EHandle.m_Index )
                      flDamagea = v40->m_pInstance;
                  }
                }
                v41 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(
                  v41,
                  v38,
                  0,
                  flDamagea,
                  5,
                  "attach_hitloc",
                  vec3_invalid,
                  1);
                flDamagec = CDOTA_Buff::GetParent(this);
                v42 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(
                  v42,
                  v38,
                  1,
                  flDamagec,
                  5,
                  "attach_hitloc",
                  vec3_invalid,
                  1);
                Vector::Random(&vecLightning, 1.2, v43);
                v44 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v44, v38, 2, *&vecLightning.x, vecLightning.z);
                v45 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleFoWProperties(v45, v38, 0, 1, 50.0);
                v46 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v46, v38);
                --static_strikes;
                goto LABEL_34;
              }
            }
LABEL_35:
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
          }
        }
      }
    }
  }
  return 1uLL;
}


