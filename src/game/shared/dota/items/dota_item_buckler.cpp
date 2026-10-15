// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_buckler.cpp:27
class CDOTA_Item_Recipe_Buckler : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Buckler(CDOTA_Item_Recipe_Buckler &);
	CDOTA_Item_Recipe_Buckler(CDOTA_Item_Recipe_Buckler &);
	CDOTA_Item_Recipe_Buckler();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Buckler();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_buckler.cpp:39
class CDOTA_Item_Buckler : public CDOTA_Item {
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
	CDOTA_Item_Buckler(CDOTA_Item_Buckler &);
	CDOTA_Item_Buckler(CDOTA_Item_Buckler &);
	CDOTA_Item_Buckler();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Buckler();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_buckler.cpp:54
class C_CDOTA_Item_Buckler_MapInstall {
	C_CDOTA_Item_Buckler_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_buckler.cpp:98
class CDOTA_Modifier_Item_Buckler : public CDOTA_Buff_Item {
public:

private:

	int bonus_armor;  // +0xba8
	int bonus_all_stats;  // +0xbac
	CDOTA_Modifier_Item_Buckler();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Buckler();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_buckler.cpp:169
class CDOTA_Modifier_Item_Buckler_Effect : public CDOTA_Buff {
public:

private:

	int bonus_aoe_armor;  // +0xba8
	CDOTA_Modifier_Item_Buckler_Effect();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonusUniqueActive(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Item_Buckler_Effect();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Buckler::~CDOTA_Item_Recipe_Buckler  (line 27, @0x0000000002d85d70, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Buckler::~CDOTA_Item_Recipe_Buckler(CDOTA_Item_Recipe_Buckler *const this)
{
  this->_vptr_IHandleEntity = &off_46B47F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Buckler::~CDOTA_Item_Recipe_Buckler  (line 27, @0x0000000002d85d90, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Buckler
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Buckler::~CDOTA_Item_Recipe_Buckler(CDOTA_Item_Recipe_Buckler *const this)
{
  this->_vptr_IHandleEntity = &off_46B47F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Buckler::Schema_DynamicBinding  (line 29, @0x0000000002d80bb0, libserver.so)
// globals: CDOTA_Item_Recipe_Buckler::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Buckler::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Buckler *const this)
{
  return CDOTA_Item_Recipe_Buckler::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002d80bc0, libserver.so)
// globals: CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002d80bd0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Buckler>
void __fastcall CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002d80bf0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002d80c10, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002d80c20, libserver.so)
// globals: CDOTA_Item_Recipe_Buckler::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Buckler::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002d83530, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002d84b30, libserver.so)  // inlines: CDOTA_Item_Recipe_Buckler, Construct<CDOTA_Item_Recipe_Buckler>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46B47F0;
  }
  return p;
}


// CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d883e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d88400, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Buckler::GetEntityClassInternal  (line 29, @0x0000000002d8f480, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_buckler", "CDOTA_Item_Recipe_Buckler"
// globals: `guard variable for'CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass, CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass, __dso_handle, CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BucklerClassInfo, CDOTA_Item_Recipe_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BucklerClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Buckler::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass);
    CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass._vptr_CEntityClass = off_46B4770;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Buckler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_BucklerClass != 0 )
    return &CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BucklerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BucklerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BucklerClassInfo,
      "CDOTA_Item_Recipe_Buckler",
      "item_recipe_buckler",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BucklerClassInfo);
  }
  CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass.m_pClassInfo = &CDOTA_Item_Recipe_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BucklerClassInfo;
  CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BucklerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_BucklerClass = &CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass;
  CDOTA_Item_Recipe_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BucklerClassInfo.m_pClass = &CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass;
  CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_BucklerClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BucklerClass;
}


// CDOTA_Item_Buckler::~CDOTA_Item_Buckler  (line 39, @0x0000000002d85dc0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Buckler::~CDOTA_Item_Buckler(CDOTA_Item_Buckler *const this)
{
  this->_vptr_IHandleEntity = &off_46B53F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Buckler::~CDOTA_Item_Buckler  (line 39, @0x0000000002d85de0, libserver.so)  // inlines: ~CDOTA_Item_Buckler
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Buckler::~CDOTA_Item_Buckler(CDOTA_Item_Buckler *const this)
{
  this->_vptr_IHandleEntity = &off_46B53F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Buckler::Schema_DynamicBinding  (line 41, @0x0000000002d80c30, libserver.so)
// globals: CDOTA_Item_Buckler::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Buckler::Schema_DynamicBinding(
        const CDOTA_Item_Buckler *const this)
{
  return CDOTA_Item_Buckler::s_pSchemaBinding;
}


// CDOTA_Item_Buckler::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002d80c40, libserver.so)
// globals: CDOTA_Item_Buckler::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Buckler::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Buckler::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Buckler::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Buckler::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002d80c50, libserver.so)  // inlines: Destruct<CDOTA_Item_Buckler>
void __fastcall CDOTA_Item_Buckler::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Buckler::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Buckler::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002d80c70, libserver.so)
void __fastcall CDOTA_Item_Buckler::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Buckler::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Buckler::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002d80c90, libserver.so)
bool __fastcall CDOTA_Item_Buckler::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Buckler::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Buckler::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002d80ca0, libserver.so)
// globals: CDOTA_Item_Buckler::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Buckler::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Buckler::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Buckler::s_pSchemaBinding;
}


// CDOTA_Item_Buckler::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002d83570, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Buckler::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Buckler::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Buckler::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002d84b60, libserver.so)  // inlines: CDOTA_Item_Buckler, Construct<CDOTA_Item_Buckler>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Buckler::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Buckler::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46B53F0;
  }
  return p;
}


// CDOTA_Item_Buckler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d88430, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Buckler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Buckler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Buckler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d88450, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Buckler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Buckler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Buckler::GetEntityClassInternal  (line 41, @0x0000000002d8f5d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_Buckler"
// globals: `guard variable for'CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass, CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass, __dso_handle, CDOTA_Item_Buckler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BucklerClassInfo, CDOTA_Item_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BucklerClassInfo
CEntityClass *__cdecl CDOTA_Item_Buckler::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass);
    CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass._vptr_CEntityClass = off_46B5370;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass);
    __cxa_atexit(
      CDOTA_Item_Buckler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BucklerClass != 0 )
    return &CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass;
  if ( `guard variable for'CDOTA_Item_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BucklerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BucklerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BucklerClassInfo,
      "CDOTA_Item_Buckler",
      "item_buckler",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BucklerClassInfo);
  }
  CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass.m_pClassInfo = &CDOTA_Item_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BucklerClassInfo;
  CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass.m_pBaseClassInfo = CDOTA_Item_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BucklerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BucklerClass = &CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass;
  CDOTA_Item_Buckler::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BucklerClassInfo.m_pClass = &CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass;
  CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BucklerClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Buckler::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BucklerClass;
}


// CDOTA_Item_Buckler::GetIntrinsicModifierName  (line 45, @0x0000000002d80cb0, libserver.so)
// strings: "modifier_item_buckler"
const char *__fastcall CDOTA_Item_Buckler::GetIntrinsicModifierName(CDOTA_Item_Buckler *const this)
{
  return "modifier_item_buckler";
}


// CDOTA_Item_Buckler::YouForgotToImplementOrDeclareServerClass  (line 54, @0x0000000002d6ed20, libserver.so)
int __fastcall CDOTA_Item_Buckler::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Buckler *const this)
{
  return 0;
}


// CDOTA_Item_Buckler::GetServerClass  (line 54, @0x0000000002d73c50, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Buckler::GetServerClass(CDOTA_Item_Buckler *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Item_Buckler::OnSpellStart  (line 63, @0x0000000002d7d470, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::InterruptChannel, DOTA_EmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (14 total)
// strings: "bonus_aoe_radius", "bonus_aoe_duration", "bonus_aoe_duration_hero", "modifier_item_buckler_effect", "DOTA_Item.Buckler.Activate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Buckler::OnSpellStart(CDOTA_Item_Buckler *const this)
{
  __m128i v2; // xmm1
  float v3; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // r12
  int v9; // ebx
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  float v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  KeyValues kv; // [rsp+30h] [rbp-170h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v22; // [rsp+168h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_aoe_radius", -1, 0);
  entities.m_Size = 0;
  entities.m_Memory.m_nAllocationCount = 64;
  entities.m_Memory.m_nGrowSize = 0x80000000;
  entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, v3, &entities, 1, 19, 16, 0, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "bonus_aoe_duration", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "bonus_aoe_duration_hero", -1, 0);
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
      KeyValues::KeyValues(&kv, "modifier_item_buckler_effect");
      KeyValues::SetFloat(&kv, "duration", v16);
      v17 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v17, this, "modifier_item_buckler_effect", &kv, 0);
      ++v9;
      ++v8;
      KeyValues::~KeyValues(&kv);
    }
    while ( entities.m_Size > v9 );
  }
LABEL_11:
  v18 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::InterruptChannel(v18);
  v19 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.Buckler.Activate", v19);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Item_Buckler::~CDOTA_Modifier_Item_Buckler  (line 98, @0x0000000002d84230, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Buckler::~CDOTA_Modifier_Item_Buckler(CDOTA_Modifier_Item_Buckler *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Buckler::~CDOTA_Modifier_Item_Buckler  (line 98, @0x0000000002d84250, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Buckler
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Buckler::~CDOTA_Modifier_Item_Buckler(CDOTA_Modifier_Item_Buckler *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Buckler::OnCreated  (line 121, @0x0000000002d7ba70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_all_stats"
void __fastcall CDOTA_Modifier_Item_Buckler::OnCreated(CDOTA_Modifier_Item_Buckler *const this, KeyValues *pKV)
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
      this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_all_stats", -1, 0);
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
  this->bonus_all_stats = 0;
}


// CDOTA_Modifier_Item_Buckler::DeclareFunctions  (line 129, @0x0000000002d6ed30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Buckler::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Item_Buckler::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_Buckler::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_Buckler::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Buckler::DeclareFunctions(CDOTA_Modifier_Item_Buckler *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Buckler::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Buckler::GetModifierBonusStats_Strength;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_Buckler::GetModifierBonusStats_Agility;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Buckler::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Item_Buckler::GetModifierPhysicalArmorBonus  (line 139, @0x0000000002d6eda0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Buckler::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Buckler *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Buckler::GetModifierBonusStats_Strength  (line 146, @0x0000000002d6edc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Buckler::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Buckler *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Buckler::GetModifierBonusStats_Agility  (line 153, @0x0000000002d6ede0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Buckler::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_Buckler *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Buckler::GetModifierBonusStats_Intellect  (line 160, @0x0000000002d6ee00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Buckler::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Buckler *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_all_stats;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Buckler_Effect::~CDOTA_Modifier_Item_Buckler_Effect  (line 169, @0x0000000002d84730, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Buckler_Effect::~CDOTA_Modifier_Item_Buckler_Effect(
        CDOTA_Modifier_Item_Buckler_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_46B62D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Buckler_Effect::~CDOTA_Modifier_Item_Buckler_Effect  (line 169, @0x0000000002d84750, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Buckler_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Buckler_Effect::~CDOTA_Modifier_Item_Buckler_Effect(
        CDOTA_Modifier_Item_Buckler_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_46B62D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Buckler_Effect::GetEffectName  (line 178, @0x0000000002d80cc0, libserver.so)
// strings: "particles/items_fx/buckler.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Buckler_Effect::GetEffectName(
        CDOTA_Modifier_Item_Buckler_Effect *const this)
{
  return "particles/items_fx/buckler.vpcf";
}


// CDOTA_Modifier_Item_Buckler_Effect::OnCreated  (line 189, @0x0000000002d7b6b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_aoe_armor"
void __fastcall CDOTA_Modifier_Item_Buckler_Effect::OnCreated(
        CDOTA_Modifier_Item_Buckler_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_aoe_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_aoe_armor", -1, 0);
  else
    this->bonus_aoe_armor = 0;
}


// CDOTA_Modifier_Item_Buckler_Effect::DeclareFunctions  (line 197, @0x0000000002d6ee20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Buckler_Effect::GetModifierPhysicalArmorBonusUniqueActive(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Buckler_Effect::DeclareFunctions(CDOTA_Modifier_Item_Buckler_Effect *const this)
{
  this->m_Functions[47].__pfn = CDOTA_Modifier_Item_Buckler_Effect::GetModifierPhysicalArmorBonusUniqueActive;
  this->m_Functions[47].__delta = 0;
}


// CDOTA_Modifier_Item_Buckler_Effect::GetModifierPhysicalArmorBonusUniqueActive  (line 204, @0x0000000002d6ee40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Buckler_Effect::GetModifierPhysicalArmorBonusUniqueActive(
        CDOTA_Modifier_Item_Buckler_Effect *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_aoe_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


