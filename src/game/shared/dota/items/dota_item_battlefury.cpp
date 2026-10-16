// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_battlefury.cpp:28
class CDOTA_Item_Recipe_Battlefury : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Battlefury(CDOTA_Item_Recipe_Battlefury &);
	CDOTA_Item_Recipe_Battlefury(CDOTA_Item_Recipe_Battlefury &);
	CDOTA_Item_Recipe_Battlefury();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Battlefury();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_battlefury.cpp:39
class CDOTA_Item_Battlefury : public CDOTA_Item {
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
	CDOTA_Item_Battlefury(CDOTA_Item_Battlefury &);
	CDOTA_Item_Battlefury(CDOTA_Item_Battlefury &);
	CDOTA_Item_Battlefury();
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
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Item_Battlefury();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[226] GetCastRange
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_battlefury.cpp:52
class C_CDOTA_Item_Battlefury_MapInstall {
	C_CDOTA_Item_Battlefury_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_battlefury.cpp:115
class CDOTA_Modifier_Item_Battlefury : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_health_regen;  // +0xbac
	int bonus_mana_regen;  // +0xbb0
	int cleave_damage_percent;  // +0xbb4
	int cleave_starting_width;  // +0xbb8
	int cleave_ending_width;  // +0xbbc
	int cleave_distance;  // +0xbc0
	int quelling_bonus;  // +0xbc4
	int quelling_bonus_ranged;  // +0xbc8
	CDOTA_Modifier_Item_Battlefury();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierDamageOutgoing_PercentageUnique(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierPhysical_ConstantBlock(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Battlefury();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3024
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Battlefury::~CDOTA_Item_Recipe_Battlefury  (line 28, @0x0000000002d64580, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Battlefury::~CDOTA_Item_Recipe_Battlefury(CDOTA_Item_Recipe_Battlefury *const this)
{
  this->_vptr_IHandleEntity = &off_468FD30;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Battlefury::~CDOTA_Item_Recipe_Battlefury  (line 28, @0x0000000002d645a0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Battlefury
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Battlefury::~CDOTA_Item_Recipe_Battlefury(CDOTA_Item_Recipe_Battlefury *const this)
{
  this->_vptr_IHandleEntity = &off_468FD30;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Battlefury::Schema_DynamicBinding  (line 30, @0x0000000002d60cb0, libserver.so)
// globals: CDOTA_Item_Recipe_Battlefury::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Battlefury::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Battlefury *const this)
{
  return CDOTA_Item_Recipe_Battlefury::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002d60cc0, libserver.so)
// globals: CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002d60cd0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Battlefury>
void __fastcall CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002d60cf0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002d60d10, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002d60d20, libserver.so)
// globals: CDOTA_Item_Recipe_Battlefury::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Battlefury::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002d625b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002d63720, libserver.so)  // inlines: CDOTA_Item_Recipe_Battlefury, Construct<CDOTA_Item_Recipe_Battlefury>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_468FD30;
  }
  return p;
}


// CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002d664a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002d664c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal  (line 30, @0x0000000002d6baf0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_recipe_bfury", "CDOTA_Item_Recipe_Battlefury"
// globals: `guard variable for'CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass, CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass, __dso_handle, CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClassInfo, CDOTA_Item_Recipe_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass);
    CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass._vptr_CEntityClass = off_468FCB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Battlefury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_BattlefuryClass != 0 )
    return &CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClassInfo,
      "CDOTA_Item_Recipe_Battlefury",
      "item_recipe_bfury",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClassInfo);
  }
  CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass.m_pClassInfo = &CDOTA_Item_Recipe_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClassInfo;
  CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_BattlefuryClass = &CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass;
  CDOTA_Item_Recipe_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClassInfo.m_pClass = &CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass;
  CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_BattlefuryClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BattlefuryClass;
}


// CDOTA_Item_Battlefury::~CDOTA_Item_Battlefury  (line 39, @0x0000000002d645d0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Battlefury::~CDOTA_Item_Battlefury(CDOTA_Item_Battlefury *const this)
{
  this->_vptr_IHandleEntity = &off_4690930;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Battlefury::~CDOTA_Item_Battlefury  (line 39, @0x0000000002d645f0, libserver.so)  // inlines: ~CDOTA_Item_Battlefury
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Battlefury::~CDOTA_Item_Battlefury(CDOTA_Item_Battlefury *const this)
{
  this->_vptr_IHandleEntity = &off_4690930;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Battlefury::Schema_DynamicBinding  (line 41, @0x0000000002d60d30, libserver.so)
// globals: CDOTA_Item_Battlefury::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Battlefury::Schema_DynamicBinding(
        const CDOTA_Item_Battlefury *const this)
{
  return CDOTA_Item_Battlefury::s_pSchemaBinding;
}


// CDOTA_Item_Battlefury::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002d60d40, libserver.so)
// globals: CDOTA_Item_Battlefury::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Battlefury::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Battlefury::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Battlefury::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Battlefury::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002d60d50, libserver.so)  // inlines: Destruct<CDOTA_Item_Battlefury>
void __fastcall CDOTA_Item_Battlefury::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Battlefury::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Battlefury::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002d60d70, libserver.so)
void __fastcall CDOTA_Item_Battlefury::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Battlefury::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Battlefury::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002d60d90, libserver.so)
bool __fastcall CDOTA_Item_Battlefury::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Battlefury::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Battlefury::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002d60da0, libserver.so)
// globals: CDOTA_Item_Battlefury::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Battlefury::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Battlefury::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Battlefury::s_pSchemaBinding;
}


// CDOTA_Item_Battlefury::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002d625f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Battlefury::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Battlefury::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Battlefury::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002d63750, libserver.so)  // inlines: CDOTA_Item_Battlefury, Construct<CDOTA_Item_Battlefury>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Battlefury::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Battlefury::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4690930;
  }
  return p;
}


// CDOTA_Item_Battlefury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d664f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Battlefury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Battlefury::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Battlefury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d66510, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Battlefury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Battlefury::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Battlefury::GetEntityClassInternal  (line 41, @0x0000000002d6bc40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_bfury", "CDOTA_Item_Battlefury"
// globals: `guard variable for'CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass, CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass, __dso_handle, CDOTA_Item_Battlefury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BattlefuryClassInfo, CDOTA_Item_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BattlefuryClassInfo
CEntityClass *__cdecl CDOTA_Item_Battlefury::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass);
    CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass._vptr_CEntityClass = off_46908B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass);
    __cxa_atexit(
      CDOTA_Item_Battlefury::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BattlefuryClass != 0 )
    return &CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass;
  if ( `guard variable for'CDOTA_Item_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BattlefuryClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BattlefuryClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BattlefuryClassInfo,
      "CDOTA_Item_Battlefury",
      "item_bfury",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BattlefuryClassInfo);
  }
  CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass.m_pClassInfo = &CDOTA_Item_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BattlefuryClassInfo;
  CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass.m_pBaseClassInfo = CDOTA_Item_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BattlefuryClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BattlefuryClass = &CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass;
  CDOTA_Item_Battlefury::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BattlefuryClassInfo.m_pClass = &CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass;
  CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BattlefuryClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Battlefury::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BattlefuryClass;
}


// CDOTA_Item_Battlefury::GetIntrinsicModifierName  (line 44, @0x0000000002d60db0, libserver.so)
// strings: "modifier_item_battlefury"
const char *__fastcall CDOTA_Item_Battlefury::GetIntrinsicModifierName(CDOTA_Item_Battlefury *const this)
{
  return "modifier_item_battlefury";
}


// CDOTA_Item_Battlefury::GetCastRange  (line 46, @0x0000000002d6e6d0, libserver.so)
// calls: CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_ward"
int __fastcall CDOTA_Item_Battlefury::GetCastRange(
        CDOTA_Item_Battlefury *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  if ( pTarget != 0 && (pTarget->m_iUnitType & 0x193) == 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_ward", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Item_Battlefury::YouForgotToImplementOrDeclareServerClass  (line 52, @0x0000000002d542d0, libserver.so)
int __fastcall CDOTA_Item_Battlefury::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Battlefury *const this)
{
  return 0;
}


// CDOTA_Item_Battlefury::GetServerClass  (line 52, @0x0000000002d587f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Battlefury::GetServerClass(CDOTA_Item_Battlefury *const this)
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


// CDOTA_Item_Battlefury::OnSpellStart  (line 58, @0x0000000002d55010, libserver.so)  // inlines: FStrEq, GetTeamNumber, GetUnitName, String, ToCStr, _V_strcmp
// calls: CDOTABaseAbility::GetCursorTarget, __dynamic_cast, CDOTABaseAbility::GetCaster, CDOTA_CombatLog::AddTreeCutDownEvent, CDOTA_BaseNPC::Kill, strcmp
// strings: "npc_dota_techies_stasis_trap", "npc_dota_techies_remote_mine"
void __fastcall CDOTA_Item_Battlefury::OnSpellStart(CDOTA_Item_Battlefury *const this)
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
  CDOTA_BaseNPC *v21; // rax

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
          v21 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::Kill(v18, this, v21, 0.0, 0);
        }
      }
    }
  }
}


// CDOTA_Item_Battlefury::CastFilterResult  (line 84, @0x0000000002d55530, libserver.so)  // inlines: FStrEq, GetTeamNumber, GetUnitName, String, ToCStr, _V_strcmp
// calls: __dynamic_cast, CDOTABaseAbility::GetCaster, strcmp
// strings: "npc_dota_techies_stasis_trap", "npc_dota_techies_remote_mine"
int __fastcall CDOTA_Item_Battlefury::CastFilterResult(CDOTA_Item_Battlefury *const this, CDOTA_BaseNPC *pTarget)
{
  int result; // eax
  _BYTE *v5; // rax
  char v6; // r13
  unsigned __int8 m_Value; // r13
  const char *m_pAsString; // rbx
  bool v9; // zf

  if ( pTarget == 0 )
    return 23;
  if ( __dynamic_cast(pTarget, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Tree, -2) != 0 )
    return 0;
  v5 = __dynamic_cast(pTarget, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_NPC_Observer_Ward, 0);
  if ( v5 != 0 )
  {
    v6 = v5[383];
    if ( v6 != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      return 0;
  }
  m_Value = pTarget->m_iTeamNum.m_Value;
  if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    return 23;
  m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString == 0 )
    return 23;
  result = 0;
  if ( m_pAsString != "npc_dota_techies_stasis_trap" )
  {
    result = strcmp(m_pAsString, "npc_dota_techies_stasis_trap");
    if ( result != 0 )
    {
      result = 0;
      if ( m_pAsString != "npc_dota_techies_remote_mine" )
      {
        v9 = strcmp(m_pAsString, "npc_dota_techies_remote_mine") == 0;
        result = !v9;
        if ( !v9 )
          return 23;
      }
    }
  }
  return result;
}


// CDOTA_Item_Battlefury::GetCustomCastError  (line 108, @0x0000000002d542e0, libserver.so)
// strings: "#dota_hud_error_cant_cast_on_non_tree_ward"
const char *__fastcall CDOTA_Item_Battlefury::GetCustomCastError(
        CDOTA_Item_Battlefury *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "#dota_hud_error_cant_cast_on_non_tree_ward";
}


// CDOTA_Modifier_Item_Battlefury::~CDOTA_Modifier_Item_Battlefury  (line 115, @0x0000000002d62df0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Battlefury::~CDOTA_Modifier_Item_Battlefury(
        CDOTA_Modifier_Item_Battlefury *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Battlefury::~CDOTA_Modifier_Item_Battlefury  (line 115, @0x0000000002d62e10, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Battlefury
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Battlefury::~CDOTA_Modifier_Item_Battlefury(
        CDOTA_Modifier_Item_Battlefury *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Battlefury::DeclareFunctions  (line 148, @0x0000000002d542f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Battlefury::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Item_Battlefury::GetModifierPercentageManaRegen(CModifierParams const&), CDOTA_Modifier_Item_Battlefury::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_Battlefury::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Battlefury::GetModifierDamageOutgoing_PercentageUnique(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Battlefury::DeclareFunctions(CDOTA_Modifier_Item_Battlefury *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Item_Battlefury::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[54].__delta = 0;
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_Battlefury::GetModifierPercentageManaRegen;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Battlefury::GetModifierConstantHealthRegen;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Battlefury::GetModifierPreAttack_BonusDamage;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[35].__pfn = CDOTA_Modifier_Item_Battlefury::GetModifierDamageOutgoing_PercentageUnique;
  this->m_Functions[35].__delta = 0;
}


// CDOTA_Modifier_Item_Battlefury::GetModifierPercentageManaRegen  (line 157, @0x0000000002d54380, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Battlefury::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_Battlefury *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Battlefury::GetModifierConstantHealthRegen  (line 162, @0x0000000002d543a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Battlefury::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Battlefury *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Battlefury::GetModifierPreAttack_BonusDamage  (line 167, @0x0000000002d543c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Battlefury::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Battlefury *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Battlefury::GetModifierDamageOutgoing_PercentageUnique  (line 172, @0x0000000002d57860, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::FindAbilityByName
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Battlefury::GetModifierDamageOutgoing_PercentageUnique(
        CDOTA_Modifier_Item_Battlefury *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax
  uint32 v7; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  CDOTA_BaseNPC *v12; // r12
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  unsigned int v16; // eax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 > 1
    && (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
    && (v10 = &v9[m_Index_low & 0x1FF]) != 0
    && v7 == v10->m_EHandle.m_Index
    && (v12 = v10->m_pInstance, v10->m_pInstance != 0)
    && v12->m_bIsDOTANPC
    && m_pInstance != 0
    && SLOBYTE(m_pInstance[43].m_iszPrivateVScripts.u.m_Id) < 0
    && v12->m_iTeamNum.m_Value != HIBYTE(m_pInstance[7].m_CScriptComponent) )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v10->m_pInstance, "kunkka_tidebringer", 0);
    if ( AbilityByName == 0
      || (LOBYTE(result.m_szVal) = (*(AbilityByName->_vptr_IHandleEntity + 245))(AbilityByName),
          *&result.m_eType = 1,
          LOBYTE(result.m_szVal) == 0) )
    {
      if ( (v12->m_iAttackCapabilities.m_Value & 2) != 0 )
      {
        *v14.m128i_i32 = this->quelling_bonus_ranged;
        v16 = _mm_cvtsi128_si32(v14);
      }
      else
      {
        *v15.m128i_i32 = this->quelling_bonus;
        v16 = _mm_cvtsi128_si32(v15);
      }
      *&result.m_eType = (v16 << 32) | 1;
    }
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Item_Battlefury::OnCreated  (line 203, @0x0000000002d5d3f0, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "bonus_health_regen", "bonus_mana_regen", "cleave_damage_percent", "cleave_starting_width", "cleave_ending_width", "cleave_distance" (8 total)
void __fastcall CDOTA_Modifier_Item_Battlefury::OnCreated(CDOTA_Modifier_Item_Battlefury *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_health_regen, "bonus_health_regen");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_mana_regen, "bonus_mana_regen");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->bonus_damage, "bonus_damage");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->cleave_damage_percent, "cleave_damage_percent");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->cleave_starting_width, "cleave_starting_width");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->cleave_ending_width, "cleave_ending_width");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->cleave_distance, "cleave_distance");
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, &this->quelling_bonus, "quelling_bonus");
  v11 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v11, &this->quelling_bonus_ranged, "quelling_bonus_ranged");
}


// CDOTA_Modifier_Item_Battlefury::OnAttackLanded  (line 220, @0x0000000002d58110, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff::GetAbility, DoCleaveAttack, CDOTA_BaseNPC::UnitEmitSound
// strings: "modifier_monkey_king_boundless_strike_crit", "particles/items_fx/battlefury_cleave.vpcf", "DOTA_Item.BattleFury"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Battlefury::OnAttackLanded(
        CDOTA_Modifier_Item_Battlefury *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // r14
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // r13
  __int64 iRecord; // r15
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // rax
  float flDamage; // [rsp+0h] [rbp-40h]
  float flDistance; // [rsp+4h] [rbp-3Ch]
  float flEndingWidth; // [rsp+8h] [rbp-38h]
  float flStartingWidth; // [rsp+Ch] [rbp-34h]

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hattacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    v9 = params->htarget.m_Index;
    if ( v9 + 2 <= 1
      || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v11 = &v10[params->htarget.m_Index & 0x1FF]) == 0
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
      || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
    {
      v16 = 0;
    }
    if ( CDOTA_BaseNPC::FindModifierByName(v16, "modifier_monkey_king_boundless_strike_crit", 0) == 0 )
    {
      iRecord = params->iRecord;
      AttackRecordsManager = GetAttackRecordsManager();
      RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
      if ( (RecordByIndex == 0 || !RecordByIndex->m_bFakeAttack)
        && v16 != 0
        && v12 != 0
        && (*(&v16[50].m_worldGroupId + 1) & 2) == 0
        && v12->m_iTeamNum.m_Value != HIBYTE(v16[7].m_CScriptComponent) )
      {
        flDistance = this->cleave_distance;
        flEndingWidth = this->cleave_ending_width;
        flStartingWidth = this->cleave_starting_width;
        flDamage = (this->cleave_damage_percent / 100.0) * params->fDamage;
        Ability = CDOTA_Buff::GetAbility(this);
        Parent = CDOTA_Buff::GetParent(this);
        DoCleaveAttack(
          Parent,
          v12,
          Ability,
          flDamage,
          flStartingWidth,
          flEndingWidth,
          flDistance,
          "particles/items_fx/battlefury_cleave.vpcf",
          params);
        CDOTA_BaseNPC::UnitEmitSound(v12, "DOTA_Item.BattleFury", 0.0, 0, 0);
      }
    }
  }
  return 1uLL;
}


