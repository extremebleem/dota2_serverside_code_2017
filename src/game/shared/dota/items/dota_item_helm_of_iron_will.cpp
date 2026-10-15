// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_helm_of_iron_will.cpp:26
class CDOTA_Item_HelmOfIronWill : public CDOTA_Item {
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
	CDOTA_Item_HelmOfIronWill(CDOTA_Item_HelmOfIronWill &);
	CDOTA_Item_HelmOfIronWill(CDOTA_Item_HelmOfIronWill &);
	CDOTA_Item_HelmOfIronWill();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_HelmOfIronWill();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_helm_of_iron_will.cpp:38
class CDOTA_Modifier_Item_HelmOfIronWill : public CDOTA_Buff_Item {
public:

private:

	int bonus_armor;  // +0xba8
	int bonus_regen;  // +0xbac
	CDOTA_Modifier_Item_HelmOfIronWill();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_HelmOfIronWill();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_HelmOfIronWill::~CDOTA_Item_HelmOfIronWill  (line 26, @0x0000000002dbc4a0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_HelmOfIronWill::~CDOTA_Item_HelmOfIronWill(CDOTA_Item_HelmOfIronWill *const this)
{
  this->_vptr_IHandleEntity = &off_46F7590;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_HelmOfIronWill::~CDOTA_Item_HelmOfIronWill  (line 26, @0x0000000002dbc4c0, libserver.so)  // inlines: ~CDOTA_Item_HelmOfIronWill
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_HelmOfIronWill::~CDOTA_Item_HelmOfIronWill(CDOTA_Item_HelmOfIronWill *const this)
{
  this->_vptr_IHandleEntity = &off_46F7590;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_HelmOfIronWill::Schema_DynamicBinding  (line 28, @0x0000000002db83e0, libserver.so)
// globals: CDOTA_Item_HelmOfIronWill::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_HelmOfIronWill::Schema_DynamicBinding(
        const CDOTA_Item_HelmOfIronWill *const this)
{
  return CDOTA_Item_HelmOfIronWill::s_pSchemaBinding;
}


// CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002db83f0, libserver.so)
// globals: CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002db8400, libserver.so)  // inlines: Destruct<CDOTA_Item_HelmOfIronWill>
void __fastcall CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002db8420, libserver.so)
void __fastcall CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002db8440, libserver.so)
bool __fastcall CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002db8450, libserver.so)
// globals: CDOTA_Item_HelmOfIronWill::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_HelmOfIronWill::s_pSchemaBinding;
}


// CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dba300, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dbb6d0, libserver.so)  // inlines: CDOTA_Item_HelmOfIronWill, Construct<CDOTA_Item_HelmOfIronWill>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46F7590;
  }
  return p;
}


// CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbe6a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbe6c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_HelmOfIronWill::GetEntityClassInternal  (line 28, @0x0000000002dc1ce0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_helm_of_iron_will", "CDOTA_Item_HelmOfIronWill"
// globals: `guard variable for'CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass, CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass, __dso_handle, CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_HelmOfIronWill::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfIronWillClassInfo, CDOTA_Item_HelmOfIronWill::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfIronWillClassInfo
CEntityClass *__cdecl CDOTA_Item_HelmOfIronWill::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass);
    CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass._vptr_CEntityClass = off_46F7510;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass);
    __cxa_atexit(
      CDOTA_Item_HelmOfIronWill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_HelmOfIronWillClass != 0 )
    return &CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass;
  if ( `guard variable for'CDOTA_Item_HelmOfIronWill::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfIronWillClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_HelmOfIronWill::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfIronWillClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_HelmOfIronWill::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfIronWillClassInfo,
      "CDOTA_Item_HelmOfIronWill",
      "item_helm_of_iron_will",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_HelmOfIronWill::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfIronWillClassInfo);
  }
  CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass.m_pClassInfo = &CDOTA_Item_HelmOfIronWill::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfIronWillClassInfo;
  CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass.m_pBaseClassInfo = CDOTA_Item_HelmOfIronWill::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfIronWillClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_HelmOfIronWillClass = &CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass;
  CDOTA_Item_HelmOfIronWill::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HelmOfIronWillClassInfo.m_pClass = &CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass;
  CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_HelmOfIronWillClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_HelmOfIronWill::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HelmOfIronWillClass;
}


// CDOTA_Item_HelmOfIronWill::GetIntrinsicModifierName  (line 30, @0x0000000002db8460, libserver.so)
// strings: "modifier_item_helm_of_iron_will"
const char *__fastcall CDOTA_Item_HelmOfIronWill::GetIntrinsicModifierName(CDOTA_Item_HelmOfIronWill *const this)
{
  return "modifier_item_helm_of_iron_will";
}


// CDOTA_Modifier_Item_HelmOfIronWill::~CDOTA_Modifier_Item_HelmOfIronWill  (line 38, @0x0000000002dbb140, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_HelmOfIronWill::~CDOTA_Modifier_Item_HelmOfIronWill(
        CDOTA_Modifier_Item_HelmOfIronWill *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_HelmOfIronWill::~CDOTA_Modifier_Item_HelmOfIronWill  (line 38, @0x0000000002dbb160, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_HelmOfIronWill
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_HelmOfIronWill::~CDOTA_Modifier_Item_HelmOfIronWill(
        CDOTA_Modifier_Item_HelmOfIronWill *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_HelmOfIronWill::DeclareFunctions  (line 56, @0x0000000002daa920, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_HelmOfIronWill::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Item_HelmOfIronWill::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_HelmOfIronWill::DeclareFunctions(CDOTA_Modifier_Item_HelmOfIronWill *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_HelmOfIronWill::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_HelmOfIronWill::GetModifierConstantHealthRegen;
}


// CDOTA_Modifier_Item_HelmOfIronWill::GetModifierPhysicalArmorBonus  (line 62, @0x0000000002daa960, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HelmOfIronWill::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_HelmOfIronWill *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_HelmOfIronWill::GetModifierConstantHealthRegen  (line 67, @0x0000000002daa980, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HelmOfIronWill::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_HelmOfIronWill *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_HelmOfIronWill::OnCreated  (line 72, @0x0000000002db4890, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_regen"
void __fastcall CDOTA_Modifier_Item_HelmOfIronWill::OnCreated(
        CDOTA_Modifier_Item_HelmOfIronWill *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_armor", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_regen", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_armor = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_regen = 0;
}


