// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_boots_of_elven.cpp:26
class CDOTA_Item_BootsOfElven : public CDOTA_Item {
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
	CDOTA_Item_BootsOfElven(CDOTA_Item_BootsOfElven &);
	CDOTA_Item_BootsOfElven(CDOTA_Item_BootsOfElven &);
	CDOTA_Item_BootsOfElven();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_BootsOfElven();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_boots_of_elven.cpp:38
class CDOTA_Modifier_Item_BootsOfElven : public CDOTA_Buff_Item {
public:

private:

	int bonus_agility;  // +0xba8
	CDOTA_Modifier_Item_BootsOfElven();
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_BootsOfElven();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_BootsOfElven::~CDOTA_Item_BootsOfElven  (line 26, @0x0000000002d85c30, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_BootsOfElven::~CDOTA_Item_BootsOfElven(CDOTA_Item_BootsOfElven *const this)
{
  this->_vptr_IHandleEntity = &off_46B0990;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_BootsOfElven::~CDOTA_Item_BootsOfElven  (line 26, @0x0000000002d85c50, libserver.so)  // inlines: ~CDOTA_Item_BootsOfElven
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_BootsOfElven::~CDOTA_Item_BootsOfElven(CDOTA_Item_BootsOfElven *const this)
{
  this->_vptr_IHandleEntity = &off_46B0990;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_BootsOfElven::Schema_DynamicBinding  (line 28, @0x0000000002d80980, libserver.so)
// globals: CDOTA_Item_BootsOfElven::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BootsOfElven::Schema_DynamicBinding(
        const CDOTA_Item_BootsOfElven *const this)
{
  return CDOTA_Item_BootsOfElven::s_pSchemaBinding;
}


// CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d80990, libserver.so)
// globals: CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d809a0, libserver.so)  // inlines: Destruct<CDOTA_Item_BootsOfElven>
void __fastcall CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d809c0, libserver.so)
void __fastcall CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d809e0, libserver.so)
bool __fastcall CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d809f0, libserver.so)
// globals: CDOTA_Item_BootsOfElven::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BootsOfElven::s_pSchemaBinding;
}


// CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d83430, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d84a70, libserver.so)  // inlines: CDOTA_Item_BootsOfElven, Construct<CDOTA_Item_BootsOfElven>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46B0990;
  }
  return p;
}


// CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d882a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d882c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_BootsOfElven::GetEntityClassInternal  (line 28, @0x0000000002d8ed80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_BootsOfElven"
// globals: `guard variable for'CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass, CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass, __dso_handle, CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_BootsOfElven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfElvenClassInfo, CDOTA_Item_BootsOfElven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfElvenClassInfo
CEntityClass *__cdecl CDOTA_Item_BootsOfElven::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass);
    CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass._vptr_CEntityClass = off_46B0910;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass);
    __cxa_atexit(
      CDOTA_Item_BootsOfElven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BootsOfElvenClass != 0 )
    return &CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass;
  if ( `guard variable for'CDOTA_Item_BootsOfElven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfElvenClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BootsOfElven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfElvenClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_BootsOfElven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfElvenClassInfo,
      "CDOTA_Item_BootsOfElven",
      "item_boots_of_elves",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BootsOfElven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfElvenClassInfo);
  }
  CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass.m_pClassInfo = &CDOTA_Item_BootsOfElven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfElvenClassInfo;
  CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass.m_pBaseClassInfo = CDOTA_Item_BootsOfElven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfElvenClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BootsOfElvenClass = &CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass;
  CDOTA_Item_BootsOfElven::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfElvenClassInfo.m_pClass = &CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass;
  CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BootsOfElvenClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_BootsOfElven::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfElvenClass;
}


// CDOTA_Item_BootsOfElven::GetIntrinsicModifierName  (line 30, @0x0000000002d80a00, libserver.so)
// strings: "modifier_item_boots_of_elves"
const char *__fastcall CDOTA_Item_BootsOfElven::GetIntrinsicModifierName(CDOTA_Item_BootsOfElven *const this)
{
  return "modifier_item_boots_of_elves";
}


// CDOTA_Modifier_Item_BootsOfElven::~CDOTA_Modifier_Item_BootsOfElven  (line 38, @0x0000000002d84320, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_BootsOfElven::~CDOTA_Modifier_Item_BootsOfElven(
        CDOTA_Modifier_Item_BootsOfElven *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_BootsOfElven::~CDOTA_Modifier_Item_BootsOfElven  (line 38, @0x0000000002d84340, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_BootsOfElven
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_BootsOfElven::~CDOTA_Modifier_Item_BootsOfElven(
        CDOTA_Modifier_Item_BootsOfElven *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_BootsOfElven::DeclareFunctions  (line 53, @0x0000000002d6ebb0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_BootsOfElven::GetModifierBonusStats_Agility(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_BootsOfElven::DeclareFunctions(CDOTA_Modifier_Item_BootsOfElven *const this)
{
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_BootsOfElven::GetModifierBonusStats_Agility;
  this->m_Functions[65].__delta = 0;
}


// CDOTA_Modifier_Item_BootsOfElven::GetModifierBonusStats_Agility  (line 58, @0x0000000002d6ebd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_BootsOfElven::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_BootsOfElven *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_BootsOfElven::OnCreated  (line 63, @0x0000000002d7b890, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_agility"
void __fastcall CDOTA_Modifier_Item_BootsOfElven::OnCreated(
        CDOTA_Modifier_Item_BootsOfElven *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_agility", -1, 0);
  else
    this->bonus_agility = 0;
}


