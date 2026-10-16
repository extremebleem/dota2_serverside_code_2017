// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_ultimate_orb.cpp:26
class CDOTA_Item_UltimateOrb : public CDOTA_Item {
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
	CDOTA_Item_UltimateOrb(CDOTA_Item_UltimateOrb &);
	CDOTA_Item_UltimateOrb(CDOTA_Item_UltimateOrb &);
	CDOTA_Item_UltimateOrb();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_UltimateOrb();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ultimate_orb.cpp:38
class CDOTA_Modifier_Item_UltimateOrb : public CDOTA_Buff_Item {
public:

private:

	int bonus_all_stats;  // +0xba8
	CDOTA_Modifier_Item_UltimateOrb();
	ModifierVariant_t GetModifierBonusStats_All(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_UltimateOrb();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_UltimateOrb::~CDOTA_Item_UltimateOrb  (line 26, @0x0000000002e0f530, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_UltimateOrb::~CDOTA_Item_UltimateOrb(CDOTA_Item_UltimateOrb *const this)
{
  this->_vptr_IHandleEntity = &off_477F850;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_UltimateOrb::~CDOTA_Item_UltimateOrb  (line 26, @0x0000000002e0f550, libserver.so)  // inlines: ~CDOTA_Item_UltimateOrb
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_UltimateOrb::~CDOTA_Item_UltimateOrb(CDOTA_Item_UltimateOrb *const this)
{
  this->_vptr_IHandleEntity = &off_477F850;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_UltimateOrb::Schema_DynamicBinding  (line 28, @0x0000000002e0c120, libserver.so)
// globals: CDOTA_Item_UltimateOrb::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_UltimateOrb::Schema_DynamicBinding(
        const CDOTA_Item_UltimateOrb *const this)
{
  return CDOTA_Item_UltimateOrb::s_pSchemaBinding;
}


// CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002e0c130, libserver.so)
// globals: CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002e0c140, libserver.so)  // inlines: Destruct<CDOTA_Item_UltimateOrb>
void __fastcall CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002e0c160, libserver.so)
void __fastcall CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002e0c180, libserver.so)
bool __fastcall CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002e0c190, libserver.so)
// globals: CDOTA_Item_UltimateOrb::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_UltimateOrb::s_pSchemaBinding;
}


// CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002e0d800, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002e0e740, libserver.so)  // inlines: CDOTA_Item_UltimateOrb, Construct<CDOTA_Item_UltimateOrb>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_477F850;
  }
  return p;
}


// CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e111e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e11200, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_UltimateOrb::GetEntityClassInternal  (line 28, @0x0000000002e16c20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "CDOTA_Item_UltimateOrb"
// globals: `guard variable for'CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass, CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass, __dso_handle, CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_UltimateOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateOrbClassInfo, CDOTA_Item_UltimateOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateOrbClassInfo
CEntityClass *__cdecl CDOTA_Item_UltimateOrb::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass);
    CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass._vptr_CEntityClass = off_477F7D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass);
    __cxa_atexit(
      CDOTA_Item_UltimateOrb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_UltimateOrbClass != 0 )
    return &CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass;
  if ( `guard variable for'CDOTA_Item_UltimateOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateOrbClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_UltimateOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateOrbClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_UltimateOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateOrbClassInfo,
      "CDOTA_Item_UltimateOrb",
      "item_ultimate_orb",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_UltimateOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateOrbClassInfo);
  }
  CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass.m_pClassInfo = &CDOTA_Item_UltimateOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateOrbClassInfo;
  CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass.m_pBaseClassInfo = CDOTA_Item_UltimateOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateOrbClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_UltimateOrbClass = &CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass;
  CDOTA_Item_UltimateOrb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UltimateOrbClassInfo.m_pClass = &CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass;
  CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_UltimateOrbClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_UltimateOrb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UltimateOrbClass;
}


// CDOTA_Item_UltimateOrb::GetIntrinsicModifierName  (line 30, @0x0000000002e0c1a0, libserver.so)
// strings: "modifier_item_ultimate_orb"
const char *__fastcall CDOTA_Item_UltimateOrb::GetIntrinsicModifierName(CDOTA_Item_UltimateOrb *const this)
{
  return "modifier_item_ultimate_orb";
}


// CDOTA_Modifier_Item_UltimateOrb::~CDOTA_Modifier_Item_UltimateOrb  (line 38, @0x0000000002e0dcf0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_UltimateOrb::~CDOTA_Modifier_Item_UltimateOrb(
        CDOTA_Modifier_Item_UltimateOrb *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_UltimateOrb::~CDOTA_Modifier_Item_UltimateOrb  (line 38, @0x0000000002e0dd10, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_UltimateOrb
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_UltimateOrb::~CDOTA_Modifier_Item_UltimateOrb(
        CDOTA_Modifier_Item_UltimateOrb *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_UltimateOrb::OnCreated  (line 53, @0x0000000002e07b70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_all_stats"
void __fastcall CDOTA_Modifier_Item_UltimateOrb::OnCreated(CDOTA_Modifier_Item_UltimateOrb *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_all_stats", -1, 0);
  else
    this->bonus_all_stats = 0;
}


// CDOTA_Modifier_Item_UltimateOrb::DeclareFunctions  (line 58, @0x0000000002dff6e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_UltimateOrb::GetModifierBonusStats_All(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_UltimateOrb::DeclareFunctions(CDOTA_Modifier_Item_UltimateOrb *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_UltimateOrb::GetModifierBonusStats_All;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_UltimateOrb::GetModifierBonusStats_All;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_UltimateOrb::GetModifierBonusStats_All;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_UltimateOrb::GetModifierBonusStats_All  (line 65, @0x0000000002dff730, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_UltimateOrb::GetModifierBonusStats_All(
        CDOTA_Modifier_Item_UltimateOrb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


