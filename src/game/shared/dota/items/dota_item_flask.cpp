// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_flask.cpp:30
class CDOTA_Item_Flask : public CDOTA_Item {
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
	CDOTA_Item_Flask(CDOTA_Item_Flask &);
	CDOTA_Item_Flask(CDOTA_Item_Flask &);
	CDOTA_Item_Flask();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnSpellStart();
	virtual bool CausesAutoattack();
	virtual ~CDOTA_Item_Flask();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[266] OnSpellStart
	// vtable[222] CausesAutoattack
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_flask.cpp:84
class CDOTA_Modifier_FlaskHealing : public CDOTA_Buff {
public:

private:

	int total_health;  // +0xba8
	float m_fHealingDone;  // +0xbac
	CDOTA_Modifier_FlaskHealing();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_FlaskHealing();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[56] OnIntervalThink
	// vtable[32] GetTexture
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Flask::~CDOTA_Item_Flask  (line 30, @0x0000000002da1c70, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Flask::~CDOTA_Item_Flask(CDOTA_Item_Flask *const this)
{
  this->_vptr_IHandleEntity = &off_46E2390;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Flask::~CDOTA_Item_Flask  (line 30, @0x0000000002da1c90, libserver.so)  // inlines: ~CDOTA_Item_Flask
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Flask::~CDOTA_Item_Flask(CDOTA_Item_Flask *const this)
{
  this->_vptr_IHandleEntity = &off_46E2390;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Flask::Schema_DynamicBinding  (line 32, @0x0000000002d9ee40, libserver.so)
// globals: CDOTA_Item_Flask::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Flask::Schema_DynamicBinding(const CDOTA_Item_Flask *const this)
{
  return CDOTA_Item_Flask::s_pSchemaBinding;
}


// CDOTA_Item_Flask::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000002d9ee50, libserver.so)
// globals: CDOTA_Item_Flask::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Flask::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Flask::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Flask::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Flask::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000002d9ee60, libserver.so)  // inlines: Destruct<CDOTA_Item_Flask>
void __fastcall CDOTA_Item_Flask::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Flask::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Flask::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000002d9ee80, libserver.so)
void __fastcall CDOTA_Item_Flask::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Flask::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Flask::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002d9eea0, libserver.so)
bool __fastcall CDOTA_Item_Flask::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Flask::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Flask::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000002d9eeb0, libserver.so)
// globals: CDOTA_Item_Flask::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Flask::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Flask::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Flask::s_pSchemaBinding;
}


// CDOTA_Item_Flask::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002da05f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Flask::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Flask::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Flask::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000002da15b0, libserver.so)  // inlines: CDOTA_Item_Flask, Construct<CDOTA_Item_Flask>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Flask::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Flask::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46E2390;
  }
  return p;
}


// CDOTA_Item_Flask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002da3bd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Flask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Flask::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Flask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002da3bf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Flask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Flask::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Flask::GetEntityClassInternal  (line 32, @0x0000000002da7a40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_flask", "CDOTA_Item_Flask"
// globals: `guard variable for'CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass, CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass, __dso_handle, CDOTA_Item_Flask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Flask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_FlaskClassInfo, CDOTA_Item_Flask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_FlaskClassInfo
CEntityClass *__cdecl CDOTA_Item_Flask::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass);
    CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass._vptr_CEntityClass = off_46E2310;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass);
    __cxa_atexit(
      CDOTA_Item_Flask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_FlaskClass != 0 )
    return &CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass;
  if ( `guard variable for'CDOTA_Item_Flask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_FlaskClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Flask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_FlaskClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Flask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_FlaskClassInfo,
      "CDOTA_Item_Flask",
      "item_flask",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Flask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_FlaskClassInfo);
  }
  CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass.m_pClassInfo = &CDOTA_Item_Flask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_FlaskClassInfo;
  CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass.m_pBaseClassInfo = CDOTA_Item_Flask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_FlaskClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_FlaskClass = &CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass;
  CDOTA_Item_Flask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_FlaskClassInfo.m_pClass = &CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass;
  CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_FlaskClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Flask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_FlaskClass;
}


// CDOTA_Item_Flask::CausesAutoattack  (line 38, @0x0000000002d9eec0, libserver.so)
bool __fastcall CDOTA_Item_Flask::CausesAutoattack(CDOTA_Item_Flask *const this)
{
  return 0;
}


// CDOTA_Item_Flask::Precache  (line 47, @0x0000000002d94cd0, libserver.so)
// calls: CDOTA_Item::Precache, PrecacheParticleSystem
// strings: "particles/items_fx/healing_flask.vpcf"
void __fastcall CDOTA_Item_Flask::Precache(CDOTA_Item_Flask *const this, const CEntityPrecacheContext *pContext)
{
  CDOTA_Item::Precache(this, pContext);
  PrecacheParticleSystem("particles/items_fx/healing_flask.vpcf", pContext);
}


// CDOTA_Item_Flask::OnSpellStart  (line 55, @0x0000000002d9bb60, libserver.so)  // inlines: QueueConcept, ToDOTABaseNPC
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::SetInt, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CDOTA_Speech::QueueConcept, CDOTA_Item::SpendCharge, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_flask_healing", "DOTA_Item.HealingSalve.Activate"
void __fastcall CDOTA_Item_Flask::OnSpellStart(CDOTA_Item_Flask *const this)
{
  int LevelSpecialValue; // eax
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_flask_healing");
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "buff_duration", -1, 0);
  KeyValues::SetInt(&kv, "duration", LevelSpecialValue);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_flask_healing", &kv, 0);
    DOTA_EmitSound(8, "DOTA_Item.HealingSalve.Activate", v4);
    if ( v4 != CDOTABaseAbility::GetCaster(this) )
    {
      m_pSpeech = v4->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 26, 0.25, 0, 0, 1, 0, 0, 0);
    }
  }
  CDOTA_Item::SpendCharge(this);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_FlaskHealing::~CDOTA_Modifier_FlaskHealing  (line 84, @0x0000000002da1250, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_FlaskHealing::~CDOTA_Modifier_FlaskHealing(CDOTA_Modifier_FlaskHealing *const this)
{
  this->_vptr_CDOTA_Buff = &off_46E2F50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FlaskHealing::~CDOTA_Modifier_FlaskHealing  (line 84, @0x0000000002da1270, libserver.so)  // inlines: ~CDOTA_Modifier_FlaskHealing
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_FlaskHealing::~CDOTA_Modifier_FlaskHealing(CDOTA_Modifier_FlaskHealing *const this)
{
  this->_vptr_CDOTA_Buff = &off_46E2F50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FlaskHealing::IsPurgable  (line 93, @0x0000000002d9eed0, libserver.so)
bool __fastcall CDOTA_Modifier_FlaskHealing::IsPurgable(CDOTA_Modifier_FlaskHealing *const this)
{
  return 0;
}


// CDOTA_Modifier_FlaskHealing::DeclareFunctions  (line 111, @0x0000000002d94030, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_FlaskHealing::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_FlaskHealing::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_FlaskHealing::DeclareFunctions(CDOTA_Modifier_FlaskHealing *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_FlaskHealing::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_FlaskHealing::OnTakeDamage;
}


// CDOTA_Modifier_FlaskHealing::OnCreated  (line 119, @0x0000000002d9c5e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "total_health"
void __fastcall CDOTA_Modifier_FlaskHealing::OnCreated(CDOTA_Modifier_FlaskHealing *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->total_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "total_health", -1, 0);
  else
    this->total_health = 0;
  this->m_fHealingDone = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v4);
}


// CDOTA_Modifier_FlaskHealing::OnDestroy  (line 134, @0x0000000002d94d80, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_CombatLog::AddHealthEvent
void __fastcall CDOTA_Modifier_FlaskHealing::OnDestroy(CDOTA_Modifier_FlaskHealing *const this)
{
  int v2; // r14d
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *Parent; // rax

  v2 = (this->m_fHealingDone + 0.5);
  Ability = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_CombatLog::AddHealthEvent(&g_DOTACombatLog, 1, Parent, Caster, Ability, v2, 0, 0, 0);
}


// CDOTA_Modifier_FlaskHealing::OnIntervalThink  (line 143, @0x0000000002d94e90, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
void __fastcall CDOTA_Modifier_FlaskHealing::OnIntervalThink(CDOTA_Modifier_FlaskHealing *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  int Health; // r12d
  CDOTA_BaseNPC *v4; // rax
  __m128i v5; // xmm2

  Parent = CDOTA_Buff::GetParent(this);
  Health = CBaseEntity::GetHealth(Parent);
  v4 = CDOTA_Buff::GetParent(this);
  if ( Health != (*(v4->_vptr_IHandleEntity + 156))(v4) )
  {
    *v5.m128i_i32 = this->total_health;
    this->m_fHealingDone = (0.1 * (COERCE_FLOAT(_mm_cvtsi128_si32(v5)) / (*(this->_vptr_CDOTA_Buff + 31))(this)))
                         + this->m_fHealingDone;
  }
}


// CDOTA_Modifier_FlaskHealing::GetModifierConstantHealthRegen  (line 155, @0x0000000002d94070, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_FlaskHealing::GetModifierConstantHealthRegen(
        CDOTA_Modifier_FlaskHealing *const this,
        const CModifierParams *const params)
{
  float v2; // xmm0_4
  __int64 v3; // xmm1_8
  unsigned int v5; // [rsp+Ch] [rbp-4h]
  ModifierVariant_t result; // 0:rax.16

  *&v5 = this->total_health;
  v2 = (*(this->_vptr_CDOTA_Buff + 31))(this, params);
  v3 = v5;
  result.m_szVal = 0;
  *&v3 = *&v5 / v2;
  *&result.m_eType = (v3 << 32) | 1;
  return result;
}


// CDOTA_Modifier_FlaskHealing::OnTakeDamage  (line 162, @0x0000000002d979e0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_FlaskHealing::OnTakeDamage(
        CDOTA_Modifier_FlaskHealing *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *v11; // r13
  int m_Id; // eax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[params->hattacker.m_Index & 0x1FF];
      if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
      {
        v11 = v9->m_pInstance;
        if ( v9->m_pInstance != 0
          && BYTE3(v11[7]._vptr_IHandleEntity) != 0
          && m_pInstance != 0
          && params->fDamage > 0.0
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && (v11[61].m_hPrivateScope.m_hScope != 0
           || ((m_Id = v11[43].m_iszPrivateVScripts.u.m_Id) & 1) != 0
           || (m_Id & 0x800) != 0) )
        {
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_FlaskHealing::GetTexture  (line 182, @0x0000000002d940b0, libserver.so)
// strings: "item_flask"
const char *__fastcall CDOTA_Modifier_FlaskHealing::GetTexture(CDOTA_Modifier_FlaskHealing *const this)
{
  return "item_flask";
}


