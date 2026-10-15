// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_echo_sabre.cpp:26
class CDOTA_Item_Recipe_EchoSabre : public CDOTA_Item {
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
	CDOTA_Item_Recipe_EchoSabre(CDOTA_Item_Recipe_EchoSabre &);
	CDOTA_Item_Recipe_EchoSabre(CDOTA_Item_Recipe_EchoSabre &);
	CDOTA_Item_Recipe_EchoSabre();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_EchoSabre();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_echo_sabre.cpp:37
class CDOTA_Item_EchoSabre : public CDOTA_Item {
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
	CDOTA_Item_EchoSabre(CDOTA_Item_EchoSabre &);
	CDOTA_Item_EchoSabre(CDOTA_Item_EchoSabre &);
	CDOTA_Item_EchoSabre();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_EchoSabre();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_echo_sabre.cpp:49
class CDOTA_Modifier_Item_EchoSabre : public CDOTA_Buff_Item {
public:

private:

	int bonus_intellect;  // +0xba8
	int bonus_attack_speed;  // +0xbac
	int bonus_damage;  // +0xbb0
	int bonus_mana_regen;  // +0xbb4
	int proc_damage;  // +0xbb8
	int bonus_strength;  // +0xbbc
	float slow_duration;  // +0xbc0
	bool bonus_speed;  // +0xbc4
	CDOTA_Modifier_Item_EchoSabre();
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Magical(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_EchoSabre();

	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3016
};

// src/game/shared/dota/items/dota_item_echo_sabre.cpp:204
class CDOTA_Modifier_EchoSabre_Debuff : public CDOTA_Buff {
public:

private:

	int movement_slow;  // +0xba8
	int attack_speed_slow;  // +0xbac
	CDOTA_Modifier_EchoSabre_Debuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual bool IsDebuff();
	virtual ~CDOTA_Modifier_EchoSabre_Debuff();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[12] IsDebuff
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_EchoSabre::~CDOTA_Item_Recipe_EchoSabre  (line 26, @0x0000000002da1a40, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_EchoSabre::~CDOTA_Item_Recipe_EchoSabre(CDOTA_Item_Recipe_EchoSabre *const this)
{
  this->_vptr_IHandleEntity = &off_46DAA90;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_EchoSabre::~CDOTA_Item_Recipe_EchoSabre  (line 26, @0x0000000002da1a60, libserver.so)  // inlines: ~CDOTA_Item_Recipe_EchoSabre
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_EchoSabre::~CDOTA_Item_Recipe_EchoSabre(CDOTA_Item_Recipe_EchoSabre *const this)
{
  this->_vptr_IHandleEntity = &off_46DAA90;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_EchoSabre::Schema_DynamicBinding  (line 28, @0x0000000002d9e980, libserver.so)
// globals: CDOTA_Item_Recipe_EchoSabre::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_EchoSabre::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_EchoSabre *const this)
{
  return CDOTA_Item_Recipe_EchoSabre::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d9e990, libserver.so)
// globals: CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d9e9a0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_EchoSabre>
void __fastcall CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d9e9c0, libserver.so)
void __fastcall CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d9e9e0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d9e9f0, libserver.so)
// globals: CDOTA_Item_Recipe_EchoSabre::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_EchoSabre::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002da0430, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002da1490, libserver.so)  // inlines: CDOTA_Item_Recipe_EchoSabre, Construct<CDOTA_Item_Recipe_EchoSabre>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46DAA90;
  }
  return p;
}


// CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da39a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da39c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal  (line 28, @0x0000000002da6900, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_recipe_echo_sabre", "CDOTA_Item_Recipe_EchoSabre"
// globals: `guard variable for'CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass, CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass, __dso_handle, CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClassInfo, CDOTA_Item_Recipe_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass);
    CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass._vptr_CEntityClass = off_46DAA10;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_EchoSabre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_EchoSabreClass != 0 )
    return &CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass;
  if ( `guard variable for'CDOTA_Item_Recipe_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClassInfo,
      "CDOTA_Item_Recipe_EchoSabre",
      "item_recipe_echo_sabre",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClassInfo);
  }
  CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass.m_pClassInfo = &CDOTA_Item_Recipe_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClassInfo;
  CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass.m_pBaseClassInfo = CDOTA_Item_Recipe_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_EchoSabreClass = &CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass;
  CDOTA_Item_Recipe_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClassInfo.m_pClass = &CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass;
  CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_EchoSabreClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_EchoSabreClass;
}


// CDOTA_Item_EchoSabre::~CDOTA_Item_EchoSabre  (line 37, @0x0000000002da1a90, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_EchoSabre::~CDOTA_Item_EchoSabre(CDOTA_Item_EchoSabre *const this)
{
  this->_vptr_IHandleEntity = &off_46DB690;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_EchoSabre::~CDOTA_Item_EchoSabre  (line 37, @0x0000000002da1ab0, libserver.so)  // inlines: ~CDOTA_Item_EchoSabre
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_EchoSabre::~CDOTA_Item_EchoSabre(CDOTA_Item_EchoSabre *const this)
{
  this->_vptr_IHandleEntity = &off_46DB690;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_EchoSabre::Schema_DynamicBinding  (line 39, @0x0000000002d9ea00, libserver.so)
// globals: CDOTA_Item_EchoSabre::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_EchoSabre::Schema_DynamicBinding(
        const CDOTA_Item_EchoSabre *const this)
{
  return CDOTA_Item_EchoSabre::s_pSchemaBinding;
}


// CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002d9ea10, libserver.so)
// globals: CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_EchoSabre::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002d9ea20, libserver.so)  // inlines: Destruct<CDOTA_Item_EchoSabre>
void __fastcall CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_EchoSabre::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002d9ea40, libserver.so)
void __fastcall CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_EchoSabre::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002d9ea60, libserver.so)
bool __fastcall CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_EchoSabre::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002d9ea70, libserver.so)
// globals: CDOTA_Item_EchoSabre::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_EchoSabre::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_EchoSabre::s_pSchemaBinding;
}


// CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002da0470, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_EchoSabre::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002da14c0, libserver.so)  // inlines: CDOTA_Item_EchoSabre, Construct<CDOTA_Item_EchoSabre>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_EchoSabre::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46DB690;
  }
  return p;
}


// CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002da39f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_EchoSabre::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002da3a10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_EchoSabre::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_EchoSabre::GetEntityClassInternal  (line 39, @0x0000000002da6a50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "CDOTA_Item_EchoSabre"
// globals: `guard variable for'CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass, CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass, __dso_handle, CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EchoSabreClassInfo, CDOTA_Item_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EchoSabreClassInfo
CEntityClass *__cdecl CDOTA_Item_EchoSabre::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass);
    CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass._vptr_CEntityClass = off_46DB610;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass);
    __cxa_atexit(
      CDOTA_Item_EchoSabre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_EchoSabreClass != 0 )
    return &CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass;
  if ( `guard variable for'CDOTA_Item_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EchoSabreClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EchoSabreClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EchoSabreClassInfo,
      "CDOTA_Item_EchoSabre",
      "item_echo_sabre",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EchoSabreClassInfo);
  }
  CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass.m_pClassInfo = &CDOTA_Item_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EchoSabreClassInfo;
  CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass.m_pBaseClassInfo = CDOTA_Item_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EchoSabreClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_EchoSabreClass = &CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass;
  CDOTA_Item_EchoSabre::GetEntityClassInfo(void)::g_EntityCDOTA_Item_EchoSabreClassInfo.m_pClass = &CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass;
  CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_EchoSabreClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_EchoSabre::GetEntityClassInternal(void)::g_EntityCDOTA_Item_EchoSabreClass;
}


// CDOTA_Item_EchoSabre::GetIntrinsicModifierName  (line 41, @0x0000000002d9ea80, libserver.so)
// strings: "modifier_item_echo_sabre"
const char *__fastcall CDOTA_Item_EchoSabre::GetIntrinsicModifierName(CDOTA_Item_EchoSabre *const this)
{
  return "modifier_item_echo_sabre";
}


// CDOTA_Modifier_Item_EchoSabre::~CDOTA_Modifier_Item_EchoSabre  (line 49, @0x0000000002da1000, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_EchoSabre::~CDOTA_Modifier_Item_EchoSabre(
        CDOTA_Modifier_Item_EchoSabre *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_EchoSabre::~CDOTA_Modifier_Item_EchoSabre  (line 49, @0x0000000002da1020, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_EchoSabre
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_EchoSabre::~CDOTA_Modifier_Item_EchoSabre(
        CDOTA_Modifier_Item_EchoSabre *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_EchoSabre::DeclareFunctions  (line 83, @0x0000000002d93b00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_EchoSabre::OnAttack(CModifierParams const&), CDOTA_Modifier_Item_EchoSabre::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_EchoSabre::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_EchoSabre::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_EchoSabre::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_EchoSabre::GetModifierPercentageManaRegen(CModifierParams const&), CDOTA_Modifier_Item_EchoSabre::GetModifierProcAttack_BonusDamage_Magical(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_EchoSabre::DeclareFunctions(CDOTA_Modifier_Item_EchoSabre *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Item_EchoSabre::OnAttack;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Item_EchoSabre::OnAttack;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_EchoSabre::GetModifierBonusStats_Intellect;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_EchoSabre::GetModifierBonusStats_Strength;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_EchoSabre::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_EchoSabre::GetModifierPreAttack_BonusDamage;
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_EchoSabre::GetModifierPercentageManaRegen;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[54].__delta = 0;
  this->m_Functions[5].__pfn = CDOTA_Modifier_Item_EchoSabre::GetModifierProcAttack_BonusDamage_Magical;
  this->m_Functions[5].__delta = 0;
}


// CDOTA_Modifier_Item_EchoSabre::CheckState  (line 96, @0x0000000002d95620, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent
void __fastcall CDOTA_Modifier_Item_EchoSabre::CheckState(
        CDOTA_Modifier_Item_EchoSabre *const this,
        CDOTABuffState *const buffState)
{
  CDOTABaseAbility *Ability; // rax

  if ( !this->bonus_speed && CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 )
      CDOTA_Buff::GetParent(this);
  }
}


// CDOTA_Modifier_Item_EchoSabre::GetModifierProcAttack_BonusDamage_Magical  (line 106, @0x0000000002d970e0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_echo_sabre_debuff"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_EchoSabre::GetModifierProcAttack_BonusDamage_Magical(
        CDOTA_Modifier_Item_EchoSabre *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rdi
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v12; // r12
  int (**vptr_IHandleEntity)(...); // rax
  float v14; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Parent; // rax
  __m128i v17; // xmm1
  CDOTABaseAbility *v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-48h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-28h]
  ModifierVariant_t result; // 0:rax.16

  v21 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->htarget.m_Index;
  if ( v7 + 2 > 1
    && (m_Index_low = LOWORD(params->htarget.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
    && (v10 = &v9[m_Index_low & 0x1FF]) != 0
    && v7 == v10->m_EHandle.m_Index
    && (v12 = v10->m_pInstance, v10->m_pInstance != 0)
    && BYTE3(v12[7]._vptr_IHandleEntity) != 0
    && m_pInstance != 0
    && (vptr_IHandleEntity = v12[58]._vptr_IHandleEntity, (BYTE1(vptr_IHandleEntity) & 2) == 0)
    && LOBYTE(v12[71]._vptr_IHandleEntity) == 0
    && (BYTE1(vptr_IHandleEntity) & 1) == 0
    && (v12[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
    && (this->bonus_speed
     || (v18 = CDOTA_Buff::GetAbility(this), (*(v18->_vptr_IHandleEntity + 245))(v18) != 0)
     && (CDOTA_Buff::GetParent(this)->m_iAttackCapabilities.m_Value & 2) == 0) )
  {
    KeyValues::KeyValues(&kv, "modifier_echo_sabre_debuff");
    KeyValues::SetFloat(&kv, "duration", v14);
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::AddNewModifier(v12, Parent, Ability, "modifier_echo_sabre_debuff", &kv, 0);
    *v17.m128i_i32 = this->proc_damage;
    v19 = (_mm_cvtsi128_si32(v17) << 32) | 1;
    KeyValues::~KeyValues(&kv);
    *&result.m_eType = v19;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Item_EchoSabre::OnAttack  (line 129, @0x0000000002d97680, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff::GetAbility
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_EchoSabre::OnAttack(
        CDOTA_Modifier_Item_EchoSabre *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *v12; // r13
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // r14
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v21; // rax

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hattacker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          if ( this->bonus_speed )
            this->bonus_speed = 0;
          v9 = params->hattacker.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
            || (v11 = &v10[params->hattacker.m_Index & 0x1FF]) == 0
            || v9 != v11->m_EHandle.m_Index
            || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
            || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
          {
            v12 = 0;
          }
          v13 = params->htarget.m_Index;
          if ( v13 + 2 <= 1
            || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
            || (v15 = &v14[params->htarget.m_Index & 0x1FF]) == 0
            || v13 != v15->m_EHandle.m_Index
            || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
            || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
          {
            v16 = 0;
          }
          iRecord = params->iRecord;
          AttackRecordsManager = GetAttackRecordsManager();
          RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
          if ( (RecordByIndex == 0 || !RecordByIndex->m_bFakeAttack && !RecordByIndex->m_bTriggeredAttack)
            && v12 != 0
            && LOBYTE(v12[71].m_pEntity) == 0
            && v16 != 0
            && (*(&v12[50].m_worldGroupId + 1) & 2) == 0 )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 )
            {
              this->bonus_speed = 1;
              v21 = CDOTA_Buff::GetAbility(this);
              (*(v21->_vptr_IHandleEntity + 241))(v21, -1.0);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_EchoSabre::GetModifierBonusStats_Intellect  (line 157, @0x0000000002d93bd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_EchoSabre::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_EchoSabre *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_EchoSabre::GetModifierBonusStats_Strength  (line 162, @0x0000000002d93bf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_EchoSabre::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_EchoSabre *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_EchoSabre::GetModifierPreAttack_BonusDamage  (line 167, @0x0000000002d93c10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_EchoSabre::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_EchoSabre *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_EchoSabre::GetModifierPercentageManaRegen  (line 172, @0x0000000002d93c30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_EchoSabre::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_EchoSabre *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_EchoSabre::GetModifierAttackSpeedBonus_Constant  (line 177, @0x0000000002d95670, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_EchoSabre::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_EchoSabre *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( !this->bonus_speed
    || (result.m_szVal = CDOTA_Buff::GetParent(this),
        *&result.m_eType = 0x43FA000000000001LL,
        (result.m_szVal[2436] & 2) != 0) )
  {
    *v2.m128i_i32 = this->bonus_attack_speed;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  else
  {
    result.m_szVal = 0;
  }
  return result;
}


// CDOTA_Modifier_Item_EchoSabre::OnCreated  (line 187, @0x0000000002d9d000, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_intellect", "bonus_mana_regen", "proc_damage"
void __fastcall CDOTA_Modifier_Item_EchoSabre::OnCreated(CDOTA_Modifier_Item_EchoSabre *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax

  this->bonus_speed = 0;
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
      this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_strength", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->bonus_strength = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_attack_speed", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->bonus_attack_speed = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_damage", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_12:
  this->bonus_damage = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->bonus_mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "bonus_mana_regen", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->proc_damage = 0;
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
    goto LABEL_15;
  }
LABEL_13:
  this->bonus_mana_regen = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->proc_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "proc_damage", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_8:
    this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "slow_duration", -1, 0);
    return;
  }
LABEL_15:
  this->slow_duration = 0.0;
}


// CDOTA_Modifier_EchoSabre_Debuff::~CDOTA_Modifier_EchoSabre_Debuff  (line 204, @0x0000000002da1390, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EchoSabre_Debuff::~CDOTA_Modifier_EchoSabre_Debuff(
        CDOTA_Modifier_EchoSabre_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_46DC570;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EchoSabre_Debuff::~CDOTA_Modifier_EchoSabre_Debuff  (line 204, @0x0000000002da13b0, libserver.so)  // inlines: ~CDOTA_Modifier_EchoSabre_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EchoSabre_Debuff::~CDOTA_Modifier_EchoSabre_Debuff(
        CDOTA_Modifier_EchoSabre_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_46DC570;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EchoSabre_Debuff::IsDebuff  (line 216, @0x0000000002d9ea90, libserver.so)
bool __fastcall CDOTA_Modifier_EchoSabre_Debuff::IsDebuff(CDOTA_Modifier_EchoSabre_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_EchoSabre_Debuff::OnCreated  (line 228, @0x0000000002d9c770, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "attack_speed_slow"
void __fastcall CDOTA_Modifier_EchoSabre_Debuff::OnCreated(CDOTA_Modifier_EchoSabre_Debuff *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movement_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_slow", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->attack_speed_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attack_speed_slow", -1, 0);
      return;
    }
  }
  else
  {
    this->movement_slow = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->attack_speed_slow = 0;
}


// CDOTA_Modifier_EchoSabre_Debuff::DeclareFunctions  (line 236, @0x0000000002d93c50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_EchoSabre_Debuff::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_EchoSabre_Debuff::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_EchoSabre_Debuff::DeclareFunctions(CDOTA_Modifier_EchoSabre_Debuff *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_EchoSabre_Debuff::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_EchoSabre_Debuff::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_EchoSabre_Debuff::GetModifierMoveSpeedBonus_Percentage  (line 244, @0x0000000002d93c90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_EchoSabre_Debuff::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_EchoSabre_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->movement_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_EchoSabre_Debuff::GetModifierAttackSpeedBonus_Constant  (line 251, @0x0000000002d93cb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_EchoSabre_Debuff::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_EchoSabre_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->attack_speed_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


