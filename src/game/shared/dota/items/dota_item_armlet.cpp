// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_armlet.cpp:27
class CDOTA_Item_Recipe_Armlet : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Armlet(CDOTA_Item_Recipe_Armlet &);
	CDOTA_Item_Recipe_Armlet(CDOTA_Item_Recipe_Armlet &);
	CDOTA_Item_Recipe_Armlet();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Armlet();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_armlet.cpp:39
class CDOTA_Item_Armlet : public CDOTA_Item {
public:

private:

	float toggle_cooldown;  // +0x3e8
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
	CDOTA_Item_Armlet(CDOTA_Item_Armlet &);
	CDOTA_Item_Armlet(CDOTA_Item_Armlet &);
	CDOTA_Item_Armlet();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual float GetCooldown(int);
	virtual void OnToggle();
	virtual void OnUnequip();
	virtual void OnEquip();
	virtual ~CDOTA_Item_Armlet();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[242] GetCooldown
	// vtable[270] OnToggle
	// vtable[334] OnUnequip
	// vtable[333] OnEquip
	// sizeof = 1008
};

// src/game/shared/dota/items/dota_item_armlet.cpp:60
class C_CDOTA_Item_Armlet_MapInstall {
	C_CDOTA_Item_Armlet_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_armlet.cpp:142
class CDOTA_Modifier_Item_Armlet : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_attack_speed;  // +0xbac
	int bonus_armor;  // +0xbb0
	int bonus_health_regen;  // +0xbb4
	CDOTA_Modifier_Item_Armlet();
	virtual int GetAttributes();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Armlet();

	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_armlet.cpp:233
class CDOTA_Modifier_Armlet_UnholyStrength : public CDOTA_Buff {
public:

private:

	int unholy_bonus_damage;  // +0xba8
	int unholy_bonus_attack_speed;  // +0xbac
	int unholy_bonus_strength;  // +0xbb0
	int unholy_bonus_armor;  // +0xbb4
	int unholy_health_drain_per_tick;  // +0xbb8
	int str_tick_count;  // +0xbbc
	CDOTA_Modifier_Armlet_UnholyStrength();
	virtual void OnCreated(KeyValues *);
	virtual void OnRemoved();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Armlet_UnholyStrength();

	// vtable[57] OnCreated
	// vtable[59] OnRemoved
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[14] IsPurgable
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Armlet::~CDOTA_Item_Recipe_Armlet  (line 27, @0x0000000002d64440, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Armlet::~CDOTA_Item_Recipe_Armlet(CDOTA_Item_Recipe_Armlet *const this)
{
  this->_vptr_IHandleEntity = &off_468B250;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Armlet::~CDOTA_Item_Recipe_Armlet  (line 27, @0x0000000002d64460, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Armlet
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Armlet::~CDOTA_Item_Recipe_Armlet(CDOTA_Item_Recipe_Armlet *const this)
{
  this->_vptr_IHandleEntity = &off_468B250;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Armlet::Schema_DynamicBinding  (line 29, @0x0000000002d60a40, libserver.so)
// globals: CDOTA_Item_Recipe_Armlet::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Armlet::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Armlet *const this)
{
  return CDOTA_Item_Recipe_Armlet::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002d60a50, libserver.so)
// globals: CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002d60a60, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Armlet>
void __fastcall CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002d60a80, libserver.so)
void __fastcall CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002d60aa0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002d60ab0, libserver.so)
// globals: CDOTA_Item_Recipe_Armlet::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Armlet::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002d624b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002d63660, libserver.so)  // inlines: CDOTA_Item_Recipe_Armlet, Construct<CDOTA_Item_Recipe_Armlet>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_468B250;
  }
  return p;
}


// CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d66360, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d66380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Armlet::GetEntityClassInternal  (line 29, @0x0000000002d6b130, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_recipe_armlet", "CDOTA_Item_Recipe_Armlet"
// globals: `guard variable for'CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass, CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass, __dso_handle, CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ArmletClassInfo, CDOTA_Item_Recipe_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ArmletClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Armlet::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass);
    CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass._vptr_CEntityClass = off_468B1D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Armlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_ArmletClass != 0 )
    return &CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ArmletClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ArmletClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ArmletClassInfo,
      "CDOTA_Item_Recipe_Armlet",
      "item_recipe_armlet",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ArmletClassInfo);
  }
  CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass.m_pClassInfo = &CDOTA_Item_Recipe_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ArmletClassInfo;
  CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ArmletClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_ArmletClass = &CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass;
  CDOTA_Item_Recipe_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_ArmletClassInfo.m_pClass = &CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass;
  CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_ArmletClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_ArmletClass;
}


// CDOTA_Item_Armlet::~CDOTA_Item_Armlet  (line 39, @0x0000000002d64490, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Armlet::~CDOTA_Item_Armlet(CDOTA_Item_Armlet *const this)
{
  this->_vptr_IHandleEntity = &off_468BE50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Armlet::~CDOTA_Item_Armlet  (line 39, @0x0000000002d644b0, libserver.so)  // inlines: ~CDOTA_Item_Armlet
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Armlet::~CDOTA_Item_Armlet(CDOTA_Item_Armlet *const this)
{
  this->_vptr_IHandleEntity = &off_468BE50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Armlet::Schema_DynamicBinding  (line 41, @0x0000000002d60ac0, libserver.so)
// globals: CDOTA_Item_Armlet::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Armlet::Schema_DynamicBinding(const CDOTA_Item_Armlet *const this)
{
  return CDOTA_Item_Armlet::s_pSchemaBinding;
}


// CDOTA_Item_Armlet::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002d60ad0, libserver.so)
// globals: CDOTA_Item_Armlet::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Armlet::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Armlet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Armlet::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Armlet::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002d60ae0, libserver.so)  // inlines: Destruct<CDOTA_Item_Armlet>
void __fastcall CDOTA_Item_Armlet::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Armlet::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Armlet::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002d60b00, libserver.so)
void __fastcall CDOTA_Item_Armlet::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Armlet::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Armlet::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002d60b20, libserver.so)
bool __fastcall CDOTA_Item_Armlet::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Armlet::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Armlet::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002d60b30, libserver.so)
// globals: CDOTA_Item_Armlet::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Armlet::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Armlet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Armlet::s_pSchemaBinding;
}


// CDOTA_Item_Armlet::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002d624f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Armlet::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Armlet::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CDOTA_Item_Armlet::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002d63690, libserver.so)  // inlines: CDOTA_Item_Armlet, Construct<CDOTA_Item_Armlet>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Armlet::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Armlet::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_468BE50;
  }
  return p;
}


// CDOTA_Item_Armlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d663b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Armlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Armlet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Armlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d663d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Armlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Armlet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Armlet::GetEntityClassInternal  (line 41, @0x0000000002d6b280, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_Armlet"
// globals: `guard variable for'CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass, CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass, __dso_handle, CDOTA_Item_Armlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ArmletClassInfo, CDOTA_Item_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ArmletClassInfo
CEntityClass *__cdecl CDOTA_Item_Armlet::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass);
    CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass._vptr_CEntityClass = off_468BDD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass);
    __cxa_atexit(
      CDOTA_Item_Armlet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_ArmletClass != 0 )
    return &CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass;
  if ( `guard variable for'CDOTA_Item_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ArmletClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ArmletClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ArmletClassInfo,
      "CDOTA_Item_Armlet",
      "item_armlet",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ArmletClassInfo);
  }
  CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass.m_pClassInfo = &CDOTA_Item_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ArmletClassInfo;
  CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass.m_pBaseClassInfo = CDOTA_Item_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ArmletClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_ArmletClass = &CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass;
  CDOTA_Item_Armlet::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ArmletClassInfo.m_pClass = &CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass;
  CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_ArmletClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Armlet::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ArmletClass;
}


// CDOTA_Item_Armlet::GetIntrinsicModifierName  (line 44, @0x0000000002d60b40, libserver.so)
// strings: "modifier_item_armlet"
const char *__fastcall CDOTA_Item_Armlet::GetIntrinsicModifierName(CDOTA_Item_Armlet *const this)
{
  return "modifier_item_armlet";
}


// CDOTA_Item_Armlet::YouForgotToImplementOrDeclareServerClass  (line 60, @0x0000000002d53f00, libserver.so)
int __fastcall CDOTA_Item_Armlet::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Armlet *const this)
{
  return 0;
}


// CDOTA_Item_Armlet::GetServerClass  (line 60, @0x0000000002d58930, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Armlet::GetServerClass(CDOTA_Item_Armlet *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Item_Armlet::OnToggle  (line 70, @0x0000000002d54db0, libserver.so)
// calls: CDOTABaseAbility::OnToggle, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::FindItemSlotInInventory, IsBackpackSlot, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, CDOTA_BaseNPC::RemoveModifierByName, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_armlet_unholy_strength", "DOTA_Item.Armlet.Activate", "DOTA_Item.Armlet.DeActivate"
void __fastcall CDOTA_Item_Armlet::OnToggle(CDOTA_Item_Armlet *const this)
{
  CDOTA_BaseNPC *v2; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_UnitInventory *Inventory; // rax
  int ItemSlotInInventory; // eax
  bool v6; // r12
  CDOTA_BaseNPC *v7; // r13
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v11; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  CDOTABaseAbility::OnToggle(this);
  if ( CDOTABaseAbility::GetCaster(this) == 0
    || (v2 = CDOTABaseAbility::GetCaster(this), CDOTA_BaseNPC::GetInventory(v2) == 0) )
  {
    v6 = 0;
    if ( this->m_bToggleState.m_Value )
      goto LABEL_4;
LABEL_8:
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_item_armlet_unholy_strength");
    v11 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "DOTA_Item.Armlet.DeActivate", v11);
    goto LABEL_9;
  }
  v3 = CDOTABaseAbility::GetCaster(this);
  Inventory = CDOTA_BaseNPC::GetInventory(v3);
  ItemSlotInInventory = CDOTA_UnitInventory::FindItemSlotInInventory(Inventory, this, 3);
  v6 = IsBackpackSlot(ItemSlotInInventory);
  if ( !this->m_bToggleState.m_Value )
    goto LABEL_8;
LABEL_4:
  if ( (*(this->_vptr_IHandleEntity + 348))(this) != 0 || v6 )
    goto LABEL_8;
  KeyValues::KeyValues(&kv, "modifier_item_armlet_unholy_strength");
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v8, v7, this, "modifier_item_armlet_unholy_strength", &kv, 0);
  v9 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.Armlet.Activate", v9);
  KeyValues::~KeyValues(&kv);
LABEL_9:
  (*(this->_vptr_IHandleEntity + 297))(this);
}


// CDOTA_Item_Armlet::OnUnequip  (line 95, @0x0000000002d54d10, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Item::OnUnequip
// strings: "modifier_item_armlet_unholy_strength"
void __fastcall CDOTA_Item_Armlet::OnUnequip(CDOTA_Item_Armlet *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_item_armlet_unholy_strength");
  CDOTA_Item::OnUnequip(this);
}


// CDOTA_Item_Armlet::OnEquip  (line 106, @0x0000000002d54b60, libserver.so)
// calls: CDOTA_Item::OnEquip, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_armlet_unholy_strength"
void __fastcall CDOTA_Item_Armlet::OnEquip(CDOTA_Item_Armlet *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  if ( this->m_bToggleState.m_Value && (*(this->_vptr_IHandleEntity + 348))(this) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_item_armlet_unholy_strength");
    Caster = CDOTABaseAbility::GetCaster(this);
    v3 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_item_armlet_unholy_strength", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  CDOTA_Item::OnEquip(this);
}


// CDOTA_Item_Armlet::GetCooldown  (line 121, @0x0000000002d54b50, libserver.so)
// calls: CDOTABaseAbility::GetCooldown
float __fastcall CDOTA_Item_Armlet::GetCooldown(CDOTA_Item_Armlet *const this, int iLevel)
{
  return CDOTABaseAbility::GetCooldown(this, -1);
}


// CDOTA_Modifier_Item_Armlet::~CDOTA_Modifier_Item_Armlet  (line 142, @0x0000000002d62ee0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Armlet::~CDOTA_Modifier_Item_Armlet(CDOTA_Modifier_Item_Armlet *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Armlet::~CDOTA_Modifier_Item_Armlet  (line 142, @0x0000000002d62f00, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Armlet
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Armlet::~CDOTA_Modifier_Item_Armlet(CDOTA_Modifier_Item_Armlet *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Armlet::GetAttributes  (line 147, @0x0000000002d60b50, libserver.so)
int __fastcall CDOTA_Modifier_Item_Armlet::GetAttributes(CDOTA_Modifier_Item_Armlet *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Armlet::DeclareFunctions  (line 168, @0x0000000002d53f10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Armlet::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Armlet::GetModifierAttackSpeedBonus(CModifierParams const&), CDOTA_Modifier_Item_Armlet::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Item_Armlet::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Armlet::DeclareFunctions(CDOTA_Modifier_Item_Armlet *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Armlet::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Armlet::GetModifierAttackSpeedBonus;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Armlet::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Armlet::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
}


// CDOTA_Modifier_Item_Armlet::GetModifierPreAttack_BonusDamage  (line 178, @0x0000000002d53f80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Armlet::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Armlet *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Armlet::GetModifierAttackSpeedBonus  (line 185, @0x0000000002d53fa0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Armlet::GetModifierAttackSpeedBonus(
        CDOTA_Modifier_Item_Armlet *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Armlet::GetModifierPhysicalArmorBonus  (line 192, @0x0000000002d53fc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Armlet::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Armlet *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Armlet::GetModifierConstantHealthRegen  (line 199, @0x0000000002d53fe0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Armlet::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Armlet *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Armlet::OnCreated  (line 206, @0x0000000002d5f410, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_health_regen"
void __fastcall CDOTA_Modifier_Item_Armlet::OnCreated(CDOTA_Modifier_Item_Armlet *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_attack_speed", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->bonus_armor = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_attack_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_armor", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_health_regen", -1, 0);
    return;
  }
LABEL_9:
  this->bonus_health_regen = 0;
}


// CDOTA_Modifier_Armlet_UnholyStrength::~CDOTA_Modifier_Armlet_UnholyStrength  (line 233, @0x0000000002d632f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Armlet_UnholyStrength::~CDOTA_Modifier_Armlet_UnholyStrength(
        CDOTA_Modifier_Armlet_UnholyStrength *const this)
{
  this->_vptr_CDOTA_Buff = &off_468CD30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Armlet_UnholyStrength::~CDOTA_Modifier_Armlet_UnholyStrength  (line 233, @0x0000000002d63310, libserver.so)  // inlines: ~CDOTA_Modifier_Armlet_UnholyStrength
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Armlet_UnholyStrength::~CDOTA_Modifier_Armlet_UnholyStrength(
        CDOTA_Modifier_Armlet_UnholyStrength *const this)
{
  this->_vptr_CDOTA_Buff = &off_468CD30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Armlet_UnholyStrength::GetEffectName  (line 250, @0x0000000002d60b60, libserver.so)
// strings: "particles/items_fx/armlet.vpcf"
const char *__fastcall CDOTA_Modifier_Armlet_UnholyStrength::GetEffectName(
        CDOTA_Modifier_Armlet_UnholyStrength *const this)
{
  return "particles/items_fx/armlet.vpcf";
}


// CDOTA_Modifier_Armlet_UnholyStrength::IsPurgable  (line 252, @0x0000000002d60b70, libserver.so)
bool __fastcall CDOTA_Modifier_Armlet_UnholyStrength::IsPurgable(CDOTA_Modifier_Armlet_UnholyStrength *const this)
{
  return 0;
}


// CDOTA_Modifier_Armlet_UnholyStrength::DeclareFunctions  (line 268, @0x0000000002d54000, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Armlet_UnholyStrength::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Armlet_UnholyStrength::GetModifierAttackSpeedBonus(CModifierParams const&), CDOTA_Modifier_Armlet_UnholyStrength::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Armlet_UnholyStrength::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Armlet_UnholyStrength::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Armlet_UnholyStrength::DeclareFunctions(
        CDOTA_Modifier_Armlet_UnholyStrength *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Armlet_UnholyStrength::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Armlet_UnholyStrength::GetModifierAttackSpeedBonus;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Armlet_UnholyStrength::GetModifierPhysicalArmorBonus;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Armlet_UnholyStrength::GetModifierBonusStats_Strength;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Armlet_UnholyStrength::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Armlet_UnholyStrength::OnCreated  (line 279, @0x0000000002d5f650, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "unholy_bonus_damage", "unholy_bonus_attack_speed", "unholy_bonus_strength", "unholy_bonus_armor", "unholy_health_drain_per_tick"
void __fastcall CDOTA_Modifier_Armlet_UnholyStrength::OnCreated(
        CDOTA_Modifier_Armlet_UnholyStrength *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->unholy_bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "unholy_bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->unholy_bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->unholy_bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                          v4,
                                          "unholy_bonus_attack_speed",
                                          -1,
                                          0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->unholy_bonus_attack_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->unholy_bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "unholy_bonus_strength", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_11:
    this->unholy_bonus_armor = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->unholy_health_drain_per_tick = 0;
    goto LABEL_7;
  }
LABEL_10:
  this->unholy_bonus_strength = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_11;
LABEL_5:
  this->unholy_bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "unholy_bonus_armor", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->unholy_health_drain_per_tick = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         v7,
                                         "unholy_health_drain_per_tick",
                                         -1,
                                         0);
LABEL_7:
  this->str_tick_count = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.11111111, v8);
}


// CDOTA_Modifier_Armlet_UnholyStrength::OnRemoved  (line 309, @0x0000000002d54f40, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth
void __fastcall CDOTA_Modifier_Armlet_UnholyStrength::OnRemoved(CDOTA_Modifier_Armlet_UnholyStrength *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  int Health; // r12d
  CDOTA_BaseNPC *v4; // rax
  int v5; // r12d
  CDOTA_BaseNPC *v6; // rax

  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 2) == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    Health = CBaseEntity::GetHealth(Parent);
    v4 = CDOTA_Buff::GetParent(this);
    if ( v4 != 0 && (v4->m_iUnitType & 1) != 0 )
      (*(v4->_vptr_IHandleEntity + 490))(v4);
    if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 2) == 0 )
    {
      v5 = (Health - ((fminf(this->str_tick_count / 6.0, 1.0) * this->unholy_bonus_strength) * 20.0));
      v6 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::ModifyHealth(v6, v5, 0, 0, 0);
    }
  }
}


// CDOTA_Modifier_Armlet_UnholyStrength::GetModifierPreAttack_BonusDamage  (line 333, @0x0000000002d54090, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Armlet_UnholyStrength::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Armlet_UnholyStrength *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->unholy_bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Armlet_UnholyStrength::GetModifierAttackSpeedBonus  (line 340, @0x0000000002d540b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Armlet_UnholyStrength::GetModifierAttackSpeedBonus(
        CDOTA_Modifier_Armlet_UnholyStrength *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->unholy_bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Armlet_UnholyStrength::GetModifierPhysicalArmorBonus  (line 347, @0x0000000002d55500, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Armlet_UnholyStrength::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Armlet_UnholyStrength *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( this->str_tick_count > 5 )
  {
    *v2.m128i_i32 = this->unholy_bonus_armor;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Armlet_UnholyStrength::GetModifierBonusStats_Strength  (line 357, @0x0000000002d540d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Armlet_UnholyStrength::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Armlet_UnholyStrength *const this,
        const CModifierParams *const params)
{
  __int64 v2; // xmm0_8
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&v2 = fminf(this->str_tick_count / 6.0, 1.0) * this->unholy_bonus_strength;
  *&result.m_eType = (v2 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Armlet_UnholyStrength::OnTooltip  (line 365, @0x0000000002d54110, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Armlet_UnholyStrength::OnTooltip(
        CDOTA_Modifier_Armlet_UnholyStrength *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = (9 * this->unholy_health_drain_per_tick);
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Armlet_UnholyStrength::OnIntervalThink  (line 371, @0x0000000002d56c00, libserver.so)  // inlines: GetModifier_Constant_Highest, InState, IsInvulnerable, IsListeningToEvent, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::FindModifierByName, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_BaseNPC::ModifyHealth, CDOTA_Buff::GetAbility
// strings: "modifier_doom_bringer_doom", "modifier_oracle_false_promise"
void __fastcall CDOTA_Modifier_Armlet_UnholyStrength::OnIntervalThink(CDOTA_Modifier_Armlet_UnholyStrength *const this)
{
  int str_tick_count; // eax
  CDOTA_BaseNPC *Parent; // rax
  int Health; // r12d
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // rdx
  int v9; // r12d
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v13; // rax
  int v14; // r12d
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  float v18; // [rsp+Ch] [rbp-24h]

  str_tick_count = this->str_tick_count;
  if ( str_tick_count <= 5 )
  {
    this->str_tick_count = str_tick_count + 1;
    Parent = CDOTA_Buff::GetParent(this);
    Health = CBaseEntity::GetHealth(Parent);
    v5 = CDOTA_Buff::GetParent(this);
    if ( v5 != 0 && (v5->m_iUnitType & 1) != 0 )
      (*(v5->_vptr_IHandleEntity + 490))(v5);
    if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 2) == 0 )
    {
      v6 = CDOTA_Buff::GetParent(this);
      if ( CDOTA_BaseNPC::FindModifierByName(v6, "modifier_doom_bringer_doom", 0) == 0 )
      {
        v18 = Health;
        v7 = CDOTA_Buff::GetParent(this);
        v8 = v7->m_ModifierManager.m_buffsForModifiers[111];
        if ( v8 == 0xFF
          || v7->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v8].m_Size <= 0
          || CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
               &v7->m_ModifierManager,
               modifierfunction::MODIFIER_PROPERTY_DISABLE_HEALING,
               &CModifierParams::s_Default) != 1.0
          || (v16 = CDOTA_Buff::GetParent(this),
              CDOTA_BaseNPC::FindModifierByName(v16, "modifier_oracle_false_promise", 0) != 0) )
        {
          v9 = (((this->unholy_bonus_strength * 0.16666667) * 20.0) + v18);
          v10 = CDOTA_Buff::GetParent(this);
          CDOTA_BaseNPC::ModifyHealth(v10, v9, 0, 0, 0);
        }
        else
        {
          v17 = CDOTA_Buff::GetParent(this);
          CDOTA_BaseNPC::ModifyHealth(v17, v18, 0, 0, 0);
        }
      }
    }
  }
  if ( !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
  {
    v11 = CDOTA_Buff::GetParent(this);
    if ( !v11->m_bIsWaitingToSpawn.m_Value && (v11->m_nUnitState64.m_Value & 0x100) == 0 )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      v13 = CDOTA_Buff::GetParent(this);
      v14 = CBaseEntity::GetHealth(v13) - this->unholy_health_drain_per_tick;
      v15 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::ModifyHealth(v15, v14, Ability, 0, 32);
    }
  }
}


