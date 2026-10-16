// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_gauntlets.cpp:26
class CDOTA_Item_Gauntlets : public CDOTA_Item {
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
	CDOTA_Item_Gauntlets(CDOTA_Item_Gauntlets &);
	CDOTA_Item_Gauntlets(CDOTA_Item_Gauntlets &);
	CDOTA_Item_Gauntlets();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Gauntlets();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_gauntlets.cpp:38
class CDOTA_Modifier_Item_Gauntlets : public CDOTA_Buff_Item {
public:

private:

	int bonus_strength;  // +0xba8
	CDOTA_Modifier_Item_Gauntlets();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Gauntlets();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Gauntlets::~CDOTA_Item_Gauntlets  (line 26, @0x0000000002da1d60, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Gauntlets::~CDOTA_Item_Gauntlets(CDOTA_Item_Gauntlets *const this)
{
  this->_vptr_IHandleEntity = &off_46E5510;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Gauntlets::~CDOTA_Item_Gauntlets  (line 26, @0x0000000002da1d80, libserver.so)  // inlines: ~CDOTA_Item_Gauntlets
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Gauntlets::~CDOTA_Item_Gauntlets(CDOTA_Item_Gauntlets *const this)
{
  this->_vptr_IHandleEntity = &off_46E5510;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Gauntlets::Schema_DynamicBinding  (line 28, @0x0000000002d9f070, libserver.so)
// globals: CDOTA_Item_Gauntlets::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Gauntlets::Schema_DynamicBinding(
        const CDOTA_Item_Gauntlets *const this)
{
  return CDOTA_Item_Gauntlets::s_pSchemaBinding;
}


// CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d9f080, libserver.so)
// globals: CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Gauntlets::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d9f090, libserver.so)  // inlines: Destruct<CDOTA_Item_Gauntlets>
void __fastcall CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Gauntlets::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d9f0b0, libserver.so)
void __fastcall CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Gauntlets::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d9f0d0, libserver.so)
bool __fastcall CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Gauntlets::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d9f0e0, libserver.so)
// globals: CDOTA_Item_Gauntlets::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Gauntlets::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Gauntlets::s_pSchemaBinding;
}


// CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002da06b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Gauntlets::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002da1640, libserver.so)  // inlines: CDOTA_Item_Gauntlets, Construct<CDOTA_Item_Gauntlets>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Gauntlets::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46E5510;
  }
  return p;
}


// CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3cc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Gauntlets::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3ce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Gauntlets::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Gauntlets::GetEntityClassInternal  (line 28, @0x0000000002da8190, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "CDOTA_Item_Gauntlets"
// globals: `guard variable for'CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass, CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass, __dso_handle, CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Gauntlets::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GauntletsClassInfo, CDOTA_Item_Gauntlets::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GauntletsClassInfo
CEntityClass *__cdecl CDOTA_Item_Gauntlets::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass);
    CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass._vptr_CEntityClass = off_46E5490;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass);
    __cxa_atexit(
      CDOTA_Item_Gauntlets::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_GauntletsClass != 0 )
    return &CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass;
  if ( `guard variable for'CDOTA_Item_Gauntlets::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GauntletsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Gauntlets::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GauntletsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Gauntlets::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GauntletsClassInfo,
      "CDOTA_Item_Gauntlets",
      "item_gauntlets",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Gauntlets::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GauntletsClassInfo);
  }
  CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass.m_pClassInfo = &CDOTA_Item_Gauntlets::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GauntletsClassInfo;
  CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass.m_pBaseClassInfo = CDOTA_Item_Gauntlets::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GauntletsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_GauntletsClass = &CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass;
  CDOTA_Item_Gauntlets::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GauntletsClassInfo.m_pClass = &CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass;
  CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_GauntletsClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Gauntlets::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GauntletsClass;
}


// CDOTA_Item_Gauntlets::GetIntrinsicModifierName  (line 30, @0x0000000002d9f0f0, libserver.so)
// strings: "modifier_item_gauntlets"
const char *__fastcall CDOTA_Item_Gauntlets::GetIntrinsicModifierName(CDOTA_Item_Gauntlets *const this)
{
  return "modifier_item_gauntlets";
}


// CDOTA_Modifier_Item_Gauntlets::~CDOTA_Modifier_Item_Gauntlets  (line 38, @0x0000000002da0e20, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Gauntlets::~CDOTA_Modifier_Item_Gauntlets(
        CDOTA_Modifier_Item_Gauntlets *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Gauntlets::~CDOTA_Modifier_Item_Gauntlets  (line 38, @0x0000000002da0e40, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Gauntlets
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Gauntlets::~CDOTA_Modifier_Item_Gauntlets(
        CDOTA_Modifier_Item_Gauntlets *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Gauntlets::OnCreated  (line 53, @0x0000000002d9c0f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_Gauntlets::OnCreated(CDOTA_Modifier_Item_Gauntlets *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_strength", -1, 0);
  else
    this->bonus_strength = 0;
}


// CDOTA_Modifier_Item_Gauntlets::DeclareFunctions  (line 58, @0x0000000002d941b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Gauntlets::GetModifierBonusStats_Strength(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Gauntlets::DeclareFunctions(CDOTA_Modifier_Item_Gauntlets *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Gauntlets::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
}


// CDOTA_Modifier_Item_Gauntlets::GetModifierBonusStats_Strength  (line 63, @0x0000000002d941d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Gauntlets::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Gauntlets *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


