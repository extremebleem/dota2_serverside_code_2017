// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_dust_of_appearance.cpp:28
class CDOTA_Item_DustofAppearance : public CDOTA_Item {
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
	CDOTA_Item_DustofAppearance(CDOTA_Item_DustofAppearance &);
	CDOTA_Item_DustofAppearance(CDOTA_Item_DustofAppearance &);
	CDOTA_Item_DustofAppearance();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Item_DustofAppearance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_dust_of_appearance.cpp:89
class CDOTA_Modifier_Item_DustofAppearance : public CDOTA_Buff {
public:

private:

	int movespeed;  // +0xba8
	CDOTA_Modifier_Item_DustofAppearance();
	virtual bool IsDebuff();
	virtual void CheckState(CDOTABuffState &);
	virtual int GetPriority();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual int GetAttributes();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetTexture();
	virtual int GetEffectAttachType();
	virtual bool IsHidden();
	bool HasInvisibilityBuff();
	virtual ~CDOTA_Modifier_Item_DustofAppearance();

	// vtable[12] IsDebuff
	// vtable[5] CheckState
	// vtable[6] GetPriority
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[32] GetTexture
	// vtable[68] GetEffectAttachType
	// vtable[11] IsHidden
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_DustofAppearance::~CDOTA_Item_DustofAppearance  (line 28, @0x0000000002da19a0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_DustofAppearance::~CDOTA_Item_DustofAppearance(CDOTA_Item_DustofAppearance *const this)
{
  this->_vptr_IHandleEntity = &off_46D89D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_DustofAppearance::~CDOTA_Item_DustofAppearance  (line 28, @0x0000000002da19c0, libserver.so)  // inlines: ~CDOTA_Item_DustofAppearance
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_DustofAppearance::~CDOTA_Item_DustofAppearance(CDOTA_Item_DustofAppearance *const this)
{
  this->_vptr_IHandleEntity = &off_46D89D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_DustofAppearance::Schema_DynamicBinding  (line 30, @0x0000000002d9e820, libserver.so)
// globals: CDOTA_Item_DustofAppearance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_DustofAppearance::Schema_DynamicBinding(
        const CDOTA_Item_DustofAppearance *const this)
{
  return CDOTA_Item_DustofAppearance::s_pSchemaBinding;
}


// CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002d9e830, libserver.so)
// globals: CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002d9e840, libserver.so)  // inlines: Destruct<CDOTA_Item_DustofAppearance>
void __fastcall CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002d9e860, libserver.so)
void __fastcall CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002d9e880, libserver.so)
bool __fastcall CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002d9e890, libserver.so)
// globals: CDOTA_Item_DustofAppearance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_DustofAppearance::s_pSchemaBinding;
}


// CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002da03b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002da1430, libserver.so)  // inlines: CDOTA_Item_DustofAppearance, Construct<CDOTA_Item_DustofAppearance>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46D89D0;
  }
  return p;
}


// CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002da3900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002da3920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_DustofAppearance::GetEntityClassInternal  (line 30, @0x0000000002da6420, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_dust", "CDOTA_Item_DustofAppearance"
// globals: `guard variable for'CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass, CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass, __dso_handle, CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_DustofAppearance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DustofAppearanceClassInfo, CDOTA_Item_DustofAppearance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DustofAppearanceClassInfo
CEntityClass *__cdecl CDOTA_Item_DustofAppearance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass);
    CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass._vptr_CEntityClass = off_46D8950;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass);
    __cxa_atexit(
      CDOTA_Item_DustofAppearance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_DustofAppearanceClass != 0 )
    return &CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass;
  if ( `guard variable for'CDOTA_Item_DustofAppearance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DustofAppearanceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_DustofAppearance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DustofAppearanceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_DustofAppearance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DustofAppearanceClassInfo,
      "CDOTA_Item_DustofAppearance",
      "item_dust",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_DustofAppearance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DustofAppearanceClassInfo);
  }
  CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass.m_pClassInfo = &CDOTA_Item_DustofAppearance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DustofAppearanceClassInfo;
  CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass.m_pBaseClassInfo = CDOTA_Item_DustofAppearance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DustofAppearanceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_DustofAppearanceClass = &CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass;
  CDOTA_Item_DustofAppearance::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DustofAppearanceClassInfo.m_pClass = &CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass;
  CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_DustofAppearanceClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_DustofAppearance::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DustofAppearanceClass;
}


// CDOTA_Item_DustofAppearance::OnSpellStart  (line 41, @0x0000000002d9bca0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::SetInt, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CGameSceneNode::GetOwnerEntity, FindUnitsInRadius (19 total)
// strings: "CDOTA_Item_DustofAppearance::OnSpellStart", "particles/items_fx/dust_of_appearance.vpcf", "DOTA_Item.DustOfAppearance.Activate", "modifier_item_dustofappearance", "particles/items_fx/dust_of_appearance_debuff.vpcf"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Item_DustofAppearance::OnSpellStart(CDOTA_Item_DustofAppearance *const this)
{
  int LevelSpecialValue; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  __m128i v11; // xmm2
  float v12; // r12d
  CDOTA_BaseNPC *v13; // rbx
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  const Vector *v16; // r13
  CGameSceneNode *v17; // rdi
  CBaseEntity *v18; // rax
  __int64 v19; // rbx
  unsigned __int16 *v20; // rdx
  int v21; // eax
  __int16 v22; // cx
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *v26; // rax
  _WORD *v27; // r12
  CBaseEntity *v28; // r13
  CEntityIdentity *v29; // rdx
  CEntityIdentity *v30; // rdx
  CDOTA_ParticleManager *v31; // rax
  int v32; // r12d
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC_Hero *v35; // rdi
  int nInvisHeroesHit; // [rsp+2Ch] [rbp-74h]
  double flRadius; // [rsp+30h] [rbp-70h] BYREF
  __int64 v38; // [rsp+38h] [rbp-68h]
  int v39; // [rsp+40h] [rbp-60h]
  int v40; // [rsp+44h] [rbp-5Ch]
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "CDOTA_Item_DustofAppearance::OnSpellStart");
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "duration", -1, 0);
  KeyValues::SetInt(&kv, "duration", LevelSpecialValue);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/items_fx/dust_of_appearance.vpcf",
               2,
               0,
               0,
               0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v7, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
  *&flRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  *(&flRadius + 1) = *&flRadius;
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v8, Particle, 1, flRadius, *&flRadius);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, Particle);
  v10 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.DustOfAppearance.Activate", v10);
  LODWORD(flRadius) = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  *v11.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
  v13 = CDOTABaseAbility::GetCaster(this);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  v16 = CBaseEntity::GetAbsOrigin(OwnerEntity);
  v17 = this->m_pGameSceneNode->m_pParent;
  if ( v17 != 0 )
    v18 = CGameSceneNode::GetOwnerEntity(v17);
  else
    v18 = 0;
  FindUnitsInRadius(v18->m_iTeamNum.m_Value, v16, v13, v12, &flRadius, 2, 19, 80, 0, 0);
  if ( SLODWORD(flRadius) > 0 )
  {
    v19 = 0;
    nInvisHeroesHit = 0;
    do
    {
      while ( 1 )
      {
        v20 = (v38 + 4 * v19);
        v21 = *v20;
        if ( (*v20 + 2) > 1 )
        {
          v22 = *v20;
          v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v20 >> 9) & 0x3F];
          if ( v23 != 0 )
          {
            v24 = &v23[v22 & 0x1FF];
            if ( v24 != 0 && v21 == v24->m_EHandle.m_Index )
            {
              m_pInstance = v24->m_pInstance;
              if ( v24->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
        if ( SLODWORD(flRadius) <= ++v19 )
          goto LABEL_23;
      }
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
        nInvisHeroesHit -= ((m_pInstance[58]._vptr_IHandleEntity & 0x80) == 0) - 1;
      v26 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v26, this, "modifier_item_dustofappearance", &kv, 0);
      v27 = (v38 + 4 * v19);
      v28 = 0;
      if ( (*v27 + 2) > 1 )
      {
        v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v27 >> 9) & 0x3F];
        if ( v29 != 0 )
        {
          v30 = &v29[*v27 & 0x1FF];
          if ( v30 != 0 && *v27 == v30->m_EHandle.m_Index )
            v28 = v30->m_pInstance;
        }
      }
      v31 = GetParticleManager();
      v32 = CDOTA_ParticleManager::CreateParticle(
              v31,
              "particles/items_fx/dust_of_appearance_debuff.vpcf",
              1,
              v28,
              0,
              0);
      v33 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v33, v32);
      ++v19;
    }
    while ( SLODWORD(flRadius) > v19 );
LABEL_23:
    if ( nInvisHeroesHit != 0 )
    {
      v34 = CDOTABaseAbility::GetCaster(this);
      if ( v34 != 0 && (v34->m_iUnitType & 1) != 0 )
        v35 = v34;
      else
        v35 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v35,
        0,
        kill_eater_event_t::kKillEaterEventType_HeroesRevealedWithDust,
        nInvisHeroesHit,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  CDOTA_Item::SpendCharge(this);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&flRadius);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Item_DustofAppearance::~CDOTA_Modifier_Item_DustofAppearance  (line 89, @0x0000000002da13e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_DustofAppearance::~CDOTA_Modifier_Item_DustofAppearance(
        CDOTA_Modifier_Item_DustofAppearance *const this)
{
  this->_vptr_CDOTA_Buff = &off_46D9590;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_DustofAppearance::~CDOTA_Modifier_Item_DustofAppearance  (line 89, @0x0000000002da1400, libserver.so)  // inlines: ~CDOTA_Modifier_Item_DustofAppearance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_DustofAppearance::~CDOTA_Modifier_Item_DustofAppearance(
        CDOTA_Modifier_Item_DustofAppearance *const this)
{
  this->_vptr_CDOTA_Buff = &off_46D9590;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_DustofAppearance::IsDebuff  (line 94, @0x0000000002d9e8a0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_DustofAppearance::IsDebuff(CDOTA_Modifier_Item_DustofAppearance *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_DustofAppearance::GetAttributes  (line 100, @0x0000000002d9e8b0, libserver.so)
int __fastcall CDOTA_Modifier_Item_DustofAppearance::GetAttributes(CDOTA_Modifier_Item_DustofAppearance *const this)
{
  return 4;
}


// CDOTA_Modifier_Item_DustofAppearance::GetTexture  (line 103, @0x0000000002d9e8c0, libserver.so)
// strings: "item_dust"
const char *__fastcall CDOTA_Modifier_Item_DustofAppearance::GetTexture(
        CDOTA_Modifier_Item_DustofAppearance *const this)
{
  return "item_dust";
}


// CDOTA_Modifier_Item_DustofAppearance::GetEffectAttachType  (line 117, @0x0000000002d9e8d0, libserver.so)
int __fastcall CDOTA_Modifier_Item_DustofAppearance::GetEffectAttachType(
        CDOTA_Modifier_Item_DustofAppearance *const this)
{
  return 7;
}


// CDOTA_Modifier_Item_DustofAppearance::IsHidden  (line 118, @0x0000000002d9e8e0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_DustofAppearance::IsHidden(CDOTA_Modifier_Item_DustofAppearance *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_DustofAppearance::HasInvisibilityBuff  (line 129, @0x0000000002d97ca0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasInvisibilityBuff
bool __fastcall CDOTA_Modifier_Item_DustofAppearance::HasInvisibilityBuff(
        CDOTA_Modifier_Item_DustofAppearance *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  return CDOTA_BaseNPC::HasInvisibilityBuff(Parent);
}


// CDOTA_Modifier_Item_DustofAppearance::DeclareFunctions  (line 136, @0x0000000002d93a70, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Item_DustofAppearance::DeclareFunctions(
        CDOTA_Modifier_Item_DustofAppearance *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Item_DustofAppearance::OnCreated  (line 143, @0x0000000002d9c940, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, HasInvisibilityBuff
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasInvisibilityBuff, CDOTA_Buff::GetCaster, CDOTA_CombatLog::AddRevealInvisibleEvent
void __fastcall CDOTA_Modifier_Item_DustofAppearance::OnCreated(
        CDOTA_Modifier_Item_DustofAppearance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_BaseNPC *Caster; // r12
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movespeed", -1, 0);
  else
    this->movespeed = 0;
  Parent = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::HasInvisibilityBuff(Parent) )
  {
    v5 = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    v7 = CDOTA_Buff::GetAbility(this);
    CDOTA_CombatLog::AddRevealInvisibleEvent(&g_DOTACombatLog, v7, Caster, v5);
  }
}


// CDOTA_Modifier_Item_DustofAppearance::GetModifierMoveSpeedBonus_Percentage  (line 156, @0x0000000002d95410, libserver.so)  // inlines: HasInvisibilityBuff
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasInvisibilityBuff
ModifierVariant_t __fastcall CDOTA_Modifier_Item_DustofAppearance::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Item_DustofAppearance *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  bool HasInvisibilityBuff; // al
  __m128i v5; // xmm0
  unsigned __int64 v6; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  HasInvisibilityBuff = CDOTA_BaseNPC::HasInvisibilityBuff(Parent);
  v6 = 1;
  if ( HasInvisibilityBuff )
  {
    *v5.m128i_i32 = this->movespeed;
    return ((_mm_cvtsi128_si32(v5) << 32) | 1);
  }
  return v6;
}


// CDOTA_Modifier_Item_DustofAppearance::CheckState  (line 166, @0x0000000002d93a90, libserver.so)  // inlines: Disable
void __fastcall CDOTA_Modifier_Item_DustofAppearance::CheckState(
        CDOTA_Modifier_Item_DustofAppearance *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nDisabledStateMask |= 0x80uLL;
  buffState->m_nEnabledStateMask &= ~0x80uLL;
}


// CDOTA_Modifier_Item_DustofAppearance::GetPriority  (line 175, @0x0000000002d93ab0, libserver.so)
int __fastcall CDOTA_Modifier_Item_DustofAppearance::GetPriority(CDOTA_Modifier_Item_DustofAppearance *const this)
{
  return 2;
}


