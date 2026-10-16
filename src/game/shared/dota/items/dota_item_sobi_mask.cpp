// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_sobi_mask.cpp:26
class CDOTA_Item_SobiMask : public CDOTA_Item {
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
	CDOTA_Item_SobiMask(CDOTA_Item_SobiMask &);
	CDOTA_Item_SobiMask(CDOTA_Item_SobiMask &);
	CDOTA_Item_SobiMask();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_SobiMask();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_sobi_mask.cpp:38
class CDOTA_Modifier_Item_SobiMask : public CDOTA_Buff_Item {
public:

private:

	int bonus_mana_regen;  // +0xba8
	CDOTA_Modifier_Item_SobiMask();
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_SobiMask();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_SobiMask::~CDOTA_Item_SobiMask  (line 26, @0x0000000002e0f030, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_SobiMask::~CDOTA_Item_SobiMask(CDOTA_Item_SobiMask *const this)
{
  this->_vptr_IHandleEntity = &off_476F6B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_SobiMask::~CDOTA_Item_SobiMask  (line 26, @0x0000000002e0f050, libserver.so)  // inlines: ~CDOTA_Item_SobiMask
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_SobiMask::~CDOTA_Item_SobiMask(CDOTA_Item_SobiMask *const this)
{
  this->_vptr_IHandleEntity = &off_476F6B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_SobiMask::Schema_DynamicBinding  (line 28, @0x0000000002e0b790, libserver.so)
// globals: CDOTA_Item_SobiMask::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_SobiMask::Schema_DynamicBinding(
        const CDOTA_Item_SobiMask *const this)
{
  return CDOTA_Item_SobiMask::s_pSchemaBinding;
}


// CDOTA_Item_SobiMask::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002e0b7a0, libserver.so)
// globals: CDOTA_Item_SobiMask::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_SobiMask::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_SobiMask::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_SobiMask::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_SobiMask::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002e0b7b0, libserver.so)  // inlines: Destruct<CDOTA_Item_SobiMask>
void __fastcall CDOTA_Item_SobiMask::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_SobiMask::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_SobiMask::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002e0b7d0, libserver.so)
void __fastcall CDOTA_Item_SobiMask::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_SobiMask::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_SobiMask::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002e0b7f0, libserver.so)
bool __fastcall CDOTA_Item_SobiMask::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_SobiMask::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_SobiMask::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002e0b800, libserver.so)
// globals: CDOTA_Item_SobiMask::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_SobiMask::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_SobiMask::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_SobiMask::s_pSchemaBinding;
}


// CDOTA_Item_SobiMask::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002e0d400, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_SobiMask::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_SobiMask::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_SobiMask::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002e0e440, libserver.so)  // inlines: CDOTA_Item_SobiMask, Construct<CDOTA_Item_SobiMask>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_SobiMask::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_SobiMask::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_476F6B0;
  }
  return p;
}


// CDOTA_Item_SobiMask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e10ce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_SobiMask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_SobiMask::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_SobiMask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e10d00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_SobiMask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_SobiMask::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_SobiMask::GetEntityClassInternal  (line 28, @0x0000000002e14520, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "CDOTA_Item_SobiMask"
// globals: `guard variable for'CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass, CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass, __dso_handle, CDOTA_Item_SobiMask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_SobiMask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SobiMaskClassInfo, CDOTA_Item_SobiMask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SobiMaskClassInfo
CEntityClass *__cdecl CDOTA_Item_SobiMask::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass);
    CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass._vptr_CEntityClass = off_476F630;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass);
    __cxa_atexit(
      CDOTA_Item_SobiMask::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_SobiMaskClass != 0 )
    return &CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass;
  if ( `guard variable for'CDOTA_Item_SobiMask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SobiMaskClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_SobiMask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SobiMaskClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_SobiMask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SobiMaskClassInfo,
      "CDOTA_Item_SobiMask",
      "item_sobi_mask",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_SobiMask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SobiMaskClassInfo);
  }
  CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass.m_pClassInfo = &CDOTA_Item_SobiMask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SobiMaskClassInfo;
  CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass.m_pBaseClassInfo = CDOTA_Item_SobiMask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SobiMaskClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_SobiMaskClass = &CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass;
  CDOTA_Item_SobiMask::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SobiMaskClassInfo.m_pClass = &CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass;
  CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_SobiMaskClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_SobiMask::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SobiMaskClass;
}


// CDOTA_Item_SobiMask::GetIntrinsicModifierName  (line 30, @0x0000000002e0b810, libserver.so)
// strings: "modifier_item_sobi_mask"
const char *__fastcall CDOTA_Item_SobiMask::GetIntrinsicModifierName(CDOTA_Item_SobiMask *const this)
{
  return "modifier_item_sobi_mask";
}


// CDOTA_Modifier_Item_SobiMask::~CDOTA_Modifier_Item_SobiMask  (line 38, @0x0000000002e0dfc0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_SobiMask::~CDOTA_Modifier_Item_SobiMask(CDOTA_Modifier_Item_SobiMask *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_SobiMask::~CDOTA_Modifier_Item_SobiMask  (line 38, @0x0000000002e0dfe0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_SobiMask
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_SobiMask::~CDOTA_Modifier_Item_SobiMask(CDOTA_Modifier_Item_SobiMask *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_SobiMask::DeclareFunctions  (line 53, @0x0000000002dff040, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_SobiMask::GetModifierPercentageManaRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_SobiMask::DeclareFunctions(CDOTA_Modifier_Item_SobiMask *const this)
{
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_SobiMask::GetModifierPercentageManaRegen;
  this->m_Functions[54].__delta = 0;
}


// CDOTA_Modifier_Item_SobiMask::GetModifierPercentageManaRegen  (line 58, @0x0000000002dff060, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_SobiMask::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_SobiMask *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_SobiMask::OnCreated  (line 63, @0x0000000002e07c90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_mana_regen"
void __fastcall CDOTA_Modifier_Item_SobiMask::OnCreated(CDOTA_Modifier_Item_SobiMask *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_mana_regen", -1, 0);
  else
    this->bonus_mana_regen = 0;
}


