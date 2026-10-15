// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_divine_rapier.cpp:29
class CDOTA_Item_Recipe_DivineRapier : public CDOTA_Item {
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
	CDOTA_Item_Recipe_DivineRapier(CDOTA_Item_Recipe_DivineRapier &);
	CDOTA_Item_Recipe_DivineRapier(CDOTA_Item_Recipe_DivineRapier &);
	CDOTA_Item_Recipe_DivineRapier();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_DivineRapier();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_divine_rapier.cpp:41
class CDOTA_Item_DivineRapier : public CDOTA_Item {
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
	CDOTA_Item_DivineRapier(CDOTA_Item_DivineRapier &);
	CDOTA_Item_DivineRapier(CDOTA_Item_DivineRapier &);
	CDOTA_Item_DivineRapier();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnEquip();
	virtual void OnUnequip();
	virtual void OnOwnerDied();
	virtual bool CanUnitPickUp(CDOTA_BaseNPC *);
	virtual ~CDOTA_Item_DivineRapier();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[333] OnEquip
	// vtable[334] OnUnequip
	// vtable[271] OnOwnerDied
	// vtable[362] CanUnitPickUp
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_divine_rapier.cpp:119
class CDOTA_Modifier_Item_DivineRapier : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	CDOTA_Modifier_Item_DivineRapier();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_DivineRapier();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_DivineRapier::~CDOTA_Item_Recipe_DivineRapier  (line 29, @0x0000000002d867c0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_DivineRapier::~CDOTA_Item_Recipe_DivineRapier(
        CDOTA_Item_Recipe_DivineRapier *const this)
{
  this->_vptr_IHandleEntity = &off_46D38F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_DivineRapier::~CDOTA_Item_Recipe_DivineRapier  (line 29, @0x0000000002d867e0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_DivineRapier
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_DivineRapier::~CDOTA_Item_Recipe_DivineRapier(
        CDOTA_Item_Recipe_DivineRapier *const this)
{
  this->_vptr_IHandleEntity = &off_46D38F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_DivineRapier::Schema_DynamicBinding  (line 31, @0x0000000002d81db0, libserver.so)
// globals: CDOTA_Item_Recipe_DivineRapier::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_DivineRapier::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_DivineRapier *const this)
{
  return CDOTA_Item_Recipe_DivineRapier::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 31, @0x0000000002d81dc0, libserver.so)
// globals: CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::DestructInstance  (line 31, @0x0000000002d81dd0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_DivineRapier>
void __fastcall CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::FreeInstance  (line 31, @0x0000000002d81df0, libserver.so)
void __fastcall CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::CanAllocate  (line 31, @0x0000000002d81e10, libserver.so)
bool __fastcall CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 31, @0x0000000002d81e20, libserver.so)
// globals: CDOTA_Item_Recipe_DivineRapier::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_DivineRapier::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::AllocateInstance  (line 31, @0x0000000002d83d70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::ConstructInstance  (line 31, @0x0000000002d85160, libserver.so)  // inlines: CDOTA_Item_Recipe_DivineRapier, Construct<CDOTA_Item_Recipe_DivineRapier>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46D38F0;
  }
  return p;
}


// CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002d88e30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002d88e50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal  (line 31, @0x0000000002d93310, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_rapier", "CDOTA_Item_Recipe_DivineRapier"
// globals: `guard variable for'CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass, CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass, __dso_handle, CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClassInfo, CDOTA_Item_Recipe_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass);
    CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass._vptr_CEntityClass = off_46D3870;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_DivineRapier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_DivineRapierClass != 0 )
    return &CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass;
  if ( `guard variable for'CDOTA_Item_Recipe_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClassInfo,
      "CDOTA_Item_Recipe_DivineRapier",
      "item_recipe_rapier",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClassInfo);
  }
  CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass.m_pClassInfo = &CDOTA_Item_Recipe_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClassInfo;
  CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass.m_pBaseClassInfo = CDOTA_Item_Recipe_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_DivineRapierClass = &CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass;
  CDOTA_Item_Recipe_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClassInfo.m_pClass = &CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass;
  CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_DivineRapierClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_DivineRapierClass;
}


// CDOTA_Item_DivineRapier::~CDOTA_Item_DivineRapier  (line 41, @0x0000000002d86810, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_DivineRapier::~CDOTA_Item_DivineRapier(CDOTA_Item_DivineRapier *const this)
{
  this->_vptr_IHandleEntity = &off_46D44F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_DivineRapier::~CDOTA_Item_DivineRapier  (line 41, @0x0000000002d86830, libserver.so)  // inlines: ~CDOTA_Item_DivineRapier
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_DivineRapier::~CDOTA_Item_DivineRapier(CDOTA_Item_DivineRapier *const this)
{
  this->_vptr_IHandleEntity = &off_46D44F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_DivineRapier::Schema_DynamicBinding  (line 43, @0x0000000002d81e30, libserver.so)
// globals: CDOTA_Item_DivineRapier::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_DivineRapier::Schema_DynamicBinding(
        const CDOTA_Item_DivineRapier *const this)
{
  return CDOTA_Item_DivineRapier::s_pSchemaBinding;
}


// CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002d81e40, libserver.so)
// globals: CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_DivineRapier::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002d81e50, libserver.so)  // inlines: Destruct<CDOTA_Item_DivineRapier>
void __fastcall CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_DivineRapier::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002d81e70, libserver.so)
void __fastcall CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_DivineRapier::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x0000000002d81e90, libserver.so)
bool __fastcall CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_DivineRapier::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x0000000002d81ea0, libserver.so)
// globals: CDOTA_Item_DivineRapier::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_DivineRapier::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_DivineRapier::s_pSchemaBinding;
}


// CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002d83db0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_DivineRapier::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x0000000002d85190, libserver.so)  // inlines: CDOTA_Item_DivineRapier, Construct<CDOTA_Item_DivineRapier>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_DivineRapier::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46D44F0;
  }
  return p;
}


// CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002d88e80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_DivineRapier::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002d88ea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_DivineRapier::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_DivineRapier::GetEntityClassInternal  (line 43, @0x0000000002d93460, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_rapier", "CDOTA_Item_DivineRapier"
// globals: `guard variable for'CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass, CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass, __dso_handle, CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DivineRapierClassInfo, CDOTA_Item_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DivineRapierClassInfo
CEntityClass *__cdecl CDOTA_Item_DivineRapier::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass);
    CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass._vptr_CEntityClass = off_46D4470;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass);
    __cxa_atexit(
      CDOTA_Item_DivineRapier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_DivineRapierClass != 0 )
    return &CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass;
  if ( `guard variable for'CDOTA_Item_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DivineRapierClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DivineRapierClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DivineRapierClassInfo,
      "CDOTA_Item_DivineRapier",
      "item_rapier",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DivineRapierClassInfo);
  }
  CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass.m_pClassInfo = &CDOTA_Item_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DivineRapierClassInfo;
  CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass.m_pBaseClassInfo = CDOTA_Item_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DivineRapierClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_DivineRapierClass = &CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass;
  CDOTA_Item_DivineRapier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DivineRapierClassInfo.m_pClass = &CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass;
  CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_DivineRapierClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_DivineRapier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DivineRapierClass;
}


// CDOTA_Item_DivineRapier::CanUnitPickUp  (line 52, @0x0000000002d81eb0, libserver.so)
bool __fastcall CDOTA_Item_DivineRapier::CanUnitPickUp(CDOTA_Item_DivineRapier *const this, CDOTA_BaseNPC *pUnit)
{
  return (BYTE1(pUnit->m_iUnitType) ^ 1) & 1;
}


// CDOTA_Item_DivineRapier::OnEquip  (line 61, @0x0000000002d72260, libserver.so)  // inlines: GetParent, GetPlayerOwnerID, GetTeamNumber, NetworkStateChanged, Set, SetPlayerOwnerID, ToDOTABaseNPC, operator=<EShareAbility>, operator=<bool>, operator=<int>
// calls: CGameSceneNode::GetOwnerEntity, CDOTA_PlayerResource::GetTeam, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_Item::OnEquip, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_divine_rapier"
void __fastcall CDOTA_Item_DivineRapier::OnEquip(CDOTA_Item_DivineRapier *const this)
{
  int m_Value; // r13d
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CDOTA_BaseNPC *v5; // r12
  int v6; // r14d
  int v7; // r13d
  int v8; // ecx
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  m_Value = this->m_iPlayerOwnerID.m_Value;
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    v5 = OwnerEntity;
    if ( OwnerEntity != 0 && OwnerEntity->m_bIsDOTANPC )
    {
      if ( m_Value == -1
        || (v6 = OwnerEntity->m_iTeamNum.m_Value, CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, m_Value) == v6) )
      {
LABEL_10:
        KeyValues::KeyValues(&kv, "modifier_item_divine_rapier");
        CDOTA_BaseNPC::AddNewModifier(v5, v5, this, "modifier_item_divine_rapier", &kv, 0);
        KeyValues::~KeyValues(&kv);
        goto LABEL_11;
      }
      if ( this->m_bDroppable.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 928, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v8 = this->m_iSharability.m_Value;
        this->m_bDroppable.m_Value = 0;
        if ( v8 == 0 )
          goto LABEL_8;
      }
      else if ( this->m_iSharability.m_Value == 0 )
      {
        goto LABEL_8;
      }
      (*(this->_vptr_IHandleEntity + 22))(this, 924, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iSharability.m_Value = 0;
LABEL_8:
      v7 = (*(v5->_vptr_IHandleEntity + 414))(v5);
      if ( v7 != this->m_iPlayerOwnerID.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iPlayerOwnerID.m_Value = v7;
      }
      goto LABEL_10;
    }
  }
LABEL_11:
  CDOTA_Item::OnEquip(this);
}


// CDOTA_Item_DivineRapier::OnUnequip  (line 85, @0x0000000002d6fe10, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCaster, CDOTA_Item::OnUnequip, CDOTA_ModifierManager::RemoveAbilityBasedModifier
// strings: "modifier_item_divine_rapier"
void __fastcall CDOTA_Item_DivineRapier::OnUnequip(CDOTA_Item_DivineRapier *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && Caster->m_bIsDOTANPC )
  {
    CDOTA_ModifierManager::RemoveAbilityBasedModifier(&Caster->m_ModifierManager, "modifier_item_divine_rapier", this);
    CDOTA_Item::OnUnequip(this);
  }
  else
  {
    CDOTA_Item::OnUnequip(this);
  }
}


// CDOTA_Item_DivineRapier::OnOwnerDied  (line 98, @0x0000000002d72410, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC
// calls: CDOTA_Item::OnOwnerDied, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::DropItemOnLocation
void __fastcall CDOTA_Item_DivineRapier::OnOwnerDied(CDOTA_Item_DivineRapier *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  const Vector *AbsOrigin; // r13
  CDOTA_UnitInventory *Inventory; // rax

  CDOTA_Item::OnOwnerDied(this);
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v3 & 0x1FF];
      if ( v6 != 0 && v4 == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && (*(m_pInstance->_vptr_IHandleEntity + 438))(v6->m_pInstance) == 0 )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
          Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
          CDOTA_UnitInventory::DropItemOnLocation(Inventory, this, *&AbsOrigin->x, AbsOrigin->z);
        }
      }
    }
  }
}


// CDOTA_Modifier_Item_DivineRapier::~CDOTA_Modifier_Item_DivineRapier  (line 119, @0x0000000002d83ec0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_DivineRapier::~CDOTA_Modifier_Item_DivineRapier(
        CDOTA_Modifier_Item_DivineRapier *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_DivineRapier::~CDOTA_Modifier_Item_DivineRapier  (line 119, @0x0000000002d83ee0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_DivineRapier
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_DivineRapier::~CDOTA_Modifier_Item_DivineRapier(
        CDOTA_Modifier_Item_DivineRapier *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_DivineRapier::OnCreated  (line 138, @0x0000000002d7b770, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_DivineRapier::OnCreated(
        CDOTA_Modifier_Item_DivineRapier *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  else
    this->bonus_damage = 0;
}


// CDOTA_Modifier_Item_DivineRapier::DeclareFunctions  (line 147, @0x0000000002d6f7a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_DivineRapier::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_DivineRapier::DeclareFunctions(CDOTA_Modifier_Item_DivineRapier *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_DivineRapier::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_DivineRapier::GetModifierPreAttack_BonusDamage  (line 155, @0x0000000002d6ffc0, libserver.so)
// calls: CDOTA_Buff_Item::GetItem
ModifierVariant_t __fastcall CDOTA_Modifier_Item_DivineRapier::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_DivineRapier *const this,
        const CModifierParams *const params)
{
  CDOTA_Item *Item; // rax
  char v4; // al
  __m128i v5; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff_Item::GetItem(this) == 0 )
    return 1uLL;
  Item = CDOTA_Buff_Item::GetItem(this);
  v4 = (*(Item->_vptr_IHandleEntity + 348))(Item);
  v5 = 0;
  if ( v4 == 0 )
    *v5.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  return result;
}


