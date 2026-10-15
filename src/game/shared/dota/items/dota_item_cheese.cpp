// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_cheese.cpp:27
class CDOTA_Item_Cheese : public CDOTA_Item {
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
	CDOTA_Item_Cheese(CDOTA_Item_Cheese &);
	CDOTA_Item_Cheese(CDOTA_Item_Cheese &);
	CDOTA_Item_Cheese();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnEquip();
	virtual ~CDOTA_Item_Cheese();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[333] OnEquip
	// sizeof = 1000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Cheese::~CDOTA_Item_Cheese  (line 27, @0x0000000002d85f00, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Cheese::~CDOTA_Item_Cheese(CDOTA_Item_Cheese *const this)
{
  this->_vptr_IHandleEntity = &off_46B99D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Cheese::~CDOTA_Item_Cheese  (line 27, @0x0000000002d85f20, libserver.so)  // inlines: ~CDOTA_Item_Cheese
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Cheese::~CDOTA_Item_Cheese(CDOTA_Item_Cheese *const this)
{
  this->_vptr_IHandleEntity = &off_46B99D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Cheese::Schema_DynamicBinding  (line 29, @0x0000000002d80e80, libserver.so)
// globals: CDOTA_Item_Cheese::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Cheese::Schema_DynamicBinding(const CDOTA_Item_Cheese *const this)
{
  return CDOTA_Item_Cheese::s_pSchemaBinding;
}


// CDOTA_Item_Cheese::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002d80e90, libserver.so)
// globals: CDOTA_Item_Cheese::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Cheese::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Cheese::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Cheese::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Cheese::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002d80ea0, libserver.so)  // inlines: Destruct<CDOTA_Item_Cheese>
void __fastcall CDOTA_Item_Cheese::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Cheese::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Cheese::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002d80ec0, libserver.so)
void __fastcall CDOTA_Item_Cheese::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Cheese::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Cheese::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002d80ee0, libserver.so)
bool __fastcall CDOTA_Item_Cheese::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Cheese::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Cheese::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002d80ef0, libserver.so)
// globals: CDOTA_Item_Cheese::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Cheese::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Cheese::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Cheese::s_pSchemaBinding;
}


// CDOTA_Item_Cheese::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002d83670, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Cheese::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Cheese::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Cheese::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002d84c20, libserver.so)  // inlines: CDOTA_Item_Cheese, Construct<CDOTA_Item_Cheese>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Cheese::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Cheese::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46B99D0;
  }
  return p;
}


// CDOTA_Item_Cheese::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d88570, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Cheese::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Cheese::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Cheese::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d88590, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Cheese::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Cheese::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Cheese::GetEntityClassInternal  (line 29, @0x0000000002d8fd40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_cheese", "CDOTA_Item_Cheese"
// globals: `guard variable for'CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass, CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass, __dso_handle, CDOTA_Item_Cheese::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Cheese::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CheeseClassInfo, CDOTA_Item_Cheese::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CheeseClassInfo
CEntityClass *__cdecl CDOTA_Item_Cheese::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass);
    CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass._vptr_CEntityClass = off_46B9950;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass);
    __cxa_atexit(
      CDOTA_Item_Cheese::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_CheeseClass != 0 )
    return &CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass;
  if ( `guard variable for'CDOTA_Item_Cheese::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CheeseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Cheese::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CheeseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Cheese::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CheeseClassInfo,
      "CDOTA_Item_Cheese",
      "item_cheese",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Cheese::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CheeseClassInfo);
  }
  CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass.m_pClassInfo = &CDOTA_Item_Cheese::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CheeseClassInfo;
  CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass.m_pBaseClassInfo = CDOTA_Item_Cheese::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CheeseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_CheeseClass = &CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass;
  CDOTA_Item_Cheese::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CheeseClassInfo.m_pClass = &CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass;
  CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_CheeseClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Cheese::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CheeseClass;
}


// CDOTA_Item_Cheese::OnSpellStart  (line 39, @0x0000000002d7b2e0, libserver.so)  // inlines: entindex
// calls: CDOTABaseAbility::GetCaster, DOTA_EmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::Heal, CDOTA_BaseNPC::GiveMana, CEntityInstance::GetEntityIndex, CreateUnitEvent, CDOTA_PlayerResource::IsValidTeamPlayerID, CDOTA_Item::SpendCharge
// strings: "DOTA_Item.Cheese.Activate", "health_restore", "mana_restore"
void __fastcall CDOTA_Item_Cheese::OnSpellStart(CDOTA_Item_Cheese *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int LevelSpecialValue; // r14d
  int v4; // r13d
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CEntityIndex v9; // eax
  CDOTA_BaseNPC *v10; // rax
  int v11; // eax
  __int64 v12; // r13

  Caster = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.Cheese.Activate", Caster);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "health_restore", -1, 0);
  v4 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "mana_restore", -1, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::Heal(v6, LevelSpecialValue, v5, 0, 1);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::GiveMana(v7, v4, this, 1);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9.m_Data = CEntityInstance::GetEntityIndex(v8).m_Data;
  CreateUnitEvent(v9, 0, 8, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_GENERIC_ITEM_USAGE);
  v10 = CDOTABaseAbility::GetCaster(this);
  v11 = (*(v10->_vptr_IHandleEntity + 414))(v10);
  v12 = v11;
  if ( CDOTA_PlayerResource::IsValidTeamPlayerID(g_pDOTAPlayerResource, v11) )
    ++*(g_pDOTAPlayerResource + v12 + 8574);
  CDOTA_Item::SpendCharge(this);
}


// CDOTA_Item_Cheese::OnEquip  (line 65, @0x0000000002d6fac0, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTA_Item::OnEquip, CDOTABaseAbility::GetCaster, CDOTA_Item::GetItemID, CDOTA_BaseNPC_Hero::AddItemPurchasedHistory
void __fastcall CDOTA_Item_Cheese::OnEquip(CDOTA_Item_Cheese *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v3; // r12
  uint32 ItemID; // eax

  CDOTA_Item::OnEquip(this);
  if ( !CDOTABaseAbility::GetCaster(this)->m_bIsIllusion.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v3 = Caster;
    if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    {
      ItemID = CDOTA_Item::GetItemID(this);
      CDOTA_BaseNPC_Hero::AddItemPurchasedHistory(v3, ItemID, 0);
    }
  }
}


