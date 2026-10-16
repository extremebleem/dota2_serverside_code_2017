// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_mantle.cpp:26
class CDOTA_Item_Mantle : public CDOTA_Item {
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
	CDOTA_Item_Mantle(CDOTA_Item_Mantle &);
	CDOTA_Item_Mantle(CDOTA_Item_Mantle &);
	CDOTA_Item_Mantle();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Mantle();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_mantle.cpp:38
class CDOTA_Modifier_Item_Mantle : public CDOTA_Buff_Item {
public:

private:

	int bonus_intellect;  // +0xba8
	CDOTA_Modifier_Item_Mantle();
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Mantle();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Mantle::~CDOTA_Item_Mantle  (line 26, @0x0000000002dbcc20, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Mantle::~CDOTA_Item_Mantle(CDOTA_Item_Mantle *const this)
{
  this->_vptr_IHandleEntity = &off_4710BF0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Mantle::~CDOTA_Item_Mantle  (line 26, @0x0000000002dbcc40, libserver.so)  // inlines: ~CDOTA_Item_Mantle
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Mantle::~CDOTA_Item_Mantle(CDOTA_Item_Mantle *const this)
{
  this->_vptr_IHandleEntity = &off_4710BF0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Mantle::Schema_DynamicBinding  (line 28, @0x0000000002db9340, libserver.so)
// globals: CDOTA_Item_Mantle::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Mantle::Schema_DynamicBinding(const CDOTA_Item_Mantle *const this)
{
  return CDOTA_Item_Mantle::s_pSchemaBinding;
}


// CDOTA_Item_Mantle::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002db9350, libserver.so)
// globals: CDOTA_Item_Mantle::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Mantle::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Mantle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Mantle::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Mantle::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002db9360, libserver.so)  // inlines: Destruct<CDOTA_Item_Mantle>
void __fastcall CDOTA_Item_Mantle::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Mantle::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Mantle::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002db9380, libserver.so)
void __fastcall CDOTA_Item_Mantle::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Mantle::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Mantle::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002db93a0, libserver.so)
bool __fastcall CDOTA_Item_Mantle::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Mantle::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Mantle::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002db93b0, libserver.so)
// globals: CDOTA_Item_Mantle::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Mantle::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Mantle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Mantle::s_pSchemaBinding;
}


// CDOTA_Item_Mantle::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dba900, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Mantle::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Mantle::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Mantle::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dbbb50, libserver.so)  // inlines: CDOTA_Item_Mantle, Construct<CDOTA_Item_Mantle>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Mantle::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Mantle::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4710BF0;
  }
  return p;
}


// CDOTA_Item_Mantle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbee20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Mantle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Mantle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Mantle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbee40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Mantle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Mantle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Mantle::GetEntityClassInternal  (line 28, @0x0000000002dc5760, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "CDOTA_Item_Mantle"
// globals: `guard variable for'CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass, CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass, __dso_handle, CDOTA_Item_Mantle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Mantle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantleClassInfo, CDOTA_Item_Mantle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantleClassInfo
CEntityClass *__cdecl CDOTA_Item_Mantle::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass);
    CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass._vptr_CEntityClass = off_4710B70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass);
    __cxa_atexit(
      CDOTA_Item_Mantle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_MantleClass != 0 )
    return &CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass;
  if ( `guard variable for'CDOTA_Item_Mantle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Mantle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Mantle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantleClassInfo,
      "CDOTA_Item_Mantle",
      "item_mantle",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Mantle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantleClassInfo);
  }
  CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass.m_pClassInfo = &CDOTA_Item_Mantle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantleClassInfo;
  CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass.m_pBaseClassInfo = CDOTA_Item_Mantle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_MantleClass = &CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass;
  CDOTA_Item_Mantle::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MantleClassInfo.m_pClass = &CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass;
  CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_MantleClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Mantle::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MantleClass;
}


// CDOTA_Item_Mantle::GetIntrinsicModifierName  (line 30, @0x0000000002db93c0, libserver.so)
// strings: "modifier_item_mantle"
const char *__fastcall CDOTA_Item_Mantle::GetIntrinsicModifierName(CDOTA_Item_Mantle *const this)
{
  return "modifier_item_mantle";
}


// CDOTA_Modifier_Item_Mantle::~CDOTA_Modifier_Item_Mantle  (line 38, @0x0000000002dbace0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Mantle::~CDOTA_Modifier_Item_Mantle(CDOTA_Modifier_Item_Mantle *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Mantle::~CDOTA_Modifier_Item_Mantle  (line 38, @0x0000000002dbad00, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Mantle
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Mantle::~CDOTA_Modifier_Item_Mantle(CDOTA_Modifier_Item_Mantle *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Mantle::DeclareFunctions  (line 54, @0x0000000002dab5e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Mantle::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Mantle::DeclareFunctions(CDOTA_Modifier_Item_Mantle *const this)
{
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Mantle::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_Mantle::GetModifierBonusStats_Intellect  (line 59, @0x0000000002dab600, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Mantle::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Mantle *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Mantle::OnCreated  (line 64, @0x0000000002db4350, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_Mantle::OnCreated(CDOTA_Modifier_Item_Mantle *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_intellect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_intellect", -1, 0);
  else
    this->bonus_intellect = 0;
}


