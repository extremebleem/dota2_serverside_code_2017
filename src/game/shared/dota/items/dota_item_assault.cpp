// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_assault.cpp:26
class CDOTA_Item_Recipe_Assault_Cuirass : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Assault_Cuirass(CDOTA_Item_Recipe_Assault_Cuirass &);
	CDOTA_Item_Recipe_Assault_Cuirass(CDOTA_Item_Recipe_Assault_Cuirass &);
	CDOTA_Item_Recipe_Assault_Cuirass();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Assault_Cuirass();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_assault.cpp:37
class CDOTA_Item_Assault_Cuirass : public CDOTA_Item {
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
	CDOTA_Item_Assault_Cuirass(CDOTA_Item_Assault_Cuirass &);
	CDOTA_Item_Assault_Cuirass(CDOTA_Item_Assault_Cuirass &);
	CDOTA_Item_Assault_Cuirass();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnEquip();
	virtual void OnUnequip();
	virtual ~CDOTA_Item_Assault_Cuirass();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[333] OnEquip
	// vtable[334] OnUnequip
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_assault.cpp:98
class CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura : public CDOTA_Buff_Item {
public:

	CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura();

private:

	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnRespawn(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[7] GetAttributes
	// sizeof = 2984
};

// src/game/shared/dota/items/dota_item_assault.cpp:161
class CDOTA_Modifier_Item_Assault_Cuirass_Positive : public CDOTA_Buff {
public:

private:

	int aura_attack_speed;  // +0xba8
	int aura_positive_armor;  // +0xbac
	CDOTA_Modifier_Item_Assault_Cuirass_Positive();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Assault_Cuirass_Positive();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_assault.cpp:215
class CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura : public CDOTA_Buff_Item {
public:

	CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura(CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura &);
	CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura(const CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura &);
	CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura();
	virtual ~CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura();

	// sizeof = 2984
};

// src/game/shared/dota/items/dota_item_assault.cpp:226
class CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor : public CDOTA_Buff {
public:

private:

	int aura_negative_armor;  // +0xba8
	CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_assault.cpp:278
class CDOTA_Modifier_Item_Assault_Cuirass : public CDOTA_Buff_Item {
public:

private:

	int bonus_attack_speed;  // +0xba8
	int bonus_armor;  // +0xbac
	CDOTA_Modifier_Item_Assault_Cuirass();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_Assault_Cuirass();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Assault_Cuirass::~CDOTA_Item_Recipe_Assault_Cuirass  (line 26, @0x0000000002d644e0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Assault_Cuirass::~CDOTA_Item_Recipe_Assault_Cuirass(
        CDOTA_Item_Recipe_Assault_Cuirass *const this)
{
  this->_vptr_IHandleEntity = &off_468D310;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Assault_Cuirass::~CDOTA_Item_Recipe_Assault_Cuirass  (line 26, @0x0000000002d64500, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Assault_Cuirass
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Assault_Cuirass::~CDOTA_Item_Recipe_Assault_Cuirass(
        CDOTA_Item_Recipe_Assault_Cuirass *const this)
{
  this->_vptr_IHandleEntity = &off_468D310;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Assault_Cuirass::Schema_DynamicBinding  (line 28, @0x0000000002d60b80, libserver.so)
// globals: CDOTA_Item_Recipe_Assault_Cuirass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Assault_Cuirass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Assault_Cuirass *const this)
{
  return CDOTA_Item_Recipe_Assault_Cuirass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d60b90, libserver.so)
// globals: CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d60ba0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Assault_Cuirass>
void __fastcall CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d60bc0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d60be0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d60bf0, libserver.so)
// globals: CDOTA_Item_Recipe_Assault_Cuirass::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Assault_Cuirass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d62530, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d636c0, libserver.so)  // inlines: CDOTA_Item_Recipe_Assault_Cuirass, Construct<CDOTA_Item_Recipe_Assault_Cuirass>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_468D310;
  }
  return p;
}


// CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d66400, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d66420, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal  (line 28, @0x0000000002d6b610, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_recipe_assault", "CDOTA_Item_Recipe_Assault_Cuirass"
// globals: `guard variable for'CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass, CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass, __dso_handle, CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClassInfo, CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass);
    CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass._vptr_CEntityClass = off_468D290;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Assault_Cuirass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Assault_CuirassClass != 0 )
    return &CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClassInfo,
      "CDOTA_Item_Recipe_Assault_Cuirass",
      "item_recipe_assault",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClassInfo);
  }
  CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass.m_pClassInfo = &CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClassInfo;
  CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Assault_CuirassClass = &CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass;
  CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClassInfo.m_pClass = &CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass;
  CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Assault_CuirassClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Assault_CuirassClass;
}


// CDOTA_Item_Assault_Cuirass::~CDOTA_Item_Assault_Cuirass  (line 37, @0x0000000002d64530, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Assault_Cuirass::~CDOTA_Item_Assault_Cuirass(CDOTA_Item_Assault_Cuirass *const this)
{
  this->_vptr_IHandleEntity = &off_468DF10;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Assault_Cuirass::~CDOTA_Item_Assault_Cuirass  (line 37, @0x0000000002d64550, libserver.so)  // inlines: ~CDOTA_Item_Assault_Cuirass
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Assault_Cuirass::~CDOTA_Item_Assault_Cuirass(CDOTA_Item_Assault_Cuirass *const this)
{
  this->_vptr_IHandleEntity = &off_468DF10;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Assault_Cuirass::Schema_DynamicBinding  (line 39, @0x0000000002d60c00, libserver.so)
// globals: CDOTA_Item_Assault_Cuirass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Assault_Cuirass::Schema_DynamicBinding(
        const CDOTA_Item_Assault_Cuirass *const this)
{
  return CDOTA_Item_Assault_Cuirass::s_pSchemaBinding;
}


// CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002d60c10, libserver.so)
// globals: CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002d60c20, libserver.so)  // inlines: Destruct<CDOTA_Item_Assault_Cuirass>
void __fastcall CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002d60c40, libserver.so)
void __fastcall CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002d60c60, libserver.so)
bool __fastcall CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002d60c70, libserver.so)
// globals: CDOTA_Item_Assault_Cuirass::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Assault_Cuirass::s_pSchemaBinding;
}


// CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002d62570, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002d636f0, libserver.so)  // inlines: CDOTA_Item_Assault_Cuirass, Construct<CDOTA_Item_Assault_Cuirass>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_468DF10;
  }
  return p;
}


// CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002d66450, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002d66470, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Assault_Cuirass::GetEntityClassInternal  (line 39, @0x0000000002d6b760, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_Assault_Cuirass"
// globals: `guard variable for'CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass, CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass, __dso_handle, CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Assault_CuirassClassInfo, CDOTA_Item_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Assault_CuirassClassInfo
CEntityClass *__cdecl CDOTA_Item_Assault_Cuirass::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass);
    CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass._vptr_CEntityClass = off_468DE90;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass);
    __cxa_atexit(
      CDOTA_Item_Assault_Cuirass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Assault_CuirassClass != 0 )
    return &CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass;
  if ( `guard variable for'CDOTA_Item_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Assault_CuirassClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Assault_CuirassClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Assault_CuirassClassInfo,
      "CDOTA_Item_Assault_Cuirass",
      "item_assault",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Assault_CuirassClassInfo);
  }
  CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass.m_pClassInfo = &CDOTA_Item_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Assault_CuirassClassInfo;
  CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass.m_pBaseClassInfo = CDOTA_Item_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Assault_CuirassClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Assault_CuirassClass = &CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass;
  CDOTA_Item_Assault_Cuirass::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Assault_CuirassClassInfo.m_pClass = &CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass;
  CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Assault_CuirassClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Assault_Cuirass::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Assault_CuirassClass;
}


// CDOTA_Item_Assault_Cuirass::GetIntrinsicModifierName  (line 41, @0x0000000002d60c80, libserver.so)
// strings: "modifier_item_assault"
const char *__fastcall CDOTA_Item_Assault_Cuirass::GetIntrinsicModifierName(CDOTA_Item_Assault_Cuirass *const this)
{
  return "modifier_item_assault";
}


// CDOTA_Item_Assault_Cuirass::OnEquip  (line 49, @0x0000000002d5dbd0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, SetBool
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetString, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_Item::OnEquip, __stack_chk_fail, _Unwind_Resume
// strings: "auras", "modifier_item_assault_positive", "aura_apply_modifier", "aura_search_team", "aura_search_type", "aura_search_flags" (9 total)
void __fastcall CDOTA_Item_Assault_Cuirass::OnEquip(CDOTA_Item_Assault_Cuirass *const this)
{
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  if ( (*(this->_vptr_IHandleEntity + 348))(this) == 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "aura_radius", -1, 0);
    KeyValues::KeyValues(&kv, "auras");
    KeyValues::SetInt(&kv, "aura", 1);
    KeyValues::SetInt(&kv, "aura_radius", LevelSpecialValue);
    KeyValues::SetString(&kv, "aura_apply_modifier", "modifier_item_assault_positive");
    KeyValues::SetInt(&kv, "aura_search_team", 1);
    KeyValues::SetInt(&kv, "aura_search_type", 23);
    KeyValues::SetInt(&kv, "aura_search_flags", 64);
    Caster = CDOTABaseAbility::GetCaster(this);
    v4 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_item_assault_positive_aura", &kv, 0);
    KeyValues::SetString(&kv, "aura_apply_modifier", "modifier_item_assault_negative_armor");
    KeyValues::SetInt(&kv, "aura_search_team", 2);
    KeyValues::SetInt(&kv, "aura_search_type", 23);
    KeyValues::SetInt(&kv, "aura_search_flags", 16);
    v5 = CDOTABaseAbility::GetCaster(this);
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v6, v5, this, "modifier_item_assault_negative_armor_aura", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  CDOTA_Item::OnEquip(this);
}


// CDOTA_Item_Assault_Cuirass::OnUnequip  (line 80, @0x0000000002d54d40, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Item::OnUnequip
// strings: "modifier_item_assault_positive_aura", "modifier_item_assault_positive_buildings_aura", "modifier_item_assault_negative_armor_aura"
void __fastcall CDOTA_Item_Assault_Cuirass::OnUnequip(CDOTA_Item_Assault_Cuirass *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  if ( (*(this->_vptr_IHandleEntity + 348))(this) == 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_item_assault_positive_aura");
    v3 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v3, "modifier_item_assault_positive_buildings_aura");
    v4 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v4, "modifier_item_assault_negative_armor_aura");
  }
  CDOTA_Item::OnUnequip(this);
}


// CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::~CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura  (line 98, @0x0000000002d62e90, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::~CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura(
        CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::~CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura  (line 98, @0x0000000002d62eb0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::~CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura(
        CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::GetAttributes  (line 107, @0x0000000002d60c90, libserver.so)
int __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::GetAttributes(
        CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura *const this)
{
  return 7;
}


// CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::DeclareFunctions  (line 112, @0x0000000002d54140, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::OnDeath(CModifierParams const&), CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::OnRespawn(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::DeclareFunctions(
        CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::OnDeath;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[139].__delta = 0;
  this->m_Functions[139].__pfn = CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::OnRespawn;
}


// CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::OnCreated  (line 119, @0x0000000002d54180, libserver.so)
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::OnCreated(
        CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::OnDeath  (line 132, @0x0000000002d574a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::OnDeath(
        CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  if ( v4->m_pInstance != 0 && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0 )
    CDOTA_Buff::GetParent(this);
  return 1uLL;
}


// CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::OnRespawn  (line 144, @0x0000000002d57410, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura::OnRespawn(
        CDOTA_Modifier_Item_Assault_Cuirass_Positive_Aura *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  if ( v4->m_pInstance != 0 && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0 )
    CDOTA_Buff::GetParent(this);
  return 1uLL;
}


// CDOTA_Modifier_Item_Assault_Cuirass_Positive::~CDOTA_Modifier_Item_Assault_Cuirass_Positive  (line 161, @0x0000000002d632a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Positive::~CDOTA_Modifier_Item_Assault_Cuirass_Positive(
        CDOTA_Modifier_Item_Assault_Cuirass_Positive *const this)
{
  this->_vptr_CDOTA_Buff = &off_468EDF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Assault_Cuirass_Positive::~CDOTA_Modifier_Item_Assault_Cuirass_Positive  (line 161, @0x0000000002d632c0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Assault_Cuirass_Positive
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Positive::~CDOTA_Modifier_Item_Assault_Cuirass_Positive(
        CDOTA_Modifier_Item_Assault_Cuirass_Positive *const this)
{
  this->_vptr_CDOTA_Buff = &off_468EDF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Assault_Cuirass_Positive::OnCreated  (line 181, @0x0000000002d5f190, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "aura_attack_speed", "aura_positive_armor"
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Positive::OnCreated(
        CDOTA_Modifier_Item_Assault_Cuirass_Positive *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->aura_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->aura_positive_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "aura_positive_armor", -1, 0);
      return;
    }
  }
  else
  {
    this->aura_attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->aura_positive_armor = 0;
}


// CDOTA_Modifier_Item_Assault_Cuirass_Positive::DeclareFunctions  (line 189, @0x0000000002d54190, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Assault_Cuirass_Positive::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_Assault_Cuirass_Positive::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Positive::DeclareFunctions(
        CDOTA_Modifier_Item_Assault_Cuirass_Positive *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Assault_Cuirass_Positive::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Assault_Cuirass_Positive::GetModifierPhysicalArmorBonus;
}


// CDOTA_Modifier_Item_Assault_Cuirass_Positive::GetModifierPhysicalArmorBonus  (line 197, @0x0000000002d541d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Positive::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Assault_Cuirass_Positive *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->aura_positive_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Assault_Cuirass_Positive::GetModifierAttackSpeedBonus_Constant  (line 204, @0x0000000002d541f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Positive::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Assault_Cuirass_Positive *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->aura_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura::~CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura  (line 215, @0x0000000002d63110, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura::~CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura(
        CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura::~CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura  (line 215, @0x0000000002d63130, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura::~CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura(
        CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::~CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor  (line 226, @0x0000000002d63250, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::~CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor(
        CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor *const this)
{
  this->_vptr_CDOTA_Buff = &off_468F430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::~CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor  (line 226, @0x0000000002d63270, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::~CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor(
        CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor *const this)
{
  this->_vptr_CDOTA_Buff = &off_468F430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::IsDebuff  (line 230, @0x0000000002d60ca0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::IsDebuff(
        CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::OnCreated  (line 256, @0x0000000002d5eec0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "aura_negative_armor"
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::OnCreated(
        CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_negative_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_negative_armor", -1, 0);
  else
    this->aura_negative_armor = 0;
}


// CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::DeclareFunctions  (line 263, @0x0000000002d54210, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::DeclareFunctions(
        CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::GetModifierPhysicalArmorBonus  (line 270, @0x0000000002d54230, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Assault_Cuirass_Negative_Armor *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->aura_negative_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Assault_Cuirass::~CDOTA_Modifier_Item_Assault_Cuirass  (line 278, @0x0000000002d62e40, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass::~CDOTA_Modifier_Item_Assault_Cuirass(
        CDOTA_Modifier_Item_Assault_Cuirass *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Assault_Cuirass::~CDOTA_Modifier_Item_Assault_Cuirass  (line 278, @0x0000000002d62e60, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Assault_Cuirass
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass::~CDOTA_Modifier_Item_Assault_Cuirass(
        CDOTA_Modifier_Item_Assault_Cuirass *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Assault_Cuirass::OnCreated  (line 299, @0x0000000002d5f100, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass::OnCreated(
        CDOTA_Modifier_Item_Assault_Cuirass *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_armor", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_armor = 0;
}


// CDOTA_Modifier_Item_Assault_Cuirass::DeclareFunctions  (line 307, @0x0000000002d54250, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Assault_Cuirass::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_Assault_Cuirass::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Assault_Cuirass::DeclareFunctions(CDOTA_Modifier_Item_Assault_Cuirass *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Assault_Cuirass::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Assault_Cuirass::GetModifierPhysicalArmorBonus;
}


// CDOTA_Modifier_Item_Assault_Cuirass::GetModifierAttackSpeedBonus_Constant  (line 315, @0x0000000002d54290, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Assault_Cuirass::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Assault_Cuirass *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Assault_Cuirass::GetModifierPhysicalArmorBonus  (line 322, @0x0000000002d542b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Assault_Cuirass::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Assault_Cuirass *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


