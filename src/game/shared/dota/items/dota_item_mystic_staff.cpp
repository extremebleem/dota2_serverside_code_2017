// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_mystic_staff.cpp:26
class CDOTA_Item_MysticStaff : public CDOTA_Item {
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
	CDOTA_Item_MysticStaff(CDOTA_Item_MysticStaff &);
	CDOTA_Item_MysticStaff(CDOTA_Item_MysticStaff &);
	CDOTA_Item_MysticStaff();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_MysticStaff();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_mystic_staff.cpp:38
class CDOTA_Modifier_Item_MysticStaff : public CDOTA_Buff_Item {
public:

private:

	int bonus_intellect;  // +0xba8
	CDOTA_Modifier_Item_MysticStaff();
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_MysticStaff();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_MysticStaff::~CDOTA_Item_MysticStaff  (line 26, @0x0000000002dd7c40, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_MysticStaff::~CDOTA_Item_MysticStaff(CDOTA_Item_MysticStaff *const this)
{
  this->_vptr_IHandleEntity = &off_4722750;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_MysticStaff::~CDOTA_Item_MysticStaff  (line 26, @0x0000000002dd7c60, libserver.so)  // inlines: ~CDOTA_Item_MysticStaff
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_MysticStaff::~CDOTA_Item_MysticStaff(CDOTA_Item_MysticStaff *const this)
{
  this->_vptr_IHandleEntity = &off_4722750;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_MysticStaff::Schema_DynamicBinding  (line 28, @0x0000000002dd3a00, libserver.so)
// globals: CDOTA_Item_MysticStaff::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MysticStaff::Schema_DynamicBinding(
        const CDOTA_Item_MysticStaff *const this)
{
  return CDOTA_Item_MysticStaff::s_pSchemaBinding;
}


// CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002dd3a10, libserver.so)
// globals: CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_MysticStaff::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002dd3a20, libserver.so)  // inlines: Destruct<CDOTA_Item_MysticStaff>
void __fastcall CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_MysticStaff::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002dd3a40, libserver.so)
void __fastcall CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_MysticStaff::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002dd3a60, libserver.so)
bool __fastcall CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_MysticStaff::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002dd3a70, libserver.so)
// globals: CDOTA_Item_MysticStaff::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_MysticStaff::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MysticStaff::s_pSchemaBinding;
}


// CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dd5af0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_MysticStaff::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dd6da0, libserver.so)  // inlines: CDOTA_Item_MysticStaff, Construct<CDOTA_Item_MysticStaff>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_MysticStaff::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4722750;
  }
  return p;
}


// CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dd9b70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MysticStaff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dd9b90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MysticStaff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_MysticStaff::GetEntityClassInternal  (line 28, @0x0000000002dde750, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "CDOTA_Item_MysticStaff"
// globals: `guard variable for'CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass, CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass, __dso_handle, CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_MysticStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MysticStaffClassInfo, CDOTA_Item_MysticStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MysticStaffClassInfo
CEntityClass *__cdecl CDOTA_Item_MysticStaff::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass);
    CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass._vptr_CEntityClass = off_47226D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass);
    __cxa_atexit(
      CDOTA_Item_MysticStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_MysticStaffClass != 0 )
    return &CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass;
  if ( `guard variable for'CDOTA_Item_MysticStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MysticStaffClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MysticStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MysticStaffClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_MysticStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MysticStaffClassInfo,
      "CDOTA_Item_MysticStaff",
      "item_mystic_staff",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MysticStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MysticStaffClassInfo);
  }
  CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass.m_pClassInfo = &CDOTA_Item_MysticStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MysticStaffClassInfo;
  CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass.m_pBaseClassInfo = CDOTA_Item_MysticStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MysticStaffClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_MysticStaffClass = &CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass;
  CDOTA_Item_MysticStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MysticStaffClassInfo.m_pClass = &CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass;
  CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_MysticStaffClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_MysticStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MysticStaffClass;
}


// CDOTA_Item_MysticStaff::GetIntrinsicModifierName  (line 30, @0x0000000002dd3a80, libserver.so)
// strings: "modifier_item_mystic_staff"
const char *__fastcall CDOTA_Item_MysticStaff::GetIntrinsicModifierName(CDOTA_Item_MysticStaff *const this)
{
  return "modifier_item_mystic_staff";
}


// CDOTA_Modifier_Item_MysticStaff::~CDOTA_Modifier_Item_MysticStaff  (line 38, @0x0000000002dd6750, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_MysticStaff::~CDOTA_Modifier_Item_MysticStaff(
        CDOTA_Modifier_Item_MysticStaff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_MysticStaff::~CDOTA_Modifier_Item_MysticStaff  (line 38, @0x0000000002dd6770, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_MysticStaff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_MysticStaff::~CDOTA_Modifier_Item_MysticStaff(
        CDOTA_Modifier_Item_MysticStaff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_MysticStaff::DeclareFunctions  (line 53, @0x0000000002dc6e90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_MysticStaff::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_MysticStaff::DeclareFunctions(CDOTA_Modifier_Item_MysticStaff *const this)
{
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_MysticStaff::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_MysticStaff::GetModifierBonusStats_Intellect  (line 58, @0x0000000002dc6eb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_MysticStaff::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_MysticStaff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_MysticStaff::OnCreated  (line 63, @0x0000000002dd0a10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_MysticStaff::OnCreated(CDOTA_Modifier_Item_MysticStaff *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_intellect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_intellect", -1, 0);
  else
    this->bonus_intellect = 0;
}


