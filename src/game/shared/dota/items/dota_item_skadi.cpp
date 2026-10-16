// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_skadi.cpp:27
class CDOTA_Item_Recipe_Skadi : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Skadi(CDOTA_Item_Recipe_Skadi &);
	CDOTA_Item_Recipe_Skadi(CDOTA_Item_Recipe_Skadi &);
	CDOTA_Item_Recipe_Skadi();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Skadi();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_skadi.cpp:39
class CDOTA_Item_Skadi : public CDOTA_Item {
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
	CDOTA_Item_Skadi(CDOTA_Item_Skadi &);
	CDOTA_Item_Skadi(CDOTA_Item_Skadi &);
	CDOTA_Item_Skadi();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Skadi();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_skadi.cpp:52
class CDOTA_Modifier_Item_Skadi : public CDOTA_Buff_Item {
public:

private:

	int bonus_all_stats;  // +0xba8
	int bonus_health;  // +0xbac
	int bonus_mana;  // +0xbb0
	float cold_duration_melee;  // +0xbb4
	float cold_duration_ranged;  // +0xbb8

	CDOTA_Modifier_Item_Skadi();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Skadi();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3032
};

// src/game/shared/dota/items/dota_item_skadi.cpp:211
class CDOTA_Modifier_Item_Skadi_Slow : public CDOTA_Buff {
public:

private:

	int cold_movement_speed;  // +0xba8
	int cold_attack_speed;  // +0xbac
	CDOTA_Modifier_Item_Skadi_Slow();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Item_Skadi_Slow();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Skadi::~CDOTA_Item_Recipe_Skadi  (line 27, @0x0000000002e0eef0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Skadi::~CDOTA_Item_Recipe_Skadi(CDOTA_Item_Recipe_Skadi *const this)
{
  this->_vptr_IHandleEntity = &off_476B4F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Skadi::~CDOTA_Item_Recipe_Skadi  (line 27, @0x0000000002e0ef10, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Skadi
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Skadi::~CDOTA_Item_Recipe_Skadi(CDOTA_Item_Recipe_Skadi *const this)
{
  this->_vptr_IHandleEntity = &off_476B4F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Skadi::Schema_DynamicBinding  (line 29, @0x0000000002e0b4e0, libserver.so)
// globals: CDOTA_Item_Recipe_Skadi::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Skadi::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Skadi *const this)
{
  return CDOTA_Item_Recipe_Skadi::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002e0b4f0, libserver.so)
// globals: CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002e0b500, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Skadi>
void __fastcall CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002e0b520, libserver.so)
void __fastcall CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002e0b540, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002e0b550, libserver.so)
// globals: CDOTA_Item_Recipe_Skadi::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Skadi::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002e0d300, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002e0e380, libserver.so)  // inlines: CDOTA_Item_Recipe_Skadi, Construct<CDOTA_Item_Recipe_Skadi>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_476B4F0;
  }
  return p;
}


// CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002e10ba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002e10bc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Skadi::GetEntityClassInternal  (line 29, @0x0000000002e13b60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_recipe_skadi", "CDOTA_Item_Recipe_Skadi"
// globals: `guard variable for'CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass, CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass, __dso_handle, CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SkadiClassInfo, CDOTA_Item_Recipe_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SkadiClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Skadi::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass);
    CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass._vptr_CEntityClass = off_476B470;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Skadi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_SkadiClass != 0 )
    return &CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SkadiClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SkadiClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SkadiClassInfo,
      "CDOTA_Item_Recipe_Skadi",
      "item_recipe_skadi",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SkadiClassInfo);
  }
  CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass.m_pClassInfo = &CDOTA_Item_Recipe_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SkadiClassInfo;
  CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SkadiClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_SkadiClass = &CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass;
  CDOTA_Item_Recipe_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SkadiClassInfo.m_pClass = &CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass;
  CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_SkadiClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SkadiClass;
}


// CDOTA_Item_Skadi::~CDOTA_Item_Skadi  (line 39, @0x0000000002e0ef40, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Skadi::~CDOTA_Item_Skadi(CDOTA_Item_Skadi *const this)
{
  this->_vptr_IHandleEntity = &off_476C0F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Skadi::~CDOTA_Item_Skadi  (line 39, @0x0000000002e0ef60, libserver.so)  // inlines: ~CDOTA_Item_Skadi
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Skadi::~CDOTA_Item_Skadi(CDOTA_Item_Skadi *const this)
{
  this->_vptr_IHandleEntity = &off_476C0F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Skadi::Schema_DynamicBinding  (line 41, @0x0000000002e0b560, libserver.so)
// globals: CDOTA_Item_Skadi::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Skadi::Schema_DynamicBinding(const CDOTA_Item_Skadi *const this)
{
  return CDOTA_Item_Skadi::s_pSchemaBinding;
}


// CDOTA_Item_Skadi::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002e0b570, libserver.so)
// globals: CDOTA_Item_Skadi::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Skadi::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Skadi::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Skadi::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Skadi::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002e0b580, libserver.so)  // inlines: Destruct<CDOTA_Item_Skadi>
void __fastcall CDOTA_Item_Skadi::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Skadi::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Skadi::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002e0b5a0, libserver.so)
void __fastcall CDOTA_Item_Skadi::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Skadi::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Skadi::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002e0b5c0, libserver.so)
bool __fastcall CDOTA_Item_Skadi::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Skadi::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Skadi::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002e0b5d0, libserver.so)
// globals: CDOTA_Item_Skadi::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Skadi::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Skadi::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Skadi::s_pSchemaBinding;
}


// CDOTA_Item_Skadi::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002e0d340, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Skadi::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Skadi::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Skadi::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002e0e3b0, libserver.so)  // inlines: CDOTA_Item_Skadi, Construct<CDOTA_Item_Skadi>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Skadi::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Skadi::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_476C0F0;
  }
  return p;
}


// CDOTA_Item_Skadi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002e10bf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Skadi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Skadi::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Skadi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002e10c10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Skadi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Skadi::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Skadi::GetEntityClassInternal  (line 41, @0x0000000002e13cb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "CDOTA_Item_Skadi"
// globals: `guard variable for'CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass, CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass, __dso_handle, CDOTA_Item_Skadi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SkadiClassInfo, CDOTA_Item_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SkadiClassInfo
CEntityClass *__cdecl CDOTA_Item_Skadi::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass);
    CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass._vptr_CEntityClass = off_476C070;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass);
    __cxa_atexit(
      CDOTA_Item_Skadi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_SkadiClass != 0 )
    return &CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass;
  if ( `guard variable for'CDOTA_Item_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SkadiClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SkadiClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SkadiClassInfo,
      "CDOTA_Item_Skadi",
      "item_skadi",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SkadiClassInfo);
  }
  CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass.m_pClassInfo = &CDOTA_Item_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SkadiClassInfo;
  CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass.m_pBaseClassInfo = CDOTA_Item_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SkadiClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_SkadiClass = &CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass;
  CDOTA_Item_Skadi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SkadiClassInfo.m_pClass = &CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass;
  CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_SkadiClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Skadi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SkadiClass;
}


// CDOTA_Item_Skadi::GetIntrinsicModifierName  (line 44, @0x0000000002e0b5e0, libserver.so)
// strings: "modifier_item_skadi"
const char *__fastcall CDOTA_Item_Skadi::GetIntrinsicModifierName(CDOTA_Item_Skadi *const this)
{
  return "modifier_item_skadi";
}


// CDOTA_Modifier_Item_Skadi::~CDOTA_Modifier_Item_Skadi  (line 52, @0x0000000002e109e0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Buff_Item, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Item_Skadi::~CDOTA_Modifier_Item_Skadi(CDOTA_Modifier_Item_Skadi *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_476CCB0;
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


// CDOTA_Modifier_Item_Skadi::~CDOTA_Modifier_Item_Skadi  (line 52, @0x0000000002e10a50, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Skadi, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Item_Skadi::~CDOTA_Modifier_Item_Skadi(CDOTA_Modifier_Item_Skadi *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_476CCB0;
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


// CDOTA_Modifier_Item_Skadi::OnCreated  (line 86, @0x0000000002e09e30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_all_stats", "bonus_health", "bonus_mana", "cold_duration_melee", "cold_duration_ranged"
void __fastcall CDOTA_Modifier_Item_Skadi::OnCreated(CDOTA_Modifier_Item_Skadi *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_all_stats", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_all_stats = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_health", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->bonus_health = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_mana", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->cold_duration_melee = 0.0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->bonus_mana = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->cold_duration_melee = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "cold_duration_melee", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->cold_duration_ranged = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "cold_duration_ranged", -1, 0);
    return;
  }
LABEL_11:
  this->cold_duration_ranged = 0.0;
}


// CDOTA_Modifier_Item_Skadi::DeclareFunctions  (line 98, @0x0000000002dfedd0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Skadi::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Skadi::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Skadi::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_Skadi::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_Item_Skadi::GetModifierManaBonus(CModifierParams const&), CDOTA_Modifier_Item_Skadi::OnAttack(CModifierParams const&), CDOTA_Modifier_Item_Skadi::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Item_Skadi::OnAttackFail(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Skadi::DeclareFunctions(CDOTA_Modifier_Item_Skadi *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Skadi::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Skadi::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Skadi::GetModifierBonusStats_Intellect;
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_Skadi::GetModifierHealthBonus;
  this->m_Functions[59].__pfn = CDOTA_Modifier_Item_Skadi::GetModifierManaBonus;
  this->m_Functions[120].__pfn = CDOTA_Modifier_Item_Skadi::OnAttack;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Item_Skadi::OnAttackLanded;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[59].__delta = 0;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Item_Skadi::OnAttackFail;
  this->m_Functions[122].__delta = 0;
}


// CDOTA_Modifier_Item_Skadi::GetModifierBonusStats_Strength  (line 112, @0x0000000002dfeea0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Skadi::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Skadi *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Skadi::GetModifierBonusStats_Agility  (line 119, @0x0000000002dfeec0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Skadi::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Skadi *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Skadi::GetModifierBonusStats_Intellect  (line 126, @0x0000000002dfeee0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Skadi::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Skadi *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Skadi::GetModifierHealthBonus  (line 133, @0x0000000002dfef00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Skadi::GetModifierHealthBonus(
        CDOTA_Modifier_Item_Skadi *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Skadi::GetModifierManaBonus  (line 140, @0x0000000002dfef20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Skadi::GetModifierManaBonus(
        CDOTA_Modifier_Item_Skadi *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Skadi::OnAttack  (line 147, @0x0000000002e0a330, libserver.so)  // inlines: AddToTail, Attacker, AttackerNPC, CopyConstruct<short int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[]
// calls: CDOTA_Buff::GetParent, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, MakeEntitySystemString, CUtlMemory<short int, int>::Grow
// strings: "particles/items2_fx/skadi_projectile.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Skadi::OnAttack(
        CDOTA_Modifier_Item_Skadi *const this,
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
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // r13
  __int64 m_Size; // rbx
  __int16 *v18; // rdx
  UtlSymLargeId_t v19; // [rsp+0h] [rbp-30h]

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
      && (v13[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
      && HIBYTE(v13[7].m_CScriptComponent) != Parent->m_iTeamNum.m_Value )
    {
      iRecord = params->iRecord;
      AttackRecordsManager = GetAttackRecordsManager();
      RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
      MakeEntitySystemString("particles/items2_fx/skadi_projectile.vpcf");
      RecordByIndex->m_iszAutoAttackRangedParticle.u.m_Id = v19;
      m_Size = this->m_InFlightAttackRecords.m_Size;
      if ( m_Size == this->m_InFlightAttackRecords.m_Memory.m_nAllocationCount )
        CUtlMemory<short,int>::Grow(&this->m_InFlightAttackRecords.m_Memory, 1);
      ++this->m_InFlightAttackRecords.m_Size;
      v18 = &this->m_InFlightAttackRecords.m_Memory.m_pMemory[m_Size];
      if ( v18 != 0 )
        *v18 = RecordByIndex->m_iRecord;
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Skadi::OnAttackLanded  (line 168, @0x0000000002e06c40, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_skadi_slow"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Skadi::OnAttackLanded(
        CDOTA_Modifier_Item_Skadi *const this,
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
  CEntityInstance *v17; // rbx
  CDOTABaseAbility *Ability; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-28h]
  ModifierVariant_t result; // 0:rax.16

  v20 = __readfsqword(0x28u);
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
  if ( Parent != m_pInstance
    || !CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord) )
  {
    goto LABEL_7;
  }
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
  if ( v14 + 2 > 1
    && (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0
    && (v16 = &v15[params->hattacker.m_Index & 0x1FF]) != 0
    && v14 == v16->m_EHandle.m_Index
    && (v17 = v16->m_pInstance, v16->m_pInstance != 0)
    && BYTE3(v17[7]._vptr_IHandleEntity) != 0
    && v13 != 0
    && (v13[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
    && HIBYTE(v13[7].m_CScriptComponent) != HIBYTE(v17[7].m_CScriptComponent)
    && LOBYTE(v17[71].m_pEntity) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_item_skadi_slow");
    KeyValues::SetFloat(&kv, "duration", this->cold_duration_ranged);
    Ability = CDOTA_Buff::GetAbility(this);
    CDOTA_BaseNPC::AddNewModifier(v13, v17, Ability, "modifier_item_skadi_slow", &kv, 0);
    KeyValues::~KeyValues(&kv);
    *&result.m_eType = 1;
  }
  else
  {
LABEL_7:
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Item_Skadi::OnAttackFail  (line 196, @0x0000000002e06ec0, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Skadi::OnAttackFail(
        CDOTA_Modifier_Item_Skadi *const this,
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


// CDOTA_Modifier_Item_Skadi_Slow::~CDOTA_Modifier_Item_Skadi_Slow  (line 211, @0x0000000002e0e330, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Skadi_Slow::~CDOTA_Modifier_Item_Skadi_Slow(
        CDOTA_Modifier_Item_Skadi_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_476CFD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Skadi_Slow::~CDOTA_Modifier_Item_Skadi_Slow  (line 211, @0x0000000002e0e350, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Skadi_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Skadi_Slow::~CDOTA_Modifier_Item_Skadi_Slow(
        CDOTA_Modifier_Item_Skadi_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_476CFD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Skadi_Slow::IsPurgable  (line 217, @0x0000000002e0b5f0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Skadi_Slow::IsPurgable(CDOTA_Modifier_Item_Skadi_Slow *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Skadi_Slow::GetEffectName  (line 223, @0x0000000002e0b600, libserver.so)
// strings: "particles/generic_gameplay/generic_slowed_cold.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Skadi_Slow::GetEffectName(CDOTA_Modifier_Item_Skadi_Slow *const this)
{
  return "particles/generic_gameplay/generic_slowed_cold.vpcf";
}


// CDOTA_Modifier_Item_Skadi_Slow::GetStatusEffectName  (line 224, @0x0000000002e0b610, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Skadi_Slow::GetStatusEffectName(CDOTA_Modifier_Item_Skadi_Slow *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_Item_Skadi_Slow::StatusEffectPriority  (line 225, @0x0000000002e0b620, libserver.so)
int __fastcall CDOTA_Modifier_Item_Skadi_Slow::StatusEffectPriority(CDOTA_Modifier_Item_Skadi_Slow *const this)
{
  return 10;
}


// CDOTA_Modifier_Item_Skadi_Slow::IsDebuff  (line 227, @0x0000000002e0b630, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Skadi_Slow::IsDebuff(CDOTA_Modifier_Item_Skadi_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Skadi_Slow::IsHidden  (line 228, @0x0000000002e0b640, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Skadi_Slow::IsHidden(CDOTA_Modifier_Item_Skadi_Slow *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Skadi_Slow::OnCreated  (line 240, @0x0000000002e07df0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cold_movement_speed", "cold_attack_speed"
void __fastcall CDOTA_Modifier_Item_Skadi_Slow::OnCreated(CDOTA_Modifier_Item_Skadi_Slow *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->cold_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "cold_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->cold_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "cold_attack_speed", -1, 0);
      return;
    }
  }
  else
  {
    this->cold_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->cold_attack_speed = 0;
}


// CDOTA_Modifier_Item_Skadi_Slow::DeclareFunctions  (line 248, @0x0000000002dfef40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Skadi_Slow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_Skadi_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Skadi_Slow::DeclareFunctions(CDOTA_Modifier_Item_Skadi_Slow *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Skadi_Slow::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Item_Skadi_Slow::GetModifierMoveSpeedBonus_Percentage;
}


// CDOTA_Modifier_Item_Skadi_Slow::GetModifierAttackSpeedBonus_Constant  (line 256, @0x0000000002dfef80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Skadi_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Skadi_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->cold_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Skadi_Slow::GetModifierMoveSpeedBonus_Percentage  (line 263, @0x0000000002dfefa0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Skadi_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Item_Skadi_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->cold_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


