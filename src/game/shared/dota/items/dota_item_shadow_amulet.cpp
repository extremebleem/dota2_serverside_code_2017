// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_shadow_amulet.cpp:29
class CDOTA_Item_ShadowAmulet : public CDOTA_Item {
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
	CDOTA_Item_ShadowAmulet(CDOTA_Item_ShadowAmulet &);
	CDOTA_Item_ShadowAmulet(CDOTA_Item_ShadowAmulet &);
	CDOTA_Item_ShadowAmulet();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Item_ShadowAmulet();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// vtable[248] OnSaveState
	// vtable[249] OnLoadState
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_shadow_amulet.cpp:104
class CDOTA_Modifier_Item_ShadowAmulet : public CDOTA_Buff_Item {
public:

private:

	int bonus_attack_speed;  // +0xba8
	CDOTA_Modifier_Item_ShadowAmulet();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Item_ShadowAmulet();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_shadow_amulet.cpp:145
class CDOTA_Modifier_ShadowAmulet_Fade : public CDOTA_Buff {
public:

private:

	float fade_time;  // +0xba8
	float m_flFadeTime;  // +0xbac
	bool m_bFaded;  // +0xbb0
	CDOTA_Modifier_ShadowAmulet_Fade();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual bool IsInvisible();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnUnitMoved(const CModifierParams &);
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	ModifierVariant_t OnBreakInvisibility(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_ShadowAmulet_Fade();

	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[89] IsInvisible
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[67] GetEffectName
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_ShadowAmulet::~CDOTA_Item_ShadowAmulet  (line 29, @0x0000000002df3910, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_ShadowAmulet::~CDOTA_Item_ShadowAmulet(CDOTA_Item_ShadowAmulet *const this)
{
  this->_vptr_IHandleEntity = &off_4761E70;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_ShadowAmulet::~CDOTA_Item_ShadowAmulet  (line 29, @0x0000000002df3930, libserver.so)  // inlines: ~CDOTA_Item_ShadowAmulet
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_ShadowAmulet::~CDOTA_Item_ShadowAmulet(CDOTA_Item_ShadowAmulet *const this)
{
  this->_vptr_IHandleEntity = &off_4761E70;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_ShadowAmulet::Schema_DynamicBinding  (line 31, @0x0000000002defa00, libserver.so)
// globals: CDOTA_Item_ShadowAmulet::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_ShadowAmulet::Schema_DynamicBinding(
        const CDOTA_Item_ShadowAmulet *const this)
{
  return CDOTA_Item_ShadowAmulet::s_pSchemaBinding;
}


// CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 31, @0x0000000002defa10, libserver.so)
// globals: CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::DestructInstance  (line 31, @0x0000000002defa20, libserver.so)  // inlines: Destruct<CDOTA_Item_ShadowAmulet>
void __fastcall CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::FreeInstance  (line 31, @0x0000000002defa40, libserver.so)
void __fastcall CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::CanAllocate  (line 31, @0x0000000002defa60, libserver.so)
bool __fastcall CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 31, @0x0000000002defa70, libserver.so)
// globals: CDOTA_Item_ShadowAmulet::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_ShadowAmulet::s_pSchemaBinding;
}


// CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::AllocateInstance  (line 31, @0x0000000002df1300, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::ConstructInstance  (line 31, @0x0000000002df2420, libserver.so)  // inlines: CDOTA_Item_ShadowAmulet, Construct<CDOTA_Item_ShadowAmulet>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4761E70;
  }
  return p;
}


// CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002df5b20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002df5b40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_ShadowAmulet::GetEntityClassInternal  (line 31, @0x0000000002dfdc20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "CDOTA_Item_ShadowAmulet"
// globals: `guard variable for'CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass, CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass, __dso_handle, CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_ShadowAmulet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ShadowAmuletClassInfo, CDOTA_Item_ShadowAmulet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ShadowAmuletClassInfo
CEntityClass *__cdecl CDOTA_Item_ShadowAmulet::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass);
    CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass._vptr_CEntityClass = off_4761DF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass);
    __cxa_atexit(
      CDOTA_Item_ShadowAmulet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_ShadowAmuletClass != 0 )
    return &CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass;
  if ( `guard variable for'CDOTA_Item_ShadowAmulet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ShadowAmuletClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_ShadowAmulet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ShadowAmuletClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_ShadowAmulet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ShadowAmuletClassInfo,
      "CDOTA_Item_ShadowAmulet",
      "item_shadow_amulet",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_ShadowAmulet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ShadowAmuletClassInfo);
  }
  CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass.m_pClassInfo = &CDOTA_Item_ShadowAmulet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ShadowAmuletClassInfo;
  CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass.m_pBaseClassInfo = CDOTA_Item_ShadowAmulet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ShadowAmuletClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_ShadowAmuletClass = &CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass;
  CDOTA_Item_ShadowAmulet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ShadowAmuletClassInfo.m_pClass = &CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass;
  CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_ShadowAmuletClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_ShadowAmulet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ShadowAmuletClass;
}


// CDOTA_Item_ShadowAmulet::GetIntrinsicModifierName  (line 36, @0x0000000002defa80, libserver.so)
// strings: "modifier_item_shadow_amulet"
const char *__fastcall CDOTA_Item_ShadowAmulet::GetIntrinsicModifierName(CDOTA_Item_ShadowAmulet *const this)
{
  return "modifier_item_shadow_amulet";
}


// CDOTA_Item_ShadowAmulet::OnSpellStart  (line 46, @0x0000000002de52a0, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, CDOTABaseAbility::EndCooldown, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_shadow_amulet_fade", "DOTA_Item.ShadowAmulet.Activate"
void __fastcall CDOTA_Item_ShadowAmulet::OnSpellStart(CDOTA_Item_ShadowAmulet *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    KeyValues::KeyValues(&kv, "modifier_item_shadow_amulet_fade");
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_item_shadow_amulet_fade", &kv, 0);
    DOTA_EmitSound(10, "DOTA_Item.ShadowAmulet.Activate", v3);
    if ( v3 == CDOTABaseAbility::GetCaster(this) )
      CDOTABaseAbility::EndCooldown(this);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Item_ShadowAmulet::OnSaveState  (line 68, @0x0000000002de4fd0, libserver.so)  // inlines: SetBool
// calls: CDOTA_Item::OnSaveState, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, KeyValues::SetInt
// strings: "modifier_item_shadow_amulet_fade", "faded"
bool __fastcall CDOTA_Item_ShadowAmulet::OnSaveState(CDOTA_Item_ShadowAmulet *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTA_Item::OnSaveState(this, pKV);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_item_shadow_amulet_fade", 0) != 0 )
    KeyValues::SetInt(pKV, "faded", 1);
  return 1;
}


// CDOTA_Item_ShadowAmulet::OnLoadState  (line 84, @0x0000000002de4e80, libserver.so)  // inlines: GetBool
// calls: CDOTA_Item::OnLoadState, KeyValues::GetInt, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "faded", "modifier_item_shadow_amulet_fade"
bool __fastcall CDOTA_Item_ShadowAmulet::OnLoadState(CDOTA_Item_ShadowAmulet *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTA_Item::OnLoadState(this, pKV);
  if ( KeyValues::GetInt(pKV, "faded", 0) != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_item_shadow_amulet_fade");
    Caster = CDOTABaseAbility::GetCaster(this);
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v6, Caster, this, "modifier_item_shadow_amulet_fade", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  return 1;
}


// CDOTA_Modifier_Item_ShadowAmulet::~CDOTA_Modifier_Item_ShadowAmulet  (line 104, @0x0000000002df1600, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_ShadowAmulet::~CDOTA_Modifier_Item_ShadowAmulet(
        CDOTA_Modifier_Item_ShadowAmulet *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_ShadowAmulet::~CDOTA_Modifier_Item_ShadowAmulet  (line 104, @0x0000000002df1620, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_ShadowAmulet
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_ShadowAmulet::~CDOTA_Modifier_Item_ShadowAmulet(
        CDOTA_Modifier_Item_ShadowAmulet *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_ShadowAmulet::IsHidden  (line 114, @0x0000000002defa90, libserver.so)
bool __fastcall CDOTA_Modifier_Item_ShadowAmulet::IsHidden(CDOTA_Modifier_Item_ShadowAmulet *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_ShadowAmulet::DeclareFunctions  (line 123, @0x0000000002de44a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_ShadowAmulet::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_ShadowAmulet::DeclareFunctions(CDOTA_Modifier_Item_ShadowAmulet *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_ShadowAmulet::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Item_ShadowAmulet::GetModifierAttackSpeedBonus_Constant  (line 128, @0x0000000002de44c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_ShadowAmulet::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_ShadowAmulet *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_ShadowAmulet::OnCreated  (line 133, @0x0000000002decd70, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
void __fastcall CDOTA_Modifier_Item_ShadowAmulet::OnCreated(
        CDOTA_Modifier_Item_ShadowAmulet *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_attack_speed, "bonus_attack_speed");
}


// CDOTA_Modifier_ShadowAmulet_Fade::~CDOTA_Modifier_ShadowAmulet_Fade  (line 145, @0x0000000002df1c90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ShadowAmulet_Fade::~CDOTA_Modifier_ShadowAmulet_Fade(
        CDOTA_Modifier_ShadowAmulet_Fade *const this)
{
  this->_vptr_CDOTA_Buff = &off_4762D50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ShadowAmulet_Fade::~CDOTA_Modifier_ShadowAmulet_Fade  (line 145, @0x0000000002df1cb0, libserver.so)  // inlines: ~CDOTA_Modifier_ShadowAmulet_Fade
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ShadowAmulet_Fade::~CDOTA_Modifier_ShadowAmulet_Fade(
        CDOTA_Modifier_ShadowAmulet_Fade *const this)
{
  this->_vptr_CDOTA_Buff = &off_4762D50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ShadowAmulet_Fade::IsPurgable  (line 152, @0x0000000002defaa0, libserver.so)
bool __fastcall CDOTA_Modifier_ShadowAmulet_Fade::IsPurgable(CDOTA_Modifier_ShadowAmulet_Fade *const this)
{
  return 0;
}


// CDOTA_Modifier_ShadowAmulet_Fade::GetEffectName  (line 164, @0x0000000002defab0, libserver.so)
// strings: "particles/items2_fx/shadow_amulet.vpcf"
const char *__fastcall CDOTA_Modifier_ShadowAmulet_Fade::GetEffectName(CDOTA_Modifier_ShadowAmulet_Fade *const this)
{
  return "particles/items2_fx/shadow_amulet.vpcf";
}


// CDOTA_Modifier_ShadowAmulet_Fade::CheckState  (line 174, @0x0000000002de5700, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_ShadowAmulet_Fade::CheckState(
        CDOTA_Modifier_ShadowAmulet_Fade *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  if ( this->m_bFaded )
  {
    m_nDisabledStateMask = buffState->m_nDisabledStateMask;
    buffState->m_nEnabledStateMask |= 0x2000080uLL;
    buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFDFFFF7FLL;
  }
}


// CDOTA_Modifier_ShadowAmulet_Fade::DeclareFunctions  (line 185, @0x0000000002de44e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ShadowAmulet_Fade::OnAttack(CModifierParams const&), CDOTA_Modifier_ShadowAmulet_Fade::OnUnitMoved(CModifierParams const&), CDOTA_Modifier_ShadowAmulet_Fade::OnAbilityExecuted(CModifierParams const&), CDOTA_Modifier_ShadowAmulet_Fade::OnBreakInvisibility(CModifierParams const&), CDOTA_Modifier_ShadowAmulet_Fade::GetModifierInvisibilityLevel(CModifierParams const&)
void __fastcall CDOTA_Modifier_ShadowAmulet_Fade::DeclareFunctions(CDOTA_Modifier_ShadowAmulet_Fade *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_ShadowAmulet_Fade::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[126].__delta = 0;
  this->m_Functions[126].__pfn = CDOTA_Modifier_ShadowAmulet_Fade::OnUnitMoved;
  this->m_Functions[128].__pfn = CDOTA_Modifier_ShadowAmulet_Fade::OnAbilityExecuted;
  this->m_Functions[130].__pfn = CDOTA_Modifier_ShadowAmulet_Fade::OnBreakInvisibility;
  this->m_Functions[128].__delta = 0;
  this->m_Functions[130].__delta = 0;
  this->m_Functions[9].__pfn = CDOTA_Modifier_ShadowAmulet_Fade::GetModifierInvisibilityLevel;
  this->m_Functions[9].__delta = 0;
}


// CDOTA_Modifier_ShadowAmulet_Fade::IsInvisible  (line 198, @0x0000000002de56f0, libserver.so)
bool __fastcall CDOTA_Modifier_ShadowAmulet_Fade::IsInvisible(CDOTA_Modifier_ShadowAmulet_Fade *const this)
{
  return this->m_bFaded;
}


// CDOTA_Modifier_ShadowAmulet_Fade::OnCreated  (line 205, @0x0000000002deda80, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, GetGameTime, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_ShadowAmulet_Fade::OnCreated(
        CDOTA_Modifier_ShadowAmulet_Fade *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "fade_time", -1, 0);
    this->fade_time = LevelSpecialValue;
  }
  else
  {
    LevelSpecialValue = 0.0;
    this->fade_time = 0.0;
  }
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v4);
  v6 = 0.0;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  v7 = v6 + this->fade_time;
  this->m_bFaded = 0;
  this->m_flFadeTime = v7;
}


// CDOTA_Modifier_ShadowAmulet_Fade::OnIntervalThink  (line 221, @0x0000000002de5730, libserver.so)  // inlines: SetHolding
// calls: CDOTA_Buff::GetParent
void __fastcall CDOTA_Modifier_ShadowAmulet_Fade::OnIntervalThink(CDOTA_Modifier_ShadowAmulet_Fade *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( !this->m_bFaded )
  {
    CDOTA_Buff::GetParent(this)->m_bHold = 1;
    Parent = CDOTA_Buff::GetParent(this);
    (*(Parent->_vptr_INextBotEventResponder + 57))(&Parent->INextBot, 0);
    this->m_bFaded = 1;
  }
}


// CDOTA_Modifier_ShadowAmulet_Fade::OnAttack  (line 235, @0x0000000002de75d0, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetHolding, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowAmulet_Fade::OnAttack(
        CDOTA_Modifier_ShadowAmulet_Fade *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  ModifierVariant_t result; // 0:rax.16

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->hattacker.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  if ( this->m_bFaded )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    return 1uLL;
  }
  result = CDOTA_Buff::GetParent(this);
  *(*&result.m_eType + 2669LL) = 1;
  *&result.m_eType = 1;
  return result;
}


// CDOTA_Modifier_ShadowAmulet_Fade::OnUnitMoved  (line 256, @0x0000000002de7bb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "modifier_monkey_king_bounce_perch"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowAmulet_Fade::OnUnitMoved(
        CDOTA_Modifier_ShadowAmulet_Fade *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // edx
  unsigned __int64 v10; // rax
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rax
  CDOTA_BaseNPC *v13; // rdi

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && this->m_bFaded )
        {
          v9 = params->hunit.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = params->hunit.m_Index & 0x7FFF,
                (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9)]) == 0)
            || (v12 = &v11[v10 & 0x1FF]) == 0
            || v9 != v12->m_EHandle.m_Index
            || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
            || !v13->m_bIsDOTANPC )
          {
            v13 = 0;
          }
          if ( CDOTA_BaseNPC::FindModifierByName(v13, "modifier_monkey_king_bounce_perch", 0) == 0 )
            CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_ShadowAmulet_Fade::OnAbilityExecuted  (line 270, @0x0000000002de7690, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowAmulet_Fade::OnAbilityExecuted(
        CDOTA_Modifier_ShadowAmulet_Fade *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && this->m_bFaded
          && !params->bIgnoreInvis )
        {
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_ShadowAmulet_Fade::GetModifierInvisibilityLevel  (line 287, @0x0000000002de6e40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowAmulet_Fade::GetModifierInvisibilityLevel(
        CDOTA_Modifier_ShadowAmulet_Fade *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = (&loc_0 + 1);
  *&result.m_eType = 0x3F80000000000001LL;
  if ( !this->m_bFaded )
    *&result.m_eType = 1;
  LOBYTE(result.m_szVal) = 0;
  return result;
}


// CDOTA_Modifier_ShadowAmulet_Fade::OnBreakInvisibility  (line 312, @0x0000000002de7410, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowAmulet_Fade::OnBreakInvisibility(
        CDOTA_Modifier_ShadowAmulet_Fade *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->hunit.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


