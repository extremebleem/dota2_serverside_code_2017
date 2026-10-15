// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_boosters.cpp:28
class CDOTA_Item_EnergyBooster : public CDOTA_Item {
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
	CDOTA_Item_EnergyBooster(CDOTA_Item_EnergyBooster &);
	CDOTA_Item_EnergyBooster(CDOTA_Item_EnergyBooster &);
	CDOTA_Item_EnergyBooster();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_EnergyBooster();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_boosters.cpp:40
class CDOTA_Modifier_Item_EnergyBooster : public CDOTA_Buff_Item {
public:

private:

	int bonus_mana;  // +0xba8
	CDOTA_Modifier_Item_EnergyBooster();
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_EnergyBooster();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_boosters.cpp:77
class CDOTA_Item_PointBooster : public CDOTA_Item {
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
	CDOTA_Item_PointBooster(CDOTA_Item_PointBooster &);
	CDOTA_Item_PointBooster(CDOTA_Item_PointBooster &);
	CDOTA_Item_PointBooster();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_PointBooster();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_boosters.cpp:89
class CDOTA_Modifier_Item_PointBooster : public CDOTA_Buff_Item {
public:

private:

	int bonus_mana;  // +0xba8
	int bonus_health;  // +0xbac
	CDOTA_Modifier_Item_PointBooster();
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_PointBooster();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_boosters.cpp:136
class CDOTA_Item_VitalityBooster : public CDOTA_Item {
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
	CDOTA_Item_VitalityBooster(CDOTA_Item_VitalityBooster &);
	CDOTA_Item_VitalityBooster(CDOTA_Item_VitalityBooster &);
	CDOTA_Item_VitalityBooster();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_VitalityBooster();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_boosters.cpp:148
class CDOTA_Modifier_Item_VitalityBooster : public CDOTA_Buff_Item {
public:

private:

	int bonus_health;  // +0xba8
	CDOTA_Modifier_Item_VitalityBooster();
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_VitalityBooster();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_EnergyBooster::~CDOTA_Item_EnergyBooster  (line 28, @0x0000000002d64a30, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_EnergyBooster::~CDOTA_Item_EnergyBooster(CDOTA_Item_EnergyBooster *const this)
{
  this->_vptr_IHandleEntity = &off_469F010;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_EnergyBooster::~CDOTA_Item_EnergyBooster  (line 28, @0x0000000002d64a50, libserver.so)  // inlines: ~CDOTA_Item_EnergyBooster
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_EnergyBooster::~CDOTA_Item_EnergyBooster(CDOTA_Item_EnergyBooster *const this)
{
  this->_vptr_IHandleEntity = &off_469F010;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_EnergyBooster::Schema_DynamicBinding  (line 30, @0x0000000002d615c0, libserver.so)
// globals: CDOTA_Item_EnergyBooster::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_EnergyBooster::Schema_DynamicBinding(
        const CDOTA_Item_EnergyBooster *const this)
{
  return CDOTA_Item_EnergyBooster::s_pSchemaBinding;
}


// CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002d615d0, libserver.so)
// globals: CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002d615e0, libserver.so)  // inlines: Destruct<CDOTA_Item_EnergyBooster>
void __fastcall CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002d61600, libserver.so)
void __fastcall CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002d61620, libserver.so)
bool __fastcall CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002d61630, libserver.so)
// globals: CDOTA_Item_EnergyBooster::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_EnergyBooster::s_pSchemaBinding;
}


// CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002d62970, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002d639f0, libserver.so)  // inlines: CDOTA_Item_EnergyBooster, Construct<CDOTA_Item_EnergyBooster>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_469F010;
  }
  return p;
}


// CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002d66950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002d66970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_EnergyBooster::GetEntityClassInternal  (line 30, @0x0000000002d6df80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_EnergyBooster"
// globals: `guard variable for'CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass, CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass, __dso_handle, CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_EnergyBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EnergyBoosterClassInfo, CDOTA_Item_EnergyBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EnergyBoosterClassInfo
CEntityClass *__cdecl CDOTA_Item_EnergyBooster::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass);
    CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass._vptr_CEntityClass = off_469EF90;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass);
    __cxa_atexit(
      CDOTA_Item_EnergyBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_EnergyBoosterClass != 0 )
    return &CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass;
  if ( `guard variable for'CDOTA_Item_EnergyBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EnergyBoosterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_EnergyBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EnergyBoosterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_EnergyBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EnergyBoosterClassInfo,
      "CDOTA_Item_EnergyBooster",
      "item_energy_booster",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_EnergyBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EnergyBoosterClassInfo);
  }
  CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass.m_pClassInfo = &CDOTA_Item_EnergyBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EnergyBoosterClassInfo;
  CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass.m_pBaseClassInfo = CDOTA_Item_EnergyBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EnergyBoosterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_EnergyBoosterClass = &CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass;
  CDOTA_Item_EnergyBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EnergyBoosterClassInfo.m_pClass = &CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass;
  CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_EnergyBoosterClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_EnergyBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EnergyBoosterClass;
}


// CDOTA_Item_EnergyBooster::GetIntrinsicModifierName  (line 32, @0x0000000002d61640, libserver.so)
// strings: "modifier_item_energy_booster"
const char *__fastcall CDOTA_Item_EnergyBooster::GetIntrinsicModifierName(CDOTA_Item_EnergyBooster *const this)
{
  return "modifier_item_energy_booster";
}


// CDOTA_Modifier_Item_EnergyBooster::~CDOTA_Modifier_Item_EnergyBooster  (line 40, @0x0000000002d62ad0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_EnergyBooster::~CDOTA_Modifier_Item_EnergyBooster(
        CDOTA_Modifier_Item_EnergyBooster *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_EnergyBooster::~CDOTA_Modifier_Item_EnergyBooster  (line 40, @0x0000000002d62af0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_EnergyBooster
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_EnergyBooster::~CDOTA_Modifier_Item_EnergyBooster(
        CDOTA_Modifier_Item_EnergyBooster *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_EnergyBooster::DeclareFunctions  (line 55, @0x0000000002d54a50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_EnergyBooster::GetModifierManaBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_EnergyBooster::DeclareFunctions(CDOTA_Modifier_Item_EnergyBooster *const this)
{
  this->m_Functions[59].__pfn = CDOTA_Modifier_Item_EnergyBooster::GetModifierManaBonus;
  this->m_Functions[59].__delta = 0;
}


// CDOTA_Modifier_Item_EnergyBooster::GetModifierManaBonus  (line 60, @0x0000000002d54a70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_EnergyBooster::GetModifierManaBonus(
        CDOTA_Modifier_Item_EnergyBooster *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_EnergyBooster::OnCreated  (line 65, @0x0000000002d5ee60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_mana"
void __fastcall CDOTA_Modifier_Item_EnergyBooster::OnCreated(
        CDOTA_Modifier_Item_EnergyBooster *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_mana", -1, 0);
  else
    this->bonus_mana = 0;
}


// CDOTA_Item_PointBooster::~CDOTA_Item_PointBooster  (line 77, @0x0000000002d64a80, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_PointBooster::~CDOTA_Item_PointBooster(CDOTA_Item_PointBooster *const this)
{
  this->_vptr_IHandleEntity = &off_469FF30;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_PointBooster::~CDOTA_Item_PointBooster  (line 77, @0x0000000002d64aa0, libserver.so)  // inlines: ~CDOTA_Item_PointBooster
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_PointBooster::~CDOTA_Item_PointBooster(CDOTA_Item_PointBooster *const this)
{
  this->_vptr_IHandleEntity = &off_469FF30;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_PointBooster::Schema_DynamicBinding  (line 79, @0x0000000002d61650, libserver.so)
// globals: CDOTA_Item_PointBooster::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_PointBooster::Schema_DynamicBinding(
        const CDOTA_Item_PointBooster *const this)
{
  return CDOTA_Item_PointBooster::s_pSchemaBinding;
}


// CDOTA_Item_PointBooster::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 79, @0x0000000002d61660, libserver.so)
// globals: CDOTA_Item_PointBooster::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_PointBooster::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_PointBooster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_PointBooster::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_PointBooster::CEntityInstanceEntityClass::DestructInstance  (line 79, @0x0000000002d61670, libserver.so)  // inlines: Destruct<CDOTA_Item_PointBooster>
void __fastcall CDOTA_Item_PointBooster::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_PointBooster::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_PointBooster::CEntityInstanceEntityClass::FreeInstance  (line 79, @0x0000000002d61690, libserver.so)
void __fastcall CDOTA_Item_PointBooster::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_PointBooster::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_PointBooster::CEntityInstanceEntityClass::CanAllocate  (line 79, @0x0000000002d616b0, libserver.so)
bool __fastcall CDOTA_Item_PointBooster::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_PointBooster::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_PointBooster::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 79, @0x0000000002d616c0, libserver.so)
// globals: CDOTA_Item_PointBooster::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_PointBooster::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_PointBooster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_PointBooster::s_pSchemaBinding;
}


// CDOTA_Item_PointBooster::CEntityInstanceEntityClass::AllocateInstance  (line 79, @0x0000000002d629b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_PointBooster::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_PointBooster::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_PointBooster::CEntityInstanceEntityClass::ConstructInstance  (line 79, @0x0000000002d63a20, libserver.so)  // inlines: CDOTA_Item_PointBooster, Construct<CDOTA_Item_PointBooster>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_PointBooster::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_PointBooster::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_469FF30;
  }
  return p;
}


// CDOTA_Item_PointBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 79, @0x0000000002d669a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_PointBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_PointBooster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_PointBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 79, @0x0000000002d669c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_PointBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_PointBooster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_PointBooster::GetEntityClassInternal  (line 79, @0x0000000002d6e0d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_PointBooster"
// globals: `guard variable for'CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass, CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass, __dso_handle, CDOTA_Item_PointBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_PointBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PointBoosterClassInfo, CDOTA_Item_PointBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PointBoosterClassInfo
CEntityClass *__cdecl CDOTA_Item_PointBooster::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass);
    CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass._vptr_CEntityClass = off_469FEB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass);
    __cxa_atexit(
      CDOTA_Item_PointBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_PointBoosterClass != 0 )
    return &CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass;
  if ( `guard variable for'CDOTA_Item_PointBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PointBoosterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_PointBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PointBoosterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_PointBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PointBoosterClassInfo,
      "CDOTA_Item_PointBooster",
      "item_point_booster",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_PointBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PointBoosterClassInfo);
  }
  CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass.m_pClassInfo = &CDOTA_Item_PointBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PointBoosterClassInfo;
  CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass.m_pBaseClassInfo = CDOTA_Item_PointBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PointBoosterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_PointBoosterClass = &CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass;
  CDOTA_Item_PointBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PointBoosterClassInfo.m_pClass = &CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass;
  CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_PointBoosterClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_PointBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PointBoosterClass;
}


// CDOTA_Item_PointBooster::GetIntrinsicModifierName  (line 81, @0x0000000002d616d0, libserver.so)
// strings: "modifier_item_point_booster"
const char *__fastcall CDOTA_Item_PointBooster::GetIntrinsicModifierName(CDOTA_Item_PointBooster *const this)
{
  return "modifier_item_point_booster";
}


// CDOTA_Modifier_Item_PointBooster::~CDOTA_Modifier_Item_PointBooster  (line 89, @0x0000000002d62a80, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_PointBooster::~CDOTA_Modifier_Item_PointBooster(
        CDOTA_Modifier_Item_PointBooster *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_PointBooster::~CDOTA_Modifier_Item_PointBooster  (line 89, @0x0000000002d62aa0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_PointBooster
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_PointBooster::~CDOTA_Modifier_Item_PointBooster(
        CDOTA_Modifier_Item_PointBooster *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_PointBooster::DeclareFunctions  (line 106, @0x0000000002d54a90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_PointBooster::GetModifierManaBonus(CModifierParams const&), CDOTA_Modifier_Item_PointBooster::GetModifierHealthBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_PointBooster::DeclareFunctions(CDOTA_Modifier_Item_PointBooster *const this)
{
  this->m_Functions[59].__pfn = CDOTA_Modifier_Item_PointBooster::GetModifierManaBonus;
  this->m_Functions[59].__delta = 0;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_PointBooster::GetModifierHealthBonus;
}


// CDOTA_Modifier_Item_PointBooster::GetModifierManaBonus  (line 112, @0x0000000002d54ad0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PointBooster::GetModifierManaBonus(
        CDOTA_Modifier_Item_PointBooster *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_PointBooster::GetModifierHealthBonus  (line 117, @0x0000000002d54af0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PointBooster::GetModifierHealthBonus(
        CDOTA_Modifier_Item_PointBooster *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_PointBooster::OnCreated  (line 122, @0x0000000002d5efe0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_mana", "bonus_health"
void __fastcall CDOTA_Modifier_Item_PointBooster::OnCreated(
        CDOTA_Modifier_Item_PointBooster *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_mana", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_health", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_mana = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_health = 0;
}


// CDOTA_Item_VitalityBooster::~CDOTA_Item_VitalityBooster  (line 136, @0x0000000002d64ad0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_VitalityBooster::~CDOTA_Item_VitalityBooster(CDOTA_Item_VitalityBooster *const this)
{
  this->_vptr_IHandleEntity = &off_46A0E50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_VitalityBooster::~CDOTA_Item_VitalityBooster  (line 136, @0x0000000002d64af0, libserver.so)  // inlines: ~CDOTA_Item_VitalityBooster
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_VitalityBooster::~CDOTA_Item_VitalityBooster(CDOTA_Item_VitalityBooster *const this)
{
  this->_vptr_IHandleEntity = &off_46A0E50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_VitalityBooster::Schema_DynamicBinding  (line 138, @0x0000000002d616e0, libserver.so)
// globals: CDOTA_Item_VitalityBooster::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_VitalityBooster::Schema_DynamicBinding(
        const CDOTA_Item_VitalityBooster *const this)
{
  return CDOTA_Item_VitalityBooster::s_pSchemaBinding;
}


// CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 138, @0x0000000002d616f0, libserver.so)
// globals: CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::DestructInstance  (line 138, @0x0000000002d61700, libserver.so)  // inlines: Destruct<CDOTA_Item_VitalityBooster>
void __fastcall CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::FreeInstance  (line 138, @0x0000000002d61720, libserver.so)
void __fastcall CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::CanAllocate  (line 138, @0x0000000002d61740, libserver.so)
bool __fastcall CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 138, @0x0000000002d61750, libserver.so)
// globals: CDOTA_Item_VitalityBooster::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_VitalityBooster::s_pSchemaBinding;
}


// CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::AllocateInstance  (line 138, @0x0000000002d629f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::ConstructInstance  (line 138, @0x0000000002d63a50, libserver.so)  // inlines: CDOTA_Item_VitalityBooster, Construct<CDOTA_Item_VitalityBooster>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46A0E50;
  }
  return p;
}


// CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 138, @0x0000000002d669f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 138, @0x0000000002d66a10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_VitalityBooster::GetEntityClassInternal  (line 138, @0x0000000002d6e220, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_vitality_booster", "CDOTA_Item_VitalityBooster"
// globals: `guard variable for'CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass, CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass, __dso_handle, CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_VitalityBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VitalityBoosterClassInfo, CDOTA_Item_VitalityBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VitalityBoosterClassInfo
CEntityClass *__cdecl CDOTA_Item_VitalityBooster::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass);
    CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass._vptr_CEntityClass = off_46A0DD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass);
    __cxa_atexit(
      CDOTA_Item_VitalityBooster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_VitalityBoosterClass != 0 )
    return &CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass;
  if ( `guard variable for'CDOTA_Item_VitalityBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VitalityBoosterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_VitalityBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VitalityBoosterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_VitalityBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VitalityBoosterClassInfo,
      "CDOTA_Item_VitalityBooster",
      "item_vitality_booster",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_VitalityBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VitalityBoosterClassInfo);
  }
  CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass.m_pClassInfo = &CDOTA_Item_VitalityBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VitalityBoosterClassInfo;
  CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass.m_pBaseClassInfo = CDOTA_Item_VitalityBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VitalityBoosterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_VitalityBoosterClass = &CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass;
  CDOTA_Item_VitalityBooster::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VitalityBoosterClassInfo.m_pClass = &CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass;
  CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_VitalityBoosterClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_VitalityBooster::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VitalityBoosterClass;
}


// CDOTA_Item_VitalityBooster::GetIntrinsicModifierName  (line 140, @0x0000000002d61760, libserver.so)
// strings: "modifier_item_vitality_booster"
const char *__fastcall CDOTA_Item_VitalityBooster::GetIntrinsicModifierName(CDOTA_Item_VitalityBooster *const this)
{
  return "modifier_item_vitality_booster";
}


// CDOTA_Modifier_Item_VitalityBooster::~CDOTA_Modifier_Item_VitalityBooster  (line 148, @0x0000000002d62a30, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_VitalityBooster::~CDOTA_Modifier_Item_VitalityBooster(
        CDOTA_Modifier_Item_VitalityBooster *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_VitalityBooster::~CDOTA_Modifier_Item_VitalityBooster  (line 148, @0x0000000002d62a50, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_VitalityBooster
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_VitalityBooster::~CDOTA_Modifier_Item_VitalityBooster(
        CDOTA_Modifier_Item_VitalityBooster *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_VitalityBooster::DeclareFunctions  (line 163, @0x0000000002d54b10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_VitalityBooster::GetModifierHealthBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_VitalityBooster::DeclareFunctions(CDOTA_Modifier_Item_VitalityBooster *const this)
{
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_VitalityBooster::GetModifierHealthBonus;
  this->m_Functions[58].__delta = 0;
}


// CDOTA_Modifier_Item_VitalityBooster::GetModifierHealthBonus  (line 168, @0x0000000002d54b30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_VitalityBooster::GetModifierHealthBonus(
        CDOTA_Modifier_Item_VitalityBooster *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_VitalityBooster::OnCreated  (line 173, @0x0000000002d5ef20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_health"
void __fastcall CDOTA_Modifier_Item_VitalityBooster::OnCreated(
        CDOTA_Modifier_Item_VitalityBooster *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_health", -1, 0);
  else
    this->bonus_health = 0;
}


