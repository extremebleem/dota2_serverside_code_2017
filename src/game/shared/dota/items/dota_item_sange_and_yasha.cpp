// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_sange_and_yasha.cpp:30
class CDOTA_Item_Recipe_SangeAndYasha : public CDOTA_Item {
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
	CDOTA_Item_Recipe_SangeAndYasha(CDOTA_Item_Recipe_SangeAndYasha &);
	CDOTA_Item_Recipe_SangeAndYasha(CDOTA_Item_Recipe_SangeAndYasha &);
	CDOTA_Item_Recipe_SangeAndYasha();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_SangeAndYasha();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_sange_and_yasha.cpp:41
class CDOTA_Item_SangeAndYasha : public CDOTA_Item {
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
	CDOTA_Item_SangeAndYasha(CDOTA_Item_SangeAndYasha &);
	CDOTA_Item_SangeAndYasha(CDOTA_Item_SangeAndYasha &);
	CDOTA_Item_SangeAndYasha();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_SangeAndYasha();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_sange_and_yasha.cpp:53
class CDOTA_Modifier_Item_SangeAndYasha : public CDOTA_Buff_Item {
public:

private:

	int bonus_agility;  // +0xba8
	int bonus_attack_speed;  // +0xbac
	int movement_speed_percent_bonus;  // +0xbb0
	int bonus_strength;  // +0xbb4
	int bonus_damage;  // +0xbb8
	int maim_chance;  // +0xbbc
	float maim_duration;  // +0xbc0
	CDOTA_Modifier_Item_SangeAndYasha();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage_Unique(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_SangeAndYasha();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3016
};

// src/game/shared/dota/items/dota_item_sange_and_yasha.cpp:160
class CDOTA_Modifier_SangeAndYasha_Maim : public CDOTA_Buff {
public:

private:

	int maim_slow_movement;  // +0xba8
	int maim_slow_attack;  // +0xbac
	int maim_slow_movement_range;  // +0xbb0
	int maim_slow_attack_range;  // +0xbb4
	CDOTA_Modifier_SangeAndYasha_Maim();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	virtual const char * GetEffectName();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_SangeAndYasha_Maim();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// vtable[67] GetEffectName
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_SangeAndYasha::~CDOTA_Item_Recipe_SangeAndYasha  (line 30, @0x0000000002df3730, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_SangeAndYasha::~CDOTA_Item_Recipe_SangeAndYasha(
        CDOTA_Item_Recipe_SangeAndYasha *const this)
{
  this->_vptr_IHandleEntity = &off_475BB30;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_SangeAndYasha::~CDOTA_Item_Recipe_SangeAndYasha  (line 30, @0x0000000002df3750, libserver.so)  // inlines: ~CDOTA_Item_Recipe_SangeAndYasha
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_SangeAndYasha::~CDOTA_Item_Recipe_SangeAndYasha(
        CDOTA_Item_Recipe_SangeAndYasha *const this)
{
  this->_vptr_IHandleEntity = &off_475BB30;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_SangeAndYasha::Schema_DynamicBinding  (line 32, @0x0000000002def650, libserver.so)
// globals: CDOTA_Item_Recipe_SangeAndYasha::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_SangeAndYasha::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_SangeAndYasha *const this)
{
  return CDOTA_Item_Recipe_SangeAndYasha::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000002def660, libserver.so)
// globals: CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000002def670, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_SangeAndYasha>
void __fastcall CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000002def690, libserver.so)
void __fastcall CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002def6b0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000002def6c0, libserver.so)
// globals: CDOTA_Item_Recipe_SangeAndYasha::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_SangeAndYasha::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002df1180, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000002df2300, libserver.so)  // inlines: CDOTA_Item_Recipe_SangeAndYasha, Construct<CDOTA_Item_Recipe_SangeAndYasha>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_475BB30;
  }
  return p;
}


// CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002df5940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002df5960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal  (line 32, @0x0000000002dfccf0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_recipe_sange_and_yasha", "CDOTA_Item_Recipe_SangeAndYasha"
// globals: `guard variable for'CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass, CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass, __dso_handle, CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClassInfo, CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass);
    CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass._vptr_CEntityClass = off_475BAB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_SangeAndYasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_SangeAndYashaClass != 0 )
    return &CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass;
  if ( `guard variable for'CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClassInfo,
      "CDOTA_Item_Recipe_SangeAndYasha",
      "item_recipe_sange_and_yasha",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClassInfo);
  }
  CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass.m_pClassInfo = &CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClassInfo;
  CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass.m_pBaseClassInfo = CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_SangeAndYashaClass = &CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass;
  CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClassInfo.m_pClass = &CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass;
  CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_SangeAndYashaClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SangeAndYashaClass;
}


// CDOTA_Item_SangeAndYasha::~CDOTA_Item_SangeAndYasha  (line 41, @0x0000000002df3780, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_SangeAndYasha::~CDOTA_Item_SangeAndYasha(CDOTA_Item_SangeAndYasha *const this)
{
  this->_vptr_IHandleEntity = &off_475C730;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_SangeAndYasha::~CDOTA_Item_SangeAndYasha  (line 41, @0x0000000002df37a0, libserver.so)  // inlines: ~CDOTA_Item_SangeAndYasha
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_SangeAndYasha::~CDOTA_Item_SangeAndYasha(CDOTA_Item_SangeAndYasha *const this)
{
  this->_vptr_IHandleEntity = &off_475C730;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_SangeAndYasha::Schema_DynamicBinding  (line 43, @0x0000000002def6d0, libserver.so)
// globals: CDOTA_Item_SangeAndYasha::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_SangeAndYasha::Schema_DynamicBinding(
        const CDOTA_Item_SangeAndYasha *const this)
{
  return CDOTA_Item_SangeAndYasha::s_pSchemaBinding;
}


// CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002def6e0, libserver.so)
// globals: CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002def6f0, libserver.so)  // inlines: Destruct<CDOTA_Item_SangeAndYasha>
void __fastcall CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002def710, libserver.so)
void __fastcall CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x0000000002def730, libserver.so)
bool __fastcall CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x0000000002def740, libserver.so)
// globals: CDOTA_Item_SangeAndYasha::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_SangeAndYasha::s_pSchemaBinding;
}


// CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002df11c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x0000000002df2330, libserver.so)  // inlines: CDOTA_Item_SangeAndYasha, Construct<CDOTA_Item_SangeAndYasha>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_475C730;
  }
  return p;
}


// CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002df5990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002df59b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_SangeAndYasha::GetEntityClassInternal  (line 43, @0x0000000002dfce40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "CDOTA_Item_SangeAndYasha"
// globals: `guard variable for'CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass, CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass, __dso_handle, CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeAndYashaClassInfo, CDOTA_Item_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeAndYashaClassInfo
CEntityClass *__cdecl CDOTA_Item_SangeAndYasha::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass);
    CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass._vptr_CEntityClass = off_475C6B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass);
    __cxa_atexit(
      CDOTA_Item_SangeAndYasha::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_SangeAndYashaClass != 0 )
    return &CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass;
  if ( `guard variable for'CDOTA_Item_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeAndYashaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeAndYashaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeAndYashaClassInfo,
      "CDOTA_Item_SangeAndYasha",
      "item_sange_and_yasha",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeAndYashaClassInfo);
  }
  CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass.m_pClassInfo = &CDOTA_Item_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeAndYashaClassInfo;
  CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass.m_pBaseClassInfo = CDOTA_Item_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeAndYashaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_SangeAndYashaClass = &CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass;
  CDOTA_Item_SangeAndYasha::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SangeAndYashaClassInfo.m_pClass = &CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass;
  CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_SangeAndYashaClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_SangeAndYasha::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SangeAndYashaClass;
}


// CDOTA_Item_SangeAndYasha::GetIntrinsicModifierName  (line 45, @0x0000000002def750, libserver.so)
// strings: "modifier_item_sange_and_yasha"
const char *__fastcall CDOTA_Item_SangeAndYasha::GetIntrinsicModifierName(CDOTA_Item_SangeAndYasha *const this)
{
  return "modifier_item_sange_and_yasha";
}


// CDOTA_Modifier_Item_SangeAndYasha::~CDOTA_Modifier_Item_SangeAndYasha  (line 53, @0x0000000002df16f0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_SangeAndYasha::~CDOTA_Modifier_Item_SangeAndYasha(
        CDOTA_Modifier_Item_SangeAndYasha *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_SangeAndYasha::~CDOTA_Modifier_Item_SangeAndYasha  (line 53, @0x0000000002df1710, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_SangeAndYasha
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_SangeAndYasha::~CDOTA_Modifier_Item_SangeAndYasha(
        CDOTA_Modifier_Item_SangeAndYasha *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_SangeAndYasha::DeclareFunctions  (line 81, @0x0000000002de41d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_SangeAndYasha::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_SangeAndYasha::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_SangeAndYasha::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_SangeAndYasha::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_SangeAndYasha::GetModifierMoveSpeedBonus_Percentage_Unique(CModifierParams const&), CDOTA_Modifier_Item_SangeAndYasha::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_SangeAndYasha::DeclareFunctions(CDOTA_Modifier_Item_SangeAndYasha *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_SangeAndYasha::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_SangeAndYasha::GetModifierBonusStats_Agility;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_SangeAndYasha::GetModifierPreAttack_BonusDamage;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_SangeAndYasha::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[14].__pfn = CDOTA_Modifier_Item_SangeAndYasha::GetModifierMoveSpeedBonus_Percentage_Unique;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[14].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Item_SangeAndYasha::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Item_SangeAndYasha::OnCreated  (line 92, @0x0000000002dede00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_agility", "movement_speed_percent_bonus", "maim_chance", "maim_duration"
void __fastcall CDOTA_Modifier_Item_SangeAndYasha::OnCreated(
        CDOTA_Modifier_Item_SangeAndYasha *const this,
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
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_agility, "bonus_agility");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_attack_speed, "bonus_attack_speed");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->movement_speed_percent_bonus, "movement_speed_percent_bonus");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->bonus_strength, "bonus_strength");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->bonus_damage, "bonus_damage");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->maim_chance, "maim_chance");
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
    this->maim_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "maim_duration", -1, 0);
  else
    this->maim_duration = 0.0;
}


// CDOTA_Modifier_Item_SangeAndYasha::OnAttackLanded  (line 106, @0x0000000002de7980, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_sange_and_yasha_buff", "DOTA_Item.Maim"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_SangeAndYasha::OnAttackLanded(
        CDOTA_Modifier_Item_SangeAndYasha *const this,
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
  if ( RollPseudoRandomPercentage(
         this->maim_chance,
         DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_SANGEYASHA_MAIM,
         Parent) )
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
                KeyValues::KeyValues(&kv, "modifier_sange_and_yasha_buff");
                KeyValues::SetFloat(&kv, "duration", v17);
                Ability = CDOTA_Buff::GetAbility(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v15, Ability, "modifier_sange_and_yasha_buff", &kv, 0);
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


// CDOTA_Modifier_Item_SangeAndYasha::GetModifierBonusStats_Agility  (line 132, @0x0000000002de4270, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_SangeAndYasha::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_SangeAndYasha *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_SangeAndYasha::GetModifierAttackSpeedBonus_Constant  (line 137, @0x0000000002de4290, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_SangeAndYasha::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_SangeAndYasha *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_SangeAndYasha::GetModifierMoveSpeedBonus_Percentage_Unique  (line 142, @0x0000000002de42b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_SangeAndYasha::GetModifierMoveSpeedBonus_Percentage_Unique(
        CDOTA_Modifier_Item_SangeAndYasha *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_speed_percent_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_SangeAndYasha::GetModifierBonusStats_Strength  (line 147, @0x0000000002de42d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_SangeAndYasha::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_SangeAndYasha *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_SangeAndYasha::GetModifierPreAttack_BonusDamage  (line 152, @0x0000000002de42f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_SangeAndYasha::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_SangeAndYasha *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_SangeAndYasha_Maim::~CDOTA_Modifier_SangeAndYasha_Maim  (line 160, @0x0000000002df1d70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SangeAndYasha_Maim::~CDOTA_Modifier_SangeAndYasha_Maim(
        CDOTA_Modifier_SangeAndYasha_Maim *const this)
{
  this->_vptr_CDOTA_Buff = &off_475D610;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SangeAndYasha_Maim::~CDOTA_Modifier_SangeAndYasha_Maim  (line 160, @0x0000000002df1d90, libserver.so)  // inlines: ~CDOTA_Modifier_SangeAndYasha_Maim
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SangeAndYasha_Maim::~CDOTA_Modifier_SangeAndYasha_Maim(
        CDOTA_Modifier_SangeAndYasha_Maim *const this)
{
  this->_vptr_CDOTA_Buff = &off_475D610;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SangeAndYasha_Maim::IsDebuff  (line 167, @0x0000000002def760, libserver.so)
bool __fastcall CDOTA_Modifier_SangeAndYasha_Maim::IsDebuff(CDOTA_Modifier_SangeAndYasha_Maim *const this)
{
  return 1;
}


// CDOTA_Modifier_SangeAndYasha_Maim::GetEffectName  (line 169, @0x0000000002def770, libserver.so)
// strings: "particles/items2_fx/sange_maim.vpcf"
const char *__fastcall CDOTA_Modifier_SangeAndYasha_Maim::GetEffectName(CDOTA_Modifier_SangeAndYasha_Maim *const this)
{
  return "particles/items2_fx/sange_maim.vpcf";
}


// CDOTA_Modifier_SangeAndYasha_Maim::DeclareFunctions  (line 184, @0x0000000002de4310, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SangeAndYasha_Maim::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_SangeAndYasha_Maim::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_SangeAndYasha_Maim::DeclareFunctions(CDOTA_Modifier_SangeAndYasha_Maim *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_SangeAndYasha_Maim::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_SangeAndYasha_Maim::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_SangeAndYasha_Maim::OnCreated  (line 190, @0x0000000002decbe0, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "maim_slow_movement", "maim_slow_attack", "maim_slow_movement_range", "maim_slow_attack_range"
void __fastcall CDOTA_Modifier_SangeAndYasha_Maim::OnCreated(
        CDOTA_Modifier_SangeAndYasha_Maim *const this,
        KeyValues *pKV)
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


// CDOTA_Modifier_SangeAndYasha_Maim::GetModifierMoveSpeedBonus_Percentage  (line 198, @0x0000000002de4ab0, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_SangeAndYasha_Maim::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_SangeAndYasha_Maim *const this,
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


// CDOTA_Modifier_SangeAndYasha_Maim::GetModifierAttackSpeedBonus_Constant  (line 203, @0x0000000002de4b00, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_SangeAndYasha_Maim::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_SangeAndYasha_Maim *const this,
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


