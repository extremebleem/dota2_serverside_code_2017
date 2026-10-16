// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_vanguard.cpp:27
class CDOTA_Item_Recipe_Vanguard : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Vanguard(CDOTA_Item_Recipe_Vanguard &);
	CDOTA_Item_Recipe_Vanguard(CDOTA_Item_Recipe_Vanguard &);
	CDOTA_Item_Recipe_Vanguard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Vanguard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_vanguard.cpp:39
class CDOTA_Item_Vanguard : public CDOTA_Item {
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
	CDOTA_Item_Vanguard(CDOTA_Item_Vanguard &);
	CDOTA_Item_Vanguard(CDOTA_Item_Vanguard &);
	CDOTA_Item_Vanguard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Vanguard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_vanguard.cpp:51
class CDOTA_Modifier_Item_Vanguard : public CDOTA_Buff_Item {
public:

private:

	int bonus_health;  // +0xba8
	int bonus_health_regen;  // +0xbac
	int block_damage_ranged;  // +0xbb0
	int block_damage_melee;  // +0xbb4
	int block_chance;  // +0xbb8
	CDOTA_Modifier_Item_Vanguard();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPhysical_ConstantBlock(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Vanguard();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Vanguard::~CDOTA_Item_Recipe_Vanguard  (line 27, @0x0000000002e0f6c0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Vanguard::~CDOTA_Item_Recipe_Vanguard(CDOTA_Item_Recipe_Vanguard *const this)
{
  this->_vptr_IHandleEntity = &off_4784D50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Vanguard::~CDOTA_Item_Recipe_Vanguard  (line 27, @0x0000000002e0f6e0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Vanguard
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Vanguard::~CDOTA_Item_Recipe_Vanguard(CDOTA_Item_Recipe_Vanguard *const this)
{
  this->_vptr_IHandleEntity = &off_4784D50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Vanguard::Schema_DynamicBinding  (line 29, @0x0000000002e0c450, libserver.so)
// globals: CDOTA_Item_Recipe_Vanguard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Vanguard::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Vanguard *const this)
{
  return CDOTA_Item_Recipe_Vanguard::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002e0c460, libserver.so)
// globals: CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002e0c470, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Vanguard>
void __fastcall CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002e0c490, libserver.so)
void __fastcall CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002e0c4b0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002e0c4c0, libserver.so)
// globals: CDOTA_Item_Recipe_Vanguard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Vanguard::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002e0d940, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002e0e830, libserver.so)  // inlines: CDOTA_Item_Recipe_Vanguard, Construct<CDOTA_Item_Recipe_Vanguard>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4784D50;
  }
  return p;
}


// CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002e11370, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002e11390, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal  (line 29, @0x0000000002e17850, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_recipe_vanguard", "CDOTA_Item_Recipe_Vanguard"
// globals: `guard variable for'CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass, CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass, __dso_handle, CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VanguardClassInfo, CDOTA_Item_Recipe_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VanguardClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass);
    CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass._vptr_CEntityClass = off_4784CD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Vanguard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_VanguardClass != 0 )
    return &CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VanguardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VanguardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VanguardClassInfo,
      "CDOTA_Item_Recipe_Vanguard",
      "item_recipe_vanguard",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VanguardClassInfo);
  }
  CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass.m_pClassInfo = &CDOTA_Item_Recipe_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VanguardClassInfo;
  CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VanguardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_VanguardClass = &CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass;
  CDOTA_Item_Recipe_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_VanguardClassInfo.m_pClass = &CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass;
  CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_VanguardClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_VanguardClass;
}


// CDOTA_Item_Vanguard::~CDOTA_Item_Vanguard  (line 39, @0x0000000002e0f710, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Vanguard::~CDOTA_Item_Vanguard(CDOTA_Item_Vanguard *const this)
{
  this->_vptr_IHandleEntity = &off_4785950;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Vanguard::~CDOTA_Item_Vanguard  (line 39, @0x0000000002e0f730, libserver.so)  // inlines: ~CDOTA_Item_Vanguard
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Vanguard::~CDOTA_Item_Vanguard(CDOTA_Item_Vanguard *const this)
{
  this->_vptr_IHandleEntity = &off_4785950;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Vanguard::Schema_DynamicBinding  (line 41, @0x0000000002e0c4d0, libserver.so)
// globals: CDOTA_Item_Vanguard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Vanguard::Schema_DynamicBinding(
        const CDOTA_Item_Vanguard *const this)
{
  return CDOTA_Item_Vanguard::s_pSchemaBinding;
}


// CDOTA_Item_Vanguard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002e0c4e0, libserver.so)
// globals: CDOTA_Item_Vanguard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Vanguard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Vanguard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Vanguard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Vanguard::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002e0c4f0, libserver.so)  // inlines: Destruct<CDOTA_Item_Vanguard>
void __fastcall CDOTA_Item_Vanguard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Vanguard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Vanguard::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002e0c510, libserver.so)
void __fastcall CDOTA_Item_Vanguard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Vanguard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Vanguard::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002e0c530, libserver.so)
bool __fastcall CDOTA_Item_Vanguard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Vanguard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Vanguard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002e0c540, libserver.so)
// globals: CDOTA_Item_Vanguard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Vanguard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Vanguard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Vanguard::s_pSchemaBinding;
}


// CDOTA_Item_Vanguard::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002e0d980, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Vanguard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Vanguard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Vanguard::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002e0e860, libserver.so)  // inlines: CDOTA_Item_Vanguard, Construct<CDOTA_Item_Vanguard>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Vanguard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Vanguard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4785950;
  }
  return p;
}


// CDOTA_Item_Vanguard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002e113c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Vanguard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Vanguard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Vanguard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002e113e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Vanguard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Vanguard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Vanguard::GetEntityClassInternal  (line 41, @0x0000000002e179a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "CDOTA_Item_Vanguard"
// globals: `guard variable for'CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass, CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass, __dso_handle, CDOTA_Item_Vanguard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VanguardClassInfo, CDOTA_Item_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VanguardClassInfo
CEntityClass *__cdecl CDOTA_Item_Vanguard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass);
    CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass._vptr_CEntityClass = off_47858D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass);
    __cxa_atexit(
      CDOTA_Item_Vanguard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_VanguardClass != 0 )
    return &CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass;
  if ( `guard variable for'CDOTA_Item_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VanguardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VanguardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VanguardClassInfo,
      "CDOTA_Item_Vanguard",
      "item_vanguard",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VanguardClassInfo);
  }
  CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass.m_pClassInfo = &CDOTA_Item_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VanguardClassInfo;
  CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass.m_pBaseClassInfo = CDOTA_Item_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VanguardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_VanguardClass = &CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass;
  CDOTA_Item_Vanguard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VanguardClassInfo.m_pClass = &CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass;
  CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_VanguardClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Vanguard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VanguardClass;
}


// CDOTA_Item_Vanguard::GetIntrinsicModifierName  (line 43, @0x0000000002e0c550, libserver.so)
// strings: "modifier_item_vanguard"
const char *__fastcall CDOTA_Item_Vanguard::GetIntrinsicModifierName(CDOTA_Item_Vanguard *const this)
{
  return "modifier_item_vanguard";
}


// CDOTA_Modifier_Item_Vanguard::~CDOTA_Modifier_Item_Vanguard  (line 51, @0x0000000002e0dbb0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Vanguard::~CDOTA_Modifier_Item_Vanguard(CDOTA_Modifier_Item_Vanguard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Vanguard::~CDOTA_Modifier_Item_Vanguard  (line 51, @0x0000000002e0dbd0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Vanguard
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Vanguard::~CDOTA_Modifier_Item_Vanguard(CDOTA_Modifier_Item_Vanguard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Vanguard::OnCreated  (line 74, @0x0000000002e084c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_health", "bonus_health_regen", "block_damage_ranged", "block_damage_melee"
void __fastcall CDOTA_Modifier_Item_Vanguard::OnCreated(CDOTA_Modifier_Item_Vanguard *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_health", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_health = 0;
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
    this->block_damage_ranged = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "block_damage_ranged", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->block_damage_melee = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->block_damage_ranged = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->block_damage_melee = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "block_damage_melee", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->block_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "block_chance", -1, 0);
    return;
  }
LABEL_11:
  this->block_chance = 0;
}


// CDOTA_Modifier_Item_Vanguard::DeclareFunctions  (line 96, @0x0000000002dffb30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Vanguard::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_Item_Vanguard::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_Vanguard::GetModifierPhysical_ConstantBlock(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Vanguard::DeclareFunctions(CDOTA_Modifier_Item_Vanguard *const this)
{
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_Vanguard::GetModifierHealthBonus;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Vanguard::GetModifierConstantHealthRegen;
  this->m_Functions[86].__pfn = CDOTA_Modifier_Item_Vanguard::GetModifierPhysical_ConstantBlock;
  this->m_Functions[86].__delta = 0;
}


// CDOTA_Modifier_Item_Vanguard::GetModifierHealthBonus  (line 103, @0x0000000002dffb90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vanguard::GetModifierHealthBonus(
        CDOTA_Modifier_Item_Vanguard *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vanguard::GetModifierConstantHealthRegen  (line 108, @0x0000000002dffbb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vanguard::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Vanguard *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Vanguard::GetModifierPhysical_ConstantBlock  (line 113, @0x0000000002e003f0, libserver.so)
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Vanguard::GetModifierPhysical_ConstantBlock(
        CDOTA_Modifier_Item_Vanguard *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rax
  __m128i v6; // xmm0
  int block_damage_melee; // edx
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  if ( !RollPseudoRandomPercentage(this->block_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_VANGUARD, Parent) )
    return 1uLL;
  Caster = CDOTA_Buff::GetCaster(this);
  block_damage_melee = this->block_damage_melee;
  if ( (Caster->m_iAttackCapabilities.m_Value & 2) != 0 )
    block_damage_melee = this->block_damage_ranged;
  *v6.m128i_i32 = block_damage_melee;
  *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  result.m_szVal = 0;
  return result;
}


