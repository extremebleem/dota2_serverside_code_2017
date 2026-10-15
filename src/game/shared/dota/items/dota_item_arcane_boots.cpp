// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_arcane_boots.cpp:27
class CDOTA_Item_Recipe_Arcane_Boots : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Arcane_Boots(CDOTA_Item_Recipe_Arcane_Boots &);
	CDOTA_Item_Recipe_Arcane_Boots(CDOTA_Item_Recipe_Arcane_Boots &);
	CDOTA_Item_Recipe_Arcane_Boots();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Arcane_Boots();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_arcane_boots.cpp:39
class CDOTA_Item_Arcane_Boots : public CDOTA_Item {
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
	CDOTA_Item_Arcane_Boots(CDOTA_Item_Arcane_Boots &);
	CDOTA_Item_Arcane_Boots(CDOTA_Item_Arcane_Boots &);
	CDOTA_Item_Arcane_Boots();
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
	virtual ~CDOTA_Item_Arcane_Boots();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_arcane_boots.cpp:55
class C_CDOTA_Item_Arcane_Boots_MapInstall {
	C_CDOTA_Item_Arcane_Boots_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_arcane_boots.cpp:107
class CDOTA_Modifier_Item_Arcane_Boots : public CDOTA_Buff_Item {
public:

private:

	int bonus_movement;  // +0xba8
	int bonus_mana;  // +0xbac
	CDOTA_Modifier_Item_Arcane_Boots();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Special_Boots(const CModifierParams &);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Arcane_Boots();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Arcane_Boots::~CDOTA_Item_Recipe_Arcane_Boots  (line 27, @0x0000000002d64300, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Arcane_Boots::~CDOTA_Item_Recipe_Arcane_Boots(
        CDOTA_Item_Recipe_Arcane_Boots *const this)
{
  this->_vptr_IHandleEntity = &off_4687710;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Arcane_Boots::~CDOTA_Item_Recipe_Arcane_Boots  (line 27, @0x0000000002d64320, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Arcane_Boots
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Arcane_Boots::~CDOTA_Item_Recipe_Arcane_Boots(
        CDOTA_Item_Recipe_Arcane_Boots *const this)
{
  this->_vptr_IHandleEntity = &off_4687710;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Arcane_Boots::Schema_DynamicBinding  (line 29, @0x0000000002d60820, libserver.so)
// globals: CDOTA_Item_Recipe_Arcane_Boots::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Arcane_Boots::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Arcane_Boots *const this)
{
  return CDOTA_Item_Recipe_Arcane_Boots::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002d60830, libserver.so)
// globals: CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002d60840, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Arcane_Boots>
void __fastcall CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002d60860, libserver.so)
void __fastcall CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002d60880, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002d60890, libserver.so)
// globals: CDOTA_Item_Recipe_Arcane_Boots::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Arcane_Boots::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002d623b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002d635a0, libserver.so)  // inlines: CDOTA_Item_Recipe_Arcane_Boots, Construct<CDOTA_Item_Recipe_Arcane_Boots>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4687710;
  }
  return p;
}


// CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d66220, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002d66240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal  (line 29, @0x0000000002d6a770, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_recipe_arcane_boots", "CDOTA_Item_Recipe_Arcane_Boots"
// globals: `guard variable for'CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass, CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass, __dso_handle, CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClassInfo, CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass);
    CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass._vptr_CEntityClass = off_4687690;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Arcane_Boots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Arcane_BootsClass != 0 )
    return &CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClassInfo,
      "CDOTA_Item_Recipe_Arcane_Boots",
      "item_recipe_arcane_boots",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClassInfo);
  }
  CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass.m_pClassInfo = &CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClassInfo;
  CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Arcane_BootsClass = &CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass;
  CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClassInfo.m_pClass = &CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass;
  CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Arcane_BootsClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Arcane_BootsClass;
}


// CDOTA_Item_Arcane_Boots::~CDOTA_Item_Arcane_Boots  (line 39, @0x0000000002d64350, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Arcane_Boots::~CDOTA_Item_Arcane_Boots(CDOTA_Item_Arcane_Boots *const this)
{
  this->_vptr_IHandleEntity = &off_4688310;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Arcane_Boots::~CDOTA_Item_Arcane_Boots  (line 39, @0x0000000002d64370, libserver.so)  // inlines: ~CDOTA_Item_Arcane_Boots
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Arcane_Boots::~CDOTA_Item_Arcane_Boots(CDOTA_Item_Arcane_Boots *const this)
{
  this->_vptr_IHandleEntity = &off_4688310;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Arcane_Boots::Schema_DynamicBinding  (line 41, @0x0000000002d608a0, libserver.so)
// globals: CDOTA_Item_Arcane_Boots::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Arcane_Boots::Schema_DynamicBinding(
        const CDOTA_Item_Arcane_Boots *const this)
{
  return CDOTA_Item_Arcane_Boots::s_pSchemaBinding;
}


// CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002d608b0, libserver.so)
// globals: CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002d608c0, libserver.so)  // inlines: Destruct<CDOTA_Item_Arcane_Boots>
void __fastcall CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002d608e0, libserver.so)
void __fastcall CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002d60900, libserver.so)
bool __fastcall CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002d60910, libserver.so)
// globals: CDOTA_Item_Arcane_Boots::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Arcane_Boots::s_pSchemaBinding;
}


// CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002d623f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002d635d0, libserver.so)  // inlines: CDOTA_Item_Arcane_Boots, Construct<CDOTA_Item_Arcane_Boots>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4688310;
  }
  return p;
}


// CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d66270, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d66290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Arcane_Boots::GetEntityClassInternal  (line 41, @0x0000000002d6a8c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_Arcane_Boots"
// globals: `guard variable for'CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass, CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass, __dso_handle, CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_BootsClassInfo, CDOTA_Item_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_BootsClassInfo
CEntityClass *__cdecl CDOTA_Item_Arcane_Boots::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass);
    CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass._vptr_CEntityClass = off_4688290;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass);
    __cxa_atexit(
      CDOTA_Item_Arcane_Boots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Arcane_BootsClass != 0 )
    return &CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass;
  if ( `guard variable for'CDOTA_Item_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_BootsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_BootsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_BootsClassInfo,
      "CDOTA_Item_Arcane_Boots",
      "item_arcane_boots",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_BootsClassInfo);
  }
  CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass.m_pClassInfo = &CDOTA_Item_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_BootsClassInfo;
  CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass.m_pBaseClassInfo = CDOTA_Item_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_BootsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Arcane_BootsClass = &CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass;
  CDOTA_Item_Arcane_Boots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Arcane_BootsClassInfo.m_pClass = &CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass;
  CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Arcane_BootsClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Arcane_Boots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Arcane_BootsClass;
}


// CDOTA_Item_Arcane_Boots::GetIntrinsicModifierName  (line 45, @0x0000000002d60920, libserver.so)
// strings: "modifier_item_arcane_boots"
const char *__fastcall CDOTA_Item_Arcane_Boots::GetIntrinsicModifierName(CDOTA_Item_Arcane_Boots *const this)
{
  return "modifier_item_arcane_boots";
}


// CDOTA_Item_Arcane_Boots::YouForgotToImplementOrDeclareServerClass  (line 55, @0x0000000002d53df0, libserver.so)
int __fastcall CDOTA_Item_Arcane_Boots::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Arcane_Boots *const this)
{
  return 0;
}


// CDOTA_Item_Arcane_Boots::GetServerClass  (line 55, @0x0000000002d588b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Arcane_Boots::GetServerClass(CDOTA_Item_Arcane_Boots *const this)
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


// CDOTA_Item_Arcane_Boots::OnSpellStart  (line 64, @0x0000000002d5e7b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CDOTA_BaseNPC::InterruptChannel, CDOTA_BaseNPC::GiveMana, SendOverheadEventMessage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (13 total)
// strings: "replenish_radius", "replenish_amount", "particles/items_fx/arcane_boots.vpcf", "DOTA_Item.ArcaneBoots.Activate", "particles/items_fx/arcane_boots_recipient.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_Arcane_Boots::OnSpellStart(CDOTA_Item_Arcane_Boots *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // eax
  __m128i v4; // xmm2
  int v5; // r14d
  float v6; // r12d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  __int64 v16; // rbx
  CHandle<CBaseEntity> *v17; // rdx
  uint32 m_Index; // eax
  __int16 v19; // cx
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_ParticleManager *v23; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTAPlayer *v27; // rax
  CDOTAPlayer *v28; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "replenish_radius", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "replenish_amount", -1, 0);
  *v4.m128i_i32 = LevelSpecialValue;
  v5 = v3;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  Caster = CDOTABaseAbility::GetCaster(this);
  v8 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  v10 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, Caster, v6, &entities, 1, 19, &stru_40050, 0, 0);
  v11 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v11) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/items_fx/arcane_boots.vpcf",
                   1,
                   v11,
                   0,
                   0);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v13, v11);
  v14 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(4, "DOTA_Item.ArcaneBoots.Activate", v14);
  v15 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::InterruptChannel(v15);
  if ( entities.m_Size > 0 )
  {
    v16 = 0;
    do
    {
      while ( 1 )
      {
        v17 = &entities.m_Memory.m_pMemory[v16];
        m_Index = v17->m_Index;
        if ( v17->m_Index + 2 > 1 )
        {
          v19 = v17->m_Index;
          v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v17->m_Index) >> 9) & 0x3F];
          if ( v20 != 0 )
          {
            v21 = &v20[v19 & 0x1FF];
            if ( v21 != 0 && m_Index == v21->m_EHandle.m_Index )
            {
              m_pInstance = v21->m_pInstance;
              if ( v21->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && m_pInstance->m_flMaxMana.m_Value > 0.0 )
              {
                CDOTA_BaseNPC::GiveMana(m_pInstance, v5, this, 1);
                v23 = GetParticleManager();
                Particle = CDOTA_ParticleManager::CreateParticle(
                             v23,
                             "particles/items_fx/arcane_boots_recipient.vpcf",
                             1,
                             m_pInstance,
                             0,
                             0);
                v25 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v25, Particle);
                v26 = CDOTABaseAbility::GetCaster(this);
                v27 = (*(v26->_vptr_IHandleEntity + 413))(v26);
                SendOverheadEventMessage(v27, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD, m_pInstance, v5, 0);
                if ( CDOTABaseAbility::GetCaster(this) != m_pInstance )
                  break;
              }
            }
          }
        }
        if ( entities.m_Size <= ++v16 )
          goto LABEL_13;
      }
      v28 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
      SendOverheadEventMessage(v28, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD, m_pInstance, v5, 0);
      ++v16;
    }
    while ( entities.m_Size > v16 );
  }
LABEL_13:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Item_Arcane_Boots::~CDOTA_Modifier_Item_Arcane_Boots  (line 107, @0x0000000002d62f80, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Arcane_Boots::~CDOTA_Modifier_Item_Arcane_Boots(
        CDOTA_Modifier_Item_Arcane_Boots *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Arcane_Boots::~CDOTA_Modifier_Item_Arcane_Boots  (line 107, @0x0000000002d62fa0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Arcane_Boots
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Arcane_Boots::~CDOTA_Modifier_Item_Arcane_Boots(
        CDOTA_Modifier_Item_Arcane_Boots *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Arcane_Boots::OnCreated  (line 128, @0x0000000002d5f070, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_movement", "bonus_mana"
void __fastcall CDOTA_Modifier_Item_Arcane_Boots::OnCreated(
        CDOTA_Modifier_Item_Arcane_Boots *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movement = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement", -1, 0);
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
    this->bonus_movement = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_mana = 0;
}


// CDOTA_Modifier_Item_Arcane_Boots::DeclareFunctions  (line 136, @0x0000000002d53e00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Arcane_Boots::GetModifierMoveSpeedBonus_Special_Boots(CModifierParams const&), CDOTA_Modifier_Item_Arcane_Boots::GetModifierManaBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Arcane_Boots::DeclareFunctions(CDOTA_Modifier_Item_Arcane_Boots *const this)
{
  this->m_Functions[16].__pfn = CDOTA_Modifier_Item_Arcane_Boots::GetModifierMoveSpeedBonus_Special_Boots;
  this->m_Functions[16].__delta = 0;
  this->m_Functions[59].__delta = 0;
  this->m_Functions[59].__pfn = CDOTA_Modifier_Item_Arcane_Boots::GetModifierManaBonus;
}


// CDOTA_Modifier_Item_Arcane_Boots::GetModifierMoveSpeedBonus_Special_Boots  (line 144, @0x0000000002d53e40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Arcane_Boots::GetModifierMoveSpeedBonus_Special_Boots(
        CDOTA_Modifier_Item_Arcane_Boots *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Arcane_Boots::GetModifierManaBonus  (line 151, @0x0000000002d53e60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Arcane_Boots::GetModifierManaBonus(
        CDOTA_Modifier_Item_Arcane_Boots *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


