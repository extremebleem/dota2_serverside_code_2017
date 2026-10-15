// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_hyperstone.cpp:26
class CDOTA_Item_Hyperstone : public CDOTA_Item {
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
	CDOTA_Item_Hyperstone(CDOTA_Item_Hyperstone &);
	CDOTA_Item_Hyperstone(CDOTA_Item_Hyperstone &);
	CDOTA_Item_Hyperstone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Hyperstone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_hyperstone.cpp:38
class CDOTA_Modifier_Item_Hyperstone : public CDOTA_Buff_Item {
public:

private:

	int bonus_attack_speed;  // +0xba8
	CDOTA_Modifier_Item_Hyperstone();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Hyperstone();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Hyperstone::~CDOTA_Item_Hyperstone  (line 26, @0x0000000002dbc6d0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Hyperstone::~CDOTA_Item_Hyperstone(CDOTA_Item_Hyperstone *const this)
{
  this->_vptr_IHandleEntity = &off_46FF250;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Hyperstone::~CDOTA_Item_Hyperstone  (line 26, @0x0000000002dbc6f0, libserver.so)  // inlines: ~CDOTA_Item_Hyperstone
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Hyperstone::~CDOTA_Item_Hyperstone(CDOTA_Item_Hyperstone *const this)
{
  this->_vptr_IHandleEntity = &off_46FF250;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Hyperstone::Schema_DynamicBinding  (line 28, @0x0000000002db8920, libserver.so)
// globals: CDOTA_Item_Hyperstone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Hyperstone::Schema_DynamicBinding(
        const CDOTA_Item_Hyperstone *const this)
{
  return CDOTA_Item_Hyperstone::s_pSchemaBinding;
}


// CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002db8930, libserver.so)
// globals: CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Hyperstone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002db8940, libserver.so)  // inlines: Destruct<CDOTA_Item_Hyperstone>
void __fastcall CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Hyperstone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002db8960, libserver.so)
void __fastcall CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Hyperstone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002db8980, libserver.so)
bool __fastcall CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Hyperstone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002db8990, libserver.so)
// globals: CDOTA_Item_Hyperstone::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Hyperstone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Hyperstone::s_pSchemaBinding;
}


// CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dba4c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Hyperstone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dbb820, libserver.so)  // inlines: CDOTA_Item_Hyperstone, Construct<CDOTA_Item_Hyperstone>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Hyperstone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46FF250;
  }
  return p;
}


// CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbe8d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Hyperstone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbe8f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Hyperstone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Hyperstone::GetEntityClassInternal  (line 28, @0x0000000002dc2df0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "CDOTA_Item_Hyperstone"
// globals: `guard variable for'CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass, CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass, __dso_handle, CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Hyperstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HyperstoneClassInfo, CDOTA_Item_Hyperstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HyperstoneClassInfo
CEntityClass *__cdecl CDOTA_Item_Hyperstone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass);
    CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass._vptr_CEntityClass = off_46FF1D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass);
    __cxa_atexit(
      CDOTA_Item_Hyperstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_HyperstoneClass != 0 )
    return &CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass;
  if ( `guard variable for'CDOTA_Item_Hyperstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HyperstoneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Hyperstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HyperstoneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Hyperstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HyperstoneClassInfo,
      "CDOTA_Item_Hyperstone",
      "item_hyperstone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Hyperstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HyperstoneClassInfo);
  }
  CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass.m_pClassInfo = &CDOTA_Item_Hyperstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HyperstoneClassInfo;
  CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass.m_pBaseClassInfo = CDOTA_Item_Hyperstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HyperstoneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_HyperstoneClass = &CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass;
  CDOTA_Item_Hyperstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HyperstoneClassInfo.m_pClass = &CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass;
  CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_HyperstoneClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Hyperstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HyperstoneClass;
}


// CDOTA_Item_Hyperstone::GetIntrinsicModifierName  (line 30, @0x0000000002db89a0, libserver.so)
// strings: "modifier_item_hyperstone"
const char *__fastcall CDOTA_Item_Hyperstone::GetIntrinsicModifierName(CDOTA_Item_Hyperstone *const this)
{
  return "modifier_item_hyperstone";
}


// CDOTA_Modifier_Item_Hyperstone::~CDOTA_Modifier_Item_Hyperstone  (line 38, @0x0000000002dbb000, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Hyperstone::~CDOTA_Modifier_Item_Hyperstone(
        CDOTA_Modifier_Item_Hyperstone *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Hyperstone::~CDOTA_Modifier_Item_Hyperstone  (line 38, @0x0000000002dbb020, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Hyperstone
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Hyperstone::~CDOTA_Modifier_Item_Hyperstone(
        CDOTA_Modifier_Item_Hyperstone *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Hyperstone::DeclareFunctions  (line 53, @0x0000000002daae60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Hyperstone::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Hyperstone::DeclareFunctions(CDOTA_Modifier_Item_Hyperstone *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Hyperstone::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Item_Hyperstone::GetModifierAttackSpeedBonus_Constant  (line 58, @0x0000000002daae80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Hyperstone::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Hyperstone *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Hyperstone::OnCreated  (line 63, @0x0000000002db4590, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_Hyperstone::OnCreated(CDOTA_Modifier_Item_Hyperstone *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
  else
    this->bonus_attack_speed = 0;
}


