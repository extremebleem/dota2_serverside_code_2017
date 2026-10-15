// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_quarterstaff.cpp:26
class CDOTA_Item_Quarterstaff : public CDOTA_Item {
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
	CDOTA_Item_Quarterstaff(CDOTA_Item_Quarterstaff &);
	CDOTA_Item_Quarterstaff(CDOTA_Item_Quarterstaff &);
	CDOTA_Item_Quarterstaff();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Quarterstaff();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_quarterstaff.cpp:38
class CDOTA_Modifier_Item_Quarterstaff : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_speed;  // +0xbac
	CDOTA_Modifier_Item_Quarterstaff();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Quarterstaff();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Quarterstaff::~CDOTA_Item_Quarterstaff  (line 26, @0x0000000002dd8410, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Quarterstaff::~CDOTA_Item_Quarterstaff(CDOTA_Item_Quarterstaff *const this)
{
  this->_vptr_IHandleEntity = &off_473F7B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Quarterstaff::~CDOTA_Item_Quarterstaff  (line 26, @0x0000000002dd8430, libserver.so)  // inlines: ~CDOTA_Item_Quarterstaff
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Quarterstaff::~CDOTA_Item_Quarterstaff(CDOTA_Item_Quarterstaff *const this)
{
  this->_vptr_IHandleEntity = &off_473F7B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Quarterstaff::Schema_DynamicBinding  (line 28, @0x0000000002dd4bd0, libserver.so)
// globals: CDOTA_Item_Quarterstaff::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Quarterstaff::Schema_DynamicBinding(
        const CDOTA_Item_Quarterstaff *const this)
{
  return CDOTA_Item_Quarterstaff::s_pSchemaBinding;
}


// CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002dd4be0, libserver.so)
// globals: CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002dd4bf0, libserver.so)  // inlines: Destruct<CDOTA_Item_Quarterstaff>
void __fastcall CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002dd4c10, libserver.so)
void __fastcall CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002dd4c30, libserver.so)
bool __fastcall CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002dd4c40, libserver.so)
// globals: CDOTA_Item_Quarterstaff::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Quarterstaff::s_pSchemaBinding;
}


// CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dd6270, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dd72b0, libserver.so)  // inlines: CDOTA_Item_Quarterstaff, Construct<CDOTA_Item_Quarterstaff>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_473F7B0;
  }
  return p;
}


// CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dda340, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dda360, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Quarterstaff::GetEntityClassInternal  (line 28, @0x0000000002de34d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "CDOTA_Item_Quarterstaff"
// globals: `guard variable for'CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass, CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass, __dso_handle, CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Quarterstaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuarterstaffClassInfo, CDOTA_Item_Quarterstaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuarterstaffClassInfo
CEntityClass *__cdecl CDOTA_Item_Quarterstaff::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass);
    CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass._vptr_CEntityClass = off_473F730;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass);
    __cxa_atexit(
      CDOTA_Item_Quarterstaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_QuarterstaffClass != 0 )
    return &CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass;
  if ( `guard variable for'CDOTA_Item_Quarterstaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuarterstaffClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Quarterstaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuarterstaffClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Quarterstaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuarterstaffClassInfo,
      "CDOTA_Item_Quarterstaff",
      "item_quarterstaff",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Quarterstaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuarterstaffClassInfo);
  }
  CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass.m_pClassInfo = &CDOTA_Item_Quarterstaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuarterstaffClassInfo;
  CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass.m_pBaseClassInfo = CDOTA_Item_Quarterstaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuarterstaffClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_QuarterstaffClass = &CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass;
  CDOTA_Item_Quarterstaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_QuarterstaffClassInfo.m_pClass = &CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass;
  CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_QuarterstaffClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Quarterstaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_QuarterstaffClass;
}


// CDOTA_Item_Quarterstaff::GetIntrinsicModifierName  (line 30, @0x0000000002dd4c50, libserver.so)
// strings: "modifier_item_quarterstaff"
const char *__fastcall CDOTA_Item_Quarterstaff::GetIntrinsicModifierName(CDOTA_Item_Quarterstaff *const this)
{
  return "modifier_item_quarterstaff";
}


// CDOTA_Modifier_Item_Quarterstaff::~CDOTA_Modifier_Item_Quarterstaff  (line 38, @0x0000000002dd6340, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Quarterstaff::~CDOTA_Modifier_Item_Quarterstaff(
        CDOTA_Modifier_Item_Quarterstaff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Quarterstaff::~CDOTA_Modifier_Item_Quarterstaff  (line 38, @0x0000000002dd6360, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Quarterstaff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Quarterstaff::~CDOTA_Modifier_Item_Quarterstaff(
        CDOTA_Modifier_Item_Quarterstaff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Quarterstaff::DeclareFunctions  (line 55, @0x0000000002dc7830, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Quarterstaff::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Quarterstaff::GetModifierAttackSpeedBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Quarterstaff::DeclareFunctions(CDOTA_Modifier_Item_Quarterstaff *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Quarterstaff::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Quarterstaff::GetModifierAttackSpeedBonus;
}


// CDOTA_Modifier_Item_Quarterstaff::GetModifierPreAttack_BonusDamage  (line 61, @0x0000000002dc7870, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Quarterstaff::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Quarterstaff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Quarterstaff::GetModifierAttackSpeedBonus  (line 66, @0x0000000002dc7890, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Quarterstaff::GetModifierAttackSpeedBonus(
        CDOTA_Modifier_Item_Quarterstaff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Quarterstaff::OnCreated  (line 71, @0x0000000002dd0b30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_speed"
void __fastcall CDOTA_Modifier_Item_Quarterstaff::OnCreated(
        CDOTA_Modifier_Item_Quarterstaff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_speed", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_speed = 0;
}


