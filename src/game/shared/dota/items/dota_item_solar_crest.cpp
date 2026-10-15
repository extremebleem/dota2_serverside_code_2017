// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_solar_crest.cpp:27
class CDOTA_Item_Recipe_Solar_Crest : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Solar_Crest(CDOTA_Item_Recipe_Solar_Crest &);
	CDOTA_Item_Recipe_Solar_Crest(CDOTA_Item_Recipe_Solar_Crest &);
	CDOTA_Item_Recipe_Solar_Crest();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Solar_Crest();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_solar_crest.cpp:39
class CDOTA_Item_Solar_Crest : public CDOTA_Item {
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
	CDOTA_Item_Solar_Crest(CDOTA_Item_Solar_Crest &);
	CDOTA_Item_Solar_Crest(CDOTA_Item_Solar_Crest &);
	CDOTA_Item_Solar_Crest();
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
	virtual ~CDOTA_Item_Solar_Crest();
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

// src/game/shared/dota/items/dota_item_solar_crest.cpp:52
class C_CDOTA_Item_Solar_Crest_MapInstall {
	C_CDOTA_Item_Solar_Crest_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_solar_crest.cpp:113
class CDOTA_Modifier_Item_Solar_Crest : public CDOTA_Buff_Item {
public:

private:

	int bonus_evasion;  // +0xba8
	int bonus_armor;  // +0xbac
	int bonus_mana_regen_pct;  // +0xbb0
	CDOTA_Modifier_Item_Solar_Crest();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierEvasion_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierUnitStatsNeedsRefresh(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Solar_Crest();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[90] GetModifierPhysicalArmorBonus
	// vtable[91] GetModifierPercentageManaRegen
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_solar_crest.cpp:192
class CDOTA_Modifier_Item_Solar_Crest_Armor_Addition : public CDOTA_Buff {
public:

private:

	int allied_armor;  // +0xba8
	int allied_evasion;  // +0xbac
	float m_flBaseArmor;  // +0xbb0
	CDOTA_Modifier_Item_Solar_Crest_Armor_Addition();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierEvasion_Constant(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual bool IsDebuff();
	virtual ~CDOTA_Modifier_Item_Solar_Crest_Armor_Addition();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPhysicalArmorBonus
	// vtable[12] IsDebuff
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_solar_crest.cpp:301
class CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction : public CDOTA_Buff {
public:

private:

	int armor_reduction;  // +0xba8
	int miss_chance;  // +0xbac
	float m_flBaseArmor;  // +0xbb0
	CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierMiss_Percentage(const CModifierParams &);
	virtual bool IsDebuff();
	virtual ~CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPhysicalArmorBonus
	// vtable[12] IsDebuff
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Solar_Crest::~CDOTA_Item_Recipe_Solar_Crest  (line 27, @0x0000000002e0f080, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Solar_Crest::~CDOTA_Item_Recipe_Solar_Crest(
        CDOTA_Item_Recipe_Solar_Crest *const this)
{
  this->_vptr_IHandleEntity = &off_4770710;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Solar_Crest::~CDOTA_Item_Recipe_Solar_Crest  (line 27, @0x0000000002e0f0a0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Solar_Crest
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Solar_Crest::~CDOTA_Item_Recipe_Solar_Crest(
        CDOTA_Item_Recipe_Solar_Crest *const this)
{
  this->_vptr_IHandleEntity = &off_4770710;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Solar_Crest::Schema_DynamicBinding  (line 29, @0x0000000002e0b820, libserver.so)
// globals: CDOTA_Item_Recipe_Solar_Crest::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Solar_Crest::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Solar_Crest *const this)
{
  return CDOTA_Item_Recipe_Solar_Crest::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002e0b830, libserver.so)
// globals: CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002e0b840, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Solar_Crest>
void __fastcall CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002e0b860, libserver.so)
void __fastcall CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002e0b880, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002e0b890, libserver.so)
// globals: CDOTA_Item_Recipe_Solar_Crest::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Solar_Crest::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002e0d440, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002e0e470, libserver.so)  // inlines: CDOTA_Item_Recipe_Solar_Crest, Construct<CDOTA_Item_Recipe_Solar_Crest>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4770710;
  }
  return p;
}


// CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002e10d30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002e10d50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal  (line 29, @0x0000000002e14790, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_recipe_solar_crest", "CDOTA_Item_Recipe_Solar_Crest"
// globals: `guard variable for'CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass, CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass, __dso_handle, CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClassInfo, CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass);
    CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass._vptr_CEntityClass = off_4770690;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Solar_Crest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Solar_CrestClass != 0 )
    return &CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClassInfo,
      "CDOTA_Item_Recipe_Solar_Crest",
      "item_recipe_solar_crest",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClassInfo);
  }
  CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass.m_pClassInfo = &CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClassInfo;
  CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Solar_CrestClass = &CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass;
  CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClassInfo.m_pClass = &CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass;
  CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Solar_CrestClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Solar_CrestClass;
}


// CDOTA_Item_Solar_Crest::~CDOTA_Item_Solar_Crest  (line 39, @0x0000000002e0f0d0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Solar_Crest::~CDOTA_Item_Solar_Crest(CDOTA_Item_Solar_Crest *const this)
{
  this->_vptr_IHandleEntity = &off_4771310;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Solar_Crest::~CDOTA_Item_Solar_Crest  (line 39, @0x0000000002e0f0f0, libserver.so)  // inlines: ~CDOTA_Item_Solar_Crest
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Solar_Crest::~CDOTA_Item_Solar_Crest(CDOTA_Item_Solar_Crest *const this)
{
  this->_vptr_IHandleEntity = &off_4771310;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Solar_Crest::Schema_DynamicBinding  (line 41, @0x0000000002e0b8a0, libserver.so)
// globals: CDOTA_Item_Solar_Crest::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Solar_Crest::Schema_DynamicBinding(
        const CDOTA_Item_Solar_Crest *const this)
{
  return CDOTA_Item_Solar_Crest::s_pSchemaBinding;
}


// CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002e0b8b0, libserver.so)
// globals: CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002e0b8c0, libserver.so)  // inlines: Destruct<CDOTA_Item_Solar_Crest>
void __fastcall CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002e0b8e0, libserver.so)
void __fastcall CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002e0b900, libserver.so)
bool __fastcall CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002e0b910, libserver.so)
// globals: CDOTA_Item_Solar_Crest::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Solar_Crest::s_pSchemaBinding;
}


// CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002e0d480, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002e0e4a0, libserver.so)  // inlines: CDOTA_Item_Solar_Crest, Construct<CDOTA_Item_Solar_Crest>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4771310;
  }
  return p;
}


// CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002e10d80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002e10da0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Solar_Crest::GetEntityClassInternal  (line 41, @0x0000000002e148e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "CDOTA_Item_Solar_Crest"
// globals: `guard variable for'CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass, CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass, __dso_handle, CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Solar_CrestClassInfo, CDOTA_Item_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Solar_CrestClassInfo
CEntityClass *__cdecl CDOTA_Item_Solar_Crest::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass);
    CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass._vptr_CEntityClass = off_4771290;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass);
    __cxa_atexit(
      CDOTA_Item_Solar_Crest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Solar_CrestClass != 0 )
    return &CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass;
  if ( `guard variable for'CDOTA_Item_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Solar_CrestClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Solar_CrestClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Solar_CrestClassInfo,
      "CDOTA_Item_Solar_Crest",
      "item_solar_crest",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Solar_CrestClassInfo);
  }
  CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass.m_pClassInfo = &CDOTA_Item_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Solar_CrestClassInfo;
  CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass.m_pBaseClassInfo = CDOTA_Item_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Solar_CrestClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Solar_CrestClass = &CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass;
  CDOTA_Item_Solar_Crest::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Solar_CrestClassInfo.m_pClass = &CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass;
  CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Solar_CrestClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Solar_Crest::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Solar_CrestClass;
}


// CDOTA_Item_Solar_Crest::GetIntrinsicModifierName  (line 44, @0x0000000002e0b920, libserver.so)
// strings: "modifier_item_solar_crest"
const char *__fastcall CDOTA_Item_Solar_Crest::GetIntrinsicModifierName(CDOTA_Item_Solar_Crest *const this)
{
  return "modifier_item_solar_crest";
}


// CDOTA_Item_Solar_Crest::YouForgotToImplementOrDeclareServerClass  (line 52, @0x0000000002dff080, libserver.so)
int __fastcall CDOTA_Item_Solar_Crest::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Solar_Crest *const this)
{
  return 0;
}


// CDOTA_Item_Solar_Crest::GetServerClass  (line 52, @0x0000000002e02f60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Solar_Crest::GetServerClass(CDOTA_Item_Solar_Crest *const this)
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


// CDOTA_Item_Solar_Crest::CastFilterResult  (line 61, @0x0000000002e00040, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Item_Solar_Crest::CastFilterResult(CDOTA_Item_Solar_Crest *const this, CDOTA_BaseNPC *pTarget)
{
  if ( CDOTABaseAbility::GetCaster(this) == pTarget )
    return 23;
  else
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
}


// CDOTA_Item_Solar_Crest::GetCustomCastError  (line 71, @0x0000000002e00080, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Item_Solar_Crest::GetCustomCastError(
        CDOTA_Item_Solar_Crest *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  const char *v4; // rdx

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = "#dota_hud_error_cant_cast_on_self";
  if ( Caster != pTarget )
    return "";
  return v4;
}


// CDOTA_Item_Solar_Crest::OnSpellStart  (line 81, @0x0000000002e08990, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_solar_crest_armor", "modifier_item_solar_crest_armor_reduction", "Item.StarEmblem.Enemy", "modifier_item_solar_crest_armor_addition", "Item.StarEmblem.Friendly"
void __fastcall CDOTA_Item_Solar_Crest::OnSpellStart(CDOTA_Item_Solar_Crest *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  unsigned __int8 m_Value; // r14
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_item_solar_crest_armor");
    KeyValues::SetFloat(&kv, "duration", v4);
    m_Value = v3->m_iTeamNum.m_Value;
    if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_item_solar_crest_armor_addition", &kv, 0);
      DOTA_EmitSound(10, "Item.StarEmblem.Friendly", v3);
    }
    else
    {
      v6 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v6, this, "modifier_item_solar_crest_armor_reduction", &kv, 0);
      DOTA_EmitSound(10, "Item.StarEmblem.Enemy", v3);
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Item_Solar_Crest::~CDOTA_Modifier_Item_Solar_Crest  (line 113, @0x0000000002e0df70, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Solar_Crest::~CDOTA_Modifier_Item_Solar_Crest(
        CDOTA_Modifier_Item_Solar_Crest *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Solar_Crest::~CDOTA_Modifier_Item_Solar_Crest  (line 113, @0x0000000002e0df90, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Solar_Crest
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Solar_Crest::~CDOTA_Modifier_Item_Solar_Crest(
        CDOTA_Modifier_Item_Solar_Crest *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Solar_Crest::OnCreated  (line 137, @0x0000000002e08100, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_evasion", "bonus_mana_regen_pct"
void __fastcall CDOTA_Modifier_Item_Solar_Crest::OnCreated(CDOTA_Modifier_Item_Solar_Crest *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_evasion = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_evasion", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_armor = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_evasion = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_armor", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_mana_regen_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_mana_regen_pct", -1, 0);
    return;
  }
LABEL_7:
  this->bonus_mana_regen_pct = 0;
}


// CDOTA_Modifier_Item_Solar_Crest::DeclareFunctions  (line 146, @0x0000000002dff090, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Solar_Crest::GetModifierEvasion_Constant(CModifierParams const&), CDOTA_Modifier_Item_Solar_Crest::GetModifierUnitStatsNeedsRefresh(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Solar_Crest::DeclareFunctions(CDOTA_Modifier_Item_Solar_Crest *const this)
{
  this->m_Functions[40].__pfn = CDOTA_Modifier_Item_Solar_Crest::GetModifierEvasion_Constant;
  this->m_Functions[45].__pfn = (&stru_10 + 705);
  this->m_Functions[45].__delta = 0;
  this->m_Functions[54].__pfn = (&stru_10 + 713);
  this->m_Functions[54].__delta = 0;
  this->m_Functions[40].__delta = 0;
  this->m_Functions[114].__pfn = CDOTA_Modifier_Item_Solar_Crest::GetModifierUnitStatsNeedsRefresh;
  this->m_Functions[114].__delta = 0;
}


// CDOTA_Modifier_Item_Solar_Crest::GetModifierUnitStatsNeedsRefresh  (line 156, @0x0000000002dff100, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Solar_Crest::GetModifierUnitStatsNeedsRefresh(
        CDOTA_Modifier_Item_Solar_Crest *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Item_Solar_Crest::GetModifierEvasion_Constant  (line 163, @0x0000000002e00650, libserver.so)
// calls: CDOTA_Buff_Item::GetItem
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Solar_Crest::GetModifierEvasion_Constant(
        CDOTA_Modifier_Item_Solar_Crest *const this,
        const CModifierParams *const params)
{
  CDOTA_Item *Item; // rax
  __m128i v4; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff_Item::GetItem(this) == 0 )
    return 1uLL;
  Item = CDOTA_Buff_Item::GetItem(this);
  if ( (*(Item->_vptr_IHandleEntity + 245))(Item) == 0 )
    return 1uLL;
  *v4.m128i_i32 = this->bonus_evasion;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Solar_Crest::GetModifierPhysicalArmorBonus  (line 173, @0x0000000002e006b0, libserver.so)
// calls: CDOTA_Buff_Item::GetItem
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Solar_Crest::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Solar_Crest *const this,
        const CModifierParams *const params)
{
  CDOTA_Item *Item; // rax
  __m128i v4; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff_Item::GetItem(this) == 0 )
    return 1uLL;
  Item = CDOTA_Buff_Item::GetItem(this);
  if ( (*(Item->_vptr_IHandleEntity + 245))(Item) == 0 )
    return 1uLL;
  *v4.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Solar_Crest::GetModifierPercentageManaRegen  (line 183, @0x0000000002dff120, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Solar_Crest::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_Solar_Crest *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::~CDOTA_Modifier_Item_Solar_Crest_Armor_Addition  (line 192, @0x0000000002e0e290, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::~CDOTA_Modifier_Item_Solar_Crest_Armor_Addition(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Addition *const this)
{
  this->_vptr_CDOTA_Buff = &off_4772210;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::~CDOTA_Modifier_Item_Solar_Crest_Armor_Addition  (line 192, @0x0000000002e0e2b0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Solar_Crest_Armor_Addition
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::~CDOTA_Modifier_Item_Solar_Crest_Armor_Addition(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Addition *const this)
{
  this->_vptr_CDOTA_Buff = &off_4772210;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::IsDebuff  (line 205, @0x0000000002e0b930, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::IsDebuff(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Addition *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::OnCreated  (line 219, @0x0000000002e082a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent
// strings: "allied_armor", "allied_evasion"
void __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::OnCreated(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Addition *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->allied_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "allied_armor", -1, 0);
  else
    this->allied_armor = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->allied_evasion = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "allied_evasion", -1, 0);
  else
    this->allied_evasion = 0;
  Parent = CDOTA_Buff::GetParent(this);
  this->m_flBaseArmor = (*(Parent->_vptr_IHandleEntity + 424))(Parent);
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    v6 = CDOTA_Buff::GetParent(this);
    if ( v6 != 0 && (v6->m_iUnitType & 1) != 0 )
      this->m_flBaseArmor = ((*(v6->_vptr_IHandleEntity + 497))(v6) * 0.14) + this->m_flBaseArmor;
  }
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::DeclareFunctions  (line 242, @0x0000000002dff140, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::GetModifierEvasion_Constant(CModifierParams const&), CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::OnAttackFail(CModifierParams const&), CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::DeclareFunctions(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Addition *const this)
{
  this->m_Functions[40].__pfn = CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::GetModifierEvasion_Constant;
  this->m_Functions[45].__pfn = (&stru_10 + 697);
  this->m_Functions[45].__delta = 0;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::OnAttackFail;
  this->m_Functions[40].__delta = 0;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::GetModifierPhysicalArmorBonus  (line 252, @0x0000000002dff1b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Addition *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->allied_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::GetModifierEvasion_Constant  (line 259, @0x0000000002dff1d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::GetModifierEvasion_Constant(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Addition *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->allied_evasion;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::OnAttackFail  (line 266, @0x0000000002e024b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, DevMsg(char const*,...), CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_CombatLog::AddHeroSavedEvent
// strings: "Hero evaded a lethal attack with Solar Crest!\n"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::OnAttackFail(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Addition *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float fDamage; // ebx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *Caster; // rbx
  CDOTABaseAbility *Ability; // rax

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->htarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          fDamage = params->fDamage;
          Parent = CDOTA_Buff::GetParent(this);
          if ( fDamage >= CBaseEntity::GetHealth(Parent) )
          {
            DevMsg("Hero evaded a lethal attack with Solar Crest!\n");
            v11 = CDOTA_Buff::GetParent(this);
            Caster = CDOTA_Buff::GetCaster(this);
            Ability = CDOTA_Buff::GetAbility(this);
            CDOTA_CombatLog::AddHeroSavedEvent(&g_DOTACombatLog, Ability, Caster, v11, 0);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::OnTakeDamage  (line 280, @0x0000000002e025b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, DevMsg(char const*,...), CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_CombatLog::AddHeroSavedEvent
// strings: "Solar Crest Bonus Armor prevented a lethal attack!\n", "Original Damage: %f\n", "Health Before: %d\n", "Health Remaining: %d\n"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Addition::OnTakeDamage(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Addition *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float fOriginalDamage; // r13d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  int Health; // eax
  CDOTA_BaseNPC *v14; // rax
  int v15; // eax
  CDOTA_BaseNPC *v16; // r13
  CDOTA_BaseNPC *Caster; // rbx
  CDOTABaseAbility *Ability; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && params->nDamageType == 1 )
        {
          fOriginalDamage = params->fOriginalDamage;
          Parent = CDOTA_Buff::GetParent(this);
          if ( fOriginalDamage >= CBaseEntity::GetHealth(Parent) )
          {
            v11 = CDOTA_Buff::GetParent(this);
            if ( (*(v11->_vptr_IHandleEntity + 408))(v11) != 0 )
            {
              DevMsg("Solar Crest Bonus Armor prevented a lethal attack!\n");
              DevMsg("Original Damage: %f\n", params->fOriginalDamage);
              DevMsg("Damage: %f\n", params->fDamage);
              v12 = CDOTA_Buff::GetParent(this);
              Health = CBaseEntity::GetHealth(v12);
              DevMsg("Health Before: %d\n", Health + params->fDamage);
              v14 = CDOTA_Buff::GetParent(this);
              v15 = CBaseEntity::GetHealth(v14);
              DevMsg("Health Remaining: %d\n", v15);
              v16 = CDOTA_Buff::GetParent(this);
              Caster = CDOTA_Buff::GetCaster(this);
              Ability = CDOTA_Buff::GetAbility(this);
              CDOTA_CombatLog::AddHeroSavedEvent(&g_DOTACombatLog, Ability, Caster, v16, 0);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::~CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction  (line 301, @0x0000000002e0e240, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::~CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction *const this)
{
  this->_vptr_CDOTA_Buff = &off_4772530;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::~CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction  (line 301, @0x0000000002e0e260, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::~CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction *const this)
{
  this->_vptr_CDOTA_Buff = &off_4772530;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::IsDebuff  (line 311, @0x0000000002e0b940, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::IsDebuff(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::OnCreated  (line 326, @0x0000000002e083b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent
// strings: "miss_chance"
void __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::OnCreated(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_reduction", -1, 0);
  else
    this->armor_reduction = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->miss_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "miss_chance", -1, 0);
  else
    this->miss_chance = 0;
  Parent = CDOTA_Buff::GetParent(this);
  this->m_flBaseArmor = (*(Parent->_vptr_IHandleEntity + 424))(Parent);
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    v6 = CDOTA_Buff::GetParent(this);
    if ( v6 != 0 && (v6->m_iUnitType & 1) != 0 )
      this->m_flBaseArmor = ((*(v6->_vptr_IHandleEntity + 497))(v6) * 0.14) + this->m_flBaseArmor;
  }
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::DeclareFunctions  (line 362, @0x0000000002dff1f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::GetModifierMiss_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::DeclareFunctions(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction *const this)
{
  this->m_Functions[45].__pfn = (&stru_10 + 697);
  this->m_Functions[45].__delta = 0;
  this->m_Functions[44].__pfn = CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::GetModifierMiss_Percentage;
  this->m_Functions[44].__delta = 0;
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::GetModifierPhysicalArmorBonus  (line 370, @0x0000000002dff230, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->armor_reduction;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::GetModifierMiss_Percentage  (line 377, @0x0000000002dff250, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction::GetModifierMiss_Percentage(
        CDOTA_Modifier_Item_Solar_Crest_Armor_Reduction *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->miss_chance;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


