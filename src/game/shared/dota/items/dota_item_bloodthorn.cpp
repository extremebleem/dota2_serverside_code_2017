// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_bloodthorn.cpp:27
class CDOTA_Item_Recipe_Bloodthorn : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Bloodthorn(CDOTA_Item_Recipe_Bloodthorn &);
	CDOTA_Item_Recipe_Bloodthorn(CDOTA_Item_Recipe_Bloodthorn &);
	CDOTA_Item_Recipe_Bloodthorn();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Bloodthorn();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_bloodthorn.cpp:39
class CDOTA_Item_Bloodthorn : public CDOTA_Item {
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
	CDOTA_Item_Bloodthorn(CDOTA_Item_Bloodthorn &);
	CDOTA_Item_Bloodthorn(CDOTA_Item_Bloodthorn &);
	CDOTA_Item_Bloodthorn();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Bloodthorn();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_bloodthorn.cpp:75
class CDOTA_Modifier_Item_Bloodthorn : public CDOTA_Buff_Item {
public:

private:

	int bonus_intellect;  // +0xba8
	int bonus_mana_regen;  // +0xbac
	int bonus_damage;  // +0xbb0
	int bonus_attack_speed;  // +0xbb4
	int crit_chance;  // +0xbb8
	int crit_multiplier;  // +0xbbc
	CDOTA_Modifier_Item_Bloodthorn();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Bloodthorn();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/items/dota_item_bloodthorn.cpp:173
class CDOTA_Modifier_Bloodthorn_Debuff : public CDOTA_Buff {
public:

private:

	float target_crit_multiplier;  // +0xba8
	float silence_damage_percent;  // +0xbac
	float m_flDamageTaken;  // +0xbb0
	float silence_duration;  // +0xbb4
	CDOTA_Modifier_Bloodthorn_Debuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsDebuff();
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_Target_CriticalStrike(const CModifierParams &);
	virtual ~CDOTA_Modifier_Bloodthorn_Debuff();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[12] IsDebuff
	// sizeof = 3024
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Bloodthorn::~CDOTA_Item_Recipe_Bloodthorn  (line 27, @0x0000000002d64990, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Bloodthorn::~CDOTA_Item_Recipe_Bloodthorn(CDOTA_Item_Recipe_Bloodthorn *const this)
{
  this->_vptr_IHandleEntity = &off_469CF50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Bloodthorn::~CDOTA_Item_Recipe_Bloodthorn  (line 27, @0x0000000002d649b0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Bloodthorn
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Bloodthorn::~CDOTA_Item_Recipe_Bloodthorn(CDOTA_Item_Recipe_Bloodthorn *const this)
{
  this->_vptr_IHandleEntity = &off_469CF50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Bloodthorn::Schema_DynamicBinding  (line 29, @0x0000000002d614a0, libserver.so)
// globals: CDOTA_Item_Recipe_Bloodthorn::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Bloodthorn::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Bloodthorn *const this)
{
  return CDOTA_Item_Recipe_Bloodthorn::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002d614b0, libserver.so)
// globals: CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002d614c0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Bloodthorn>
void __fastcall CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002d614e0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002d61500, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002d61510, libserver.so)
// globals: CDOTA_Item_Recipe_Bloodthorn::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Bloodthorn::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002d628f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002d63990, libserver.so)  // inlines: CDOTA_Item_Recipe_Bloodthorn, Construct<CDOTA_Item_Recipe_Bloodthorn>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_469CF50;
  }
  return p;
}


// CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d668b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d668d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal  (line 29, @0x0000000002d6daa0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_recipe_bloodthorn", "CDOTA_Item_Recipe_Bloodthorn"
// globals: `guard variable for'CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass, CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass, __dso_handle, CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodthornClassInfo, CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodthornClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass);
    CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass._vptr_CEntityClass = off_469CED0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Bloodthorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_BloodthornClass != 0 )
    return &CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodthornClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodthornClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodthornClassInfo,
      "CDOTA_Item_Recipe_Bloodthorn",
      "item_recipe_bloodthorn",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodthornClassInfo);
  }
  CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass.m_pClassInfo = &CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodthornClassInfo;
  CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodthornClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_BloodthornClass = &CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass;
  CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodthornClassInfo.m_pClass = &CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass;
  CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_BloodthornClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodthornClass;
}


// CDOTA_Item_Bloodthorn::~CDOTA_Item_Bloodthorn  (line 39, @0x0000000002d649e0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Bloodthorn::~CDOTA_Item_Bloodthorn(CDOTA_Item_Bloodthorn *const this)
{
  this->_vptr_IHandleEntity = &off_469DB50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Bloodthorn::~CDOTA_Item_Bloodthorn  (line 39, @0x0000000002d64a00, libserver.so)  // inlines: ~CDOTA_Item_Bloodthorn
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Bloodthorn::~CDOTA_Item_Bloodthorn(CDOTA_Item_Bloodthorn *const this)
{
  this->_vptr_IHandleEntity = &off_469DB50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Bloodthorn::Schema_DynamicBinding  (line 41, @0x0000000002d61520, libserver.so)
// globals: CDOTA_Item_Bloodthorn::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Bloodthorn::Schema_DynamicBinding(
        const CDOTA_Item_Bloodthorn *const this)
{
  return CDOTA_Item_Bloodthorn::s_pSchemaBinding;
}


// CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002d61530, libserver.so)
// globals: CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002d61540, libserver.so)  // inlines: Destruct<CDOTA_Item_Bloodthorn>
void __fastcall CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002d61560, libserver.so)
void __fastcall CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002d61580, libserver.so)
bool __fastcall CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002d61590, libserver.so)
// globals: CDOTA_Item_Bloodthorn::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Bloodthorn::s_pSchemaBinding;
}


// CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002d62930, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002d639c0, libserver.so)  // inlines: CDOTA_Item_Bloodthorn, Construct<CDOTA_Item_Bloodthorn>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_469DB50;
  }
  return p;
}


// CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d66900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d66920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Bloodthorn::GetEntityClassInternal  (line 41, @0x0000000002d6dbf0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_Bloodthorn"
// globals: `guard variable for'CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass, CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass, __dso_handle, CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodthornClassInfo, CDOTA_Item_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodthornClassInfo
CEntityClass *__cdecl CDOTA_Item_Bloodthorn::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass);
    CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass._vptr_CEntityClass = off_469DAD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass);
    __cxa_atexit(
      CDOTA_Item_Bloodthorn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BloodthornClass != 0 )
    return &CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass;
  if ( `guard variable for'CDOTA_Item_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodthornClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodthornClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodthornClassInfo,
      "CDOTA_Item_Bloodthorn",
      "item_bloodthorn",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodthornClassInfo);
  }
  CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass.m_pClassInfo = &CDOTA_Item_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodthornClassInfo;
  CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass.m_pBaseClassInfo = CDOTA_Item_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodthornClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BloodthornClass = &CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass;
  CDOTA_Item_Bloodthorn::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodthornClassInfo.m_pClass = &CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass;
  CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BloodthornClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Bloodthorn::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodthornClass;
}


// CDOTA_Item_Bloodthorn::GetIntrinsicModifierName  (line 43, @0x0000000002d615a0, libserver.so)
// strings: "modifier_item_bloodthorn"
const char *__fastcall CDOTA_Item_Bloodthorn::GetIntrinsicModifierName(CDOTA_Item_Bloodthorn *const this)
{
  return "modifier_item_bloodthorn";
}


// CDOTA_Item_Bloodthorn::OnSpellStart  (line 55, @0x0000000002d5ce60, libserver.so)  // inlines: InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "CDOTA_Item_Bloodthorn::OnSpellStart", "silence_duration", "modifier_bloodthorn_debuff", "DOTA_Item.Bloodthorn.Activate"
void __fastcall CDOTA_Item_Bloodthorn::OnSpellStart(CDOTA_Item_Bloodthorn *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      KeyValues::KeyValues(&kv, "CDOTA_Item_Bloodthorn::OnSpellStart");
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "silence_duration", -1, 0);
      KeyValues::SetFloat(&kv, "duration", v5);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_bloodthorn_debuff", &kv, 0);
      DOTA_EmitSound(10, "DOTA_Item.Bloodthorn.Activate", v3);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_Item_Bloodthorn::~CDOTA_Modifier_Item_Bloodthorn  (line 75, @0x0000000002d62b20, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Bloodthorn::~CDOTA_Modifier_Item_Bloodthorn(
        CDOTA_Modifier_Item_Bloodthorn *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Bloodthorn::~CDOTA_Modifier_Item_Bloodthorn  (line 75, @0x0000000002d62b40, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Bloodthorn
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Bloodthorn::~CDOTA_Modifier_Item_Bloodthorn(
        CDOTA_Modifier_Item_Bloodthorn *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Bloodthorn::OnCreated  (line 103, @0x0000000002d5fad0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_intellect", "bonus_mana_regen"
void __fastcall CDOTA_Modifier_Item_Bloodthorn::OnCreated(CDOTA_Modifier_Item_Bloodthorn *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax

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
      goto LABEL_10;
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
    goto LABEL_11;
  }
LABEL_10:
  this->bonus_damage = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_attack_speed", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->crit_chance = 0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_13;
  }
LABEL_11:
  this->bonus_attack_speed = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "crit_chance", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->crit_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "crit_multiplier", -1, 0);
    return;
  }
LABEL_13:
  this->crit_multiplier = 0;
}


// CDOTA_Modifier_Item_Bloodthorn::DeclareFunctions  (line 116, @0x0000000002d54880, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Bloodthorn::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_Bloodthorn::GetModifierPercentageManaRegen(CModifierParams const&), CDOTA_Modifier_Item_Bloodthorn::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Bloodthorn::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_Bloodthorn::GetModifierPreAttack_CriticalStrike(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Bloodthorn::DeclareFunctions(CDOTA_Modifier_Item_Bloodthorn *const this)
{
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Bloodthorn::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[54].__delta = 0;
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_Bloodthorn::GetModifierPercentageManaRegen;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Bloodthorn::GetModifierPreAttack_BonusDamage;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Bloodthorn::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[83].__pfn = CDOTA_Modifier_Item_Bloodthorn::GetModifierPreAttack_CriticalStrike;
  this->m_Functions[83].__delta = 0;
}


// CDOTA_Modifier_Item_Bloodthorn::GetModifierBonusStats_Intellect  (line 127, @0x0000000002d54910, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodthorn::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Bloodthorn *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bloodthorn::GetModifierPercentageManaRegen  (line 134, @0x0000000002d54930, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodthorn::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_Bloodthorn *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bloodthorn::GetModifierPreAttack_BonusDamage  (line 141, @0x0000000002d54950, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodthorn::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Bloodthorn *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bloodthorn::GetModifierAttackSpeedBonus_Constant  (line 148, @0x0000000002d54970, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodthorn::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Bloodthorn *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bloodthorn::GetModifierPreAttack_CriticalStrike  (line 153, @0x0000000002d579d0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodthorn::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_Item_Bloodthorn *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax
  uint32 v7; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  CEntityInstance *v11; // rcx
  int m_Id; // edx
  CDOTA_BaseNPC *Parent; // rax
  __m128i v14; // xmm0
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 <= 1
    || (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v10 = &v9[m_Index_low & 0x1FF]) == 0
    || v7 != v10->m_EHandle.m_Index
    || (v11 = v10->m_pInstance) == 0
    || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
  {
    v11 = 0;
  }
  if ( m_pInstance == 0 )
    return 1uLL;
  m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 0x10) != 0 )
    return 1uLL;
  if ( (m_Id & 0x193) == 0 )
    return 1uLL;
  if ( v11 == 0 )
    return 1uLL;
  if ( HIBYTE(v11[7].m_CScriptComponent) == HIBYTE(m_pInstance[7].m_CScriptComponent) )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  if ( !RollPseudoRandomPercentage(this->crit_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_LESSERCRIT, Parent) )
    return 1uLL;
  *v14.m128i_i32 = this->crit_multiplier;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v14) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Bloodthorn_Debuff::~CDOTA_Modifier_Bloodthorn_Debuff  (line 173, @0x0000000002d65f10, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Bloodthorn_Debuff::~CDOTA_Modifier_Bloodthorn_Debuff(
        CDOTA_Modifier_Bloodthorn_Debuff *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_469EA30;
  this->m_vRecords.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_vRecords.m_Memory,
        CUtlMemory<short,int>::Purge(&this->m_vRecords.m_Memory),
        (this->m_vRecords.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<short,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Bloodthorn_Debuff::~CDOTA_Modifier_Bloodthorn_Debuff  (line 173, @0x0000000002d65f80, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Bloodthorn_Debuff, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Bloodthorn_Debuff::~CDOTA_Modifier_Bloodthorn_Debuff(
        CDOTA_Modifier_Bloodthorn_Debuff *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_469EA30;
  this->m_vRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_vRecords.m_Memory);
    if ( (this->m_vRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bloodthorn_Debuff::IsDebuff  (line 187, @0x0000000002d615b0, libserver.so)
bool __fastcall CDOTA_Modifier_Bloodthorn_Debuff::IsDebuff(CDOTA_Modifier_Bloodthorn_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Bloodthorn_Debuff::OnCreated  (line 208, @0x0000000002d5d110, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: KeyValues::GetFloat, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "silence_damage_percent", "target_crit_multiplier", "silence_duration"
void __fastcall CDOTA_Modifier_Bloodthorn_Debuff::OnCreated(
        CDOTA_Modifier_Bloodthorn_Debuff *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float Float; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm1_4

  Float = KeyValues::GetFloat(pKV, "silence_damage_percent", v2);
  this->m_flDamageTaken = 0.0;
  this->silence_damage_percent = Float;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->target_crit_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                     Ability,
                                     "target_crit_multiplier",
                                     -1,
                                     0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_3;
LABEL_7:
    this->silence_duration = 0.0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_4;
LABEL_8:
    this->silence_damage_percent = 0.0;
    goto LABEL_5;
  }
  this->target_crit_multiplier = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_7;
LABEL_3:
  this->silence_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "silence_duration", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_8;
LABEL_4:
  this->silence_damage_percent = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "silence_damage_percent", -1, 0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, this->silence_duration, v8);
}


// CDOTA_Modifier_Bloodthorn_Debuff::OnRefresh  (line 226, @0x0000000002d5d0a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "silence_duration"
void __fastcall CDOTA_Modifier_Bloodthorn_Debuff::OnRefresh(
        CDOTA_Modifier_Bloodthorn_Debuff *const this,
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


// CDOTA_Modifier_Bloodthorn_Debuff::OnIntervalThink  (line 234, @0x0000000002d551e0, libserver.so)  // inlines: Vector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl
// strings: "particles/items2_fx/orchid_pop.vpcf"
void __fastcall CDOTA_Modifier_Bloodthorn_Debuff::OnIntervalThink(CDOTA_Modifier_Bloodthorn_Debuff *const this)
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


// CDOTA_Modifier_Bloodthorn_Debuff::CheckState  (line 258, @0x0000000002d54990, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Bloodthorn_Debuff::CheckState(
        CDOTA_Modifier_Bloodthorn_Debuff *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 8uLL;
  buffState->m_nDisabledStateMask &= ~8uLL;
}


// CDOTA_Modifier_Bloodthorn_Debuff::DeclareFunctions  (line 267, @0x0000000002d549a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Bloodthorn_Debuff::OnAttack(CModifierParams const&), CDOTA_Modifier_Bloodthorn_Debuff::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Bloodthorn_Debuff::OnAttackFail(CModifierParams const&), CDOTA_Modifier_Bloodthorn_Debuff::GetModifierPreAttack_Target_CriticalStrike(CModifierParams const&), CDOTA_Modifier_Bloodthorn_Debuff::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Bloodthorn_Debuff::DeclareFunctions(CDOTA_Modifier_Bloodthorn_Debuff *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Bloodthorn_Debuff::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Bloodthorn_Debuff::OnAttackLanded;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Bloodthorn_Debuff::OnAttackFail;
  this->m_Functions[84].__pfn = CDOTA_Modifier_Bloodthorn_Debuff::GetModifierPreAttack_Target_CriticalStrike;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[84].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Bloodthorn_Debuff::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Bloodthorn_Debuff::GetModifierPreAttack_Target_CriticalStrike  (line 276, @0x0000000002d54a30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodthorn_Debuff::GetModifierPreAttack_Target_CriticalStrike(
        CDOTA_Modifier_Bloodthorn_Debuff *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->target_crit_multiplier) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Bloodthorn_Debuff::OnAttack  (line 283, @0x0000000002d5fc90, libserver.so)  // inlines: AddToTail, AttackerNPC, CopyConstruct<short int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CUtlMemory<short int, int>::Grow
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodthorn_Debuff::OnAttack(
        CDOTA_Modifier_Bloodthorn_Debuff *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // esi
  CEntityIdentity *v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // rcx
  CEntityIdentity *v11; // r8
  CDOTA_BaseNPC *v12; // rdx
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // rax
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  __int64 m_Size; // rbx
  int v22; // edx
  __int16 *v23; // rdx
  CDOTA_AttackRecord *pAttackRecord; // [rsp+8h] [rbp-18h]

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0 )
  {
    m_pInstance = 0;
    if ( Parent != 0 )
      return 1uLL;
    goto LABEL_8;
  }
  v7 = params->htarget.m_Index & 0x1FF;
  v8 = &v6[v7] == 0;
  v9 = &v6[v7];
  m_pInstance = 0;
  v11 = v9;
  v12 = 0;
  if ( !v8 && m_Index == v11->m_EHandle.m_Index )
  {
    m_pInstance = v11->m_pInstance;
    if ( v11->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
      v12 = v11->m_pInstance;
  }
  if ( Parent == v12 )
  {
LABEL_8:
    v14 = params->hattacker.m_Index;
    if ( v14 + 2 <= 1
      || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
      || (v16 = &v15[params->hattacker.m_Index & 0x1FF]) == 0
      || v14 != v16->m_EHandle.m_Index
      || (v17 = v16->m_pInstance, v16->m_pInstance == 0)
      || BYTE3(v17[7]._vptr_IHandleEntity) == 0 )
    {
      v17 = 0;
    }
    if ( m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && v17 != 0 )
    {
      iRecord = params->iRecord;
      AttackRecordsManager = GetAttackRecordsManager();
      RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
      if ( RecordByIndex != 0 )
      {
        RecordByIndex->m_iFailType = 6;
        m_Size = this->m_vRecords.m_Size;
        v22 = this->m_vRecords.m_Size;
        if ( m_Size == this->m_vRecords.m_Memory.m_nAllocationCount )
        {
          pAttackRecord = RecordByIndex;
          CUtlMemory<short,int>::Grow(&this->m_vRecords.m_Memory, 1);
          v22 = this->m_vRecords.m_Size;
          RecordByIndex = pAttackRecord;
        }
        this->m_vRecords.m_Size = v22 + 1;
        v23 = &this->m_vRecords.m_Memory.m_pMemory[m_Size];
        if ( v23 != 0 )
          *v23 = RecordByIndex->m_iRecord;
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Bloodthorn_Debuff::OnAttackLanded  (line 309, @0x0000000002d576f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl
// strings: "particles/items2_fx/orchid_pop.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodthorn_Debuff::OnAttackLanded(
        CDOTA_Modifier_Bloodthorn_Debuff *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CDOTA_BaseNPC *m_pInstance; // rdx
  CDOTA_BaseNPC *v10; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v12; // r12
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->htarget.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && Parent == m_pInstance )
        {
          v10 = CDOTA_Buff::GetParent(this);
          ParticleManager = GetParticleManager();
          LODWORD(v10) = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/items2_fx/orchid_pop.vpcf",
                           1,
                           v10,
                           0,
                           0);
          v12 = CDOTA_Buff::GetParent(this);
          v13 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v13, v10, 0, v12, 0, 0, vec3_invalid, 1);
          v14 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v14, v10, 1, 6.047315051904e12, 300.0);
          v15 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v15, v10, 2, 0.0, 0.0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Bloodthorn_Debuff::OnAttackFail  (line 332, @0x0000000002d57530, libserver.so)  // inlines: Element, FastRemove, Find, FindAndFastRemove, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, memcpy, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodthorn_Debuff::OnAttackFail(
        CDOTA_Modifier_Bloodthorn_Debuff *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  const char *v6; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  int m_Size; // ecx
  __int16 *m_pMemory; // rdi
  __int16 iRecord; // si
  int v13; // ecx
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->htarget.m_Index;
  v6 = Parent;
  if ( m_Index + 2 <= 1
    || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v8 = &v7[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v8->m_EHandle.m_Index
    || (result.m_szVal = v8->m_pInstance, v8->m_pInstance == 0)
    || *(result.m_szVal + 339) == 0 )
  {
    result.m_szVal = 0;
  }
  *&result.m_eType = 1;
  if ( v6 == result.m_szVal )
  {
    m_Size = this->m_vRecords.m_Size;
    if ( m_Size > 0 )
    {
      m_pMemory = this->m_vRecords.m_Memory.m_pMemory;
      iRecord = params->iRecord;
      if ( *m_pMemory == iRecord )
      {
        result.m_eType = ModifierVariant_t::VariantType_t::Variant_Null;
LABEL_18:
        v13 = m_Size - 1;
        if ( result.m_eType != v13 )
        {
          m_pMemory[result.m_eType] = m_pMemory[v13];
          v13 = this->m_vRecords.m_Size - 1;
        }
        this->m_vRecords.m_Size = v13;
      }
      else
      {
        result.m_szVal = (m_pMemory + 1);
        LOBYTE(result.m_eType) = 0;
        while ( ++result.m_eType != m_Size )
        {
          result.m_szVal += 2;
          if ( *(result.m_szVal - 1) == iRecord )
          {
            if ( result.m_eType != -1 )
              goto LABEL_18;
            return 1uLL;
          }
        }
      }
    }
    return 1uLL;
  }
  else
  {
    result.m_szVal = 0;
  }
  return result;
}


// CDOTA_Modifier_Bloodthorn_Debuff::OnTakeDamage  (line 346, @0x0000000002d57230, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodthorn_Debuff::OnTakeDamage(
        CDOTA_Modifier_Bloodthorn_Debuff *const this,
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


