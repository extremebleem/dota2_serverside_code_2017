// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_talisman_of_evasion.cpp:26
class CDOTA_Item_TalismanOfEvasion : public CDOTA_Item {
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
	CDOTA_Item_TalismanOfEvasion(CDOTA_Item_TalismanOfEvasion &);
	CDOTA_Item_TalismanOfEvasion(CDOTA_Item_TalismanOfEvasion &);
	CDOTA_Item_TalismanOfEvasion();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_TalismanOfEvasion();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_talisman_of_evasion.cpp:38
class CDOTA_Modifier_Item_TalismanOfEvasion : public CDOTA_Buff_Item {
public:

private:

	int bonus_evasion;  // +0xba8
	CDOTA_Modifier_Item_TalismanOfEvasion();
	ModifierVariant_t GetModifierEvasion_Constant(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_TalismanOfEvasion();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_TalismanOfEvasion::~CDOTA_Item_TalismanOfEvasion  (line 26, @0x0000000002e0f3a0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_TalismanOfEvasion::~CDOTA_Item_TalismanOfEvasion(CDOTA_Item_TalismanOfEvasion *const this)
{
  this->_vptr_IHandleEntity = &off_477AAF0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_TalismanOfEvasion::~CDOTA_Item_TalismanOfEvasion  (line 26, @0x0000000002e0f3c0, libserver.so)  // inlines: ~CDOTA_Item_TalismanOfEvasion
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_TalismanOfEvasion::~CDOTA_Item_TalismanOfEvasion(CDOTA_Item_TalismanOfEvasion *const this)
{
  this->_vptr_IHandleEntity = &off_477AAF0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_TalismanOfEvasion::Schema_DynamicBinding  (line 28, @0x0000000002e0bde0, libserver.so)
// globals: CDOTA_Item_TalismanOfEvasion::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_TalismanOfEvasion::Schema_DynamicBinding(
        const CDOTA_Item_TalismanOfEvasion *const this)
{
  return CDOTA_Item_TalismanOfEvasion::s_pSchemaBinding;
}


// CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002e0bdf0, libserver.so)
// globals: CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002e0be00, libserver.so)  // inlines: Destruct<CDOTA_Item_TalismanOfEvasion>
void __fastcall CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002e0be20, libserver.so)
void __fastcall CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002e0be40, libserver.so)
bool __fastcall CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002e0be50, libserver.so)
// globals: CDOTA_Item_TalismanOfEvasion::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_TalismanOfEvasion::s_pSchemaBinding;
}


// CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002e0d6c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002e0e650, libserver.so)  // inlines: CDOTA_Item_TalismanOfEvasion, Construct<CDOTA_Item_TalismanOfEvasion>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_477AAF0;
  }
  return p;
}


// CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e11050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e11070, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal  (line 28, @0x0000000002e15ff0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_talisman_of_evasion", "CDOTA_Item_TalismanOfEvasion"
// globals: `guard variable for'CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass, CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass, __dso_handle, CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_TalismanOfEvasion::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TalismanOfEvasionClassInfo, CDOTA_Item_TalismanOfEvasion::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TalismanOfEvasionClassInfo
CEntityClass *__cdecl CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass);
    CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass._vptr_CEntityClass = off_477AA70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass);
    __cxa_atexit(
      CDOTA_Item_TalismanOfEvasion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_TalismanOfEvasionClass != 0 )
    return &CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass;
  if ( `guard variable for'CDOTA_Item_TalismanOfEvasion::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TalismanOfEvasionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_TalismanOfEvasion::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TalismanOfEvasionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_TalismanOfEvasion::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TalismanOfEvasionClassInfo,
      "CDOTA_Item_TalismanOfEvasion",
      "item_talisman_of_evasion",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_TalismanOfEvasion::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TalismanOfEvasionClassInfo);
  }
  CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass.m_pClassInfo = &CDOTA_Item_TalismanOfEvasion::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TalismanOfEvasionClassInfo;
  CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass.m_pBaseClassInfo = CDOTA_Item_TalismanOfEvasion::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TalismanOfEvasionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_TalismanOfEvasionClass = &CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass;
  CDOTA_Item_TalismanOfEvasion::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TalismanOfEvasionClassInfo.m_pClass = &CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass;
  CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_TalismanOfEvasionClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_TalismanOfEvasion::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TalismanOfEvasionClass;
}


// CDOTA_Item_TalismanOfEvasion::GetIntrinsicModifierName  (line 30, @0x0000000002e0be60, libserver.so)
// strings: "modifier_item_talisman_of_evasion"
const char *__fastcall CDOTA_Item_TalismanOfEvasion::GetIntrinsicModifierName(CDOTA_Item_TalismanOfEvasion *const this)
{
  return "modifier_item_talisman_of_evasion";
}


// CDOTA_Modifier_Item_TalismanOfEvasion::~CDOTA_Modifier_Item_TalismanOfEvasion  (line 38, @0x0000000002e0dd40, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_TalismanOfEvasion::~CDOTA_Modifier_Item_TalismanOfEvasion(
        CDOTA_Modifier_Item_TalismanOfEvasion *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_TalismanOfEvasion::~CDOTA_Modifier_Item_TalismanOfEvasion  (line 38, @0x0000000002e0dd60, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_TalismanOfEvasion
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_TalismanOfEvasion::~CDOTA_Modifier_Item_TalismanOfEvasion(
        CDOTA_Modifier_Item_TalismanOfEvasion *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_TalismanOfEvasion::OnCreated  (line 53, @0x0000000002e07c30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_evasion"
void __fastcall CDOTA_Modifier_Item_TalismanOfEvasion::OnCreated(
        CDOTA_Modifier_Item_TalismanOfEvasion *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_evasion = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_evasion", -1, 0);
  else
    this->bonus_evasion = 0;
}


// CDOTA_Modifier_Item_TalismanOfEvasion::DeclareFunctions  (line 58, @0x0000000002dff5f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_TalismanOfEvasion::GetModifierEvasion_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_TalismanOfEvasion::DeclareFunctions(
        CDOTA_Modifier_Item_TalismanOfEvasion *const this)
{
  this->m_Functions[40].__pfn = CDOTA_Modifier_Item_TalismanOfEvasion::GetModifierEvasion_Constant;
  this->m_Functions[40].__delta = 0;
}


// CDOTA_Modifier_Item_TalismanOfEvasion::GetModifierEvasion_Constant  (line 63, @0x0000000002dff610, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_TalismanOfEvasion::GetModifierEvasion_Constant(
        CDOTA_Modifier_Item_TalismanOfEvasion *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_evasion;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


