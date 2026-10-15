// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_infused_raindrop.cpp:26
class CDOTA_Item_Infused_Raindrop : public CDOTA_Item {
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
	CDOTA_Item_Infused_Raindrop(CDOTA_Item_Infused_Raindrop &);
	CDOTA_Item_Infused_Raindrop(CDOTA_Item_Infused_Raindrop &);
	CDOTA_Item_Infused_Raindrop();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Infused_Raindrop();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_infused_raindrop.cpp:40
class CDOTA_Modifier_Item_Infused_Raindrop : public CDOTA_Buff_Item {
public:

private:

	float mana_regen;  // +0xba8
	float bonus_armor;  // +0xbac
	int bonus_magical_armor;  // +0xbb0
	int magic_damage_block;  // +0xbb4
	int min_damage;  // +0xbb8
	CDOTA_Modifier_Item_Infused_Raindrop();
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierMagical_ConstantBlock(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Infused_Raindrop();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Infused_Raindrop::~CDOTA_Item_Infused_Raindrop  (line 26, @0x0000000002dbc720, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Infused_Raindrop::~CDOTA_Item_Infused_Raindrop(CDOTA_Item_Infused_Raindrop *const this)
{
  this->_vptr_IHandleEntity = &off_47002B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Infused_Raindrop::~CDOTA_Item_Infused_Raindrop  (line 26, @0x0000000002dbc740, libserver.so)  // inlines: ~CDOTA_Item_Infused_Raindrop
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Infused_Raindrop::~CDOTA_Item_Infused_Raindrop(CDOTA_Item_Infused_Raindrop *const this)
{
  this->_vptr_IHandleEntity = &off_47002B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Infused_Raindrop::Schema_DynamicBinding  (line 28, @0x0000000002db89b0, libserver.so)
// globals: CDOTA_Item_Infused_Raindrop::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Infused_Raindrop::Schema_DynamicBinding(
        const CDOTA_Item_Infused_Raindrop *const this)
{
  return CDOTA_Item_Infused_Raindrop::s_pSchemaBinding;
}


// CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002db89c0, libserver.so)
// globals: CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002db89d0, libserver.so)  // inlines: Destruct<CDOTA_Item_Infused_Raindrop>
void __fastcall CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002db89f0, libserver.so)
void __fastcall CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002db8a10, libserver.so)
bool __fastcall CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002db8a20, libserver.so)
// globals: CDOTA_Item_Infused_Raindrop::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Infused_Raindrop::s_pSchemaBinding;
}


// CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dba500, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dbb850, libserver.so)  // inlines: CDOTA_Item_Infused_Raindrop, Construct<CDOTA_Item_Infused_Raindrop>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47002B0;
  }
  return p;
}


// CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbe920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbe940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Infused_Raindrop::GetEntityClassInternal  (line 28, @0x0000000002dc3060, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_infused_raindrop", "CDOTA_Item_Infused_Raindrop"
// globals: `guard variable for'CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass, CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass, __dso_handle, CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Infused_Raindrop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Infused_RaindropClassInfo, CDOTA_Item_Infused_Raindrop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Infused_RaindropClassInfo
CEntityClass *__cdecl CDOTA_Item_Infused_Raindrop::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass);
    CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass._vptr_CEntityClass = off_4700230;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass);
    __cxa_atexit(
      CDOTA_Item_Infused_Raindrop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Infused_RaindropClass != 0 )
    return &CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass;
  if ( `guard variable for'CDOTA_Item_Infused_Raindrop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Infused_RaindropClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Infused_Raindrop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Infused_RaindropClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Infused_Raindrop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Infused_RaindropClassInfo,
      "CDOTA_Item_Infused_Raindrop",
      "item_infused_raindrop",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Infused_Raindrop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Infused_RaindropClassInfo);
  }
  CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass.m_pClassInfo = &CDOTA_Item_Infused_Raindrop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Infused_RaindropClassInfo;
  CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass.m_pBaseClassInfo = CDOTA_Item_Infused_Raindrop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Infused_RaindropClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Infused_RaindropClass = &CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass;
  CDOTA_Item_Infused_Raindrop::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Infused_RaindropClassInfo.m_pClass = &CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass;
  CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Infused_RaindropClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Infused_Raindrop::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Infused_RaindropClass;
}


// CDOTA_Item_Infused_Raindrop::GetIntrinsicModifierName  (line 30, @0x0000000002db8a30, libserver.so)
// strings: "modifier_item_infused_raindrop"
const char *__fastcall CDOTA_Item_Infused_Raindrop::GetIntrinsicModifierName(CDOTA_Item_Infused_Raindrop *const this)
{
  return "modifier_item_infused_raindrop";
}


// CDOTA_Modifier_Item_Infused_Raindrop::~CDOTA_Modifier_Item_Infused_Raindrop  (line 40, @0x0000000002dbafb0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Infused_Raindrop::~CDOTA_Modifier_Item_Infused_Raindrop(
        CDOTA_Modifier_Item_Infused_Raindrop *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Infused_Raindrop::~CDOTA_Modifier_Item_Infused_Raindrop  (line 40, @0x0000000002dbafd0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Infused_Raindrop
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Infused_Raindrop::~CDOTA_Modifier_Item_Infused_Raindrop(
        CDOTA_Modifier_Item_Infused_Raindrop *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Infused_Raindrop::DeclareFunctions  (line 62, @0x0000000002daaea0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Infused_Raindrop::GetModifierConstantManaRegen(CModifierParams const&), CDOTA_Modifier_Item_Infused_Raindrop::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Item_Infused_Raindrop::GetModifierMagicalResistanceBonus(CModifierParams const&), CDOTA_Modifier_Item_Infused_Raindrop::GetModifierMagical_ConstantBlock(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Infused_Raindrop::DeclareFunctions(
        CDOTA_Modifier_Item_Infused_Raindrop *const this)
{
  this->m_Functions[52].__pfn = CDOTA_Modifier_Item_Infused_Raindrop::GetModifierConstantManaRegen;
  this->m_Functions[52].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Infused_Raindrop::GetModifierPhysicalArmorBonus;
  this->m_Functions[49].__pfn = CDOTA_Modifier_Item_Infused_Raindrop::GetModifierMagicalResistanceBonus;
  this->m_Functions[49].__delta = 0;
  this->m_Functions[85].__pfn = CDOTA_Modifier_Item_Infused_Raindrop::GetModifierMagical_ConstantBlock;
  this->m_Functions[85].__delta = 0;
}


// CDOTA_Modifier_Item_Infused_Raindrop::OnCreated  (line 70, @0x0000000002db6700, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_magical_armor", "magic_damage_block", "min_damage"
void __fastcall CDOTA_Modifier_Item_Infused_Raindrop::OnCreated(
        CDOTA_Modifier_Item_Infused_Raindrop *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "mana_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->mana_regen = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "bonus_armor", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->bonus_armor = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_magical_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_magical_armor", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->magic_damage_block = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->bonus_magical_armor = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->magic_damage_block = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "magic_damage_block", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->min_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "min_damage", -1, 0);
    return;
  }
LABEL_11:
  this->min_damage = 0;
}


// CDOTA_Modifier_Item_Infused_Raindrop::GetModifierConstantManaRegen  (line 80, @0x0000000002daaf10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Infused_Raindrop::GetModifierConstantManaRegen(
        CDOTA_Modifier_Item_Infused_Raindrop *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->mana_regen) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Infused_Raindrop::GetModifierPhysicalArmorBonus  (line 85, @0x0000000002daaf30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Infused_Raindrop::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Infused_Raindrop *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->bonus_armor) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Infused_Raindrop::GetModifierMagical_ConstantBlock  (line 90, @0x0000000002daea70, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff_Item::GetItem, CDOTA_Item::SpendCharge, DOTA_EmitSound, UTIL_Remove
// strings: "DOTA_Item.InfusedRaindrop"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Infused_Raindrop::GetModifierMagical_ConstantBlock(
        CDOTA_Modifier_Item_Infused_Raindrop *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *v5; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTABaseAbility *Ability; // rax
  CDOTA_Item *Item; // rax
  CDOTA_BaseNPC *Parent; // rax
  __m128i v12; // xmm1
  CDOTABaseAbility *v13; // rax
  CEntityInstance *m_pInstance; // rax
  char m_CScriptComponent_high; // r12
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value
    || this->min_damage > params->fDamage
    || (v5 = CDOTA_Buff::GetAbility(this), (*(v5->_vptr_IHandleEntity + 245))(v5) == 0)
    || (m_Index = params->hattacker.m_Index) + 2 > 1
    && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0
    && (v8 = &v7[params->hattacker.m_Index & 0x1FF]) != 0
    && m_Index == v8->m_EHandle.m_Index
    && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent)) == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
  {
    *&result.m_eType = 1;
  }
  else
  {
    Ability = CDOTA_Buff::GetAbility(this);
    (*(Ability->_vptr_IHandleEntity + 241))(Ability, -1.0);
    Item = CDOTA_Buff_Item::GetItem(this);
    CDOTA_Item::SpendCharge(Item);
    Parent = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(1, "DOTA_Item.InfusedRaindrop", Parent);
    if ( CDOTA_Buff_Item::GetItem(this)->m_iCurrentCharges.m_Value == 0 )
    {
      v13 = CDOTA_Buff::GetAbility(this);
      UTIL_Remove(v13);
    }
    *v12.m128i_i32 = this->magic_damage_block;
    *&result.m_eType = (_mm_cvtsi128_si32(v12) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Item_Infused_Raindrop::GetModifierMagicalResistanceBonus  (line 120, @0x0000000002dac450, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Infused_Raindrop::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Item_Infused_Raindrop *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i v4; // xmm0
  unsigned __int64 v5; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v5 = 1;
  if ( !Parent->m_bIsIllusion.m_Value )
  {
    *v4.m128i_i32 = this->bonus_magical_armor;
    return ((_mm_cvtsi128_si32(v4) << 32) | 1);
  }
  return v5;
}


