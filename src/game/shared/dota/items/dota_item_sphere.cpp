// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_sphere.cpp:30
class CDOTA_Item_Recipe_Sphere : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Sphere(CDOTA_Item_Recipe_Sphere &);
	CDOTA_Item_Recipe_Sphere(CDOTA_Item_Recipe_Sphere &);
	CDOTA_Item_Recipe_Sphere();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Sphere();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_sphere.cpp:42
class CDOTA_Item_Sphere : public CDOTA_Item {
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
	CDOTA_Item_Sphere(CDOTA_Item_Sphere &);
	CDOTA_Item_Sphere(CDOTA_Item_Sphere &);
	CDOTA_Item_Sphere();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Sphere();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[6] Precache
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_sphere.cpp:81
class CDOTA_Modifier_Item_Sphere : public CDOTA_Buff_Item {
public:

private:

	int bonus_all_stats;  // +0xba8
	int bonus_health_regen;  // +0xbac
	int bonus_mana_regen;  // +0xbb0
	int bonus_damage;  // +0xbb4
	float block_cooldown;  // +0xbb8
	CDOTA_Modifier_Item_Sphere();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetAbsorbSpell(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Sphere();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/items/dota_item_sphere.cpp:216
class CDOTA_Modifier_Item_Sphere_Target : public CDOTA_Buff_Item {
public:

	CDOTA_Modifier_Item_Sphere_Target();
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual int GetPriority();
	ModifierVariant_t GetAbsorbSpell(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Sphere_Target();

	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[6] GetPriority
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Sphere::~CDOTA_Item_Recipe_Sphere  (line 30, @0x0000000002e0f260, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Sphere::~CDOTA_Item_Recipe_Sphere(CDOTA_Item_Recipe_Sphere *const this)
{
  this->_vptr_IHandleEntity = &off_4776970;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Sphere::~CDOTA_Item_Recipe_Sphere  (line 30, @0x0000000002e0f280, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Sphere
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Sphere::~CDOTA_Item_Recipe_Sphere(CDOTA_Item_Recipe_Sphere *const this)
{
  this->_vptr_IHandleEntity = &off_4776970;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Sphere::Schema_DynamicBinding  (line 32, @0x0000000002e0bb90, libserver.so)
// globals: CDOTA_Item_Recipe_Sphere::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Sphere::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Sphere *const this)
{
  return CDOTA_Item_Recipe_Sphere::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000002e0bba0, libserver.so)
// globals: CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000002e0bbb0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Sphere>
void __fastcall CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000002e0bbd0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002e0bbf0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000002e0bc00, libserver.so)
// globals: CDOTA_Item_Recipe_Sphere::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Sphere::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002e0d5c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000002e0e590, libserver.so)  // inlines: CDOTA_Item_Recipe_Sphere, Construct<CDOTA_Item_Recipe_Sphere>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4776970;
  }
  return p;
}


// CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002e10f10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002e10f30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Sphere::GetEntityClassInternal  (line 32, @0x0000000002e15630, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_recipe_sphere", "CDOTA_Item_Recipe_Sphere"
// globals: `guard variable for'CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass, CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass, __dso_handle, CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SphereClassInfo, CDOTA_Item_Recipe_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SphereClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Sphere::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass);
    CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass._vptr_CEntityClass = off_47768F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Sphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_SphereClass != 0 )
    return &CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SphereClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SphereClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SphereClassInfo,
      "CDOTA_Item_Recipe_Sphere",
      "item_recipe_sphere",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SphereClassInfo);
  }
  CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass.m_pClassInfo = &CDOTA_Item_Recipe_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SphereClassInfo;
  CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SphereClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_SphereClass = &CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass;
  CDOTA_Item_Recipe_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_SphereClassInfo.m_pClass = &CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass;
  CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_SphereClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_SphereClass;
}


// CDOTA_Item_Sphere::~CDOTA_Item_Sphere  (line 42, @0x0000000002e0f2b0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Sphere::~CDOTA_Item_Sphere(CDOTA_Item_Sphere *const this)
{
  this->_vptr_IHandleEntity = &off_4777570;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Sphere::~CDOTA_Item_Sphere  (line 42, @0x0000000002e0f2d0, libserver.so)  // inlines: ~CDOTA_Item_Sphere
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Sphere::~CDOTA_Item_Sphere(CDOTA_Item_Sphere *const this)
{
  this->_vptr_IHandleEntity = &off_4777570;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Sphere::Schema_DynamicBinding  (line 44, @0x0000000002e0bc10, libserver.so)
// globals: CDOTA_Item_Sphere::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Sphere::Schema_DynamicBinding(const CDOTA_Item_Sphere *const this)
{
  return CDOTA_Item_Sphere::s_pSchemaBinding;
}


// CDOTA_Item_Sphere::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 44, @0x0000000002e0bc20, libserver.so)
// globals: CDOTA_Item_Sphere::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Sphere::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Sphere::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Sphere::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Sphere::CEntityInstanceEntityClass::DestructInstance  (line 44, @0x0000000002e0bc30, libserver.so)  // inlines: Destruct<CDOTA_Item_Sphere>
void __fastcall CDOTA_Item_Sphere::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Sphere::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Sphere::CEntityInstanceEntityClass::FreeInstance  (line 44, @0x0000000002e0bc50, libserver.so)
void __fastcall CDOTA_Item_Sphere::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Sphere::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Sphere::CEntityInstanceEntityClass::CanAllocate  (line 44, @0x0000000002e0bc70, libserver.so)
bool __fastcall CDOTA_Item_Sphere::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Sphere::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Sphere::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 44, @0x0000000002e0bc80, libserver.so)
// globals: CDOTA_Item_Sphere::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Sphere::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Sphere::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Sphere::s_pSchemaBinding;
}


// CDOTA_Item_Sphere::CEntityInstanceEntityClass::AllocateInstance  (line 44, @0x0000000002e0d600, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Sphere::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Sphere::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Sphere::CEntityInstanceEntityClass::ConstructInstance  (line 44, @0x0000000002e0e5c0, libserver.so)  // inlines: CDOTA_Item_Sphere, Construct<CDOTA_Item_Sphere>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Sphere::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Sphere::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4777570;
  }
  return p;
}


// CDOTA_Item_Sphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002e10f60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Sphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Sphere::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Sphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002e10f80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Sphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Sphere::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Sphere::GetEntityClassInternal  (line 44, @0x0000000002e15780, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "CDOTA_Item_Sphere"
// globals: `guard variable for'CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass, CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass, __dso_handle, CDOTA_Item_Sphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SphereClassInfo, CDOTA_Item_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SphereClassInfo
CEntityClass *__cdecl CDOTA_Item_Sphere::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass);
    CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass._vptr_CEntityClass = off_47774F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass);
    __cxa_atexit(
      CDOTA_Item_Sphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_SphereClass != 0 )
    return &CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass;
  if ( `guard variable for'CDOTA_Item_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SphereClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SphereClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SphereClassInfo,
      "CDOTA_Item_Sphere",
      "item_sphere",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SphereClassInfo);
  }
  CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass.m_pClassInfo = &CDOTA_Item_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SphereClassInfo;
  CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass.m_pBaseClassInfo = CDOTA_Item_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SphereClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_SphereClass = &CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass;
  CDOTA_Item_Sphere::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SphereClassInfo.m_pClass = &CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass;
  CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_SphereClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Sphere::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SphereClass;
}


// CDOTA_Item_Sphere::GetIntrinsicModifierName  (line 46, @0x0000000002e0bc90, libserver.so)
// strings: "modifier_item_sphere"
const char *__fastcall CDOTA_Item_Sphere::GetIntrinsicModifierName(CDOTA_Item_Sphere *const this)
{
  return "modifier_item_sphere";
}


// CDOTA_Item_Sphere::OnSpellStart  (line 54, @0x0000000002e00260, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_sphere_target", "DOTA_Item.LinkensSphere.Target"
void __fastcall CDOTA_Item_Sphere::OnSpellStart(CDOTA_Item_Sphere *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    KeyValues::KeyValues(&kv, "modifier_item_sphere_target");
    (*(this->_vptr_IHandleEntity + 244))(this, 0xFFFFFFFFLL);
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_item_sphere_target", &kv, 0);
    DOTA_EmitSound(10, "DOTA_Item.LinkensSphere.Target", v3);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Item_Sphere::Precache  (line 70, @0x0000000002e00390, libserver.so)
// calls: PrecacheParticleSystem, CDOTA_Item::Precache
// strings: "particles/items_fx/immunity_sphere_buff.vpcf"
void __fastcall CDOTA_Item_Sphere::Precache(CDOTA_Item_Sphere *const this, const CEntityPrecacheContext *pContext)
{
  PrecacheParticleSystem("particles/items_fx/immunity_sphere_buff.vpcf", pContext);
  CDOTA_Item::Precache(this, pContext);
}


// CDOTA_Modifier_Item_Sphere::~CDOTA_Modifier_Item_Sphere  (line 81, @0x0000000002e0de80, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Sphere::~CDOTA_Modifier_Item_Sphere(CDOTA_Modifier_Item_Sphere *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Sphere::~CDOTA_Modifier_Item_Sphere  (line 81, @0x0000000002e0dea0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Sphere
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Sphere::~CDOTA_Modifier_Item_Sphere(CDOTA_Modifier_Item_Sphere *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Sphere::OnCreated  (line 110, @0x0000000002e09cb0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_all_stats", "bonus_health_regen", "bonus_mana_regen", "block_cooldown"
void __fastcall CDOTA_Modifier_Item_Sphere::OnCreated(CDOTA_Modifier_Item_Sphere *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_all_stats", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_all_stats = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_health_regen", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->bonus_health_regen = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_mana_regen", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->bonus_damage = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->bonus_mana_regen = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_damage", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->block_cooldown = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "block_cooldown", -1, 0);
    return;
  }
LABEL_11:
  this->block_cooldown = 0.0;
}


// CDOTA_Modifier_Item_Sphere::DeclareFunctions  (line 120, @0x0000000002dff3d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Sphere::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Sphere::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Sphere::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_Sphere::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_Sphere::GetModifierPercentageManaRegen(CModifierParams const&), CDOTA_Modifier_Item_Sphere::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Sphere::GetAbsorbSpell(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Sphere::DeclareFunctions(CDOTA_Modifier_Item_Sphere *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Sphere::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Sphere::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Sphere::GetModifierBonusStats_Intellect;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Sphere::GetModifierConstantHealthRegen;
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_Sphere::GetModifierPercentageManaRegen;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Sphere::GetModifierPreAttack_BonusDamage;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[54].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[93].__pfn = CDOTA_Modifier_Item_Sphere::GetAbsorbSpell;
  this->m_Functions[93].__delta = 0;
}


// CDOTA_Modifier_Item_Sphere::GetModifierBonusStats_Strength  (line 132, @0x0000000002dff490, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Sphere::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Sphere *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Sphere::GetModifierBonusStats_Agility  (line 137, @0x0000000002dff4b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Sphere::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Sphere *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Sphere::GetModifierBonusStats_Intellect  (line 142, @0x0000000002dff4d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Sphere::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Sphere *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Sphere::GetModifierConstantHealthRegen  (line 147, @0x0000000002dff4f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Sphere::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Sphere *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Sphere::GetModifierPercentageManaRegen  (line 152, @0x0000000002dff510, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Sphere::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_Sphere *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Sphere::GetModifierPreAttack_BonusDamage  (line 157, @0x0000000002dff530, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Sphere::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Sphere *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Sphere::GetAbsorbSpell  (line 162, @0x0000000002e02750, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, operator CDOTABaseAbility*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff_Item::GetItem, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Buff::GetAbility
// strings: "particles/items_fx/immunity_sphere.vpcf", "attach_hitloc", "DOTA_Item.LinkensSphere.Activate", "modifier_item_sphere_target"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Sphere::GetAbsorbSpell(
        CDOTA_Modifier_Item_Sphere *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_Item *Item; // rax
  CDOTABaseAbility *m_pInstance; // r14
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  unsigned __int8 m_Value; // r13
  CDOTA_BaseNPC *v11; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v13; // r13
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_Buff *ModifierByName; // r12
  CDOTA_BaseNPC *v18; // rax
  CDOTA_Item *Ability; // rax
  CDOTA_Item *v20; // r12
  void (__fastcall *v21)(CDOTA_Item *); // r13
  CDOTA_Item *v22; // rax
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent == 0
    || (Item = CDOTA_Buff_Item::GetItem(this), (*(Item->_vptr_IHandleEntity + 245))(Item) == 0)
    && CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_item_sphere_target", 0) == 0 )
  {
    *&result.m_eType = 1;
    goto LABEL_15;
  }
  m_pInstance = 0;
  if ( params->ability.m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->ability.m_Index & 0x1FF];
      if ( v8 != 0 && params->ability.m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( CDOTABaseAbility::GetCaster(m_pInstance) == 0
    || (m_Value = CDOTABaseAbility::GetCaster(m_pInstance)->m_iTeamNum.m_Value,
        result.m_szVal = CDOTA_Buff::GetParent(this),
        *&result.m_eType = 1,
        m_Value != *(result.m_szVal + 383)) )
  {
    result.m_szVal = CDOTA_Buff::GetParent(this);
    *&result.m_eType = 1;
    if ( *(result.m_szVal + 3416) == 0 )
    {
      if ( dota_ability_debug.m_pParent->m_Value.m_nValue != 0 )
      {
LABEL_12:
        v11 = CDOTA_Buff::GetParent(this);
        ParticleManager = GetParticleManager();
        LODWORD(v11) = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/items_fx/immunity_sphere.vpcf",
                         2,
                         v11,
                         0,
                         0);
        v13 = CDOTA_Buff::GetParent(this);
        v14 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v14, v11, 0, v13, 5, "attach_hitloc", vec3_invalid, 1);
        v15 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v15, v11);
        v16 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::UnitEmitSound(v16, "DOTA_Item.LinkensSphere.Activate", 0.0, 0, 0);
        *&result.m_eType = 0x3F80000000000001LL;
        goto LABEL_15;
      }
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_item_sphere_target", 0);
      if ( ModifierByName != 0 )
      {
        v18 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::RemoveModifierByName(v18, "modifier_item_sphere_target");
        if ( CDOTA_Buff::GetAbility(ModifierByName) == 0 )
          goto LABEL_12;
        Ability = CDOTA_Buff::GetAbility(ModifierByName);
      }
      else
      {
        Ability = CDOTA_Buff_Item::GetItem(this);
      }
      v20 = Ability;
      v21 = *(Ability->_vptr_IHandleEntity + 241);
      v22 = CDOTA_Buff_Item::GetItem(this);
      (*(v22->_vptr_IHandleEntity + 244))(v22, 0xFFFFFFFFLL);
      v21(v20);
      goto LABEL_12;
    }
  }
LABEL_15:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Item_Sphere_Target::~CDOTA_Modifier_Item_Sphere_Target  (line 216, @0x0000000002e0de30, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Sphere_Target::~CDOTA_Modifier_Item_Sphere_Target(
        CDOTA_Modifier_Item_Sphere_Target *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Sphere_Target::~CDOTA_Modifier_Item_Sphere_Target  (line 216, @0x0000000002e0de50, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Sphere_Target
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Sphere_Target::~CDOTA_Modifier_Item_Sphere_Target(
        CDOTA_Modifier_Item_Sphere_Target *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Sphere_Target::IsPurgable  (line 222, @0x0000000002e0bca0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Sphere_Target::IsPurgable(CDOTA_Modifier_Item_Sphere_Target *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Sphere_Target::IsHidden  (line 223, @0x0000000002e0bcb0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Sphere_Target::IsHidden(CDOTA_Modifier_Item_Sphere_Target *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Sphere_Target::OnCreated  (line 234, @0x0000000002dff550, libserver.so)
void __fastcall CDOTA_Modifier_Item_Sphere_Target::OnCreated(
        CDOTA_Modifier_Item_Sphere_Target *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Item_Sphere_Target::GetPriority  (line 245, @0x0000000002dff560, libserver.so)
int __fastcall CDOTA_Modifier_Item_Sphere_Target::GetPriority(CDOTA_Modifier_Item_Sphere_Target *const this)
{
  return 2;
}


// CDOTA_Modifier_Item_Sphere_Target::DeclareFunctions  (line 250, @0x0000000002dff570, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Sphere_Target::GetAbsorbSpell(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Sphere_Target::DeclareFunctions(CDOTA_Modifier_Item_Sphere_Target *const this)
{
  this->m_Functions[93].__pfn = CDOTA_Modifier_Item_Sphere_Target::GetAbsorbSpell;
  this->m_Functions[93].__delta = 0;
}


// CDOTA_Modifier_Item_Sphere_Target::GetAbsorbSpell  (line 255, @0x0000000002e08800, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetLevelSpecialValueFor<float>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, operator CDOTABaseAbility*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff_Item::GetItem, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::Destroy
// strings: "DOTA_Item.LinkensSphere.Activate", "block_cooldown"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Sphere_Target::GetAbsorbSpell(
        CDOTA_Modifier_Item_Sphere_Target *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *m_pInstance; // r13
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // rax
  float LevelSpecialValue; // xmm0_4
  CDOTA_Item *Item; // rax
  float block_cooldown; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetParent(this) == 0 )
    return 1uLL;
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
  if ( CDOTABaseAbility::GetCaster(m_pInstance) == 0
    || (m_Value = CDOTABaseAbility::GetCaster(m_pInstance)->m_iTeamNum.m_Value,
        result.m_szVal = CDOTA_Buff::GetParent(this),
        *&result.m_eType = 1,
        m_Value != *(result.m_szVal + 383)) )
  {
    result.m_szVal = CDOTA_Buff::GetParent(this);
    *&result.m_eType = 1;
    if ( *(result.m_szVal + 3416) == 0 )
    {
      if ( dota_ability_debug.m_pParent->m_Value.m_nValue == 0 )
      {
        if ( CDOTA_Buff_Item::GetItem(this) != 0 )
        {
          Ability = CDOTA_Buff::GetAbility(this);
          LevelSpecialValue = 0.0;
          if ( Ability != 0 )
            LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "block_cooldown", -1, 0);
          block_cooldown = LevelSpecialValue;
          Item = CDOTA_Buff_Item::GetItem(this);
          (*(Item->_vptr_IHandleEntity + 241))(Item, block_cooldown);
        }
        CDOTA_Buff::Destroy(this, 0, 0, 0);
      }
      Parent = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(Parent, "DOTA_Item.LinkensSphere.Activate", 0.0, 0, 0);
      *&result.m_eType = 0x3F80000000000001LL;
    }
  }
  result.m_szVal = 0;
  return result;
}


