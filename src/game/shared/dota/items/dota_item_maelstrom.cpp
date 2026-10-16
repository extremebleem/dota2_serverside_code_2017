// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_maelstrom.cpp:27
class CDOTA_Item_Recipe_Maelstrom : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Maelstrom(CDOTA_Item_Recipe_Maelstrom &);
	CDOTA_Item_Recipe_Maelstrom(CDOTA_Item_Recipe_Maelstrom &);
	CDOTA_Item_Recipe_Maelstrom();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Maelstrom();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_maelstrom.cpp:39
class CDOTA_Item_Maelstrom : public CDOTA_Item {
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
	CDOTA_Item_Maelstrom(CDOTA_Item_Maelstrom &);
	CDOTA_Item_Maelstrom(CDOTA_Item_Maelstrom &);
	CDOTA_Item_Maelstrom();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Maelstrom();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_maelstrom.cpp:53
class CDOTA_Modifier_MaelstromChain : public CDOTA_Buff {
public:

private:

	int chain_radius;  // +0xba8
	int chain_strikes;  // +0xbac
	int chain_damage;  // +0xbb0
	float chain_delay;  // +0xbb4
	int m_iCurJumpCount;  // +0xbb8
	CDOTA_Modifier_MaelstromChain();
	virtual bool IsHidden();
	virtual int GetAttributes();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_MaelstromChain();

	// vtable[11] IsHidden
	// vtable[7] GetAttributes
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3040
};

// src/game/shared/dota/items/dota_item_maelstrom.cpp:180
class CDOTA_Modifier_Item_Maelstrom : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_attack_speed;  // +0xbac
	int chain_chance;  // +0xbb0
	int chain_strikes;  // +0xbb4
	int chain_damage;  // +0xbb8
	int chain_radius;  // +0xbbc
	float chain_cooldown;  // +0xbc0

	CDOTA_Modifier_Item_Maelstrom();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Maelstrom();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3064
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Maelstrom::~CDOTA_Item_Recipe_Maelstrom  (line 27, @0x0000000002dbc9f0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Maelstrom::~CDOTA_Item_Recipe_Maelstrom(CDOTA_Item_Recipe_Maelstrom *const this)
{
  this->_vptr_IHandleEntity = &off_4709950;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Maelstrom::~CDOTA_Item_Recipe_Maelstrom  (line 27, @0x0000000002dbca10, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Maelstrom
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Maelstrom::~CDOTA_Item_Recipe_Maelstrom(CDOTA_Item_Recipe_Maelstrom *const this)
{
  this->_vptr_IHandleEntity = &off_4709950;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Maelstrom::Schema_DynamicBinding  (line 29, @0x0000000002db8f20, libserver.so)
// globals: CDOTA_Item_Recipe_Maelstrom::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Maelstrom::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Maelstrom *const this)
{
  return CDOTA_Item_Recipe_Maelstrom::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002db8f30, libserver.so)
// globals: CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002db8f40, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Maelstrom>
void __fastcall CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002db8f60, libserver.so)
void __fastcall CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002db8f80, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002db8f90, libserver.so)
// globals: CDOTA_Item_Recipe_Maelstrom::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Maelstrom::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002dba740, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002dbba00, libserver.so)  // inlines: CDOTA_Item_Recipe_Maelstrom, Construct<CDOTA_Item_Recipe_Maelstrom>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4709950;
  }
  return p;
}


// CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dbebf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dbec10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal  (line 29, @0x0000000002dc4650, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_recipe_maelstrom", "CDOTA_Item_Recipe_Maelstrom"
// globals: `guard variable for'CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass, CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass, __dso_handle, CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaelstromClassInfo, CDOTA_Item_Recipe_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaelstromClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass);
    CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass._vptr_CEntityClass = off_47098D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Maelstrom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_MaelstromClass != 0 )
    return &CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaelstromClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaelstromClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaelstromClassInfo,
      "CDOTA_Item_Recipe_Maelstrom",
      "item_recipe_maelstrom",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaelstromClassInfo);
  }
  CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass.m_pClassInfo = &CDOTA_Item_Recipe_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaelstromClassInfo;
  CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaelstromClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_MaelstromClass = &CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass;
  CDOTA_Item_Recipe_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaelstromClassInfo.m_pClass = &CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass;
  CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_MaelstromClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaelstromClass;
}


// CDOTA_Item_Maelstrom::~CDOTA_Item_Maelstrom  (line 39, @0x0000000002dbca40, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Maelstrom::~CDOTA_Item_Maelstrom(CDOTA_Item_Maelstrom *const this)
{
  this->_vptr_IHandleEntity = &off_470A550;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Maelstrom::~CDOTA_Item_Maelstrom  (line 39, @0x0000000002dbca60, libserver.so)  // inlines: ~CDOTA_Item_Maelstrom
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Maelstrom::~CDOTA_Item_Maelstrom(CDOTA_Item_Maelstrom *const this)
{
  this->_vptr_IHandleEntity = &off_470A550;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Maelstrom::Schema_DynamicBinding  (line 41, @0x0000000002db8fa0, libserver.so)
// globals: CDOTA_Item_Maelstrom::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Maelstrom::Schema_DynamicBinding(
        const CDOTA_Item_Maelstrom *const this)
{
  return CDOTA_Item_Maelstrom::s_pSchemaBinding;
}


// CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002db8fb0, libserver.so)
// globals: CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Maelstrom::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002db8fc0, libserver.so)  // inlines: Destruct<CDOTA_Item_Maelstrom>
void __fastcall CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Maelstrom::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002db8fe0, libserver.so)
void __fastcall CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Maelstrom::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002db9000, libserver.so)
bool __fastcall CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Maelstrom::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002db9010, libserver.so)
// globals: CDOTA_Item_Maelstrom::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Maelstrom::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Maelstrom::s_pSchemaBinding;
}


// CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002dba780, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Maelstrom::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002dbba30, libserver.so)  // inlines: CDOTA_Item_Maelstrom, Construct<CDOTA_Item_Maelstrom>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Maelstrom::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_470A550;
  }
  return p;
}


// CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002dbec40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Maelstrom::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002dbec60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Maelstrom::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Maelstrom::GetEntityClassInternal  (line 41, @0x0000000002dc47a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "CDOTA_Item_Maelstrom"
// globals: `guard variable for'CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass, CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass, __dso_handle, CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaelstromClassInfo, CDOTA_Item_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaelstromClassInfo
CEntityClass *__cdecl CDOTA_Item_Maelstrom::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass);
    CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass._vptr_CEntityClass = off_470A4D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass);
    __cxa_atexit(
      CDOTA_Item_Maelstrom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_MaelstromClass != 0 )
    return &CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass;
  if ( `guard variable for'CDOTA_Item_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaelstromClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaelstromClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaelstromClassInfo,
      "CDOTA_Item_Maelstrom",
      "item_maelstrom",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaelstromClassInfo);
  }
  CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass.m_pClassInfo = &CDOTA_Item_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaelstromClassInfo;
  CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass.m_pBaseClassInfo = CDOTA_Item_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaelstromClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_MaelstromClass = &CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass;
  CDOTA_Item_Maelstrom::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaelstromClassInfo.m_pClass = &CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass;
  CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_MaelstromClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Maelstrom::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaelstromClass;
}


// CDOTA_Item_Maelstrom::GetIntrinsicModifierName  (line 44, @0x0000000002db9020, libserver.so)
// strings: "modifier_item_maelstrom"
const char *__fastcall CDOTA_Item_Maelstrom::GetIntrinsicModifierName(CDOTA_Item_Maelstrom *const this)
{
  return "modifier_item_maelstrom";
}


// CDOTA_Modifier_MaelstromChain::~CDOTA_Modifier_MaelstromChain  (line 53, @0x0000000002dc6ae0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_MaelstromChain::~CDOTA_Modifier_MaelstromChain(
        CDOTA_Modifier_MaelstromChain *const this)
{
  this->_vptr_CDOTA_Buff = &off_470B110;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory),
        (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_MaelstromChain::~CDOTA_Modifier_MaelstromChain  (line 53, @0x0000000002dc6b50, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_MaelstromChain, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_MaelstromChain::~CDOTA_Modifier_MaelstromChain(
        CDOTA_Modifier_MaelstromChain *const this)
{
  this->_vptr_CDOTA_Buff = &off_470B110;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MaelstromChain::IsHidden  (line 58, @0x0000000002db9030, libserver.so)
bool __fastcall CDOTA_Modifier_MaelstromChain::IsHidden(CDOTA_Modifier_MaelstromChain *const this)
{
  return 1;
}


// CDOTA_Modifier_MaelstromChain::GetAttributes  (line 59, @0x0000000002dbc490, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_MaelstromChain::GetAttributes(CDOTA_Modifier_MaelstromChain *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_MaelstromChain::IsPurgable  (line 60, @0x0000000002db9040, libserver.so)
bool __fastcall CDOTA_Modifier_MaelstromChain::IsPurgable(CDOTA_Modifier_MaelstromChain *const this)
{
  return 0;
}


// CDOTA_Modifier_MaelstromChain::OnCreated  (line 81, @0x0000000002db6ec0, libserver.so)  // inlines: AddToTail, AssignTo, CEntityHandle, CHandle, CVariantBase, CopyConstruct<CHandle<CBaseEntity> >, DotaRetrieveAbilityValue<float>, Element, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, GrowMemory, InState, IsInvulnerable, Set, ToDOTABaseNPC, VectorAdd, operator+, operator=, operator[], ~CVariantBase
// calls: KeyValues::GetPtr, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::GetCaster, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl (19 total)
// strings: "chain_radius", "chain_strikes", "chain_damage", "chain_delay", "Item.Maelstrom.Chain_Lightning", "particles/items_fx/chain_lightning.vpcf" (7 total)
void __fastcall CDOTA_Modifier_MaelstromChain::OnCreated(CDOTA_Modifier_MaelstromChain *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Ptr; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rdi
  CDOTABaseAbility *v9; // r13
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  int v14; // edx
  __int16 v15; // cx
  __int64 m_Size; // r13
  int v17; // eax
  CHandle<CBaseEntity> *v18; // rax
  CDOTA_BaseNPC *v19; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // rax
  unsigned int v23; // xmm2_4
  unsigned int v24; // xmm1_4
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  float v29; // xmm1_4
  float flDamage; // [rsp+Ch] [rbp-34h]
  CVariantBase<CVariantDefaultAllocator> v31; // [rsp+10h] [rbp-30h] BYREF

  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  v4 = Ptr;
  if ( Ptr == 0 || !Ptr->m_bIsDOTANPC || Ptr->m_bIsWaitingToSpawn.m_Value || (Ptr->m_nUnitState64.m_Value & 0x100) != 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(Ability, &this->chain_radius, "chain_radius");
    v6 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v6, &this->chain_strikes, "chain_strikes");
    v7 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v7, &this->chain_damage, "chain_damage");
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
    {
      this->chain_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "chain_delay", -1, 0);
    }
    else
    {
      v31.m_uint64 = 0;
      this->chain_delay = 0.0;
      v31.m_type = 0;
      v31.m_flags = 0;
      CVariantBase<CVariantDefaultAllocator>::Free(&v31);
    }
    this->m_iCurJumpCount = 1;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
    flDamage = this->chain_damage;
    v9 = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, v4, v9, flDamage, 2, 0);
    CDOTA_BaseNPC::UnitEmitSound(v4, "Item.Maelstrom.Chain_Lightning", 0.0, 0, 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    this->m_vCurTargetLoc.x = AbsOrigin->x;
    this->m_vCurTargetLoc.y = AbsOrigin->y;
    z = AbsOrigin->z;
    v31.m_int = -1;
    this->m_vCurTargetLoc.z = z;
    m_pEntity = v4->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v31.m_float) = v15 | LOWORD(v31.m_float) & 0x8000;
      v31.m_int = (v14 << 15) | LOWORD(v31.m_float) & 0x7FFF;
    }
    m_Size = this->m_hHitEntities.m_Size;
    v17 = this->m_hHitEntities.m_Size;
    if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
      v17 = this->m_hHitEntities.m_Size;
    }
    this->m_hHitEntities.m_Size = v17 + 1;
    v18 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
    if ( v18 != 0 )
      v18->m_Index = v31.m_int;
    v19 = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v19) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/items_fx/chain_lightning.vpcf",
                     2,
                     0,
                     0,
                     v19);
    v21 = CDOTA_Buff::GetCaster(this);
    v22 = CBaseEntity::GetAbsOrigin(v21);
    *&v23 = v22->y + 0.0;
    *&v24 = v22->x + 0.0;
    *&v31.m_type = v22->z + 100.0;
    v31.m_uint64 = __PAIR64__(v23, v24);
    v25 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v25, v19, 0, v31.m_float64, *&v31.m_type);
    v26 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v26, v19, 1, v4, 5, "attach_hitloc", vec3_invalid, 1);
    v27 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleFoWProperties(v27, v19, 0, 1, 50.0);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v28, v19);
    CDOTA_Buff::StartIntervalThink(this, this->chain_delay, v29);
  }
}


// CDOTA_Modifier_MaelstromChain::OnIntervalThink  (line 119, @0x0000000002db6a90, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleFoWProperties (20 total)
// strings: "particles/items_fx/chain_lightning.vpcf", "attach_hitloc", "Item.Maelstrom.Chain_Lightning.Jump"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_MaelstromChain::OnIntervalThink(CDOTA_Modifier_MaelstromChain *const this)
{
  __m128i v1; // xmm3
  float v3; // r15d
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v5; // rax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  __m128i v12; // xmm4
  float v13; // r14d
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  float v18; // xmm0_4
  CHandle<CBaseEntity> v19; // xmm1_4
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CEntityIdentity *v24; // rax
  __int16 v25; // cx
  __int64 m_Size; // r12
  int v27; // eax
  CHandle<CBaseEntity> *v28; // rax
  char v29; // r12
  int v30; // [rsp+20h] [rbp-70h]
  CHandle<CBaseEntity> src[2]; // [rsp+30h] [rbp-60h] BYREF
  float v32; // [rsp+38h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-50h] BYREF

  if ( this->m_iCurJumpCount >= this->chain_strikes )
    goto LABEL_2;
  *v1.m128i_i32 = this->chain_radius;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v5->m_iTeamNum.m_Value, &this->m_vCurTargetLoc, Caster, v3, &hEntities, 2, 19, 384, 1, 0);
  while ( 1 )
  {
    if ( hEntities.m_Size <= 0 )
    {
      v29 = 0;
      goto LABEL_27;
    }
    if ( hEntities.m_Memory.m_pMemory->m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hEntities.m_Memory.m_pMemory->m_Index >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[hEntities.m_Memory.m_pMemory->m_Index & 0x1FF];
        if ( v7 != 0 && hEntities.m_Memory.m_pMemory->m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            src[0].m_Index = -1;
            m_pEntity = m_pInstance->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              v11 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(src[0].m_Index) = v11 | src[0].m_Index & 0x8000;
              src[0].m_Index = (v10 << 15) | src[0].m_Index & 0x7FFF;
            }
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &this->m_hHitEntities,
                   src) < 0 )
              break;
          }
        }
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hEntities, 0);
  }
  *v12.m128i_i32 = this->chain_damage;
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  Ability = CDOTA_Buff::GetAbility(this);
  v15 = CDOTA_Buff::GetCaster(this);
  ApplyDamage(v15, m_pInstance, Ability, v13, 2, 0);
  v16 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v16) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/items_fx/chain_lightning.vpcf",
                   2,
                   0,
                   0,
                   v16);
  v18 = this->m_vCurTargetLoc.z + 100.0;
  *&v19.m_Index = this->m_vCurTargetLoc.x + 0.0;
  *&src[1].m_Index = this->m_vCurTargetLoc.y + 0.0;
  v32 = v18;
  src[0] = v19;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v20, v16, 0, *&src[0].m_Index, v32);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v21, v16, 1, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v22, v16, 0, 1, 50.0);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v23, v16);
  CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Item.Maelstrom.Chain_Lightning.Jump", 0.0, 0, 0);
  v30 = -1;
  this->m_vCurTargetLoc = *CBaseEntity::GetAbsOrigin(m_pInstance);
  v24 = m_pInstance->m_pEntity;
  if ( v24 != 0 )
  {
    v25 = 0x7FFF;
    if ( v24->m_EHandle.m_Index != -1 )
      v25 = v24->m_EHandle.m_Index & 0x7FFF;
    v30 = (((v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1)) << 15) | v25 & 0x7FFF;
  }
  m_Size = this->m_hHitEntities.m_Size;
  v27 = this->m_hHitEntities.m_Size;
  if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
    v27 = this->m_hHitEntities.m_Size;
  }
  this->m_hHitEntities.m_Size = v27 + 1;
  v28 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
  if ( v28 != 0 )
    v28->m_Index = v30;
  ++this->m_iCurJumpCount;
  v29 = 1;
LABEL_27:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
  if ( v29 == 0 )
LABEL_2:
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Item_Maelstrom::~CDOTA_Modifier_Item_Maelstrom  (line 180, @0x0000000002dbe5b0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Buff_Item, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Item_Maelstrom::~CDOTA_Modifier_Item_Maelstrom(
        CDOTA_Modifier_Item_Maelstrom *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_470B430;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_InFlightAttackRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory);
    if ( (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Maelstrom::~CDOTA_Modifier_Item_Maelstrom  (line 180, @0x0000000002dbe620, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Maelstrom, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Item_Maelstrom::~CDOTA_Modifier_Item_Maelstrom(
        CDOTA_Modifier_Item_Maelstrom *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_470B430;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_InFlightAttackRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory);
    if ( (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Maelstrom::OnCreated  (line 216, @0x0000000002db6880, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "chain_chance", "chain_strikes", "chain_damage", "chain_radius", "chain_cooldown"
void __fastcall CDOTA_Modifier_Item_Maelstrom::OnCreated(CDOTA_Modifier_Item_Maelstrom *const this, KeyValues *pKV)
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
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_attack_speed", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->bonus_attack_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->chain_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "chain_chance", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->chain_chance = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->chain_strikes = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "chain_strikes", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_12:
  this->chain_strikes = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->chain_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "chain_damage", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->chain_radius = 0;
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
    goto LABEL_15;
  }
LABEL_13:
  this->chain_damage = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->chain_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "chain_radius", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_8:
    this->chain_cooldown = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "chain_cooldown", -1, 0);
    return;
  }
LABEL_15:
  this->chain_cooldown = 0.0;
}


// CDOTA_Modifier_Item_Maelstrom::DeclareFunctions  (line 230, @0x0000000002dab300, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Maelstrom::OnAttack(CModifierParams const&), CDOTA_Modifier_Item_Maelstrom::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Item_Maelstrom::OnAttackFail(CModifierParams const&), CDOTA_Modifier_Item_Maelstrom::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Maelstrom::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Maelstrom::DeclareFunctions(CDOTA_Modifier_Item_Maelstrom *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Item_Maelstrom::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Item_Maelstrom::OnAttackLanded;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Item_Maelstrom::OnAttackFail;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Maelstrom::GetModifierPreAttack_BonusDamage;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Maelstrom::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Item_Maelstrom::GetModifierPreAttack_BonusDamage  (line 241, @0x0000000002dab390, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Maelstrom::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Maelstrom *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Maelstrom::GetModifierAttackSpeedBonus_Constant  (line 248, @0x0000000002dab3b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Maelstrom::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Maelstrom *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Maelstrom::OnAttack  (line 255, @0x0000000002db8150, libserver.so)  // inlines: AddToTail, Attacker, AttackerNPC, CopyConstruct<short int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CUtlMemory<short int, int>::Grow
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Maelstrom::OnAttack(
        CDOTA_Modifier_Item_Maelstrom *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  uint32 v10; // edx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CEntityInstance *v13; // rdx
  int m_Id; // eax
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  __int64 m_Size; // rbx
  int v19; // edx
  __int16 *v20; // rdx
  CDOTA_AttackRecord *pAttackRecord; // [rsp+8h] [rbp-18h]

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance )
  {
    v10 = params->htarget.m_Index;
    if ( v10 + 2 <= 1
      || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v12 = &v11[params->htarget.m_Index & 0x1FF]) == 0
      || v10 != v12->m_EHandle.m_Index
      || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
      || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
    {
      v13 = 0;
    }
    if ( Parent != 0
      && Parent->m_bIsDOTANPC
      && v13 != 0
      && !Parent->m_bIsIllusion.m_Value
      && HIBYTE(v13[7].m_CScriptComponent) != Parent->m_iTeamNum.m_Value )
    {
      m_Id = v13[43].m_iszPrivateVScripts.u.m_Id;
      if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 && !params->bChainLightningConsidered )
      {
        params->bChainLightningConsidered = 1;
        iRecord = params->iRecord;
        AttackRecordsManager = GetAttackRecordsManager();
        RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
        m_Size = this->m_InFlightAttackRecords.m_Size;
        v19 = this->m_InFlightAttackRecords.m_Size;
        if ( m_Size == this->m_InFlightAttackRecords.m_Memory.m_nAllocationCount )
        {
          pAttackRecord = RecordByIndex;
          CUtlMemory<short,int>::Grow(&this->m_InFlightAttackRecords.m_Memory, 1);
          v19 = this->m_InFlightAttackRecords.m_Size;
          RecordByIndex = pAttackRecord;
        }
        this->m_InFlightAttackRecords.m_Size = v19 + 1;
        v20 = &this->m_InFlightAttackRecords.m_Memory.m_pMemory[m_Size];
        if ( v20 != 0 )
          *v20 = RecordByIndex->m_iRecord;
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Maelstrom::OnAttackLanded  (line 280, @0x0000000002db2900, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, Set, Start, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=<float>
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CountdownTimer::Now, RollPseudoRandomPercentage, KeyValues::KeyValues, KeyValues::SetPtr, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_maelstrom_chain"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Maelstrom::OnAttackLanded(
        CDOTA_Modifier_Item_Maelstrom *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *v13; // r13
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *v17; // rbx
  int m_Id; // eax
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Caster; // rax
  float v25; // [rsp+8h] [rbp-48h]
  float chain_cooldown; // [rsp+Ch] [rbp-44h]
  float v27; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-28h]

  v29 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance
    && CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord) )
  {
    v10 = params->htarget.m_Index;
    if ( v10 + 2 <= 1
      || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v12 = &v11[params->htarget.m_Index & 0x1FF]) == 0
      || v10 != v12->m_EHandle.m_Index
      || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
      || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
    {
      v13 = 0;
    }
    v14 = params->hattacker.m_Index;
    if ( v14 + 2 > 1 )
    {
      v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v15 != 0 )
      {
        v16 = &v15[params->hattacker.m_Index & 0x1FF];
        if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
        {
          v17 = v16->m_pInstance;
          if ( v16->m_pInstance != 0
            && v17->m_bIsDOTANPC
            && v13 != 0
            && !v17->m_bIsIllusion.m_Value
            && HIBYTE(v13[7].m_CScriptComponent) != v17->m_iTeamNum.m_Value )
          {
            m_Id = v13[43].m_iszPrivateVScripts.u.m_Id;
            if ( (m_Id & 0x10) == 0
              && (m_Id & 0x193) != 0
              && CountdownTimer::Now(&this->m_ChainTimer) >= this->m_ChainTimer.m_timestamp.m_Value )
            {
              v19 = CDOTA_Buff::GetParent(this);
              if ( RollPseudoRandomPercentage(
                     this->chain_chance,
                     DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_MAELSTROM,
                     v19) )
              {
                chain_cooldown = this->chain_cooldown;
                v20 = CountdownTimer::Now(&this->m_ChainTimer);
                v21 = chain_cooldown;
                v22 = v20 + chain_cooldown;
                if ( v22 != this->m_ChainTimer.m_timestamp.m_Value )
                {
                  v25 = v22;
                  (*(this->m_ChainTimer._vptr_CountdownTimer + 2))(&this->m_ChainTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  v21 = chain_cooldown;
                  this->m_ChainTimer.m_timestamp.m_Value = v25;
                }
                if ( v21 != this->m_ChainTimer.m_duration.m_Value )
                {
                  v27 = v21;
                  (*(this->m_ChainTimer._vptr_CountdownTimer + 2))(&this->m_ChainTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  this->m_ChainTimer.m_duration.m_Value = v27;
                }
                KeyValues::KeyValues(&kv, "modifier_maelstrom_chain");
                KeyValues::SetPtr(&kv, "target", v13);
                Ability = CDOTA_Buff::GetAbility(this);
                Caster = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(v17, Caster, Ability, "modifier_maelstrom_chain", &kv, 0);
                KeyValues::~KeyValues(&kv);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Maelstrom::OnAttackFail  (line 309, @0x0000000002db2c60, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Maelstrom::OnAttackFail(
        CDOTA_Modifier_Item_Maelstrom *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance )
    CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord);
  return 1uLL;
}


