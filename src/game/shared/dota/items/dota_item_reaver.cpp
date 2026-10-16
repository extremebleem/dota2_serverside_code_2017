// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_reaver.cpp:26
class CDOTA_Item_Reaver : public CDOTA_Item {
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
	CDOTA_Item_Reaver(CDOTA_Item_Reaver &);
	CDOTA_Item_Reaver(CDOTA_Item_Reaver &);
	CDOTA_Item_Reaver();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Reaver();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_reaver.cpp:38
class CDOTA_Modifier_Item_Reaver : public CDOTA_Buff_Item {
public:

private:

	int bonus_strength;  // +0xba8
	CDOTA_Modifier_Item_Reaver();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Reaver();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Reaver::~CDOTA_Item_Reaver  (line 26, @0x0000000002df3000, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Reaver::~CDOTA_Item_Reaver(CDOTA_Item_Reaver *const this)
{
  this->_vptr_IHandleEntity = &off_4745550;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Reaver::~CDOTA_Item_Reaver  (line 26, @0x0000000002df3020, libserver.so)  // inlines: ~CDOTA_Item_Reaver
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Reaver::~CDOTA_Item_Reaver(CDOTA_Item_Reaver *const this)
{
  this->_vptr_IHandleEntity = &off_4745550;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Reaver::Schema_DynamicBinding  (line 28, @0x0000000002dee8a0, libserver.so)
// globals: CDOTA_Item_Reaver::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Reaver::Schema_DynamicBinding(const CDOTA_Item_Reaver *const this)
{
  return CDOTA_Item_Reaver::s_pSchemaBinding;
}


// CDOTA_Item_Reaver::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002dee8b0, libserver.so)
// globals: CDOTA_Item_Reaver::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Reaver::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Reaver::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Reaver::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Reaver::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002dee8c0, libserver.so)  // inlines: Destruct<CDOTA_Item_Reaver>
void __fastcall CDOTA_Item_Reaver::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Reaver::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Reaver::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002dee8e0, libserver.so)
void __fastcall CDOTA_Item_Reaver::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Reaver::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Reaver::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002dee900, libserver.so)
bool __fastcall CDOTA_Item_Reaver::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Reaver::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Reaver::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002dee910, libserver.so)
// globals: CDOTA_Item_Reaver::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Reaver::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Reaver::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Reaver::s_pSchemaBinding;
}


// CDOTA_Item_Reaver::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002df0bc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Reaver::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Reaver::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Reaver::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002df2000, libserver.so)  // inlines: CDOTA_Item_Reaver, Construct<CDOTA_Item_Reaver>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Reaver::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Reaver::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4745550;
  }
  return p;
}


// CDOTA_Item_Reaver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df5210, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Reaver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Reaver::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Reaver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df5230, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Reaver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Reaver::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Reaver::GetEntityClassInternal  (line 28, @0x0000000002df93d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "CDOTA_Item_Reaver"
// globals: `guard variable for'CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass, CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass, __dso_handle, CDOTA_Item_Reaver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Reaver::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ReaverClassInfo, CDOTA_Item_Reaver::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ReaverClassInfo
CEntityClass *__cdecl CDOTA_Item_Reaver::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass);
    CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass._vptr_CEntityClass = off_47454D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass);
    __cxa_atexit(
      CDOTA_Item_Reaver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_ReaverClass != 0 )
    return &CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass;
  if ( `guard variable for'CDOTA_Item_Reaver::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ReaverClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Reaver::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ReaverClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Reaver::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ReaverClassInfo,
      "CDOTA_Item_Reaver",
      "item_reaver",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Reaver::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ReaverClassInfo);
  }
  CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass.m_pClassInfo = &CDOTA_Item_Reaver::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ReaverClassInfo;
  CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass.m_pBaseClassInfo = CDOTA_Item_Reaver::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ReaverClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_ReaverClass = &CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass;
  CDOTA_Item_Reaver::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ReaverClassInfo.m_pClass = &CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass;
  CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_ReaverClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Reaver::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ReaverClass;
}


// CDOTA_Item_Reaver::GetIntrinsicModifierName  (line 30, @0x0000000002dee920, libserver.so)
// strings: "modifier_item_reaver"
const char *__fastcall CDOTA_Item_Reaver::GetIntrinsicModifierName(CDOTA_Item_Reaver *const this)
{
  return "modifier_item_reaver";
}


// CDOTA_Modifier_Item_Reaver::~CDOTA_Modifier_Item_Reaver  (line 38, @0x0000000002df1b00, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Reaver::~CDOTA_Modifier_Item_Reaver(CDOTA_Modifier_Item_Reaver *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Reaver::~CDOTA_Modifier_Item_Reaver  (line 38, @0x0000000002df1b20, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Reaver
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Reaver::~CDOTA_Modifier_Item_Reaver(CDOTA_Modifier_Item_Reaver *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Reaver::OnCreated  (line 53, @0x0000000002dec820, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
void __fastcall CDOTA_Modifier_Item_Reaver::OnCreated(CDOTA_Modifier_Item_Reaver *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_strength, "bonus_strength");
}


// CDOTA_Modifier_Item_Reaver::DeclareFunctions  (line 60, @0x0000000002de3b60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Reaver::GetModifierBonusStats_Strength(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Reaver::DeclareFunctions(CDOTA_Modifier_Item_Reaver *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Reaver::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
}


// CDOTA_Modifier_Item_Reaver::GetModifierBonusStats_Strength  (line 65, @0x0000000002de3b80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Reaver::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Reaver *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


