// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_monkey_king_bar.cpp:27
class CDOTA_Item_Recipe_MonkeyKingBar : public CDOTA_Item {
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
	CDOTA_Item_Recipe_MonkeyKingBar(CDOTA_Item_Recipe_MonkeyKingBar &);
	CDOTA_Item_Recipe_MonkeyKingBar(CDOTA_Item_Recipe_MonkeyKingBar &);
	CDOTA_Item_Recipe_MonkeyKingBar();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_MonkeyKingBar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_monkey_king_bar.cpp:38
class CDOTA_Item_MonkeyKingBar : public CDOTA_Item {
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
	CDOTA_Item_MonkeyKingBar(CDOTA_Item_MonkeyKingBar &);
	CDOTA_Item_MonkeyKingBar(CDOTA_Item_MonkeyKingBar &);
	CDOTA_Item_MonkeyKingBar();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_MonkeyKingBar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_monkey_king_bar.cpp:50
class CDOTA_Modifier_Item_MonkeyKingBar : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int bash_chance;  // +0xbac
	int bash_damage;  // +0xbb0
	float bash_stun;  // +0xbb4
	bool m_bProc;  // +0xbb8
	CDOTA_Modifier_Item_MonkeyKingBar();
	ModifierVariant_t GetModifierPreAttack(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Magical(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_MonkeyKingBar();

	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_MonkeyKingBar::~CDOTA_Item_Recipe_MonkeyKingBar  (line 27, @0x0000000002dd7b00, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_MonkeyKingBar::~CDOTA_Item_Recipe_MonkeyKingBar(
        CDOTA_Item_Recipe_MonkeyKingBar *const this)
{
  this->_vptr_IHandleEntity = &off_471E8F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_MonkeyKingBar::~CDOTA_Item_Recipe_MonkeyKingBar  (line 27, @0x0000000002dd7b20, libserver.so)  // inlines: ~CDOTA_Item_Recipe_MonkeyKingBar
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_MonkeyKingBar::~CDOTA_Item_Recipe_MonkeyKingBar(
        CDOTA_Item_Recipe_MonkeyKingBar *const this)
{
  this->_vptr_IHandleEntity = &off_471E8F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_MonkeyKingBar::Schema_DynamicBinding  (line 29, @0x0000000002dd3790, libserver.so)
// globals: CDOTA_Item_Recipe_MonkeyKingBar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_MonkeyKingBar::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_MonkeyKingBar *const this)
{
  return CDOTA_Item_Recipe_MonkeyKingBar::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002dd37a0, libserver.so)
// globals: CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002dd37b0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_MonkeyKingBar>
void __fastcall CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002dd37d0, libserver.so)
void __fastcall CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002dd37f0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002dd3800, libserver.so)
// globals: CDOTA_Item_Recipe_MonkeyKingBar::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_MonkeyKingBar::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002dd59f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002dd6ce0, libserver.so)  // inlines: CDOTA_Item_Recipe_MonkeyKingBar, Construct<CDOTA_Item_Recipe_MonkeyKingBar>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_471E8F0;
  }
  return p;
}


// CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dd9a30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dd9a50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal  (line 29, @0x0000000002dddd90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_recipe_monkey_king_bar", "CDOTA_Item_Recipe_MonkeyKingBar"
// globals: `guard variable for'CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass, CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass, __dso_handle, CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClassInfo, CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass);
    CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass._vptr_CEntityClass = off_471E870;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_MonkeyKingBar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_MonkeyKingBarClass != 0 )
    return &CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass;
  if ( `guard variable for'CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClassInfo,
      "CDOTA_Item_Recipe_MonkeyKingBar",
      "item_recipe_monkey_king_bar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClassInfo);
  }
  CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass.m_pClassInfo = &CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClassInfo;
  CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass.m_pBaseClassInfo = CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_MonkeyKingBarClass = &CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass;
  CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClassInfo.m_pClass = &CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass;
  CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_MonkeyKingBarClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MonkeyKingBarClass;
}


// CDOTA_Item_MonkeyKingBar::~CDOTA_Item_MonkeyKingBar  (line 38, @0x0000000002dd7b50, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_MonkeyKingBar::~CDOTA_Item_MonkeyKingBar(CDOTA_Item_MonkeyKingBar *const this)
{
  this->_vptr_IHandleEntity = &off_471F4F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_MonkeyKingBar::~CDOTA_Item_MonkeyKingBar  (line 38, @0x0000000002dd7b70, libserver.so)  // inlines: ~CDOTA_Item_MonkeyKingBar
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_MonkeyKingBar::~CDOTA_Item_MonkeyKingBar(CDOTA_Item_MonkeyKingBar *const this)
{
  this->_vptr_IHandleEntity = &off_471F4F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_MonkeyKingBar::Schema_DynamicBinding  (line 40, @0x0000000002dd3810, libserver.so)
// globals: CDOTA_Item_MonkeyKingBar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MonkeyKingBar::Schema_DynamicBinding(
        const CDOTA_Item_MonkeyKingBar *const this)
{
  return CDOTA_Item_MonkeyKingBar::s_pSchemaBinding;
}


// CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002dd3820, libserver.so)
// globals: CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002dd3830, libserver.so)  // inlines: Destruct<CDOTA_Item_MonkeyKingBar>
void __fastcall CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002dd3850, libserver.so)
void __fastcall CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002dd3870, libserver.so)
bool __fastcall CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002dd3880, libserver.so)
// globals: CDOTA_Item_MonkeyKingBar::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MonkeyKingBar::s_pSchemaBinding;
}


// CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002dd5a30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002dd6d10, libserver.so)  // inlines: CDOTA_Item_MonkeyKingBar, Construct<CDOTA_Item_MonkeyKingBar>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_471F4F0;
  }
  return p;
}


// CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002dd9a80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002dd9aa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_MonkeyKingBar::GetEntityClassInternal  (line 40, @0x0000000002dddee0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "CDOTA_Item_MonkeyKingBar"
// globals: `guard variable for'CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass, CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass, __dso_handle, CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MonkeyKingBarClassInfo, CDOTA_Item_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MonkeyKingBarClassInfo
CEntityClass *__cdecl CDOTA_Item_MonkeyKingBar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass);
    CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass._vptr_CEntityClass = off_471F470;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass);
    __cxa_atexit(
      CDOTA_Item_MonkeyKingBar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_MonkeyKingBarClass != 0 )
    return &CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass;
  if ( `guard variable for'CDOTA_Item_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MonkeyKingBarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MonkeyKingBarClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MonkeyKingBarClassInfo,
      "CDOTA_Item_MonkeyKingBar",
      "item_monkey_king_bar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MonkeyKingBarClassInfo);
  }
  CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass.m_pClassInfo = &CDOTA_Item_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MonkeyKingBarClassInfo;
  CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass.m_pBaseClassInfo = CDOTA_Item_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MonkeyKingBarClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_MonkeyKingBarClass = &CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass;
  CDOTA_Item_MonkeyKingBar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MonkeyKingBarClassInfo.m_pClass = &CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass;
  CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_MonkeyKingBarClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_MonkeyKingBar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MonkeyKingBarClass;
}


// CDOTA_Item_MonkeyKingBar::GetIntrinsicModifierName  (line 42, @0x0000000002dd3890, libserver.so)
// strings: "modifier_item_monkey_king_bar"
const char *__fastcall CDOTA_Item_MonkeyKingBar::GetIntrinsicModifierName(CDOTA_Item_MonkeyKingBar *const this)
{
  return "modifier_item_monkey_king_bar";
}


// CDOTA_Modifier_Item_MonkeyKingBar::~CDOTA_Modifier_Item_MonkeyKingBar  (line 50, @0x0000000002dd67f0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_MonkeyKingBar::~CDOTA_Modifier_Item_MonkeyKingBar(
        CDOTA_Modifier_Item_MonkeyKingBar *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_MonkeyKingBar::~CDOTA_Modifier_Item_MonkeyKingBar  (line 50, @0x0000000002dd6810, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_MonkeyKingBar
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_MonkeyKingBar::~CDOTA_Modifier_Item_MonkeyKingBar(
        CDOTA_Modifier_Item_MonkeyKingBar *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_MonkeyKingBar::DeclareFunctions  (line 75, @0x0000000002dc6d30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_MonkeyKingBar::GetModifierPreAttack(CModifierParams const&), CDOTA_Modifier_Item_MonkeyKingBar::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_MonkeyKingBar::GetModifierProcAttack_BonusDamage_Magical(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_MonkeyKingBar::DeclareFunctions(CDOTA_Modifier_Item_MonkeyKingBar *const this)
{
  this->m_Functions[8].__pfn = CDOTA_Modifier_Item_MonkeyKingBar::GetModifierPreAttack;
  this->m_Functions[8].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_MonkeyKingBar::GetModifierPreAttack_BonusDamage;
  this->m_Functions[5].__pfn = CDOTA_Modifier_Item_MonkeyKingBar::GetModifierProcAttack_BonusDamage_Magical;
  this->m_Functions[5].__delta = 0;
}


// CDOTA_Modifier_Item_MonkeyKingBar::GetModifierPreAttack_BonusDamage  (line 82, @0x0000000002dc6d90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_MonkeyKingBar::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_MonkeyKingBar *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_MonkeyKingBar::GetModifierPreAttack  (line 87, @0x0000000002dca340, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_MonkeyKingBar::GetModifierPreAttack(
        CDOTA_Modifier_Item_MonkeyKingBar *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rax
  uint32 v9; // edx
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  CEntityInstance *v12; // rdx
  int (**vptr_IHandleEntity)(...); // rax
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax

  Parent = CDOTA_Buff::GetParent(this);
  if ( RollPseudoRandomPercentage(this->bash_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_MKB, Parent) )
  {
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 <= 1
      || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
      || (v7 = &v6[params->hattacker.m_Index & 0x1FF]) == 0
      || m_Index != v7->m_EHandle.m_Index
      || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
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
    if ( m_pInstance != 0
      && LOBYTE(m_pInstance[71].m_pEntity) == 0
      && v12 != 0
      && (v12[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 )
    {
      vptr_IHandleEntity = v12[58]._vptr_IHandleEntity;
      if ( (BYTE1(vptr_IHandleEntity) & 2) == 0
        && LOBYTE(v12[71]._vptr_IHandleEntity) == 0
        && (BYTE1(vptr_IHandleEntity) & 1) == 0 )
      {
        iRecord = params->iRecord;
        AttackRecordsManager = GetAttackRecordsManager();
        RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
        if ( RecordByIndex != 0 && RecordByIndex->m_nBashSource == 0 )
          RecordByIndex->m_nBashSource = this->m_iSerialNumber;
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_MonkeyKingBar::GetModifierProcAttack_BonusDamage_Magical  (line 112, @0x0000000002dc9eb0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues (14 total)
// strings: "CDOTA_Modifier_Item_MonkeyKingBar::GetModifierPostAttack", "modifier_bashed", "particles/generic_gameplay/generic_minibash.vpcf", "DOTA_Item.MKB.Minibash"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_MonkeyKingBar::GetModifierProcAttack_BonusDamage_Magical(
        CDOTA_Modifier_Item_MonkeyKingBar *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CBaseEntity *m_pInstance; // r12
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *v10; // r13
  __int64 iRecord; // r14
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  int (**vptr_IHandleEntity)(...); // rax
  float v16; // xmm1_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v21; // rax
  __m128i v22; // xmm1
  unsigned __int64 v23; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v25 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->htarget.m_Index;
  if ( v7 + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[params->htarget.m_Index & 0x1FF]) == 0
    || v7 != v9->m_EHandle.m_Index
    || (v10 = v9->m_pInstance, v9->m_pInstance == 0)
    || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
  {
    v10 = 0;
  }
  iRecord = params->iRecord;
  AttackRecordsManager = GetAttackRecordsManager();
  RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
  if ( RecordByIndex == 0
    || RecordByIndex->m_nBashSource != this->m_iSerialNumber
    || (vptr_IHandleEntity = v10[58]._vptr_IHandleEntity, (BYTE1(vptr_IHandleEntity) & 2) != 0)
    || LOBYTE(v10[71]._vptr_IHandleEntity) != 0
    || (BYTE1(vptr_IHandleEntity) & 1) != 0
    || (v10[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0 )
  {
    *&result.m_eType = 1;
  }
  else
  {
    KeyValues::KeyValues(&kv, "CDOTA_Modifier_Item_MonkeyKingBar::GetModifierPostAttack");
    KeyValues::SetFloat(&kv, "duration", v16);
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::AddNewModifier(v10, Parent, Ability, "modifier_bashed", &kv, 0);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/generic_gameplay/generic_minibash.vpcf",
                 7,
                 v10,
                 0,
                 m_pInstance);
    v21 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v21, Particle);
    CDOTA_BaseNPC::UnitEmitSound(v10, "DOTA_Item.MKB.Minibash", 0.0, 0, 0);
    *v22.m128i_i32 = this->bash_damage;
    v23 = (_mm_cvtsi128_si32(v22) << 32) | 1;
    KeyValues::~KeyValues(&kv);
    *&result.m_eType = v23;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Item_MonkeyKingBar::OnCreated  (line 141, @0x0000000002dd2470, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bash_chance", "bash_damage"
void __fastcall CDOTA_Modifier_Item_MonkeyKingBar::OnCreated(
        CDOTA_Modifier_Item_MonkeyKingBar *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

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
      this->bash_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bash_chance", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->bash_damage = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bash_chance = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bash_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bash_damage", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bash_stun = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "bash_stun", -1, 0);
    return;
  }
LABEL_9:
  this->bash_stun = 0.0;
}


// CDOTA_Modifier_Item_MonkeyKingBar::CheckState  (line 151, @0x0000000002dc6db0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Item_MonkeyKingBar::CheckState(
        CDOTA_Modifier_Item_MonkeyKingBar *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x10000uLL;
  buffState->m_nDisabledStateMask &= ~0x10000uLL;
}


