// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_faerie_fire.cpp:26
class CDOTA_Item_Faerie_Fire : public CDOTA_Item {
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
	CDOTA_Item_Faerie_Fire(CDOTA_Item_Faerie_Fire &);
	CDOTA_Item_Faerie_Fire(CDOTA_Item_Faerie_Fire &);
	CDOTA_Item_Faerie_Fire();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual bool CausesAutoattack();
	virtual ~CDOTA_Item_Faerie_Fire();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[222] CausesAutoattack
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_faerie_fire.cpp:68
class CDOTA_Modifier_Item_Faerie_Fire : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	CDOTA_Modifier_Item_Faerie_Fire();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Faerie_Fire();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Faerie_Fire::~CDOTA_Item_Faerie_Fire  (line 26, @0x0000000002da1c20, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Faerie_Fire::~CDOTA_Item_Faerie_Fire(CDOTA_Item_Faerie_Fire *const this)
{
  this->_vptr_IHandleEntity = &off_46E1330;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Faerie_Fire::~CDOTA_Item_Faerie_Fire  (line 26, @0x0000000002da1c40, libserver.so)  // inlines: ~CDOTA_Item_Faerie_Fire
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Faerie_Fire::~CDOTA_Item_Faerie_Fire(CDOTA_Item_Faerie_Fire *const this)
{
  this->_vptr_IHandleEntity = &off_46E1330;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Faerie_Fire::Schema_DynamicBinding  (line 28, @0x0000000002d9eda0, libserver.so)
// globals: CDOTA_Item_Faerie_Fire::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Faerie_Fire::Schema_DynamicBinding(
        const CDOTA_Item_Faerie_Fire *const this)
{
  return CDOTA_Item_Faerie_Fire::s_pSchemaBinding;
}


// CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d9edb0, libserver.so)
// globals: CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d9edc0, libserver.so)  // inlines: Destruct<CDOTA_Item_Faerie_Fire>
void __fastcall CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d9ede0, libserver.so)
void __fastcall CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d9ee00, libserver.so)
bool __fastcall CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d9ee10, libserver.so)
// globals: CDOTA_Item_Faerie_Fire::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Faerie_Fire::s_pSchemaBinding;
}


// CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002da05b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002da1580, libserver.so)  // inlines: CDOTA_Item_Faerie_Fire, Construct<CDOTA_Item_Faerie_Fire>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46E1330;
  }
  return p;
}


// CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3b80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3ba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Faerie_Fire::GetEntityClassInternal  (line 28, @0x0000000002da77d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "CDOTA_Item_Faerie_Fire"
// globals: `guard variable for'CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass, CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass, __dso_handle, CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Faerie_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Faerie_FireClassInfo, CDOTA_Item_Faerie_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Faerie_FireClassInfo
CEntityClass *__cdecl CDOTA_Item_Faerie_Fire::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass);
    CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass._vptr_CEntityClass = off_46E12B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass);
    __cxa_atexit(
      CDOTA_Item_Faerie_Fire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Faerie_FireClass != 0 )
    return &CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass;
  if ( `guard variable for'CDOTA_Item_Faerie_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Faerie_FireClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Faerie_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Faerie_FireClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Faerie_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Faerie_FireClassInfo,
      "CDOTA_Item_Faerie_Fire",
      "item_faerie_fire",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Faerie_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Faerie_FireClassInfo);
  }
  CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass.m_pClassInfo = &CDOTA_Item_Faerie_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Faerie_FireClassInfo;
  CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass.m_pBaseClassInfo = CDOTA_Item_Faerie_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Faerie_FireClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Faerie_FireClass = &CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass;
  CDOTA_Item_Faerie_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Faerie_FireClassInfo.m_pClass = &CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass;
  CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Faerie_FireClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Faerie_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Faerie_FireClass;
}


// CDOTA_Item_Faerie_Fire::GetIntrinsicModifierName  (line 30, @0x0000000002d9ee20, libserver.so)
// strings: "modifier_item_faerie_fire"
const char *__fastcall CDOTA_Item_Faerie_Fire::GetIntrinsicModifierName(CDOTA_Item_Faerie_Fire *const this)
{
  return "modifier_item_faerie_fire";
}


// CDOTA_Item_Faerie_Fire::CausesAutoattack  (line 33, @0x0000000002d9ee30, libserver.so)
bool __fastcall CDOTA_Item_Faerie_Fire::CausesAutoattack(CDOTA_Item_Faerie_Fire *const this)
{
  return 0;
}


// CDOTA_Item_Faerie_Fire::OnSpellStart  (line 41, @0x0000000002d9ba70, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, GetParent, ToDOTABaseNPC
// calls: CGameSceneNode::GetOwnerEntity, CDOTABaseAbility::GetLevelSpecialValueFor<int>, DOTA_EmitSound, CDOTA_BaseNPC::Heal, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, SendOverheadEventMessage, CDOTA_Item::SpendCharge
// strings: "hp_restore", "DOTA_Item.FaerieSpark.Activate", "particles/items3_fx/fish_bones_active.vpcf"
void __fastcall CDOTA_Item_Faerie_Fire::OnSpellStart(CDOTA_Item_Faerie_Fire *const this)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CDOTA_BaseNPC *v4; // rbx
  int LevelSpecialValue; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v8; // rax
  CDOTAPlayer *v9; // rax

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    v4 = OwnerEntity;
    if ( OwnerEntity != 0 && OwnerEntity->m_bIsDOTANPC )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hp_restore", -1, 0);
      DOTA_EmitSound(10, "DOTA_Item.FaerieSpark.Activate", v4);
      CDOTA_BaseNPC::Heal(v4, LevelSpecialValue, this, 0, 1);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/items3_fx/fish_bones_active.vpcf",
                   1,
                   v4,
                   0,
                   0);
      v8 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v8, Particle);
      v9 = (*(v4->_vptr_IHandleEntity + 413))(v4);
      SendOverheadEventMessage(v9, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v4, LevelSpecialValue, 0);
      CDOTA_Item::SpendCharge(this);
    }
  }
}


// CDOTA_Modifier_Item_Faerie_Fire::~CDOTA_Modifier_Item_Faerie_Fire  (line 68, @0x0000000002da0ec0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Faerie_Fire::~CDOTA_Modifier_Item_Faerie_Fire(
        CDOTA_Modifier_Item_Faerie_Fire *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Faerie_Fire::~CDOTA_Modifier_Item_Faerie_Fire  (line 68, @0x0000000002da0ee0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Faerie_Fire
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Faerie_Fire::~CDOTA_Modifier_Item_Faerie_Fire(
        CDOTA_Modifier_Item_Faerie_Fire *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Faerie_Fire::DeclareFunctions  (line 83, @0x0000000002d93ff0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Faerie_Fire::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Faerie_Fire::DeclareFunctions(CDOTA_Modifier_Item_Faerie_Fire *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Faerie_Fire::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_Faerie_Fire::OnCreated  (line 88, @0x0000000002d9c3f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_Faerie_Fire::OnCreated(CDOTA_Modifier_Item_Faerie_Fire *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  else
    this->bonus_damage = 0;
}


// CDOTA_Modifier_Item_Faerie_Fire::GetModifierPreAttack_BonusDamage  (line 94, @0x0000000002d94010, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Faerie_Fire::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Faerie_Fire *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


