// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_stout_shield.cpp:26
class CDOTA_Item_StoutShield : public CDOTA_Item {
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
	CDOTA_Item_StoutShield(CDOTA_Item_StoutShield &);
	CDOTA_Item_StoutShield(CDOTA_Item_StoutShield &);
	CDOTA_Item_StoutShield();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_StoutShield();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_stout_shield.cpp:38
class CDOTA_Modifier_Item_StoutShield : public CDOTA_Buff_Item {
public:

private:

	int damage_block_melee;  // +0xba8
	int damage_block_ranged;  // +0xbac
	int block_chance;  // +0xbb0
	CDOTA_Modifier_Item_StoutShield();
	ModifierVariant_t GetModifierPhysical_ConstantBlock(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_StoutShield();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_StoutShield::~CDOTA_Item_StoutShield  (line 26, @0x0000000002e0f350, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_StoutShield::~CDOTA_Item_StoutShield(CDOTA_Item_StoutShield *const this)
{
  this->_vptr_IHandleEntity = &off_4779A90;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_StoutShield::~CDOTA_Item_StoutShield  (line 26, @0x0000000002e0f370, libserver.so)  // inlines: ~CDOTA_Item_StoutShield
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_StoutShield::~CDOTA_Item_StoutShield(CDOTA_Item_StoutShield *const this)
{
  this->_vptr_IHandleEntity = &off_4779A90;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_StoutShield::Schema_DynamicBinding  (line 28, @0x0000000002e0bd50, libserver.so)
// globals: CDOTA_Item_StoutShield::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_StoutShield::Schema_DynamicBinding(
        const CDOTA_Item_StoutShield *const this)
{
  return CDOTA_Item_StoutShield::s_pSchemaBinding;
}


// CDOTA_Item_StoutShield::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002e0bd60, libserver.so)
// globals: CDOTA_Item_StoutShield::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_StoutShield::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_StoutShield::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_StoutShield::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_StoutShield::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002e0bd70, libserver.so)  // inlines: Destruct<CDOTA_Item_StoutShield>
void __fastcall CDOTA_Item_StoutShield::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_StoutShield::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_StoutShield::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002e0bd90, libserver.so)
void __fastcall CDOTA_Item_StoutShield::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_StoutShield::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_StoutShield::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002e0bdb0, libserver.so)
bool __fastcall CDOTA_Item_StoutShield::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_StoutShield::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_StoutShield::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002e0bdc0, libserver.so)
// globals: CDOTA_Item_StoutShield::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_StoutShield::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_StoutShield::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_StoutShield::s_pSchemaBinding;
}


// CDOTA_Item_StoutShield::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002e0d680, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_StoutShield::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_StoutShield::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_StoutShield::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002e0e620, libserver.so)  // inlines: CDOTA_Item_StoutShield, Construct<CDOTA_Item_StoutShield>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_StoutShield::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_StoutShield::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4779A90;
  }
  return p;
}


// CDOTA_Item_StoutShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e11000, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_StoutShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_StoutShield::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_StoutShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e11020, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_StoutShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_StoutShield::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_StoutShield::GetEntityClassInternal  (line 28, @0x0000000002e15d80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "CDOTA_Item_StoutShield"
// globals: `guard variable for'CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass, CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass, __dso_handle, CDOTA_Item_StoutShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_StoutShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_StoutShieldClassInfo, CDOTA_Item_StoutShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_StoutShieldClassInfo
CEntityClass *__cdecl CDOTA_Item_StoutShield::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass);
    CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass._vptr_CEntityClass = off_4779A10;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass);
    __cxa_atexit(
      CDOTA_Item_StoutShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_StoutShieldClass != 0 )
    return &CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass;
  if ( `guard variable for'CDOTA_Item_StoutShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_StoutShieldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_StoutShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_StoutShieldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_StoutShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_StoutShieldClassInfo,
      "CDOTA_Item_StoutShield",
      "item_stout_shield",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_StoutShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_StoutShieldClassInfo);
  }
  CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass.m_pClassInfo = &CDOTA_Item_StoutShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_StoutShieldClassInfo;
  CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass.m_pBaseClassInfo = CDOTA_Item_StoutShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_StoutShieldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_StoutShieldClass = &CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass;
  CDOTA_Item_StoutShield::GetEntityClassInfo(void)::g_EntityCDOTA_Item_StoutShieldClassInfo.m_pClass = &CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass;
  CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_StoutShieldClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_StoutShield::GetEntityClassInternal(void)::g_EntityCDOTA_Item_StoutShieldClass;
}


// CDOTA_Item_StoutShield::GetIntrinsicModifierName  (line 30, @0x0000000002e0bdd0, libserver.so)
// strings: "modifier_item_stout_shield"
const char *__fastcall CDOTA_Item_StoutShield::GetIntrinsicModifierName(CDOTA_Item_StoutShield *const this)
{
  return "modifier_item_stout_shield";
}


// CDOTA_Modifier_Item_StoutShield::~CDOTA_Modifier_Item_StoutShield  (line 38, @0x0000000002e0dd90, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_StoutShield::~CDOTA_Modifier_Item_StoutShield(
        CDOTA_Modifier_Item_StoutShield *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_StoutShield::~CDOTA_Modifier_Item_StoutShield  (line 38, @0x0000000002e0ddb0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_StoutShield
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_StoutShield::~CDOTA_Modifier_Item_StoutShield(
        CDOTA_Modifier_Item_StoutShield *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_StoutShield::DeclareFunctions  (line 55, @0x0000000002dff5d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_StoutShield::GetModifierPhysical_ConstantBlock(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_StoutShield::DeclareFunctions(CDOTA_Modifier_Item_StoutShield *const this)
{
  this->m_Functions[86].__pfn = CDOTA_Modifier_Item_StoutShield::GetModifierPhysical_ConstantBlock;
  this->m_Functions[86].__delta = 0;
}


// CDOTA_Modifier_Item_StoutShield::GetModifierPhysical_ConstantBlock  (line 60, @0x0000000002e00850, libserver.so)
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Item_StoutShield::GetModifierPhysical_ConstantBlock(
        CDOTA_Modifier_Item_StoutShield *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  unsigned int v7; // edx
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  if ( !RollPseudoRandomPercentage(this->block_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_STOUT, Parent) )
    return 1uLL;
  if ( (CDOTA_Buff::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
  {
    *v5.m128i_i32 = this->damage_block_ranged;
    v7 = _mm_cvtsi128_si32(v5);
  }
  else
  {
    *v6.m128i_i32 = this->damage_block_melee;
    v7 = _mm_cvtsi128_si32(v6);
  }
  *&result.m_eType = (v7 << 32) | 1;
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Item_StoutShield::OnCreated  (line 79, @0x0000000002e081d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_block_melee", "damage_block_ranged"
void __fastcall CDOTA_Modifier_Item_StoutShield::OnCreated(CDOTA_Modifier_Item_StoutShield *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_block_melee = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_block_melee", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage_block_ranged = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->damage_block_melee = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage_block_ranged = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_block_ranged", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->block_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "block_chance", -1, 0);
    return;
  }
LABEL_7:
  this->block_chance = 0;
}


