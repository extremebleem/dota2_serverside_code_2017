// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_soul_ring.cpp:27
class CDOTA_Item_Recipe_Soul_Ring : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Soul_Ring(CDOTA_Item_Recipe_Soul_Ring &);
	CDOTA_Item_Recipe_Soul_Ring(CDOTA_Item_Recipe_Soul_Ring &);
	CDOTA_Item_Recipe_Soul_Ring();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Soul_Ring();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_soul_ring.cpp:39
class CDOTA_Item_Soul_Ring : public CDOTA_Item {
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
	CDOTA_Item_Soul_Ring(CDOTA_Item_Soul_Ring &);
	CDOTA_Item_Soul_Ring(CDOTA_Item_Soul_Ring &);
	CDOTA_Item_Soul_Ring();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Soul_Ring();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_soul_ring.cpp:79
class CDOTA_Modifier_Item_Soul_Ring : public CDOTA_Buff_Item {
public:

private:

	int health_regen;  // +0xba8
	int mana_regen;  // +0xbac
	CDOTA_Modifier_Item_Soul_Ring();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Soul_Ring();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_soul_ring.cpp:132
class CDOTA_Modifier_Soul_Ring_Buff : public CDOTA_Buff {
public:

private:

	int m_iTempExtraMaxMana;  // +0xba8
	int m_iManaToRemove;  // +0xbac
	float duration;  // +0xbb0
	CDOTA_Modifier_Soul_Ring_Buff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRemoved();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	ModifierVariant_t OnSpentMana(const CModifierParams &);
	virtual int GetAttributes();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Soul_Ring_Buff();

	// vtable[57] OnCreated
	// vtable[59] OnRemoved
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// vtable[14] IsPurgable
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Soul_Ring::~CDOTA_Item_Recipe_Soul_Ring  (line 27, @0x0000000002e0f1c0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Soul_Ring::~CDOTA_Item_Recipe_Soul_Ring(CDOTA_Item_Recipe_Soul_Ring *const this)
{
  this->_vptr_IHandleEntity = &off_47748B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Soul_Ring::~CDOTA_Item_Recipe_Soul_Ring  (line 27, @0x0000000002e0f1e0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Soul_Ring
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Soul_Ring::~CDOTA_Item_Recipe_Soul_Ring(CDOTA_Item_Recipe_Soul_Ring *const this)
{
  this->_vptr_IHandleEntity = &off_47748B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Soul_Ring::Schema_DynamicBinding  (line 29, @0x0000000002e0ba60, libserver.so)
// globals: CDOTA_Item_Recipe_Soul_Ring::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Soul_Ring::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Soul_Ring *const this)
{
  return CDOTA_Item_Recipe_Soul_Ring::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002e0ba70, libserver.so)
// globals: CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002e0ba80, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Soul_Ring>
void __fastcall CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002e0baa0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002e0bac0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002e0bad0, libserver.so)
// globals: CDOTA_Item_Recipe_Soul_Ring::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Soul_Ring::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002e0d540, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002e0e530, libserver.so)  // inlines: CDOTA_Item_Recipe_Soul_Ring, Construct<CDOTA_Item_Recipe_Soul_Ring>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47748B0;
  }
  return p;
}


// CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002e10e70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002e10e90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal  (line 29, @0x0000000002e15150, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "item_recipe_soul_ring", "CDOTA_Item_Recipe_Soul_Ring"
// globals: `guard variable for'CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass, CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass, __dso_handle, CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClassInfo, CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass);
    CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass._vptr_CEntityClass = off_4774830;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Soul_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Soul_RingClass != 0 )
    return &CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClassInfo,
      "CDOTA_Item_Recipe_Soul_Ring",
      "item_recipe_soul_ring",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClassInfo);
  }
  CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass.m_pClassInfo = &CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClassInfo;
  CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Soul_RingClass = &CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass;
  CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClassInfo.m_pClass = &CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass;
  CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Soul_RingClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Soul_RingClass;
}


// CDOTA_Item_Soul_Ring::~CDOTA_Item_Soul_Ring  (line 39, @0x0000000002e0f210, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Soul_Ring::~CDOTA_Item_Soul_Ring(CDOTA_Item_Soul_Ring *const this)
{
  this->_vptr_IHandleEntity = &off_47754B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Soul_Ring::~CDOTA_Item_Soul_Ring  (line 39, @0x0000000002e0f230, libserver.so)  // inlines: ~CDOTA_Item_Soul_Ring
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Soul_Ring::~CDOTA_Item_Soul_Ring(CDOTA_Item_Soul_Ring *const this)
{
  this->_vptr_IHandleEntity = &off_47754B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Soul_Ring::Schema_DynamicBinding  (line 41, @0x0000000002e0bae0, libserver.so)
// globals: CDOTA_Item_Soul_Ring::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Soul_Ring::Schema_DynamicBinding(
        const CDOTA_Item_Soul_Ring *const this)
{
  return CDOTA_Item_Soul_Ring::s_pSchemaBinding;
}


// CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002e0baf0, libserver.so)
// globals: CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002e0bb00, libserver.so)  // inlines: Destruct<CDOTA_Item_Soul_Ring>
void __fastcall CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002e0bb20, libserver.so)
void __fastcall CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002e0bb40, libserver.so)
bool __fastcall CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002e0bb50, libserver.so)
// globals: CDOTA_Item_Soul_Ring::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Soul_Ring::s_pSchemaBinding;
}


// CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002e0d580, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002e0e560, libserver.so)  // inlines: CDOTA_Item_Soul_Ring, Construct<CDOTA_Item_Soul_Ring>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47754B0;
  }
  return p;
}


// CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002e10ec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002e10ee0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Soul_Ring::GetEntityClassInternal  (line 41, @0x0000000002e152a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_07.cpp
// strings: "CDOTA_Item_Soul_Ring"
// globals: `guard variable for'CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass, CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass, __dso_handle, CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_RingClassInfo, CDOTA_Item_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_RingClassInfo
CEntityClass *__cdecl CDOTA_Item_Soul_Ring::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass);
    CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass._vptr_CEntityClass = off_4775430;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass);
    __cxa_atexit(
      CDOTA_Item_Soul_Ring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Soul_RingClass != 0 )
    return &CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass;
  if ( `guard variable for'CDOTA_Item_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_RingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_RingClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_RingClassInfo,
      "CDOTA_Item_Soul_Ring",
      "item_soul_ring",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_RingClassInfo);
  }
  CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass.m_pClassInfo = &CDOTA_Item_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_RingClassInfo;
  CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass.m_pBaseClassInfo = CDOTA_Item_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_RingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Soul_RingClass = &CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass;
  CDOTA_Item_Soul_Ring::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Soul_RingClassInfo.m_pClass = &CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass;
  CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Soul_RingClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Soul_Ring::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Soul_RingClass;
}


// CDOTA_Item_Soul_Ring::GetIntrinsicModifierName  (line 44, @0x0000000002e0bb60, libserver.so)
// strings: "modifier_item_soul_ring"
const char *__fastcall CDOTA_Item_Soul_Ring::GetIntrinsicModifierName(CDOTA_Item_Soul_Ring *const this)
{
  return "modifier_item_soul_ring";
}


// CDOTA_Item_Soul_Ring::OnSpellStart  (line 53, @0x0000000002e08ae0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CDOTA_BaseNPC::InterruptChannel, KeyValues::~KeyValues (14 total)
// strings: "health_sacrifice", "modifier_item_soul_ring_buff", "DOTA_Item.SoulRing.Activate"
void __fastcall CDOTA_Item_Soul_Ring::OnSpellStart(CDOTA_Item_Soul_Ring *const this)
{
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  int Health; // r12d
  CDOTA_BaseNPC *v5; // rax
  float v6; // xmm1_4
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // r13
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "health_sacrifice", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  Health = CBaseEntity::GetHealth(Caster);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::ModifyHealth(v5, Health - LevelSpecialValue, 0, 0, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_item_soul_ring_buff");
  KeyValues::SetFloat(&kv, "duration", v6);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v9, OwnerEntity, this, "modifier_item_soul_ring_buff", &kv, 0);
  v10 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(1, "DOTA_Item.SoulRing.Activate", v10);
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::InterruptChannel(v11);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Item_Soul_Ring::~CDOTA_Modifier_Item_Soul_Ring  (line 79, @0x0000000002e0ded0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Soul_Ring::~CDOTA_Modifier_Item_Soul_Ring(
        CDOTA_Modifier_Item_Soul_Ring *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Soul_Ring::~CDOTA_Modifier_Item_Soul_Ring  (line 79, @0x0000000002e0def0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Soul_Ring
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Soul_Ring::~CDOTA_Modifier_Item_Soul_Ring(
        CDOTA_Modifier_Item_Soul_Ring *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Soul_Ring::OnCreated  (line 100, @0x0000000002e07fa0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_Soul_Ring::OnCreated(CDOTA_Modifier_Item_Soul_Ring *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "health_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "mana_regen", -1, 0);
      return;
    }
  }
  else
  {
    this->health_regen = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->mana_regen = 0;
}


// CDOTA_Modifier_Item_Soul_Ring::DeclareFunctions  (line 108, @0x0000000002dff2f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Soul_Ring::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_Soul_Ring::GetModifierPercentageManaRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Soul_Ring::DeclareFunctions(CDOTA_Modifier_Item_Soul_Ring *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Soul_Ring::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[54].__delta = 0;
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_Soul_Ring::GetModifierPercentageManaRegen;
}


// CDOTA_Modifier_Item_Soul_Ring::GetModifierConstantHealthRegen  (line 116, @0x0000000002dff330, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Soul_Ring::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Soul_Ring *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Soul_Ring::GetModifierPercentageManaRegen  (line 123, @0x0000000002dff350, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Soul_Ring::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_Soul_Ring *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Soul_Ring_Buff::~CDOTA_Modifier_Soul_Ring_Buff  (line 132, @0x0000000002e0e1f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Soul_Ring_Buff::~CDOTA_Modifier_Soul_Ring_Buff(
        CDOTA_Modifier_Soul_Ring_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4776390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Soul_Ring_Buff::~CDOTA_Modifier_Soul_Ring_Buff  (line 132, @0x0000000002e0e210, libserver.so)  // inlines: ~CDOTA_Modifier_Soul_Ring_Buff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Soul_Ring_Buff::~CDOTA_Modifier_Soul_Ring_Buff(
        CDOTA_Modifier_Soul_Ring_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4776390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Soul_Ring_Buff::GetAttributes  (line 144, @0x0000000002e0bb70, libserver.so)
int __fastcall CDOTA_Modifier_Soul_Ring_Buff::GetAttributes(CDOTA_Modifier_Soul_Ring_Buff *const this)
{
  return 2;
}


// CDOTA_Modifier_Soul_Ring_Buff::IsPurgable  (line 146, @0x0000000002e0bb80, libserver.so)
bool __fastcall CDOTA_Modifier_Soul_Ring_Buff::IsPurgable(CDOTA_Modifier_Soul_Ring_Buff *const this)
{
  return 0;
}


// CDOTA_Modifier_Soul_Ring_Buff::OnCreated  (line 158, @0x0000000002e0a170, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, NetworkStateChanged, Set, SetMaxMana, operator=<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, SendOverheadEventMessage, CDOTA_BaseNPC::GiveMana, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "mana_gain"
void __fastcall CDOTA_Modifier_Soul_Ring_Buff::OnCreated(CDOTA_Modifier_Soul_Ring_Buff *const this, KeyValues *pKV)
{
  int LevelSpecialValue; // r12d
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  float v6; // xmm0_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v8; // rax
  CDOTAPlayer *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTABaseAbility *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // r13
  float flMana; // [rsp+Ch] [rbp-24h]
  float flManaa; // [rsp+Ch] [rbp-24h]

  LevelSpecialValue = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "mana_gain", -1, 0);
  this->m_iManaToRemove = LevelSpecialValue;
  flMana = (LevelSpecialValue + CDOTA_Buff::GetParent(this)->m_flMana.m_Value);
  Parent = CDOTA_Buff::GetParent(this);
  v6 = LevelSpecialValue;
  if ( flMana > Parent->m_flMaxMana.m_Value )
  {
    this->m_iTempExtraMaxMana = (flMana - CDOTA_Buff::GetParent(this)->m_flMaxMana.m_Value);
    v12 = CDOTA_Buff::GetParent(this);
    v13 = v12;
    v6 = LevelSpecialValue;
    if ( flMana != v12->m_flMaxMana.m_Value )
    {
      (*(v12->_vptr_IHandleEntity + 22))(v12, 2144, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v6 = LevelSpecialValue;
      v13->m_flMaxMana.m_Value = flMana;
    }
  }
  else
  {
    this->m_iTempExtraMaxMana = 0;
  }
  flManaa = v6;
  Caster = CDOTA_Buff::GetCaster(this);
  v8 = CDOTA_Buff::GetParent(this);
  v9 = (*(v8->_vptr_IHandleEntity + 413))(v8);
  SendOverheadEventMessage(v9, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD, Caster, LevelSpecialValue, 0);
  v10 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::GiveMana(v10, flManaa, 0, 1);
  v11 = CDOTA_Buff::GetAbility(this);
  if ( v11 != 0 )
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v11, "duration", -1, 0);
  else
    this->duration = 0.0;
}


// CDOTA_Modifier_Soul_Ring_Buff::OnRemoved  (line 190, @0x0000000002e00340, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::SetMana
void __fastcall CDOTA_Modifier_Soul_Ring_Buff::OnRemoved(CDOTA_Modifier_Soul_Ring_Buff *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  float v3; // xmm1_4
  float v4; // [rsp+Ch] [rbp-14h]

  v4 = CDOTA_Buff::GetParent(this)->m_flMana.m_Value - this->m_iManaToRemove;
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::SetMana(Parent, v4, v3);
}


// CDOTA_Modifier_Soul_Ring_Buff::DeclareFunctions  (line 199, @0x0000000002dff370, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Soul_Ring_Buff::GetModifierManaBonus(CModifierParams const&), CDOTA_Modifier_Soul_Ring_Buff::OnSpentMana(CModifierParams const&)
void __fastcall CDOTA_Modifier_Soul_Ring_Buff::DeclareFunctions(CDOTA_Modifier_Soul_Ring_Buff *const this)
{
  this->m_Functions[62].__pfn = CDOTA_Modifier_Soul_Ring_Buff::GetModifierManaBonus;
  this->m_Functions[62].__delta = 0;
  this->m_Functions[140].__delta = 0;
  this->m_Functions[140].__pfn = CDOTA_Modifier_Soul_Ring_Buff::OnSpentMana;
}


// CDOTA_Modifier_Soul_Ring_Buff::GetModifierManaBonus  (line 207, @0x0000000002dff3b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Soul_Ring_Buff::GetModifierManaBonus(
        CDOTA_Modifier_Soul_Ring_Buff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_iTempExtraMaxMana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Soul_Ring_Buff::OnSpentMana  (line 214, @0x0000000002e02280, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Soul_Ring_Buff::OnSpentMana(
        CDOTA_Modifier_Soul_Ring_Buff *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  int m_iTempExtraMaxMana; // eax
  int m_iManaToRemove; // edx

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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          this->m_iManaToRemove -= params->nCost;
          m_iTempExtraMaxMana = 0;
          m_iManaToRemove = 0;
          if ( this->m_iManaToRemove >= 0 )
            m_iManaToRemove = this->m_iManaToRemove;
          this->m_iManaToRemove = m_iManaToRemove;
          this->m_iTempExtraMaxMana -= params->nCost;
          if ( this->m_iTempExtraMaxMana >= 0 )
            m_iTempExtraMaxMana = this->m_iTempExtraMaxMana;
          this->m_iTempExtraMaxMana = m_iTempExtraMaxMana;
        }
      }
    }
  }
  return 1uLL;
}


