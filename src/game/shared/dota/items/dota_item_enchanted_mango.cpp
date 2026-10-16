// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_enchanted_mango.cpp:29
class CDOTA_Item_Enchanted_Mango : public CDOTA_Item {
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
	CDOTA_Item_Enchanted_Mango(CDOTA_Item_Enchanted_Mango &);
	CDOTA_Item_Enchanted_Mango(CDOTA_Item_Enchanted_Mango &);
	CDOTA_Item_Enchanted_Mango();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual int GetAllowedTargetBehavior();
	virtual bool CausesAutoattack();
	virtual ~CDOTA_Item_Enchanted_Mango();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[255] GetAllowedTargetBehavior
	// vtable[222] CausesAutoattack
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_enchanted_mango.cpp:84
class CDOTA_Modifier_Item_Enchanted_Mango : public CDOTA_Buff_Item {
public:

private:

	float hp_regen;  // +0xba8
	CDOTA_Modifier_Item_Enchanted_Mango();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Enchanted_Mango();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Enchanted_Mango::~CDOTA_Item_Enchanted_Mango  (line 29, @0x0000000002da1b30, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Enchanted_Mango::~CDOTA_Item_Enchanted_Mango(CDOTA_Item_Enchanted_Mango *const this)
{
  this->_vptr_IHandleEntity = &off_46DDED0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Enchanted_Mango::~CDOTA_Item_Enchanted_Mango  (line 29, @0x0000000002da1b50, libserver.so)  // inlines: ~CDOTA_Item_Enchanted_Mango
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Enchanted_Mango::~CDOTA_Item_Enchanted_Mango(CDOTA_Item_Enchanted_Mango *const this)
{
  this->_vptr_IHandleEntity = &off_46DDED0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Enchanted_Mango::Schema_DynamicBinding  (line 31, @0x0000000002d9eb90, libserver.so)
// globals: CDOTA_Item_Enchanted_Mango::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Enchanted_Mango::Schema_DynamicBinding(
        const CDOTA_Item_Enchanted_Mango *const this)
{
  return CDOTA_Item_Enchanted_Mango::s_pSchemaBinding;
}


// CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 31, @0x0000000002d9eba0, libserver.so)
// globals: CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::DestructInstance  (line 31, @0x0000000002d9ebb0, libserver.so)  // inlines: Destruct<CDOTA_Item_Enchanted_Mango>
void __fastcall CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::FreeInstance  (line 31, @0x0000000002d9ebd0, libserver.so)
void __fastcall CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::CanAllocate  (line 31, @0x0000000002d9ebf0, libserver.so)
bool __fastcall CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 31, @0x0000000002d9ec00, libserver.so)
// globals: CDOTA_Item_Enchanted_Mango::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Enchanted_Mango::s_pSchemaBinding;
}


// CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::AllocateInstance  (line 31, @0x0000000002da04f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::ConstructInstance  (line 31, @0x0000000002da14f0, libserver.so)  // inlines: CDOTA_Item_Enchanted_Mango, Construct<CDOTA_Item_Enchanted_Mango>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46DDED0;
  }
  return p;
}


// CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002da3a90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002da3ab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Enchanted_Mango::GetEntityClassInternal  (line 31, @0x0000000002da7080, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "CDOTA_Item_Enchanted_Mango"
// globals: `guard variable for'CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass, CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass, __dso_handle, CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Enchanted_Mango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Enchanted_MangoClassInfo, CDOTA_Item_Enchanted_Mango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Enchanted_MangoClassInfo
CEntityClass *__cdecl CDOTA_Item_Enchanted_Mango::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass);
    CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass._vptr_CEntityClass = off_46DDE50;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass);
    __cxa_atexit(
      CDOTA_Item_Enchanted_Mango::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Enchanted_MangoClass != 0 )
    return &CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass;
  if ( `guard variable for'CDOTA_Item_Enchanted_Mango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Enchanted_MangoClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Enchanted_Mango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Enchanted_MangoClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Enchanted_Mango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Enchanted_MangoClassInfo,
      "CDOTA_Item_Enchanted_Mango",
      "item_enchanted_mango",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Enchanted_Mango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Enchanted_MangoClassInfo);
  }
  CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass.m_pClassInfo = &CDOTA_Item_Enchanted_Mango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Enchanted_MangoClassInfo;
  CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass.m_pBaseClassInfo = CDOTA_Item_Enchanted_Mango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Enchanted_MangoClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Enchanted_MangoClass = &CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass;
  CDOTA_Item_Enchanted_Mango::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Enchanted_MangoClassInfo.m_pClass = &CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass;
  CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Enchanted_MangoClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Enchanted_Mango::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Enchanted_MangoClass;
}


// CDOTA_Item_Enchanted_Mango::GetIntrinsicModifierName  (line 34, @0x0000000002d9ec10, libserver.so)
// strings: "modifier_item_enchanted_mango"
const char *__fastcall CDOTA_Item_Enchanted_Mango::GetIntrinsicModifierName(CDOTA_Item_Enchanted_Mango *const this)
{
  return "modifier_item_enchanted_mango";
}


// CDOTA_Item_Enchanted_Mango::GetAllowedTargetBehavior  (line 37, @0x0000000002d9ec20, libserver.so)  // inlines: GetAllowedTargetBehavior
int __fastcall CDOTA_Item_Enchanted_Mango::GetAllowedTargetBehavior(CDOTA_Item_Enchanted_Mango *const this)
{
  return (*(this->_vptr_IHandleEntity + 251))(this) | 8;
}


// CDOTA_Item_Enchanted_Mango::CausesAutoattack  (line 38, @0x0000000002d9ec40, libserver.so)
bool __fastcall CDOTA_Item_Enchanted_Mango::CausesAutoattack(CDOTA_Item_Enchanted_Mango *const this)
{
  return 0;
}


// CDOTA_Item_Enchanted_Mango::OnSpellStart  (line 46, @0x0000000002d9b920, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, GetParent, IsConsideredHero, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CGameSceneNode::GetOwnerEntity, CDOTABaseAbility::GetLevelSpecialValueFor<int>, DOTA_EmitSound, CDOTA_BaseNPC::GiveMana, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, SendOverheadEventMessage, CDOTA_Item::SpendCharge
// strings: "replenish_amount", "DOTA_Item.Mango.Activate", "particles/items3_fx/mango_active.vpcf"
void __fastcall CDOTA_Item_Enchanted_Mango::OnSpellStart(CDOTA_Item_Enchanted_Mango *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  int LevelSpecialValue; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v9; // rax
  CDOTAPlayer *v10; // rax

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget == 0 || !CursorTarget->m_bIsDOTANPC )
    v3 = 0;
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    if ( OwnerEntity != 0 && OwnerEntity->m_bIsDOTANPC && (OwnerEntity[2].m_hEffectEntity.m_Value.m_Index & 3) != 0 )
    {
      if ( v3 == 0 )
        v3 = OwnerEntity;
      goto LABEL_9;
    }
  }
  if ( v3 != 0 )
  {
LABEL_9:
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "replenish_amount", -1, 0);
    DOTA_EmitSound(8, "DOTA_Item.Mango.Activate", v3);
    CDOTA_BaseNPC::GiveMana(v3, LevelSpecialValue, this, 1);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/items3_fx/mango_active.vpcf",
                 1,
                 v3,
                 0,
                 0);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v9, Particle);
    v10 = (*(v3->_vptr_IHandleEntity + 413))(v3);
    SendOverheadEventMessage(v10, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD, v3, LevelSpecialValue, 0);
    CDOTA_Item::SpendCharge(this);
  }
}


// CDOTA_Modifier_Item_Enchanted_Mango::~CDOTA_Modifier_Item_Enchanted_Mango  (line 84, @0x0000000002da0f60, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Enchanted_Mango::~CDOTA_Modifier_Item_Enchanted_Mango(
        CDOTA_Modifier_Item_Enchanted_Mango *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Enchanted_Mango::~CDOTA_Modifier_Item_Enchanted_Mango  (line 84, @0x0000000002da0f80, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Enchanted_Mango
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Enchanted_Mango::~CDOTA_Modifier_Item_Enchanted_Mango(
        CDOTA_Modifier_Item_Enchanted_Mango *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Enchanted_Mango::DeclareFunctions  (line 99, @0x0000000002d93df0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Enchanted_Mango::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Enchanted_Mango::DeclareFunctions(CDOTA_Modifier_Item_Enchanted_Mango *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Enchanted_Mango::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
}


// CDOTA_Modifier_Item_Enchanted_Mango::GetModifierConstantHealthRegen  (line 104, @0x0000000002d93e10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Enchanted_Mango::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Enchanted_Mango *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->hp_regen) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Enchanted_Mango::OnCreated  (line 109, @0x0000000002d9e4b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Item_Enchanted_Mango::OnCreated(
        CDOTA_Modifier_Item_Enchanted_Mango *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->hp_regen = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "hp_regen", -1, 0);
  else
    this->hp_regen = 0.0;
}


