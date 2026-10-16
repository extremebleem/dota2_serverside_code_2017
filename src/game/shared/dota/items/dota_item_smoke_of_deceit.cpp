// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_smoke_of_deceit.cpp:29
class CDOTA_Item_Smoke_Of_Deceit : public CDOTA_Item {
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
	CDOTA_Item_Smoke_Of_Deceit(CDOTA_Item_Smoke_Of_Deceit &);
	CDOTA_Item_Smoke_Of_Deceit(CDOTA_Item_Smoke_Of_Deceit &);
	CDOTA_Item_Smoke_Of_Deceit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Smoke_Of_Deceit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_smoke_of_deceit.cpp:43
class C_CDOTA_Item_Smoke_Of_Deceit_MapInstall {
	C_CDOTA_Item_Smoke_Of_Deceit_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_smoke_of_deceit.cpp:102
class CDOTA_Modifier_Smoke_Of_Deceit : public CDOTA_Modifier_Invisible {
public:

private:

	int bonus_movement_speed;  // +0xbb4
	int visibility_radius;  // +0xbb8
	CDOTA_Modifier_Smoke_Of_Deceit();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual const char * GetEffectName();
	virtual int GetPriority();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	virtual const char * GetTexture();
	virtual void CheckState(CDOTABuffState &);
	void SetMusicSmokeRequest(int);
	void SetMusicSmokeEndState(int);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Smoke_Of_Deceit();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[67] GetEffectName
	// vtable[6] GetPriority
	// vtable[65] DeclareFunctions
	// vtable[94] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] OnAbilityExecuted
	// vtable[91] OnAttack
	// vtable[32] GetTexture
	// vtable[5] CheckState
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Smoke_Of_Deceit::~CDOTA_Item_Smoke_Of_Deceit  (line 29, @0x0000000002e0efe0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Smoke_Of_Deceit::~CDOTA_Item_Smoke_Of_Deceit(CDOTA_Item_Smoke_Of_Deceit *const this)
{
  this->_vptr_IHandleEntity = &off_476E610;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Smoke_Of_Deceit::~CDOTA_Item_Smoke_Of_Deceit  (line 29, @0x0000000002e0f000, libserver.so)  // inlines: ~CDOTA_Item_Smoke_Of_Deceit
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Smoke_Of_Deceit::~CDOTA_Item_Smoke_Of_Deceit(CDOTA_Item_Smoke_Of_Deceit *const this)
{
  this->_vptr_IHandleEntity = &off_476E610;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Smoke_Of_Deceit::Schema_DynamicBinding  (line 31, @0x0000000002e0b6e0, libserver.so)
// globals: CDOTA_Item_Smoke_Of_Deceit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Smoke_Of_Deceit::Schema_DynamicBinding(
        const CDOTA_Item_Smoke_Of_Deceit *const this)
{
  return CDOTA_Item_Smoke_Of_Deceit::s_pSchemaBinding;
}


// CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 31, @0x0000000002e0b6f0, libserver.so)
// globals: CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::DestructInstance  (line 31, @0x0000000002e0b700, libserver.so)  // inlines: Destruct<CDOTA_Item_Smoke_Of_Deceit>
void __fastcall CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::FreeInstance  (line 31, @0x0000000002e0b720, libserver.so)
void __fastcall CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::CanAllocate  (line 31, @0x0000000002e0b740, libserver.so)
bool __fastcall CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 31, @0x0000000002e0b750, libserver.so)
// globals: CDOTA_Item_Smoke_Of_Deceit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Smoke_Of_Deceit::s_pSchemaBinding;
}


// CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::AllocateInstance  (line 31, @0x0000000002e0d3c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::ConstructInstance  (line 31, @0x0000000002e0e410, libserver.so)  // inlines: CDOTA_Item_Smoke_Of_Deceit, Construct<CDOTA_Item_Smoke_Of_Deceit>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_476E610;
  }
  return p;
}


// CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002e10c90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002e10cb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal  (line 31, @0x0000000002e142b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_smoke_of_deceit", "CDOTA_Item_Smoke_Of_Deceit"
// globals: `guard variable for'CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass, CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass, __dso_handle, CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClassInfo, CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClassInfo
CEntityClass *__cdecl CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass);
    CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass._vptr_CEntityClass = off_476E590;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass);
    __cxa_atexit(
      CDOTA_Item_Smoke_Of_Deceit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Smoke_Of_DeceitClass != 0 )
    return &CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass;
  if ( `guard variable for'CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClassInfo,
      "CDOTA_Item_Smoke_Of_Deceit",
      "item_smoke_of_deceit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClassInfo);
  }
  CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass.m_pClassInfo = &CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClassInfo;
  CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass.m_pBaseClassInfo = CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Smoke_Of_DeceitClass = &CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass;
  CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClassInfo.m_pClass = &CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass;
  CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Smoke_Of_DeceitClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Smoke_Of_Deceit::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Smoke_Of_DeceitClass;
}


// CDOTA_Item_Smoke_Of_Deceit::YouForgotToImplementOrDeclareServerClass  (line 43, @0x0000000002dff000, libserver.so)
int __fastcall CDOTA_Item_Smoke_Of_Deceit::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Smoke_Of_Deceit *const this)
{
  return 0;
}


// CDOTA_Item_Smoke_Of_Deceit::GetServerClass  (line 43, @0x0000000002e02e50, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Smoke_Of_Deceit::GetServerClass(CDOTA_Item_Smoke_Of_Deceit *const this)
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


// CDOTA_Item_Smoke_Of_Deceit::OnSpellStart  (line 52, @0x0000000002e09380, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, Vector, entindex, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Item::SpendCharge, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, FindUnitsInRadius (21 total)
// strings: "application_radius", "visibility_radius", "modifier_smoke_of_deceit", "fadetime", "particles/items2_fx/smoke_of_deceit.vpcf", "DOTA_Item.SmokeOfDeceit.Activate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Smoke_Of_Deceit::OnSpellStart(CDOTA_Item_Smoke_Of_Deceit *const this)
{
  int LevelSpecialValue; // r15d
  int v3; // r14d
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_ParticleManager *v10; // rax
  __m128i v11; // xmm3
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // r12
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r15
  CDOTA_BaseNPC *v17; // rax
  __int64 v18; // rbx
  CHandle<CBaseEntity> *v19; // rdx
  uint32 m_Index; // eax
  __int16 v21; // cx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  const CBaseEntity *v25; // rdi
  const Vector *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CEntityIndex v30; // eax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > enemyUnits; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+98h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  CDOTA_Item::SpendCharge(this);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "application_radius", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "visibility_radius", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_smoke_of_deceit");
  KeyValues::SetFloat(&kv, "duration", v4);
  KeyValues::SetFloat(&kv, "fadetime", v5);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/items2_fx/smoke_of_deceit.vpcf",
               2,
               0,
               0,
               0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
  *v11.m128i_i32 = LevelSpecialValue;
  *(&enemyUnits.m_Size + 1) = 1065353216;
  LODWORD(AbsOrigin) = _mm_cvtsi128_si32(v11);
  *&enemyUnits.m_Size = LevelSpecialValue;
  *&enemyUnits.m_Memory.m_pMemory = LevelSpecialValue;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, Particle, 1, *&enemyUnits.m_Size, LevelSpecialValue);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v13, Particle);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = CBaseEntity::GetAbsOrigin(v15);
  v17 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v17->m_iTeamNum.m_Value, v16, v14, *&AbsOrigin, &entities, 1, 3, 1024, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v18 = 0;
    do
    {
      while ( 1 )
      {
        v19 = &entities.m_Memory.m_pMemory[v18];
        m_Index = v19->m_Index;
        if ( v19->m_Index + 2 > 1 )
        {
          v21 = v19->m_Index;
          v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v19->m_Index) >> 9) & 0x3F];
          if ( v22 != 0 )
          {
            v23 = &v22[v21 & 0x1FF];
            if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
            {
              m_pInstance = v23->m_pInstance;
              if ( v23->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                v25 = v23->m_pInstance;
                enemyUnits.m_Size = 0;
                enemyUnits.m_Memory.m_pMemory = 0;
                enemyUnits.m_Memory.m_nAllocationCount = 0;
                enemyUnits.m_Memory.m_nGrowSize = 0;
                v26 = CBaseEntity::GetAbsOrigin(v25);
                FindUnitsInRadius(
                  m_pInstance->m_iTeamNum.m_Value,
                  v26,
                  m_pInstance,
                  v3,
                  &enemyUnits,
                  2,
                  1,
                  401488,
                  0,
                  0);
                if ( enemyUnits.m_Size == 0 )
                {
                  v27 = CDOTABaseAbility::GetCaster(this);
                  CDOTA_BaseNPC::AddNewModifier(m_pInstance, v27, this, "modifier_smoke_of_deceit", &kv, 0);
                }
                enemyUnits.m_Size = 0;
                if ( (enemyUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                {
                  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&enemyUnits.m_Memory);
                  if ( (enemyUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                    break;
                }
              }
            }
          }
        }
        if ( entities.m_Size <= ++v18 )
          goto LABEL_15;
      }
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&enemyUnits.m_Memory);
      ++v18;
    }
    while ( entities.m_Size > v18 );
  }
LABEL_15:
  v28 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v28, "DOTA_Item.SmokeOfDeceit.Activate", 0.0, 0, 0);
  v29 = CDOTABaseAbility::GetCaster(this);
  v30.m_Data = CEntityInstance::GetEntityIndex(v29).m_Data;
  CreateUnitEvent(v30, 0, 8, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_GENERIC_ITEM_USAGE);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Smoke_Of_Deceit::~CDOTA_Modifier_Smoke_Of_Deceit  (line 102, @0x0000000002e0e2e0, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Smoke_Of_Deceit::~CDOTA_Modifier_Smoke_Of_Deceit(
        CDOTA_Modifier_Smoke_Of_Deceit *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Smoke_Of_Deceit::~CDOTA_Modifier_Smoke_Of_Deceit  (line 102, @0x0000000002e0e300, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_Smoke_Of_Deceit
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Smoke_Of_Deceit::~CDOTA_Modifier_Smoke_Of_Deceit(
        CDOTA_Modifier_Smoke_Of_Deceit *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Smoke_Of_Deceit::GetEffectName  (line 110, @0x0000000002e0b760, libserver.so)
// strings: "particles/items2_fx/smoke_of_deceit_buff.vpcf"
const char *__fastcall CDOTA_Modifier_Smoke_Of_Deceit::GetEffectName(CDOTA_Modifier_Smoke_Of_Deceit *const this)
{
  return "particles/items2_fx/smoke_of_deceit_buff.vpcf";
}


// CDOTA_Modifier_Smoke_Of_Deceit::GetPriority  (line 111, @0x0000000002e0b770, libserver.so)
int __fastcall CDOTA_Modifier_Smoke_Of_Deceit::GetPriority(CDOTA_Modifier_Smoke_Of_Deceit *const this)
{
  return 3;
}


// CDOTA_Modifier_Smoke_Of_Deceit::GetTexture  (line 118, @0x0000000002e0b780, libserver.so)
// strings: "item_smoke_of_deceit"
const char *__fastcall CDOTA_Modifier_Smoke_Of_Deceit::GetTexture(CDOTA_Modifier_Smoke_Of_Deceit *const this)
{
  return "item_smoke_of_deceit";
}


// CDOTA_Modifier_Smoke_Of_Deceit::OnCreated  (line 140, @0x0000000002e073a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetTeamNumber, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Modifier_Invisible::OnCreated, CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeRequest, CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeEndState, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "visibility_radius"
void __fastcall CDOTA_Modifier_Smoke_Of_Deceit::OnCreated(CDOTA_Modifier_Smoke_Of_Deceit *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  float visibility_radius; // xmm1_4
  CDOTA_BaseNPC *Parent; // r15
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v13; // rax
  Vector *vPosition; // [rsp+20h] [rbp-80h]
  CDOTA_BaseNPC *vPositiona; // [rsp+20h] [rbp-80h]
  float flRadius; // [rsp+2Ch] [rbp-74h]
  float flRadiusa; // [rsp+2Ch] [rbp-74h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > enemies; // [rsp+30h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > teammates; // [rsp+50h] [rbp-50h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_movement_speed, "bonus_movement_speed");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->visibility_radius, "visibility_radius");
  CDOTA_Buff::StartIntervalThink(this, 0.1, v6);
  visibility_radius = this->visibility_radius;
  enemies.m_Size = 0;
  enemies.m_Memory.m_pMemory = 0;
  enemies.m_Memory.m_nAllocationCount = 0;
  enemies.m_Memory.m_nGrowSize = 0;
  teammates.m_Size = 0;
  teammates.m_Memory.m_pMemory = 0;
  teammates.m_Memory.m_nAllocationCount = 0;
  teammates.m_Memory.m_nGrowSize = 0;
  flRadius = visibility_radius;
  Parent = CDOTA_Buff::GetParent(this);
  v9 = CDOTA_Buff::GetParent(this);
  vPosition = CBaseEntity::GetAbsOrigin(v9);
  v10 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v10->m_iTeamNum.m_Value, vPosition, Parent, flRadius, &enemies, 2, 1, 0x2000, 0, 0);
  flRadiusa = this->visibility_radius;
  vPositiona = CDOTA_Buff::GetParent(this);
  v11 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v13->m_iTeamNum.m_Value, AbsOrigin, vPositiona, flRadiusa, &teammates, 1, 1, 0x2000, 0, 0);
  if ( enemies.m_Size == 0 && teammates.m_Size > 2 )
  {
    CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeRequest(this, 1);
    CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeEndState(this, 0);
  }
  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
  teammates.m_Size = 0;
  if ( (teammates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&teammates.m_Memory);
    if ( (teammates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&teammates.m_Memory);
  }
  enemies.m_Size = 0;
  if ( (enemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&enemies.m_Memory);
    if ( (enemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&enemies.m_Memory);
  }
}


// CDOTA_Modifier_Smoke_Of_Deceit::AddCustomTransmiterData  (line 167, @0x0000000002e001e0, libserver.so)  // inlines: set_has_movement_speed, set_movement_speed
// calls: CDOTA_Modifier_Invisible::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Smoke_Of_Deceit::AddCustomTransmiterData(
        CDOTA_Modifier_Smoke_Of_Deceit *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int bonus_movement_speed; // eax

  bonus_movement_speed = this->bonus_movement_speed;
  *(entry + 4) |= 0x200000u;
  *(entry + 32) = bonus_movement_speed;
  CDOTA_Modifier_Invisible::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_Smoke_Of_Deceit::OnAttack  (line 183, @0x0000000002e03620, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Modifier_Invisible::OnAttack, CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeEndState
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Smoke_Of_Deceit::OnAttack(
        CDOTA_Modifier_Smoke_Of_Deceit *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hattacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance
    && (*(this->_vptr_CDOTA_Buff + 93))(this) != 0
    && !params->bIgnoreInvis )
  {
    CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeEndState(this, 1);
  }
  return CDOTA_Modifier_Invisible::OnAttack(this, params);
}


// CDOTA_Modifier_Smoke_Of_Deceit::OnDestroy  (line 203, @0x0000000002e03580, libserver.so)
// calls: CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeRequest
void __fastcall CDOTA_Modifier_Smoke_Of_Deceit::OnDestroy(CDOTA_Modifier_Smoke_Of_Deceit *const this)
{
  CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeRequest(this, 0);
}


// CDOTA_Modifier_Smoke_Of_Deceit::OnIntervalThink  (line 216, @0x0000000002e06a60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, GetTeamNumber, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, ~CUtlVector
// calls: CDOTAGamerules::GetNumTowers, CDOTAGamerules::GetTower, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::Destroy, CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeEndState, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CDOTA_Modifier_Smoke_Of_Deceit::OnIntervalThink(CDOTA_Modifier_Smoke_Of_Deceit *const this)
{
  int i; // ebx
  __m128i v3; // xmm2
  CDOTA_BaseNPC_Tower *Tower; // rax
  const CBaseEntity *v5; // r12
  unsigned __int8 m_Value; // r15
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r15
  const Vector *v9; // rax
  float v10; // r15d
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // r12
  CDOTA_BaseNPC *v14; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  for ( i = 0; i < CDOTAGamerules::GetNumTowers(g_pGameRules); ++i )
  {
    Tower = CDOTAGamerules::GetTower(g_pGameRules, i);
    v5 = Tower;
    if ( Tower != 0 && (*(Tower->_vptr_IHandleEntity + 408))(Tower) != 0 )
    {
      m_Value = v5->m_iTeamNum.m_Value;
      if ( m_Value != CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
      {
        Parent = CDOTA_Buff::GetParent(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
        v9 = CBaseEntity::GetAbsOrigin(v5);
        if ( this->visibility_radius > fsqrt(
                                         ((v9->x - AbsOrigin->x) * (v9->x - AbsOrigin->x))
                                       + ((v9->y - AbsOrigin->y) * (v9->y - AbsOrigin->y))) )
        {
          CDOTA_Buff::Destroy(this, 0, 0, 0);
          CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeEndState(this, 2);
          return;
        }
      }
    }
  }
  entities.m_Size = 0;
  *v3.m128i_i32 = this->visibility_radius;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v11 = CDOTA_Buff::GetParent(this);
  v12 = CDOTA_Buff::GetParent(this);
  v13 = CBaseEntity::GetAbsOrigin(v12);
  v14 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v14->m_iTeamNum.m_Value, v13, v11, v10, &entities, 2, 1, 401488, 0, 0);
  if ( entities.m_Size > 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeEndState(this, 3);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Smoke_Of_Deceit::DeclareFunctions  (line 243, @0x0000000002e00200, libserver.so)  // inlines: SetFunction
// calls: CDOTA_Modifier_Invisible::DeclareFunctions
void __fastcall CDOTA_Modifier_Smoke_Of_Deceit::DeclareFunctions(CDOTA_Modifier_Smoke_Of_Deceit *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 737);
  this->m_Functions[13].__delta = 0;
  CDOTA_Modifier_Invisible::DeclareFunctions(this);
}


// CDOTA_Modifier_Smoke_Of_Deceit::GetModifierMoveSpeedBonus_Percentage  (line 252, @0x0000000002dff010, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Smoke_Of_Deceit::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Smoke_Of_Deceit *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Smoke_Of_Deceit::OnAbilityExecuted  (line 257, @0x0000000002dff030, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Smoke_Of_Deceit::OnAbilityExecuted(
        CDOTA_Modifier_Smoke_Of_Deceit *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Smoke_Of_Deceit::CheckState  (line 263, @0x0000000002e00220, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Smoke_Of_Deceit::CheckState(
        CDOTA_Modifier_Smoke_Of_Deceit *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x400200000uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFBFFDFFFFFLL;
}


// CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeRequest  (line 272, @0x0000000002e034f0, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: CDOTA_Buff::GetParent, memcmp
// callers: CDOTA_Modifier_Smoke_Of_Deceit::OnDestroy, CDOTA_Modifier_Smoke_Of_Deceit::OnCreated
void __fastcall CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeRequest(
        CDOTA_Modifier_Smoke_Of_Deceit *const this,
        int num)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // rax
  _DWORD *v5; // rbx
  int numa[5]; // [rsp+Ch] [rbp-14h] BYREF

  numa[0] = num;
  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 413))(Parent) != 0 )
  {
    v4 = CDOTA_Buff::GetParent(this);
    v5 = (*(v4->_vptr_IHandleEntity + 413))(v4);
    if ( memcmp(v5 + 1189, numa, 4u) != 0 )
    {
      (*(*v5 + 176LL))(v5, 4756, 0, 0xFFFFFFFFLL);
      v5[1189] = numa[0];
    }
  }
}


// CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeEndState  (line 281, @0x0000000002e03590, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: CDOTA_Buff::GetParent, memcmp
// callers: CDOTA_Modifier_Smoke_Of_Deceit::OnAttack, CDOTA_Modifier_Smoke_Of_Deceit::OnIntervalThink, CDOTA_Modifier_Smoke_Of_Deceit::OnCreated
void __fastcall CDOTA_Modifier_Smoke_Of_Deceit::SetMusicSmokeEndState(
        CDOTA_Modifier_Smoke_Of_Deceit *const this,
        int num)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // rax
  _DWORD *v5; // rbx
  int numa[5]; // [rsp+Ch] [rbp-14h] BYREF

  numa[0] = num;
  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 413))(Parent) != 0 )
  {
    v4 = CDOTA_Buff::GetParent(this);
    v5 = (*(v4->_vptr_IHandleEntity + 413))(v4);
    if ( memcmp(v5 + 1190, numa, 4u) != 0 )
    {
      (*(*v5 + 176LL))(v5, 4756, 1, 0xFFFFFFFFLL);
      v5[1190] = numa[0];
    }
  }
}


