// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_ghost_scepter.cpp:26
class CDOTA_Item_GhostScepter : public CDOTA_Item {
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
	CDOTA_Item_GhostScepter(CDOTA_Item_GhostScepter &);
	CDOTA_Item_GhostScepter(CDOTA_Item_GhostScepter &);
	CDOTA_Item_GhostScepter();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_GhostScepter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ghost_scepter.cpp:57
class CDOTA_Modifier_Item_GhostScepter : public CDOTA_Buff_Item {
public:

private:

	int bonus_all_stats;  // +0xba8
	CDOTA_Modifier_Item_GhostScepter();
	ModifierVariant_t GetModifierBonusStats_All(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_GhostScepter();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_ghost_scepter.cpp:92
class CDOTA_Modifier_GhostScepter_Active : public CDOTA_Buff {
public:

private:

	int extra_spell_damage_percent;  // +0xba8
	CDOTA_Modifier_GhostScepter_Active();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	ModifierVariant_t GetModifierMagicalResistanceDecrepifyUnique(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	ModifierVariant_t OnStateChanged(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_GhostScepter_Active();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[5] CheckState
	// vtable[89] GetModifierInvisibilityLevel
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_GhostScepter::~CDOTA_Item_GhostScepter  (line 26, @0x0000000002da1e00, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_GhostScepter::~CDOTA_Item_GhostScepter(CDOTA_Item_GhostScepter *const this)
{
  this->_vptr_IHandleEntity = &off_46E75D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_GhostScepter::~CDOTA_Item_GhostScepter  (line 26, @0x0000000002da1e20, libserver.so)  // inlines: ~CDOTA_Item_GhostScepter
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_GhostScepter::~CDOTA_Item_GhostScepter(CDOTA_Item_GhostScepter *const this)
{
  this->_vptr_IHandleEntity = &off_46E75D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_GhostScepter::Schema_DynamicBinding  (line 28, @0x0000000002d9f1f0, libserver.so)
// globals: CDOTA_Item_GhostScepter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_GhostScepter::Schema_DynamicBinding(
        const CDOTA_Item_GhostScepter *const this)
{
  return CDOTA_Item_GhostScepter::s_pSchemaBinding;
}


// CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d9f200, libserver.so)
// globals: CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_GhostScepter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d9f210, libserver.so)  // inlines: Destruct<CDOTA_Item_GhostScepter>
void __fastcall CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_GhostScepter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d9f230, libserver.so)
void __fastcall CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_GhostScepter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d9f250, libserver.so)
bool __fastcall CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_GhostScepter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d9f260, libserver.so)
// globals: CDOTA_Item_GhostScepter::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_GhostScepter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_GhostScepter::s_pSchemaBinding;
}


// CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002da0730, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_GhostScepter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002da16a0, libserver.so)  // inlines: CDOTA_Item_GhostScepter, Construct<CDOTA_Item_GhostScepter>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_GhostScepter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46E75D0;
  }
  return p;
}


// CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3d60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_GhostScepter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3d80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_GhostScepter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_GhostScepter::GetEntityClassInternal  (line 28, @0x0000000002da8670, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_ghost", "CDOTA_Item_GhostScepter"
// globals: `guard variable for'CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass, CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass, __dso_handle, CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_GhostScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GhostScepterClassInfo, CDOTA_Item_GhostScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GhostScepterClassInfo
CEntityClass *__cdecl CDOTA_Item_GhostScepter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass);
    CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass._vptr_CEntityClass = off_46E7550;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass);
    __cxa_atexit(
      CDOTA_Item_GhostScepter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_GhostScepterClass != 0 )
    return &CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass;
  if ( `guard variable for'CDOTA_Item_GhostScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GhostScepterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_GhostScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GhostScepterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_GhostScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GhostScepterClassInfo,
      "CDOTA_Item_GhostScepter",
      "item_ghost",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_GhostScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GhostScepterClassInfo);
  }
  CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass.m_pClassInfo = &CDOTA_Item_GhostScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GhostScepterClassInfo;
  CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass.m_pBaseClassInfo = CDOTA_Item_GhostScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GhostScepterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_GhostScepterClass = &CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass;
  CDOTA_Item_GhostScepter::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GhostScepterClassInfo.m_pClass = &CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass;
  CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_GhostScepterClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_GhostScepter::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GhostScepterClass;
}


// CDOTA_Item_GhostScepter::GetIntrinsicModifierName  (line 30, @0x0000000002d9f270, libserver.so)
// strings: "modifier_item_ghost_scepter"
const char *__fastcall CDOTA_Item_GhostScepter::GetIntrinsicModifierName(CDOTA_Item_GhostScepter *const this)
{
  return "modifier_item_ghost_scepter";
}


// CDOTA_Item_GhostScepter::OnSpellStart  (line 37, @0x0000000002d9dd10, libserver.so)
// calls: CDOTABaseAbility::GetCaster, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_ghost_scepter", "extra_spell_damage_percent", "modifier_ghost_state", "DOTA_Item.GhostScepter.Activate"
void __fastcall CDOTA_Item_GhostScepter::OnSpellStart(CDOTA_Item_GhostScepter *const this)
{
  float v2; // xmm1_4
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  if ( (CDOTABaseAbility::GetCaster(this)->m_nUnitState64.m_Value & 0x200) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_item_ghost_scepter");
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::SetFloat(&kv, "duration", v2);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "extra_spell_damage_percent", -1, 0);
    KeyValues::SetInt(&kv, "extra_spell_damage_percent", LevelSpecialValue);
    Caster = CDOTABaseAbility::GetCaster(this);
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_ghost_state", &kv, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "DOTA_Item.GhostScepter.Activate", v6);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Item_GhostScepter::~CDOTA_Modifier_Item_GhostScepter  (line 57, @0x0000000002da0d80, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_GhostScepter::~CDOTA_Modifier_Item_GhostScepter(
        CDOTA_Modifier_Item_GhostScepter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_GhostScepter::~CDOTA_Modifier_Item_GhostScepter  (line 57, @0x0000000002da0da0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_GhostScepter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_GhostScepter::~CDOTA_Modifier_Item_GhostScepter(
        CDOTA_Modifier_Item_GhostScepter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_GhostScepter::OnCreated  (line 72, @0x0000000002d9c4b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_all_stats"
void __fastcall CDOTA_Modifier_Item_GhostScepter::OnCreated(
        CDOTA_Modifier_Item_GhostScepter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_all_stats", -1, 0);
  else
    this->bonus_all_stats = 0;
}


// CDOTA_Modifier_Item_GhostScepter::DeclareFunctions  (line 77, @0x0000000002d94200, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_GhostScepter::GetModifierBonusStats_All(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_GhostScepter::DeclareFunctions(CDOTA_Modifier_Item_GhostScepter *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_GhostScepter::GetModifierBonusStats_All;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_GhostScepter::GetModifierBonusStats_All;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_GhostScepter::GetModifierBonusStats_All;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_GhostScepter::GetModifierBonusStats_All  (line 84, @0x0000000002d94250, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_GhostScepter::GetModifierBonusStats_All(
        CDOTA_Modifier_Item_GhostScepter *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_GhostScepter_Active::~CDOTA_Modifier_GhostScepter_Active  (line 92, @0x0000000002da1190, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_GhostScepter_Active::~CDOTA_Modifier_GhostScepter_Active(
        CDOTA_Modifier_GhostScepter_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_46E84B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_GhostScepter_Active::~CDOTA_Modifier_GhostScepter_Active  (line 92, @0x0000000002da11b0, libserver.so)  // inlines: ~CDOTA_Modifier_GhostScepter_Active
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_GhostScepter_Active::~CDOTA_Modifier_GhostScepter_Active(
        CDOTA_Modifier_GhostScepter_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_46E84B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_GhostScepter_Active::GetEffectName  (line 105, @0x0000000002d9f280, libserver.so)
// strings: "particles/items_fx/ghost.vpcf"
const char *__fastcall CDOTA_Modifier_GhostScepter_Active::GetEffectName(
        CDOTA_Modifier_GhostScepter_Active *const this)
{
  return "particles/items_fx/ghost.vpcf";
}


// CDOTA_Modifier_GhostScepter_Active::GetStatusEffectName  (line 106, @0x0000000002d9f290, libserver.so)
// strings: "particles/status_fx/status_effect_ghost.vpcf"
const char *__fastcall CDOTA_Modifier_GhostScepter_Active::GetStatusEffectName(
        CDOTA_Modifier_GhostScepter_Active *const this)
{
  return "particles/status_fx/status_effect_ghost.vpcf";
}


// CDOTA_Modifier_GhostScepter_Active::StatusEffectPriority  (line 107, @0x0000000002d9f2a0, libserver.so)
int __fastcall CDOTA_Modifier_GhostScepter_Active::StatusEffectPriority(CDOTA_Modifier_GhostScepter_Active *const this)
{
  return 30;
}


// CDOTA_Modifier_GhostScepter_Active::OnCreated  (line 115, @0x0000000002d9c1b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "extra_spell_damage_percent"
void __fastcall CDOTA_Modifier_GhostScepter_Active::OnCreated(
        CDOTA_Modifier_GhostScepter_Active *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->extra_spell_damage_percent = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         Ability,
                                         "extra_spell_damage_percent",
                                         -1,
                                         0);
  else
    this->extra_spell_damage_percent = 0;
}


// CDOTA_Modifier_GhostScepter_Active::DeclareFunctions  (line 120, @0x0000000002d94270, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_GhostScepter_Active::GetModifierMagicalResistanceDecrepifyUnique(CModifierParams const&), CDOTA_Modifier_GhostScepter_Active::GetAbsoluteNoDamagePhysical(CModifierParams const&), CDOTA_Modifier_GhostScepter_Active::OnStateChanged(CModifierParams const&)
void __fastcall CDOTA_Modifier_GhostScepter_Active::DeclareFunctions(CDOTA_Modifier_GhostScepter_Active *const this)
{
  this->m_Functions[50].__pfn = CDOTA_Modifier_GhostScepter_Active::GetModifierMagicalResistanceDecrepifyUnique;
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
  this->m_Functions[103].__pfn = CDOTA_Modifier_GhostScepter_Active::GetAbsoluteNoDamagePhysical;
  this->m_Functions[50].__delta = 0;
  this->m_Functions[103].__delta = 0;
  this->m_Functions[135].__pfn = CDOTA_Modifier_GhostScepter_Active::OnStateChanged;
  this->m_Functions[135].__delta = 0;
}


// CDOTA_Modifier_GhostScepter_Active::GetModifierInvisibilityLevel  (line 128, @0x0000000002d96be0, libserver.so)  // inlines: RemapValClamped, clamp<float, float>, curtime
// calls: sinf
ModifierVariant_t __fastcall CDOTA_Modifier_GhostScepter_Active::GetModifierInvisibilityLevel(
        CDOTA_Modifier_GhostScepter_Active *const this,
        const CModifierParams *const params)
{
  CGlobalVars *v2; // rbx
  float v3; // xmm0_4
  __m128i v4; // xmm1
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  ModifierVariant_t result; // 0:rax.16

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, params);
    }
    v3 = (sinf(6.0 * v2->m_flCurrentTime) + 5.0) / 10.0;
    if ( v3 < 0.0 )
    {
      v4 = 0x3E800000u;
    }
    else
    {
      v4 = 0x3E99999Au;
      if ( v3 <= 1.0 )
      {
        v4 = 0x3D4CCCD0u;
        *v4.m128i_i32 = (0.050000012 * v3) + 0.25;
      }
    }
  }
  else
  {
    v4 = 0x3E8CCCCDu;
  }
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_GhostScepter_Active::GetModifierMagicalResistanceDecrepifyUnique  (line 136, @0x0000000002d942e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_GhostScepter_Active::GetModifierMagicalResistanceDecrepifyUnique(
        CDOTA_Modifier_GhostScepter_Active *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->extra_spell_damage_percent;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_GhostScepter_Active::GetAbsoluteNoDamagePhysical  (line 141, @0x0000000002d94300, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_GhostScepter_Active::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_GhostScepter_Active *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_GhostScepter_Active::CheckState  (line 146, @0x0000000002d94320, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_GhostScepter_Active::CheckState(
        CDOTA_Modifier_GhostScepter_Active *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 6uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFF9LL;
}


// CDOTA_Modifier_GhostScepter_Active::OnStateChanged  (line 154, @0x0000000002d96ee0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_GhostScepter_Active::OnStateChanged(
        CDOTA_Modifier_GhostScepter_Active *const this,
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
  if ( CDOTA_Buff::GetParent(this) == m_pInstance && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) != 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


