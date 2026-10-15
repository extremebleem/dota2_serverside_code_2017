// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_chainmail.cpp:26
class CDOTA_Item_ChainMail : public CDOTA_Item {
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
	CDOTA_Item_ChainMail(CDOTA_Item_ChainMail &);
	CDOTA_Item_ChainMail(CDOTA_Item_ChainMail &);
	CDOTA_Item_ChainMail();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_ChainMail();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_chainmail.cpp:38
class CDOTA_Modifier_Item_ChainMail : public CDOTA_Buff_Item {
public:

private:

	int bonus_armor;  // +0xba8
	CDOTA_Modifier_Item_ChainMail();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_ChainMail();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_ChainMail::~CDOTA_Item_ChainMail  (line 26, @0x0000000002d85eb0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_ChainMail::~CDOTA_Item_ChainMail(CDOTA_Item_ChainMail *const this)
{
  this->_vptr_IHandleEntity = &off_46B8970;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_ChainMail::~CDOTA_Item_ChainMail  (line 26, @0x0000000002d85ed0, libserver.so)  // inlines: ~CDOTA_Item_ChainMail
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_ChainMail::~CDOTA_Item_ChainMail(CDOTA_Item_ChainMail *const this)
{
  this->_vptr_IHandleEntity = &off_46B8970;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_ChainMail::Schema_DynamicBinding  (line 28, @0x0000000002d80df0, libserver.so)
// globals: CDOTA_Item_ChainMail::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_ChainMail::Schema_DynamicBinding(
        const CDOTA_Item_ChainMail *const this)
{
  return CDOTA_Item_ChainMail::s_pSchemaBinding;
}


// CDOTA_Item_ChainMail::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d80e00, libserver.so)
// globals: CDOTA_Item_ChainMail::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_ChainMail::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_ChainMail::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_ChainMail::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_ChainMail::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d80e10, libserver.so)  // inlines: Destruct<CDOTA_Item_ChainMail>
void __fastcall CDOTA_Item_ChainMail::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_ChainMail::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_ChainMail::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d80e30, libserver.so)
void __fastcall CDOTA_Item_ChainMail::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_ChainMail::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_ChainMail::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d80e50, libserver.so)
bool __fastcall CDOTA_Item_ChainMail::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_ChainMail::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_ChainMail::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d80e60, libserver.so)
// globals: CDOTA_Item_ChainMail::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_ChainMail::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_ChainMail::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_ChainMail::s_pSchemaBinding;
}


// CDOTA_Item_ChainMail::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d83630, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_ChainMail::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_ChainMail::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_ChainMail::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d84bf0, libserver.so)  // inlines: CDOTA_Item_ChainMail, Construct<CDOTA_Item_ChainMail>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_ChainMail::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_ChainMail::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46B8970;
  }
  return p;
}


// CDOTA_Item_ChainMail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d88520, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_ChainMail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_ChainMail::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_ChainMail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d88540, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_ChainMail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_ChainMail::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_ChainMail::GetEntityClassInternal  (line 28, @0x0000000002d8fb80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_ChainMail"
// globals: `guard variable for'CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass, CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass, __dso_handle, CDOTA_Item_ChainMail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_ChainMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ChainMailClassInfo, CDOTA_Item_ChainMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ChainMailClassInfo
CEntityClass *__cdecl CDOTA_Item_ChainMail::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass);
    CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass._vptr_CEntityClass = off_46B88F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass);
    __cxa_atexit(
      CDOTA_Item_ChainMail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_ChainMailClass != 0 )
    return &CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass;
  if ( `guard variable for'CDOTA_Item_ChainMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ChainMailClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_ChainMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ChainMailClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_ChainMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ChainMailClassInfo,
      "CDOTA_Item_ChainMail",
      "item_chainmail",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_ChainMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ChainMailClassInfo);
  }
  CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass.m_pClassInfo = &CDOTA_Item_ChainMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ChainMailClassInfo;
  CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass.m_pBaseClassInfo = CDOTA_Item_ChainMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ChainMailClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_ChainMailClass = &CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass;
  CDOTA_Item_ChainMail::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ChainMailClassInfo.m_pClass = &CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass;
  CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_ChainMailClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_ChainMail::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ChainMailClass;
}


// CDOTA_Item_ChainMail::GetIntrinsicModifierName  (line 30, @0x0000000002d80e70, libserver.so)
// strings: "modifier_item_chainmail"
const char *__fastcall CDOTA_Item_ChainMail::GetIntrinsicModifierName(CDOTA_Item_ChainMail *const this)
{
  return "modifier_item_chainmail";
}


// CDOTA_Modifier_Item_ChainMail::~CDOTA_Modifier_Item_ChainMail  (line 38, @0x0000000002d84190, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_ChainMail::~CDOTA_Modifier_Item_ChainMail(
        CDOTA_Modifier_Item_ChainMail *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_ChainMail::~CDOTA_Modifier_Item_ChainMail  (line 38, @0x0000000002d841b0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_ChainMail
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_ChainMail::~CDOTA_Modifier_Item_ChainMail(
        CDOTA_Modifier_Item_ChainMail *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_ChainMail::DeclareFunctions  (line 53, @0x0000000002d6ef70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_ChainMail::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_ChainMail::DeclareFunctions(CDOTA_Modifier_Item_ChainMail *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_ChainMail::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Item_ChainMail::GetModifierPhysicalArmorBonus  (line 58, @0x0000000002d6ef90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_ChainMail::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_ChainMail *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_ChainMail::OnCreated  (line 63, @0x0000000002d7b7d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_ChainMail::OnCreated(CDOTA_Modifier_Item_ChainMail *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_armor", -1, 0);
  else
    this->bonus_armor = 0;
}


