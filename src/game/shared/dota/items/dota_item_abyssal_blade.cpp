// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_abyssal_blade.cpp:26
class CDOTA_Item_Recipe_AbyssalBlade : public CDOTA_Item {
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
	CDOTA_Item_Recipe_AbyssalBlade(CDOTA_Item_Recipe_AbyssalBlade &);
	CDOTA_Item_Recipe_AbyssalBlade(CDOTA_Item_Recipe_AbyssalBlade &);
	CDOTA_Item_Recipe_AbyssalBlade();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_AbyssalBlade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_abyssal_blade.cpp:39
class CDOTA_Item_AbyssalBlade : public CDOTA_Item {
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
	CDOTA_Item_AbyssalBlade(CDOTA_Item_AbyssalBlade &);
	CDOTA_Item_AbyssalBlade(CDOTA_Item_AbyssalBlade &);
	CDOTA_Item_AbyssalBlade();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_AbyssalBlade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_abyssal_blade.cpp:76
class CDOTA_Modifier_Item_AbyssalBlade : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_strength;  // +0xbac
	int bash_chance_melee;  // +0xbb0
	int bash_chance_ranged;  // +0xbb4
	float bash_duration;  // +0xbb8
	float bash_cooldown;  // +0xbbc
	int bonus_chance_damage;  // +0xbc0
	int bonus_health;  // +0xbc4
	int bonus_health_regen;  // +0xbc8
	int block_damage_ranged;  // +0xbcc
	int block_damage_melee;  // +0xbd0
	int block_chance;  // +0xbd4
	CDOTA_Modifier_Item_AbyssalBlade();
	ModifierVariant_t GetModifierPreAttack(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Magical(const CModifierParams &);
	ModifierVariant_t GetModifierPostAttack(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPhysical_ConstantBlock(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_AbyssalBlade();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3056
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_AbyssalBlade::~CDOTA_Item_Recipe_AbyssalBlade  (line 26, @0x0000000002d640d0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_AbyssalBlade::~CDOTA_Item_Recipe_AbyssalBlade(
        CDOTA_Item_Recipe_AbyssalBlade *const this)
{
  this->_vptr_IHandleEntity = &off_4680430;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_AbyssalBlade::~CDOTA_Item_Recipe_AbyssalBlade  (line 26, @0x0000000002d640f0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_AbyssalBlade
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_AbyssalBlade::~CDOTA_Item_Recipe_AbyssalBlade(
        CDOTA_Item_Recipe_AbyssalBlade *const this)
{
  this->_vptr_IHandleEntity = &off_4680430;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_AbyssalBlade::Schema_DynamicBinding  (line 28, @0x0000000002d60390, libserver.so)
// globals: CDOTA_Item_Recipe_AbyssalBlade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_AbyssalBlade::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_AbyssalBlade *const this)
{
  return CDOTA_Item_Recipe_AbyssalBlade::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d603a0, libserver.so)
// globals: CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d603b0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_AbyssalBlade>
void __fastcall CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d603d0, libserver.so)
void __fastcall CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d603f0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d60400, libserver.so)
// globals: CDOTA_Item_Recipe_AbyssalBlade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_AbyssalBlade::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d621f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d63430, libserver.so)  // inlines: CDOTA_Item_Recipe_AbyssalBlade, Construct<CDOTA_Item_Recipe_AbyssalBlade>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4680430;
  }
  return p;
}


// CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d65ff0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d66010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal  (line 28, @0x0000000002d69540, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_recipe_abyssal_blade", "CDOTA_Item_Recipe_AbyssalBlade"
// globals: `guard variable for'CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass, CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass, __dso_handle, CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClassInfo, CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass);
    CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass._vptr_CEntityClass = off_46803B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_AbyssalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_AbyssalBladeClass != 0 )
    return &CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass;
  if ( `guard variable for'CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClassInfo,
      "CDOTA_Item_Recipe_AbyssalBlade",
      "item_recipe_abyssal_blade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClassInfo);
  }
  CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass.m_pClassInfo = &CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClassInfo;
  CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass.m_pBaseClassInfo = CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_AbyssalBladeClass = &CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass;
  CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClassInfo.m_pClass = &CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass;
  CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_AbyssalBladeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_AbyssalBladeClass;
}


// CDOTA_Item_AbyssalBlade::~CDOTA_Item_AbyssalBlade  (line 39, @0x0000000002d64120, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_AbyssalBlade::~CDOTA_Item_AbyssalBlade(CDOTA_Item_AbyssalBlade *const this)
{
  this->_vptr_IHandleEntity = &off_4681030;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_AbyssalBlade::~CDOTA_Item_AbyssalBlade  (line 39, @0x0000000002d64140, libserver.so)  // inlines: ~CDOTA_Item_AbyssalBlade
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_AbyssalBlade::~CDOTA_Item_AbyssalBlade(CDOTA_Item_AbyssalBlade *const this)
{
  this->_vptr_IHandleEntity = &off_4681030;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_AbyssalBlade::Schema_DynamicBinding  (line 41, @0x0000000002d60410, libserver.so)
// globals: CDOTA_Item_AbyssalBlade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_AbyssalBlade::Schema_DynamicBinding(
        const CDOTA_Item_AbyssalBlade *const this)
{
  return CDOTA_Item_AbyssalBlade::s_pSchemaBinding;
}


// CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002d60420, libserver.so)
// globals: CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002d60430, libserver.so)  // inlines: Destruct<CDOTA_Item_AbyssalBlade>
void __fastcall CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002d60450, libserver.so)
void __fastcall CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002d60470, libserver.so)
bool __fastcall CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002d60480, libserver.so)
// globals: CDOTA_Item_AbyssalBlade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_AbyssalBlade::s_pSchemaBinding;
}


// CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002d62230, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002d63460, libserver.so)  // inlines: CDOTA_Item_AbyssalBlade, Construct<CDOTA_Item_AbyssalBlade>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4681030;
  }
  return p;
}


// CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d66040, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d66060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_AbyssalBlade::GetEntityClassInternal  (line 41, @0x0000000002d69690, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_AbyssalBlade", "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility", "CBaseEntity" (7 total)
// globals: `guard variable for'CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass, CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass, __dso_handle, CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AbyssalBladeClassInfo, CDOTA_Item_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AbyssalBladeClassInfo, `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo (14 total)
CEntityClass *__cdecl CDOTA_Item_AbyssalBlade::GetEntityClassInternal()
{
  if ( `guard variable for'CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass);
    CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass._vptr_CEntityClass = off_4680FB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass);
    __cxa_atexit(
      CDOTA_Item_AbyssalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_AbyssalBladeClass != 0 )
    return &CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass;
  if ( `guard variable for'CDOTA_Item_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AbyssalBladeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AbyssalBladeClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo) != 0 )
    {
      if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
      {
        if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
          && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
        {
          if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
            && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
          {
            CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
              &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
              "CGameEntity",
              0,
              0,
              &g_EntityRootClassInfo);
            __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
          }
          CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
            &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
            "CBaseEntity",
            0,
            0,
            &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
          __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
        }
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
          "CDOTABaseAbility",
          "dota_base_ability",
          0,
          &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
        __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo,
        "CDOTA_Item",
        "dota_item",
        0,
        &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AbyssalBladeClassInfo,
      "CDOTA_Item_AbyssalBlade",
      "item_abyssal_blade",
      0,
      &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AbyssalBladeClassInfo);
  }
  CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass.m_pClassInfo = &CDOTA_Item_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AbyssalBladeClassInfo;
  CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass.m_pBaseClassInfo = CDOTA_Item_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AbyssalBladeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_AbyssalBladeClass = &CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass;
  CDOTA_Item_AbyssalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_AbyssalBladeClassInfo.m_pClass = &CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass;
  CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_AbyssalBladeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_AbyssalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_AbyssalBladeClass;
}


// CDOTA_Item_AbyssalBlade::GetIntrinsicModifierName  (line 43, @0x0000000002d60490, libserver.so)
// strings: "modifier_item_abyssal_blade"
const char *__fastcall CDOTA_Item_AbyssalBlade::GetIntrinsicModifierName(CDOTA_Item_AbyssalBlade *const this)
{
  return "modifier_item_abyssal_blade";
}


// CDOTA_Item_AbyssalBlade::OnSpellStart  (line 53, @0x0000000002d5ca30, libserver.so)  // inlines: InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound (15 total)
// strings: "particles/items_fx/abyssal_blade.vpcf", "modifier_bashed", "DOTA_Item.AbyssalBlade.Activate"
void __fastcall CDOTA_Item_AbyssalBlade::OnSpellStart(CDOTA_Item_AbyssalBlade *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v6; // rax
  CDOTA_ParticleManager *v7; // rax
  float v8; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/items_fx/abyssal_blade.vpcf",
                 2,
                 v3,
                 0,
                 0);
    v6 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v6, Particle, 0, v3, 1, 0, vec3_invalid, 1);
    v7 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v7, Particle);
    KeyValues::KeyValues(&kv, "modifier_bashed");
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
    KeyValues::SetFloat(&kv, "duration", v8);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_bashed", &kv, 0);
    DOTA_EmitSound(8, "DOTA_Item.AbyssalBlade.Activate", v3);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Item_AbyssalBlade::~CDOTA_Modifier_Item_AbyssalBlade  (line 76, @0x0000000002d630c0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_AbyssalBlade::~CDOTA_Modifier_Item_AbyssalBlade(
        CDOTA_Modifier_Item_AbyssalBlade *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_AbyssalBlade::~CDOTA_Modifier_Item_AbyssalBlade  (line 76, @0x0000000002d630e0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_AbyssalBlade
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_AbyssalBlade::~CDOTA_Modifier_Item_AbyssalBlade(
        CDOTA_Modifier_Item_AbyssalBlade *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_AbyssalBlade::DeclareFunctions  (line 116, @0x0000000002d53930, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_AbyssalBlade::GetModifierPreAttack(CModifierParams const&), CDOTA_Modifier_Item_AbyssalBlade::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_AbyssalBlade::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_AbyssalBlade::GetModifierProcAttack_BonusDamage_Magical(CModifierParams const&), CDOTA_Modifier_Item_AbyssalBlade::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_Item_AbyssalBlade::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_AbyssalBlade::GetModifierPhysical_ConstantBlock(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_AbyssalBlade::DeclareFunctions(CDOTA_Modifier_Item_AbyssalBlade *const this)
{
  this->m_Functions[8].__pfn = CDOTA_Modifier_Item_AbyssalBlade::GetModifierPreAttack;
  this->m_Functions[8].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_AbyssalBlade::GetModifierPreAttack_BonusDamage;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_AbyssalBlade::GetModifierBonusStats_Strength;
  this->m_Functions[5].__pfn = CDOTA_Modifier_Item_AbyssalBlade::GetModifierProcAttack_BonusDamage_Magical;
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_AbyssalBlade::GetModifierHealthBonus;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_AbyssalBlade::GetModifierConstantHealthRegen;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[5].__delta = 0;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[86].__pfn = CDOTA_Modifier_Item_AbyssalBlade::GetModifierPhysical_ConstantBlock;
  this->m_Functions[86].__delta = 0;
}


// CDOTA_Modifier_Item_AbyssalBlade::OnCreated  (line 127, @0x0000000002d5d220, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bash_chance_melee", "bash_chance_ranged", "bash_duration", "bash_cooldown", "bonus_chance_damage", "bonus_health" (9 total)
void __fastcall CDOTA_Modifier_Item_AbyssalBlade::OnCreated(
        CDOTA_Modifier_Item_AbyssalBlade *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax
  CDOTABaseAbility *v12; // rax
  CDOTABaseAbility *v13; // rax
  CDOTABaseAbility *v14; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_damage, "bonus_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_strength, "bonus_strength");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->bash_chance_melee, "bash_chance_melee");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->bash_chance_ranged, "bash_chance_ranged");
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
  {
    this->bash_duration = 0.0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bash_cooldown = 0.0;
    goto LABEL_4;
  }
  this->bash_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "bash_duration", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bash_cooldown = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "bash_cooldown", -1, 0);
LABEL_4:
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->bonus_chance_damage, "bonus_chance_damage");
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, &this->bonus_health, "bonus_health");
  v11 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v11, &this->bonus_health_regen, "bonus_health_regen");
  v12 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v12, &this->block_damage_ranged, "block_damage_ranged");
  v13 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v13, &this->block_damage_melee, "block_damage_melee");
  v14 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v14, &this->block_chance, "block_chance");
}


// CDOTA_Modifier_Item_AbyssalBlade::GetModifierPreAttack_BonusDamage  (line 147, @0x0000000002d539f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_AbyssalBlade::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_AbyssalBlade *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_AbyssalBlade::GetModifierBonusStats_Strength  (line 152, @0x0000000002d53a10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_AbyssalBlade::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_AbyssalBlade *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_AbyssalBlade::GetModifierHealthBonus  (line 157, @0x0000000002d53a30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_AbyssalBlade::GetModifierHealthBonus(
        CDOTA_Modifier_Item_AbyssalBlade *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_AbyssalBlade::GetModifierConstantHealthRegen  (line 162, @0x0000000002d53a50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_AbyssalBlade::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_AbyssalBlade *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_AbyssalBlade::GetModifierPhysical_ConstantBlock  (line 167, @0x0000000002d54c90, libserver.so)
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Item_AbyssalBlade::GetModifierPhysical_ConstantBlock(
        CDOTA_Modifier_Item_AbyssalBlade *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rax
  __m128i v6; // xmm0
  int block_damage_melee; // edx
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  if ( !RollPseudoRandomPercentage(
          this->block_chance,
          DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_ABYSSAL_BLOCK,
          Parent) )
    return 1uLL;
  Caster = CDOTA_Buff::GetCaster(this);
  block_damage_melee = this->block_damage_melee;
  if ( (Caster->m_iAttackCapabilities.m_Value & 2) != 0 )
    block_damage_melee = this->block_damage_ranged;
  *v6.m128i_i32 = block_damage_melee;
  *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Item_AbyssalBlade::GetModifierPreAttack  (line 179, @0x0000000002d58970, libserver.so)  // inlines: AttackerNPC, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, InState, IndexToIdentity, IsElapsed, IsInvulnerable, IsValid, LookupEntity, String, TargetNPC, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CountdownTimer::Now, RollPseudoRandomPercentage, CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_BaseNPC::PreventCritOrBashAnimations, CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy
// strings: "npc_dota_hero_spirit_breaker", "modifier_faceless_void_time_lock", "npc_dota_hero_slardar", "npc_dota_hero_troll_warlord", "npc_dota_hero_faceless_void"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_AbyssalBlade::GetModifierPreAttack(
        CDOTA_Modifier_Item_AbyssalBlade *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r14
  unsigned int bash_chance_ranged; // r13d
  const char *m_pAsString; // rsi
  const char *v11; // rsi
  const char *v12; // rsi
  const char *v13; // rsi
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v15; // rax
  CEntityInstance *v16; // rax
  int m_Id; // eax
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  CDOTA_AttackRecord *v21; // rbx

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hattacker.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  bash_chance_ranged = this->bash_chance_ranged;
  if ( (*(&m_pInstance[50].m_worldGroupId + 1) & 2) == 0 )
    bash_chance_ranged = this->bash_chance_melee;
  if ( params->bCraniumBasherTested )
    return 1uLL;
  params->bCraniumBasherTested = 1;
  m_pAsString = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString != 0 )
  {
    if ( m_pAsString == "npc_dota_hero_slardar" )
      return 1uLL;
    if ( strcmp(m_pAsString, "npc_dota_hero_slardar") == 0 )
      return 1uLL;
  }
  v11 = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( v11 == 0 || v11 != "npc_dota_hero_troll_warlord" && strcmp(v11, "npc_dota_hero_troll_warlord") != 0 )
  {
    v12 = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
    if ( v12 == 0 || v12 != "npc_dota_hero_faceless_void" && strcmp(v12, "npc_dota_hero_faceless_void") != 0 )
    {
      v13 = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
      if ( (v13 == 0 || v13 != "npc_dota_hero_spirit_breaker" && strcmp(v13, "npc_dota_hero_spirit_breaker") != 0)
        && LOBYTE(m_pInstance[71].m_pEntity) == 0
        && CountdownTimer::Now(&this->m_StaticTimer) >= this->m_StaticTimer.m_timestamp.m_Value )
      {
        Parent = CDOTA_Buff::GetParent(this);
        if ( RollPseudoRandomPercentage(
               bash_chance_ranged,
               DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_ABYSSAL,
               Parent) )
        {
          v15 = CDOTA_Buff::GetParent(this);
          if ( CDOTA_BaseNPC::FindModifierByName(v15, "modifier_faceless_void_time_lock", 0) == 0 )
          {
            v16 = CEntityHandle::operator CEntityInstance *(&params->htarget);
            if ( v16 != 0
              && BYTE3(v16[7]._vptr_IHandleEntity) != 0
              && LOBYTE(v16[71]._vptr_IHandleEntity) == 0
              && (BYTE1(v16[58]._vptr_IHandleEntity) & 1) == 0 )
            {
              m_Id = v16[43].m_iszPrivateVScripts.u.m_Id;
              if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 )
              {
                iRecord = params->iRecord;
                AttackRecordsManager = GetAttackRecordsManager();
                RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
                v21 = RecordByIndex;
                if ( RecordByIndex != 0 && RecordByIndex->m_nBashSource == 0 )
                {
                  RecordByIndex->m_nBashSource = this->m_iSerialNumber;
                  if ( !CDOTA_BaseNPC::PreventCritOrBashAnimations(m_pInstance)
                    && CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(m_pInstance, 1705).m_Data != -1 )
                  {
                    v21->m_animation = 1705;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_AbyssalBlade::GetModifierProcAttack_BonusDamage_Magical  (line 221, @0x0000000002d583b0, libserver.so)  // inlines: AttackerNPC, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, InState, IndexToIdentity, IsElapsed, IsInvulnerable, IsValid, LookupEntity, NetworkStateChanged, Set, Start, String, TargetNPC, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator=<float>
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CountdownTimer::Now, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, _Unwind_Resume
// strings: "npc_dota_hero_spirit_breaker", "modifier_bashed", "DOTA_Item.SkullBasher", "npc_dota_hero_slardar", "npc_dota_hero_troll_warlord", "npc_dota_hero_faceless_void"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_AbyssalBlade::GetModifierProcAttack_BonusDamage_Magical(
        CDOTA_Modifier_Item_AbyssalBlade *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const char *m_pAsString; // rsi
  const char *v9; // rsi
  const char *v10; // rsi
  const char *v11; // rsi
  __int64 iRecord; // r13
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  uint32 v15; // ecx
  CEntityIdentity *v16; // rax
  CEntityIdentity *v17; // rax
  CEntityInstance *m_pInstance; // rbx
  int m_Id; // eax
  float v20; // xmm1_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *Parent; // rax
  __m128i v23; // xmm0
  double v24; // xmm1_8
  double v25; // xmm3_8
  __m128i v26; // xmm5
  __m128i v27; // xmm2
  float v28; // ebx
  float bash_cooldown; // [rsp+8h] [rbp-58h]
  unsigned __int64 v30; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v32 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_5;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    goto LABEL_5;
  v5 = &v4[params->hattacker.m_Index & 0x1FF];
  if ( v5 == 0 )
    goto LABEL_5;
  if ( m_Index != v5->m_EHandle.m_Index )
    goto LABEL_5;
  if ( v5->m_pInstance == 0 )
    goto LABEL_5;
  if ( BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_5;
  if ( params->bCraniumBasherTested )
    goto LABEL_5;
  params->bCraniumBasherTested = 1;
  m_pAsString = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString != 0 && (m_pAsString == "npc_dota_hero_slardar" || strcmp(m_pAsString, "npc_dota_hero_slardar") == 0) )
    goto LABEL_5;
  v9 = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( v9 != 0 && (v9 == "npc_dota_hero_troll_warlord" || strcmp(v9, "npc_dota_hero_troll_warlord") == 0) )
    goto LABEL_5;
  v10 = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( v10 != 0 && (v10 == "npc_dota_hero_faceless_void" || strcmp(v10, "npc_dota_hero_faceless_void") == 0) )
    goto LABEL_5;
  v11 = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( v11 != 0 && (v11 == "npc_dota_hero_spirit_breaker" || strcmp(v11, "npc_dota_hero_spirit_breaker") == 0) )
    goto LABEL_5;
  if ( CountdownTimer::Now(&this->m_StaticTimer) < this->m_StaticTimer.m_timestamp.m_Value )
    goto LABEL_5;
  iRecord = params->iRecord;
  AttackRecordsManager = GetAttackRecordsManager();
  RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
  if ( RecordByIndex == 0
    || RecordByIndex->m_nBashSource != this->m_iSerialNumber
    || (v15 = params->htarget.m_Index) + 2 <= 1
    || (v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v17 = &v16[params->htarget.m_Index & 0x1FF]) == 0
    || v15 != v17->m_EHandle.m_Index
    || (m_pInstance = v17->m_pInstance, v17->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || LOBYTE(m_pInstance[71]._vptr_IHandleEntity) != 0
    || (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) != 0
    || ((m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id) & 0x10) != 0
    || (m_Id & 0x193) == 0 )
  {
LABEL_5:
    *&result.m_eType = 1;
  }
  else
  {
    KeyValues::KeyValues(&kv, "modifier_bashed");
    KeyValues::SetFloat(&kv, "duration", v20);
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, Parent, Ability, "modifier_bashed", &kv, 0);
    CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "DOTA_Item.SkullBasher", 0.0, 0, 0);
    bash_cooldown = this->bash_cooldown;
    *v23.m128i_i32 = CountdownTimer::Now(&this->m_StaticTimer);
    v27 = v23;
    *v27.m128i_i32 = *v23.m128i_i32 + bash_cooldown;
    v28 = COERCE_FLOAT(_mm_cvtsi128_si32(v27));
    if ( (*v23.m128i_i32 + bash_cooldown) != this->m_StaticTimer.m_timestamp.m_Value )
    {
      (*(this->m_StaticTimer._vptr_CountdownTimer + 2))(&this->m_StaticTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_StaticTimer.m_timestamp.m_Value = v28;
    }
    if ( bash_cooldown != this->m_StaticTimer.m_duration.m_Value )
    {
      (*(this->m_StaticTimer._vptr_CountdownTimer + 2))(
        &this->m_StaticTimer,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        *v23.m128i_i64,
        v24,
        *v27.m128i_i64,
        v25,
        bash_cooldown);
      this->m_StaticTimer.m_duration.m_Value = bash_cooldown;
    }
    *v26.m128i_i32 = this->bonus_chance_damage;
    v30 = (_mm_cvtsi128_si32(v26) << 32) | 1;
    KeyValues::~KeyValues(&kv);
    *&result.m_eType = v30;
  }
  result.m_szVal = 0;
  return result;
}


