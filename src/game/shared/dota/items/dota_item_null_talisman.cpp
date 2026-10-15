// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_null_talisman.cpp:26
class CDOTA_Item_Recipe_NullTalisman : public CDOTA_Item {
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
	CDOTA_Item_Recipe_NullTalisman(CDOTA_Item_Recipe_NullTalisman &);
	CDOTA_Item_Recipe_NullTalisman(CDOTA_Item_Recipe_NullTalisman &);
	CDOTA_Item_Recipe_NullTalisman();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_NullTalisman();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_null_talisman.cpp:37
class CDOTA_Item_NullTalisman : public CDOTA_Item {
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
	CDOTA_Item_NullTalisman(CDOTA_Item_NullTalisman &);
	CDOTA_Item_NullTalisman(CDOTA_Item_NullTalisman &);
	CDOTA_Item_NullTalisman();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_NullTalisman();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_null_talisman.cpp:49
class CDOTA_Modifier_Item_NullTalisman : public CDOTA_Buff_Item {
public:

private:

	int bonus_strength;  // +0xba8
	int bonus_agility;  // +0xbac
	int bonus_intellect;  // +0xbb0
	int bonus_damage;  // +0xbb4
	CDOTA_Modifier_Item_NullTalisman();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_NullTalisman();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_NullTalisman::~CDOTA_Item_Recipe_NullTalisman  (line 26, @0x0000000002dd7e70, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_NullTalisman::~CDOTA_Item_Recipe_NullTalisman(
        CDOTA_Item_Recipe_NullTalisman *const this)
{
  this->_vptr_IHandleEntity = &off_472D730;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_NullTalisman::~CDOTA_Item_Recipe_NullTalisman  (line 26, @0x0000000002dd7e90, libserver.so)  // inlines: ~CDOTA_Item_Recipe_NullTalisman
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_NullTalisman::~CDOTA_Item_Recipe_NullTalisman(
        CDOTA_Item_Recipe_NullTalisman *const this)
{
  this->_vptr_IHandleEntity = &off_472D730;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_NullTalisman::Schema_DynamicBinding  (line 28, @0x0000000002dd4160, libserver.so)
// globals: CDOTA_Item_Recipe_NullTalisman::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_NullTalisman::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_NullTalisman *const this)
{
  return CDOTA_Item_Recipe_NullTalisman::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002dd4170, libserver.so)
// globals: CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002dd4180, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_NullTalisman>
void __fastcall CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002dd41a0, libserver.so)
void __fastcall CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002dd41c0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002dd41d0, libserver.so)
// globals: CDOTA_Item_Recipe_NullTalisman::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_NullTalisman::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dd5df0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dd6f50, libserver.so)  // inlines: CDOTA_Item_Recipe_NullTalisman, Construct<CDOTA_Item_Recipe_NullTalisman>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_472D730;
  }
  return p;
}


// CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dd9da0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dd9dc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal  (line 28, @0x0000000002de07d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_recipe_null_talisman", "CDOTA_Item_Recipe_NullTalisman"
// globals: `guard variable for'CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass, CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass, __dso_handle, CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClassInfo, CDOTA_Item_Recipe_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass);
    CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass._vptr_CEntityClass = off_472D6B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_NullTalisman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_NullTalismanClass != 0 )
    return &CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass;
  if ( `guard variable for'CDOTA_Item_Recipe_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClassInfo,
      "CDOTA_Item_Recipe_NullTalisman",
      "item_recipe_null_talisman",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClassInfo);
  }
  CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass.m_pClassInfo = &CDOTA_Item_Recipe_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClassInfo;
  CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass.m_pBaseClassInfo = CDOTA_Item_Recipe_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_NullTalismanClass = &CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass;
  CDOTA_Item_Recipe_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClassInfo.m_pClass = &CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass;
  CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_NullTalismanClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NullTalismanClass;
}


// CDOTA_Item_NullTalisman::~CDOTA_Item_NullTalisman  (line 37, @0x0000000002dd7ec0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_NullTalisman::~CDOTA_Item_NullTalisman(CDOTA_Item_NullTalisman *const this)
{
  this->_vptr_IHandleEntity = &off_472E330;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_NullTalisman::~CDOTA_Item_NullTalisman  (line 37, @0x0000000002dd7ee0, libserver.so)  // inlines: ~CDOTA_Item_NullTalisman
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_NullTalisman::~CDOTA_Item_NullTalisman(CDOTA_Item_NullTalisman *const this)
{
  this->_vptr_IHandleEntity = &off_472E330;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_NullTalisman::Schema_DynamicBinding  (line 39, @0x0000000002dd41e0, libserver.so)
// globals: CDOTA_Item_NullTalisman::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_NullTalisman::Schema_DynamicBinding(
        const CDOTA_Item_NullTalisman *const this)
{
  return CDOTA_Item_NullTalisman::s_pSchemaBinding;
}


// CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002dd41f0, libserver.so)
// globals: CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_NullTalisman::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002dd4200, libserver.so)  // inlines: Destruct<CDOTA_Item_NullTalisman>
void __fastcall CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_NullTalisman::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002dd4220, libserver.so)
void __fastcall CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_NullTalisman::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002dd4240, libserver.so)
bool __fastcall CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_NullTalisman::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002dd4250, libserver.so)
// globals: CDOTA_Item_NullTalisman::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_NullTalisman::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_NullTalisman::s_pSchemaBinding;
}


// CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002dd5e30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_NullTalisman::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002dd6f80, libserver.so)  // inlines: CDOTA_Item_NullTalisman, Construct<CDOTA_Item_NullTalisman>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_NullTalisman::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_472E330;
  }
  return p;
}


// CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002dd9df0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_NullTalisman::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002dd9e10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_NullTalisman::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_NullTalisman::GetEntityClassInternal  (line 39, @0x0000000002de0920, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "CDOTA_Item_NullTalisman"
// globals: `guard variable for'CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass, CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass, __dso_handle, CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NullTalismanClassInfo, CDOTA_Item_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NullTalismanClassInfo
CEntityClass *__cdecl CDOTA_Item_NullTalisman::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass);
    CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass._vptr_CEntityClass = off_472E2B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass);
    __cxa_atexit(
      CDOTA_Item_NullTalisman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_NullTalismanClass != 0 )
    return &CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass;
  if ( `guard variable for'CDOTA_Item_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NullTalismanClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NullTalismanClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NullTalismanClassInfo,
      "CDOTA_Item_NullTalisman",
      "item_null_talisman",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NullTalismanClassInfo);
  }
  CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass.m_pClassInfo = &CDOTA_Item_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NullTalismanClassInfo;
  CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass.m_pBaseClassInfo = CDOTA_Item_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NullTalismanClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_NullTalismanClass = &CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass;
  CDOTA_Item_NullTalisman::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NullTalismanClassInfo.m_pClass = &CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass;
  CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_NullTalismanClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_NullTalisman::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NullTalismanClass;
}


// CDOTA_Item_NullTalisman::GetIntrinsicModifierName  (line 41, @0x0000000002dd4260, libserver.so)
// strings: "modifier_item_null_talisman"
const char *__fastcall CDOTA_Item_NullTalisman::GetIntrinsicModifierName(CDOTA_Item_NullTalisman *const this)
{
  return "modifier_item_null_talisman";
}


// CDOTA_Modifier_Item_NullTalisman::~CDOTA_Modifier_Item_NullTalisman  (line 49, @0x0000000002dd66b0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_NullTalisman::~CDOTA_Modifier_Item_NullTalisman(
        CDOTA_Modifier_Item_NullTalisman *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_NullTalisman::~CDOTA_Modifier_Item_NullTalisman  (line 49, @0x0000000002dd66d0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_NullTalisman
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_NullTalisman::~CDOTA_Modifier_Item_NullTalisman(
        CDOTA_Modifier_Item_NullTalisman *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_NullTalisman::OnCreated  (line 74, @0x0000000002dd1140, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_agility", "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_NullTalisman::OnCreated(
        CDOTA_Modifier_Item_NullTalisman *const this,
        KeyValues *pKV)
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


// CDOTA_Modifier_Item_NullTalisman::DeclareFunctions  (line 82, @0x0000000002dc7000, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_NullTalisman::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_NullTalisman::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_NullTalisman::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_NullTalisman::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_NullTalisman::DeclareFunctions(CDOTA_Modifier_Item_NullTalisman *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_NullTalisman::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_NullTalisman::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_NullTalisman::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_NullTalisman::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_NullTalisman::GetModifierBonusStats_Strength  (line 90, @0x0000000002dc7070, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_NullTalisman::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_NullTalisman *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_NullTalisman::GetModifierBonusStats_Agility  (line 95, @0x0000000002dc7090, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_NullTalisman::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_NullTalisman *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_NullTalisman::GetModifierBonusStats_Intellect  (line 100, @0x0000000002dc70b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_NullTalisman::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_NullTalisman *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_NullTalisman::GetModifierPreAttack_BonusDamage  (line 105, @0x0000000002dc70d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_NullTalisman::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_NullTalisman *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


