// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_arcane_ring.cpp:27
class CDOTA_Item_Recipe_Arcane_Ring : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Arcane_Ring(CDOTA_Item_Recipe_Arcane_Ring &);
	CDOTA_Item_Recipe_Arcane_Ring(CDOTA_Item_Recipe_Arcane_Ring &);
	CDOTA_Item_Recipe_Arcane_Ring();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Arcane_Ring();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_arcane_ring.cpp:39
class CDOTA_Item_Arcane_Ring : public CDOTA_Item {
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
	CDOTA_Item_Arcane_Ring(CDOTA_Item_Arcane_Ring &);
	CDOTA_Item_Arcane_Ring(CDOTA_Item_Arcane_Ring &);
	CDOTA_Item_Arcane_Ring();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Arcane_Ring();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_arcane_ring.cpp:78
class CDOTA_Modifier_Item_Arcane_Ring : public CDOTA_Buff_Item {
public:

private:

	int bonus_armor;  // +0xba8
	int bonus_mana;  // +0xbac
	CDOTA_Modifier_Item_Arcane_Ring();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Arcane_Ring();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Arcane_Ring::~CDOTA_Item_Recipe_Arcane_Ring  (line 27, @0x0000000002d643a0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Arcane_Ring::~CDOTA_Item_Recipe_Arcane_Ring(
        CDOTA_Item_Recipe_Arcane_Ring *const this)
{
  this->_vptr_IHandleEntity = &off_46894B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Arcane_Ring::~CDOTA_Item_Recipe_Arcane_Ring  (line 27, @0x0000000002d643c0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Arcane_Ring
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Arcane_Ring::~CDOTA_Item_Recipe_Arcane_Ring(
        CDOTA_Item_Recipe_Arcane_Ring *const this)
{
  this->_vptr_IHandleEntity = &off_46894B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Arcane_Ring::Schema_DynamicBinding  (line 29, @0x0000000002d60930, libserver.so)
// globals: CDOTA_Item_Recipe_Arcane_Ring::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Arcane_Ring::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Arcane_Ring *const this)
{
  return CDOTA_Item_Recipe_Arcane_Ring::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002d60940, libserver.so)
// globals: CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002d60950, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Arcane_Ring>
void __fastcall CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002d60970, libserver.so)
void __fastcall CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002d60990, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002d609a0, libserver.so)
// globals: CDOTA_Item_Recipe_Arcane_Ring::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Arcane_Ring::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002d62430, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002d63600, libserver.so)  // inlines: CDOTA_Item_Recipe_Arcane_Ring, Construct<CDOTA_Item_Recipe_Arcane_Ring>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46894B0;
  }
  return p;
}


// CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d662c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d662e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal  (line 29, @0x0000000002d6ac50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_recipe_arcane_ring", "CDOTA_Item_Recipe_Arcane_Ring"
// globals: `guard variable for'CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass, CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass, __dso_handle, CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClassInfo, CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass);
    CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass._vptr_CEntityClass = off_4689430;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Arcane_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Arcane_RingClass != 0 )
    return &CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClassInfo,
      "CDOTA_Item_Recipe_Arcane_Ring",
      "item_recipe_arcane_ring",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClassInfo);
  }
  CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass.m_pClassInfo = &CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClassInfo;
  CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Arcane_RingClass = &CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass;
  CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClassInfo.m_pClass = &CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass;
  CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Arcane_RingClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_RingClass;
}


// CDOTA_Item_Arcane_Ring::~CDOTA_Item_Arcane_Ring  (line 39, @0x0000000002d643f0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Arcane_Ring::~CDOTA_Item_Arcane_Ring(CDOTA_Item_Arcane_Ring *const this)
{
  this->_vptr_IHandleEntity = &off_468A0B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Arcane_Ring::~CDOTA_Item_Arcane_Ring  (line 39, @0x0000000002d64410, libserver.so)  // inlines: ~CDOTA_Item_Arcane_Ring
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Arcane_Ring::~CDOTA_Item_Arcane_Ring(CDOTA_Item_Arcane_Ring *const this)
{
  this->_vptr_IHandleEntity = &off_468A0B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Arcane_Ring::Schema_DynamicBinding  (line 41, @0x0000000002d609b0, libserver.so)
// globals: CDOTA_Item_Arcane_Ring::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Arcane_Ring::Schema_DynamicBinding(
        const CDOTA_Item_Arcane_Ring *const this)
{
  return CDOTA_Item_Arcane_Ring::s_pSchemaBinding;
}


// CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002d609c0, libserver.so)
// globals: CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002d609d0, libserver.so)  // inlines: Destruct<CDOTA_Item_Arcane_Ring>
void __fastcall CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002d609f0, libserver.so)
void __fastcall CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002d60a10, libserver.so)
bool __fastcall CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002d60a20, libserver.so)
// globals: CDOTA_Item_Arcane_Ring::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Arcane_Ring::s_pSchemaBinding;
}


// CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002d62470, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002d63630, libserver.so)  // inlines: CDOTA_Item_Arcane_Ring, Construct<CDOTA_Item_Arcane_Ring>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_468A0B0;
  }
  return p;
}


// CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d66310, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d66330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Arcane_Ring::GetEntityClassInternal  (line 41, @0x0000000002d6ada0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_Arcane_Ring"
// globals: `guard variable for'CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass, CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass, __dso_handle, CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_RingClassInfo, CDOTA_Item_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_RingClassInfo
CEntityClass *__cdecl CDOTA_Item_Arcane_Ring::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass);
    CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass._vptr_CEntityClass = off_468A030;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass);
    __cxa_atexit(
      CDOTA_Item_Arcane_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Arcane_RingClass != 0 )
    return &CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass;
  if ( `guard variable for'CDOTA_Item_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_RingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_RingClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_RingClassInfo,
      "CDOTA_Item_Arcane_Ring",
      "item_arcane_ring",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_RingClassInfo);
  }
  CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass.m_pClassInfo = &CDOTA_Item_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_RingClassInfo;
  CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass.m_pBaseClassInfo = CDOTA_Item_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_RingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Arcane_RingClass = &CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass;
  CDOTA_Item_Arcane_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_RingClassInfo.m_pClass = &CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass;
  CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Arcane_RingClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Arcane_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_RingClass;
}


// CDOTA_Item_Arcane_Ring::GetIntrinsicModifierName  (line 43, @0x0000000002d60a30, libserver.so)
// strings: "modifier_item_arcane_ring"
const char *__fastcall CDOTA_Item_Arcane_Ring::GetIntrinsicModifierName(CDOTA_Item_Arcane_Ring *const this)
{
  return "modifier_item_arcane_ring";
}


// CDOTA_Item_Arcane_Ring::OnSpellStart  (line 52, @0x0000000002d5ea90, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetMaxMana, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::SetMana, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "replenish_radius", "replenish_amount"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Arcane_Ring::OnSpellStart(CDOTA_Item_Arcane_Ring *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // ebx
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // r14
  int v9; // r13d
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "replenish_radius", -1, 0);
  entities.m_Size = 0;
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "replenish_amount", -1, 0);
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, LevelSpecialValue, &entities, 1, 19, 16, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v10 = &entities.m_Memory.m_pMemory[v8];
        m_Index = entities.m_Memory.m_pMemory[v8].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v12 = v10->m_Index;
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[v12 & 0x1FF];
            if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        ++v9;
        ++v8;
        if ( entities.m_Size <= v9 )
          goto LABEL_11;
      }
      CDOTA_BaseNPC::SetMana(
        m_pInstance,
        fminf(m_pInstance->m_flMaxMana.m_Value, v3 + m_pInstance->m_flMana.m_Value),
        v3 + m_pInstance->m_flMana.m_Value);
      ++v9;
      ++v8;
    }
    while ( entities.m_Size > v9 );
  }
LABEL_11:
  entities.m_Size = 0;
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Modifier_Item_Arcane_Ring::~CDOTA_Modifier_Item_Arcane_Ring  (line 78, @0x0000000002d62f30, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Arcane_Ring::~CDOTA_Modifier_Item_Arcane_Ring(
        CDOTA_Modifier_Item_Arcane_Ring *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Arcane_Ring::~CDOTA_Modifier_Item_Arcane_Ring  (line 78, @0x0000000002d62f50, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Arcane_Ring
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Arcane_Ring::~CDOTA_Modifier_Item_Arcane_Ring(
        CDOTA_Modifier_Item_Arcane_Ring *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Arcane_Ring::OnCreated  (line 99, @0x0000000002d5f220, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_mana"
void __fastcall CDOTA_Modifier_Item_Arcane_Ring::OnCreated(CDOTA_Modifier_Item_Arcane_Ring *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_armor", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_mana", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_armor = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_mana = 0;
}


// CDOTA_Modifier_Item_Arcane_Ring::DeclareFunctions  (line 107, @0x0000000002d53e80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Arcane_Ring::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Item_Arcane_Ring::GetModifierManaBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Arcane_Ring::DeclareFunctions(CDOTA_Modifier_Item_Arcane_Ring *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Arcane_Ring::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[59].__delta = 0;
  this->m_Functions[59].__pfn = CDOTA_Modifier_Item_Arcane_Ring::GetModifierManaBonus;
}


// CDOTA_Modifier_Item_Arcane_Ring::GetModifierPhysicalArmorBonus  (line 115, @0x0000000002d53ec0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Arcane_Ring::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Arcane_Ring *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Arcane_Ring::GetModifierManaBonus  (line 122, @0x0000000002d53ee0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Arcane_Ring::GetModifierManaBonus(
        CDOTA_Modifier_Item_Arcane_Ring *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


