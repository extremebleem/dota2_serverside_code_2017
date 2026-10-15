// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_poor_mans_shield.cpp:27
class CDOTA_Item_Recipe_PoorMansShield : public CDOTA_Item {
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
	CDOTA_Item_Recipe_PoorMansShield(CDOTA_Item_Recipe_PoorMansShield &);
	CDOTA_Item_Recipe_PoorMansShield(CDOTA_Item_Recipe_PoorMansShield &);
	CDOTA_Item_Recipe_PoorMansShield();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_PoorMansShield();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_poor_mans_shield.cpp:38
class CDOTA_Item_PoorMansShield : public CDOTA_Item {
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
	CDOTA_Item_PoorMansShield(CDOTA_Item_PoorMansShield &);
	CDOTA_Item_PoorMansShield(CDOTA_Item_PoorMansShield &);
	CDOTA_Item_PoorMansShield();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_PoorMansShield();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_poor_mans_shield.cpp:50
class CDOTA_Modifier_Item_PoorMansShield : public CDOTA_Buff_Item {
public:

private:

	int damage_block_melee;  // +0xba8
	int damage_block_ranged;  // +0xbac
	int block_chance;  // +0xbb0
	int bonus_agility;  // +0xbb4
	CDOTA_Modifier_Item_PoorMansShield();
	ModifierVariant_t GetModifierPhysical_ConstantBlock(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_PoorMansShield();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_PoorMansShield::~CDOTA_Item_Recipe_PoorMansShield  (line 27, @0x0000000002dd8370, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_PoorMansShield::~CDOTA_Item_Recipe_PoorMansShield(
        CDOTA_Item_Recipe_PoorMansShield *const this)
{
  this->_vptr_IHandleEntity = &off_473DA10;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_PoorMansShield::~CDOTA_Item_Recipe_PoorMansShield  (line 27, @0x0000000002dd8390, libserver.so)  // inlines: ~CDOTA_Item_Recipe_PoorMansShield
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_PoorMansShield::~CDOTA_Item_Recipe_PoorMansShield(
        CDOTA_Item_Recipe_PoorMansShield *const this)
{
  this->_vptr_IHandleEntity = &off_473DA10;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_PoorMansShield::Schema_DynamicBinding  (line 29, @0x0000000002dd4ac0, libserver.so)
// globals: CDOTA_Item_Recipe_PoorMansShield::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_PoorMansShield::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_PoorMansShield *const this)
{
  return CDOTA_Item_Recipe_PoorMansShield::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002dd4ad0, libserver.so)
// globals: CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002dd4ae0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_PoorMansShield>
void __fastcall CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002dd4b00, libserver.so)
void __fastcall CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002dd4b20, libserver.so)
bool __fastcall CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002dd4b30, libserver.so)
// globals: CDOTA_Item_Recipe_PoorMansShield::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_PoorMansShield::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002dd61f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002dd7250, libserver.so)  // inlines: CDOTA_Item_Recipe_PoorMansShield, Construct<CDOTA_Item_Recipe_PoorMansShield>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_473DA10;
  }
  return p;
}


// CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dda2a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dda2c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal  (line 29, @0x0000000002de2ff0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_recipe_poor_mans_shield", "CDOTA_Item_Recipe_PoorMansShield"
// globals: `guard variable for'CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass, CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass, __dso_handle, CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClassInfo, CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass);
    CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass._vptr_CEntityClass = off_473D990;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_PoorMansShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_PoorMansShieldClass != 0 )
    return &CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass;
  if ( `guard variable for'CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClassInfo,
      "CDOTA_Item_Recipe_PoorMansShield",
      "item_recipe_poor_mans_shield",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClassInfo);
  }
  CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass.m_pClassInfo = &CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClassInfo;
  CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass.m_pBaseClassInfo = CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_PoorMansShieldClass = &CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass;
  CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClassInfo.m_pClass = &CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass;
  CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_PoorMansShieldClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PoorMansShieldClass;
}


// CDOTA_Item_PoorMansShield::~CDOTA_Item_PoorMansShield  (line 38, @0x0000000002dd83c0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_PoorMansShield::~CDOTA_Item_PoorMansShield(CDOTA_Item_PoorMansShield *const this)
{
  this->_vptr_IHandleEntity = &off_473E610;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_PoorMansShield::~CDOTA_Item_PoorMansShield  (line 38, @0x0000000002dd83e0, libserver.so)  // inlines: ~CDOTA_Item_PoorMansShield
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_PoorMansShield::~CDOTA_Item_PoorMansShield(CDOTA_Item_PoorMansShield *const this)
{
  this->_vptr_IHandleEntity = &off_473E610;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_PoorMansShield::Schema_DynamicBinding  (line 40, @0x0000000002dd4b40, libserver.so)
// globals: CDOTA_Item_PoorMansShield::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_PoorMansShield::Schema_DynamicBinding(
        const CDOTA_Item_PoorMansShield *const this)
{
  return CDOTA_Item_PoorMansShield::s_pSchemaBinding;
}


// CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002dd4b50, libserver.so)
// globals: CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002dd4b60, libserver.so)  // inlines: Destruct<CDOTA_Item_PoorMansShield>
void __fastcall CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002dd4b80, libserver.so)
void __fastcall CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002dd4ba0, libserver.so)
bool __fastcall CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002dd4bb0, libserver.so)
// globals: CDOTA_Item_PoorMansShield::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_PoorMansShield::s_pSchemaBinding;
}


// CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002dd6230, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002dd7280, libserver.so)  // inlines: CDOTA_Item_PoorMansShield, Construct<CDOTA_Item_PoorMansShield>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_473E610;
  }
  return p;
}


// CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002dda2f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002dda310, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_PoorMansShield::GetEntityClassInternal  (line 40, @0x0000000002de3140, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_poor_mans_shield", "CDOTA_Item_PoorMansShield"
// globals: `guard variable for'CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass, CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass, __dso_handle, CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PoorMansShieldClassInfo, CDOTA_Item_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PoorMansShieldClassInfo
CEntityClass *__cdecl CDOTA_Item_PoorMansShield::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass);
    CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass._vptr_CEntityClass = off_473E590;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass);
    __cxa_atexit(
      CDOTA_Item_PoorMansShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_PoorMansShieldClass != 0 )
    return &CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass;
  if ( `guard variable for'CDOTA_Item_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PoorMansShieldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PoorMansShieldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PoorMansShieldClassInfo,
      "CDOTA_Item_PoorMansShield",
      "item_poor_mans_shield",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PoorMansShieldClassInfo);
  }
  CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass.m_pClassInfo = &CDOTA_Item_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PoorMansShieldClassInfo;
  CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass.m_pBaseClassInfo = CDOTA_Item_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PoorMansShieldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_PoorMansShieldClass = &CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass;
  CDOTA_Item_PoorMansShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PoorMansShieldClassInfo.m_pClass = &CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass;
  CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_PoorMansShieldClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_PoorMansShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PoorMansShieldClass;
}


// CDOTA_Item_PoorMansShield::GetIntrinsicModifierName  (line 42, @0x0000000002dd4bc0, libserver.so)
// strings: "modifier_item_poor_mans_shield"
const char *__fastcall CDOTA_Item_PoorMansShield::GetIntrinsicModifierName(CDOTA_Item_PoorMansShield *const this)
{
  return "modifier_item_poor_mans_shield";
}


// CDOTA_Modifier_Item_PoorMansShield::~CDOTA_Modifier_Item_PoorMansShield  (line 50, @0x0000000002dd6390, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_PoorMansShield::~CDOTA_Modifier_Item_PoorMansShield(
        CDOTA_Modifier_Item_PoorMansShield *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_PoorMansShield::~CDOTA_Modifier_Item_PoorMansShield  (line 50, @0x0000000002dd63b0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_PoorMansShield
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_PoorMansShield::~CDOTA_Modifier_Item_PoorMansShield(
        CDOTA_Modifier_Item_PoorMansShield *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_PoorMansShield::DeclareFunctions  (line 71, @0x0000000002dc77d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_PoorMansShield::GetModifierPhysical_ConstantBlock(CModifierParams const&), CDOTA_Modifier_Item_PoorMansShield::GetModifierBonusStats_Agility(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_PoorMansShield::DeclareFunctions(CDOTA_Modifier_Item_PoorMansShield *const this)
{
  this->m_Functions[86].__pfn = CDOTA_Modifier_Item_PoorMansShield::GetModifierPhysical_ConstantBlock;
  this->m_Functions[86].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_PoorMansShield::GetModifierBonusStats_Agility;
}


// CDOTA_Modifier_Item_PoorMansShield::GetModifierPhysical_ConstantBlock  (line 77, @0x0000000002dc9bf0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, RollPseudoRandomPercentage
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PoorMansShield::GetModifierPhysical_ConstantBlock(
        CDOTA_Modifier_Item_PoorMansShield *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *Caster; // rax
  __m128i v9; // xmm0
  int damage_block_ranged; // r12d
  CDOTA_BaseNPC *Parent; // rax
  __m128i v12; // xmm1
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    *&result.m_eType = 1;
    goto LABEL_6;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  damage_block_ranged = this->damage_block_ranged;
  if ( (Caster->m_iAttackCapabilities.m_Value & 2) == 0 )
    damage_block_ranged = this->damage_block_melee;
  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    *v9.m128i_i32 = damage_block_ranged;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v9) << 32) | 1;
    return result;
  }
  Parent = CDOTA_Buff::GetParent(this);
  LOBYTE(result.m_szVal) = RollPseudoRandomPercentage(
                             this->block_chance,
                             DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_PMS,
                             Parent);
  *&result.m_eType = 1;
  if ( LOBYTE(result.m_szVal) == 0 )
  {
LABEL_6:
    result.m_szVal = 0;
    return result;
  }
  *v12.m128i_i32 = damage_block_ranged;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v12) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_PoorMansShield::OnCreated  (line 102, @0x0000000002dd1380, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_block_melee", "damage_block_ranged", "bonus_agility"
void __fastcall CDOTA_Modifier_Item_PoorMansShield::OnCreated(
        CDOTA_Modifier_Item_PoorMansShield *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_block_melee = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_block_melee", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->damage_block_melee = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->damage_block_ranged = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_block_ranged", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->block_chance = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->damage_block_ranged = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->block_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "block_chance", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_agility", -1, 0);
    return;
  }
LABEL_9:
  this->bonus_agility = 0;
}


// CDOTA_Modifier_Item_PoorMansShield::GetModifierBonusStats_Agility  (line 113, @0x0000000002dc7810, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PoorMansShield::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_PoorMansShield *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


