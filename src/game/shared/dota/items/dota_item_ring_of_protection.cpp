// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_ring_of_protection.cpp:26
class CDOTA_Item_RingOfProtection : public CDOTA_Item {
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
	CDOTA_Item_RingOfProtection(CDOTA_Item_RingOfProtection &);
	CDOTA_Item_RingOfProtection(CDOTA_Item_RingOfProtection &);
	CDOTA_Item_RingOfProtection();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_RingOfProtection();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ring_of_protection.cpp:38
class CDOTA_Modifier_Item_RingOfProtection : public CDOTA_Buff_Item {
public:

private:

	float bonus_armor;  // +0xba8
	CDOTA_Modifier_Item_RingOfProtection();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_RingOfProtection();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_RingOfProtection::~CDOTA_Item_RingOfProtection  (line 26, @0x0000000002df3280, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_RingOfProtection::~CDOTA_Item_RingOfProtection(CDOTA_Item_RingOfProtection *const this)
{
  this->_vptr_IHandleEntity = &off_474DB70;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_RingOfProtection::~CDOTA_Item_RingOfProtection  (line 26, @0x0000000002df32a0, libserver.so)  // inlines: ~CDOTA_Item_RingOfProtection
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_RingOfProtection::~CDOTA_Item_RingOfProtection(CDOTA_Item_RingOfProtection *const this)
{
  this->_vptr_IHandleEntity = &off_474DB70;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_RingOfProtection::Schema_DynamicBinding  (line 28, @0x0000000002deee20, libserver.so)
// globals: CDOTA_Item_RingOfProtection::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RingOfProtection::Schema_DynamicBinding(
        const CDOTA_Item_RingOfProtection *const this)
{
  return CDOTA_Item_RingOfProtection::s_pSchemaBinding;
}


// CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002deee30, libserver.so)
// globals: CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002deee40, libserver.so)  // inlines: Destruct<CDOTA_Item_RingOfProtection>
void __fastcall CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002deee60, libserver.so)
void __fastcall CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002deee80, libserver.so)
bool __fastcall CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002deee90, libserver.so)
// globals: CDOTA_Item_RingOfProtection::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RingOfProtection::s_pSchemaBinding;
}


// CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002df0dc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002df2180, libserver.so)  // inlines: CDOTA_Item_RingOfProtection, Construct<CDOTA_Item_RingOfProtection>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_474DB70;
  }
  return p;
}


// CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df5490, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df54b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_RingOfProtection::GetEntityClassInternal  (line 28, @0x0000000002dfa750, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_ring_of_protection", "CDOTA_Item_RingOfProtection"
// globals: `guard variable for'CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass, CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass, __dso_handle, CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_RingOfProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfProtectionClassInfo, CDOTA_Item_RingOfProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfProtectionClassInfo
CEntityClass *__cdecl CDOTA_Item_RingOfProtection::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass);
    CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass._vptr_CEntityClass = off_474DAF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass);
    __cxa_atexit(
      CDOTA_Item_RingOfProtection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_RingOfProtectionClass != 0 )
    return &CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass;
  if ( `guard variable for'CDOTA_Item_RingOfProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfProtectionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RingOfProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfProtectionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_RingOfProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfProtectionClassInfo,
      "CDOTA_Item_RingOfProtection",
      "item_ring_of_protection",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RingOfProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfProtectionClassInfo);
  }
  CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass.m_pClassInfo = &CDOTA_Item_RingOfProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfProtectionClassInfo;
  CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass.m_pBaseClassInfo = CDOTA_Item_RingOfProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfProtectionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_RingOfProtectionClass = &CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass;
  CDOTA_Item_RingOfProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfProtectionClassInfo.m_pClass = &CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass;
  CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_RingOfProtectionClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_RingOfProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfProtectionClass;
}


// CDOTA_Item_RingOfProtection::GetIntrinsicModifierName  (line 30, @0x0000000002deeea0, libserver.so)
// strings: "modifier_item_ring_of_protection"
const char *__fastcall CDOTA_Item_RingOfProtection::GetIntrinsicModifierName(CDOTA_Item_RingOfProtection *const this)
{
  return "modifier_item_ring_of_protection";
}


// CDOTA_Modifier_Item_RingOfProtection::~CDOTA_Modifier_Item_RingOfProtection  (line 38, @0x0000000002df18d0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_RingOfProtection::~CDOTA_Modifier_Item_RingOfProtection(
        CDOTA_Modifier_Item_RingOfProtection *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_RingOfProtection::~CDOTA_Modifier_Item_RingOfProtection  (line 38, @0x0000000002df18f0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_RingOfProtection
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_RingOfProtection::~CDOTA_Modifier_Item_RingOfProtection(
        CDOTA_Modifier_Item_RingOfProtection *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_RingOfProtection::DeclareFunctions  (line 53, @0x0000000002de3f70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_RingOfProtection::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_RingOfProtection::DeclareFunctions(
        CDOTA_Modifier_Item_RingOfProtection *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_RingOfProtection::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Item_RingOfProtection::GetModifierPhysicalArmorBonus  (line 58, @0x0000000002de3f90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RingOfProtection::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_RingOfProtection *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->bonus_armor) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_RingOfProtection::OnCreated  (line 63, @0x0000000002deda20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Item_RingOfProtection::OnCreated(
        CDOTA_Modifier_Item_RingOfProtection *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "bonus_armor", -1, 0);
  else
    this->bonus_armor = 0.0;
}


