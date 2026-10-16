// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_crimson_guard.cpp:28
class CDOTA_Item_Recipe_Crimson_Guard : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Crimson_Guard(CDOTA_Item_Recipe_Crimson_Guard &);
	CDOTA_Item_Recipe_Crimson_Guard(CDOTA_Item_Recipe_Crimson_Guard &);
	CDOTA_Item_Recipe_Crimson_Guard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Crimson_Guard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_crimson_guard.cpp:40
class CDOTA_Item_Crimson_Guard : public CDOTA_Item {
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
	CDOTA_Item_Crimson_Guard(CDOTA_Item_Crimson_Guard &);
	CDOTA_Item_Crimson_Guard(CDOTA_Item_Crimson_Guard &);
	CDOTA_Item_Crimson_Guard();
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
	virtual ~CDOTA_Item_Crimson_Guard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_crimson_guard.cpp:56
class C_CDOTA_Item_Crimson_Guard_MapInstall {
	C_CDOTA_Item_Crimson_Guard_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_crimson_guard.cpp:109
class CDOTA_Modifier_Item_Crimson_Guard_Extra : public CDOTA_Buff {
public:

private:

	int block_chance_active;  // +0xba8
	int block_damage_ranged_active;  // +0xbac
	int block_damage_melee_active;  // +0xbb0
	int bonus_aoe_armor;  // +0xbb4
	CDOTA_Modifier_Item_Crimson_Guard_Extra();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysical_ConstantBlock(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonusUniqueActive(const CModifierParams &);
	virtual ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Crimson_Guard_Extra();

	// vtable[65] DeclareFunctions
	// vtable[89] OnAttacked
	// vtable[57] OnCreated
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_crimson_guard.cpp:216
class CDOTA_Modifier_Item_Crimson_Guard : public CDOTA_Buff_Item {
public:

private:

	int bonus_health;  // +0xba8
	int bonus_health_regen;  // +0xbac
	int block_damage_ranged;  // +0xbb0
	int block_damage_melee;  // +0xbb4
	int block_chance;  // +0xbb8
	int bonus_armor;  // +0xbbc
	int bonus_all_stats;  // +0xbc0
	CDOTA_Modifier_Item_Crimson_Guard();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPhysical_ConstantBlock(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Crimson_Guard();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/items/dota_item_crimson_guard.cpp:336
class CDOTA_Modifier_Item_Crimson_Guard_NoStack : public CDOTA_Buff {
public:

	CDOTA_Modifier_Item_Crimson_Guard_NoStack(CDOTA_Modifier_Item_Crimson_Guard_NoStack &);
	CDOTA_Modifier_Item_Crimson_Guard_NoStack(const CDOTA_Modifier_Item_Crimson_Guard_NoStack &);
	CDOTA_Modifier_Item_Crimson_Guard_NoStack();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Item_Crimson_Guard_NoStack();

	// vtable[14] IsPurgable
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Crimson_Guard::~CDOTA_Item_Recipe_Crimson_Guard  (line 28, @0x0000000002d86180, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Crimson_Guard::~CDOTA_Item_Recipe_Crimson_Guard(
        CDOTA_Item_Recipe_Crimson_Guard *const this)
{
  this->_vptr_IHandleEntity = &off_46C1050;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Crimson_Guard::~CDOTA_Item_Recipe_Crimson_Guard  (line 28, @0x0000000002d861a0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Crimson_Guard
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Crimson_Guard::~CDOTA_Item_Recipe_Crimson_Guard(
        CDOTA_Item_Recipe_Crimson_Guard *const this)
{
  this->_vptr_IHandleEntity = &off_46C1050;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Crimson_Guard::Schema_DynamicBinding  (line 30, @0x0000000002d812d0, libserver.so)
// globals: CDOTA_Item_Recipe_Crimson_Guard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Crimson_Guard::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Crimson_Guard *const this)
{
  return CDOTA_Item_Recipe_Crimson_Guard::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002d812e0, libserver.so)
// globals: CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002d812f0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Crimson_Guard>
void __fastcall CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002d81310, libserver.so)
void __fastcall CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002d81330, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002d81340, libserver.so)
// globals: CDOTA_Item_Recipe_Crimson_Guard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Crimson_Guard::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002d83870, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002d84da0, libserver.so)  // inlines: CDOTA_Item_Recipe_Crimson_Guard, Construct<CDOTA_Item_Recipe_Crimson_Guard>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46C1050;
  }
  return p;
}


// CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002d887f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002d88810, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal  (line 30, @0x0000000002d90bd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_crimson_guard", "CDOTA_Item_Recipe_Crimson_Guard"
// globals: `guard variable for'CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass, CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass, __dso_handle, CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClassInfo, CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass);
    CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass._vptr_CEntityClass = off_46C0FD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Crimson_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Crimson_GuardClass != 0 )
    return &CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClassInfo,
      "CDOTA_Item_Recipe_Crimson_Guard",
      "item_recipe_crimson_guard",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClassInfo);
  }
  CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass.m_pClassInfo = &CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClassInfo;
  CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Crimson_GuardClass = &CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass;
  CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClassInfo.m_pClass = &CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass;
  CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Crimson_GuardClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Crimson_GuardClass;
}


// CDOTA_Item_Crimson_Guard::~CDOTA_Item_Crimson_Guard  (line 40, @0x0000000002d861d0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Crimson_Guard::~CDOTA_Item_Crimson_Guard(CDOTA_Item_Crimson_Guard *const this)
{
  this->_vptr_IHandleEntity = &off_46C1C50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Crimson_Guard::~CDOTA_Item_Crimson_Guard  (line 40, @0x0000000002d861f0, libserver.so)  // inlines: ~CDOTA_Item_Crimson_Guard
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Crimson_Guard::~CDOTA_Item_Crimson_Guard(CDOTA_Item_Crimson_Guard *const this)
{
  this->_vptr_IHandleEntity = &off_46C1C50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Crimson_Guard::Schema_DynamicBinding  (line 42, @0x0000000002d81350, libserver.so)
// globals: CDOTA_Item_Crimson_Guard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Crimson_Guard::Schema_DynamicBinding(
        const CDOTA_Item_Crimson_Guard *const this)
{
  return CDOTA_Item_Crimson_Guard::s_pSchemaBinding;
}


// CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002d81360, libserver.so)
// globals: CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x0000000002d81370, libserver.so)  // inlines: Destruct<CDOTA_Item_Crimson_Guard>
void __fastcall CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x0000000002d81390, libserver.so)
void __fastcall CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x0000000002d813b0, libserver.so)
bool __fastcall CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x0000000002d813c0, libserver.so)
// globals: CDOTA_Item_Crimson_Guard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Crimson_Guard::s_pSchemaBinding;
}


// CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x0000000002d838b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x0000000002d84dd0, libserver.so)  // inlines: CDOTA_Item_Crimson_Guard, Construct<CDOTA_Item_Crimson_Guard>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46C1C50;
  }
  return p;
}


// CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002d88840, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002d88860, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Crimson_Guard::GetEntityClassInternal  (line 42, @0x0000000002d90d20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_Crimson_Guard"
// globals: `guard variable for'CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass, CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass, __dso_handle, CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Crimson_GuardClassInfo, CDOTA_Item_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Crimson_GuardClassInfo
CEntityClass *__cdecl CDOTA_Item_Crimson_Guard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass);
    CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass._vptr_CEntityClass = off_46C1BD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass);
    __cxa_atexit(
      CDOTA_Item_Crimson_Guard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Crimson_GuardClass != 0 )
    return &CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass;
  if ( `guard variable for'CDOTA_Item_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Crimson_GuardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Crimson_GuardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Crimson_GuardClassInfo,
      "CDOTA_Item_Crimson_Guard",
      "item_crimson_guard",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Crimson_GuardClassInfo);
  }
  CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass.m_pClassInfo = &CDOTA_Item_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Crimson_GuardClassInfo;
  CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass.m_pBaseClassInfo = CDOTA_Item_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Crimson_GuardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Crimson_GuardClass = &CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass;
  CDOTA_Item_Crimson_Guard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Crimson_GuardClassInfo.m_pClass = &CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass;
  CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Crimson_GuardClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Crimson_Guard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Crimson_GuardClass;
}


// CDOTA_Item_Crimson_Guard::GetIntrinsicModifierName  (line 46, @0x0000000002d813d0, libserver.so)
// strings: "modifier_item_crimson_guard"
const char *__fastcall CDOTA_Item_Crimson_Guard::GetIntrinsicModifierName(CDOTA_Item_Crimson_Guard *const this)
{
  return "modifier_item_crimson_guard";
}


// CDOTA_Item_Crimson_Guard::YouForgotToImplementOrDeclareServerClass  (line 56, @0x0000000002d6f1a0, libserver.so)
int __fastcall CDOTA_Item_Crimson_Guard::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Crimson_Guard *const this)
{
  return 0;
}


// CDOTA_Item_Crimson_Guard::GetServerClass  (line 56, @0x0000000002d73bb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Crimson_Guard::GetServerClass(CDOTA_Item_Crimson_Guard *const this)
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


// CDOTA_Item_Crimson_Guard::OnSpellStart  (line 65, @0x0000000002d7d030, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FindModifierByName, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, CDOTA_BaseNPC::GetModelRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt (22 total)
// strings: "bonus_aoe_radius", "modifier_item_crimson_guard_nostack", "particles/items2_fx/vanguard_active_launch.vpcf", "Item.CrimsonGuard.Cast", "modifier_item_crimson_guard_extra"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Crimson_Guard::OnSpellStart(CDOTA_Item_Crimson_Guard *const this)
{
  int LevelSpecialValue; // eax
  __m128i v3; // xmm2
  float v4; // r15d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v8; // rax
  __int64 i; // rbx
  uint32 m_iUnitType; // eax
  CDOTA_BaseNPC *m_pInstance; // r12
  CModifieractoryDictionary *v12; // rax
  IModifierFactory *Factory; // rax
  CHandle<CBaseEntity> *v14; // rdx
  uint32 m_Index; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v22; // r12
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  float v27; // xmm1_4
  CDOTA_BaseNPC *v28; // rax
  float v29; // xmm1_4
  CDOTA_BaseNPC *v30; // rax
  double vecRadius; // [rsp+30h] [rbp-A0h]
  float vecRadius_8; // [rsp+38h] [rbp-98h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_aoe_radius", -1, 0);
  entities.m_Memory.m_nAllocationCount = 0;
  *v3.m128i_i32 = LevelSpecialValue;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  Caster = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, Caster, v4, &entities, 1, 23, 262208, 0, 0);
  if ( entities.m_Size > 0 )
  {
    for ( i = 0; entities.m_Size > i; ++i )
    {
      v14 = &entities.m_Memory.m_pMemory[i];
      m_Index = v14->m_Index;
      if ( v14->m_Index + 2 > 1
        && (v16 = v14->m_Index,
            (v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F]) != 0)
        && (v18 = &v17[v16 & 0x1FF]) != 0
        && m_Index == v18->m_EHandle.m_Index
        && (m_pInstance = v18->m_pInstance, v18->m_pInstance != 0)
        && m_pInstance->m_bIsDOTANPC )
      {
        m_iUnitType = m_pInstance->m_iUnitType;
        if ( (m_iUnitType & 1) != 0 )
        {
LABEL_5:
          v12 = ModifierFactoryDictionary();
          Factory = CModifieractoryDictionary::FindFactory(v12, "modifier_item_crimson_guard_nostack");
          if ( CDOTA_ModifierManager::FindModifierByName(
                 &m_pInstance->m_ModifierManager,
                 Factory,
                 "modifier_item_crimson_guard_nostack",
                 0) == 0 )
          {
            KeyValues::KeyValues(&kv, "modifier_item_crimson_guard_extra");
            KeyValues::SetFloat(&kv, "duration", v27);
            v28 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v28, this, "modifier_item_crimson_guard_extra", &kv, 0);
            KeyValues::KeyValues(&kv2, "modifier_item_crimson_guard_nostack");
            (*(this->_vptr_IHandleEntity + 242))(this, 0xFFFFFFFFLL);
            KeyValues::SetFloat(&kv2, "duration", v29);
            v30 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v30, this, "modifier_item_crimson_guard_nostack", &kv2, 0);
            KeyValues::~KeyValues(&kv2);
            KeyValues::~KeyValues(&kv);
          }
          continue;
        }
      }
      else
      {
        LOBYTE(m_iUnitType) = 0;
        m_pInstance = 0;
      }
      if ( (m_iUnitType & 0x10) != 0 )
        goto LABEL_5;
    }
  }
  HIDWORD(vecRadius) = LODWORD(vec3_origin.y);
  vecRadius_8 = vec3_origin.z;
  v19 = CDOTABaseAbility::GetCaster(this);
  if ( v19 == 0 || !v19->m_bIsDOTANPC )
    v19 = 0;
  LODWORD(vecRadius) = CDOTA_BaseNPC::GetModelRadius(v19);
  v20 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v20) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/items2_fx/vanguard_active_launch.vpcf",
                   7,
                   v20,
                   0,
                   0);
  v22 = CDOTABaseAbility::GetCaster(this);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v23, v20, 1, v22, 1, 0, vec3_invalid, 1);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v24, v20, 2, vecRadius, vecRadius_8);
  v25 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v25, v20);
  v26 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Item.CrimsonGuard.Cast", v26);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Item_Crimson_Guard_Extra::~CDOTA_Modifier_Item_Crimson_Guard_Extra  (line 109, @0x0000000002d84640, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Crimson_Guard_Extra::~CDOTA_Modifier_Item_Crimson_Guard_Extra(
        CDOTA_Modifier_Item_Crimson_Guard_Extra *const this)
{
  this->_vptr_CDOTA_Buff = &off_46C2810;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Crimson_Guard_Extra::~CDOTA_Modifier_Item_Crimson_Guard_Extra  (line 109, @0x0000000002d84660, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Crimson_Guard_Extra
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Crimson_Guard_Extra::~CDOTA_Modifier_Item_Crimson_Guard_Extra(
        CDOTA_Modifier_Item_Crimson_Guard_Extra *const this)
{
  this->_vptr_CDOTA_Buff = &off_46C2810;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Crimson_Guard_Extra::OnCreated  (line 129, @0x0000000002d7c020, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "block_chance_active", "block_damage_ranged_active", "block_damage_melee_active", "bonus_aoe_armor"
void __fastcall CDOTA_Modifier_Item_Crimson_Guard_Extra::OnCreated(
        CDOTA_Modifier_Item_Crimson_Guard_Extra *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->block_chance_active = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "block_chance_active", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->block_chance_active = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->block_damage_ranged_active = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                           v4,
                                           "block_damage_ranged_active",
                                           -1,
                                           0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->block_damage_melee_active = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->block_damage_ranged_active = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->block_damage_melee_active = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      v5,
                                      "block_damage_melee_active",
                                      -1,
                                      0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_aoe_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_aoe_armor", -1, 0);
    return;
  }
LABEL_9:
  this->bonus_aoe_armor = 0;
}


// CDOTA_Modifier_Item_Crimson_Guard_Extra::DeclareFunctions  (line 157, @0x0000000002d6f1b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Crimson_Guard_Extra::GetModifierPhysical_ConstantBlock(CModifierParams const&), CDOTA_Modifier_Item_Crimson_Guard_Extra::GetModifierPhysicalArmorBonusUniqueActive(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Crimson_Guard_Extra::DeclareFunctions(
        CDOTA_Modifier_Item_Crimson_Guard_Extra *const this)
{
  this->m_Functions[86].__pfn = CDOTA_Modifier_Item_Crimson_Guard_Extra::GetModifierPhysical_ConstantBlock;
  this->m_Functions[86].__delta = 0;
  this->m_Functions[47].__delta = 0;
  this->m_Functions[47].__pfn = CDOTA_Modifier_Item_Crimson_Guard_Extra::GetModifierPhysicalArmorBonusUniqueActive;
  this->m_Functions[137].__pfn = (&stru_10 + 697);
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Item_Crimson_Guard_Extra::GetModifierPhysical_ConstantBlock  (line 164, @0x0000000002d6fd10, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_CombatLog::AddHeroSavedEvent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Crimson_Guard_Extra::GetModifierPhysical_ConstantBlock(
        CDOTA_Modifier_Item_Crimson_Guard_Extra *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  int block_damage_melee_active; // r12d
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  __m128i v8; // xmm2
  int block_damage_ranged_active; // edx
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // r13
  CDOTA_BaseNPC *Caster; // r12
  CDOTABaseAbility *Ability; // rax
  float fDamage; // [rsp+Ch] [rbp-24h]
  float v16; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  block_damage_melee_active = this->block_damage_melee_active;
  fDamage = params->fDamage;
  if ( (Parent->m_iAttackCapabilities.m_Value & 2) != 0 )
    block_damage_melee_active = this->block_damage_ranged_active;
  v6 = CDOTA_Buff::GetParent(this);
  if ( fDamage >= CBaseEntity::GetHealth(v6) )
  {
    v16 = params->fDamage - block_damage_melee_active;
    v11 = CDOTA_Buff::GetParent(this);
    if ( CBaseEntity::GetHealth(v11) > v16 )
    {
      v12 = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      Ability = CDOTA_Buff::GetAbility(this);
      CDOTA_CombatLog::AddHeroSavedEvent(&g_DOTACombatLog, Ability, Caster, v12, 0);
    }
  }
  v7 = CDOTA_Buff::GetParent(this);
  block_damage_ranged_active = this->block_damage_melee_active;
  if ( (v7->m_iAttackCapabilities.m_Value & 2) != 0 )
    block_damage_ranged_active = this->block_damage_ranged_active;
  *v8.m128i_i32 = block_damage_ranged_active;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v8) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Crimson_Guard_Extra::GetModifierPhysicalArmorBonusUniqueActive  (line 182, @0x0000000002d6f200, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Crimson_Guard_Extra::GetModifierPhysicalArmorBonusUniqueActive(
        CDOTA_Modifier_Item_Crimson_Guard_Extra *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_aoe_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Crimson_Guard_Extra::OnAttacked  (line 187, @0x0000000002d73090, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetModelRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/items2_fx/vanguard_active_impact.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Crimson_Guard_Extra::OnAttacked(
        CDOTA_Modifier_Item_Crimson_Guard_Extra *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rsi
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  const CBaseAnimating *v16; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v18; // rdi
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v21; // r14
  CDOTA_ParticleManager *v22; // rax
  __int64 v23; // r12
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  double vecRadius; // [rsp+10h] [rbp-30h]
  float vecRadius_8; // [rsp+18h] [rbp-28h]
  Vector v31; // 0:xmm0_8.8,8:xmm1_4.4

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
          v9 = params->htarget.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
            || (v11 = &v10[params->htarget.m_Index & 0x1FF]) == 0
            || v9 != v11->m_EHandle.m_Index
            || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
            || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
          {
            v12 = 0;
          }
          v13 = params->hattacker.m_Index;
          if ( v13 + 2 > 1 )
          {
            v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
            if ( v14 != 0 )
            {
              v15 = &v14[params->hattacker.m_Index & 0x1FF];
              if ( v15 != 0 && v13 == v15->m_EHandle.m_Index )
              {
                v16 = v15->m_pInstance;
                if ( v15->m_pInstance != 0
                  && v16->m_bIsDOTANPC
                  && v12 != 0
                  && HIBYTE(v12[7].m_CScriptComponent) != v16->m_iTeamNum.m_Value )
                {
                  HIDWORD(vecRadius) = LODWORD(vec3_origin.y);
                  vecRadius_8 = vec3_origin.z;
                  Parent = CDOTA_Buff::GetParent(this);
                  v18 = Parent;
                  if ( Parent == 0 || !Parent->m_bIsDOTANPC )
                    v18 = 0;
                  LODWORD(vecRadius) = CDOTA_BaseNPC::GetModelRadius(v18);
                  v19 = CDOTA_Buff::GetParent(this);
                  ParticleManager = GetParticleManager();
                  LODWORD(v19) = CDOTA_ParticleManager::CreateParticle(
                                   ParticleManager,
                                   "particles/items2_fx/vanguard_active_impact.vpcf",
                                   7,
                                   v19,
                                   0,
                                   0);
                  v21 = CDOTA_Buff::GetParent(this);
                  v22 = GetParticleManager();
                  v23 = *&vec3_invalid.x;
                  vecFallbackPosition = vec3_invalid.z;
                  CDOTA_ParticleManager::SetParticleControlEnt(v22, v19, 1, v21, 1, 0, vec3_invalid, 1);
                  v24 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControl(v24, v19, 2, vecRadius, vecRadius_8);
                  v25 = GetParticleManager();
                  *&v31.x = v23;
                  v31.z = vecFallbackPosition;
                  CDOTA_ParticleManager::SetParticleControlEnt(v25, v19, 3, v16, 1, 0, v31, 1);
                  v26 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v26, v19);
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


// CDOTA_Modifier_Item_Crimson_Guard::~CDOTA_Modifier_Item_Crimson_Guard  (line 216, @0x0000000002d84050, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Crimson_Guard::~CDOTA_Modifier_Item_Crimson_Guard(
        CDOTA_Modifier_Item_Crimson_Guard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Crimson_Guard::~CDOTA_Modifier_Item_Crimson_Guard  (line 216, @0x0000000002d84070, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Crimson_Guard
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Crimson_Guard::~CDOTA_Modifier_Item_Crimson_Guard(
        CDOTA_Modifier_Item_Crimson_Guard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Crimson_Guard::OnCreated  (line 245, @0x0000000002d7c470, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_health", "bonus_health_regen", "block_damage_ranged", "block_damage_melee", "bonus_all_stats"
void __fastcall CDOTA_Modifier_Item_Crimson_Guard::OnCreated(
        CDOTA_Modifier_Item_Crimson_Guard *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_health", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_health = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_health_regen", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->bonus_health_regen = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->block_damage_ranged = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "block_damage_ranged", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->block_damage_ranged = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->block_damage_melee = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "block_damage_melee", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_12:
  this->block_damage_melee = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->block_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "block_chance", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->bonus_armor = 0;
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
    goto LABEL_15;
  }
LABEL_13:
  this->block_chance = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "bonus_armor", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_8:
    this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "bonus_all_stats", -1, 0);
    return;
  }
LABEL_15:
  this->bonus_all_stats = 0;
}


// CDOTA_Modifier_Item_Crimson_Guard::DeclareFunctions  (line 269, @0x0000000002d6f220, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Crimson_Guard::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_Item_Crimson_Guard::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_Crimson_Guard::GetModifierPhysical_ConstantBlock(CModifierParams const&), CDOTA_Modifier_Item_Crimson_Guard::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Item_Crimson_Guard::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Crimson_Guard::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Crimson_Guard::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Crimson_Guard::DeclareFunctions(CDOTA_Modifier_Item_Crimson_Guard *const this)
{
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_Crimson_Guard::GetModifierHealthBonus;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Crimson_Guard::GetModifierConstantHealthRegen;
  this->m_Functions[86].__pfn = CDOTA_Modifier_Item_Crimson_Guard::GetModifierPhysical_ConstantBlock;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Crimson_Guard::GetModifierPhysicalArmorBonus;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Crimson_Guard::GetModifierBonusStats_Strength;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Crimson_Guard::GetModifierBonusStats_Agility;
  this->m_Functions[86].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Crimson_Guard::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_Crimson_Guard::GetModifierHealthBonus  (line 280, @0x0000000002d6f2e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Crimson_Guard::GetModifierHealthBonus(
        CDOTA_Modifier_Item_Crimson_Guard *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Crimson_Guard::GetModifierConstantHealthRegen  (line 285, @0x0000000002d6f300, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Crimson_Guard::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Crimson_Guard *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Crimson_Guard::GetModifierPhysical_ConstantBlock  (line 290, @0x0000000002d6f980, libserver.so)
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Crimson_Guard::GetModifierPhysical_ConstantBlock(
        CDOTA_Modifier_Item_Crimson_Guard *const this,
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
          DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_CRIMSON_GUARD,
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


// CDOTA_Modifier_Item_Crimson_Guard::GetModifierPhysicalArmorBonus  (line 305, @0x0000000002d6f320, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Crimson_Guard::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Crimson_Guard *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Crimson_Guard::GetModifierBonusStats_Strength  (line 312, @0x0000000002d6f340, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Crimson_Guard::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Crimson_Guard *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Crimson_Guard::GetModifierBonusStats_Agility  (line 319, @0x0000000002d6f360, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Crimson_Guard::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Crimson_Guard *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Crimson_Guard::GetModifierBonusStats_Intellect  (line 326, @0x0000000002d6f380, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Crimson_Guard::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Crimson_Guard *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Crimson_Guard_NoStack::~CDOTA_Modifier_Item_Crimson_Guard_NoStack  (line 336, @0x0000000002d84820, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Crimson_Guard_NoStack::~CDOTA_Modifier_Item_Crimson_Guard_NoStack(
        CDOTA_Modifier_Item_Crimson_Guard_NoStack *const this)
{
  this->_vptr_CDOTA_Buff = &off_46C2E10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Crimson_Guard_NoStack::~CDOTA_Modifier_Item_Crimson_Guard_NoStack  (line 336, @0x0000000002d84840, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Crimson_Guard_NoStack
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Crimson_Guard_NoStack::~CDOTA_Modifier_Item_Crimson_Guard_NoStack(
        CDOTA_Modifier_Item_Crimson_Guard_NoStack *const this)
{
  this->_vptr_CDOTA_Buff = &off_46C2E10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Crimson_Guard_NoStack::IsPurgable  (line 341, @0x0000000002d813e0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Crimson_Guard_NoStack::IsPurgable(
        CDOTA_Modifier_Item_Crimson_Guard_NoStack *const this)
{
  return 0;
}


