// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_octarine_core.cpp:27
class CDOTA_Item_Recipe_Octarine_Core : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Octarine_Core(CDOTA_Item_Recipe_Octarine_Core &);
	CDOTA_Item_Recipe_Octarine_Core(CDOTA_Item_Recipe_Octarine_Core &);
	CDOTA_Item_Recipe_Octarine_Core();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Octarine_Core();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_octarine_core.cpp:40
class CDOTA_Item_Octarine_Core : public CDOTA_Item {
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
	CDOTA_Item_Octarine_Core(CDOTA_Item_Octarine_Core &);
	CDOTA_Item_Octarine_Core(CDOTA_Item_Octarine_Core &);
	CDOTA_Item_Octarine_Core();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Octarine_Core();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_octarine_core.cpp:52
class CDOTA_Modifier_Item_Octarine_Core : public CDOTA_Buff_Item {
public:

private:

	int bonus_intelligence;  // +0xba8
	int bonus_health;  // +0xbac
	int bonus_mana;  // +0xbb0
	float bonus_cooldown;  // +0xbb4
	float hero_lifesteal;  // +0xbb8
	float creep_lifesteal;  // +0xbbc
	CDOTA_Modifier_Item_Octarine_Core();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageCooldown(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Octarine_Core();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Octarine_Core::~CDOTA_Item_Recipe_Octarine_Core  (line 27, @0x0000000002dd7fb0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Octarine_Core::~CDOTA_Item_Recipe_Octarine_Core(
        CDOTA_Item_Recipe_Octarine_Core *const this)
{
  this->_vptr_IHandleEntity = &off_4731270;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Octarine_Core::~CDOTA_Item_Recipe_Octarine_Core  (line 27, @0x0000000002dd7fd0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Octarine_Core
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Octarine_Core::~CDOTA_Item_Recipe_Octarine_Core(
        CDOTA_Item_Recipe_Octarine_Core *const this)
{
  this->_vptr_IHandleEntity = &off_4731270;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Octarine_Core::Schema_DynamicBinding  (line 29, @0x0000000002dd4380, libserver.so)
// globals: CDOTA_Item_Recipe_Octarine_Core::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Octarine_Core::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Octarine_Core *const this)
{
  return CDOTA_Item_Recipe_Octarine_Core::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002dd4390, libserver.so)
// globals: CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002dd43a0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Octarine_Core>
void __fastcall CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002dd43c0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002dd43e0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002dd43f0, libserver.so)
// globals: CDOTA_Item_Recipe_Octarine_Core::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Octarine_Core::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002dd5ef0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002dd7010, libserver.so)  // inlines: CDOTA_Item_Recipe_Octarine_Core, Construct<CDOTA_Item_Recipe_Octarine_Core>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4731270;
  }
  return p;
}


// CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dd9ee0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dd9f00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal  (line 29, @0x0000000002de1190, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_recipe_octarine_core", "CDOTA_Item_Recipe_Octarine_Core"
// globals: `guard variable for'CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass, CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass, __dso_handle, CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClassInfo, CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass);
    CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass._vptr_CEntityClass = off_47311F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Octarine_Core::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Octarine_CoreClass != 0 )
    return &CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClassInfo,
      "CDOTA_Item_Recipe_Octarine_Core",
      "item_recipe_octarine_core",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClassInfo);
  }
  CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass.m_pClassInfo = &CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClassInfo;
  CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Octarine_CoreClass = &CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass;
  CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClassInfo.m_pClass = &CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass;
  CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Octarine_CoreClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Octarine_CoreClass;
}


// CDOTA_Item_Octarine_Core::~CDOTA_Item_Octarine_Core  (line 40, @0x0000000002dd8000, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Octarine_Core::~CDOTA_Item_Octarine_Core(CDOTA_Item_Octarine_Core *const this)
{
  this->_vptr_IHandleEntity = &off_4731E70;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Octarine_Core::~CDOTA_Item_Octarine_Core  (line 40, @0x0000000002dd8020, libserver.so)  // inlines: ~CDOTA_Item_Octarine_Core
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Octarine_Core::~CDOTA_Item_Octarine_Core(CDOTA_Item_Octarine_Core *const this)
{
  this->_vptr_IHandleEntity = &off_4731E70;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Octarine_Core::Schema_DynamicBinding  (line 42, @0x0000000002dd4400, libserver.so)
// globals: CDOTA_Item_Octarine_Core::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Octarine_Core::Schema_DynamicBinding(
        const CDOTA_Item_Octarine_Core *const this)
{
  return CDOTA_Item_Octarine_Core::s_pSchemaBinding;
}


// CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002dd4410, libserver.so)
// globals: CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x0000000002dd4420, libserver.so)  // inlines: Destruct<CDOTA_Item_Octarine_Core>
void __fastcall CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x0000000002dd4440, libserver.so)
void __fastcall CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x0000000002dd4460, libserver.so)
bool __fastcall CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x0000000002dd4470, libserver.so)
// globals: CDOTA_Item_Octarine_Core::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Octarine_Core::s_pSchemaBinding;
}


// CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x0000000002dd5f30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x0000000002dd7040, libserver.so)  // inlines: CDOTA_Item_Octarine_Core, Construct<CDOTA_Item_Octarine_Core>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4731E70;
  }
  return p;
}


// CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002dd9f30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002dd9f50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Octarine_Core::GetEntityClassInternal  (line 42, @0x0000000002de12e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "CDOTA_Item_Octarine_Core"
// globals: `guard variable for'CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass, CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass, __dso_handle, CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Octarine_CoreClassInfo, CDOTA_Item_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Octarine_CoreClassInfo
CEntityClass *__cdecl CDOTA_Item_Octarine_Core::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass);
    CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass._vptr_CEntityClass = off_4731DF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass);
    __cxa_atexit(
      CDOTA_Item_Octarine_Core::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Octarine_CoreClass != 0 )
    return &CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass;
  if ( `guard variable for'CDOTA_Item_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Octarine_CoreClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Octarine_CoreClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Octarine_CoreClassInfo,
      "CDOTA_Item_Octarine_Core",
      "item_octarine_core",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Octarine_CoreClassInfo);
  }
  CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass.m_pClassInfo = &CDOTA_Item_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Octarine_CoreClassInfo;
  CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass.m_pBaseClassInfo = CDOTA_Item_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Octarine_CoreClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Octarine_CoreClass = &CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass;
  CDOTA_Item_Octarine_Core::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Octarine_CoreClassInfo.m_pClass = &CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass;
  CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Octarine_CoreClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Octarine_Core::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Octarine_CoreClass;
}


// CDOTA_Item_Octarine_Core::GetIntrinsicModifierName  (line 44, @0x0000000002dd4480, libserver.so)
// strings: "modifier_item_octarine_core"
const char *__fastcall CDOTA_Item_Octarine_Core::GetIntrinsicModifierName(CDOTA_Item_Octarine_Core *const this)
{
  return "modifier_item_octarine_core";
}


// CDOTA_Modifier_Item_Octarine_Core::~CDOTA_Modifier_Item_Octarine_Core  (line 52, @0x0000000002dd6610, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Octarine_Core::~CDOTA_Modifier_Item_Octarine_Core(
        CDOTA_Modifier_Item_Octarine_Core *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Octarine_Core::~CDOTA_Modifier_Item_Octarine_Core  (line 52, @0x0000000002dd6630, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Octarine_Core
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Octarine_Core::~CDOTA_Modifier_Item_Octarine_Core(
        CDOTA_Modifier_Item_Octarine_Core *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Octarine_Core::OnCreated  (line 78, @0x0000000002dd26d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_intelligence", "bonus_health", "bonus_mana", "bonus_cooldown", "hero_lifesteal", "creep_lifesteal"
void __fastcall CDOTA_Modifier_Item_Octarine_Core::OnCreated(
        CDOTA_Modifier_Item_Octarine_Core *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_intelligence = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_intelligence", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_intelligence = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_health", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->bonus_health = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_mana", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this->bonus_mana = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_cooldown = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "bonus_cooldown", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->hero_lifesteal = 0.0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_13;
  }
LABEL_11:
  this->bonus_cooldown = 0.0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->hero_lifesteal = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "hero_lifesteal", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->creep_lifesteal = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "creep_lifesteal", -1, 0);
    return;
  }
LABEL_13:
  this->creep_lifesteal = 0.0;
}


// CDOTA_Modifier_Item_Octarine_Core::DeclareFunctions  (line 89, @0x0000000002dc71e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Octarine_Core::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_Octarine_Core::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_Item_Octarine_Core::GetModifierManaBonus(CModifierParams const&), CDOTA_Modifier_Item_Octarine_Core::GetModifierPercentageCooldown(CModifierParams const&), CDOTA_Modifier_Item_Octarine_Core::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Octarine_Core::DeclareFunctions(CDOTA_Modifier_Item_Octarine_Core *const this)
{
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Octarine_Core::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_Octarine_Core::GetModifierHealthBonus;
  this->m_Functions[59].__pfn = CDOTA_Modifier_Item_Octarine_Core::GetModifierManaBonus;
  this->m_Functions[77].__pfn = CDOTA_Modifier_Item_Octarine_Core::GetModifierPercentageCooldown;
  this->m_Functions[59].__delta = 0;
  this->m_Functions[77].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Item_Octarine_Core::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Item_Octarine_Core::GetModifierBonusStats_Intellect  (line 98, @0x0000000002dc7270, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Octarine_Core::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Octarine_Core *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intelligence;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Octarine_Core::GetModifierHealthBonus  (line 103, @0x0000000002dc7290, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Octarine_Core::GetModifierHealthBonus(
        CDOTA_Modifier_Item_Octarine_Core *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Octarine_Core::GetModifierManaBonus  (line 108, @0x0000000002dc72b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Octarine_Core::GetModifierManaBonus(
        CDOTA_Modifier_Item_Octarine_Core *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Octarine_Core::GetModifierPercentageCooldown  (line 115, @0x0000000002dc72d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Octarine_Core::GetModifierPercentageCooldown(
        CDOTA_Modifier_Item_Octarine_Core *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->bonus_cooldown) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Octarine_Core::OnTakeDamage  (line 120, @0x0000000002dca4d0, libserver.so)  // inlines: AttackerNPC, FStrEq, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, ToDOTABaseNPC, UnitNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, __dynamic_cast, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::FindItemInInventory, CDOTA_Buff::GetAbility, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::Heal
// strings: "particles/items3_fx/octarine_core_lifesteal.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Octarine_Core::OnTakeDamage(
        CDOTA_Modifier_Item_Octarine_Core *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v9; // edx
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  CDOTA_BaseNPC *v12; // r12
  uint32 v13; // edx
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rcx
  CDOTA_BaseNPC *v16; // r14
  uint32 v17; // edx
  CEntityIdentity *v18; // rax
  CEntityIdentity *v19; // rax
  void *v20; // r15
  CDOTA_UnitInventory *Inventory; // rax
  char **v22; // rax
  char *v23; // rsi
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v26; // rax
  float creep_lifesteal; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  CDOTA_Item *flAmount; // [rsp+8h] [rbp-38h]
  float flAmounta; // [rsp+8h] [rbp-38h]

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    v9 = params->hunit.m_Index;
    if ( v9 + 2 <= 1
      || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
      || (v11 = &v10[params->hunit.m_Index & 0x1FF]) == 0
      || v9 != v11->m_EHandle.m_Index
      || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
      || !v12->m_bIsDOTANPC )
    {
      v12 = 0;
    }
    v13 = params->hattacker.m_Index;
    if ( v13 + 2 <= 1
      || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
      || (v15 = &v14[params->hattacker.m_Index & 0x1FF]) == 0
      || v13 != v15->m_EHandle.m_Index
      || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
      || !v16->m_bIsDOTANPC )
    {
      v16 = 0;
    }
    v17 = params->inflictor.m_Index;
    if ( v17 + 2 > 1 )
    {
      v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->inflictor.m_Index) >> 9) & 0x3F];
      if ( v18 != 0 )
      {
        v19 = &v18[params->inflictor.m_Index & 0x1FF];
        if ( v19 != 0 && v17 == v19->m_EHandle.m_Index && v19->m_pInstance != 0 )
        {
          v20 = __dynamic_cast(v19->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
          if ( v20 != 0 && v12 != 0 && v16 != 0 && (params->nDamageflags & 0x620) == 0 && v12 != v16 )
          {
            Inventory = CDOTA_BaseNPC::GetInventory(v16);
            flAmount = CDOTA_UnitInventory::FindItemInInventory(Inventory, "item_octarine_core", 1, 0, -1);
            if ( flAmount != 0
              && flAmount == CDOTA_Buff::GetAbility(this)
              && flAmount->m_iState == 1
              && !v12->m_bIsIllusion.m_Value
              && (v12->m_iUnitType & 0x10) == 0 )
            {
              v22 = *(v20 + 111);
              if ( v22 == 0
                || (v23 = *v22, *v22 == 0)
                || v23 != "item_bloodstone" && strcmp(v23, "item_bloodstone") != 0 )
              {
                if ( (*(v16->_vptr_IHandleEntity + 408))(v16) != 0 )
                {
                  ParticleManager = GetParticleManager();
                  Particle = CDOTA_ParticleManager::CreateParticle(
                               ParticleManager,
                               "particles/items3_fx/octarine_core_lifesteal.vpcf",
                               1,
                               v16,
                               0,
                               0);
                  v26 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v26, Particle);
                  creep_lifesteal = this->creep_lifesteal;
                  if ( (v12->m_iUnitType & 1) != 0 )
                    creep_lifesteal = this->hero_lifesteal;
                  flAmounta = (creep_lifesteal * params->fDamage) / 100.0;
                  Ability = CDOTA_Buff::GetAbility(this);
                  CDOTA_BaseNPC::Heal(v16, flAmounta, Ability, 1, 1);
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


