// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_gloves_of_haste.cpp:26
class CDOTA_Item_GlovesOfHaste : public CDOTA_Item {
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
	CDOTA_Item_GlovesOfHaste(CDOTA_Item_GlovesOfHaste &);
	CDOTA_Item_GlovesOfHaste(CDOTA_Item_GlovesOfHaste &);
	CDOTA_Item_GlovesOfHaste();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_GlovesOfHaste();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_gloves_of_haste.cpp:38
class CDOTA_Modifer_Item_GlovesOfHaste : public CDOTA_Buff_Item {
public:

private:

	int bonus_attack_speed;  // +0xba8
	CDOTA_Modifer_Item_GlovesOfHaste();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifer_Item_GlovesOfHaste();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_GlovesOfHaste::~CDOTA_Item_GlovesOfHaste  (line 26, @0x0000000002da1ef0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_GlovesOfHaste::~CDOTA_Item_GlovesOfHaste(CDOTA_Item_GlovesOfHaste *const this)
{
  this->_vptr_IHandleEntity = &off_46EAA50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_GlovesOfHaste::~CDOTA_Item_GlovesOfHaste  (line 26, @0x0000000002da1f10, libserver.so)  // inlines: ~CDOTA_Item_GlovesOfHaste
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_GlovesOfHaste::~CDOTA_Item_GlovesOfHaste(CDOTA_Item_GlovesOfHaste *const this)
{
  this->_vptr_IHandleEntity = &off_46EAA50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_GlovesOfHaste::Schema_DynamicBinding  (line 28, @0x0000000002d9f3f0, libserver.so)
// globals: CDOTA_Item_GlovesOfHaste::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_GlovesOfHaste::Schema_DynamicBinding(
        const CDOTA_Item_GlovesOfHaste *const this)
{
  return CDOTA_Item_GlovesOfHaste::s_pSchemaBinding;
}


// CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d9f400, libserver.so)
// globals: CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d9f410, libserver.so)  // inlines: Destruct<CDOTA_Item_GlovesOfHaste>
void __fastcall CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d9f430, libserver.so)
void __fastcall CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d9f450, libserver.so)
bool __fastcall CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d9f460, libserver.so)
// globals: CDOTA_Item_GlovesOfHaste::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_GlovesOfHaste::s_pSchemaBinding;
}


// CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002da07f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002da1730, libserver.so)  // inlines: CDOTA_Item_GlovesOfHaste, Construct<CDOTA_Item_GlovesOfHaste>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46EAA50;
  }
  return p;
}


// CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3e50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3e70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_GlovesOfHaste::GetEntityClassInternal  (line 28, @0x0000000002da8dc0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_gloves", "CDOTA_Item_GlovesOfHaste", "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility"
// globals: `guard variable for'CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass, CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass, __dso_handle, CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_GlovesOfHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlovesOfHasteClassInfo, CDOTA_Item_GlovesOfHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlovesOfHasteClassInfo, `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo (10 total)
CEntityClass *__cdecl CDOTA_Item_GlovesOfHaste::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass);
    CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass._vptr_CEntityClass = off_46EA9D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass);
    __cxa_atexit(
      CDOTA_Item_GlovesOfHaste::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_GlovesOfHasteClass != 0 )
    return &CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass;
  if ( `guard variable for'CDOTA_Item_GlovesOfHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlovesOfHasteClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_GlovesOfHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlovesOfHasteClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo) != 0 )
    {
      if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
      {
        EntityClassInfo = CBaseEntity::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
          "CDOTABaseAbility",
          "dota_base_ability",
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo,
        "CDOTA_Item",
        "dota_item",
        0,
        &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_GlovesOfHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlovesOfHasteClassInfo,
      "CDOTA_Item_GlovesOfHaste",
      "item_gloves",
      0,
      &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_GlovesOfHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlovesOfHasteClassInfo);
  }
  CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass.m_pClassInfo = &CDOTA_Item_GlovesOfHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlovesOfHasteClassInfo;
  CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass.m_pBaseClassInfo = CDOTA_Item_GlovesOfHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlovesOfHasteClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_GlovesOfHasteClass = &CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass;
  CDOTA_Item_GlovesOfHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GlovesOfHasteClassInfo.m_pClass = &CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass;
  CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_GlovesOfHasteClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_GlovesOfHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GlovesOfHasteClass;
}


// CDOTA_Item_GlovesOfHaste::GetIntrinsicModifierName  (line 30, @0x0000000002d9f470, libserver.so)
// strings: "modifier_item_gloves_of_haste"
const char *__fastcall CDOTA_Item_GlovesOfHaste::GetIntrinsicModifierName(CDOTA_Item_GlovesOfHaste *const this)
{
  return "modifier_item_gloves_of_haste";
}


// CDOTA_Modifer_Item_GlovesOfHaste::~CDOTA_Modifer_Item_GlovesOfHaste  (line 38, @0x0000000002da0ce0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifer_Item_GlovesOfHaste::~CDOTA_Modifer_Item_GlovesOfHaste(
        CDOTA_Modifer_Item_GlovesOfHaste *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifer_Item_GlovesOfHaste::~CDOTA_Modifer_Item_GlovesOfHaste  (line 38, @0x0000000002da0d00, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifer_Item_GlovesOfHaste
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifer_Item_GlovesOfHaste::~CDOTA_Modifer_Item_GlovesOfHaste(
        CDOTA_Modifer_Item_GlovesOfHaste *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifer_Item_GlovesOfHaste::DeclareFunctions  (line 54, @0x0000000002d943c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifer_Item_GlovesOfHaste::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifer_Item_GlovesOfHaste::DeclareFunctions(CDOTA_Modifer_Item_GlovesOfHaste *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifer_Item_GlovesOfHaste::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifer_Item_GlovesOfHaste::GetModifierAttackSpeedBonus_Constant  (line 59, @0x0000000002d943e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifer_Item_GlovesOfHaste::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifer_Item_GlovesOfHaste *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifer_Item_GlovesOfHaste::OnCreated  (line 64, @0x0000000002d9c330, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifer_Item_GlovesOfHaste::OnCreated(
        CDOTA_Modifer_Item_GlovesOfHaste *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
  else
    this->bonus_attack_speed = 0;
}


