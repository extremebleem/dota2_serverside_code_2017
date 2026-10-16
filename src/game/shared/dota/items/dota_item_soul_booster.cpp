// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_soul_booster.cpp:27
class CDOTA_Item_Recipe_Soul_Booster : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Soul_Booster(CDOTA_Item_Recipe_Soul_Booster &);
	CDOTA_Item_Recipe_Soul_Booster(CDOTA_Item_Recipe_Soul_Booster &);
	CDOTA_Item_Recipe_Soul_Booster();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Soul_Booster();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_soul_booster.cpp:38
class CDOTA_Item_Soul_Booster : public CDOTA_Item {
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
	CDOTA_Item_Soul_Booster(CDOTA_Item_Soul_Booster &);
	CDOTA_Item_Soul_Booster(CDOTA_Item_Soul_Booster &);
	CDOTA_Item_Soul_Booster();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Soul_Booster();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_soul_booster.cpp:50
class CDOTA_Modifier_Item_Soul_Booster : public CDOTA_Buff_Item {
public:

private:

	int bonus_health;  // +0xba8
	int bonus_mana;  // +0xbac
	CDOTA_Modifier_Item_Soul_Booster();
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Soul_Booster();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Soul_Booster::~CDOTA_Item_Recipe_Soul_Booster  (line 27, @0x0000000002e0f120, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Soul_Booster::~CDOTA_Item_Recipe_Soul_Booster(
        CDOTA_Item_Recipe_Soul_Booster *const this)
{
  this->_vptr_IHandleEntity = &off_4772B10;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Soul_Booster::~CDOTA_Item_Recipe_Soul_Booster  (line 27, @0x0000000002e0f140, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Soul_Booster
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Soul_Booster::~CDOTA_Item_Recipe_Soul_Booster(
        CDOTA_Item_Recipe_Soul_Booster *const this)
{
  this->_vptr_IHandleEntity = &off_4772B10;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Soul_Booster::Schema_DynamicBinding  (line 29, @0x0000000002e0b950, libserver.so)
// globals: CDOTA_Item_Recipe_Soul_Booster::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Soul_Booster::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Soul_Booster *const this)
{
  return CDOTA_Item_Recipe_Soul_Booster::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002e0b960, libserver.so)
// globals: CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002e0b970, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Soul_Booster>
void __fastcall CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002e0b990, libserver.so)
void __fastcall CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002e0b9b0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002e0b9c0, libserver.so)
// globals: CDOTA_Item_Recipe_Soul_Booster::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Soul_Booster::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002e0d4c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002e0e4d0, libserver.so)  // inlines: CDOTA_Item_Recipe_Soul_Booster, Construct<CDOTA_Item_Recipe_Soul_Booster>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4772B10;
  }
  return p;
}


// CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002e10dd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002e10df0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal  (line 29, @0x0000000002e14c70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_recipe_soul_booster", "CDOTA_Item_Recipe_Soul_Booster"
// globals: `guard variable for'CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass, CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass, __dso_handle, CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClassInfo, CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass);
    CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass._vptr_CEntityClass = off_4772A90;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Soul_Booster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Soul_BoosterClass != 0 )
    return &CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClassInfo,
      "CDOTA_Item_Recipe_Soul_Booster",
      "item_recipe_soul_booster",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClassInfo);
  }
  CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass.m_pClassInfo = &CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClassInfo;
  CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Soul_BoosterClass = &CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass;
  CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClassInfo.m_pClass = &CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass;
  CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Soul_BoosterClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_BoosterClass;
}


// CDOTA_Item_Soul_Booster::~CDOTA_Item_Soul_Booster  (line 38, @0x0000000002e0f170, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Soul_Booster::~CDOTA_Item_Soul_Booster(CDOTA_Item_Soul_Booster *const this)
{
  this->_vptr_IHandleEntity = &off_4773710;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Soul_Booster::~CDOTA_Item_Soul_Booster  (line 38, @0x0000000002e0f190, libserver.so)  // inlines: ~CDOTA_Item_Soul_Booster
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Soul_Booster::~CDOTA_Item_Soul_Booster(CDOTA_Item_Soul_Booster *const this)
{
  this->_vptr_IHandleEntity = &off_4773710;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Soul_Booster::Schema_DynamicBinding  (line 40, @0x0000000002e0b9d0, libserver.so)
// globals: CDOTA_Item_Soul_Booster::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Soul_Booster::Schema_DynamicBinding(
        const CDOTA_Item_Soul_Booster *const this)
{
  return CDOTA_Item_Soul_Booster::s_pSchemaBinding;
}


// CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002e0b9e0, libserver.so)
// globals: CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002e0b9f0, libserver.so)  // inlines: Destruct<CDOTA_Item_Soul_Booster>
void __fastcall CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002e0ba10, libserver.so)
void __fastcall CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002e0ba30, libserver.so)
bool __fastcall CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002e0ba40, libserver.so)
// globals: CDOTA_Item_Soul_Booster::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Soul_Booster::s_pSchemaBinding;
}


// CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002e0d500, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002e0e500, libserver.so)  // inlines: CDOTA_Item_Soul_Booster, Construct<CDOTA_Item_Soul_Booster>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4773710;
  }
  return p;
}


// CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002e10e20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002e10e40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Soul_Booster::GetEntityClassInternal  (line 40, @0x0000000002e14dc0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "CDOTA_Item_Soul_Booster"
// globals: `guard variable for'CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass, CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass, __dso_handle, CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_BoosterClassInfo, CDOTA_Item_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_BoosterClassInfo
CEntityClass *__cdecl CDOTA_Item_Soul_Booster::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass);
    CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass._vptr_CEntityClass = off_4773690;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass);
    __cxa_atexit(
      CDOTA_Item_Soul_Booster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Soul_BoosterClass != 0 )
    return &CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass;
  if ( `guard variable for'CDOTA_Item_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_BoosterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_BoosterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_BoosterClassInfo,
      "CDOTA_Item_Soul_Booster",
      "item_soul_booster",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_BoosterClassInfo);
  }
  CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass.m_pClassInfo = &CDOTA_Item_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_BoosterClassInfo;
  CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass.m_pBaseClassInfo = CDOTA_Item_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_BoosterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Soul_BoosterClass = &CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass;
  CDOTA_Item_Soul_Booster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_BoosterClassInfo.m_pClass = &CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass;
  CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Soul_BoosterClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Soul_Booster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_BoosterClass;
}


// CDOTA_Item_Soul_Booster::GetIntrinsicModifierName  (line 42, @0x0000000002e0ba50, libserver.so)
// strings: "modifier_item_soul_booster"
const char *__fastcall CDOTA_Item_Soul_Booster::GetIntrinsicModifierName(CDOTA_Item_Soul_Booster *const this)
{
  return "modifier_item_soul_booster";
}


// CDOTA_Modifier_Item_Soul_Booster::~CDOTA_Modifier_Item_Soul_Booster  (line 50, @0x0000000002e0df20, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Soul_Booster::~CDOTA_Modifier_Item_Soul_Booster(
        CDOTA_Modifier_Item_Soul_Booster *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Soul_Booster::~CDOTA_Modifier_Item_Soul_Booster  (line 50, @0x0000000002e0df40, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Soul_Booster
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Soul_Booster::~CDOTA_Modifier_Item_Soul_Booster(
        CDOTA_Modifier_Item_Soul_Booster *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Soul_Booster::DeclareFunctions  (line 68, @0x0000000002dff270, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Soul_Booster::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_Item_Soul_Booster::GetModifierManaBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Soul_Booster::DeclareFunctions(CDOTA_Modifier_Item_Soul_Booster *const this)
{
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_Soul_Booster::GetModifierHealthBonus;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[59].__delta = 0;
  this->m_Functions[59].__pfn = CDOTA_Modifier_Item_Soul_Booster::GetModifierManaBonus;
}


// CDOTA_Modifier_Item_Soul_Booster::GetModifierHealthBonus  (line 74, @0x0000000002dff2b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Soul_Booster::GetModifierHealthBonus(
        CDOTA_Modifier_Item_Soul_Booster *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Soul_Booster::GetModifierManaBonus  (line 79, @0x0000000002dff2d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Soul_Booster::GetModifierManaBonus(
        CDOTA_Modifier_Item_Soul_Booster *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Soul_Booster::OnCreated  (line 84, @0x0000000002e07d60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_health", "bonus_mana"
void __fastcall CDOTA_Modifier_Item_Soul_Booster::OnCreated(
        CDOTA_Modifier_Item_Soul_Booster *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_health", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_mana", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_health = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_mana = 0;
}


