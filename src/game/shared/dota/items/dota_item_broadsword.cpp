// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_broadsword.cpp:26
class CDOTA_Item_Broadsword : public CDOTA_Item {
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
	CDOTA_Item_Broadsword(CDOTA_Item_Broadsword &);
	CDOTA_Item_Broadsword(CDOTA_Item_Broadsword &);
	CDOTA_Item_Broadsword();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Broadsword();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_broadsword.cpp:38
class CDOTA_Modifier_Item_Broadsword : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	CDOTA_Modifier_Item_Broadsword();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Broadsword();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Broadsword::~CDOTA_Item_Broadsword  (line 26, @0x0000000002d85d20, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Broadsword::~CDOTA_Item_Broadsword(CDOTA_Item_Broadsword *const this)
{
  this->_vptr_IHandleEntity = &off_46B3790;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Broadsword::~CDOTA_Item_Broadsword  (line 26, @0x0000000002d85d40, libserver.so)  // inlines: ~CDOTA_Item_Broadsword
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Broadsword::~CDOTA_Item_Broadsword(CDOTA_Item_Broadsword *const this)
{
  this->_vptr_IHandleEntity = &off_46B3790;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Broadsword::Schema_DynamicBinding  (line 28, @0x0000000002d80b20, libserver.so)
// globals: CDOTA_Item_Broadsword::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Broadsword::Schema_DynamicBinding(
        const CDOTA_Item_Broadsword *const this)
{
  return CDOTA_Item_Broadsword::s_pSchemaBinding;
}


// CDOTA_Item_Broadsword::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d80b30, libserver.so)
// globals: CDOTA_Item_Broadsword::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Broadsword::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Broadsword::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Broadsword::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Broadsword::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d80b40, libserver.so)  // inlines: Destruct<CDOTA_Item_Broadsword>
void __fastcall CDOTA_Item_Broadsword::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Broadsword::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Broadsword::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d80b60, libserver.so)
void __fastcall CDOTA_Item_Broadsword::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Broadsword::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Broadsword::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d80b80, libserver.so)
bool __fastcall CDOTA_Item_Broadsword::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Broadsword::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Broadsword::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d80b90, libserver.so)
// globals: CDOTA_Item_Broadsword::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Broadsword::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Broadsword::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Broadsword::s_pSchemaBinding;
}


// CDOTA_Item_Broadsword::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d834f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Broadsword::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Broadsword::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Broadsword::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d84b00, libserver.so)  // inlines: CDOTA_Item_Broadsword, Construct<CDOTA_Item_Broadsword>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Broadsword::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Broadsword::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46B3790;
  }
  return p;
}


// CDOTA_Item_Broadsword::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d88390, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Broadsword::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Broadsword::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Broadsword::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d883b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Broadsword::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Broadsword::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Broadsword::GetEntityClassInternal  (line 28, @0x0000000002d8f2c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_Broadsword"
// globals: `guard variable for'CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass, CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass, __dso_handle, CDOTA_Item_Broadsword::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Broadsword::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BroadswordClassInfo, CDOTA_Item_Broadsword::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BroadswordClassInfo
CEntityClass *__cdecl CDOTA_Item_Broadsword::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass);
    CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass._vptr_CEntityClass = off_46B3710;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass);
    __cxa_atexit(
      CDOTA_Item_Broadsword::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BroadswordClass != 0 )
    return &CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass;
  if ( `guard variable for'CDOTA_Item_Broadsword::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BroadswordClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Broadsword::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BroadswordClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Broadsword::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BroadswordClassInfo,
      "CDOTA_Item_Broadsword",
      "item_broadsword",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Broadsword::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BroadswordClassInfo);
  }
  CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass.m_pClassInfo = &CDOTA_Item_Broadsword::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BroadswordClassInfo;
  CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass.m_pBaseClassInfo = CDOTA_Item_Broadsword::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BroadswordClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BroadswordClass = &CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass;
  CDOTA_Item_Broadsword::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BroadswordClassInfo.m_pClass = &CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass;
  CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BroadswordClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Broadsword::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BroadswordClass;
}


// CDOTA_Item_Broadsword::GetIntrinsicModifierName  (line 30, @0x0000000002d80ba0, libserver.so)
// strings: "modifier_item_broadsword"
const char *__fastcall CDOTA_Item_Broadsword::GetIntrinsicModifierName(CDOTA_Item_Broadsword *const this)
{
  return "modifier_item_broadsword";
}


// CDOTA_Modifier_Item_Broadsword::~CDOTA_Modifier_Item_Broadsword  (line 38, @0x0000000002d84280, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Broadsword::~CDOTA_Modifier_Item_Broadsword(
        CDOTA_Modifier_Item_Broadsword *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Broadsword::~CDOTA_Modifier_Item_Broadsword  (line 38, @0x0000000002d842a0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Broadsword
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Broadsword::~CDOTA_Modifier_Item_Broadsword(
        CDOTA_Modifier_Item_Broadsword *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Broadsword::DeclareFunctions  (line 53, @0x0000000002d6ece0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Broadsword::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Broadsword::DeclareFunctions(CDOTA_Modifier_Item_Broadsword *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Broadsword::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_Broadsword::GetModifierPreAttack_BonusDamage  (line 58, @0x0000000002d6ed00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Broadsword::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Broadsword *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Broadsword::OnCreated  (line 63, @0x0000000002d7b5f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_Broadsword::OnCreated(CDOTA_Modifier_Item_Broadsword *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  else
    this->bonus_damage = 0;
}


