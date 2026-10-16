// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_javelin.cpp:26
class CDOTA_Item_Javelin : public CDOTA_Item {
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
	CDOTA_Item_Javelin(CDOTA_Item_Javelin &);
	CDOTA_Item_Javelin(CDOTA_Item_Javelin &);
	CDOTA_Item_Javelin();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Javelin();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_javelin.cpp:38
class CDOTA_Modifier_Item_Javelin : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_chance;  // +0xbac
	int bonus_chance_damage;  // +0xbb0
	CDOTA_Modifier_Item_Javelin();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Magical(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Javelin();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Javelin::~CDOTA_Item_Javelin  (line 26, @0x0000000002dbc900, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Javelin::~CDOTA_Item_Javelin(CDOTA_Item_Javelin *const this)
{
  this->_vptr_IHandleEntity = &off_47061F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Javelin::~CDOTA_Item_Javelin  (line 26, @0x0000000002dbc920, libserver.so)  // inlines: ~CDOTA_Item_Javelin
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Javelin::~CDOTA_Item_Javelin(CDOTA_Item_Javelin *const this)
{
  this->_vptr_IHandleEntity = &off_47061F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Javelin::Schema_DynamicBinding  (line 28, @0x0000000002db8d30, libserver.so)
// globals: CDOTA_Item_Javelin::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Javelin::Schema_DynamicBinding(
        const CDOTA_Item_Javelin *const this)
{
  return CDOTA_Item_Javelin::s_pSchemaBinding;
}


// CDOTA_Item_Javelin::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002db8d40, libserver.so)
// globals: CDOTA_Item_Javelin::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Javelin::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Javelin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Javelin::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Javelin::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002db8d50, libserver.so)  // inlines: Destruct<CDOTA_Item_Javelin>
void __fastcall CDOTA_Item_Javelin::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Javelin::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Javelin::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002db8d70, libserver.so)
void __fastcall CDOTA_Item_Javelin::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Javelin::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Javelin::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002db8d90, libserver.so)
bool __fastcall CDOTA_Item_Javelin::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Javelin::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Javelin::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002db8da0, libserver.so)
// globals: CDOTA_Item_Javelin::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Javelin::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Javelin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Javelin::s_pSchemaBinding;
}


// CDOTA_Item_Javelin::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dba680, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Javelin::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Javelin::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Javelin::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dbb970, libserver.so)  // inlines: CDOTA_Item_Javelin, Construct<CDOTA_Item_Javelin>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Javelin::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Javelin::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47061F0;
  }
  return p;
}


// CDOTA_Item_Javelin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbeb00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Javelin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Javelin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Javelin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbeb20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Javelin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Javelin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Javelin::GetEntityClassInternal  (line 28, @0x0000000002dc3f00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "CDOTA_Item_Javelin"
// globals: `guard variable for'CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass, CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass, __dso_handle, CDOTA_Item_Javelin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Javelin::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JavelinClassInfo, CDOTA_Item_Javelin::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JavelinClassInfo
CEntityClass *__cdecl CDOTA_Item_Javelin::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass);
    CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass._vptr_CEntityClass = off_4706170;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass);
    __cxa_atexit(
      CDOTA_Item_Javelin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_JavelinClass != 0 )
    return &CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass;
  if ( `guard variable for'CDOTA_Item_Javelin::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JavelinClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Javelin::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JavelinClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Javelin::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JavelinClassInfo,
      "CDOTA_Item_Javelin",
      "item_javelin",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Javelin::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JavelinClassInfo);
  }
  CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass.m_pClassInfo = &CDOTA_Item_Javelin::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JavelinClassInfo;
  CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass.m_pBaseClassInfo = CDOTA_Item_Javelin::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JavelinClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_JavelinClass = &CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass;
  CDOTA_Item_Javelin::GetEntityClassInfo(void)::g_EntityCDOTA_Item_JavelinClassInfo.m_pClass = &CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass;
  CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_JavelinClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Javelin::GetEntityClassInternal(void)::g_EntityCDOTA_Item_JavelinClass;
}


// CDOTA_Item_Javelin::GetIntrinsicModifierName  (line 30, @0x0000000002db8db0, libserver.so)
// strings: "modifier_item_javelin"
const char *__fastcall CDOTA_Item_Javelin::GetIntrinsicModifierName(CDOTA_Item_Javelin *const this)
{
  return "modifier_item_javelin";
}


// CDOTA_Modifier_Item_Javelin::~CDOTA_Modifier_Item_Javelin  (line 38, @0x0000000002dbae70, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Javelin::~CDOTA_Modifier_Item_Javelin(CDOTA_Modifier_Item_Javelin *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Javelin::~CDOTA_Modifier_Item_Javelin  (line 38, @0x0000000002dbae90, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Javelin
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Javelin::~CDOTA_Modifier_Item_Javelin(CDOTA_Modifier_Item_Javelin *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Javelin::DeclareFunctions  (line 56, @0x0000000002dab0e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Javelin::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Javelin::GetModifierProcAttack_BonusDamage_Magical(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Javelin::DeclareFunctions(CDOTA_Modifier_Item_Javelin *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Javelin::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[5].__delta = 0;
  this->m_Functions[5].__pfn = CDOTA_Modifier_Item_Javelin::GetModifierProcAttack_BonusDamage_Magical;
}


// CDOTA_Modifier_Item_Javelin::GetModifierPreAttack_BonusDamage  (line 62, @0x0000000002dab120, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Javelin::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Javelin *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Javelin::GetModifierProcAttack_BonusDamage_Magical  (line 67, @0x0000000002daddd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: RollPercentage
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Javelin::GetModifierProcAttack_BonusDamage_Magical(
        CDOTA_Modifier_Item_Javelin *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  __m128i v8; // xmm0
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->htarget.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 1uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0 )
  {
    return 1uLL;
  }
  if ( !RollPercentage(this->bonus_chance) )
    return 1uLL;
  *v8.m128i_i32 = this->bonus_chance_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v8) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Javelin::OnCreated  (line 79, @0x0000000002db4c40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_chance", "bonus_chance_damage"
void __fastcall CDOTA_Modifier_Item_Javelin::OnCreated(CDOTA_Modifier_Item_Javelin *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_chance = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_damage = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_chance", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_chance_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_chance_damage", -1, 0);
    return;
  }
LABEL_7:
  this->bonus_chance_damage = 0;
}


