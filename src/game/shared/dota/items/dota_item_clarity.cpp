// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_clarity.cpp:30
class CDOTA_Item_Clarity : public CDOTA_Item {
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
	CDOTA_Item_Clarity(CDOTA_Item_Clarity &);
	CDOTA_Item_Clarity(CDOTA_Item_Clarity &);
	CDOTA_Item_Clarity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnSpellStart();
	virtual bool CausesAutoattack();
	virtual ~CDOTA_Item_Clarity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[266] OnSpellStart
	// vtable[222] CausesAutoattack
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_clarity.cpp:84
class CDOTA_Modifier_ClarityPotion : public CDOTA_Buff {
public:

private:

	int total_mana;  // +0xba8
	CDOTA_Modifier_ClarityPotion();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_ClarityPotion();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[32] GetTexture
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Clarity::~CDOTA_Item_Clarity  (line 30, @0x0000000002d85fa0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Clarity::~CDOTA_Item_Clarity(CDOTA_Item_Clarity *const this)
{
  this->_vptr_IHandleEntity = &off_46BB770;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Clarity::~CDOTA_Item_Clarity  (line 30, @0x0000000002d85fc0, libserver.so)  // inlines: ~CDOTA_Item_Clarity
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Clarity::~CDOTA_Item_Clarity(CDOTA_Item_Clarity *const this)
{
  this->_vptr_IHandleEntity = &off_46BB770;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Clarity::Schema_DynamicBinding  (line 32, @0x0000000002d80f90, libserver.so)
// globals: CDOTA_Item_Clarity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Clarity::Schema_DynamicBinding(
        const CDOTA_Item_Clarity *const this)
{
  return CDOTA_Item_Clarity::s_pSchemaBinding;
}


// CDOTA_Item_Clarity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000002d80fa0, libserver.so)
// globals: CDOTA_Item_Clarity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Clarity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Clarity::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Clarity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Clarity::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000002d80fb0, libserver.so)  // inlines: Destruct<CDOTA_Item_Clarity>
void __fastcall CDOTA_Item_Clarity::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Clarity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Clarity::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000002d80fd0, libserver.so)
void __fastcall CDOTA_Item_Clarity::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Clarity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Clarity::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002d80ff0, libserver.so)
bool __fastcall CDOTA_Item_Clarity::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Clarity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Clarity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000002d81000, libserver.so)
// globals: CDOTA_Item_Clarity::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Clarity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Clarity::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Clarity::s_pSchemaBinding;
}


// CDOTA_Item_Clarity::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002d836f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Clarity::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Clarity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Clarity::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000002d84c80, libserver.so)  // inlines: CDOTA_Item_Clarity, Construct<CDOTA_Item_Clarity>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Clarity::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Clarity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46BB770;
  }
  return p;
}


// CDOTA_Item_Clarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002d88610, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Clarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Clarity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Clarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002d88630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Clarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Clarity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Clarity::GetEntityClassInternal  (line 32, @0x0000000002d900c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_clarity", "CDOTA_Item_Clarity"
// globals: `guard variable for'CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass, CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass, __dso_handle, CDOTA_Item_Clarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Clarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClarityClassInfo, CDOTA_Item_Clarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClarityClassInfo
CEntityClass *__cdecl CDOTA_Item_Clarity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass);
    CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass._vptr_CEntityClass = off_46BB6F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass);
    __cxa_atexit(
      CDOTA_Item_Clarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_ClarityClass != 0 )
    return &CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass;
  if ( `guard variable for'CDOTA_Item_Clarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClarityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Clarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClarityClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Clarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClarityClassInfo,
      "CDOTA_Item_Clarity",
      "item_clarity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Clarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClarityClassInfo);
  }
  CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass.m_pClassInfo = &CDOTA_Item_Clarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClarityClassInfo;
  CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass.m_pBaseClassInfo = CDOTA_Item_Clarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClarityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_ClarityClass = &CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass;
  CDOTA_Item_Clarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClarityClassInfo.m_pClass = &CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass;
  CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_ClarityClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Clarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClarityClass;
}


// CDOTA_Item_Clarity::CausesAutoattack  (line 38, @0x0000000002d81010, libserver.so)
bool __fastcall CDOTA_Item_Clarity::CausesAutoattack(CDOTA_Item_Clarity *const this)
{
  return 0;
}


// CDOTA_Item_Clarity::Precache  (line 46, @0x0000000002d6fb20, libserver.so)
// calls: CDOTA_Item::Precache, PrecacheParticleSystem
// strings: "particles/items_fx/healing_clarity.vpcf"
void __fastcall CDOTA_Item_Clarity::Precache(CDOTA_Item_Clarity *const this, const CEntityPrecacheContext *pContext)
{
  CDOTA_Item::Precache(this, pContext);
  PrecacheParticleSystem("particles/items_fx/healing_clarity.vpcf", pContext);
}


// CDOTA_Item_Clarity::OnSpellStart  (line 55, @0x0000000002d7b3f0, libserver.so)  // inlines: QueueConcept, ToDOTABaseNPC
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::SetInt, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_Item::SpendCharge, DOTA_EmitSound, CDOTA_Speech::QueueConcept, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "CDOTA_Item_Clarity::OnSpellStart", "modifier_clarity_potion", "DOTA_Item.ClarityPotion.Activate"
void __fastcall CDOTA_Item_Clarity::OnSpellStart(CDOTA_Item_Clarity *const this)
{
  int LevelSpecialValue; // eax
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v4; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "CDOTA_Item_Clarity::OnSpellStart");
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "buff_duration", -1, 0);
  KeyValues::SetInt(&kv, "duration", LevelSpecialValue);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_clarity_potion", &kv, 0);
    CDOTA_Item::SpendCharge(this);
    DOTA_EmitSound(8, "DOTA_Item.ClarityPotion.Activate", v4);
    if ( v4 != CDOTABaseAbility::GetCaster(this) )
    {
      m_pSpeech = v4->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 26, 0.25, 0, 0, 1, 0, 0, 0);
    }
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_ClarityPotion::~CDOTA_Modifier_ClarityPotion  (line 84, @0x0000000002d84690, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ClarityPotion::~CDOTA_Modifier_ClarityPotion(CDOTA_Modifier_ClarityPotion *const this)
{
  this->_vptr_CDOTA_Buff = &off_46BC330;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ClarityPotion::~CDOTA_Modifier_ClarityPotion  (line 84, @0x0000000002d846b0, libserver.so)  // inlines: ~CDOTA_Modifier_ClarityPotion
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ClarityPotion::~CDOTA_Modifier_ClarityPotion(CDOTA_Modifier_ClarityPotion *const this)
{
  this->_vptr_CDOTA_Buff = &off_46BC330;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ClarityPotion::IsPurgable  (line 90, @0x0000000002d81020, libserver.so)
bool __fastcall CDOTA_Modifier_ClarityPotion::IsPurgable(CDOTA_Modifier_ClarityPotion *const this)
{
  return 0;
}


// CDOTA_Modifier_ClarityPotion::OnCreated  (line 106, @0x0000000002d7b830, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "total_mana"
void __fastcall CDOTA_Modifier_ClarityPotion::OnCreated(CDOTA_Modifier_ClarityPotion *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->total_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "total_mana", -1, 0);
  else
    this->total_mana = 0;
}


// CDOTA_Modifier_ClarityPotion::DeclareFunctions  (line 118, @0x0000000002d6f020, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ClarityPotion::GetModifierConstantManaRegen(CModifierParams const&), CDOTA_Modifier_ClarityPotion::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_ClarityPotion::DeclareFunctions(CDOTA_Modifier_ClarityPotion *const this)
{
  this->m_Functions[52].__pfn = CDOTA_Modifier_ClarityPotion::GetModifierConstantManaRegen;
  this->m_Functions[52].__delta = 0;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_ClarityPotion::OnTakeDamage;
}


// CDOTA_Modifier_ClarityPotion::GetModifierConstantManaRegen  (line 126, @0x0000000002d6f060, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ClarityPotion::GetModifierConstantManaRegen(
        CDOTA_Modifier_ClarityPotion *const this,
        const CModifierParams *const params)
{
  float v2; // xmm0_4
  __int64 v3; // xmm1_8
  unsigned int v5; // [rsp+Ch] [rbp-4h]
  ModifierVariant_t result; // 0:rax.16

  *&v5 = this->total_mana;
  v2 = (*(this->_vptr_CDOTA_Buff + 31))(this, params);
  v3 = v5;
  result.m_szVal = 0;
  *&v3 = *&v5 / v2;
  *&result.m_eType = (v3 << 32) | 1;
  return result;
}


// CDOTA_Modifier_ClarityPotion::OnTakeDamage  (line 133, @0x0000000002d726b0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ClarityPotion::OnTakeDamage(
        CDOTA_Modifier_ClarityPotion *const this,
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


// CDOTA_Modifier_ClarityPotion::GetTexture  (line 153, @0x0000000002d6f0a0, libserver.so)
// strings: "item_clarity"
const char *__fastcall CDOTA_Modifier_ClarityPotion::GetTexture(CDOTA_Modifier_ClarityPotion *const this)
{
  return "item_clarity";
}


