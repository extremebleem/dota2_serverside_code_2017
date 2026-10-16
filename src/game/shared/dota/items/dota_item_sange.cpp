// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_sange.cpp:28
class CDOTA_Item_Recipe_Sange : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Sange(CDOTA_Item_Recipe_Sange &);
	CDOTA_Item_Recipe_Sange(CDOTA_Item_Recipe_Sange &);
	CDOTA_Item_Recipe_Sange();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Sange();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_sange.cpp:39
class CDOTA_Item_Sange : public CDOTA_Item {
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
	CDOTA_Item_Sange(CDOTA_Item_Sange &);
	CDOTA_Item_Sange(CDOTA_Item_Sange &);
	CDOTA_Item_Sange();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Sange();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_sange.cpp:51
class CDOTA_Modifier_Item_Sange : public CDOTA_Buff_Item {
public:

private:

	int bonus_strength;  // +0xba8
	int bonus_damage;  // +0xbac
	int maim_chance;  // +0xbb0
	float maim_duration;  // +0xbb4
	CDOTA_Modifier_Item_Sange();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Sange();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_sange.cpp:129
class CDOTA_Modifier_Sange_Maim : public CDOTA_Buff {
public:

private:

	int maim_slow_movement;  // +0xba8
	int maim_slow_attack;  // +0xbac
	int maim_slow_movement_range;  // +0xbb0
	int maim_slow_attack_range;  // +0xbb4
	CDOTA_Modifier_Sange_Maim();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Sange_Maim();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// vtable[67] GetEffectName
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Sange::~CDOTA_Item_Recipe_Sange  (line 28, @0x0000000002df3690, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Sange::~CDOTA_Item_Recipe_Sange(CDOTA_Item_Recipe_Sange *const this)
{
  this->_vptr_IHandleEntity = &off_4759A70;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Sange::~CDOTA_Item_Recipe_Sange  (line 28, @0x0000000002df36b0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Sange
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Sange::~CDOTA_Item_Recipe_Sange(CDOTA_Item_Recipe_Sange *const this)
{
  this->_vptr_IHandleEntity = &off_4759A70;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Sange::Schema_DynamicBinding  (line 30, @0x0000000002def520, libserver.so)
// globals: CDOTA_Item_Recipe_Sange::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Sange::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Sange *const this)
{
  return CDOTA_Item_Recipe_Sange::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002def530, libserver.so)
// globals: CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002def540, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Sange>
void __fastcall CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002def560, libserver.so)
void __fastcall CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002def580, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002def590, libserver.so)
// globals: CDOTA_Item_Recipe_Sange::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Sange::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002df1100, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002df22a0, libserver.so)  // inlines: CDOTA_Item_Recipe_Sange, Construct<CDOTA_Item_Recipe_Sange>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4759A70;
  }
  return p;
}


// CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002df58a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002df58c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Sange::GetEntityClassInternal  (line 30, @0x0000000002dfc810, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_recipe_sange", "CDOTA_Item_Recipe_Sange"
// globals: `guard variable for'CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass, CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass, __dso_handle, CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeClassInfo, CDOTA_Item_Recipe_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Sange::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass);
    CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass._vptr_CEntityClass = off_47599F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Sange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_SangeClass != 0 )
    return &CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeClassInfo,
      "CDOTA_Item_Recipe_Sange",
      "item_recipe_sange",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeClassInfo);
  }
  CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass.m_pClassInfo = &CDOTA_Item_Recipe_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeClassInfo;
  CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_SangeClass = &CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass;
  CDOTA_Item_Recipe_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeClassInfo.m_pClass = &CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass;
  CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_SangeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeClass;
}


// CDOTA_Item_Sange::~CDOTA_Item_Sange  (line 39, @0x0000000002df36e0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Sange::~CDOTA_Item_Sange(CDOTA_Item_Sange *const this)
{
  this->_vptr_IHandleEntity = &off_475A670;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Sange::~CDOTA_Item_Sange  (line 39, @0x0000000002df3700, libserver.so)  // inlines: ~CDOTA_Item_Sange
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Sange::~CDOTA_Item_Sange(CDOTA_Item_Sange *const this)
{
  this->_vptr_IHandleEntity = &off_475A670;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Sange::Schema_DynamicBinding  (line 41, @0x0000000002def5a0, libserver.so)
// globals: CDOTA_Item_Sange::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Sange::Schema_DynamicBinding(const CDOTA_Item_Sange *const this)
{
  return CDOTA_Item_Sange::s_pSchemaBinding;
}


// CDOTA_Item_Sange::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002def5b0, libserver.so)
// globals: CDOTA_Item_Sange::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Sange::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Sange::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Sange::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Sange::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002def5c0, libserver.so)  // inlines: Destruct<CDOTA_Item_Sange>
void __fastcall CDOTA_Item_Sange::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Sange::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Sange::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002def5e0, libserver.so)
void __fastcall CDOTA_Item_Sange::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Sange::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Sange::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002def600, libserver.so)
bool __fastcall CDOTA_Item_Sange::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Sange::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Sange::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002def610, libserver.so)
// globals: CDOTA_Item_Sange::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Sange::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Sange::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Sange::s_pSchemaBinding;
}


// CDOTA_Item_Sange::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002df1140, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Sange::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Sange::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Sange::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002df22d0, libserver.so)  // inlines: CDOTA_Item_Sange, Construct<CDOTA_Item_Sange>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Sange::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Sange::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_475A670;
  }
  return p;
}


// CDOTA_Item_Sange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002df58f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Sange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Sange::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Sange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002df5910, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Sange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Sange::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Sange::GetEntityClassInternal  (line 41, @0x0000000002dfc960, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "CDOTA_Item_Sange"
// globals: `guard variable for'CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass, CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass, __dso_handle, CDOTA_Item_Sange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeClassInfo, CDOTA_Item_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeClassInfo
CEntityClass *__cdecl CDOTA_Item_Sange::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass);
    CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass._vptr_CEntityClass = off_475A5F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass);
    __cxa_atexit(
      CDOTA_Item_Sange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_SangeClass != 0 )
    return &CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass;
  if ( `guard variable for'CDOTA_Item_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeClassInfo,
      "CDOTA_Item_Sange",
      "item_sange",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeClassInfo);
  }
  CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass.m_pClassInfo = &CDOTA_Item_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeClassInfo;
  CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass.m_pBaseClassInfo = CDOTA_Item_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_SangeClass = &CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass;
  CDOTA_Item_Sange::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeClassInfo.m_pClass = &CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass;
  CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_SangeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Sange::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeClass;
}


// CDOTA_Item_Sange::GetIntrinsicModifierName  (line 43, @0x0000000002def620, libserver.so)
// strings: "modifier_item_sange"
const char *__fastcall CDOTA_Item_Sange::GetIntrinsicModifierName(CDOTA_Item_Sange *const this)
{
  return "modifier_item_sange";
}


// CDOTA_Modifier_Item_Sange::~CDOTA_Modifier_Item_Sange  (line 51, @0x0000000002df1740, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Sange::~CDOTA_Modifier_Item_Sange(CDOTA_Modifier_Item_Sange *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Sange::~CDOTA_Modifier_Item_Sange  (line 51, @0x0000000002df1760, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Sange
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Sange::~CDOTA_Modifier_Item_Sange(CDOTA_Modifier_Item_Sange *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Sange::DeclareFunctions  (line 73, @0x0000000002de40f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Sange::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Sange::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Sange::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Sange::DeclareFunctions(CDOTA_Modifier_Item_Sange *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Sange::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Sange::GetModifierPreAttack_BonusDamage;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Item_Sange::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Item_Sange::GetModifierBonusStats_Strength  (line 80, @0x0000000002de4150, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Sange::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Sange *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Sange::OnCreated  (line 85, @0x0000000002dedca0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "maim_chance", "maim_duration"
void __fastcall CDOTA_Modifier_Item_Sange::OnCreated(CDOTA_Modifier_Item_Sange *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_strength, "bonus_strength");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_damage, "bonus_damage");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->maim_chance, "maim_chance");
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->maim_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "maim_duration", -1, 0);
  else
    this->maim_duration = 0.0;
}


// CDOTA_Modifier_Item_Sange::GetModifierPreAttack_BonusDamage  (line 93, @0x0000000002de4170, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Sange::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Sange *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Sange::OnAttackLanded  (line 100, @0x0000000002de7750, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_sange_buff", "DOTA_Item.Maim"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Sange::OnAttackLanded(
        CDOTA_Modifier_Item_Sange *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v13; // r15
  CDOTA_BaseNPC *v14; // rax
  CBaseEntity *v15; // r14
  int m_Id; // eax
  float v17; // xmm1_4
  CDOTABaseAbility *Ability; // rax
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  if ( RollPseudoRandomPercentage(this->maim_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_SANGE_MAIM, Parent) )
  {
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
    if ( v9 + 2 > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[params->hattacker.m_Index & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        {
          v13 = v11->m_pInstance;
          if ( v11->m_pInstance != 0 && v13->m_bIsDOTANPC )
          {
            v14 = CDOTA_Buff::GetParent(this);
            v15 = v14;
            if ( v14 == v13 && params->nDamageCategory == 1 && m_pInstance != 0 && !v14->m_bIsIllusion.m_Value )
            {
              m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
              if ( (m_Id & 0x193) != 0 && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 && (m_Id & 0x10) == 0 )
              {
                KeyValues::KeyValues(&kv, "modifier_sange_buff");
                KeyValues::SetFloat(&kv, "duration", v17);
                Ability = CDOTA_Buff::GetAbility(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v15, Ability, "modifier_sange_buff", &kv, 0);
                CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "DOTA_Item.Maim", 0.0, 0, 0);
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


// CDOTA_Modifier_Sange_Maim::~CDOTA_Modifier_Sange_Maim  (line 129, @0x0000000002df1dc0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Sange_Maim::~CDOTA_Modifier_Sange_Maim(CDOTA_Modifier_Sange_Maim *const this)
{
  this->_vptr_CDOTA_Buff = &off_475B550;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Sange_Maim::~CDOTA_Modifier_Sange_Maim  (line 129, @0x0000000002df1de0, libserver.so)  // inlines: ~CDOTA_Modifier_Sange_Maim
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Sange_Maim::~CDOTA_Modifier_Sange_Maim(CDOTA_Modifier_Sange_Maim *const this)
{
  this->_vptr_CDOTA_Buff = &off_475B550;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sange_Maim::IsDebuff  (line 136, @0x0000000002def630, libserver.so)
bool __fastcall CDOTA_Modifier_Sange_Maim::IsDebuff(CDOTA_Modifier_Sange_Maim *const this)
{
  return 1;
}


// CDOTA_Modifier_Sange_Maim::GetEffectName  (line 141, @0x0000000002def640, libserver.so)
// strings: "particles/items2_fx/sange_maim.vpcf"
const char *__fastcall CDOTA_Modifier_Sange_Maim::GetEffectName(CDOTA_Modifier_Sange_Maim *const this)
{
  return "particles/items2_fx/sange_maim.vpcf";
}


// CDOTA_Modifier_Sange_Maim::DeclareFunctions  (line 154, @0x0000000002de4190, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Sange_Maim::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Sange_Maim::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Sange_Maim::DeclareFunctions(CDOTA_Modifier_Sange_Maim *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Sange_Maim::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Sange_Maim::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Sange_Maim::OnCreated  (line 160, @0x0000000002decb50, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "maim_slow_movement", "maim_slow_attack", "maim_slow_movement_range", "maim_slow_attack_range"
void __fastcall CDOTA_Modifier_Sange_Maim::OnCreated(CDOTA_Modifier_Sange_Maim *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->maim_slow_movement, "maim_slow_movement");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->maim_slow_attack, "maim_slow_attack");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->maim_slow_movement_range, "maim_slow_movement_range");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->maim_slow_attack_range, "maim_slow_attack_range");
}


// CDOTA_Modifier_Sange_Maim::GetModifierMoveSpeedBonus_Percentage  (line 168, @0x0000000002de4a10, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Sange_Maim::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Sange_Maim *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int maim_slow_movement_range; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
    maim_slow_movement_range = this->maim_slow_movement_range;
  else
    maim_slow_movement_range = this->maim_slow_movement;
  *v3.m128i_i32 = maim_slow_movement_range;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Sange_Maim::GetModifierAttackSpeedBonus_Constant  (line 173, @0x0000000002de4a60, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Sange_Maim::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Sange_Maim *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int maim_slow_attack_range; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
    maim_slow_attack_range = this->maim_slow_attack_range;
  else
    maim_slow_attack_range = this->maim_slow_attack;
  *v3.m128i_i32 = maim_slow_attack_range;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


