// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_platemail.cpp:26
class CDOTA_Item_PlateMail : public CDOTA_Item {
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
	CDOTA_Item_PlateMail(CDOTA_Item_PlateMail &);
	CDOTA_Item_PlateMail(CDOTA_Item_PlateMail &);
	CDOTA_Item_PlateMail();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_PlateMail();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_platemail.cpp:38
class CDOTA_Modifier_Item_PlateMail : public CDOTA_Buff_Item {
public:

private:

	int bonus_armor;  // +0xba8
	CDOTA_Modifier_Item_PlateMail();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_PlateMail();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_PlateMail::~CDOTA_Item_PlateMail  (line 26, @0x0000000002dd8320, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_PlateMail::~CDOTA_Item_PlateMail(CDOTA_Item_PlateMail *const this)
{
  this->_vptr_IHandleEntity = &off_473C9B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_PlateMail::~CDOTA_Item_PlateMail  (line 26, @0x0000000002dd8340, libserver.so)  // inlines: ~CDOTA_Item_PlateMail
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_PlateMail::~CDOTA_Item_PlateMail(CDOTA_Item_PlateMail *const this)
{
  this->_vptr_IHandleEntity = &off_473C9B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_PlateMail::Schema_DynamicBinding  (line 28, @0x0000000002dd4a30, libserver.so)
// globals: CDOTA_Item_PlateMail::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_PlateMail::Schema_DynamicBinding(
        const CDOTA_Item_PlateMail *const this)
{
  return CDOTA_Item_PlateMail::s_pSchemaBinding;
}


// CDOTA_Item_PlateMail::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002dd4a40, libserver.so)
// globals: CDOTA_Item_PlateMail::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_PlateMail::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_PlateMail::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_PlateMail::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_PlateMail::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002dd4a50, libserver.so)  // inlines: Destruct<CDOTA_Item_PlateMail>
void __fastcall CDOTA_Item_PlateMail::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_PlateMail::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_PlateMail::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002dd4a70, libserver.so)
void __fastcall CDOTA_Item_PlateMail::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_PlateMail::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_PlateMail::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002dd4a90, libserver.so)
bool __fastcall CDOTA_Item_PlateMail::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_PlateMail::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_PlateMail::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002dd4aa0, libserver.so)
// globals: CDOTA_Item_PlateMail::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_PlateMail::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_PlateMail::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_PlateMail::s_pSchemaBinding;
}


// CDOTA_Item_PlateMail::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dd61b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_PlateMail::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_PlateMail::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_PlateMail::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dd7220, libserver.so)  // inlines: CDOTA_Item_PlateMail, Construct<CDOTA_Item_PlateMail>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_PlateMail::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_PlateMail::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_473C9B0;
  }
  return p;
}


// CDOTA_Item_PlateMail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dda250, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_PlateMail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_PlateMail::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_PlateMail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dda270, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_PlateMail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_PlateMail::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_PlateMail::GetEntityClassInternal  (line 28, @0x0000000002de2d80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_platemail", "CDOTA_Item_PlateMail"
// globals: `guard variable for'CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass, CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass, __dso_handle, CDOTA_Item_PlateMail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_PlateMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlateMailClassInfo, CDOTA_Item_PlateMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlateMailClassInfo
CEntityClass *__cdecl CDOTA_Item_PlateMail::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass);
    CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass._vptr_CEntityClass = off_473C930;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass);
    __cxa_atexit(
      CDOTA_Item_PlateMail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_PlateMailClass != 0 )
    return &CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass;
  if ( `guard variable for'CDOTA_Item_PlateMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlateMailClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_PlateMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlateMailClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_PlateMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlateMailClassInfo,
      "CDOTA_Item_PlateMail",
      "item_platemail",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_PlateMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlateMailClassInfo);
  }
  CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass.m_pClassInfo = &CDOTA_Item_PlateMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlateMailClassInfo;
  CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass.m_pBaseClassInfo = CDOTA_Item_PlateMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlateMailClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_PlateMailClass = &CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass;
  CDOTA_Item_PlateMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PlateMailClassInfo.m_pClass = &CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass;
  CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_PlateMailClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_PlateMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PlateMailClass;
}


// CDOTA_Item_PlateMail::GetIntrinsicModifierName  (line 30, @0x0000000002dd4ab0, libserver.so)
// strings: "modifier_item_plate_mail"
const char *__fastcall CDOTA_Item_PlateMail::GetIntrinsicModifierName(CDOTA_Item_PlateMail *const this)
{
  return "modifier_item_plate_mail";
}


// CDOTA_Modifier_Item_PlateMail::~CDOTA_Modifier_Item_PlateMail  (line 38, @0x0000000002dd63e0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_PlateMail::~CDOTA_Modifier_Item_PlateMail(
        CDOTA_Modifier_Item_PlateMail *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_PlateMail::~CDOTA_Modifier_Item_PlateMail  (line 38, @0x0000000002dd6400, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_PlateMail
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_PlateMail::~CDOTA_Modifier_Item_PlateMail(
        CDOTA_Modifier_Item_PlateMail *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_PlateMail::DeclareFunctions  (line 53, @0x0000000002dc7790, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_PlateMail::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_PlateMail::DeclareFunctions(CDOTA_Modifier_Item_PlateMail *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_PlateMail::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Item_PlateMail::GetModifierPhysicalArmorBonus  (line 58, @0x0000000002dc77b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PlateMail::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_PlateMail *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_PlateMail::OnCreated  (line 63, @0x0000000002dd0a70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_PlateMail::OnCreated(CDOTA_Modifier_Item_PlateMail *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_armor", -1, 0);
  else
    this->bonus_armor = 0;
}


