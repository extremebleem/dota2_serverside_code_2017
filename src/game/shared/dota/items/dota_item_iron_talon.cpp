// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_iron_talon.cpp:32
class CDOTA_Item_Recipe_Iron_Talon : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Iron_Talon(CDOTA_Item_Recipe_Iron_Talon &);
	CDOTA_Item_Recipe_Iron_Talon(CDOTA_Item_Recipe_Iron_Talon &);
	CDOTA_Item_Recipe_Iron_Talon();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Iron_Talon();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_iron_talon.cpp:43
class CDOTA_Item_Iron_Talon : public CDOTA_Item {
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
	CDOTA_Item_Iron_Talon(CDOTA_Item_Iron_Talon &);
	CDOTA_Item_Iron_Talon(CDOTA_Item_Iron_Talon &);
	CDOTA_Item_Iron_Talon();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual void OnSpellStart();
	virtual float GetCooldown(int);
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Item_Iron_Talon();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[226] GetCastRange
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_iron_talon.cpp:60
class C_CDOTA_Item_Iron_Talon_MapInstall {
	C_CDOTA_Item_Iron_Talon_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_iron_talon.cpp:189
class CDOTA_Modifier_Item_Iron_Talon : public CDOTA_Buff_Item {
public:

private:

	int damage_bonus;  // +0xba8
	int damage_bonus_ranged;  // +0xbac
	int bonus_armor;  // +0xbb0
	CDOTA_Modifier_Item_Iron_Talon();
	virtual int GetAttributes();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Iron_Talon();

	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Iron_Talon::~CDOTA_Item_Recipe_Iron_Talon  (line 32, @0x0000000002dbc810, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Iron_Talon::~CDOTA_Item_Recipe_Iron_Talon(CDOTA_Item_Recipe_Iron_Talon *const this)
{
  this->_vptr_IHandleEntity = &off_47033F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Iron_Talon::~CDOTA_Item_Recipe_Iron_Talon  (line 32, @0x0000000002dbc830, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Iron_Talon
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Iron_Talon::~CDOTA_Item_Recipe_Iron_Talon(CDOTA_Item_Recipe_Iron_Talon *const this)
{
  this->_vptr_IHandleEntity = &off_47033F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Iron_Talon::Schema_DynamicBinding  (line 34, @0x0000000002db8b60, libserver.so)
// globals: CDOTA_Item_Recipe_Iron_Talon::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Iron_Talon::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Iron_Talon *const this)
{
  return CDOTA_Item_Recipe_Iron_Talon::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000002db8b70, libserver.so)
// globals: CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000002db8b80, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Iron_Talon>
void __fastcall CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000002db8ba0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000002db8bc0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000002db8bd0, libserver.so)
// globals: CDOTA_Item_Recipe_Iron_Talon::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Iron_Talon::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000002dba5c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000002dbb8e0, libserver.so)  // inlines: CDOTA_Item_Recipe_Iron_Talon, Construct<CDOTA_Item_Recipe_Iron_Talon>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47033F0;
  }
  return p;
}


// CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002dbea10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002dbea30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal  (line 34, @0x0000000002dc37b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_recipe_iron_talon", "CDOTA_Item_Recipe_Iron_Talon"
// globals: `guard variable for'CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass, CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass, __dso_handle, CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClassInfo, CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass);
    CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass._vptr_CEntityClass = off_4703370;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Iron_Talon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Iron_TalonClass != 0 )
    return &CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClassInfo,
      "CDOTA_Item_Recipe_Iron_Talon",
      "item_recipe_iron_talon",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClassInfo);
  }
  CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass.m_pClassInfo = &CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClassInfo;
  CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Iron_TalonClass = &CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass;
  CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClassInfo.m_pClass = &CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass;
  CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Iron_TalonClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Iron_TalonClass;
}


// CDOTA_Item_Iron_Talon::~CDOTA_Item_Iron_Talon  (line 43, @0x0000000002dbc860, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Iron_Talon::~CDOTA_Item_Iron_Talon(CDOTA_Item_Iron_Talon *const this)
{
  this->_vptr_IHandleEntity = &off_4703FF0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Iron_Talon::~CDOTA_Item_Iron_Talon  (line 43, @0x0000000002dbc880, libserver.so)  // inlines: ~CDOTA_Item_Iron_Talon
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Iron_Talon::~CDOTA_Item_Iron_Talon(CDOTA_Item_Iron_Talon *const this)
{
  this->_vptr_IHandleEntity = &off_4703FF0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Iron_Talon::Schema_DynamicBinding  (line 45, @0x0000000002db8be0, libserver.so)
// globals: CDOTA_Item_Iron_Talon::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Iron_Talon::Schema_DynamicBinding(
        const CDOTA_Item_Iron_Talon *const this)
{
  return CDOTA_Item_Iron_Talon::s_pSchemaBinding;
}


// CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 45, @0x0000000002db8bf0, libserver.so)
// globals: CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::DestructInstance  (line 45, @0x0000000002db8c00, libserver.so)  // inlines: Destruct<CDOTA_Item_Iron_Talon>
void __fastcall CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::FreeInstance  (line 45, @0x0000000002db8c20, libserver.so)
void __fastcall CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::CanAllocate  (line 45, @0x0000000002db8c40, libserver.so)
bool __fastcall CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 45, @0x0000000002db8c50, libserver.so)
// globals: CDOTA_Item_Iron_Talon::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Iron_Talon::s_pSchemaBinding;
}


// CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::AllocateInstance  (line 45, @0x0000000002dba600, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::ConstructInstance  (line 45, @0x0000000002dbb910, libserver.so)  // inlines: CDOTA_Item_Iron_Talon, Construct<CDOTA_Item_Iron_Talon>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4703FF0;
  }
  return p;
}


// CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x0000000002dbea60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x0000000002dbea80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Iron_Talon::GetEntityClassInternal  (line 45, @0x0000000002dc3900, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "CDOTA_Item_Iron_Talon"
// globals: `guard variable for'CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass, CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass, __dso_handle, CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Iron_TalonClassInfo, CDOTA_Item_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Iron_TalonClassInfo
CEntityClass *__cdecl CDOTA_Item_Iron_Talon::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass);
    CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass._vptr_CEntityClass = off_4703F70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass);
    __cxa_atexit(
      CDOTA_Item_Iron_Talon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Iron_TalonClass != 0 )
    return &CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass;
  if ( `guard variable for'CDOTA_Item_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Iron_TalonClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Iron_TalonClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Iron_TalonClassInfo,
      "CDOTA_Item_Iron_Talon",
      "item_iron_talon",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Iron_TalonClassInfo);
  }
  CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass.m_pClassInfo = &CDOTA_Item_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Iron_TalonClassInfo;
  CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass.m_pBaseClassInfo = CDOTA_Item_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Iron_TalonClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Iron_TalonClass = &CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass;
  CDOTA_Item_Iron_Talon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Iron_TalonClassInfo.m_pClass = &CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass;
  CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Iron_TalonClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Iron_Talon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Iron_TalonClass;
}


// CDOTA_Item_Iron_Talon::GetIntrinsicModifierName  (line 49, @0x0000000002db8c60, libserver.so)
// strings: "modifier_item_iron_talon"
const char *__fastcall CDOTA_Item_Iron_Talon::GetIntrinsicModifierName(CDOTA_Item_Iron_Talon *const this)
{
  return "modifier_item_iron_talon";
}


// CDOTA_Item_Iron_Talon::GetCastRange  (line 50, @0x0000000002dc6bc0, libserver.so)
// calls: CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_ward"
int __fastcall CDOTA_Item_Iron_Talon::GetCastRange(
        CDOTA_Item_Iron_Talon *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  if ( pTarget != 0 && (pTarget->m_iUnitType & 0x193) == 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_ward", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Item_Iron_Talon::YouForgotToImplementOrDeclareServerClass  (line 60, @0x0000000002daaff0, libserver.so)
int __fastcall CDOTA_Item_Iron_Talon::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Iron_Talon *const this)
{
  return 0;
}


// CDOTA_Item_Iron_Talon::GetServerClass  (line 60, @0x0000000002daecb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Iron_Talon::GetServerClass(CDOTA_Item_Iron_Talon *const this)
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


// CDOTA_Item_Iron_Talon::GetCooldown  (line 69, @0x0000000002db3160, libserver.so)  // inlines: FStrEq, GetLevelSpecialValueFor<int>, GetTeamNumber, GetUnitName, String, ToCStr, _V_strcmp
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, __dynamic_cast, CDOTABaseAbility::GetCaster, strcmp, CDOTABaseAbility::GetCooldown
// strings: "alternative_cooldown", "npc_dota_techies_stasis_trap", "npc_dota_techies_remote_mine"
float __fastcall CDOTA_Item_Iron_Talon::GetCooldown(CDOTA_Item_Iron_Talon *const this, int iLevel)
{
  int LevelSpecialValue; // r12d
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v7; // rax
  CBaseEntity *v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // r14
  char v11; // r15
  const char *v12; // r14

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "alternative_cooldown", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && __dynamic_cast(CursorTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2) != 0 )
    return LevelSpecialValue;
  v7 = CDOTABaseAbility::GetCursorTarget(this);
  if ( v7 != 0 && __dynamic_cast(v7, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_NPC_Observer_Ward, 0) != 0 )
    return LevelSpecialValue;
  v8 = CDOTABaseAbility::GetCursorTarget(this);
  if ( v8 != 0
    && (v9 = __dynamic_cast(v8, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC_Additive, 0), v10 = v9, v9 != 0)
    && (v11 = v9[383]) != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
    && (v12 = *(v10 + 423)) != 0
    && (v12 == "npc_dota_techies_stasis_trap"
     || strcmp(v12, "npc_dota_techies_stasis_trap") == 0
     || v12 == "npc_dota_techies_remote_mine"
     || strcmp(v12, "npc_dota_techies_remote_mine") == 0) )
  {
    return LevelSpecialValue;
  }
  else
  {
    return CDOTABaseAbility::GetCooldown(this, iLevel);
  }
}


// CDOTA_Item_Iron_Talon::OnSpellStart  (line 97, @0x0000000002db32b0, libserver.so)  // inlines: FStrEq, GetLevelSpecialValueFor<int>, GetTeamNumber, GetUnitName, String, ToCStr, ToDOTABaseNPC, _V_strcmp
// calls: CDOTABaseAbility::GetCursorTarget, __dynamic_cast, CDOTABaseAbility::GetCaster, CDOTA_CombatLog::AddTreeCutDownEvent, CDOTA_BaseNPC::Kill, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetHealth, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (14 total)
// strings: "creep_damage_pct", "particles/items3_fx/iron_talon_active.vpcf", "attach_hitloc", "DOTA_Item.IronTalon.Activate", "npc_dota_techies_stasis_trap", "npc_dota_techies_remote_mine"
void __fastcall CDOTA_Item_Iron_Talon::OnSpellStart(CDOTA_Item_Iron_Talon *const this)
{
  CBaseEntity *CursorTarget; // rax
  void *v3; // rax
  void *v4; // r12
  void (__fastcall *v5)(void *, _QWORD, _QWORD); // r14
  unsigned int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v8; // eax
  CDOTA_BaseNPC *v9; // rax
  int v10; // eax
  CBaseEntity *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // r12
  unsigned __int8 v14; // r13
  CDOTA_BaseNPC *v15; // rax
  CBaseEntity *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // r12
  unsigned __int8 v19; // r13
  const char *m_pAsString; // r13
  CBaseEntity *v21; // rax
  CDOTA_BaseNPC *v22; // r12
  int LevelSpecialValue; // r13d
  int Health; // r14d
  CDOTA_BaseNPC *v25; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v28; // rax
  __int64 v29; // r13
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v34; // 0:xmm0_8.8,8:xmm1_4.4

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 )
  {
    v3 = __dynamic_cast(CursorTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2);
    v4 = v3;
    if ( v3 != 0 )
    {
      v5 = *(*v3 + 72LL);
      m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
      Caster = CDOTABaseAbility::GetCaster(this);
      v8 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
      v5(v4, v8, m_Value);
      v9 = CDOTABaseAbility::GetCaster(this);
      v10 = (*(v9->_vptr_IHandleEntity + 414))(v9);
      CDOTA_CombatLog::AddTreeCutDownEvent(&g_DOTACombatLog, v10, 1);
    }
  }
  v11 = CDOTABaseAbility::GetCursorTarget(this);
  if ( v11 != 0 )
  {
    v12 = __dynamic_cast(v11, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_NPC_Observer_Ward, 0);
    v13 = v12;
    if ( v12 != 0 )
    {
      v14 = v12->m_iTeamNum.m_Value;
      if ( v14 != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      {
        v15 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::Kill(v13, this, v15, 0.0, 0);
      }
    }
  }
  v16 = CDOTABaseAbility::GetCursorTarget(this);
  if ( v16 != 0 )
  {
    v17 = __dynamic_cast(v16, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC_Additive, 0);
    v18 = v17;
    if ( v17 != 0 )
    {
      v19 = v17->m_iTeamNum.m_Value;
      if ( v19 != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      {
        m_pAsString = v18->m_iszUnitName.m_Value.u.m_pAsString;
        if ( m_pAsString != 0
          && (m_pAsString == "npc_dota_techies_stasis_trap"
           || strcmp(v18->m_iszUnitName.m_Value.u.m_pAsString, "npc_dota_techies_stasis_trap") == 0
           || m_pAsString == "npc_dota_techies_remote_mine"
           || strcmp(m_pAsString, "npc_dota_techies_remote_mine") == 0) )
        {
          v32 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::Kill(v18, this, v32, 0.0, 0);
        }
      }
    }
  }
  v21 = CDOTABaseAbility::GetCursorTarget(this);
  v22 = v21;
  if ( v21 != 0 && v21->m_bIsDOTANPC )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "creep_damage_pct", -1, 0);
    Health = CBaseEntity::GetHealth(v22);
    v25 = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(v25, v22, this, (Health * LevelSpecialValue) / 100.0, 4, 0);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/items3_fx/iron_talon_active.vpcf",
                 2,
                 v22,
                 0,
                 0);
    v28 = GetParticleManager();
    v29 = *&vec3_invalid.x;
    vecFallbackPosition = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v28, Particle, 0, v22, 5, "attach_hitloc", vec3_invalid, 1);
    v30 = GetParticleManager();
    *&v34.x = v29;
    v34.z = vecFallbackPosition;
    CDOTA_ParticleManager::SetParticleControlEnt(v30, Particle, 1, v22, 1, 0, v34, 1);
    v31 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v31, Particle);
    CDOTA_BaseNPC::UnitEmitSound(v22, "DOTA_Item.IronTalon.Activate", 0.0, 0, 0);
  }
}


// CDOTA_Item_Iron_Talon::CastFilterResult  (line 152, @0x0000000002dac4d0, libserver.so)  // inlines: FStrEq, GetTeamNumber, GetUnitName, IsOwnedByAnyPlayer, String, ToCStr, _V_strcmp
// calls: __dynamic_cast, CDOTABaseAbility::GetCaster, strcmp
// strings: "npc_dota_techies_stasis_trap", "npc_dota_techies_remote_mine"
int __fastcall CDOTA_Item_Iron_Talon::CastFilterResult(CDOTA_Item_Iron_Talon *const this, CDOTA_BaseNPC *pTarget)
{
  _BYTE *v5; // rax
  char v6; // r13
  unsigned __int8 m_Value; // r13
  const char *m_pAsString; // r13
  uint32 m_iUnitType; // eax
  unsigned __int8 v10; // bl

  if ( pTarget != 0
    && (__dynamic_cast(pTarget, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Tree, -2) != 0
     || (v5 = __dynamic_cast(pTarget, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_NPC_Observer_Ward, 0)) != 0
     && (v6 = v5[383]) != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
     || (m_Value = pTarget->m_iTeamNum.m_Value) != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
     && (m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString) != 0
     && (m_pAsString == "npc_dota_techies_stasis_trap"
      || strcmp(pTarget->m_iszUnitName.m_Value.u.m_pAsString, "npc_dota_techies_stasis_trap") == 0
      || m_pAsString == "npc_dota_techies_remote_mine"
      || strcmp(m_pAsString, "npc_dota_techies_remote_mine") == 0)
     || pTarget->m_iIsControllableByPlayer64.m_Value == 0
     && ((m_iUnitType = pTarget->m_iUnitType) & 1) == 0
     && !pTarget->m_bIsAncient.m_Value
     && (m_iUnitType & 0x10) == 0
     && (m_iUnitType & 0x193) != 0
     && (v10 = pTarget->m_iTeamNum.m_Value) != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value) )
  {
    return 0;
  }
  else
  {
    return 23;
  }
}


// CDOTA_Item_Iron_Talon::GetCustomCastError  (line 181, @0x0000000002dab000, libserver.so)
// strings: "#dota_hud_error_cant_cast_on_non_tree_ward"
const char *__fastcall CDOTA_Item_Iron_Talon::GetCustomCastError(
        CDOTA_Item_Iron_Talon *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "#dota_hud_error_cant_cast_on_non_tree_ward";
}


// CDOTA_Modifier_Item_Iron_Talon::~CDOTA_Modifier_Item_Iron_Talon  (line 189, @0x0000000002dbaf10, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Iron_Talon::~CDOTA_Modifier_Item_Iron_Talon(
        CDOTA_Modifier_Item_Iron_Talon *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Iron_Talon::~CDOTA_Modifier_Item_Iron_Talon  (line 189, @0x0000000002dbaf30, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Iron_Talon
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Iron_Talon::~CDOTA_Modifier_Item_Iron_Talon(
        CDOTA_Modifier_Item_Iron_Talon *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Iron_Talon::GetAttributes  (line 194, @0x0000000002db8c70, libserver.so)
int __fastcall CDOTA_Modifier_Item_Iron_Talon::GetAttributes(CDOTA_Modifier_Item_Iron_Talon *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Iron_Talon::DeclareFunctions  (line 209, @0x0000000002dab010, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Iron_Talon::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Iron_Talon::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Iron_Talon::DeclareFunctions(CDOTA_Modifier_Item_Iron_Talon *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Iron_Talon::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Iron_Talon::GetModifierPhysicalArmorBonus;
}


// CDOTA_Modifier_Item_Iron_Talon::GetModifierPhysicalArmorBonus  (line 215, @0x0000000002dab050, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Iron_Talon::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Iron_Talon *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Iron_Talon::GetModifierPreAttack_BonusDamage  (line 220, @0x0000000002dae160, libserver.so)  // inlines: AttackerNPC, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, TargetNPC, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::FindAbilityByName
// strings: "npc_dota_hero_kunkka"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Iron_Talon::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Iron_Talon *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rax
  uint32 v9; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CEntityInstance *v14; // r12
  const char *m_pAsString; // rsi
  CDOTABaseAbility *AbilityByName; // rax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 <= 1
    || (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v12 = &v11[m_Index_low & 0x1FF]) == 0
    || v9 != v12->m_EHandle.m_Index
    || (v14 = v12->m_pInstance, v12->m_pInstance == 0)
    || BYTE3(v14[7]._vptr_IHandleEntity) == 0
    || m_pInstance == 0
    || SLOBYTE(m_pInstance[43].m_iszPrivateVScripts.u.m_Id) >= 0
    || HIBYTE(v14[7].m_CScriptComponent) == HIBYTE(m_pInstance[7].m_CScriptComponent) )
  {
    *&result.m_eType = 1;
LABEL_11:
    result.m_szVal = 0;
    return result;
  }
  m_pAsString = v14[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( m_pAsString != 0 && (m_pAsString == "npc_dota_hero_kunkka" || strcmp(m_pAsString, "npc_dota_hero_kunkka") == 0) )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v14, "kunkka_tidebringer", 0);
    if ( AbilityByName != 0 )
    {
      LOBYTE(result.m_szVal) = (*(AbilityByName->_vptr_IHandleEntity + 245))(AbilityByName);
      *&result.m_eType = 1;
      if ( LOBYTE(result.m_szVal) != 0 )
        goto LABEL_11;
    }
  }
  if ( (*(&v14[50].m_worldGroupId + 1) & 2) != 0 )
  {
    *v2.m128i_i32 = this->damage_bonus_ranged;
    result.m_szVal = 0;
    result.m_eType = _mm_cvtsi128_si32(v2);
  }
  else
  {
    *v3.m128i_i32 = this->damage_bonus;
    result.m_szVal = 0;
    result.m_eType = _mm_cvtsi128_si32(v3);
  }
  *&result.m_eType = (result.m_eType << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Iron_Talon::OnCreated  (line 254, @0x0000000002db4de0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_bonus_ranged"
void __fastcall CDOTA_Modifier_Item_Iron_Talon::OnCreated(CDOTA_Modifier_Item_Iron_Talon *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_bonus", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage_bonus_ranged = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->damage_bonus = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage_bonus_ranged = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_bonus_ranged", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_armor", -1, 0);
    return;
  }
LABEL_7:
  this->bonus_armor = 0;
}


