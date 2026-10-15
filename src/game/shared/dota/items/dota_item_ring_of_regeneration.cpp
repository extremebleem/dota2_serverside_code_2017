// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_ring_of_regeneration.cpp:26
class CDOTA_Item_RingOfRegeneration : public CDOTA_Item {
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
	CDOTA_Item_RingOfRegeneration(CDOTA_Item_RingOfRegeneration &);
	CDOTA_Item_RingOfRegeneration(CDOTA_Item_RingOfRegeneration &);
	CDOTA_Item_RingOfRegeneration();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_RingOfRegeneration();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ring_of_regeneration.cpp:38
class CDOTA_Modifier_Item_RingOfRegeneration : public CDOTA_Buff_Item {
public:

private:

	int bonus_health_regen;  // +0xba8
	CDOTA_Modifier_Item_RingOfRegeneration();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_RingOfRegeneration();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_RingOfRegeneration::~CDOTA_Item_RingOfRegeneration  (line 26, @0x0000000002df32d0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_RingOfRegeneration::~CDOTA_Item_RingOfRegeneration(
        CDOTA_Item_RingOfRegeneration *const this)
{
  this->_vptr_IHandleEntity = &off_474EBD0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_RingOfRegeneration::~CDOTA_Item_RingOfRegeneration  (line 26, @0x0000000002df32f0, libserver.so)  // inlines: ~CDOTA_Item_RingOfRegeneration
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_RingOfRegeneration::~CDOTA_Item_RingOfRegeneration(
        CDOTA_Item_RingOfRegeneration *const this)
{
  this->_vptr_IHandleEntity = &off_474EBD0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_RingOfRegeneration::Schema_DynamicBinding  (line 28, @0x0000000002deeeb0, libserver.so)
// globals: CDOTA_Item_RingOfRegeneration::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RingOfRegeneration::Schema_DynamicBinding(
        const CDOTA_Item_RingOfRegeneration *const this)
{
  return CDOTA_Item_RingOfRegeneration::s_pSchemaBinding;
}


// CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002deeec0, libserver.so)
// globals: CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002deeed0, libserver.so)  // inlines: Destruct<CDOTA_Item_RingOfRegeneration>
void __fastcall CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002deeef0, libserver.so)
void __fastcall CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002deef10, libserver.so)
bool __fastcall CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002deef20, libserver.so)
// globals: CDOTA_Item_RingOfRegeneration::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RingOfRegeneration::s_pSchemaBinding;
}


// CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002df0e00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002df21b0, libserver.so)  // inlines: CDOTA_Item_RingOfRegeneration, Construct<CDOTA_Item_RingOfRegeneration>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_474EBD0;
  }
  return p;
}


// CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df54e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df5500, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_RingOfRegeneration::GetEntityClassInternal  (line 28, @0x0000000002dfa9c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_ring_of_regen", "CDOTA_Item_RingOfRegeneration"
// globals: `guard variable for'CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass, CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass, __dso_handle, CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_RingOfRegeneration::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfRegenerationClassInfo, CDOTA_Item_RingOfRegeneration::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfRegenerationClassInfo
CEntityClass *__cdecl CDOTA_Item_RingOfRegeneration::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass);
    CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass._vptr_CEntityClass = off_474EB50;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass);
    __cxa_atexit(
      CDOTA_Item_RingOfRegeneration::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_RingOfRegenerationClass != 0 )
    return &CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass;
  if ( `guard variable for'CDOTA_Item_RingOfRegeneration::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfRegenerationClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RingOfRegeneration::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfRegenerationClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_RingOfRegeneration::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfRegenerationClassInfo,
      "CDOTA_Item_RingOfRegeneration",
      "item_ring_of_regen",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RingOfRegeneration::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfRegenerationClassInfo);
  }
  CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass.m_pClassInfo = &CDOTA_Item_RingOfRegeneration::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfRegenerationClassInfo;
  CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass.m_pBaseClassInfo = CDOTA_Item_RingOfRegeneration::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfRegenerationClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_RingOfRegenerationClass = &CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass;
  CDOTA_Item_RingOfRegeneration::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfRegenerationClassInfo.m_pClass = &CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass;
  CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_RingOfRegenerationClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_RingOfRegeneration::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfRegenerationClass;
}


// CDOTA_Item_RingOfRegeneration::GetIntrinsicModifierName  (line 30, @0x0000000002deef30, libserver.so)
// strings: "modifier_item_ring_of_regeneration"
const char *__fastcall CDOTA_Item_RingOfRegeneration::GetIntrinsicModifierName(
        CDOTA_Item_RingOfRegeneration *const this)
{
  return "modifier_item_ring_of_regeneration";
}


// CDOTA_Modifier_Item_RingOfRegeneration::~CDOTA_Modifier_Item_RingOfRegeneration  (line 38, @0x0000000002df1880, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_RingOfRegeneration::~CDOTA_Modifier_Item_RingOfRegeneration(
        CDOTA_Modifier_Item_RingOfRegeneration *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_RingOfRegeneration::~CDOTA_Modifier_Item_RingOfRegeneration  (line 38, @0x0000000002df18a0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_RingOfRegeneration
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_RingOfRegeneration::~CDOTA_Modifier_Item_RingOfRegeneration(
        CDOTA_Modifier_Item_RingOfRegeneration *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_RingOfRegeneration::DeclareFunctions  (line 53, @0x0000000002de3fb0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_RingOfRegeneration::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_RingOfRegeneration::DeclareFunctions(
        CDOTA_Modifier_Item_RingOfRegeneration *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_RingOfRegeneration::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
}


// CDOTA_Modifier_Item_RingOfRegeneration::GetModifierConstantHealthRegen  (line 58, @0x0000000002de3fd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RingOfRegeneration::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_RingOfRegeneration *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_RingOfRegeneration::OnCreated  (line 63, @0x0000000002deca70, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "bonus_health_regen"
void __fastcall CDOTA_Modifier_Item_RingOfRegeneration::OnCreated(
        CDOTA_Modifier_Item_RingOfRegeneration *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_health_regen, "bonus_health_regen");
}


