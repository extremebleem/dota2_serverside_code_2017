// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_sacred_relic.cpp:26
class CDOTA_Item_SacredRelic : public CDOTA_Item {
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
	CDOTA_Item_SacredRelic(CDOTA_Item_SacredRelic &);
	CDOTA_Item_SacredRelic(CDOTA_Item_SacredRelic &);
	CDOTA_Item_SacredRelic();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_SacredRelic();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_sacred_relic.cpp:38
class CDOTA_Modifier_Item_SacredRelic : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	CDOTA_Modifier_Item_SacredRelic();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_SacredRelic();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_SacredRelic::~CDOTA_Item_SacredRelic  (line 26, @0x0000000002df3640, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_SacredRelic::~CDOTA_Item_SacredRelic(CDOTA_Item_SacredRelic *const this)
{
  this->_vptr_IHandleEntity = &off_4758A10;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_SacredRelic::~CDOTA_Item_SacredRelic  (line 26, @0x0000000002df3660, libserver.so)  // inlines: ~CDOTA_Item_SacredRelic
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_SacredRelic::~CDOTA_Item_SacredRelic(CDOTA_Item_SacredRelic *const this)
{
  this->_vptr_IHandleEntity = &off_4758A10;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_SacredRelic::Schema_DynamicBinding  (line 28, @0x0000000002def490, libserver.so)
// globals: CDOTA_Item_SacredRelic::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_SacredRelic::Schema_DynamicBinding(
        const CDOTA_Item_SacredRelic *const this)
{
  return CDOTA_Item_SacredRelic::s_pSchemaBinding;
}


// CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002def4a0, libserver.so)
// globals: CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_SacredRelic::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002def4b0, libserver.so)  // inlines: Destruct<CDOTA_Item_SacredRelic>
void __fastcall CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_SacredRelic::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002def4d0, libserver.so)
void __fastcall CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_SacredRelic::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002def4f0, libserver.so)
bool __fastcall CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_SacredRelic::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002def500, libserver.so)
// globals: CDOTA_Item_SacredRelic::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_SacredRelic::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_SacredRelic::s_pSchemaBinding;
}


// CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002df10c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_SacredRelic::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002df2270, libserver.so)  // inlines: CDOTA_Item_SacredRelic, Construct<CDOTA_Item_SacredRelic>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_SacredRelic::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4758A10;
  }
  return p;
}


// CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df5850, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_SacredRelic::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df5870, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_SacredRelic::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_SacredRelic::GetEntityClassInternal  (line 28, @0x0000000002dfc5a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_relic", "CDOTA_Item_SacredRelic"
// globals: `guard variable for'CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass, CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass, __dso_handle, CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_SacredRelic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SacredRelicClassInfo, CDOTA_Item_SacredRelic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SacredRelicClassInfo
CEntityClass *__cdecl CDOTA_Item_SacredRelic::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass);
    CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass._vptr_CEntityClass = off_4758990;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass);
    __cxa_atexit(
      CDOTA_Item_SacredRelic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_SacredRelicClass != 0 )
    return &CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass;
  if ( `guard variable for'CDOTA_Item_SacredRelic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SacredRelicClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_SacredRelic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SacredRelicClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_SacredRelic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SacredRelicClassInfo,
      "CDOTA_Item_SacredRelic",
      "item_relic",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_SacredRelic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SacredRelicClassInfo);
  }
  CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass.m_pClassInfo = &CDOTA_Item_SacredRelic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SacredRelicClassInfo;
  CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass.m_pBaseClassInfo = CDOTA_Item_SacredRelic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SacredRelicClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_SacredRelicClass = &CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass;
  CDOTA_Item_SacredRelic::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SacredRelicClassInfo.m_pClass = &CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass;
  CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_SacredRelicClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_SacredRelic::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SacredRelicClass;
}


// CDOTA_Item_SacredRelic::GetIntrinsicModifierName  (line 30, @0x0000000002def510, libserver.so)
// strings: "modifier_item_sacred_relic"
const char *__fastcall CDOTA_Item_SacredRelic::GetIntrinsicModifierName(CDOTA_Item_SacredRelic *const this)
{
  return "modifier_item_sacred_relic";
}


// CDOTA_Modifier_Item_SacredRelic::~CDOTA_Modifier_Item_SacredRelic  (line 38, @0x0000000002df1790, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_SacredRelic::~CDOTA_Modifier_Item_SacredRelic(
        CDOTA_Modifier_Item_SacredRelic *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_SacredRelic::~CDOTA_Modifier_Item_SacredRelic  (line 38, @0x0000000002df17b0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_SacredRelic
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_SacredRelic::~CDOTA_Modifier_Item_SacredRelic(
        CDOTA_Modifier_Item_SacredRelic *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_SacredRelic::DeclareFunctions  (line 53, @0x0000000002de40b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_SacredRelic::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_SacredRelic::DeclareFunctions(CDOTA_Modifier_Item_SacredRelic *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_SacredRelic::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_SacredRelic::GetModifierPreAttack_BonusDamage  (line 58, @0x0000000002de40d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_SacredRelic::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_SacredRelic *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_SacredRelic::OnCreated  (line 63, @0x0000000002decb20, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
void __fastcall CDOTA_Modifier_Item_SacredRelic::OnCreated(CDOTA_Modifier_Item_SacredRelic *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_damage, "bonus_damage");
}


