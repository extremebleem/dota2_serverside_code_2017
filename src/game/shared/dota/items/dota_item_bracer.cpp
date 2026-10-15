// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_bracer.cpp:26
class CDOTA_Item_Recipe_Bracer : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Bracer(CDOTA_Item_Recipe_Bracer &);
	CDOTA_Item_Recipe_Bracer(CDOTA_Item_Recipe_Bracer &);
	CDOTA_Item_Recipe_Bracer();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Bracer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_bracer.cpp:37
class CDOTA_Item_Bracer : public CDOTA_Item {
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
	CDOTA_Item_Bracer(CDOTA_Item_Bracer &);
	CDOTA_Item_Bracer(CDOTA_Item_Bracer &);
	CDOTA_Item_Bracer();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Bracer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_bracer.cpp:49
class CDOTA_Modifier_Item_Bracer : public CDOTA_Buff_Item {
public:

private:

	int bonus_strength;  // +0xba8
	int bonus_agility;  // +0xbac
	int bonus_intellect;  // +0xbb0
	int bonus_damage;  // +0xbb4
	CDOTA_Modifier_Item_Bracer();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Bracer();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Bracer::~CDOTA_Item_Recipe_Bracer  (line 26, @0x0000000002d85c80, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Bracer::~CDOTA_Item_Recipe_Bracer(CDOTA_Item_Recipe_Bracer *const this)
{
  this->_vptr_IHandleEntity = &off_46B19F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Bracer::~CDOTA_Item_Recipe_Bracer  (line 26, @0x0000000002d85ca0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Bracer
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Bracer::~CDOTA_Item_Recipe_Bracer(CDOTA_Item_Recipe_Bracer *const this)
{
  this->_vptr_IHandleEntity = &off_46B19F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Bracer::Schema_DynamicBinding  (line 28, @0x0000000002d80a10, libserver.so)
// globals: CDOTA_Item_Recipe_Bracer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Bracer::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Bracer *const this)
{
  return CDOTA_Item_Recipe_Bracer::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d80a20, libserver.so)
// globals: CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d80a30, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Bracer>
void __fastcall CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d80a50, libserver.so)
void __fastcall CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d80a70, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d80a80, libserver.so)
// globals: CDOTA_Item_Recipe_Bracer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Bracer::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d83470, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d84aa0, libserver.so)  // inlines: CDOTA_Item_Recipe_Bracer, Construct<CDOTA_Item_Recipe_Bracer>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46B19F0;
  }
  return p;
}


// CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d882f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d88310, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Bracer::GetEntityClassInternal  (line 28, @0x0000000002d8ef40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_bracer", "CDOTA_Item_Recipe_Bracer"
// globals: `guard variable for'CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass, CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass, __dso_handle, CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BracerClassInfo, CDOTA_Item_Recipe_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BracerClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Bracer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass);
    CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass._vptr_CEntityClass = off_46B1970;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Bracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_BracerClass != 0 )
    return &CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BracerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BracerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BracerClassInfo,
      "CDOTA_Item_Recipe_Bracer",
      "item_recipe_bracer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BracerClassInfo);
  }
  CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass.m_pClassInfo = &CDOTA_Item_Recipe_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BracerClassInfo;
  CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BracerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_BracerClass = &CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass;
  CDOTA_Item_Recipe_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BracerClassInfo.m_pClass = &CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass;
  CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_BracerClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BracerClass;
}


// CDOTA_Item_Bracer::~CDOTA_Item_Bracer  (line 37, @0x0000000002d85cd0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Bracer::~CDOTA_Item_Bracer(CDOTA_Item_Bracer *const this)
{
  this->_vptr_IHandleEntity = &off_46B25F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Bracer::~CDOTA_Item_Bracer  (line 37, @0x0000000002d85cf0, libserver.so)  // inlines: ~CDOTA_Item_Bracer
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Bracer::~CDOTA_Item_Bracer(CDOTA_Item_Bracer *const this)
{
  this->_vptr_IHandleEntity = &off_46B25F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Bracer::Schema_DynamicBinding  (line 39, @0x0000000002d80a90, libserver.so)
// globals: CDOTA_Item_Bracer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Bracer::Schema_DynamicBinding(const CDOTA_Item_Bracer *const this)
{
  return CDOTA_Item_Bracer::s_pSchemaBinding;
}


// CDOTA_Item_Bracer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002d80aa0, libserver.so)
// globals: CDOTA_Item_Bracer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Bracer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Bracer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Bracer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Bracer::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002d80ab0, libserver.so)  // inlines: Destruct<CDOTA_Item_Bracer>
void __fastcall CDOTA_Item_Bracer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Bracer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Bracer::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002d80ad0, libserver.so)
void __fastcall CDOTA_Item_Bracer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Bracer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Bracer::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002d80af0, libserver.so)
bool __fastcall CDOTA_Item_Bracer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Bracer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Bracer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002d80b00, libserver.so)
// globals: CDOTA_Item_Bracer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Bracer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Bracer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Bracer::s_pSchemaBinding;
}


// CDOTA_Item_Bracer::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002d834b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Bracer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Bracer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Bracer::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002d84ad0, libserver.so)  // inlines: CDOTA_Item_Bracer, Construct<CDOTA_Item_Bracer>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Bracer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Bracer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46B25F0;
  }
  return p;
}


// CDOTA_Item_Bracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002d88340, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Bracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Bracer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Bracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002d88360, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Bracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Bracer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Bracer::GetEntityClassInternal  (line 39, @0x0000000002d8f090, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_Bracer"
// globals: `guard variable for'CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass, CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass, __dso_handle, CDOTA_Item_Bracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BracerClassInfo, CDOTA_Item_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BracerClassInfo
CEntityClass *__cdecl CDOTA_Item_Bracer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass);
    CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass._vptr_CEntityClass = off_46B2570;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass);
    __cxa_atexit(
      CDOTA_Item_Bracer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BracerClass != 0 )
    return &CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass;
  if ( `guard variable for'CDOTA_Item_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BracerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BracerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BracerClassInfo,
      "CDOTA_Item_Bracer",
      "item_bracer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BracerClassInfo);
  }
  CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass.m_pClassInfo = &CDOTA_Item_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BracerClassInfo;
  CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass.m_pBaseClassInfo = CDOTA_Item_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BracerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BracerClass = &CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass;
  CDOTA_Item_Bracer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BracerClassInfo.m_pClass = &CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass;
  CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BracerClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Bracer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BracerClass;
}


// CDOTA_Item_Bracer::GetIntrinsicModifierName  (line 41, @0x0000000002d80b10, libserver.so)
// strings: "modifier_item_bracer"
const char *__fastcall CDOTA_Item_Bracer::GetIntrinsicModifierName(CDOTA_Item_Bracer *const this)
{
  return "modifier_item_bracer";
}


// CDOTA_Modifier_Item_Bracer::~CDOTA_Modifier_Item_Bracer  (line 49, @0x0000000002d842d0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Bracer::~CDOTA_Modifier_Item_Bracer(CDOTA_Modifier_Item_Bracer *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Bracer::~CDOTA_Modifier_Item_Bracer  (line 49, @0x0000000002d842f0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Bracer
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Bracer::~CDOTA_Modifier_Item_Bracer(CDOTA_Modifier_Item_Bracer *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Bracer::OnCreated  (line 72, @0x0000000002d7bf00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_agility", "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_Bracer::OnCreated(CDOTA_Modifier_Item_Bracer *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_strength", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_strength = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_agility", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->bonus_intellect = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_agility = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_intellect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_intellect", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_damage", -1, 0);
    return;
  }
LABEL_9:
  this->bonus_damage = 0;
}


// CDOTA_Modifier_Item_Bracer::DeclareFunctions  (line 80, @0x0000000002d6ebf0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Bracer::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Bracer::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Bracer::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_Bracer::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Bracer::DeclareFunctions(CDOTA_Modifier_Item_Bracer *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Bracer::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Bracer::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Bracer::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Bracer::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_Bracer::GetModifierBonusStats_Strength  (line 88, @0x0000000002d6ec60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bracer::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Bracer *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bracer::GetModifierBonusStats_Agility  (line 93, @0x0000000002d6ec80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bracer::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Bracer *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bracer::GetModifierBonusStats_Intellect  (line 98, @0x0000000002d6eca0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bracer::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Bracer *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bracer::GetModifierPreAttack_BonusDamage  (line 103, @0x0000000002d6ecc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bracer::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Bracer *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


