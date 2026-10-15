// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_orchid_malevolence.cpp:27
class CDOTA_Item_Recipe_OrchidMalevolence : public CDOTA_Item {
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
	CDOTA_Item_Recipe_OrchidMalevolence(CDOTA_Item_Recipe_OrchidMalevolence &);
	CDOTA_Item_Recipe_OrchidMalevolence(CDOTA_Item_Recipe_OrchidMalevolence &);
	CDOTA_Item_Recipe_OrchidMalevolence();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_OrchidMalevolence();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_orchid_malevolence.cpp:39
class CDOTA_Item_OrchidMalevolence : public CDOTA_Item {
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
	CDOTA_Item_OrchidMalevolence(CDOTA_Item_OrchidMalevolence &);
	CDOTA_Item_OrchidMalevolence(CDOTA_Item_OrchidMalevolence &);
	CDOTA_Item_OrchidMalevolence();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_OrchidMalevolence();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_orchid_malevolence.cpp:76
class CDOTA_Modifier_Item_OrchidMalevolence : public CDOTA_Buff_Item {
public:

private:

	int bonus_intellect;  // +0xba8
	int bonus_mana_regen;  // +0xbac
	int bonus_damage;  // +0xbb0
	int bonus_attack_speed;  // +0xbb4
	CDOTA_Modifier_Item_OrchidMalevolence();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_OrchidMalevolence();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_orchid_malevolence.cpp:152
class CDOTA_Modifier_OrchidMalevolence_Debuff : public CDOTA_Buff {
public:

private:

	float silence_damage_percent;  // +0xba8
	float m_flDamageTaken;  // +0xbac
	float silence_duration;  // +0xbb0
	CDOTA_Modifier_OrchidMalevolence_Debuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsDebuff();
	virtual ~CDOTA_Modifier_OrchidMalevolence_Debuff();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[12] IsDebuff
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_OrchidMalevolence::~CDOTA_Item_Recipe_OrchidMalevolence  (line 27, @0x0000000002dd80f0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_OrchidMalevolence::~CDOTA_Item_Recipe_OrchidMalevolence(
        CDOTA_Item_Recipe_OrchidMalevolence *const this)
{
  this->_vptr_IHandleEntity = &off_47353F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_OrchidMalevolence::~CDOTA_Item_Recipe_OrchidMalevolence  (line 27, @0x0000000002dd8110, libserver.so)  // inlines: ~CDOTA_Item_Recipe_OrchidMalevolence
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_OrchidMalevolence::~CDOTA_Item_Recipe_OrchidMalevolence(
        CDOTA_Item_Recipe_OrchidMalevolence *const this)
{
  this->_vptr_IHandleEntity = &off_47353F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_OrchidMalevolence::Schema_DynamicBinding  (line 29, @0x0000000002dd45e0, libserver.so)
// globals: CDOTA_Item_Recipe_OrchidMalevolence::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_OrchidMalevolence::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_OrchidMalevolence *const this)
{
  return CDOTA_Item_Recipe_OrchidMalevolence::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002dd45f0, libserver.so)
// globals: CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002dd4600, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_OrchidMalevolence>
void __fastcall CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002dd4620, libserver.so)
void __fastcall CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002dd4640, libserver.so)
bool __fastcall CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002dd4650, libserver.so)
// globals: CDOTA_Item_Recipe_OrchidMalevolence::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_OrchidMalevolence::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002dd5ff0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002dd70d0, libserver.so)  // inlines: CDOTA_Item_Recipe_OrchidMalevolence, Construct<CDOTA_Item_Recipe_OrchidMalevolence>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47353F0;
  }
  return p;
}


// CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dda020, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dda040, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal  (line 29, @0x0000000002de1b50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_recipe_orchid", "CDOTA_Item_Recipe_OrchidMalevolence"
// globals: `guard variable for'CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass, CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass, __dso_handle, CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClassInfo, CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass);
    CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass._vptr_CEntityClass = off_4735370;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_OrchidMalevolence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_OrchidMalevolenceClass != 0 )
    return &CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass;
  if ( `guard variable for'CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClassInfo,
      "CDOTA_Item_Recipe_OrchidMalevolence",
      "item_recipe_orchid",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClassInfo);
  }
  CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass.m_pClassInfo = &CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClassInfo;
  CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass.m_pBaseClassInfo = CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_OrchidMalevolenceClass = &CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass;
  CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClassInfo.m_pClass = &CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass;
  CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_OrchidMalevolenceClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OrchidMalevolenceClass;
}


// CDOTA_Item_OrchidMalevolence::~CDOTA_Item_OrchidMalevolence  (line 39, @0x0000000002dd8140, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_OrchidMalevolence::~CDOTA_Item_OrchidMalevolence(CDOTA_Item_OrchidMalevolence *const this)
{
  this->_vptr_IHandleEntity = &off_4735FF0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_OrchidMalevolence::~CDOTA_Item_OrchidMalevolence  (line 39, @0x0000000002dd8160, libserver.so)  // inlines: ~CDOTA_Item_OrchidMalevolence
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_OrchidMalevolence::~CDOTA_Item_OrchidMalevolence(CDOTA_Item_OrchidMalevolence *const this)
{
  this->_vptr_IHandleEntity = &off_4735FF0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_OrchidMalevolence::Schema_DynamicBinding  (line 41, @0x0000000002dd4660, libserver.so)
// globals: CDOTA_Item_OrchidMalevolence::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_OrchidMalevolence::Schema_DynamicBinding(
        const CDOTA_Item_OrchidMalevolence *const this)
{
  return CDOTA_Item_OrchidMalevolence::s_pSchemaBinding;
}


// CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002dd4670, libserver.so)
// globals: CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002dd4680, libserver.so)  // inlines: Destruct<CDOTA_Item_OrchidMalevolence>
void __fastcall CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002dd46a0, libserver.so)
void __fastcall CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002dd46c0, libserver.so)
bool __fastcall CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002dd46d0, libserver.so)
// globals: CDOTA_Item_OrchidMalevolence::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_OrchidMalevolence::s_pSchemaBinding;
}


// CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002dd6030, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002dd7100, libserver.so)  // inlines: CDOTA_Item_OrchidMalevolence, Construct<CDOTA_Item_OrchidMalevolence>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4735FF0;
  }
  return p;
}


// CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002dda070, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002dda090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_OrchidMalevolence::GetEntityClassInternal  (line 41, @0x0000000002de1ca0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_orchid", "CDOTA_Item_OrchidMalevolence"
// globals: `guard variable for'CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass, CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass, __dso_handle, CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OrchidMalevolenceClassInfo, CDOTA_Item_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OrchidMalevolenceClassInfo
CEntityClass *__cdecl CDOTA_Item_OrchidMalevolence::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass);
    CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass._vptr_CEntityClass = off_4735F70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass);
    __cxa_atexit(
      CDOTA_Item_OrchidMalevolence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_OrchidMalevolenceClass != 0 )
    return &CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass;
  if ( `guard variable for'CDOTA_Item_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OrchidMalevolenceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OrchidMalevolenceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OrchidMalevolenceClassInfo,
      "CDOTA_Item_OrchidMalevolence",
      "item_orchid",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OrchidMalevolenceClassInfo);
  }
  CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass.m_pClassInfo = &CDOTA_Item_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OrchidMalevolenceClassInfo;
  CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass.m_pBaseClassInfo = CDOTA_Item_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OrchidMalevolenceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_OrchidMalevolenceClass = &CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass;
  CDOTA_Item_OrchidMalevolence::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OrchidMalevolenceClassInfo.m_pClass = &CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass;
  CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_OrchidMalevolenceClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_OrchidMalevolence::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OrchidMalevolenceClass;
}


// CDOTA_Item_OrchidMalevolence::GetIntrinsicModifierName  (line 43, @0x0000000002dd46e0, libserver.so)
// strings: "modifier_item_orchid_malevolence"
const char *__fastcall CDOTA_Item_OrchidMalevolence::GetIntrinsicModifierName(CDOTA_Item_OrchidMalevolence *const this)
{
  return "modifier_item_orchid_malevolence";
}


// CDOTA_Item_OrchidMalevolence::OnSpellStart  (line 55, @0x0000000002dd1e70, libserver.so)  // inlines: InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "CDOTA_Item_OrchidMalevolence::OnSpellStart", "silence_duration", "silence_damage_percent", "modifier_orchid_malevolence_debuff", "DOTA_Item.Orchid.Activate"
void __fastcall CDOTA_Item_OrchidMalevolence::OnSpellStart(CDOTA_Item_OrchidMalevolence *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  float v5; // xmm1_4
  float v6; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      KeyValues::KeyValues(&kv, "CDOTA_Item_OrchidMalevolence::OnSpellStart");
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "silence_duration", -1, 0);
      KeyValues::SetFloat(&kv, "duration", v5);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "silence_damage_percent", -1, 0);
      KeyValues::SetFloat(&kv, "silence_damage_percent", v6);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_orchid_malevolence_debuff", &kv, 0);
      DOTA_EmitSound(10, "DOTA_Item.Orchid.Activate", v3);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_Item_OrchidMalevolence::~CDOTA_Modifier_Item_OrchidMalevolence  (line 76, @0x0000000002dd6520, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_OrchidMalevolence::~CDOTA_Modifier_Item_OrchidMalevolence(
        CDOTA_Modifier_Item_OrchidMalevolence *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_OrchidMalevolence::~CDOTA_Modifier_Item_OrchidMalevolence  (line 76, @0x0000000002dd6540, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_OrchidMalevolence
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_OrchidMalevolence::~CDOTA_Modifier_Item_OrchidMalevolence(
        CDOTA_Modifier_Item_OrchidMalevolence *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_OrchidMalevolence::OnCreated  (line 101, @0x0000000002dd14a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_intellect", "bonus_mana_regen"
void __fastcall CDOTA_Modifier_Item_OrchidMalevolence::OnCreated(
        CDOTA_Modifier_Item_OrchidMalevolence *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_intellect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_intellect", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_intellect = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_mana_regen", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->bonus_damage = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_mana_regen = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_damage", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_attack_speed", -1, 0);
    return;
  }
LABEL_9:
  this->bonus_attack_speed = 0;
}


// CDOTA_Modifier_Item_OrchidMalevolence::DeclareFunctions  (line 112, @0x0000000002dc7390, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_OrchidMalevolence::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_OrchidMalevolence::GetModifierPercentageManaRegen(CModifierParams const&), CDOTA_Modifier_Item_OrchidMalevolence::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_OrchidMalevolence::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_OrchidMalevolence::DeclareFunctions(
        CDOTA_Modifier_Item_OrchidMalevolence *const this)
{
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_OrchidMalevolence::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[54].__delta = 0;
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_OrchidMalevolence::GetModifierPercentageManaRegen;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_OrchidMalevolence::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_OrchidMalevolence::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Item_OrchidMalevolence::GetModifierBonusStats_Intellect  (line 122, @0x0000000002dc7400, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_OrchidMalevolence::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_OrchidMalevolence *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_OrchidMalevolence::GetModifierPercentageManaRegen  (line 129, @0x0000000002dc7420, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_OrchidMalevolence::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_OrchidMalevolence *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_OrchidMalevolence::GetModifierPreAttack_BonusDamage  (line 136, @0x0000000002dc7440, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_OrchidMalevolence::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_OrchidMalevolence *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_OrchidMalevolence::GetModifierAttackSpeedBonus_Constant  (line 143, @0x0000000002dc7460, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_OrchidMalevolence::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_OrchidMalevolence *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_OrchidMalevolence_Debuff::~CDOTA_Modifier_OrchidMalevolence_Debuff  (line 152, @0x0000000002dd6930, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_OrchidMalevolence_Debuff::~CDOTA_Modifier_OrchidMalevolence_Debuff(
        CDOTA_Modifier_OrchidMalevolence_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4736ED0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_OrchidMalevolence_Debuff::~CDOTA_Modifier_OrchidMalevolence_Debuff  (line 152, @0x0000000002dd6950, libserver.so)  // inlines: ~CDOTA_Modifier_OrchidMalevolence_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_OrchidMalevolence_Debuff::~CDOTA_Modifier_OrchidMalevolence_Debuff(
        CDOTA_Modifier_OrchidMalevolence_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4736ED0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_OrchidMalevolence_Debuff::IsDebuff  (line 169, @0x0000000002dd46f0, libserver.so)
bool __fastcall CDOTA_Modifier_OrchidMalevolence_Debuff::IsDebuff(CDOTA_Modifier_OrchidMalevolence_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_OrchidMalevolence_Debuff::OnCreated  (line 182, @0x0000000002dd23e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: KeyValues::GetFloat, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "silence_damage_percent", "silence_duration"
void __fastcall CDOTA_Modifier_OrchidMalevolence_Debuff::OnCreated(
        CDOTA_Modifier_OrchidMalevolence_Debuff *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float Float; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  float v6; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  float v8; // xmm1_4

  Float = KeyValues::GetFloat(pKV, "silence_damage_percent", v2);
  this->m_flDamageTaken = 0.0;
  this->silence_damage_percent = Float;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "silence_duration", -1, 0);
    this->silence_duration = LevelSpecialValue;
    CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v8);
  }
  else
  {
    this->silence_duration = 0.0;
    CDOTA_Buff::StartIntervalThink(this, 0.0, v6);
  }
}


// CDOTA_Modifier_OrchidMalevolence_Debuff::OnRefresh  (line 198, @0x0000000002dd2370, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "silence_duration"
void __fastcall CDOTA_Modifier_OrchidMalevolence_Debuff::OnRefresh(
        CDOTA_Modifier_OrchidMalevolence_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "silence_duration", -1, 0);
    this->silence_duration = LevelSpecialValue;
    CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v6);
  }
  else
  {
    this->silence_duration = 0.0;
    CDOTA_Buff::StartIntervalThink(this, 0.0, v4);
  }
}


// CDOTA_Modifier_OrchidMalevolence_Debuff::OnIntervalThink  (line 206, @0x0000000002dc7b70, libserver.so)  // inlines: Vector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl
// strings: "particles/items2_fx/orchid_pop.vpcf"
void __fastcall CDOTA_Modifier_OrchidMalevolence_Debuff::OnIntervalThink(
        CDOTA_Modifier_OrchidMalevolence_Debuff *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  float flDamage; // [rsp+Ch] [rbp-34h]
  double v16; // [rsp+10h] [rbp-30h]
  double v17; // [rsp+10h] [rbp-30h]
  float m_flDamageTaken; // [rsp+18h] [rbp-28h]
  float v19; // [rsp+18h] [rbp-28h]

  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
  {
    v3 = CDOTA_Buff::GetParent(this);
    if ( CBaseEntity::GetHealth(v3) > 0 && this->m_flDamageTaken > 0.0 )
    {
      flDamage = this->m_flDamageTaken;
      Ability = CDOTA_Buff::GetAbility(this);
      v5 = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      ApplyDamage(Caster, v5, Ability, flDamage, 2, 0);
      v7 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/items2_fx/orchid_pop.vpcf",
                   1,
                   v7,
                   0,
                   0);
      v10 = CDOTA_Buff::GetParent(this);
      v11 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v11, Particle, 0, v10, 0, 0, vec3_invalid, 1);
      m_flDamageTaken = this->m_flDamageTaken;
      *&v16 = 0.5 * m_flDamageTaken;
      *(&v16 + 1) = 0.25 * m_flDamageTaken;
      v12 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v12, Particle, 1, v16, m_flDamageTaken);
      v13 = CDOTA_Buff::GetParent(this);
      if ( (*(v13->_vptr_IHandleEntity + 408))(v13) != 0 )
      {
        v17 = 0.0;
        v19 = 0.0;
      }
      else
      {
        v17 = 0.007812501848093234;
        v19 = 1.0;
      }
      v14 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v14, Particle, 2, v17, v19);
    }
  }
}


// CDOTA_Modifier_OrchidMalevolence_Debuff::DeclareFunctions  (line 229, @0x0000000002dc7480, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_OrchidMalevolence_Debuff::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_OrchidMalevolence_Debuff::DeclareFunctions(
        CDOTA_Modifier_OrchidMalevolence_Debuff *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_OrchidMalevolence_Debuff::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_OrchidMalevolence_Debuff::OnTakeDamage  (line 236, @0x0000000002dc9b30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_OrchidMalevolence_Debuff::OnTakeDamage(
        CDOTA_Modifier_OrchidMalevolence_Debuff *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hunit.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
    this->m_flDamageTaken = ((this->silence_damage_percent / 100.0) * params->fDamage) + this->m_flDamageTaken;
  return 1uLL;
}


// CDOTA_Modifier_OrchidMalevolence_Debuff::CheckState  (line 254, @0x0000000002dc74a0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_OrchidMalevolence_Debuff::CheckState(
        CDOTA_Modifier_OrchidMalevolence_Debuff *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 8uLL;
  buffState->m_nDisabledStateMask &= ~8uLL;
}


