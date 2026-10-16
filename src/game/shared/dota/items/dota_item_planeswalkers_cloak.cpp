// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_planeswalkers_cloak.cpp:26
class CDOTA_Item_PlaneswalkersCloak : public CDOTA_Item {
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
	CDOTA_Item_PlaneswalkersCloak(CDOTA_Item_PlaneswalkersCloak &);
	CDOTA_Item_PlaneswalkersCloak(CDOTA_Item_PlaneswalkersCloak &);
	CDOTA_Item_PlaneswalkersCloak();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_PlaneswalkersCloak();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_planeswalkers_cloak.cpp:38
class CDOTA_Modifier_Item_PlaneswalkersCloak : public CDOTA_Buff_Item {
public:

private:

	int bonus_magical_armor;  // +0xba8
	CDOTA_Modifier_Item_PlaneswalkersCloak();
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_PlaneswalkersCloak();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_PlaneswalkersCloak::~CDOTA_Item_PlaneswalkersCloak  (line 26, @0x0000000002dd82d0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_PlaneswalkersCloak::~CDOTA_Item_PlaneswalkersCloak(
        CDOTA_Item_PlaneswalkersCloak *const this)
{
  this->_vptr_IHandleEntity = &off_473B950;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_PlaneswalkersCloak::~CDOTA_Item_PlaneswalkersCloak  (line 26, @0x0000000002dd82f0, libserver.so)  // inlines: ~CDOTA_Item_PlaneswalkersCloak
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_PlaneswalkersCloak::~CDOTA_Item_PlaneswalkersCloak(
        CDOTA_Item_PlaneswalkersCloak *const this)
{
  this->_vptr_IHandleEntity = &off_473B950;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_PlaneswalkersCloak::Schema_DynamicBinding  (line 28, @0x0000000002dd49a0, libserver.so)
// globals: CDOTA_Item_PlaneswalkersCloak::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_PlaneswalkersCloak::Schema_DynamicBinding(
        const CDOTA_Item_PlaneswalkersCloak *const this)
{
  return CDOTA_Item_PlaneswalkersCloak::s_pSchemaBinding;
}


// CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002dd49b0, libserver.so)
// globals: CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002dd49c0, libserver.so)  // inlines: Destruct<CDOTA_Item_PlaneswalkersCloak>
void __fastcall CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002dd49e0, libserver.so)
void __fastcall CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002dd4a00, libserver.so)
bool __fastcall CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002dd4a10, libserver.so)
// globals: CDOTA_Item_PlaneswalkersCloak::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_PlaneswalkersCloak::s_pSchemaBinding;
}


// CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dd6170, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dd71f0, libserver.so)  // inlines: CDOTA_Item_PlaneswalkersCloak, Construct<CDOTA_Item_PlaneswalkersCloak>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_473B950;
  }
  return p;
}


// CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dda200, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dda220, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal  (line 28, @0x0000000002de2b10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_cloak", "CDOTA_Item_PlaneswalkersCloak"
// globals: `guard variable for'CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass, CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass, __dso_handle, CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_PlaneswalkersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClassInfo, CDOTA_Item_PlaneswalkersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClassInfo
CEntityClass *__cdecl CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass);
    CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass._vptr_CEntityClass = off_473B8D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass);
    __cxa_atexit(
      CDOTA_Item_PlaneswalkersCloak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_PlaneswalkersCloakClass != 0 )
    return &CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass;
  if ( `guard variable for'CDOTA_Item_PlaneswalkersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_PlaneswalkersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_PlaneswalkersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClassInfo,
      "CDOTA_Item_PlaneswalkersCloak",
      "item_cloak",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_PlaneswalkersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClassInfo);
  }
  CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass.m_pClassInfo = &CDOTA_Item_PlaneswalkersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClassInfo;
  CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass.m_pBaseClassInfo = CDOTA_Item_PlaneswalkersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_PlaneswalkersCloakClass = &CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass;
  CDOTA_Item_PlaneswalkersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClassInfo.m_pClass = &CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass;
  CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_PlaneswalkersCloakClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_PlaneswalkersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlaneswalkersCloakClass;
}


// CDOTA_Item_PlaneswalkersCloak::GetIntrinsicModifierName  (line 30, @0x0000000002dd4a20, libserver.so)
// strings: "modifier_item_planeswalkers_cloak"
const char *__fastcall CDOTA_Item_PlaneswalkersCloak::GetIntrinsicModifierName(
        CDOTA_Item_PlaneswalkersCloak *const this)
{
  return "modifier_item_planeswalkers_cloak";
}


// CDOTA_Modifier_Item_PlaneswalkersCloak::~CDOTA_Modifier_Item_PlaneswalkersCloak  (line 38, @0x0000000002dd6430, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_PlaneswalkersCloak::~CDOTA_Modifier_Item_PlaneswalkersCloak(
        CDOTA_Modifier_Item_PlaneswalkersCloak *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_PlaneswalkersCloak::~CDOTA_Modifier_Item_PlaneswalkersCloak  (line 38, @0x0000000002dd6450, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_PlaneswalkersCloak
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_PlaneswalkersCloak::~CDOTA_Modifier_Item_PlaneswalkersCloak(
        CDOTA_Modifier_Item_PlaneswalkersCloak *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_PlaneswalkersCloak::OnCreated  (line 53, @0x0000000002dd08f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_magical_armor"
void __fastcall CDOTA_Modifier_Item_PlaneswalkersCloak::OnCreated(
        CDOTA_Modifier_Item_PlaneswalkersCloak *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_magical_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_magical_armor", -1, 0);
  else
    this->bonus_magical_armor = 0;
}


// CDOTA_Modifier_Item_PlaneswalkersCloak::DeclareFunctions  (line 58, @0x0000000002dc7750, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_PlaneswalkersCloak::GetModifierMagicalResistanceBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_PlaneswalkersCloak::DeclareFunctions(
        CDOTA_Modifier_Item_PlaneswalkersCloak *const this)
{
  this->m_Functions[49].__pfn = CDOTA_Modifier_Item_PlaneswalkersCloak::GetModifierMagicalResistanceBonus;
  this->m_Functions[49].__delta = 0;
}


// CDOTA_Modifier_Item_PlaneswalkersCloak::GetModifierMagicalResistanceBonus  (line 63, @0x0000000002dc7770, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PlaneswalkersCloak::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Item_PlaneswalkersCloak *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_magical_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


