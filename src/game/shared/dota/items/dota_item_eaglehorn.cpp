// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_eaglehorn.cpp:27
class CDOTA_Item_Eaglehorn : public CDOTA_Item {
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
	CDOTA_Item_Eaglehorn(CDOTA_Item_Eaglehorn &);
	CDOTA_Item_Eaglehorn(CDOTA_Item_Eaglehorn &);
	CDOTA_Item_Eaglehorn();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Eaglehorn();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_eaglehorn.cpp:39
class CDOTA_Modifier_Item_EagleHorn : public CDOTA_Buff_Item {
public:

private:

	int bonus_agility;  // +0xba8
	CDOTA_Modifier_Item_EagleHorn();
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_EagleHorn();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Eaglehorn::~CDOTA_Item_Eaglehorn  (line 27, @0x0000000002da19f0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Eaglehorn::~CDOTA_Item_Eaglehorn(CDOTA_Item_Eaglehorn *const this)
{
  this->_vptr_IHandleEntity = &off_46D9A30;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Eaglehorn::~CDOTA_Item_Eaglehorn  (line 27, @0x0000000002da1a10, libserver.so)  // inlines: ~CDOTA_Item_Eaglehorn
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Eaglehorn::~CDOTA_Item_Eaglehorn(CDOTA_Item_Eaglehorn *const this)
{
  this->_vptr_IHandleEntity = &off_46D9A30;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Eaglehorn::Schema_DynamicBinding  (line 29, @0x0000000002d9e8f0, libserver.so)
// globals: CDOTA_Item_Eaglehorn::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Eaglehorn::Schema_DynamicBinding(
        const CDOTA_Item_Eaglehorn *const this)
{
  return CDOTA_Item_Eaglehorn::s_pSchemaBinding;
}


// CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002d9e900, libserver.so)
// globals: CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002d9e910, libserver.so)  // inlines: Destruct<CDOTA_Item_Eaglehorn>
void __fastcall CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002d9e930, libserver.so)
void __fastcall CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002d9e950, libserver.so)
bool __fastcall CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002d9e960, libserver.so)
// globals: CDOTA_Item_Eaglehorn::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Eaglehorn::s_pSchemaBinding;
}


// CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002da03f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002da1460, libserver.so)  // inlines: CDOTA_Item_Eaglehorn, Construct<CDOTA_Item_Eaglehorn>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46D9A30;
  }
  return p;
}


// CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002da3950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002da3970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Eaglehorn::GetEntityClassInternal  (line 29, @0x0000000002da6690, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_eagle", "CDOTA_Item_Eaglehorn"
// globals: `guard variable for'CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass, CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass, __dso_handle, CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Eaglehorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EaglehornClassInfo, CDOTA_Item_Eaglehorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EaglehornClassInfo
CEntityClass *__cdecl CDOTA_Item_Eaglehorn::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass);
    CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass._vptr_CEntityClass = off_46D99B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass);
    __cxa_atexit(
      CDOTA_Item_Eaglehorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_EaglehornClass != 0 )
    return &CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass;
  if ( `guard variable for'CDOTA_Item_Eaglehorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EaglehornClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Eaglehorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EaglehornClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Eaglehorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EaglehornClassInfo,
      "CDOTA_Item_Eaglehorn",
      "item_eagle",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Eaglehorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EaglehornClassInfo);
  }
  CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass.m_pClassInfo = &CDOTA_Item_Eaglehorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EaglehornClassInfo;
  CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass.m_pBaseClassInfo = CDOTA_Item_Eaglehorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EaglehornClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_EaglehornClass = &CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass;
  CDOTA_Item_Eaglehorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EaglehornClassInfo.m_pClass = &CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass;
  CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_EaglehornClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Eaglehorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EaglehornClass;
}


// CDOTA_Item_Eaglehorn::GetIntrinsicModifierName  (line 31, @0x0000000002d9e970, libserver.so)
// strings: "modifier_item_eaglehorn"
const char *__fastcall CDOTA_Item_Eaglehorn::GetIntrinsicModifierName(CDOTA_Item_Eaglehorn *const this)
{
  return "modifier_item_eaglehorn";
}


// CDOTA_Modifier_Item_EagleHorn::~CDOTA_Modifier_Item_EagleHorn  (line 39, @0x0000000002da1050, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_EagleHorn::~CDOTA_Modifier_Item_EagleHorn(
        CDOTA_Modifier_Item_EagleHorn *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_EagleHorn::~CDOTA_Modifier_Item_EagleHorn  (line 39, @0x0000000002da1070, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_EagleHorn
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_EagleHorn::~CDOTA_Modifier_Item_EagleHorn(
        CDOTA_Modifier_Item_EagleHorn *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_EagleHorn::DeclareFunctions  (line 54, @0x0000000002d93ac0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_EagleHorn::GetModifierBonusStats_Agility(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_EagleHorn::DeclareFunctions(CDOTA_Modifier_Item_EagleHorn *const this)
{
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_EagleHorn::GetModifierBonusStats_Agility;
  this->m_Functions[65].__delta = 0;
}


// CDOTA_Modifier_Item_EagleHorn::GetModifierBonusStats_Agility  (line 59, @0x0000000002d93ae0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_EagleHorn::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_EagleHorn *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_EagleHorn::OnCreated  (line 64, @0x0000000002d9c150, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_agility"
void __fastcall CDOTA_Modifier_Item_EagleHorn::OnCreated(CDOTA_Modifier_Item_EagleHorn *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_agility", -1, 0);
  else
    this->bonus_agility = 0;
}


