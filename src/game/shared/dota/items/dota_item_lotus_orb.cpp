// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_lotus_orb.cpp:30
class CDOTA_Item_Recipe_Lotus_Orb : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Lotus_Orb(CDOTA_Item_Recipe_Lotus_Orb &);
	CDOTA_Item_Recipe_Lotus_Orb(CDOTA_Item_Recipe_Lotus_Orb &);
	CDOTA_Item_Recipe_Lotus_Orb();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Lotus_Orb();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_lotus_orb.cpp:42
class CDOTA_Item_Lotus_Orb : public CDOTA_Item {
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
	CDOTA_Item_Lotus_Orb(CDOTA_Item_Lotus_Orb &);
	CDOTA_Item_Lotus_Orb(CDOTA_Item_Lotus_Orb &);
	CDOTA_Item_Lotus_Orb();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Lotus_Orb();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_lotus_orb.cpp:77
class CDOTA_Modifier_Item_Lotus_Orb : public CDOTA_Buff_Item {
public:

private:

	int bonus_health_regen;  // +0xba8
	int bonus_mana_regen;  // +0xbac
	int bonus_damage;  // +0xbb0
	int bonus_armor;  // +0xbb4
	int bonus_mana;  // +0xbb8
	float block_cooldown;  // +0xbbc
	CDOTA_Modifier_Item_Lotus_Orb();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Lotus_Orb();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/items/dota_item_lotus_orb.cpp:153
class CDOTA_Modifier_Item_Lotus_Orb_Active : public CDOTA_Buff {
public:

	CDOTA_Modifier_Item_Lotus_Orb_Active();
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	ModifierVariant_t GetReflectSpell(const CModifierParams &);
	void ReflectSpell(const CModifierParams &);
	virtual int GetPriority();
	virtual ~CDOTA_Modifier_Item_Lotus_Orb_Active();

	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[6] GetPriority
	// sizeof = 3128
};

// src/game/shared/dota/items/dota_item_lotus_orb.cpp:315
class CDOTA_Modifier_Lotus_Orb_Delay : public CDOTA_Buff {
public:

	CDOTA_Modifier_Lotus_Orb_Delay();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Lotus_Orb_Delay();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 2984
};

// src/game/shared/dota/items/dota_item_lotus_orb.cpp:354
class CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck : public CDOTA_Buff {
public:

private:

	EHANDLE m_hAbility;  // +0xba8
	EHANDLE m_hTarget;  // +0xbac
	float m_fChannelEnd;  // +0xbbc
	bool m_bInterrupt;  // +0xbc0
	bool m_bExpired;  // +0xbc1
	CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t OnOrder(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Lotus_Orb::~CDOTA_Item_Recipe_Lotus_Orb  (line 30, @0x0000000002dbc950, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Lotus_Orb::~CDOTA_Item_Recipe_Lotus_Orb(CDOTA_Item_Recipe_Lotus_Orb *const this)
{
  this->_vptr_IHandleEntity = &off_4707250;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Lotus_Orb::~CDOTA_Item_Recipe_Lotus_Orb  (line 30, @0x0000000002dbc970, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Lotus_Orb
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Lotus_Orb::~CDOTA_Item_Recipe_Lotus_Orb(CDOTA_Item_Recipe_Lotus_Orb *const this)
{
  this->_vptr_IHandleEntity = &off_4707250;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Lotus_Orb::Schema_DynamicBinding  (line 32, @0x0000000002db8dc0, libserver.so)
// globals: CDOTA_Item_Recipe_Lotus_Orb::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Lotus_Orb::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Lotus_Orb *const this)
{
  return CDOTA_Item_Recipe_Lotus_Orb::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000002db8dd0, libserver.so)
// globals: CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000002db8de0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Lotus_Orb>
void __fastcall CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000002db8e00, libserver.so)
void __fastcall CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002db8e20, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000002db8e30, libserver.so)
// globals: CDOTA_Item_Recipe_Lotus_Orb::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Lotus_Orb::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002dba6c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000002dbb9a0, libserver.so)  // inlines: CDOTA_Item_Recipe_Lotus_Orb, Construct<CDOTA_Item_Recipe_Lotus_Orb>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4707250;
  }
  return p;
}


// CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002dbeb50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002dbeb70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal  (line 32, @0x0000000002dc4170, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_recipe_lotus_orb", "CDOTA_Item_Recipe_Lotus_Orb"
// globals: `guard variable for'CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass, CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass, __dso_handle, CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClassInfo, CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass);
    CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass._vptr_CEntityClass = off_47071D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Lotus_Orb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Lotus_OrbClass != 0 )
    return &CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClassInfo,
      "CDOTA_Item_Recipe_Lotus_Orb",
      "item_recipe_lotus_orb",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClassInfo);
  }
  CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass.m_pClassInfo = &CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClassInfo;
  CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Lotus_OrbClass = &CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass;
  CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClassInfo.m_pClass = &CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass;
  CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Lotus_OrbClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Lotus_OrbClass;
}


// CDOTA_Item_Lotus_Orb::~CDOTA_Item_Lotus_Orb  (line 42, @0x0000000002dbc9a0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Lotus_Orb::~CDOTA_Item_Lotus_Orb(CDOTA_Item_Lotus_Orb *const this)
{
  this->_vptr_IHandleEntity = &off_4707E50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Lotus_Orb::~CDOTA_Item_Lotus_Orb  (line 42, @0x0000000002dbc9c0, libserver.so)  // inlines: ~CDOTA_Item_Lotus_Orb
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Lotus_Orb::~CDOTA_Item_Lotus_Orb(CDOTA_Item_Lotus_Orb *const this)
{
  this->_vptr_IHandleEntity = &off_4707E50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Lotus_Orb::Schema_DynamicBinding  (line 44, @0x0000000002db8e40, libserver.so)
// globals: CDOTA_Item_Lotus_Orb::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Lotus_Orb::Schema_DynamicBinding(
        const CDOTA_Item_Lotus_Orb *const this)
{
  return CDOTA_Item_Lotus_Orb::s_pSchemaBinding;
}


// CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 44, @0x0000000002db8e50, libserver.so)
// globals: CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::DestructInstance  (line 44, @0x0000000002db8e60, libserver.so)  // inlines: Destruct<CDOTA_Item_Lotus_Orb>
void __fastcall CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::FreeInstance  (line 44, @0x0000000002db8e80, libserver.so)
void __fastcall CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::CanAllocate  (line 44, @0x0000000002db8ea0, libserver.so)
bool __fastcall CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 44, @0x0000000002db8eb0, libserver.so)
// globals: CDOTA_Item_Lotus_Orb::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Lotus_Orb::s_pSchemaBinding;
}


// CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::AllocateInstance  (line 44, @0x0000000002dba700, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::ConstructInstance  (line 44, @0x0000000002dbb9d0, libserver.so)  // inlines: CDOTA_Item_Lotus_Orb, Construct<CDOTA_Item_Lotus_Orb>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4707E50;
  }
  return p;
}


// CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002dbeba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002dbebc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Lotus_Orb::GetEntityClassInternal  (line 44, @0x0000000002dc42c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "CDOTA_Item_Lotus_Orb"
// globals: `guard variable for'CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass, CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass, __dso_handle, CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Lotus_OrbClassInfo, CDOTA_Item_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Lotus_OrbClassInfo
CEntityClass *__cdecl CDOTA_Item_Lotus_Orb::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass);
    CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass._vptr_CEntityClass = off_4707DD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass);
    __cxa_atexit(
      CDOTA_Item_Lotus_Orb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Lotus_OrbClass != 0 )
    return &CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass;
  if ( `guard variable for'CDOTA_Item_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Lotus_OrbClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Lotus_OrbClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Lotus_OrbClassInfo,
      "CDOTA_Item_Lotus_Orb",
      "item_lotus_orb",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Lotus_OrbClassInfo);
  }
  CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass.m_pClassInfo = &CDOTA_Item_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Lotus_OrbClassInfo;
  CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass.m_pBaseClassInfo = CDOTA_Item_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Lotus_OrbClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Lotus_OrbClass = &CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass;
  CDOTA_Item_Lotus_Orb::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Lotus_OrbClassInfo.m_pClass = &CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass;
  CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Lotus_OrbClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Lotus_Orb::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Lotus_OrbClass;
}


// CDOTA_Item_Lotus_Orb::GetIntrinsicModifierName  (line 46, @0x0000000002db8ec0, libserver.so)
// strings: "modifier_item_lotus_orb"
const char *__fastcall CDOTA_Item_Lotus_Orb::GetIntrinsicModifierName(CDOTA_Item_Lotus_Orb *const this)
{
  return "modifier_item_lotus_orb";
}


// CDOTA_Item_Lotus_Orb::OnSpellStart  (line 54, @0x0000000002db5cd0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, Purge, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "active_duration", "modifier_item_lotus_orb_active", "Item.LotusOrb.Target"
void __fastcall CDOTA_Item_Lotus_Orb::OnSpellStart(CDOTA_Item_Lotus_Orb *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    Purge(CursorTarget, this, 4);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "active_duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_item_lotus_orb_active");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_item_lotus_orb_active", &kv, 0);
    DOTA_EmitSound(10, "Item.LotusOrb.Target", v3);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Item_Lotus_Orb::~CDOTA_Modifier_Item_Lotus_Orb  (line 77, @0x0000000002dbae20, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Lotus_Orb::~CDOTA_Modifier_Item_Lotus_Orb(
        CDOTA_Modifier_Item_Lotus_Orb *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Lotus_Orb::~CDOTA_Modifier_Item_Lotus_Orb  (line 77, @0x0000000002dbae40, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Lotus_Orb
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Lotus_Orb::~CDOTA_Modifier_Item_Lotus_Orb(
        CDOTA_Modifier_Item_Lotus_Orb *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Lotus_Orb::OnCreated  (line 106, @0x0000000002db5660, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_health_regen", "bonus_mana_regen", "bonus_mana"
void __fastcall CDOTA_Modifier_Item_Lotus_Orb::OnCreated(CDOTA_Modifier_Item_Lotus_Orb *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_health_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_health_regen = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_mana_regen", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->bonus_mana_regen = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_damage", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->bonus_armor = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->bonus_damage = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_armor", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "bonus_mana", -1, 0);
    return;
  }
LABEL_11:
  this->bonus_mana = 0;
}


// CDOTA_Modifier_Item_Lotus_Orb::DeclareFunctions  (line 115, @0x0000000002dab140, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Lotus_Orb::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_Lotus_Orb::GetModifierPercentageManaRegen(CModifierParams const&), CDOTA_Modifier_Item_Lotus_Orb::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Lotus_Orb::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Item_Lotus_Orb::GetModifierManaBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Lotus_Orb::DeclareFunctions(CDOTA_Modifier_Item_Lotus_Orb *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Lotus_Orb::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[54].__delta = 0;
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_Lotus_Orb::GetModifierPercentageManaRegen;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Lotus_Orb::GetModifierPreAttack_BonusDamage;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Lotus_Orb::GetModifierPhysicalArmorBonus;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[59].__pfn = CDOTA_Modifier_Item_Lotus_Orb::GetModifierManaBonus;
  this->m_Functions[59].__delta = 0;
}


// CDOTA_Modifier_Item_Lotus_Orb::GetModifierConstantHealthRegen  (line 124, @0x0000000002dab1d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Lotus_Orb::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Lotus_Orb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Lotus_Orb::GetModifierPercentageManaRegen  (line 129, @0x0000000002dab1f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Lotus_Orb::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_Lotus_Orb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Lotus_Orb::GetModifierPreAttack_BonusDamage  (line 134, @0x0000000002dab210, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Lotus_Orb::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Lotus_Orb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Lotus_Orb::GetModifierPhysicalArmorBonus  (line 139, @0x0000000002dab230, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Lotus_Orb::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Lotus_Orb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Lotus_Orb::GetModifierManaBonus  (line 144, @0x0000000002dab250, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Lotus_Orb::GetModifierManaBonus(
        CDOTA_Modifier_Item_Lotus_Orb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Lotus_Orb_Active::~CDOTA_Modifier_Item_Lotus_Orb_Active  (line 153, @0x0000000002dbb370, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Lotus_Orb_Active::~CDOTA_Modifier_Item_Lotus_Orb_Active(
        CDOTA_Modifier_Item_Lotus_Orb_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_4708D30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Lotus_Orb_Active::~CDOTA_Modifier_Item_Lotus_Orb_Active  (line 153, @0x0000000002dbb390, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Lotus_Orb_Active
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Lotus_Orb_Active::~CDOTA_Modifier_Item_Lotus_Orb_Active(
        CDOTA_Modifier_Item_Lotus_Orb_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_4708D30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Lotus_Orb_Active::IsPurgable  (line 158, @0x0000000002db8ed0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Lotus_Orb_Active::IsPurgable(CDOTA_Modifier_Item_Lotus_Orb_Active *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Lotus_Orb_Active::OnCreated  (line 175, @0x0000000002dab270, libserver.so)
void __fastcall CDOTA_Modifier_Item_Lotus_Orb_Active::OnCreated(
        CDOTA_Modifier_Item_Lotus_Orb_Active *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Item_Lotus_Orb_Active::DeclareFunctions  (line 195, @0x0000000002dab280, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Lotus_Orb_Active::GetReflectSpell(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Lotus_Orb_Active::DeclareFunctions(
        CDOTA_Modifier_Item_Lotus_Orb_Active *const this)
{
  this->m_Functions[94].__pfn = CDOTA_Modifier_Item_Lotus_Orb_Active::GetReflectSpell;
  this->m_Functions[94].__delta = 0;
}


// CDOTA_Modifier_Item_Lotus_Orb_Active::GetPriority  (line 200, @0x0000000002dab2a0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Lotus_Orb_Active::GetPriority(CDOTA_Modifier_Item_Lotus_Orb_Active *const this)
{
  return 3;
}


// CDOTA_Modifier_Item_Lotus_Orb_Active::ReflectSpell  (line 205, @0x0000000002db7240, libserver.so)  // inlines: AddAbilityToPendingDelete, AddToTail, CopyConstruct<CDOTABaseAbility*>, Element, Get, GetAbilityName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, SetCursorCastTarget, SetIsReflection, SetRefCountsModifiers, ToDOTABaseNPCHero, operator CDOTABaseAbility*, operator CEntityInstance*, operator=, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_CombatLog::AddAbilityEvent, DOTA_CreateAbility, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::SetHidden, KeyValues::KeyValues, KeyValues::SetPtr, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::SetChanneling (17 total)
// callers: CDOTA_Modifier_Item_Lotus_Orb_Active::GetReflectSpell, CDOTA_Modifier_Lotus_Orb_Delay::OnIntervalThink
// strings: "<NoAbilityName>", "modifier_item_lotus_orb_channel_check"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Item_Lotus_Orb_Active::ReflectSpell(
        CDOTA_Modifier_Item_Lotus_Orb_Active *const this,
        const CModifierParams *const params)
{
  CEntityIdentity *v3; // rdx
  CDOTABaseAbility *m_pInstance; // r14
  CDOTA_BaseNPC *Caster; // r15
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v8; // r12
  CDOTABaseAbility *Ability; // rbx
  CDOTA_BaseNPC *v10; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v12; // rdi
  const char *m_pszAbilityName; // rax
  CDOTABaseAbility *v14; // rax
  CDOTABaseAbility *v15; // rbx
  CEntityIdentity *m_pEntity; // rax
  int v17; // edx
  __int16 v18; // cx
  float v19; // xmm1_4
  CDOTABaseAbility *v20; // r15
  CDOTA_BaseNPC *v21; // rax
  __int64 m_Size; // r13
  int v23; // eax
  CDOTABaseAbility **v24; // rax
  CDOTA_BaseNPC *pCaster; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( params->ability.m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    Caster = 0;
    v6 = &v3[params->ability.m_Index & 0x1FF];
    if ( v6 != 0 && params->ability.m_Index == v6->m_EHandle.m_Index )
    {
      m_pInstance = v6->m_pInstance;
      if ( v6->m_pInstance != 0 )
        Caster = CDOTABaseAbility::GetCaster(v6->m_pInstance);
    }
  }
  else
  {
    m_pInstance = 0;
    Caster = 0;
  }
  Parent = CDOTA_Buff::GetParent(this);
  v8 = Parent;
  if ( Parent != 0
    && (Parent->m_iUnitType & 1) != 0
    && Caster != 0
    && m_pInstance != 0
    && (*(m_pInstance->_vptr_IHandleEntity + 208))(m_pInstance) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    v10 = CDOTA_Buff::GetCaster(this);
    CDOTA_CombatLog::AddAbilityEvent(g_pDOTACombatLog, 13, Caster, v10, Ability, 0, vec3_origin);
    m_pAbilityData = m_pInstance->m_pAbilityData;
    v12 = "<NoAbilityName>";
    if ( m_pAbilityData != 0 )
    {
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
      v12 = "<NoAbilityName>";
      if ( m_pszAbilityName != 0 )
        v12 = m_pszAbilityName;
    }
    v14 = DOTA_CreateAbility(v12, v8);
    v15 = v14;
    if ( v14 != 0 )
    {
      v14->m_bReflection = 1;
      if ( v14->m_iLevel.m_Value < m_pInstance->m_iLevel.m_Value )
      {
        do
          CDOTABaseAbility::UpgradeAbility(v15, 0);
        while ( v15->m_iLevel.m_Value < m_pInstance->m_iLevel.m_Value );
      }
      v15->m_bRefCountsModifiers = 1;
      (*(m_pInstance->_vptr_IHandleEntity + 210))(m_pInstance, v15);
      m_pEntity = Caster->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v18 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v8->m_hCursorTarget.m_Index) = v18 | v8->m_hCursorTarget.m_Index & 0x8000;
        v8->m_hCursorTarget.m_Index = (v17 << 15) | v8->m_hCursorTarget.m_Index & 0x7FFF;
      }
      else
      {
        v8->m_hCursorTarget.m_Index = -1;
      }
      CDOTABaseAbility::SetHidden(v15, 0);
      (*(v15->_vptr_IHandleEntity + 264))(v15);
      (*(v15->_vptr_IHandleEntity + 266))(v15);
      v8->m_hCursorTarget.m_Index = -1;
      if ( (*(v15->_vptr_IHandleEntity + 251))(v15) < 0 )
      {
        KeyValues::KeyValues(&kv, "modifier_item_lotus_orb_channel_check");
        KeyValues::SetPtr(&kv, "target", Caster);
        KeyValues::SetPtr(&kv, "ability", v15);
        (*(v15->_vptr_IHandleEntity + 225))(v15);
        KeyValues::SetFloat(&kv, "channel_time", v19);
        v20 = CDOTA_Buff::GetAbility(this);
        pCaster = CDOTA_Buff::GetCaster(this);
        v21 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v21, pCaster, v20, "modifier_item_lotus_orb_channel_check", &kv, 0);
        CDOTABaseAbility::SetChanneling(v15, 1);
        KeyValues::~KeyValues(&kv);
      }
      m_Size = v8[1].m_SceneEvents.m_Size;
      v23 = v8[1].m_SceneEvents.m_Size;
      if ( m_Size == v8[1].m_SceneEvents.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CDOTABaseAbility *,int>::Grow(&v8[1].m_SceneEvents.m_Memory, 1);
        v23 = v8[1].m_SceneEvents.m_Size;
      }
      v8[1].m_SceneEvents.m_Size = v23 + 1;
      v24 = &v8[1].m_SceneEvents.m_Memory.m_pMemory[m_Size];
      if ( v24 != 0 )
        *v24 = v15;
    }
  }
}


// CDOTA_Modifier_Item_Lotus_Orb_Active::GetReflectSpell  (line 255, @0x0000000002db75d0, libserver.so)  // inlines: CWeakHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, Vector, operator CDOTABaseAbility*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTABaseAbility::GetCaster, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, DOTA_EmitSound, CBaseEntity::GetModel, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (15 total)
// strings: "modifier_lotus_orb_delay", "Item.LotusOrb.Activate", "particles/items3_fx/lotus_orb_reflect.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Lotus_Orb_Active::GetReflectSpell(
        CDOTA_Modifier_Item_Lotus_Orb_Active *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *m_pInstance; // r13
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  unsigned __int8 m_Value; // r14
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  vec_t z; // eax
  CDOTA_BaseNPC *v12; // rax
  unsigned __int8 (__fastcall *v13)(IGameModelInfo *, const ResourceBindingBase_t **); // rax
  CDOTA_BaseNPC *v14; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v16; // rbx
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  void (__fastcall *v21)(IGameModelInfo *, const ResourceBindingBase_t **, Vector *, Vector *); // rax
  float flFXScale; // [rsp+Ch] [rbp-84h]
  HModel mod; // [rsp+10h] [rbp-80h] BYREF
  Vector vecMins; // [rsp+20h] [rbp-70h] BYREF
  Vector vecMaxs; // [rsp+30h] [rbp-60h] BYREF
  const ResourceBindingBase_t *m_pBinding; // [rsp+40h] [rbp-50h] BYREF
  float v27; // [rsp+48h] [rbp-48h]
  KeyValues kv; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-28h]
  ModifierVariant_t result; // 0:rax.16

  v29 = __readfsqword(0x28u);
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    m_pInstance = 0;
    if ( params->ability.m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->ability.m_Index & 0x1FF];
        if ( v6 != 0 && params->ability.m_Index == v6->m_EHandle.m_Index )
          m_pInstance = v6->m_pInstance;
      }
    }
    if ( CDOTABaseAbility::GetCaster(m_pInstance) != 0
      && (m_Value = CDOTABaseAbility::GetCaster(m_pInstance)->m_iTeamNum.m_Value) == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
    {
      *&result.m_eType = 1;
    }
    else
    {
      if ( (*(m_pInstance->_vptr_IHandleEntity + 209))(m_pInstance) != 0 )
      {
        this->m_LastParams.ability.m_Index = params->ability.m_Index;
        this->m_LastParams.fDamage = params->fDamage;
        this->m_LastParams.fOriginalDamage = params->fOriginalDamage;
        this->m_LastParams.nActivity = params->nActivity;
        this->m_LastParams.bTooltip = params->bTooltip;
        this->m_LastParams.nTooltipParam = params->nTooltipParam;
        this->m_LastParams.bIgnoreInvis = params->bIgnoreInvis;
        this->m_LastParams.bNoCooldown = params->bNoCooldown;
        this->m_LastParams.bReincarnate = params->bReincarnate;
        this->m_LastParams.bDoNotConsume = params->bDoNotConsume;
        this->m_LastParams.fDistance = params->fDistance;
        this->m_LastParams.fGain = params->fGain;
        this->m_LastParams.fAttackTimeRemaining = params->fAttackTimeRemaining;
        this->m_LastParams.m_nIssuerPlayerIndex = params->m_nIssuerPlayerIndex;
        this->m_LastParams.inflictor.m_Index = params->inflictor.m_Index;
        this->m_LastParams.nDamageType = params->nDamageType;
        this->m_LastParams.nDamageflags = params->nDamageflags;
        this->m_LastParams.nDamageCategory = params->nDamageCategory;
        this->m_LastParams.iFailType = params->iFailType;
        this->m_LastParams.iRecord = params->iRecord;
        this->m_LastParams.pOrb = params->pOrb;
        this->m_LastParams.pOrb2 = params->pOrb2;
        this->m_LastParams.nCost = params->nCost;
        this->m_LastParams.nOrdertype = params->nOrdertype;
        this->m_LastParams.vOldLoc.x = params->vOldLoc.x;
        this->m_LastParams.vOldLoc.y = params->vOldLoc.y;
        this->m_LastParams.vOldLoc.z = params->vOldLoc.z;
        this->m_LastParams.vNewLoc.x = params->vNewLoc.x;
        this->m_LastParams.vNewLoc.y = params->vNewLoc.y;
        this->m_LastParams.vNewLoc.z = params->vNewLoc.z;
        this->m_LastParams.bCraniumBasherTested = params->bCraniumBasherTested;
        this->m_LastParams.bHeartRegenApplied = params->bHeartRegenApplied;
        this->m_LastParams.bDiffusalApplied = params->bDiffusalApplied;
        this->m_LastParams.bChainLightningConsidered = params->bChainLightningConsidered;
        this->m_LastParams.bSuppressDamage = params->bSuppressDamage;
        this->m_LastParams.bRangedAttack = params->bRangedAttack;
        this->m_LastParams.bProcessProcs = params->bProcessProcs;
        this->m_LastParams.nPlayerids_stick = params->nPlayerids_stick;
        this->m_LastParams.hattacker.m_Index = params->hattacker.m_Index;
        this->m_LastParams.htarget.m_Index = params->htarget.m_Index;
        this->m_LastParams.hunit.m_Index = params->hunit.m_Index;
        KeyValues::KeyValues(&kv, "modifier_lotus_orb_delay");
        Parent = CDOTA_Buff::GetParent(this);
        v9 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::AddNewModifier(v9, Parent, 0, "modifier_lotus_orb_delay", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
      else
      {
        CDOTA_Modifier_Item_Lotus_Orb_Active::ReflectSpell(this, params);
      }
      v10 = CDOTA_Buff::GetParent(this);
      DOTA_EmitSound(10, "Item.LotusOrb.Activate", v10);
      z = vec3_origin.z;
      *&vecMaxs.x = *&vec3_origin.x;
      vecMaxs.z = z;
      v12 = CDOTA_Buff::GetParent(this);
      CBaseEntity::GetModel(&mod, v12);
      v13 = *(modelinfo->_vptr_IAppSystem + 14);
      m_pBinding = mod.m_pBinding;
      if ( v13(modelinfo, &m_pBinding) != 0 )
      {
        v21 = *(modelinfo->_vptr_IAppSystem + 16);
        m_pBinding = mod.m_pBinding;
        v21(modelinfo, &m_pBinding, &vecMins, &vecMaxs);
      }
      flFXScale = (vecMaxs.z - vecMins.z) / 1.5;
      v14 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      LODWORD(v14) = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/items3_fx/lotus_orb_reflect.vpcf",
                       2,
                       v14,
                       0,
                       0);
      v16 = CDOTA_Buff::GetParent(this);
      v17 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v17, v14, 0, v16, 5, "attach_hitloc", vec3_invalid, 1);
      *&m_pBinding = flFXScale;
      *(&m_pBinding + 1) = flFXScale;
      v27 = flFXScale;
      v18 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v18, v14, 1, *&m_pBinding, v27);
      v19 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v19, v14);
      *&result.m_eType = 0x3F80000000000001LL;
    }
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Item_Lotus_Orb_Active::OnDestroy  (line 304, @0x0000000002dabac0, libserver.so)
// calls: CDOTA_Buff::GetParent, DOTA_EmitSound
// strings: "Item.LotusOrb.Destroy"
void __fastcall CDOTA_Modifier_Item_Lotus_Orb_Active::OnDestroy(CDOTA_Modifier_Item_Lotus_Orb_Active *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Item.LotusOrb.Destroy", Parent);
}


// CDOTA_Modifier_Lotus_Orb_Delay::~CDOTA_Modifier_Lotus_Orb_Delay  (line 315, @0x0000000002dbb320, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lotus_Orb_Delay::~CDOTA_Modifier_Lotus_Orb_Delay(
        CDOTA_Modifier_Lotus_Orb_Delay *const this)
{
  this->_vptr_CDOTA_Buff = &off_4709050;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lotus_Orb_Delay::~CDOTA_Modifier_Lotus_Orb_Delay  (line 315, @0x0000000002dbb340, libserver.so)  // inlines: ~CDOTA_Modifier_Lotus_Orb_Delay
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lotus_Orb_Delay::~CDOTA_Modifier_Lotus_Orb_Delay(
        CDOTA_Modifier_Lotus_Orb_Delay *const this)
{
  this->_vptr_CDOTA_Buff = &off_4709050;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lotus_Orb_Delay::IsHidden  (line 319, @0x0000000002db8ee0, libserver.so)
bool __fastcall CDOTA_Modifier_Lotus_Orb_Delay::IsHidden(CDOTA_Modifier_Lotus_Orb_Delay *const this)
{
  return 1;
}


// CDOTA_Modifier_Lotus_Orb_Delay::IsPurgable  (line 320, @0x0000000002db8ef0, libserver.so)
bool __fastcall CDOTA_Modifier_Lotus_Orb_Delay::IsPurgable(CDOTA_Modifier_Lotus_Orb_Delay *const this)
{
  return 0;
}


// CDOTA_Modifier_Lotus_Orb_Delay::OnCreated  (line 328, @0x0000000002dabf80, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Lotus_Orb_Delay::OnCreated(CDOTA_Modifier_Lotus_Orb_Delay *const this, KeyValues *pKV)
{
  float v2; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, 0.0, v2);
}


// CDOTA_Modifier_Lotus_Orb_Delay::OnIntervalThink  (line 335, @0x0000000002db7ad0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Modifier_Item_Lotus_Orb_Active::ReflectSpell, CDOTA_Buff::Destroy
// strings: "modifier_item_lotus_orb_active"
void __fastcall CDOTA_Modifier_Lotus_Orb_Delay::OnIntervalThink(CDOTA_Modifier_Lotus_Orb_Delay *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Modifier_Item_Lotus_Orb_Active *ModifierByName; // rax

  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_item_lotus_orb_active", 0);
  if ( ModifierByName != 0 )
  {
    CDOTA_Modifier_Item_Lotus_Orb_Active::ReflectSpell(ModifierByName, &ModifierByName->m_LastParams);
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::~CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck  (line 354, @0x0000000002dbb2d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::~CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck(
        CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck *const this)
{
  this->_vptr_CDOTA_Buff = &off_4709370;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::~CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck  (line 354, @0x0000000002dbb2f0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::~CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck(
        CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck *const this)
{
  this->_vptr_CDOTA_Buff = &off_4709370;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::IsHidden  (line 364, @0x0000000002db8f00, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::IsHidden(
        CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::IsPurgable  (line 365, @0x0000000002db8f10, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::IsPurgable(
        CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnCreated  (line 390, @0x0000000002dabf90, libserver.so)  // inlines: DOTAGameRules, GetEHandle, GetEntryIndex, GetGameTime, GetSerialNumber, Set, operator=
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, KeyValues::GetFloat, KeyValues::GetPtr
void __fastcall CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnCreated(
        CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  float v6; // xmm1_4
  _QWORD *Ptr; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int16 v10; // cx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int16 v14; // cx
  float v15; // [rsp+Ch] [rbp-14h]

  this->m_bInterrupt = 0;
  this->m_bExpired = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v2);
  Parent = CDOTA_Buff::GetParent(this);
  this->m_vLocation = *CBaseEntity::GetAbsOrigin(Parent);
  if ( g_pGameRules != 0 )
  {
    v6 = *&g_pGameRules[18].m_szQuestName[20];
    v15 = v6;
  }
  else
  {
    v15 = 0.0;
  }
  this->m_fChannelEnd = KeyValues::GetFloat(pKV, "channel_time", v6) + v15;
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v8 = Ptr[1]) != 0 )
  {
    v9 = (*(v8 + 16) >> 15) - (*(v8 + 48) & 1);
    v10 = 0x7FFF;
    if ( *(v8 + 16) != -1 )
      v10 = *(v8 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v10 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v9 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  v11 = KeyValues::GetPtr(pKV, "ability", 0);
  if ( v11 != 0 && (v12 = v11[1]) != 0 )
  {
    v13 = (*(v12 + 16) >> 15) - (*(v12 + 48) & 1);
    if ( *(v12 + 16) == -1 )
      v14 = 0x7FFF;
    else
      v14 = *(v12 + 16) & 0x7FFF;
    LOWORD(this->m_hAbility.m_Index) = v14 | this->m_hAbility.m_Index & 0x8000;
    this->m_hAbility.m_Index = (v13 << 15) | this->m_hAbility.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hAbility.m_Index = -1;
  }
}


// CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnRefresh  (line 408, @0x0000000002dae0b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, operator CEntityInstance*
// calls: __dynamic_cast, CDOTABaseAbility::EndChannel
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnRefresh(
        CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck *const this,
        KeyValues *pKV)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTABaseAbility *v7; // rax

  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hAbility.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
      {
        v7 = __dynamic_cast(v6->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
        if ( v7 != 0 )
          CDOTABaseAbility::EndChannel(v7, 1);
      }
    }
  }
  (*(this->_vptr_CDOTA_Buff + 57))(this, pKV);
}


// CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnIntervalThink  (line 422, @0x0000000002daed40, libserver.so)  // inlines: DOTAGameRules, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTAAbility, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_Buff::Destroy, __dynamic_cast, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::EndChannel, CDOTA_BaseNPC::IsActionLocked, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::CanCastOn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnIntervalThink(
        CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTABaseAbility *v5; // r12
  float v6; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  bool v9; // si
  CDOTA_BaseNPC *v10; // rax
  CBaseEntity *v11; // r13
  CDOTA_BaseNPC *v12; // rax

  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_5;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    goto LABEL_5;
  v4 = &v3[this->m_hAbility.m_Index & 0x1FF];
  if ( v4 == 0 )
    goto LABEL_5;
  if ( m_Index != v4->m_EHandle.m_Index )
    goto LABEL_5;
  if ( v4->m_pInstance == 0 )
    goto LABEL_5;
  v5 = __dynamic_cast(v4->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  if ( v5 == 0 )
    goto LABEL_5;
  v6 = 0.0;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  if ( v6 > this->m_fChannelEnd )
    this->m_bExpired = 1;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  if ( fsqrt(
         ((this->m_vLocation.x - AbsOrigin->x) * (this->m_vLocation.x - AbsOrigin->x))
       + ((this->m_vLocation.y - AbsOrigin->y) * (this->m_vLocation.y - AbsOrigin->y))) > 1.0 )
    goto LABEL_13;
  if ( this->m_bInterrupt )
    goto LABEL_14;
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 8) != 0
    || (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10) != 0 && (*(v5->_vptr_IHandleEntity + 223))(v5) != 0 )
  {
    goto LABEL_13;
  }
  if ( (*(v5->_vptr_IHandleEntity + 233))(v5) == 0 )
    goto LABEL_13;
  v10 = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::IsActionLocked(v10) )
    goto LABEL_13;
  if ( this->m_bInterrupt )
    goto LABEL_14;
  if ( ((*(v5->_vptr_IHandleEntity + 251))(v5) & 0x20000000) == 0 )
  {
    v11 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    v12 = CDOTA_Buff::GetParent(this);
    if ( !CDOTA_BaseNPC::CanCastOn(v12, v11, v5) )
    {
LABEL_13:
      this->m_bInterrupt = 1;
LABEL_14:
      v9 = 1;
LABEL_15:
      CDOTABaseAbility::EndChannel(v5, v9);
LABEL_5:
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      return;
    }
  }
  if ( this->m_bInterrupt )
    goto LABEL_14;
  v9 = 0;
  if ( this->m_bExpired )
    goto LABEL_15;
  (*(v5->_vptr_IHandleEntity + 296))(v5, 0, 0.1);
}


// CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::CheckState  (line 472, @0x0000000002dab2b0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::CheckState(
        CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


// CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::DeclareFunctions  (line 482, @0x0000000002dab2c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnOrder(CModifierParams const&), CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::DeclareFunctions(
        CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck *const this)
{
  this->m_Functions[125].__pfn = CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnOrder;
  this->m_Functions[125].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnDeath;
}


// CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnOrder  (line 490, @0x0000000002dadf40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, OrderCancelsChannel
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnOrder(
        CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && OrderCancelsChannel(params->nOrdertype) )
        {
          this->m_bInterrupt = 1;
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnDeath  (line 504, @0x0000000002dade90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnDeath(
        CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  this->m_bInterrupt = 1;
  return 1uLL;
}


