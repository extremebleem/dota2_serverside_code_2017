// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_blink_dagger.cpp:33
class CDOTA_Item_BlinkDagger : public CDOTA_Item {
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
	CDOTA_Item_BlinkDagger(CDOTA_Item_BlinkDagger &);
	CDOTA_Item_BlinkDagger(CDOTA_Item_BlinkDagger &);
	CDOTA_Item_BlinkDagger();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual ~CDOTA_Item_BlinkDagger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_blink_dagger.cpp:52
class C_CDOTA_Item_BlinkDagger_MapInstall {
	C_CDOTA_Item_BlinkDagger_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_blink_dagger.cpp:162
class CDOTA_Modifier_Item_BlinkDagger : public CDOTA_Buff_Item {
public:

private:

	float blink_damage_cooldown;  // +0xba8
	CDOTA_Modifier_Item_BlinkDagger();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_BlinkDagger();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_BlinkDagger::~CDOTA_Item_BlinkDagger  (line 33, @0x0000000002d648a0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_BlinkDagger::~CDOTA_Item_BlinkDagger(CDOTA_Item_BlinkDagger *const this)
{
  this->_vptr_IHandleEntity = &off_469A150;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_BlinkDagger::~CDOTA_Item_BlinkDagger  (line 33, @0x0000000002d648c0, libserver.so)  // inlines: ~CDOTA_Item_BlinkDagger
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_BlinkDagger::~CDOTA_Item_BlinkDagger(CDOTA_Item_BlinkDagger *const this)
{
  this->_vptr_IHandleEntity = &off_469A150;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_BlinkDagger::Schema_DynamicBinding  (line 35, @0x0000000002d612d0, libserver.so)
// globals: CDOTA_Item_BlinkDagger::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BlinkDagger::Schema_DynamicBinding(
        const CDOTA_Item_BlinkDagger *const this)
{
  return CDOTA_Item_BlinkDagger::s_pSchemaBinding;
}


// CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002d612e0, libserver.so)
// globals: CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002d612f0, libserver.so)  // inlines: Destruct<CDOTA_Item_BlinkDagger>
void __fastcall CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002d61310, libserver.so)
void __fastcall CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002d61330, libserver.so)
bool __fastcall CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002d61340, libserver.so)
// globals: CDOTA_Item_BlinkDagger::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BlinkDagger::s_pSchemaBinding;
}


// CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002d62830, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002d63900, libserver.so)  // inlines: CDOTA_Item_BlinkDagger, Construct<CDOTA_Item_BlinkDagger>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_469A150;
  }
  return p;
}


// CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002d667c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002d667e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_BlinkDagger::GetEntityClassInternal  (line 35, @0x0000000002d6d350, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_blink", "CDOTA_Item_BlinkDagger"
// globals: `guard variable for'CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass, CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass, __dso_handle, CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_BlinkDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BlinkDaggerClassInfo, CDOTA_Item_BlinkDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BlinkDaggerClassInfo
CEntityClass *__cdecl CDOTA_Item_BlinkDagger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass);
    CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass._vptr_CEntityClass = off_469A0D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass);
    __cxa_atexit(
      CDOTA_Item_BlinkDagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BlinkDaggerClass != 0 )
    return &CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass;
  if ( `guard variable for'CDOTA_Item_BlinkDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BlinkDaggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BlinkDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BlinkDaggerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_BlinkDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BlinkDaggerClassInfo,
      "CDOTA_Item_BlinkDagger",
      "item_blink",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BlinkDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BlinkDaggerClassInfo);
  }
  CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass.m_pClassInfo = &CDOTA_Item_BlinkDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BlinkDaggerClassInfo;
  CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass.m_pBaseClassInfo = CDOTA_Item_BlinkDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BlinkDaggerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BlinkDaggerClass = &CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass;
  CDOTA_Item_BlinkDagger::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BlinkDaggerClassInfo.m_pClass = &CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass;
  CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BlinkDaggerClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_BlinkDagger::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BlinkDaggerClass;
}


// CDOTA_Item_BlinkDagger::GetIntrinsicModifierName  (line 39, @0x0000000002d61350, libserver.so)
// strings: "modifier_item_blink_dagger"
const char *__fastcall CDOTA_Item_BlinkDagger::GetIntrinsicModifierName(CDOTA_Item_BlinkDagger *const this)
{
  return "modifier_item_blink_dagger";
}


// CDOTA_Item_BlinkDagger::YouForgotToImplementOrDeclareServerClass  (line 52, @0x0000000002d546a0, libserver.so)
int __fastcall CDOTA_Item_BlinkDagger::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_BlinkDagger *const this)
{
  return 0;
}


// CDOTA_Item_BlinkDagger::GetServerClass  (line 52, @0x0000000002d58870, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_BlinkDagger::GetServerClass(CDOTA_Item_BlinkDagger *const this)
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


// CDOTA_Item_BlinkDagger::OnSpellStart  (line 85, @0x0000000002d5dfd0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlString, GetEHandle, GetEntryIndex, GetSerialNumber, Set, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-, operator=, ~CUtlString
// calls: CUtlString::Set, CDOTABaseAbility::GetCaster, CUtlString::Get, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::PrimeResumePreviousMovement (22 total)
// strings: "particles/items_fx/blink_dagger_start.vpcf", "particles/items_fx/blink_dagger_end.vpcf", "blink_range_clamp", "DOTA_Item.BlinkDagger.Activate", "DOTA_Item.BlinkDagger.NailedIt"
void __fastcall CDOTA_Item_BlinkDagger::OnSpellStart(CDOTA_Item_BlinkDagger *const this)
{
  CDOTA_BaseNPC *Caster; // r15
  const char *v3; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  const Vector *v10; // r14
  vec_t v11; // xmm0_4
  vec_t v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // rax
  vec_t y; // xmm7_4
  vec_t z; // xmm6_4
  int v17; // r14d
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v23; // eax
  __int16 v24; // cx
  CDOTA_BaseNPC *v25; // r15
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  const char *ReplacementSound; // r15
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  int v33; // eax
  CDOTA_BaseNPC *v34; // rax
  float v35; // [rsp+4h] [rbp-ACh]
  char *pParticleName; // [rsp+8h] [rbp-A8h]
  float flLength; // [rsp+1Ch] [rbp-94h]
  CUtlString sFXNameStart; // [rsp+20h] [rbp-90h] BYREF
  CUtlString sFXNameEnd; // [rsp+30h] [rbp-80h] BYREF
  Vector vDirection; // [rsp+40h] [rbp-70h] BYREF
  Vector hTarget; // [rsp+50h] [rbp-60h] BYREF
  Vector vPos; // [rsp+60h] [rbp-50h]
  Vector v44; // [rsp+70h] [rbp-40h]
  Vector v45; // 0:^10.12

  sFXNameStart.m_pString = 0;
  CUtlString::Set(&sFXNameStart, "particles/items_fx/blink_dagger_start.vpcf");
  sFXNameEnd.m_pString = 0;
  CUtlString::Set(&sFXNameEnd, "particles/items_fx/blink_dagger_end.vpcf");
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CUtlString::Get(&sFXNameStart);
  ParticleManager = GetParticleManager();
  LODWORD(v3) = CDOTA_ParticleManager::CreateParticle(ParticleManager, v3, 2, 0, 0, Caster);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v7, v3, 0, *&AbsOrigin->x, AbsOrigin->z);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v8, v3);
  v9 = CDOTABaseAbility::GetCaster(this);
  v10 = CBaseEntity::GetAbsOrigin(v9);
  hTarget = CDOTABaseAbility::GetCursorPosition(this);
  v11 = hTarget.y - v10->y;
  v12 = hTarget.x - v10->x;
  vDirection.z = 0.0;
  vDirection.y = v11;
  vDirection.x = v12;
  flLength = VectorNormalize(&vDirection);
  vPos = CDOTABaseAbility::GetCursorPosition(this);
  v13 = CDOTABaseAbility::GetCaster(this);
  v14 = CBaseEntity::GetAbsOrigin(v13);
  y = v14->y;
  v45.x = v14->x;
  z = v14->z;
  v44 = *v14;
  v45.y = y;
  v45.z = z;
  LODWORD(v10) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "blink_range", -1, 0);
  LODWORD(AbsOrigin) = v10 + (*(this->_vptr_IHandleEntity + 228))(this);
  LODWORD(v10) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "blink_range_clamp", -1, 0);
  v17 = (*(this->_vptr_IHandleEntity + 228))(this) + v10;
  v35 = AbsOrigin;
  if ( flLength > AbsOrigin )
  {
    vPos.y = (vDirection.y * v17) + v45.y;
    vPos.z = (vDirection.z * v17) + v45.z;
    vPos.x = (v17 * vDirection.x) + v45.x;
  }
  v18 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::PrimeResumePreviousMovement(v18);
  v19 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::MarkBlinkDaggerTime(v19);
  v20 = CDOTABaseAbility::GetCaster(this);
  FindClearSpaceForUnit(v20, vPos, 1);
  v21 = CDOTABaseAbility::GetCaster(this);
  hTarget.x = NAN;
  if ( v21 != 0 )
  {
    m_pEntity = v21->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v24 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(hTarget.x) = v24 | LOWORD(hTarget.x) & 0x8000;
      LODWORD(hTarget.x) = (v23 << 15) | LOWORD(hTarget.x) & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
  v25 = CDOTABaseAbility::GetCaster(this);
  pParticleName = CUtlString::Get(&sFXNameEnd);
  v26 = GetParticleManager();
  LODWORD(v25) = CDOTA_ParticleManager::CreateParticle(v26, pParticleName, 1, v25, 0, 0);
  v27 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v27, v25);
  v28 = CDOTABaseAbility::GetCaster(this);
  v44 = v45;
  CDOTA_BaseNPC::UpdateResumePreviousMovementAfterTeleport(v28, *&v45.x, v45.z);
  v29 = CDOTABaseAbility::GetCaster(this);
  ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v29, "DOTA_Item.BlinkDagger.Activate");
  v31 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v31, ReplacementSound, 0.0, 0, 0);
  if ( flLength > v17 && v35 >= flLength )
  {
    v34 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "DOTA_Item.BlinkDagger.NailedIt", v34);
  }
  v32 = CDOTABaseAbility::GetCaster(this);
  v33 = (*(v32->_vptr_IHandleEntity + 414))(v32);
  IncrementCommunityGoal(EEvent::EVENT_ID_INTERNATIONAL_2016, EEventCommunityGoals_t::ECG_TI6_Blinks, 1u, v33);
  if ( sFXNameEnd.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&sFXNameEnd);
  if ( sFXNameStart.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&sFXNameStart);
}


// CDOTA_Item_BlinkDagger::CastFilterResult  (line 138, @0x0000000002d553b0, libserver.so)  // inlines: GetTeamMapping, GetTeamNumber
// calls: CDOTABaseAbility::GetCaster, FoW_TeamNumberToFoWIndex, CDOTAFogOfWarSystem::GetFoW, CFoW::GetLocationInfo, IsUnexplored
int __fastcall CDOTA_Item_BlinkDagger::CastFilterResult(
        CDOTA_Item_BlinkDagger *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v4; // ebx
  CFoW *FoW; // rax
  uint32 LocationInfo; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = FoW_TeamNumberToFoWIndex(Caster->m_iTeamNum.m_Value);
  FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
  LocationInfo = CFoW::GetLocationInfo(FoW, v4, vLocation);
  return IsUnexplored(LocationInfo) ? 0x17 : 0;
}


// CDOTA_Item_BlinkDagger::GetCustomCastError  (line 153, @0x0000000002d546b0, libserver.so)
// strings: "#dota_hud_error_cant_target_unexplored"
const char *__fastcall CDOTA_Item_BlinkDagger::GetCustomCastError(
        CDOTA_Item_BlinkDagger *const this,
        const Vector *const vLocation)
{
  return "#dota_hud_error_cant_target_unexplored";
}


// CDOTA_Modifier_Item_BlinkDagger::~CDOTA_Modifier_Item_BlinkDagger  (line 162, @0x0000000002d62bc0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_BlinkDagger::~CDOTA_Modifier_Item_BlinkDagger(
        CDOTA_Modifier_Item_BlinkDagger *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_BlinkDagger::~CDOTA_Modifier_Item_BlinkDagger  (line 162, @0x0000000002d62be0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_BlinkDagger
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_BlinkDagger::~CDOTA_Modifier_Item_BlinkDagger(
        CDOTA_Modifier_Item_BlinkDagger *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_BlinkDagger::OnCreated  (line 181, @0x0000000002d5cf80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "blink_damage_cooldown"
void __fastcall CDOTA_Modifier_Item_BlinkDagger::OnCreated(CDOTA_Modifier_Item_BlinkDagger *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->blink_damage_cooldown = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                    Ability,
                                    "blink_damage_cooldown",
                                    -1,
                                    0);
  else
    this->blink_damage_cooldown = 0.0;
}


// CDOTA_Modifier_Item_BlinkDagger::DeclareFunctions  (line 188, @0x0000000002d546c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_BlinkDagger::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_BlinkDagger::DeclareFunctions(CDOTA_Modifier_Item_BlinkDagger *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_Item_BlinkDagger::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Item_BlinkDagger::OnTakeDamage  (line 195, @0x0000000002d57b40, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetCooldownTimeRemaining
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_BlinkDagger::OnTakeDamage(
        CDOTA_Modifier_Item_BlinkDagger *const this,
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
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v14; // rax

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
          Ability = CDOTA_Buff::GetAbility(this);
          if ( this->blink_damage_cooldown > CDOTABaseAbility::GetCooldownTimeRemaining(Ability) )
          {
            v14 = CDOTA_Buff::GetAbility(this);
            (*(v14->_vptr_IHandleEntity + 241))(v14, this->blink_damage_cooldown);
          }
        }
      }
    }
  }
  return 1uLL;
}


