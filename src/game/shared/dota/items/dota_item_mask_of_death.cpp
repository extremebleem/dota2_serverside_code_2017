// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_mask_of_death.cpp:26
class CDOTA_Item_MaskOfDeath : public CDOTA_Item {
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
	CDOTA_Item_MaskOfDeath(CDOTA_Item_MaskOfDeath &);
	CDOTA_Item_MaskOfDeath(CDOTA_Item_MaskOfDeath &);
	CDOTA_Item_MaskOfDeath();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_MaskOfDeath();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_mask_of_death.cpp:39
class CDOTA_Orb_MaskOfDeath : public CDOTA_Orb {
public:

private:

	int lifesteal_percent;  // +0x18
	CDOTA_Orb_MaskOfDeath(CDOTA_Orb_MaskOfDeath &);
	CDOTA_Orb_MaskOfDeath(const CDOTA_Orb_MaskOfDeath &);
	CDOTA_Orb_MaskOfDeath(CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual const char * GetProjectileName();
	virtual int GetOrbLabel();
	virtual void OnOrbImpact(const CModifierParams &);
	virtual ~CDOTA_Orb_MaskOfDeath();

	// vtable[3] GetProjectileName
	// vtable[4] GetOrbLabel
	// vtable[8] OnOrbImpact
	// sizeof = 32
};

// src/game/shared/dota/items/dota_item_mask_of_death.cpp:82
class CDOTA_Modifier_Item_MaskOfDeath : public CDOTA_Buff_Item {
public:

private:

	int lifesteal_percent;  // +0xba8
	int bonus_damage;  // +0xbac
	CDOTA_Modifier_Item_MaskOfDeath();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual CDOTA_Orb * GetCustomOrb(CDOTA_AttackRecord *);
	virtual int GetOrbPriority(CDOTA_AttackRecord *);
	virtual int GetOrbLabel(CDOTA_AttackRecord *);
	virtual ~CDOTA_Modifier_Item_MaskOfDeath();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[49] GetCustomOrb
	// vtable[50] GetOrbPriority
	// vtable[51] GetOrbLabel
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_MaskOfDeath::~CDOTA_Item_MaskOfDeath  (line 26, @0x0000000002dbcc70, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_MaskOfDeath::~CDOTA_Item_MaskOfDeath(CDOTA_Item_MaskOfDeath *const this)
{
  this->_vptr_IHandleEntity = &off_4711C50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_MaskOfDeath::~CDOTA_Item_MaskOfDeath  (line 26, @0x0000000002dbcc90, libserver.so)  // inlines: ~CDOTA_Item_MaskOfDeath
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_MaskOfDeath::~CDOTA_Item_MaskOfDeath(CDOTA_Item_MaskOfDeath *const this)
{
  this->_vptr_IHandleEntity = &off_4711C50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_MaskOfDeath::Schema_DynamicBinding  (line 28, @0x0000000002db93d0, libserver.so)
// globals: CDOTA_Item_MaskOfDeath::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MaskOfDeath::Schema_DynamicBinding(
        const CDOTA_Item_MaskOfDeath *const this)
{
  return CDOTA_Item_MaskOfDeath::s_pSchemaBinding;
}


// CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002db93e0, libserver.so)
// globals: CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002db93f0, libserver.so)  // inlines: Destruct<CDOTA_Item_MaskOfDeath>
void __fastcall CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002db9410, libserver.so)
void __fastcall CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002db9430, libserver.so)
bool __fastcall CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002db9440, libserver.so)
// globals: CDOTA_Item_MaskOfDeath::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MaskOfDeath::s_pSchemaBinding;
}


// CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dba940, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dbbb80, libserver.so)  // inlines: CDOTA_Item_MaskOfDeath, Construct<CDOTA_Item_MaskOfDeath>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4711C50;
  }
  return p;
}


// CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbee70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbee90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_MaskOfDeath::GetEntityClassInternal  (line 28, @0x0000000002dc59d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_lifesteal", "CDOTA_Item_MaskOfDeath"
// globals: `guard variable for'CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass, CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass, __dso_handle, CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_MaskOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfDeathClassInfo, CDOTA_Item_MaskOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfDeathClassInfo
CEntityClass *__cdecl CDOTA_Item_MaskOfDeath::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass);
    CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass._vptr_CEntityClass = off_4711BD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass);
    __cxa_atexit(
      CDOTA_Item_MaskOfDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_MaskOfDeathClass != 0 )
    return &CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass;
  if ( `guard variable for'CDOTA_Item_MaskOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfDeathClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MaskOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfDeathClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_MaskOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfDeathClassInfo,
      "CDOTA_Item_MaskOfDeath",
      "item_lifesteal",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MaskOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfDeathClassInfo);
  }
  CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass.m_pClassInfo = &CDOTA_Item_MaskOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfDeathClassInfo;
  CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass.m_pBaseClassInfo = CDOTA_Item_MaskOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfDeathClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_MaskOfDeathClass = &CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass;
  CDOTA_Item_MaskOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfDeathClassInfo.m_pClass = &CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass;
  CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_MaskOfDeathClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_MaskOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfDeathClass;
}


// CDOTA_Item_MaskOfDeath::GetIntrinsicModifierName  (line 30, @0x0000000002db9450, libserver.so)
// strings: "modifier_item_mask_of_death"
const char *__fastcall CDOTA_Item_MaskOfDeath::GetIntrinsicModifierName(CDOTA_Item_MaskOfDeath *const this)
{
  return "modifier_item_mask_of_death";
}


// CDOTA_Orb_MaskOfDeath::~CDOTA_Orb_MaskOfDeath  (line 39, @0x0000000002db98b0, libserver.so)  // inlines: ~CDOTA_Orb
void __fastcall CDOTA_Orb_MaskOfDeath::~CDOTA_Orb_MaskOfDeath(CDOTA_Orb_MaskOfDeath *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
}


// CDOTA_Orb_MaskOfDeath::~CDOTA_Orb_MaskOfDeath  (line 39, @0x0000000002dba2e0, libserver.so)  // inlines: ~CDOTA_Orb, ~CDOTA_Orb_MaskOfDeath
// calls: operator delete
void __fastcall CDOTA_Orb_MaskOfDeath::~CDOTA_Orb_MaskOfDeath(CDOTA_Orb_MaskOfDeath *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
  operator delete(this);
}


// CDOTA_Orb_MaskOfDeath::GetProjectileName  (line 49, @0x0000000002db9460, libserver.so)
const char *__fastcall CDOTA_Orb_MaskOfDeath::GetProjectileName(CDOTA_Orb_MaskOfDeath *const this)
{
  return 0;
}


// CDOTA_Orb_MaskOfDeath::GetOrbLabel  (line 50, @0x0000000002db9470, libserver.so)
int __fastcall CDOTA_Orb_MaskOfDeath::GetOrbLabel(CDOTA_Orb_MaskOfDeath *const this)
{
  return 2;
}


// CDOTA_Orb_MaskOfDeath::OnOrbImpact  (line 52, @0x0000000002dc18d0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::Heal
// strings: "particles/generic_gameplay/generic_lifesteal.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Orb_MaskOfDeath::OnOrbImpact(
        CDOTA_Orb_MaskOfDeath *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const CBaseEntity *v11; // r14
  float Health; // xmm0_4
  uint32 v13; // eax
  int lifesteal_percent; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v17; // rax
  CBaseEntity *v18; // rax
  float flDamagea; // [rsp+Ch] [rbp-34h]
  float flDamage; // [rsp+Ch] [rbp-34h]

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v8 = params->htarget.m_Index;
  if ( v8 + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[params->htarget.m_Index & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
      {
        v11 = v10->m_pInstance;
        if ( v10->m_pInstance != 0 && v11->m_bIsDOTANPC && m_pInstance != 0 )
        {
          flDamagea = params->fDamage;
          if ( CBaseEntity::GetHealth(v10->m_pInstance) <= flDamagea )
            Health = CBaseEntity::GetHealth(v11);
          else
            Health = params->fDamage;
          v13 = v11[2].m_hEffectEntity.m_Value.m_Index;
          lifesteal_percent = this->lifesteal_percent;
          if ( (v13 & 0x10) == 0 && (v13 & 0x193) != 0 && m_pInstance->m_iTeamNum.m_Value != v11->m_iTeamNum.m_Value )
          {
            flDamage = Health;
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/generic_gameplay/generic_lifesteal.vpcf",
                         1,
                         m_pInstance,
                         0,
                         0);
            v17 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v17, Particle);
            if ( LOBYTE(v11[4].m_pfnMoveDone.__delta) == 0 && !m_pInstance->m_bIsIllusion.m_Value )
            {
              v18 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
              CDOTA_BaseNPC::Heal(m_pInstance, ((lifesteal_percent * flDamage) / 100.0), v18, 1, 1);
            }
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Item_MaskOfDeath::~CDOTA_Modifier_Item_MaskOfDeath  (line 82, @0x0000000002dbac90, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_MaskOfDeath::~CDOTA_Modifier_Item_MaskOfDeath(
        CDOTA_Modifier_Item_MaskOfDeath *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_MaskOfDeath::~CDOTA_Modifier_Item_MaskOfDeath  (line 82, @0x0000000002dbacb0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_MaskOfDeath
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_MaskOfDeath::~CDOTA_Modifier_Item_MaskOfDeath(
        CDOTA_Modifier_Item_MaskOfDeath *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_MaskOfDeath::GetOrbPriority  (line 93, @0x0000000002db9480, libserver.so)
int __fastcall CDOTA_Modifier_Item_MaskOfDeath::GetOrbPriority(
        CDOTA_Modifier_Item_MaskOfDeath *const this,
        CDOTA_AttackRecord *pRecord)
{
  return 2;
}


// CDOTA_Modifier_Item_MaskOfDeath::GetOrbLabel  (line 95, @0x0000000002db9490, libserver.so)
int __fastcall CDOTA_Modifier_Item_MaskOfDeath::GetOrbLabel(
        CDOTA_Modifier_Item_MaskOfDeath *const this,
        CDOTA_AttackRecord *pRecord)
{
  return 2;
}


// CDOTA_Modifier_Item_MaskOfDeath::OnCreated  (line 106, @0x0000000002db4920, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_MaskOfDeath::OnCreated(CDOTA_Modifier_Item_MaskOfDeath *const this, KeyValues *pKV)
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
      this->lifesteal_percent = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "lifesteal_percent", -1, 0);
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
  this->lifesteal_percent = 0;
}


// CDOTA_Modifier_Item_MaskOfDeath::DeclareFunctions  (line 114, @0x0000000002dab620, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_MaskOfDeath::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_MaskOfDeath::DeclareFunctions(CDOTA_Modifier_Item_MaskOfDeath *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_MaskOfDeath::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_MaskOfDeath::GetModifierPreAttack_BonusDamage  (line 119, @0x0000000002dab640, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_MaskOfDeath::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_MaskOfDeath *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_MaskOfDeath::GetCustomOrb  (line 126, @0x0000000002dadb10, libserver.so)  // inlines: CDOTA_Orb_MaskOfDeath, ~CDOTA_Orb
// calls: KeyValues::KeyValues, KeyValues::SetInt, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, operator new, CDOTA_Orb::CDOTA_Orb, KeyValues::GetInt, KeyValues::~KeyValues, __stack_chk_fail, operator delete, _Unwind_Resume
// strings: "modifier_item_mask_of_death_orb"
CDOTA_Orb *__fastcall CDOTA_Modifier_Item_MaskOfDeath::GetCustomOrb(
        CDOTA_Modifier_Item_MaskOfDeath *const this,
        CDOTA_AttackRecord *pRecord)
{
  CDOTA_BaseNPC *Caster; // r14
  CDOTABaseAbility *Ability; // r15
  CDOTA_Orb *v6; // r12
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_item_mask_of_death_orb");
  KeyValues::SetInt(&kv, "lifesteal_percent", this->lifesteal_percent);
  Caster = CDOTA_Buff::GetCaster(this);
  Ability = CDOTA_Buff::GetAbility(this);
  v6 = operator new(0x20u);
  CDOTA_Orb::CDOTA_Orb(v6, pRecord, &kv, Caster, Ability);
  v6->_vptr_CDOTA_Orb = &off_47127D0;
  LODWORD(v6[1]._vptr_CDOTA_Orb) = KeyValues::GetInt(&kv, "lifesteal_percent", 0);
  KeyValues::~KeyValues(&kv);
  return v6;
}


