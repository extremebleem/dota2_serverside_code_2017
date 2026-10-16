// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_robe_of_magi.cpp:26
class CDOTA_Item_RobeOfMagi : public CDOTA_Item {
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
	CDOTA_Item_RobeOfMagi(CDOTA_Item_RobeOfMagi &);
	CDOTA_Item_RobeOfMagi(CDOTA_Item_RobeOfMagi &);
	CDOTA_Item_RobeOfMagi();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_RobeOfMagi();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_robe_of_magi.cpp:38
class CDOTA_Modifier_Item_RobeOfMagi : public CDOTA_Buff_Item {
public:

private:

	int bonus_intellect;  // +0xba8
	CDOTA_Modifier_Item_RobeOfMagi();
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_RobeOfMagi();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_RobeOfMagi::~CDOTA_Item_RobeOfMagi  (line 26, @0x0000000002df3550, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_RobeOfMagi::~CDOTA_Item_RobeOfMagi(CDOTA_Item_RobeOfMagi *const this)
{
  this->_vptr_IHandleEntity = &off_47558F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_RobeOfMagi::~CDOTA_Item_RobeOfMagi  (line 26, @0x0000000002df3570, libserver.so)  // inlines: ~CDOTA_Item_RobeOfMagi
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_RobeOfMagi::~CDOTA_Item_RobeOfMagi(CDOTA_Item_RobeOfMagi *const this)
{
  this->_vptr_IHandleEntity = &off_47558F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_RobeOfMagi::Schema_DynamicBinding  (line 28, @0x0000000002def2d0, libserver.so)
// globals: CDOTA_Item_RobeOfMagi::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RobeOfMagi::Schema_DynamicBinding(
        const CDOTA_Item_RobeOfMagi *const this)
{
  return CDOTA_Item_RobeOfMagi::s_pSchemaBinding;
}


// CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002def2e0, libserver.so)
// globals: CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002def2f0, libserver.so)  // inlines: Destruct<CDOTA_Item_RobeOfMagi>
void __fastcall CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002def310, libserver.so)
void __fastcall CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002def330, libserver.so)
bool __fastcall CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002def340, libserver.so)
// globals: CDOTA_Item_RobeOfMagi::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RobeOfMagi::s_pSchemaBinding;
}


// CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002df1000, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002df21e0, libserver.so)  // inlines: CDOTA_Item_RobeOfMagi, Construct<CDOTA_Item_RobeOfMagi>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47558F0;
  }
  return p;
}


// CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df5760, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df5780, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_RobeOfMagi::GetEntityClassInternal  (line 28, @0x0000000002dfbe50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_robe", "CDOTA_Item_RobeOfMagi"
// globals: `guard variable for'CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass, CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass, __dso_handle, CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_RobeOfMagi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RobeOfMagiClassInfo, CDOTA_Item_RobeOfMagi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RobeOfMagiClassInfo
CEntityClass *__cdecl CDOTA_Item_RobeOfMagi::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass);
    CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass._vptr_CEntityClass = off_4755870;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass);
    __cxa_atexit(
      CDOTA_Item_RobeOfMagi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_RobeOfMagiClass != 0 )
    return &CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass;
  if ( `guard variable for'CDOTA_Item_RobeOfMagi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RobeOfMagiClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RobeOfMagi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RobeOfMagiClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_RobeOfMagi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RobeOfMagiClassInfo,
      "CDOTA_Item_RobeOfMagi",
      "item_robe",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RobeOfMagi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RobeOfMagiClassInfo);
  }
  CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass.m_pClassInfo = &CDOTA_Item_RobeOfMagi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RobeOfMagiClassInfo;
  CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass.m_pBaseClassInfo = CDOTA_Item_RobeOfMagi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RobeOfMagiClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_RobeOfMagiClass = &CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass;
  CDOTA_Item_RobeOfMagi::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RobeOfMagiClassInfo.m_pClass = &CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass;
  CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_RobeOfMagiClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_RobeOfMagi::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RobeOfMagiClass;
}


// CDOTA_Item_RobeOfMagi::GetIntrinsicModifierName  (line 30, @0x0000000002def350, libserver.so)
// strings: "modifier_item_robe_of_magi"
const char *__fastcall CDOTA_Item_RobeOfMagi::GetIntrinsicModifierName(CDOTA_Item_RobeOfMagi *const this)
{
  return "modifier_item_robe_of_magi";
}


// CDOTA_Modifier_Item_RobeOfMagi::~CDOTA_Modifier_Item_RobeOfMagi  (line 38, @0x0000000002df1830, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_RobeOfMagi::~CDOTA_Modifier_Item_RobeOfMagi(
        CDOTA_Modifier_Item_RobeOfMagi *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_RobeOfMagi::~CDOTA_Modifier_Item_RobeOfMagi  (line 38, @0x0000000002df1850, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_RobeOfMagi
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_RobeOfMagi::~CDOTA_Modifier_Item_RobeOfMagi(
        CDOTA_Modifier_Item_RobeOfMagi *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_RobeOfMagi::DeclareFunctions  (line 54, @0x0000000002de3ff0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_RobeOfMagi::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_RobeOfMagi::DeclareFunctions(CDOTA_Modifier_Item_RobeOfMagi *const this)
{
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_RobeOfMagi::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_RobeOfMagi::GetModifierBonusStats_Intellect  (line 59, @0x0000000002de4010, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RobeOfMagi::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_RobeOfMagi *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_RobeOfMagi::OnCreated  (line 64, @0x0000000002decaa0, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_RobeOfMagi::OnCreated(CDOTA_Modifier_Item_RobeOfMagi *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_intellect, "bonus_intellect");
}


