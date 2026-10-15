// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_demon_edge.cpp:26
class CDOTA_Item_DemonEdge : public CDOTA_Item {
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
	CDOTA_Item_DemonEdge(CDOTA_Item_DemonEdge &);
	CDOTA_Item_DemonEdge(CDOTA_Item_DemonEdge &);
	CDOTA_Item_DemonEdge();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_DemonEdge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_demon_edge.cpp:38
class CDOTA_Modifier_Item_DemonEdge : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	CDOTA_Modifier_Item_DemonEdge();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_DemonEdge();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_DemonEdge::~CDOTA_Item_DemonEdge  (line 26, @0x0000000002d86590, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_DemonEdge::~CDOTA_Item_DemonEdge(CDOTA_Item_DemonEdge *const this)
{
  this->_vptr_IHandleEntity = &off_46CCC30;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_DemonEdge::~CDOTA_Item_DemonEdge  (line 26, @0x0000000002d865b0, libserver.so)  // inlines: ~CDOTA_Item_DemonEdge
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_DemonEdge::~CDOTA_Item_DemonEdge(CDOTA_Item_DemonEdge *const this)
{
  this->_vptr_IHandleEntity = &off_46CCC30;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_DemonEdge::Schema_DynamicBinding  (line 28, @0x0000000002d819a0, libserver.so)
// globals: CDOTA_Item_DemonEdge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_DemonEdge::Schema_DynamicBinding(
        const CDOTA_Item_DemonEdge *const this)
{
  return CDOTA_Item_DemonEdge::s_pSchemaBinding;
}


// CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d819b0, libserver.so)
// globals: CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_DemonEdge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d819c0, libserver.so)  // inlines: Destruct<CDOTA_Item_DemonEdge>
void __fastcall CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_DemonEdge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d819e0, libserver.so)
void __fastcall CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_DemonEdge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d81a00, libserver.so)
bool __fastcall CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_DemonEdge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d81a10, libserver.so)
// globals: CDOTA_Item_DemonEdge::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_DemonEdge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_DemonEdge::s_pSchemaBinding;
}


// CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d83bb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_DemonEdge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d85010, libserver.so)  // inlines: CDOTA_Item_DemonEdge, Construct<CDOTA_Item_DemonEdge>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_DemonEdge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46CCC30;
  }
  return p;
}


// CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d88c00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_DemonEdge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d88c20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_DemonEdge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_DemonEdge::GetEntityClassInternal  (line 28, @0x0000000002d924b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_DemonEdge"
// globals: `guard variable for'CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass, CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass, __dso_handle, CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_DemonEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DemonEdgeClassInfo, CDOTA_Item_DemonEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DemonEdgeClassInfo
CEntityClass *__cdecl CDOTA_Item_DemonEdge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass);
    CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass._vptr_CEntityClass = off_46CCBB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass);
    __cxa_atexit(
      CDOTA_Item_DemonEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_DemonEdgeClass != 0 )
    return &CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass;
  if ( `guard variable for'CDOTA_Item_DemonEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DemonEdgeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_DemonEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DemonEdgeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_DemonEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DemonEdgeClassInfo,
      "CDOTA_Item_DemonEdge",
      "item_demon_edge",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_DemonEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DemonEdgeClassInfo);
  }
  CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass.m_pClassInfo = &CDOTA_Item_DemonEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DemonEdgeClassInfo;
  CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass.m_pBaseClassInfo = CDOTA_Item_DemonEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DemonEdgeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_DemonEdgeClass = &CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass;
  CDOTA_Item_DemonEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Item_DemonEdgeClassInfo.m_pClass = &CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass;
  CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_DemonEdgeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_DemonEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Item_DemonEdgeClass;
}


// CDOTA_Item_DemonEdge::GetIntrinsicModifierName  (line 30, @0x0000000002d81a20, libserver.so)
// strings: "modifier_item_demon_edge"
const char *__fastcall CDOTA_Item_DemonEdge::GetIntrinsicModifierName(CDOTA_Item_DemonEdge *const this)
{
  return "modifier_item_demon_edge";
}


// CDOTA_Modifier_Item_DemonEdge::~CDOTA_Modifier_Item_DemonEdge  (line 38, @0x0000000002d83fb0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_DemonEdge::~CDOTA_Modifier_Item_DemonEdge(
        CDOTA_Modifier_Item_DemonEdge *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_DemonEdge::~CDOTA_Modifier_Item_DemonEdge  (line 38, @0x0000000002d83fd0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_DemonEdge
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_DemonEdge::~CDOTA_Modifier_Item_DemonEdge(
        CDOTA_Modifier_Item_DemonEdge *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_DemonEdge::OnCreated  (line 53, @0x0000000002d7b710, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_DemonEdge::OnCreated(CDOTA_Modifier_Item_DemonEdge *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  else
    this->bonus_damage = 0;
}


// CDOTA_Modifier_Item_DemonEdge::DeclareFunctions  (line 60, @0x0000000002d6f480, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_DemonEdge::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_DemonEdge::DeclareFunctions(CDOTA_Modifier_Item_DemonEdge *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_DemonEdge::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_DemonEdge::GetModifierPreAttack_BonusDamage  (line 65, @0x0000000002d6f4a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_DemonEdge::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_DemonEdge *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


