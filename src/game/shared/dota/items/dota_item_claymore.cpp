// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_claymore.cpp:26
class CDOTA_Item_Claymore : public CDOTA_Item {
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
	CDOTA_Item_Claymore(CDOTA_Item_Claymore &);
	CDOTA_Item_Claymore(CDOTA_Item_Claymore &);
	CDOTA_Item_Claymore();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Claymore();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_claymore.cpp:38
class CDOTA_Modifier_Item_Claymore : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	CDOTA_Modifier_Item_Claymore();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Claymore();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Claymore::~CDOTA_Item_Claymore  (line 26, @0x0000000002d85ff0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Claymore::~CDOTA_Item_Claymore(CDOTA_Item_Claymore *const this)
{
  this->_vptr_IHandleEntity = &off_46BC7D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Claymore::~CDOTA_Item_Claymore  (line 26, @0x0000000002d86010, libserver.so)  // inlines: ~CDOTA_Item_Claymore
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Claymore::~CDOTA_Item_Claymore(CDOTA_Item_Claymore *const this)
{
  this->_vptr_IHandleEntity = &off_46BC7D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Claymore::Schema_DynamicBinding  (line 28, @0x0000000002d81030, libserver.so)
// globals: CDOTA_Item_Claymore::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Claymore::Schema_DynamicBinding(
        const CDOTA_Item_Claymore *const this)
{
  return CDOTA_Item_Claymore::s_pSchemaBinding;
}


// CDOTA_Item_Claymore::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d81040, libserver.so)
// globals: CDOTA_Item_Claymore::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Claymore::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Claymore::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Claymore::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Claymore::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d81050, libserver.so)  // inlines: Destruct<CDOTA_Item_Claymore>
void __fastcall CDOTA_Item_Claymore::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Claymore::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Claymore::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d81070, libserver.so)
void __fastcall CDOTA_Item_Claymore::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Claymore::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Claymore::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d81090, libserver.so)
bool __fastcall CDOTA_Item_Claymore::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Claymore::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Claymore::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d810a0, libserver.so)
// globals: CDOTA_Item_Claymore::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Claymore::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Claymore::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Claymore::s_pSchemaBinding;
}


// CDOTA_Item_Claymore::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d83730, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Claymore::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Claymore::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Claymore::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d84cb0, libserver.so)  // inlines: CDOTA_Item_Claymore, Construct<CDOTA_Item_Claymore>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Claymore::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Claymore::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46BC7D0;
  }
  return p;
}


// CDOTA_Item_Claymore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d88660, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Claymore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Claymore::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Claymore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d88680, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Claymore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Claymore::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Claymore::GetEntityClassInternal  (line 28, @0x0000000002d90280, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_Claymore"
// globals: `guard variable for'CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass, CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass, __dso_handle, CDOTA_Item_Claymore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Claymore::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClaymoreClassInfo, CDOTA_Item_Claymore::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClaymoreClassInfo
CEntityClass *__cdecl CDOTA_Item_Claymore::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass);
    CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass._vptr_CEntityClass = off_46BC750;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass);
    __cxa_atexit(
      CDOTA_Item_Claymore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_ClaymoreClass != 0 )
    return &CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass;
  if ( `guard variable for'CDOTA_Item_Claymore::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClaymoreClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Claymore::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClaymoreClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Claymore::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClaymoreClassInfo,
      "CDOTA_Item_Claymore",
      "item_claymore",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Claymore::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClaymoreClassInfo);
  }
  CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass.m_pClassInfo = &CDOTA_Item_Claymore::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClaymoreClassInfo;
  CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass.m_pBaseClassInfo = CDOTA_Item_Claymore::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClaymoreClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_ClaymoreClass = &CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass;
  CDOTA_Item_Claymore::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ClaymoreClassInfo.m_pClass = &CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass;
  CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_ClaymoreClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Claymore::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ClaymoreClass;
}


// CDOTA_Item_Claymore::GetIntrinsicModifierName  (line 30, @0x0000000002d810b0, libserver.so)
// strings: "modifier_item_claymore"
const char *__fastcall CDOTA_Item_Claymore::GetIntrinsicModifierName(CDOTA_Item_Claymore *const this)
{
  return "modifier_item_claymore";
}


// CDOTA_Modifier_Item_Claymore::~CDOTA_Modifier_Item_Claymore  (line 38, @0x0000000002d840f0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Claymore::~CDOTA_Modifier_Item_Claymore(CDOTA_Modifier_Item_Claymore *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Claymore::~CDOTA_Modifier_Item_Claymore  (line 38, @0x0000000002d84110, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Claymore
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Claymore::~CDOTA_Modifier_Item_Claymore(CDOTA_Modifier_Item_Claymore *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Claymore::DeclareFunctions  (line 53, @0x0000000002d6f0b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Claymore::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Claymore::DeclareFunctions(CDOTA_Modifier_Item_Claymore *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Claymore::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_Claymore::GetModifierPreAttack_BonusDamage  (line 58, @0x0000000002d6f0d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Claymore::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Claymore *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Claymore::OnCreated  (line 63, @0x0000000002d7b590, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_Claymore::OnCreated(CDOTA_Modifier_Item_Claymore *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  else
    this->bonus_damage = 0;
}


