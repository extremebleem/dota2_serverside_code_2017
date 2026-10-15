// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_blade_of_alacrity.cpp:26
class CDOTA_Item_BladeOfAlacrity : public CDOTA_Item {
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
	CDOTA_Item_BladeOfAlacrity(CDOTA_Item_BladeOfAlacrity &);
	CDOTA_Item_BladeOfAlacrity(CDOTA_Item_BladeOfAlacrity &);
	CDOTA_Item_BladeOfAlacrity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_BladeOfAlacrity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_blade_of_alacrity.cpp:38
class CDOTA_Modifier_Item_BladeOfAlacrity : public CDOTA_Buff_Item {
public:

private:

	int bonus_agility;  // +0xba8
	CDOTA_Modifier_Item_BladeOfAlacrity();
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_BladeOfAlacrity();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_BladeOfAlacrity::~CDOTA_Item_BladeOfAlacrity  (line 26, @0x0000000002d647b0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_BladeOfAlacrity::~CDOTA_Item_BladeOfAlacrity(CDOTA_Item_BladeOfAlacrity *const this)
{
  this->_vptr_IHandleEntity = &off_4696CB0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_BladeOfAlacrity::~CDOTA_Item_BladeOfAlacrity  (line 26, @0x0000000002d647d0, libserver.so)  // inlines: ~CDOTA_Item_BladeOfAlacrity
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_BladeOfAlacrity::~CDOTA_Item_BladeOfAlacrity(CDOTA_Item_BladeOfAlacrity *const this)
{
  this->_vptr_IHandleEntity = &off_4696CB0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_BladeOfAlacrity::Schema_DynamicBinding  (line 28, @0x0000000002d61100, libserver.so)
// globals: CDOTA_Item_BladeOfAlacrity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BladeOfAlacrity::Schema_DynamicBinding(
        const CDOTA_Item_BladeOfAlacrity *const this)
{
  return CDOTA_Item_BladeOfAlacrity::s_pSchemaBinding;
}


// CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d61110, libserver.so)
// globals: CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d61120, libserver.so)  // inlines: Destruct<CDOTA_Item_BladeOfAlacrity>
void __fastcall CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d61140, libserver.so)
void __fastcall CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d61160, libserver.so)
bool __fastcall CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d61170, libserver.so)
// globals: CDOTA_Item_BladeOfAlacrity::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BladeOfAlacrity::s_pSchemaBinding;
}


// CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d62770, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d63870, libserver.so)  // inlines: CDOTA_Item_BladeOfAlacrity, Construct<CDOTA_Item_BladeOfAlacrity>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4696CB0;
  }
  return p;
}


// CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d666d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d666f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal  (line 28, @0x0000000002d6cc00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_blade_of_alacrity", "CDOTA_Item_BladeOfAlacrity"
// globals: `guard variable for'CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass, CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass, __dso_handle, CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_BladeOfAlacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BladeOfAlacrityClassInfo, CDOTA_Item_BladeOfAlacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BladeOfAlacrityClassInfo
CEntityClass *__cdecl CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass);
    CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass._vptr_CEntityClass = off_4696C30;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass);
    __cxa_atexit(
      CDOTA_Item_BladeOfAlacrity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BladeOfAlacrityClass != 0 )
    return &CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass;
  if ( `guard variable for'CDOTA_Item_BladeOfAlacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BladeOfAlacrityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BladeOfAlacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BladeOfAlacrityClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_BladeOfAlacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BladeOfAlacrityClassInfo,
      "CDOTA_Item_BladeOfAlacrity",
      "item_blade_of_alacrity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BladeOfAlacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BladeOfAlacrityClassInfo);
  }
  CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass.m_pClassInfo = &CDOTA_Item_BladeOfAlacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BladeOfAlacrityClassInfo;
  CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass.m_pBaseClassInfo = CDOTA_Item_BladeOfAlacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BladeOfAlacrityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BladeOfAlacrityClass = &CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass;
  CDOTA_Item_BladeOfAlacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BladeOfAlacrityClassInfo.m_pClass = &CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass;
  CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BladeOfAlacrityClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_BladeOfAlacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BladeOfAlacrityClass;
}


// CDOTA_Item_BladeOfAlacrity::GetIntrinsicModifierName  (line 30, @0x0000000002d61180, libserver.so)
// strings: "modifier_item_blade_of_alacrity"
const char *__fastcall CDOTA_Item_BladeOfAlacrity::GetIntrinsicModifierName(CDOTA_Item_BladeOfAlacrity *const this)
{
  return "modifier_item_blade_of_alacrity";
}


// CDOTA_Modifier_Item_BladeOfAlacrity::~CDOTA_Modifier_Item_BladeOfAlacrity  (line 38, @0x0000000002d62cb0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_BladeOfAlacrity::~CDOTA_Modifier_Item_BladeOfAlacrity(
        CDOTA_Modifier_Item_BladeOfAlacrity *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_BladeOfAlacrity::~CDOTA_Modifier_Item_BladeOfAlacrity  (line 38, @0x0000000002d62cd0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_BladeOfAlacrity
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_BladeOfAlacrity::~CDOTA_Modifier_Item_BladeOfAlacrity(
        CDOTA_Modifier_Item_BladeOfAlacrity *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_BladeOfAlacrity::DeclareFunctions  (line 53, @0x0000000002d545c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_BladeOfAlacrity::GetModifierBonusStats_Agility(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_BladeOfAlacrity::DeclareFunctions(CDOTA_Modifier_Item_BladeOfAlacrity *const this)
{
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_BladeOfAlacrity::GetModifierBonusStats_Agility;
  this->m_Functions[65].__delta = 0;
}


// CDOTA_Modifier_Item_BladeOfAlacrity::GetModifierBonusStats_Agility  (line 58, @0x0000000002d545e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_BladeOfAlacrity::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_BladeOfAlacrity *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_BladeOfAlacrity::OnCreated  (line 63, @0x0000000002d5ec80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_agility"
void __fastcall CDOTA_Modifier_Item_BladeOfAlacrity::OnCreated(
        CDOTA_Modifier_Item_BladeOfAlacrity *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_agility", -1, 0);
  else
    this->bonus_agility = 0;
}


