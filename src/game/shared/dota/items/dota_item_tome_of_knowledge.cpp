// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_tome_of_knowledge.cpp:25
class CDOTA_Item_Tome_Of_Knowledge : public CDOTA_Item {
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
	CDOTA_Item_Tome_Of_Knowledge(CDOTA_Item_Tome_Of_Knowledge &);
	CDOTA_Item_Tome_Of_Knowledge(CDOTA_Item_Tome_Of_Knowledge &);
	CDOTA_Item_Tome_Of_Knowledge();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual bool CausesAutoattack();
	virtual ~CDOTA_Item_Tome_Of_Knowledge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// vtable[222] CausesAutoattack
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_tome_of_knowledge.cpp:39
class C_CDOTA_Item_Tome_Of_Knowledge_MapInstall {
	C_CDOTA_Item_Tome_Of_Knowledge_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_tome_of_knowledge.cpp:92
class CDOTA_Modifier_Tome_Of_Knowledge : public CDOTA_Buff {
public:

	CDOTA_Modifier_Tome_Of_Knowledge();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	ModifierVariant_t OnAbilityFullyCast(const CModifierParams &);
	void UpdateLevel();
	virtual ~CDOTA_Modifier_Tome_Of_Knowledge();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Tome_Of_Knowledge::~CDOTA_Item_Tome_Of_Knowledge  (line 25, @0x0000000002e0f4e0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Tome_Of_Knowledge::~CDOTA_Item_Tome_Of_Knowledge(CDOTA_Item_Tome_Of_Knowledge *const this)
{
  this->_vptr_IHandleEntity = &off_477E7F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Tome_Of_Knowledge::~CDOTA_Item_Tome_Of_Knowledge  (line 25, @0x0000000002e0f500, libserver.so)  // inlines: ~CDOTA_Item_Tome_Of_Knowledge
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Tome_Of_Knowledge::~CDOTA_Item_Tome_Of_Knowledge(CDOTA_Item_Tome_Of_Knowledge *const this)
{
  this->_vptr_IHandleEntity = &off_477E7F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Tome_Of_Knowledge::Schema_DynamicBinding  (line 27, @0x0000000002e0c070, libserver.so)
// globals: CDOTA_Item_Tome_Of_Knowledge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Tome_Of_Knowledge::Schema_DynamicBinding(
        const CDOTA_Item_Tome_Of_Knowledge *const this)
{
  return CDOTA_Item_Tome_Of_Knowledge::s_pSchemaBinding;
}


// CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 27, @0x0000000002e0c080, libserver.so)
// globals: CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::DestructInstance  (line 27, @0x0000000002e0c090, libserver.so)  // inlines: Destruct<CDOTA_Item_Tome_Of_Knowledge>
void __fastcall CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::FreeInstance  (line 27, @0x0000000002e0c0b0, libserver.so)
void __fastcall CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::CanAllocate  (line 27, @0x0000000002e0c0d0, libserver.so)
bool __fastcall CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 27, @0x0000000002e0c0e0, libserver.so)
// globals: CDOTA_Item_Tome_Of_Knowledge::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Tome_Of_Knowledge::s_pSchemaBinding;
}


// CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::AllocateInstance  (line 27, @0x0000000002e0d7c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::ConstructInstance  (line 27, @0x0000000002e0e710, libserver.so)  // inlines: CDOTA_Item_Tome_Of_Knowledge, Construct<CDOTA_Item_Tome_Of_Knowledge>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_477E7F0;
  }
  return p;
}


// CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000002e11190, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000002e111b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal  (line 27, @0x0000000002e169b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_tome_of_knowledge", "CDOTA_Item_Tome_Of_Knowledge"
// globals: `guard variable for'CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass, CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass, __dso_handle, CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClassInfo, CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClassInfo
CEntityClass *__cdecl CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass);
    CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass._vptr_CEntityClass = off_477E770;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass);
    __cxa_atexit(
      CDOTA_Item_Tome_Of_Knowledge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Tome_Of_KnowledgeClass != 0 )
    return &CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass;
  if ( `guard variable for'CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClassInfo,
      "CDOTA_Item_Tome_Of_Knowledge",
      "item_tome_of_knowledge",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClassInfo);
  }
  CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass.m_pClassInfo = &CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClassInfo;
  CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass.m_pBaseClassInfo = CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Tome_Of_KnowledgeClass = &CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass;
  CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClassInfo.m_pClass = &CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass;
  CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Tome_Of_KnowledgeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Tome_Of_Knowledge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Tome_Of_KnowledgeClass;
}


// CDOTA_Item_Tome_Of_Knowledge::GetIntrinsicModifierName  (line 31, @0x0000000002e0c0f0, libserver.so)
// strings: "modifier_item_tome_of_knowledge"
const char *__fastcall CDOTA_Item_Tome_Of_Knowledge::GetIntrinsicModifierName(CDOTA_Item_Tome_Of_Knowledge *const this)
{
  return "modifier_item_tome_of_knowledge";
}


// CDOTA_Item_Tome_Of_Knowledge::CausesAutoattack  (line 33, @0x0000000002e0c100, libserver.so)
bool __fastcall CDOTA_Item_Tome_Of_Knowledge::CausesAutoattack(CDOTA_Item_Tome_Of_Knowledge *const this)
{
  return 0;
}


// CDOTA_Item_Tome_Of_Knowledge::YouForgotToImplementOrDeclareServerClass  (line 39, @0x0000000002dff6b0, libserver.so)
int __fastcall CDOTA_Item_Tome_Of_Knowledge::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Tome_Of_Knowledge *const this)
{
  return 0;
}


// CDOTA_Item_Tome_Of_Knowledge::GetServerClass  (line 39, @0x0000000002e02d10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Tome_Of_Knowledge::GetServerClass(CDOTA_Item_Tome_Of_Knowledge *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Item_Tome_Of_Knowledge::OnSpellStart  (line 55, @0x0000000002e07610, libserver.so)  // inlines: DOTAGameRules, GetLevelSpecialValueFor<int>, GetParent, GetTeamNumber, Script_GiveXP, ToDOTABaseNPC, ToDOTABaseNPCHero
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CGameSceneNode::GetOwnerEntity, CDOTAGamerules::GetTomeCount, CDOTAGamerules::IncrementTomeCount, CDOTAHeroList::GiveXP, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Item::SpendCharge, DOTA_EmitSound
// strings: "xp_bonus", "xp_per_use", "particles/generic_hero_status/hero_levelup.vpcf", "Item.TomeOfKnowledge"
void __fastcall CDOTA_Item_Tome_Of_Knowledge::OnSpellStart(CDOTA_Item_Tome_Of_Knowledge *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // r13d
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CDOTA_BaseNPC_Hero *v6; // r15
  int m_Value; // r14d
  int v8; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v11; // rax
  int nTomeCount; // [rsp+Ch] [rbp-34h]

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "xp_bonus", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "xp_per_use", -1, 0);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    v6 = OwnerEntity;
    if ( OwnerEntity != 0 && OwnerEntity->m_bIsDOTANPC && (OwnerEntity[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
    {
      m_Value = OwnerEntity->m_iTeamNum.m_Value;
      if ( g_pGameRules != 0 )
      {
        nTomeCount = CDOTAGamerules::GetTomeCount(g_pGameRules, m_Value);
        CDOTAGamerules::IncrementTomeCount(g_pGameRules, m_Value);
        v8 = nTomeCount * v3;
      }
      else
      {
        v8 = 0;
      }
      CDOTAHeroList::GiveXP(&g_HeroList, v6, (v8 + LevelSpecialValue), 0);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/generic_hero_status/hero_levelup.vpcf",
                   1,
                   v6,
                   0,
                   0);
      v11 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v11, Particle);
      CDOTA_Item::SpendCharge(this);
      DOTA_EmitSound(1, "Item.TomeOfKnowledge", v6);
    }
  }
}


// CDOTA_Modifier_Tome_Of_Knowledge::~CDOTA_Modifier_Tome_Of_Knowledge  (line 92, @0x0000000002e0e150, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tome_Of_Knowledge::~CDOTA_Modifier_Tome_Of_Knowledge(
        CDOTA_Modifier_Tome_Of_Knowledge *const this)
{
  this->_vptr_CDOTA_Buff = &off_477F3B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tome_Of_Knowledge::~CDOTA_Modifier_Tome_Of_Knowledge  (line 92, @0x0000000002e0e170, libserver.so)  // inlines: ~CDOTA_Modifier_Tome_Of_Knowledge
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tome_Of_Knowledge::~CDOTA_Modifier_Tome_Of_Knowledge(
        CDOTA_Modifier_Tome_Of_Knowledge *const this)
{
  this->_vptr_CDOTA_Buff = &off_477F3B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tome_Of_Knowledge::IsHidden  (line 101, @0x0000000002e0c110, libserver.so)
bool __fastcall CDOTA_Modifier_Tome_Of_Knowledge::IsHidden(CDOTA_Modifier_Tome_Of_Knowledge *const this)
{
  return 1;
}


// CDOTA_Modifier_Tome_Of_Knowledge::OnCreated  (line 112, @0x0000000002e053f0, libserver.so)
// calls: CDOTA_Modifier_Tome_Of_Knowledge::UpdateLevel
void __fastcall CDOTA_Modifier_Tome_Of_Knowledge::OnCreated(
        CDOTA_Modifier_Tome_Of_Knowledge *const this,
        KeyValues *pKV)
{
  CDOTA_Modifier_Tome_Of_Knowledge::UpdateLevel(this);
}


// CDOTA_Modifier_Tome_Of_Knowledge::UpdateLevel  (line 121, @0x0000000002e05390, libserver.so)  // inlines: DOTAGameRules, GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTAGamerules::GetTomeCount, CDOTA_Buff::GetAbility
// callers: CDOTA_Modifier_Tome_Of_Knowledge::OnCreated, CDOTA_Modifier_Tome_Of_Knowledge::OnAbilityFullyCast
void __fastcall CDOTA_Modifier_Tome_Of_Knowledge::UpdateLevel(CDOTA_Modifier_Tome_Of_Knowledge *const this)
{
  int m_Value; // esi
  int TomeCount; // r12d
  CDOTABaseAbility *Ability; // rax

  m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
  if ( g_pGameRules != 0 )
  {
    TomeCount = CDOTAGamerules::GetTomeCount(g_pGameRules, m_Value);
    Ability = CDOTA_Buff::GetAbility(this);
    (*(Ability->_vptr_IHandleEntity + 212))(Ability, (TomeCount + 1));
  }
}


// CDOTA_Modifier_Tome_Of_Knowledge::DeclareFunctions  (line 136, @0x0000000002dff6c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tome_Of_Knowledge::OnAbilityFullyCast(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tome_Of_Knowledge::DeclareFunctions(CDOTA_Modifier_Tome_Of_Knowledge *const this)
{
  this->m_Functions[129].__pfn = CDOTA_Modifier_Tome_Of_Knowledge::OnAbilityFullyCast;
  this->m_Functions[129].__delta = 0;
}


// CDOTA_Modifier_Tome_Of_Knowledge::OnAbilityFullyCast  (line 143, @0x0000000002e05400, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::FindItemInInventory, CDOTA_Modifier_Tome_Of_Knowledge::UpdateLevel
// strings: "item_tome_of_knowledge"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tome_Of_Knowledge::OnAbilityFullyCast(
        CDOTA_Modifier_Tome_Of_Knowledge *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInInventory; // rax
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx

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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_BaseNPC::GetInventory(m_pInstance) != 0 )
        {
          v9 = params->hunit.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
            || (v11 = &v10[params->hunit.m_Index & 0x1FF]) == 0
            || v9 != v11->m_EHandle.m_Index
            || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
            || !v12->m_bIsDOTANPC )
          {
            v12 = 0;
          }
          Inventory = CDOTA_BaseNPC::GetInventory(v12);
          ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(Inventory, "item_tome_of_knowledge", 3, 0, -1);
          if ( ItemInInventory != 0 && params->ability.m_Index + 2 > 1 )
          {
            v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
            if ( v15 != 0 )
            {
              v16 = &v15[params->ability.m_Index & 0x1FF];
              if ( v16 != 0 && params->ability.m_Index == v16->m_EHandle.m_Index && ItemInInventory == v16->m_pInstance )
                CDOTA_Modifier_Tome_Of_Knowledge::UpdateLevel(this);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


