// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_aether_lens.cpp:33
class CDOTA_Item_Recipe_Aether_Lens : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Aether_Lens(CDOTA_Item_Recipe_Aether_Lens &);
	CDOTA_Item_Recipe_Aether_Lens(CDOTA_Item_Recipe_Aether_Lens &);
	CDOTA_Item_Recipe_Aether_Lens();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Aether_Lens();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_aether_lens.cpp:45
class CDOTA_Item_Aether_Lens : public CDOTA_Item {
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
	CDOTA_Item_Aether_Lens(CDOTA_Item_Aether_Lens &);
	CDOTA_Item_Aether_Lens(CDOTA_Item_Aether_Lens &);
	CDOTA_Item_Aether_Lens();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Aether_Lens();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_aether_lens.cpp:54
class C_CDOTA_Item_Aether_Lens_MapInstall {
	C_CDOTA_Item_Aether_Lens_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_aether_lens.cpp:64
class CDOTA_Modifier_Aether_Lens : public CDOTA_Buff_Item {
public:

private:

	int bonus_mana;  // +0xba8
	int bonus_health_regen;  // +0xbac
	int spell_amp;  // +0xbb0
	int cast_range_bonus;  // +0xbb4
	CDOTA_Modifier_Aether_Lens();
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierSpellAmplify_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierCastRangeBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Aether_Lens();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Aether_Lens::~CDOTA_Item_Recipe_Aether_Lens  (line 33, @0x0000000002d641c0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Aether_Lens::~CDOTA_Item_Recipe_Aether_Lens(
        CDOTA_Item_Recipe_Aether_Lens *const this)
{
  this->_vptr_IHandleEntity = &off_4683550;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Aether_Lens::~CDOTA_Item_Recipe_Aether_Lens  (line 33, @0x0000000002d641e0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Aether_Lens
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Aether_Lens::~CDOTA_Item_Recipe_Aether_Lens(
        CDOTA_Item_Recipe_Aether_Lens *const this)
{
  this->_vptr_IHandleEntity = &off_4683550;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Aether_Lens::Schema_DynamicBinding  (line 35, @0x0000000002d60580, libserver.so)
// globals: CDOTA_Item_Recipe_Aether_Lens::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Aether_Lens::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Aether_Lens *const this)
{
  return CDOTA_Item_Recipe_Aether_Lens::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002d60590, libserver.so)
// globals: CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002d605a0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Aether_Lens>
void __fastcall CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002d605c0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002d605e0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002d605f0, libserver.so)
// globals: CDOTA_Item_Recipe_Aether_Lens::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Aether_Lens::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002d622b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002d634e0, libserver.so)  // inlines: CDOTA_Item_Recipe_Aether_Lens, Construct<CDOTA_Item_Recipe_Aether_Lens>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4683550;
  }
  return p;
}


// CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002d660e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002d66100, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal  (line 35, @0x0000000002d69db0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_recipe_aether_lens", "CDOTA_Item_Recipe_Aether_Lens"
// globals: `guard variable for'CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass, CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass, __dso_handle, CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClassInfo, CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass);
    CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass._vptr_CEntityClass = off_46834D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Aether_Lens::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Aether_LensClass != 0 )
    return &CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClassInfo,
      "CDOTA_Item_Recipe_Aether_Lens",
      "item_recipe_aether_lens",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClassInfo);
  }
  CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass.m_pClassInfo = &CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClassInfo;
  CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Aether_LensClass = &CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass;
  CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClassInfo.m_pClass = &CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass;
  CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Aether_LensClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Aether_LensClass;
}


// CDOTA_Item_Aether_Lens::~CDOTA_Item_Aether_Lens  (line 45, @0x0000000002d64210, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Aether_Lens::~CDOTA_Item_Aether_Lens(CDOTA_Item_Aether_Lens *const this)
{
  this->_vptr_IHandleEntity = &off_4684150;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Aether_Lens::~CDOTA_Item_Aether_Lens  (line 45, @0x0000000002d64230, libserver.so)  // inlines: ~CDOTA_Item_Aether_Lens
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Aether_Lens::~CDOTA_Item_Aether_Lens(CDOTA_Item_Aether_Lens *const this)
{
  this->_vptr_IHandleEntity = &off_4684150;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Aether_Lens::Schema_DynamicBinding  (line 47, @0x0000000002d60600, libserver.so)
// globals: CDOTA_Item_Aether_Lens::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Aether_Lens::Schema_DynamicBinding(
        const CDOTA_Item_Aether_Lens *const this)
{
  return CDOTA_Item_Aether_Lens::s_pSchemaBinding;
}


// CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 47, @0x0000000002d60610, libserver.so)
// globals: CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::DestructInstance  (line 47, @0x0000000002d60620, libserver.so)  // inlines: Destruct<CDOTA_Item_Aether_Lens>
void __fastcall CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::FreeInstance  (line 47, @0x0000000002d60640, libserver.so)
void __fastcall CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::CanAllocate  (line 47, @0x0000000002d60660, libserver.so)
bool __fastcall CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 47, @0x0000000002d60670, libserver.so)
// globals: CDOTA_Item_Aether_Lens::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Aether_Lens::s_pSchemaBinding;
}


// CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::AllocateInstance  (line 47, @0x0000000002d622f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::ConstructInstance  (line 47, @0x0000000002d63510, libserver.so)  // inlines: CDOTA_Item_Aether_Lens, Construct<CDOTA_Item_Aether_Lens>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4684150;
  }
  return p;
}


// CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 47, @0x0000000002d66130, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 47, @0x0000000002d66150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Aether_Lens::GetEntityClassInternal  (line 47, @0x0000000002d69f00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_Aether_Lens"
// globals: `guard variable for'CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass, CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass, __dso_handle, CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Aether_LensClassInfo, CDOTA_Item_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Aether_LensClassInfo
CEntityClass *__cdecl CDOTA_Item_Aether_Lens::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass);
    CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass._vptr_CEntityClass = off_46840D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass);
    __cxa_atexit(
      CDOTA_Item_Aether_Lens::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Aether_LensClass != 0 )
    return &CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass;
  if ( `guard variable for'CDOTA_Item_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Aether_LensClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Aether_LensClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Aether_LensClassInfo,
      "CDOTA_Item_Aether_Lens",
      "item_aether_lens",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Aether_LensClassInfo);
  }
  CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass.m_pClassInfo = &CDOTA_Item_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Aether_LensClassInfo;
  CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass.m_pBaseClassInfo = CDOTA_Item_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Aether_LensClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Aether_LensClass = &CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass;
  CDOTA_Item_Aether_Lens::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Aether_LensClassInfo.m_pClass = &CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass;
  CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Aether_LensClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Aether_Lens::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Aether_LensClass;
}


// CDOTA_Item_Aether_Lens::GetIntrinsicModifierName  (line 51, @0x0000000002d60680, libserver.so)
// strings: "modifier_item_aether_lens"
const char *__fastcall CDOTA_Item_Aether_Lens::GetIntrinsicModifierName(CDOTA_Item_Aether_Lens *const this)
{
  return "modifier_item_aether_lens";
}


// CDOTA_Item_Aether_Lens::YouForgotToImplementOrDeclareServerClass  (line 54, @0x0000000002d53af0, libserver.so)
int __fastcall CDOTA_Item_Aether_Lens::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Aether_Lens *const this)
{
  return 0;
}


// CDOTA_Item_Aether_Lens::GetServerClass  (line 54, @0x0000000002d58830, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Aether_Lens::GetServerClass(CDOTA_Item_Aether_Lens *const this)
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


// CDOTA_Modifier_Aether_Lens::~CDOTA_Modifier_Aether_Lens  (line 64, @0x0000000002d63020, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Aether_Lens::~CDOTA_Modifier_Aether_Lens(CDOTA_Modifier_Aether_Lens *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Aether_Lens::~CDOTA_Modifier_Aether_Lens  (line 64, @0x0000000002d63040, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Aether_Lens
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Aether_Lens::~CDOTA_Modifier_Aether_Lens(CDOTA_Modifier_Aether_Lens *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Aether_Lens::OnCreated  (line 86, @0x0000000002d5f530, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_mana", "bonus_health_regen", "spell_amp", "cast_range_bonus"
void __fastcall CDOTA_Modifier_Aether_Lens::OnCreated(CDOTA_Modifier_Aether_Lens *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_mana", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_mana = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_health_regen", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->spell_amp = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_health_regen = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->spell_amp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "spell_amp", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->cast_range_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "cast_range_bonus", -1, 0);
    return;
  }
LABEL_9:
  this->cast_range_bonus = 0;
}


// CDOTA_Modifier_Aether_Lens::DeclareFunctions  (line 94, @0x0000000002d53b00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Aether_Lens::GetModifierManaBonus(CModifierParams const&), CDOTA_Modifier_Aether_Lens::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Aether_Lens::GetModifierSpellAmplify_Percentage(CModifierParams const&), CDOTA_Modifier_Aether_Lens::GetModifierCastRangeBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Aether_Lens::DeclareFunctions(CDOTA_Modifier_Aether_Lens *const this)
{
  this->m_Functions[59].__pfn = CDOTA_Modifier_Aether_Lens::GetModifierManaBonus;
  this->m_Functions[59].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Aether_Lens::GetModifierConstantHealthRegen;
  this->m_Functions[31].__pfn = CDOTA_Modifier_Aether_Lens::GetModifierSpellAmplify_Percentage;
  this->m_Functions[31].__delta = 0;
  this->m_Functions[67].__pfn = CDOTA_Modifier_Aether_Lens::GetModifierCastRangeBonus;
  this->m_Functions[67].__delta = 0;
}


// CDOTA_Modifier_Aether_Lens::GetModifierManaBonus  (line 102, @0x0000000002d53b70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Aether_Lens::GetModifierManaBonus(
        CDOTA_Modifier_Aether_Lens *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Aether_Lens::GetModifierConstantHealthRegen  (line 107, @0x0000000002d53b90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Aether_Lens::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Aether_Lens *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Aether_Lens::GetModifierSpellAmplify_Percentage  (line 112, @0x0000000002d53bb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Aether_Lens::GetModifierSpellAmplify_Percentage(
        CDOTA_Modifier_Aether_Lens *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->spell_amp;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Aether_Lens::GetModifierCastRangeBonus  (line 118, @0x0000000002d57640, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CDOTABaseAbility*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Aether_Lens::GetModifierCastRangeBonus(
        CDOTA_Modifier_Aether_Lens *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  ModifierVariant_t result; // 0:rax.16

  if ( params->ability.m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->ability.m_Index & 0x1FF];
      if ( v5 != 0 && params->ability.m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 )
        {
          LODWORD(result.m_szVal) = (*(m_pInstance->_vptr_IHandleEntity + 251))(v5->m_pInstance);
          *&result.m_eType = 1;
          if ( (result.m_szVal & 0x20000) != 0 )
            goto LABEL_6;
          LOBYTE(result.m_szVal) = (*(m_pInstance->_vptr_IHandleEntity + 251))(m_pInstance);
          *&result.m_eType = 1;
          if ( (result.m_szVal & 4) != 0 )
          {
            result.m_szVal = 0;
            return result;
          }
        }
      }
    }
  }
  *v2.m128i_i32 = this->cast_range_bonus;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
LABEL_6:
  result.m_szVal = 0;
  return result;
}


