// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_oblivion_staff.cpp:27
class CDOTA_Item_Recipe_OblivionStaff : public CDOTA_Item {
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
	CDOTA_Item_Recipe_OblivionStaff(CDOTA_Item_Recipe_OblivionStaff &);
	CDOTA_Item_Recipe_OblivionStaff(CDOTA_Item_Recipe_OblivionStaff &);
	CDOTA_Item_Recipe_OblivionStaff();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_OblivionStaff();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_oblivion_staff.cpp:38
class CDOTA_Item_OblivionStaff : public CDOTA_Item {
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
	CDOTA_Item_OblivionStaff(CDOTA_Item_OblivionStaff &);
	CDOTA_Item_OblivionStaff(CDOTA_Item_OblivionStaff &);
	CDOTA_Item_OblivionStaff();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_OblivionStaff();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_oblivion_staff.cpp:50
class CDOTA_Modifier_Item_OblivionStaff : public CDOTA_Buff_Item {
public:

private:

	int bonus_intellect;  // +0xba8
	int bonus_attack_speed;  // +0xbac
	int bonus_damage;  // +0xbb0
	int bonus_mana_regen;  // +0xbb4
	CDOTA_Modifier_Item_OblivionStaff();
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_OblivionStaff();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_OblivionStaff::~CDOTA_Item_Recipe_OblivionStaff  (line 27, @0x0000000002dd7f10, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_OblivionStaff::~CDOTA_Item_Recipe_OblivionStaff(
        CDOTA_Item_Recipe_OblivionStaff *const this)
{
  this->_vptr_IHandleEntity = &off_472F4D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_OblivionStaff::~CDOTA_Item_Recipe_OblivionStaff  (line 27, @0x0000000002dd7f30, libserver.so)  // inlines: ~CDOTA_Item_Recipe_OblivionStaff
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_OblivionStaff::~CDOTA_Item_Recipe_OblivionStaff(
        CDOTA_Item_Recipe_OblivionStaff *const this)
{
  this->_vptr_IHandleEntity = &off_472F4D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_OblivionStaff::Schema_DynamicBinding  (line 29, @0x0000000002dd4270, libserver.so)
// globals: CDOTA_Item_Recipe_OblivionStaff::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_OblivionStaff::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_OblivionStaff *const this)
{
  return CDOTA_Item_Recipe_OblivionStaff::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002dd4280, libserver.so)
// globals: CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002dd4290, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_OblivionStaff>
void __fastcall CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002dd42b0, libserver.so)
void __fastcall CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002dd42d0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002dd42e0, libserver.so)
// globals: CDOTA_Item_Recipe_OblivionStaff::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_OblivionStaff::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002dd5e70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002dd6fb0, libserver.so)  // inlines: CDOTA_Item_Recipe_OblivionStaff, Construct<CDOTA_Item_Recipe_OblivionStaff>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_472F4D0;
  }
  return p;
}


// CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dd9e40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002dd9e60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal  (line 29, @0x0000000002de0cb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_recipe_oblivion_staff", "CDOTA_Item_Recipe_OblivionStaff"
// globals: `guard variable for'CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass, CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass, __dso_handle, CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClassInfo, CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass);
    CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass._vptr_CEntityClass = off_472F450;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_OblivionStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_OblivionStaffClass != 0 )
    return &CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass;
  if ( `guard variable for'CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClassInfo,
      "CDOTA_Item_Recipe_OblivionStaff",
      "item_recipe_oblivion_staff",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClassInfo);
  }
  CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass.m_pClassInfo = &CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClassInfo;
  CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass.m_pBaseClassInfo = CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_OblivionStaffClass = &CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass;
  CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClassInfo.m_pClass = &CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass;
  CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_OblivionStaffClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_OblivionStaffClass;
}


// CDOTA_Item_OblivionStaff::~CDOTA_Item_OblivionStaff  (line 38, @0x0000000002dd7f60, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_OblivionStaff::~CDOTA_Item_OblivionStaff(CDOTA_Item_OblivionStaff *const this)
{
  this->_vptr_IHandleEntity = &off_47300D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_OblivionStaff::~CDOTA_Item_OblivionStaff  (line 38, @0x0000000002dd7f80, libserver.so)  // inlines: ~CDOTA_Item_OblivionStaff
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_OblivionStaff::~CDOTA_Item_OblivionStaff(CDOTA_Item_OblivionStaff *const this)
{
  this->_vptr_IHandleEntity = &off_47300D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_OblivionStaff::Schema_DynamicBinding  (line 40, @0x0000000002dd42f0, libserver.so)
// globals: CDOTA_Item_OblivionStaff::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_OblivionStaff::Schema_DynamicBinding(
        const CDOTA_Item_OblivionStaff *const this)
{
  return CDOTA_Item_OblivionStaff::s_pSchemaBinding;
}


// CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002dd4300, libserver.so)
// globals: CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002dd4310, libserver.so)  // inlines: Destruct<CDOTA_Item_OblivionStaff>
void __fastcall CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002dd4330, libserver.so)
void __fastcall CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002dd4350, libserver.so)
bool __fastcall CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002dd4360, libserver.so)
// globals: CDOTA_Item_OblivionStaff::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_OblivionStaff::s_pSchemaBinding;
}


// CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002dd5eb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002dd6fe0, libserver.so)  // inlines: CDOTA_Item_OblivionStaff, Construct<CDOTA_Item_OblivionStaff>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47300D0;
  }
  return p;
}


// CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002dd9e90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002dd9eb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_OblivionStaff::GetEntityClassInternal  (line 40, @0x0000000002de0e00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "CDOTA_Item_OblivionStaff"
// globals: `guard variable for'CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass, CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass, __dso_handle, CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OblivionStaffClassInfo, CDOTA_Item_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OblivionStaffClassInfo
CEntityClass *__cdecl CDOTA_Item_OblivionStaff::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass);
    CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass._vptr_CEntityClass = off_4730050;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass);
    __cxa_atexit(
      CDOTA_Item_OblivionStaff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_OblivionStaffClass != 0 )
    return &CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass;
  if ( `guard variable for'CDOTA_Item_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OblivionStaffClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OblivionStaffClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OblivionStaffClassInfo,
      "CDOTA_Item_OblivionStaff",
      "item_oblivion_staff",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OblivionStaffClassInfo);
  }
  CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass.m_pClassInfo = &CDOTA_Item_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OblivionStaffClassInfo;
  CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass.m_pBaseClassInfo = CDOTA_Item_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OblivionStaffClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_OblivionStaffClass = &CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass;
  CDOTA_Item_OblivionStaff::GetEntityClassInfo(void)::g_EntityCDOTA_Item_OblivionStaffClassInfo.m_pClass = &CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass;
  CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_OblivionStaffClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_OblivionStaff::GetEntityClassInternal(void)::g_EntityCDOTA_Item_OblivionStaffClass;
}


// CDOTA_Item_OblivionStaff::GetIntrinsicModifierName  (line 42, @0x0000000002dd4370, libserver.so)
// strings: "modifier_item_oblivion_staff"
const char *__fastcall CDOTA_Item_OblivionStaff::GetIntrinsicModifierName(CDOTA_Item_OblivionStaff *const this)
{
  return "modifier_item_oblivion_staff";
}


// CDOTA_Modifier_Item_OblivionStaff::~CDOTA_Modifier_Item_OblivionStaff  (line 50, @0x0000000002dd6660, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_OblivionStaff::~CDOTA_Modifier_Item_OblivionStaff(
        CDOTA_Modifier_Item_OblivionStaff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_OblivionStaff::~CDOTA_Modifier_Item_OblivionStaff  (line 50, @0x0000000002dd6680, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_OblivionStaff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_OblivionStaff::~CDOTA_Modifier_Item_OblivionStaff(
        CDOTA_Modifier_Item_OblivionStaff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_OblivionStaff::OnCreated  (line 72, @0x0000000002dd15c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_intellect", "bonus_mana_regen"
void __fastcall CDOTA_Modifier_Item_OblivionStaff::OnCreated(
        CDOTA_Modifier_Item_OblivionStaff *const this,
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
      this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_attack_speed", -1, 0);
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
  this->bonus_attack_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_damage", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_mana_regen", -1, 0);
    return;
  }
LABEL_9:
  this->bonus_mana_regen = 0;
}


// CDOTA_Modifier_Item_OblivionStaff::DeclareFunctions  (line 80, @0x0000000002dc70f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_OblivionStaff::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_OblivionStaff::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_OblivionStaff::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_OblivionStaff::GetModifierPercentageManaRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_OblivionStaff::DeclareFunctions(CDOTA_Modifier_Item_OblivionStaff *const this)
{
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_OblivionStaff::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_OblivionStaff::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_OblivionStaff::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_OblivionStaff::GetModifierPercentageManaRegen;
  this->m_Functions[54].__delta = 0;
}


// CDOTA_Modifier_Item_OblivionStaff::GetModifierBonusStats_Intellect  (line 88, @0x0000000002dc7160, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_OblivionStaff::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_OblivionStaff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_OblivionStaff::GetModifierAttackSpeedBonus_Constant  (line 93, @0x0000000002dc7180, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_OblivionStaff::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_OblivionStaff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_OblivionStaff::GetModifierPreAttack_BonusDamage  (line 98, @0x0000000002dc71a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_OblivionStaff::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_OblivionStaff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_OblivionStaff::GetModifierPercentageManaRegen  (line 103, @0x0000000002dc71c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_OblivionStaff::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_OblivionStaff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


