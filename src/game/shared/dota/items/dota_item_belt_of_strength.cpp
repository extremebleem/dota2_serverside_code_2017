// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_belt_of_strength.cpp:26
class CDOTA_Item_BeltOfStrength : public CDOTA_Item {
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
	CDOTA_Item_BeltOfStrength(CDOTA_Item_BeltOfStrength &);
	CDOTA_Item_BeltOfStrength(CDOTA_Item_BeltOfStrength &);
	CDOTA_Item_BeltOfStrength();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_BeltOfStrength();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_belt_of_strength.cpp:38
class CDOTA_Modifier_Item_BeltOfStrength : public CDOTA_Buff_Item {
public:

private:

	int bonus_strength;  // +0xba8
	CDOTA_Modifier_Item_BeltOfStrength();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_BeltOfStrength();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_BeltOfStrength::~CDOTA_Item_BeltOfStrength  (line 26, @0x0000000002d64620, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_BeltOfStrength::~CDOTA_Item_BeltOfStrength(CDOTA_Item_BeltOfStrength *const this)
{
  this->_vptr_IHandleEntity = &off_4691AD0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_BeltOfStrength::~CDOTA_Item_BeltOfStrength  (line 26, @0x0000000002d64640, libserver.so)  // inlines: ~CDOTA_Item_BeltOfStrength
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_BeltOfStrength::~CDOTA_Item_BeltOfStrength(CDOTA_Item_BeltOfStrength *const this)
{
  this->_vptr_IHandleEntity = &off_4691AD0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_BeltOfStrength::Schema_DynamicBinding  (line 28, @0x0000000002d60dc0, libserver.so)
// globals: CDOTA_Item_BeltOfStrength::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BeltOfStrength::Schema_DynamicBinding(
        const CDOTA_Item_BeltOfStrength *const this)
{
  return CDOTA_Item_BeltOfStrength::s_pSchemaBinding;
}


// CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d60dd0, libserver.so)
// globals: CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d60de0, libserver.so)  // inlines: Destruct<CDOTA_Item_BeltOfStrength>
void __fastcall CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d60e00, libserver.so)
void __fastcall CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d60e20, libserver.so)
bool __fastcall CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d60e30, libserver.so)
// globals: CDOTA_Item_BeltOfStrength::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BeltOfStrength::s_pSchemaBinding;
}


// CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d62630, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d63780, libserver.so)  // inlines: CDOTA_Item_BeltOfStrength, Construct<CDOTA_Item_BeltOfStrength>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4691AD0;
  }
  return p;
}


// CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d66540, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d66560, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_BeltOfStrength::GetEntityClassInternal  (line 28, @0x0000000002d6bfd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_belt_of_strength", "CDOTA_Item_BeltOfStrength"
// globals: `guard variable for'CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass, CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass, __dso_handle, CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_BeltOfStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BeltOfStrengthClassInfo, CDOTA_Item_BeltOfStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BeltOfStrengthClassInfo
CEntityClass *__cdecl CDOTA_Item_BeltOfStrength::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass);
    CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass._vptr_CEntityClass = off_4691A50;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass);
    __cxa_atexit(
      CDOTA_Item_BeltOfStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BeltOfStrengthClass != 0 )
    return &CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass;
  if ( `guard variable for'CDOTA_Item_BeltOfStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BeltOfStrengthClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BeltOfStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BeltOfStrengthClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_BeltOfStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BeltOfStrengthClassInfo,
      "CDOTA_Item_BeltOfStrength",
      "item_belt_of_strength",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BeltOfStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BeltOfStrengthClassInfo);
  }
  CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass.m_pClassInfo = &CDOTA_Item_BeltOfStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BeltOfStrengthClassInfo;
  CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass.m_pBaseClassInfo = CDOTA_Item_BeltOfStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BeltOfStrengthClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BeltOfStrengthClass = &CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass;
  CDOTA_Item_BeltOfStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BeltOfStrengthClassInfo.m_pClass = &CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass;
  CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BeltOfStrengthClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_BeltOfStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BeltOfStrengthClass;
}


// CDOTA_Item_BeltOfStrength::GetIntrinsicModifierName  (line 30, @0x0000000002d60e40, libserver.so)
// strings: "modifier_item_belt_of_strength"
const char *__fastcall CDOTA_Item_BeltOfStrength::GetIntrinsicModifierName(CDOTA_Item_BeltOfStrength *const this)
{
  return "modifier_item_belt_of_strength";
}


// CDOTA_Modifier_Item_BeltOfStrength::~CDOTA_Modifier_Item_BeltOfStrength  (line 38, @0x0000000002d62da0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_BeltOfStrength::~CDOTA_Modifier_Item_BeltOfStrength(
        CDOTA_Modifier_Item_BeltOfStrength *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_BeltOfStrength::~CDOTA_Modifier_Item_BeltOfStrength  (line 38, @0x0000000002d62dc0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_BeltOfStrength
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_BeltOfStrength::~CDOTA_Modifier_Item_BeltOfStrength(
        CDOTA_Modifier_Item_BeltOfStrength *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_BeltOfStrength::OnCreated  (line 53, @0x0000000002d5ee00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_BeltOfStrength::OnCreated(
        CDOTA_Modifier_Item_BeltOfStrength *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_strength", -1, 0);
  else
    this->bonus_strength = 0;
}


// CDOTA_Modifier_Item_BeltOfStrength::DeclareFunctions  (line 60, @0x0000000002d543e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_BeltOfStrength::GetModifierBonusStats_Strength(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_BeltOfStrength::DeclareFunctions(CDOTA_Modifier_Item_BeltOfStrength *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_BeltOfStrength::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
}


// CDOTA_Modifier_Item_BeltOfStrength::GetModifierBonusStats_Strength  (line 65, @0x0000000002d54400, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_BeltOfStrength::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_BeltOfStrength *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


