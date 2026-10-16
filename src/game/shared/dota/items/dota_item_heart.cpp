// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_heart.cpp:26
class CDOTA_Item_Recipe_Heart : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Heart(CDOTA_Item_Recipe_Heart &);
	CDOTA_Item_Recipe_Heart(CDOTA_Item_Recipe_Heart &);
	CDOTA_Item_Recipe_Heart();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Heart();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_heart.cpp:38
class CDOTA_Item_Heart : public CDOTA_Item {
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
	CDOTA_Item_Heart(CDOTA_Item_Heart &);
	CDOTA_Item_Heart(CDOTA_Item_Heart &);
	CDOTA_Item_Heart();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual float GetCooldown(int);
	virtual ~CDOTA_Item_Heart();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[242] GetCooldown
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_heart.cpp:64
class CDOTA_Modifier_Item_Heart : public CDOTA_Buff_Item {
public:

private:

	int bonus_strength;  // +0xba8
	int bonus_health;  // +0xbac
	float health_regen_rate;  // +0xbb0
	CDOTA_Modifier_Item_Heart();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierHealthRegenPercentage(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Heart();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Heart::~CDOTA_Item_Recipe_Heart  (line 26, @0x0000000002da2120, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Heart::~CDOTA_Item_Recipe_Heart(CDOTA_Item_Recipe_Heart *const this)
{
  this->_vptr_IHandleEntity = &off_46F19D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Heart::~CDOTA_Item_Recipe_Heart  (line 26, @0x0000000002da2140, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Heart
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Heart::~CDOTA_Item_Recipe_Heart(CDOTA_Item_Recipe_Heart *const this)
{
  this->_vptr_IHandleEntity = &off_46F19D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Heart::Schema_DynamicBinding  (line 28, @0x0000000002d9f860, libserver.so)
// globals: CDOTA_Item_Recipe_Heart::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Heart::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Heart *const this)
{
  return CDOTA_Item_Recipe_Heart::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d9f870, libserver.so)
// globals: CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d9f880, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Heart>
void __fastcall CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d9f8a0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d9f8c0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d9f8d0, libserver.so)
// globals: CDOTA_Item_Recipe_Heart::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Heart::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002da09b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002da1880, libserver.so)  // inlines: CDOTA_Item_Recipe_Heart, Construct<CDOTA_Item_Recipe_Heart>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46F19D0;
  }
  return p;
}


// CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da4080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da40a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Heart::GetEntityClassInternal  (line 28, @0x0000000002da9f60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_recipe_heart", "CDOTA_Item_Recipe_Heart"
// globals: `guard variable for'CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass, CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass, __dso_handle, CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeartClassInfo, CDOTA_Item_Recipe_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeartClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Heart::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass);
    CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass._vptr_CEntityClass = off_46F1950;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Heart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_HeartClass != 0 )
    return &CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeartClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeartClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeartClassInfo,
      "CDOTA_Item_Recipe_Heart",
      "item_recipe_heart",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeartClassInfo);
  }
  CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass.m_pClassInfo = &CDOTA_Item_Recipe_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeartClassInfo;
  CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeartClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_HeartClass = &CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass;
  CDOTA_Item_Recipe_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeartClassInfo.m_pClass = &CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass;
  CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_HeartClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeartClass;
}


// CDOTA_Item_Heart::~CDOTA_Item_Heart  (line 38, @0x0000000002da2170, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Heart::~CDOTA_Item_Heart(CDOTA_Item_Heart *const this)
{
  this->_vptr_IHandleEntity = &off_46F25D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Heart::~CDOTA_Item_Heart  (line 38, @0x0000000002da2190, libserver.so)  // inlines: ~CDOTA_Item_Heart
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Heart::~CDOTA_Item_Heart(CDOTA_Item_Heart *const this)
{
  this->_vptr_IHandleEntity = &off_46F25D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Heart::Schema_DynamicBinding  (line 40, @0x0000000002d9f8e0, libserver.so)
// globals: CDOTA_Item_Heart::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Heart::Schema_DynamicBinding(const CDOTA_Item_Heart *const this)
{
  return CDOTA_Item_Heart::s_pSchemaBinding;
}


// CDOTA_Item_Heart::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002d9f8f0, libserver.so)
// globals: CDOTA_Item_Heart::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Heart::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Heart::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Heart::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Heart::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002d9f900, libserver.so)  // inlines: Destruct<CDOTA_Item_Heart>
void __fastcall CDOTA_Item_Heart::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Heart::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Heart::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002d9f920, libserver.so)
void __fastcall CDOTA_Item_Heart::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Heart::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Heart::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002d9f940, libserver.so)
bool __fastcall CDOTA_Item_Heart::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Heart::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Heart::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002d9f950, libserver.so)
// globals: CDOTA_Item_Heart::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Heart::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Heart::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Heart::s_pSchemaBinding;
}


// CDOTA_Item_Heart::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002da09f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Heart::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Heart::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Heart::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002da18b0, libserver.so)  // inlines: CDOTA_Item_Heart, Construct<CDOTA_Item_Heart>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Heart::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Heart::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46F25D0;
  }
  return p;
}


// CDOTA_Item_Heart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002da40d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Heart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Heart::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Heart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002da40f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Heart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Heart::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Heart::GetEntityClassInternal  (line 40, @0x0000000002daa0b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "CDOTA_Item_Heart"
// globals: `guard variable for'CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass, CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass, __dso_handle, CDOTA_Item_Heart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeartClassInfo, CDOTA_Item_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeartClassInfo
CEntityClass *__cdecl CDOTA_Item_Heart::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass);
    CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass._vptr_CEntityClass = off_46F2550;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass);
    __cxa_atexit(
      CDOTA_Item_Heart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_HeartClass != 0 )
    return &CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass;
  if ( `guard variable for'CDOTA_Item_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeartClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeartClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeartClassInfo,
      "CDOTA_Item_Heart",
      "item_heart",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeartClassInfo);
  }
  CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass.m_pClassInfo = &CDOTA_Item_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeartClassInfo;
  CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass.m_pBaseClassInfo = CDOTA_Item_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeartClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_HeartClass = &CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass;
  CDOTA_Item_Heart::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeartClassInfo.m_pClass = &CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass;
  CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_HeartClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Heart::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeartClass;
}


// CDOTA_Item_Heart::GetIntrinsicModifierName  (line 42, @0x0000000002d9f960, libserver.so)
// strings: "modifier_item_heart"
const char *__fastcall CDOTA_Item_Heart::GetIntrinsicModifierName(CDOTA_Item_Heart *const this)
{
  return "modifier_item_heart";
}


// CDOTA_Item_Heart::GetCooldown  (line 49, @0x0000000002d9de30, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "cooldown_melee"
float __fastcall CDOTA_Item_Heart::GetCooldown(CDOTA_Item_Heart *const this, int iLevel)
{
  if ( CDOTABaseAbility::GetCaster(this) != 0
    && (CDOTABaseAbility::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
  {
    return CDOTABaseAbility::GetCooldown(this, iLevel);
  }
  else
  {
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_melee", -1, 0);
  }
}


// CDOTA_Modifier_Item_Heart::~CDOTA_Modifier_Item_Heart  (line 64, @0x0000000002da0ba0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Heart::~CDOTA_Modifier_Item_Heart(CDOTA_Modifier_Item_Heart *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Heart::~CDOTA_Modifier_Item_Heart  (line 64, @0x0000000002da0bc0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Heart
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Heart::~CDOTA_Modifier_Item_Heart(CDOTA_Modifier_Item_Heart *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Heart::OnCreated  (line 87, @0x0000000002d9e510, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_health", "health_regen_rate"
void __fastcall CDOTA_Modifier_Item_Heart::OnCreated(CDOTA_Modifier_Item_Heart *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_strength", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_health = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_strength = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_health", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->health_regen_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "health_regen_rate", -1, 0);
    return;
  }
LABEL_7:
  this->health_regen_rate = 0.0;
}


// CDOTA_Modifier_Item_Heart::OnDestroy  (line 94, @0x0000000002d94720, libserver.so)
void __fastcall CDOTA_Modifier_Item_Heart::OnDestroy(CDOTA_Modifier_Item_Heart *const this)
{
  ;
}


// CDOTA_Modifier_Item_Heart::DeclareFunctions  (line 98, @0x0000000002d94730, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Heart::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Heart::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_Item_Heart::GetModifierHealthRegenPercentage(CModifierParams const&), CDOTA_Modifier_Item_Heart::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Heart::DeclareFunctions(CDOTA_Modifier_Item_Heart *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Heart::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_Heart::GetModifierHealthBonus;
  this->m_Functions[57].__pfn = CDOTA_Modifier_Item_Heart::GetModifierHealthRegenPercentage;
  this->m_Functions[57].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Item_Heart::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Item_Heart::GetModifierBonusStats_Strength  (line 106, @0x0000000002d947a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Heart::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Heart *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Heart::GetModifierHealthBonus  (line 111, @0x0000000002d947c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Heart::GetModifierHealthBonus(
        CDOTA_Modifier_Item_Heart *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Heart::GetModifierHealthRegenPercentage  (line 116, @0x0000000002d955a0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Heart::GetModifierHealthRegenPercentage(
        CDOTA_Modifier_Item_Heart *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *Ability; // rax
  ModifierVariant_t result; // 0:rax.16

  if ( params->bHeartRegenApplied )
    return 1uLL;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) == 0 || CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
  {
    *&result.m_eType = 1;
  }
  else
  {
    params->bHeartRegenApplied = 1;
    *&result.m_eType = (LODWORD(this->health_regen_rate) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Item_Heart::OnTakeDamage  (line 129, @0x0000000002d97300, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, ToDOTABaseNPC, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Heart::OnTakeDamage(
        CDOTA_Modifier_Item_Heart *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // eax
  CDOTA_BaseNPC *v10; // r14
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  uint32 m_iUnitType; // eax
  CDOTABaseAbility *Ability; // rax

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hattacker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) != m_pInstance )
        {
          v9 = params->hunit.m_Index;
          v10 = 0;
          if ( v9 + 2 > 1 )
          {
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = &v11[params->hunit.m_Index & 0x1FF];
              if ( v12 != 0 )
              {
                if ( v9 == v12->m_EHandle.m_Index )
                  v10 = v12->m_pInstance;
              }
              else
              {
                v10 = 0;
              }
            }
          }
          if ( CDOTA_Buff::GetParent(this) == v10
            && params->fDamage > 0.0
            && (m_pInstance->m_iIsControllableByPlayer64.m_Value != 0
             || ((m_iUnitType = m_pInstance->m_iUnitType) & 1) != 0
             || (m_iUnitType & 0x800) != 0) )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            (*(Ability->_vptr_IHandleEntity + 241))(Ability, -1.0);
          }
        }
      }
    }
  }
  return 1uLL;
}


