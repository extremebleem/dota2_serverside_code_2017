// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_mithril_hammer.cpp:26
class CDOTA_Item_MithrilHammer : public CDOTA_Item {
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
	CDOTA_Item_MithrilHammer(CDOTA_Item_MithrilHammer &);
	CDOTA_Item_MithrilHammer(CDOTA_Item_MithrilHammer &);
	CDOTA_Item_MithrilHammer();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_MithrilHammer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_mithril_hammer.cpp:38
class CDOTA_Modifier_Item_MithrilHammer : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	CDOTA_Modifier_Item_MithrilHammer();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_MithrilHammer();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_MithrilHammer::~CDOTA_Item_MithrilHammer  (line 26, @0x0000000002dd7a10, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_MithrilHammer::~CDOTA_Item_MithrilHammer(CDOTA_Item_MithrilHammer *const this)
{
  this->_vptr_IHandleEntity = &off_471B4B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_MithrilHammer::~CDOTA_Item_MithrilHammer  (line 26, @0x0000000002dd7a30, libserver.so)  // inlines: ~CDOTA_Item_MithrilHammer
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_MithrilHammer::~CDOTA_Item_MithrilHammer(CDOTA_Item_MithrilHammer *const this)
{
  this->_vptr_IHandleEntity = &off_471B4B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_MithrilHammer::Schema_DynamicBinding  (line 28, @0x0000000002dd35d0, libserver.so)
// globals: CDOTA_Item_MithrilHammer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MithrilHammer::Schema_DynamicBinding(
        const CDOTA_Item_MithrilHammer *const this)
{
  return CDOTA_Item_MithrilHammer::s_pSchemaBinding;
}


// CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002dd35e0, libserver.so)
// globals: CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002dd35f0, libserver.so)  // inlines: Destruct<CDOTA_Item_MithrilHammer>
void __fastcall CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002dd3610, libserver.so)
void __fastcall CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002dd3630, libserver.so)
bool __fastcall CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002dd3640, libserver.so)
// globals: CDOTA_Item_MithrilHammer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MithrilHammer::s_pSchemaBinding;
}


// CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dd5930, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dd6c50, libserver.so)  // inlines: CDOTA_Item_MithrilHammer, Construct<CDOTA_Item_MithrilHammer>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_471B4B0;
  }
  return p;
}


// CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dd9940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dd9960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_MithrilHammer::GetEntityClassInternal  (line 28, @0x0000000002ddd640, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "CDOTA_Item_MithrilHammer"
// globals: `guard variable for'CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass, CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass, __dso_handle, CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_MithrilHammer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MithrilHammerClassInfo, CDOTA_Item_MithrilHammer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MithrilHammerClassInfo
CEntityClass *__cdecl CDOTA_Item_MithrilHammer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass);
    CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass._vptr_CEntityClass = off_471B430;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass);
    __cxa_atexit(
      CDOTA_Item_MithrilHammer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_MithrilHammerClass != 0 )
    return &CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass;
  if ( `guard variable for'CDOTA_Item_MithrilHammer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MithrilHammerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MithrilHammer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MithrilHammerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_MithrilHammer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MithrilHammerClassInfo,
      "CDOTA_Item_MithrilHammer",
      "item_mithril_hammer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MithrilHammer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MithrilHammerClassInfo);
  }
  CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass.m_pClassInfo = &CDOTA_Item_MithrilHammer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MithrilHammerClassInfo;
  CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass.m_pBaseClassInfo = CDOTA_Item_MithrilHammer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MithrilHammerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_MithrilHammerClass = &CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass;
  CDOTA_Item_MithrilHammer::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MithrilHammerClassInfo.m_pClass = &CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass;
  CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_MithrilHammerClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_MithrilHammer::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MithrilHammerClass;
}


// CDOTA_Item_MithrilHammer::GetIntrinsicModifierName  (line 30, @0x0000000002dd3650, libserver.so)
// strings: "modifier_item_mithril_hammer"
const char *__fastcall CDOTA_Item_MithrilHammer::GetIntrinsicModifierName(CDOTA_Item_MithrilHammer *const this)
{
  return "modifier_item_mithril_hammer";
}


// CDOTA_Modifier_Item_MithrilHammer::~CDOTA_Modifier_Item_MithrilHammer  (line 38, @0x0000000002dd6840, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_MithrilHammer::~CDOTA_Modifier_Item_MithrilHammer(
        CDOTA_Modifier_Item_MithrilHammer *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_MithrilHammer::~CDOTA_Modifier_Item_MithrilHammer  (line 38, @0x0000000002dd6860, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_MithrilHammer
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_MithrilHammer::~CDOTA_Modifier_Item_MithrilHammer(
        CDOTA_Modifier_Item_MithrilHammer *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_MithrilHammer::DeclareFunctions  (line 53, @0x0000000002dc6c00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_MithrilHammer::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_MithrilHammer::DeclareFunctions(CDOTA_Modifier_Item_MithrilHammer *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_MithrilHammer::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_MithrilHammer::GetModifierPreAttack_BonusDamage  (line 58, @0x0000000002dc6c20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_MithrilHammer::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_MithrilHammer *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_MithrilHammer::OnCreated  (line 63, @0x0000000002dd0770, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_MithrilHammer::OnCreated(
        CDOTA_Modifier_Item_MithrilHammer *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  else
    this->bonus_damage = 0;
}


