// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_circlet.cpp:26
class CDOTA_Item_Circlet : public CDOTA_Item {
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
	CDOTA_Item_Circlet(CDOTA_Item_Circlet &);
	CDOTA_Item_Circlet(CDOTA_Item_Circlet &);
	CDOTA_Item_Circlet();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Circlet();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_circlet.cpp:38
class CDOTA_Modifier_Item_Circlet : public CDOTA_Buff_Item {
public:

private:

	int bonus_all_stats;  // +0xba8
	CDOTA_Modifier_Item_Circlet();
	ModifierVariant_t GetModifierBonusStats_All(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Circlet();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Circlet::~CDOTA_Item_Circlet  (line 26, @0x0000000002d85f50, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Circlet::~CDOTA_Item_Circlet(CDOTA_Item_Circlet *const this)
{
  this->_vptr_IHandleEntity = &off_46BA710;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Circlet::~CDOTA_Item_Circlet  (line 26, @0x0000000002d85f70, libserver.so)  // inlines: ~CDOTA_Item_Circlet
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Circlet::~CDOTA_Item_Circlet(CDOTA_Item_Circlet *const this)
{
  this->_vptr_IHandleEntity = &off_46BA710;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Circlet::Schema_DynamicBinding  (line 28, @0x0000000002d80f00, libserver.so)
// globals: CDOTA_Item_Circlet::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Circlet::Schema_DynamicBinding(
        const CDOTA_Item_Circlet *const this)
{
  return CDOTA_Item_Circlet::s_pSchemaBinding;
}


// CDOTA_Item_Circlet::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d80f10, libserver.so)
// globals: CDOTA_Item_Circlet::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Circlet::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Circlet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Circlet::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Circlet::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d80f20, libserver.so)  // inlines: Destruct<CDOTA_Item_Circlet>
void __fastcall CDOTA_Item_Circlet::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Circlet::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Circlet::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d80f40, libserver.so)
void __fastcall CDOTA_Item_Circlet::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Circlet::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Circlet::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d80f60, libserver.so)
bool __fastcall CDOTA_Item_Circlet::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Circlet::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Circlet::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d80f70, libserver.so)
// globals: CDOTA_Item_Circlet::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Circlet::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Circlet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Circlet::s_pSchemaBinding;
}


// CDOTA_Item_Circlet::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d836b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Circlet::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Circlet::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Circlet::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d84c50, libserver.so)  // inlines: CDOTA_Item_Circlet, Construct<CDOTA_Item_Circlet>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Circlet::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Circlet::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46BA710;
  }
  return p;
}


// CDOTA_Item_Circlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d885c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Circlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Circlet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Circlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d885e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Circlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Circlet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Circlet::GetEntityClassInternal  (line 28, @0x0000000002d8ff00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_Circlet"
// globals: `guard variable for'CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass, CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass, __dso_handle, CDOTA_Item_Circlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Circlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CircletClassInfo, CDOTA_Item_Circlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CircletClassInfo
CEntityClass *__cdecl CDOTA_Item_Circlet::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass);
    CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass._vptr_CEntityClass = off_46BA690;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass);
    __cxa_atexit(
      CDOTA_Item_Circlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_CircletClass != 0 )
    return &CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass;
  if ( `guard variable for'CDOTA_Item_Circlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CircletClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Circlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CircletClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Circlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CircletClassInfo,
      "CDOTA_Item_Circlet",
      "item_circlet",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Circlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CircletClassInfo);
  }
  CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass.m_pClassInfo = &CDOTA_Item_Circlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CircletClassInfo;
  CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass.m_pBaseClassInfo = CDOTA_Item_Circlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CircletClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_CircletClass = &CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass;
  CDOTA_Item_Circlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CircletClassInfo.m_pClass = &CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass;
  CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_CircletClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Circlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CircletClass;
}


// CDOTA_Item_Circlet::GetIntrinsicModifierName  (line 30, @0x0000000002d80f80, libserver.so)
// strings: "modifier_item_circlet"
const char *__fastcall CDOTA_Item_Circlet::GetIntrinsicModifierName(CDOTA_Item_Circlet *const this)
{
  return "modifier_item_circlet";
}


// CDOTA_Modifier_Item_Circlet::~CDOTA_Modifier_Item_Circlet  (line 38, @0x0000000002d84140, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Circlet::~CDOTA_Modifier_Item_Circlet(CDOTA_Modifier_Item_Circlet *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Circlet::~CDOTA_Modifier_Item_Circlet  (line 38, @0x0000000002d84160, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Circlet
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Circlet::~CDOTA_Modifier_Item_Circlet(CDOTA_Modifier_Item_Circlet *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Circlet::OnCreated  (line 55, @0x0000000002d7b9b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_all_stats"
void __fastcall CDOTA_Modifier_Item_Circlet::OnCreated(CDOTA_Modifier_Item_Circlet *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_all_stats", -1, 0);
  else
    this->bonus_all_stats = 0;
}


// CDOTA_Modifier_Item_Circlet::DeclareFunctions  (line 60, @0x0000000002d6efb0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Circlet::GetModifierBonusStats_All(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Circlet::DeclareFunctions(CDOTA_Modifier_Item_Circlet *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Circlet::GetModifierBonusStats_All;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Circlet::GetModifierBonusStats_All;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Circlet::GetModifierBonusStats_All;
  this->m_Functions[65].__delta = 0;
}


// CDOTA_Modifier_Item_Circlet::GetModifierBonusStats_All  (line 67, @0x0000000002d6f000, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Circlet::GetModifierBonusStats_All(
        CDOTA_Modifier_Item_Circlet *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


