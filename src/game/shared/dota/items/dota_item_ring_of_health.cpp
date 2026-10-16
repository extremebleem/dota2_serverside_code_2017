// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_ring_of_health.cpp:26
class CDOTA_Item_RingOfHealth : public CDOTA_Item {
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
	CDOTA_Item_RingOfHealth(CDOTA_Item_RingOfHealth &);
	CDOTA_Item_RingOfHealth(CDOTA_Item_RingOfHealth &);
	CDOTA_Item_RingOfHealth();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_RingOfHealth();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ring_of_health.cpp:38
class CDOTA_Modifier_Item_RingOfHealth : public CDOTA_Buff_Item {
public:

private:

	int bonus_health_regen;  // +0xba8
	CDOTA_Modifier_Item_RingOfHealth();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_RingOfHealth();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_RingOfHealth::~CDOTA_Item_RingOfHealth  (line 26, @0x0000000002df3230, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_RingOfHealth::~CDOTA_Item_RingOfHealth(CDOTA_Item_RingOfHealth *const this)
{
  this->_vptr_IHandleEntity = &off_474CB10;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_RingOfHealth::~CDOTA_Item_RingOfHealth  (line 26, @0x0000000002df3250, libserver.so)  // inlines: ~CDOTA_Item_RingOfHealth
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_RingOfHealth::~CDOTA_Item_RingOfHealth(CDOTA_Item_RingOfHealth *const this)
{
  this->_vptr_IHandleEntity = &off_474CB10;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_RingOfHealth::Schema_DynamicBinding  (line 28, @0x0000000002deed90, libserver.so)
// globals: CDOTA_Item_RingOfHealth::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RingOfHealth::Schema_DynamicBinding(
        const CDOTA_Item_RingOfHealth *const this)
{
  return CDOTA_Item_RingOfHealth::s_pSchemaBinding;
}


// CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002deeda0, libserver.so)
// globals: CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002deedb0, libserver.so)  // inlines: Destruct<CDOTA_Item_RingOfHealth>
void __fastcall CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002deedd0, libserver.so)
void __fastcall CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002deedf0, libserver.so)
bool __fastcall CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002deee00, libserver.so)
// globals: CDOTA_Item_RingOfHealth::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RingOfHealth::s_pSchemaBinding;
}


// CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002df0d80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002df2150, libserver.so)  // inlines: CDOTA_Item_RingOfHealth, Construct<CDOTA_Item_RingOfHealth>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_474CB10;
  }
  return p;
}


// CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df5440, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df5460, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_RingOfHealth::GetEntityClassInternal  (line 28, @0x0000000002dfa4e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "CDOTA_Item_RingOfHealth"
// globals: `guard variable for'CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass, CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass, __dso_handle, CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_RingOfHealth::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfHealthClassInfo, CDOTA_Item_RingOfHealth::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfHealthClassInfo
CEntityClass *__cdecl CDOTA_Item_RingOfHealth::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass);
    CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass._vptr_CEntityClass = off_474CA90;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass);
    __cxa_atexit(
      CDOTA_Item_RingOfHealth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_RingOfHealthClass != 0 )
    return &CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass;
  if ( `guard variable for'CDOTA_Item_RingOfHealth::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfHealthClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RingOfHealth::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfHealthClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_RingOfHealth::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfHealthClassInfo,
      "CDOTA_Item_RingOfHealth",
      "item_ring_of_health",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RingOfHealth::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfHealthClassInfo);
  }
  CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass.m_pClassInfo = &CDOTA_Item_RingOfHealth::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfHealthClassInfo;
  CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass.m_pBaseClassInfo = CDOTA_Item_RingOfHealth::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfHealthClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_RingOfHealthClass = &CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass;
  CDOTA_Item_RingOfHealth::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfHealthClassInfo.m_pClass = &CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass;
  CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_RingOfHealthClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_RingOfHealth::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfHealthClass;
}


// CDOTA_Item_RingOfHealth::GetIntrinsicModifierName  (line 30, @0x0000000002deee10, libserver.so)
// strings: "modifier_item_ring_of_health"
const char *__fastcall CDOTA_Item_RingOfHealth::GetIntrinsicModifierName(CDOTA_Item_RingOfHealth *const this)
{
  return "modifier_item_ring_of_health";
}


// CDOTA_Modifier_Item_RingOfHealth::~CDOTA_Modifier_Item_RingOfHealth  (line 38, @0x0000000002df1920, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_RingOfHealth::~CDOTA_Modifier_Item_RingOfHealth(
        CDOTA_Modifier_Item_RingOfHealth *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_RingOfHealth::~CDOTA_Modifier_Item_RingOfHealth  (line 38, @0x0000000002df1940, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_RingOfHealth
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_RingOfHealth::~CDOTA_Modifier_Item_RingOfHealth(
        CDOTA_Modifier_Item_RingOfHealth *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_RingOfHealth::DeclareFunctions  (line 53, @0x0000000002de3f30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_RingOfHealth::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_RingOfHealth::DeclareFunctions(CDOTA_Modifier_Item_RingOfHealth *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_RingOfHealth::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
}


// CDOTA_Modifier_Item_RingOfHealth::GetModifierConstantHealthRegen  (line 58, @0x0000000002de3f50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RingOfHealth::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_RingOfHealth *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_RingOfHealth::OnCreated  (line 63, @0x0000000002deca40, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "bonus_health_regen"
void __fastcall CDOTA_Modifier_Item_RingOfHealth::OnCreated(
        CDOTA_Modifier_Item_RingOfHealth *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_health_regen, "bonus_health_regen");
}


