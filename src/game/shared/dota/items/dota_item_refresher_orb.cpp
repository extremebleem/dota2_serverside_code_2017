// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_refresher_orb.cpp:27
class CDOTA_Item_Recipe_RefresherOrb : public CDOTA_Item {
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
	CDOTA_Item_Recipe_RefresherOrb(CDOTA_Item_Recipe_RefresherOrb &);
	CDOTA_Item_Recipe_RefresherOrb(CDOTA_Item_Recipe_RefresherOrb &);
	CDOTA_Item_Recipe_RefresherOrb();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_RefresherOrb();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_refresher_orb.cpp:38
class CDOTA_Item_RefresherOrb : public CDOTA_Item {
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
	CDOTA_Item_RefresherOrb(CDOTA_Item_RefresherOrb &);
	CDOTA_Item_RefresherOrb(CDOTA_Item_RefresherOrb &);
	CDOTA_Item_RefresherOrb();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual bool IsRefreshable();
	virtual ~CDOTA_Item_RefresherOrb();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[217] IsRefreshable
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_refresher_orb.cpp:85
class CDOTA_Modifier_Item_RefresherOrb : public CDOTA_Buff_Item {
public:

private:

	int bonus_health_regen;  // +0xba8
	int bonus_mana_regen;  // +0xbac
	int bonus_damage;  // +0xbb0
	CDOTA_Modifier_Item_RefresherOrb();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_RefresherOrb();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_RefresherOrb::~CDOTA_Item_Recipe_RefresherOrb  (line 27, @0x0000000002df3050, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_RefresherOrb::~CDOTA_Item_Recipe_RefresherOrb(
        CDOTA_Item_Recipe_RefresherOrb *const this)
{
  this->_vptr_IHandleEntity = &off_47465B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_RefresherOrb::~CDOTA_Item_Recipe_RefresherOrb  (line 27, @0x0000000002df3070, libserver.so)  // inlines: ~CDOTA_Item_Recipe_RefresherOrb
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_RefresherOrb::~CDOTA_Item_Recipe_RefresherOrb(
        CDOTA_Item_Recipe_RefresherOrb *const this)
{
  this->_vptr_IHandleEntity = &off_47465B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_RefresherOrb::Schema_DynamicBinding  (line 29, @0x0000000002dee930, libserver.so)
// globals: CDOTA_Item_Recipe_RefresherOrb::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_RefresherOrb::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_RefresherOrb *const this)
{
  return CDOTA_Item_Recipe_RefresherOrb::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002dee940, libserver.so)
// globals: CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002dee950, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_RefresherOrb>
void __fastcall CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002dee970, libserver.so)
void __fastcall CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002dee990, libserver.so)
bool __fastcall CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002dee9a0, libserver.so)
// globals: CDOTA_Item_Recipe_RefresherOrb::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_RefresherOrb::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002df0c00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002df2030, libserver.so)  // inlines: CDOTA_Item_Recipe_RefresherOrb, Construct<CDOTA_Item_Recipe_RefresherOrb>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47465B0;
  }
  return p;
}


// CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002df5260, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002df5280, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal  (line 29, @0x0000000002df9640, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_recipe_refresher", "CDOTA_Item_Recipe_RefresherOrb"
// globals: `guard variable for'CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass, CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass, __dso_handle, CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClassInfo, CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass);
    CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass._vptr_CEntityClass = off_4746530;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_RefresherOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_RefresherOrbClass != 0 )
    return &CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass;
  if ( `guard variable for'CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClassInfo,
      "CDOTA_Item_Recipe_RefresherOrb",
      "item_recipe_refresher",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClassInfo);
  }
  CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass.m_pClassInfo = &CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClassInfo;
  CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass.m_pBaseClassInfo = CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_RefresherOrbClass = &CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass;
  CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClassInfo.m_pClass = &CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass;
  CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_RefresherOrbClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RefresherOrbClass;
}


// CDOTA_Item_RefresherOrb::~CDOTA_Item_RefresherOrb  (line 38, @0x0000000002df30a0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_RefresherOrb::~CDOTA_Item_RefresherOrb(CDOTA_Item_RefresherOrb *const this)
{
  this->_vptr_IHandleEntity = &off_47471B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_RefresherOrb::~CDOTA_Item_RefresherOrb  (line 38, @0x0000000002df30c0, libserver.so)  // inlines: ~CDOTA_Item_RefresherOrb
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_RefresherOrb::~CDOTA_Item_RefresherOrb(CDOTA_Item_RefresherOrb *const this)
{
  this->_vptr_IHandleEntity = &off_47471B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_RefresherOrb::Schema_DynamicBinding  (line 40, @0x0000000002dee9b0, libserver.so)
// globals: CDOTA_Item_RefresherOrb::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RefresherOrb::Schema_DynamicBinding(
        const CDOTA_Item_RefresherOrb *const this)
{
  return CDOTA_Item_RefresherOrb::s_pSchemaBinding;
}


// CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002dee9c0, libserver.so)
// globals: CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002dee9d0, libserver.so)  // inlines: Destruct<CDOTA_Item_RefresherOrb>
void __fastcall CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002dee9f0, libserver.so)
void __fastcall CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002deea10, libserver.so)
bool __fastcall CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002deea20, libserver.so)
// globals: CDOTA_Item_RefresherOrb::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RefresherOrb::s_pSchemaBinding;
}


// CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002df0c40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002df2060, libserver.so)  // inlines: CDOTA_Item_RefresherOrb, Construct<CDOTA_Item_RefresherOrb>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47471B0;
  }
  return p;
}


// CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002df52b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002df52d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_RefresherOrb::GetEntityClassInternal  (line 40, @0x0000000002df9790, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_refresher", "CDOTA_Item_RefresherOrb"
// globals: `guard variable for'CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass, CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass, __dso_handle, CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RefresherOrbClassInfo, CDOTA_Item_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RefresherOrbClassInfo
CEntityClass *__cdecl CDOTA_Item_RefresherOrb::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass);
    CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass._vptr_CEntityClass = off_4747130;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass);
    __cxa_atexit(
      CDOTA_Item_RefresherOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_RefresherOrbClass != 0 )
    return &CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass;
  if ( `guard variable for'CDOTA_Item_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RefresherOrbClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RefresherOrbClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RefresherOrbClassInfo,
      "CDOTA_Item_RefresherOrb",
      "item_refresher",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RefresherOrbClassInfo);
  }
  CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass.m_pClassInfo = &CDOTA_Item_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RefresherOrbClassInfo;
  CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass.m_pBaseClassInfo = CDOTA_Item_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RefresherOrbClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_RefresherOrbClass = &CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass;
  CDOTA_Item_RefresherOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RefresherOrbClassInfo.m_pClass = &CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass;
  CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_RefresherOrbClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_RefresherOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RefresherOrbClass;
}


// CDOTA_Item_RefresherOrb::GetIntrinsicModifierName  (line 42, @0x0000000002deea30, libserver.so)
// strings: "modifier_item_refresherorb"
const char *__fastcall CDOTA_Item_RefresherOrb::GetIntrinsicModifierName(CDOTA_Item_RefresherOrb *const this)
{
  return "modifier_item_refresherorb";
}


// CDOTA_Item_RefresherOrb::IsRefreshable  (line 46, @0x0000000002deea40, libserver.so)
bool __fastcall CDOTA_Item_RefresherOrb::IsRefreshable(CDOTA_Item_RefresherOrb *const this)
{
  return 0;
}


// CDOTA_Item_RefresherOrb::OnSpellStart  (line 51, @0x0000000002de71d0, libserver.so)  // inlines: NetworkStateChanged, Set, SetFrozenCooldown, operator=<bool>
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::EndCooldown, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound
// strings: "particles/items2_fx/refresher.vpcf", "attach_hitloc", "DOTA_Item.Refresher.Activate"
void __fastcall CDOTA_Item_RefresherOrb::OnSpellStart(CDOTA_Item_RefresherOrb *const this)
{
  int i; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v5; // rbx
  CDOTA_BaseNPC *v6; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTABaseAbility *v9; // rbx
  CDOTA_BaseNPC *v10; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v12; // r12
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax

  for ( i = 0; i != 24; ++i )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(Caster, i);
    v5 = AbilityByIndex;
    if ( AbilityByIndex != 0 && (*(AbilityByIndex->_vptr_IHandleEntity + 217))(AbilityByIndex) != 0 )
    {
      if ( v5->m_bFrozenCooldown.m_Value )
      {
        (*(v5->_vptr_IHandleEntity + 22))(v5, 845, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v5->m_bFrozenCooldown.m_Value = 0;
      }
      CDOTABaseAbility::EndCooldown(v5);
    }
  }
  LOBYTE(i) = 0;
  do
  {
    v6 = CDOTABaseAbility::GetCaster(this);
    Inventory = CDOTA_BaseNPC::GetInventory(v6);
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, i);
    v9 = ItemInSlot;
    if ( ItemInSlot != 0 && (*(ItemInSlot->_vptr_IHandleEntity + 217))(ItemInSlot) != 0 )
    {
      if ( v9->m_bFrozenCooldown.m_Value )
      {
        (*(v9->_vptr_IHandleEntity + 22))(v9, 845, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v9->m_bFrozenCooldown.m_Value = 0;
      }
      CDOTABaseAbility::EndCooldown(v9);
    }
    ++i;
  }
  while ( i != 9 );
  v10 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v10) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/items2_fx/refresher.vpcf",
                   2,
                   v10,
                   0,
                   0);
  v12 = CDOTABaseAbility::GetCaster(this);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v13, v10, 0, v12, 5, "attach_hitloc", vec3_invalid, 1);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v14, v10);
  v15 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(1, "DOTA_Item.Refresher.Activate", v15);
}


// CDOTA_Modifier_Item_RefresherOrb::~CDOTA_Modifier_Item_RefresherOrb  (line 85, @0x0000000002df1ab0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_RefresherOrb::~CDOTA_Modifier_Item_RefresherOrb(
        CDOTA_Modifier_Item_RefresherOrb *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_RefresherOrb::~CDOTA_Modifier_Item_RefresherOrb  (line 85, @0x0000000002df1ad0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_RefresherOrb
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_RefresherOrb::~CDOTA_Modifier_Item_RefresherOrb(
        CDOTA_Modifier_Item_RefresherOrb *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_RefresherOrb::DeclareFunctions  (line 105, @0x0000000002de3ba0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_RefresherOrb::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_RefresherOrb::GetModifierPercentageManaRegen(CModifierParams const&), CDOTA_Modifier_Item_RefresherOrb::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_RefresherOrb::DeclareFunctions(CDOTA_Modifier_Item_RefresherOrb *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_RefresherOrb::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[54].__delta = 0;
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_RefresherOrb::GetModifierPercentageManaRegen;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_RefresherOrb::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_RefresherOrb::OnCreated  (line 112, @0x0000000002dec850, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "bonus_health_regen", "bonus_mana_regen"
void __fastcall CDOTA_Modifier_Item_RefresherOrb::OnCreated(
        CDOTA_Modifier_Item_RefresherOrb *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_health_regen, "bonus_health_regen");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_mana_regen, "bonus_mana_regen");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->bonus_damage, "bonus_damage");
}


// CDOTA_Modifier_Item_RefresherOrb::GetModifierConstantHealthRegen  (line 121, @0x0000000002de3c00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RefresherOrb::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_RefresherOrb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_RefresherOrb::GetModifierPercentageManaRegen  (line 126, @0x0000000002de3c20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RefresherOrb::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_RefresherOrb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_RefresherOrb::GetModifierPreAttack_BonusDamage  (line 131, @0x0000000002de3c40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RefresherOrb::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_RefresherOrb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


